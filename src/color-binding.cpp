#include "color-binding.h"

mrb_value ColorInitialize(mrb_state* mrb, mrb_value self)
{
	if (mrb_get_argc(mrb))
	{
		mrb_int red = 0;
		mrb_int green = 0;
		mrb_int blue = 0;
		mrb_int alpha = 255;
		mrb_get_args(mrb, "iii|i", &red, &green, &blue, &alpha);
		// TODO: add your code here.

	}
	else
	{
		mrb_int red = 0;
		mrb_int green = 0;
		mrb_int blue = 0;
		mrb_int alpha = 0;
		// TODO: add your code here.

	}
	return mrb_nil_value();
}

mrb_value ColorSet(mrb_state* mrb, mrb_value self)
{
	if (mrb_get_argc(mrb) <= 1)
	{
		mrb_value color;
		mrb_get_args(mrb, "o", &color);
		// TODO: add your code here.

	}
	else
	{
		mrb_int red = 0;
		mrb_int green = 0;
		mrb_int blue = 0;
		mrb_int alpha = 255;
		mrb_get_args(mrb, "iii|i", &red, &green, &blue, &alpha);
		// TODO: add your code here.

	}
	return mrb_nil_value();
}

mrb_value ColorGetRed(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorSetRed(mrb_state* mrb, mrb_value self)
{
	mrb_int red = 0;
	mrb_get_args(mrb, "i", &red);
	if (red > 255) red = 255;
	if (red < 0) red = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorGetGreen(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorSetGreen(mrb_state* mrb, mrb_value self)
{
	mrb_int green = 0;
	mrb_get_args(mrb, "i", &green);
	if (green > 255) green = 255;
	if (green < 0) green = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorGetBlue(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorSetBlue(mrb_state* mrb, mrb_value self)
{
	mrb_int blue = 0;
	mrb_get_args(mrb, "i", &blue);
	if (blue > 255) blue = 255;
	if (blue < 0) blue = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorGetAlpha(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ColorSetAlpha(mrb_state* mrb, mrb_value self)
{
	mrb_int alpha = 0;
	mrb_get_args(mrb, "i", &alpha);
	if (alpha > 255) alpha = 255;
	if (alpha < 0) alpha = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

void Init_Color(mrb_state* mrb)
{
	RClass* pColor = mrb_define_class(mrb, "Color", mrb->object_class);

	mrb_define_method(mrb, pColor, "initialize", &ColorInitialize, MRB_ARGS_OPT(4));
	mrb_define_method(mrb, pColor, "set", &ColorSet, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(3));

	mrb_define_method(mrb, pColor, "red", &ColorGetRed, MRB_ARGS_NONE());
	mrb_define_method(mrb, pColor, "red=", &ColorSetRed, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pColor, "green", &ColorGetGreen, MRB_ARGS_NONE());
	mrb_define_method(mrb, pColor, "green=", &ColorSetGreen, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pColor, "blue", &ColorGetBlue, MRB_ARGS_NONE());
	mrb_define_method(mrb, pColor, "blue=", &ColorSetBlue, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pColor, "alpha", &ColorGetAlpha, MRB_ARGS_NONE());
	mrb_define_method(mrb, pColor, "alpha=", &ColorSetAlpha, MRB_ARGS_REQ(1));
}

void Final_Color(mrb_state* mrb)
{
	return;
}