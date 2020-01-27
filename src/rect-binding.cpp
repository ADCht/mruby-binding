#include "rect-binding.h"

mrb_value RectInitialize(mrb_state* mrb, mrb_value self)
{
	if (mrb_get_argc(mrb) <= 0)
	{
		// TODO: add your code here.

	}
	else
	{
		mrb_int x = 0;
		mrb_int y = 0;
		mrb_int width = 0;
		mrb_int height = 0;
		mrb_get_args(mrb, "iiii", &x, &y, &width, &height);
		// TODO: add your code here.

	}
	return mrb_nil_value();
}

mrb_value RectSet(mrb_state* mrb, mrb_value self)
{
	if (mrb_get_argc(mrb) <= 1)
	{
		mrb_value rect;
		mrb_get_args(mrb, "o", &rect);
		// TODO: add your code here.

	}
	else
	{
		mrb_int x = 0;
		mrb_int y = 0;
		mrb_int width = 0;
		mrb_int height = 0;
		mrb_get_args(mrb, "iiii", &x, &y, &width, &height);
		// TODO: add your code here.

	}
	return mrb_nil_value();
}

mrb_value RectEmpty(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value RectGetX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value RectSetX(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

mrb_value RectGetY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value RectSetY(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

mrb_value RectGetWidth(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value RectSetWidth(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

mrb_value RectGetHeight(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value RectSetHeight(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

void Init_Rect(mrb_state* mrb)
{
	RClass* pRect = mrb_define_class(mrb, "Rect", mrb->object_class);
	mrb_define_method(mrb, pRect, "initialize", &RectInitialize, MRB_ARGS_OPT(4));
	mrb_define_method(mrb, pRect, "set", &RectSet, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(3));
	mrb_define_method(mrb, pRect, "empty", &RectEmpty, MRB_ARGS_NONE());

	mrb_define_method(mrb, pRect, "x", &RectGetX, MRB_ARGS_NONE());
	mrb_define_method(mrb, pRect, "x=", &RectSetX, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pRect, "y", &RectGetY, MRB_ARGS_NONE());
	mrb_define_method(mrb, pRect, "y=", &RectSetY, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pRect, "width", &RectGetWidth, MRB_ARGS_NONE());
	mrb_define_method(mrb, pRect, "width=", &RectSetWidth, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pRect, "height", &RectGetHeight, MRB_ARGS_NONE());
	mrb_define_method(mrb, pRect, "height=", &RectSetHeight, MRB_ARGS_REQ(1));
}

void Final_Rect(mrb_state* mrb)
{
	return;
}