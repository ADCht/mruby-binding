#include "table-binding.h"

#include "binding-util.h"

Table::Table(int x, int y /*= 1*/, int z /*= 1*/)
	: xs(x), ys(y), zs(z),
	data(x* y* z)
{
	return;
}

Table::Table(const Table& other)
	: xs(other.xs), ys(other.ys), zs(other.zs),
	data(other.data)
{
	return;
}

int16_t Table::get(int x, int y, int z) const
{
	return data[xs * ys * z + xs * y + x];
}

void Table::set(int16_t value, int x, int y, int z)
{
	if (x < 0 || x >= xs
		|| y < 0 || y >= ys
		|| z < 0 || z >= zs)
	{
		return;
	}

	data[xs * ys * z + xs * y + x] = value;
}

void Table::resize(int x, int y, int z)
{
	if (x == xs && y == ys && z == zs)
		return;

	std::vector<int16_t> newData(x * y * z);

	for (int k = 0; k < std::min(z, zs); ++k)
		for (int j = 0; j < std::min(y, ys); ++j)
			for (int i = 0; i < std::min(x, xs); ++i)
				newData[x * y * k + x * j + i] = at(i, j, k);

	data.swap(newData);

	xs = x;
	ys = y;
	zs = z;

	return;
}

void Table::resize(int x, int y)
{
	resize(x, y, zs);
}

void Table::resize(int x)
{
	resize(x, ys, zs);
}

//---------------------------------------------------------------------

mrb_value TableInitialize(mrb_state* mrb, mrb_value self)
{
	GET_OBJ_TYPE(Table);
	mrb_int x, y, z;
	x = y = z = 1;
	mrb_get_args(mrb, "i|ii", &x, &y, &z);

	Table* t = new Table(x, y, z);

	setPrivateData(self, t, TableType);
	mrb_iv_set(mrb, self, mrb_intern_lit(mrb, "pointer"), mrb_fixnum_value((int)(void*)t));

	return self;
}

mrb_value TableResize(mrb_state* mrb, mrb_value self)
{
	Table* t = getPrivateData<Table>(mrb, self);

	mrb_int x, y, z;
	mrb_get_args(mrb, "i|ii", &x, &y, &z);

	switch (mrb_get_argc(mrb))
	{
	default:
	case 1:
		t->resize(x);
	case 2:
		t->resize(x, y);
	case 3:
		t->resize(x, y, z);
	}
	return mrb_nil_value();
}

mrb_value TableXSize(mrb_state* mrb, mrb_value self)
{
	Table* t = getPrivateData<Table>(mrb, self);

	return mrb_fixnum_value(t->xSize());
}

mrb_value TableYSize(mrb_state* mrb, mrb_value self)
{
	Table* t = getPrivateData<Table>(mrb, self);

	return mrb_fixnum_value(t->ySize());
}

mrb_value TableZSize(mrb_state* mrb, mrb_value self)
{
	Table* t = getPrivateData<Table>(mrb, self);

	return mrb_fixnum_value(t->zSize());
}

mrb_value TableGet(mrb_state* mrb, mrb_value self)
{
	Table* t = getPrivateData<Table>(mrb, self);

	mrb_int x, y, z;
	x = y = z = 0;

	mrb_get_args(mrb, "i|ii", &x, &y, &z);

	if (x < 0 || x >= t->xSize()
		|| y < 0 || y >= t->ySize()
		|| z < 0 || z >= t->zSize())
	{
		return mrb_nil_value();
	}

	mrb_int result = t->get(x, y, z);

	return mrb_fixnum_value(result);
}

mrb_value TableSet(mrb_state* mrb, mrb_value self)
{
	Table* t = getPrivateData<Table>(mrb, self);

	int argc;
	mrb_value* argv;
	mrb_int x, y, z, value;
	x = y = z = 0;

	mrb_get_args(mrb, "*", &argv, &argc);

	if (argc < 2)
		mrb_raise(mrb, E_ARGUMENT_ERROR, "wrong number of arguments");

	switch (argc)
	{
	default:
	case 2:
		x = mrb_int(mrb, argv[0]);
		value = mrb_int(mrb, argv[1]);

		break;
	case 3:
		x = mrb_int(mrb, argv[0]);
		y = mrb_int(mrb, argv[1]);
		value = mrb_int(mrb, argv[2]);

		break;
	case 4:
		x = mrb_int(mrb, argv[0]);
		y = mrb_int(mrb, argv[1]);
		z = mrb_int(mrb, argv[2]);
		value = mrb_int(mrb, argv[3]);

		break;
	}

	t->set(value, x, y, z);

	return mrb_fixnum_value(value);
}

void Init_Table(mrb_state* mrb)
{
	RClass* pTable = mrb_define_class(mrb, "Table", mrb->object_class);

	mrb_define_method(mrb, pTable, "initialize", &TableInitialize, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(2));
	mrb_define_method(mrb, pTable, "resize", &TableResize, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(2));
	mrb_define_method(mrb, pTable, "xsize", &TableXSize, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTable, "ysize", &TableYSize, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTable, "zsize", &TableZSize, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTable, "[]", &TableGet, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(2));
	mrb_define_method(mrb, pTable, "[]=", &TableSet, MRB_ARGS_REQ(2) | MRB_ARGS_OPT(2));
}

void Init_Final(mrb_state* mrb)
{
	return;
}