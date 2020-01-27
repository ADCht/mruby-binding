#include "tone-binding.h"

mrb_value ToneInitialize(mrb_state* mrb, mrb_value self)
{
	if (mrb_get_argc(mrb))
	{
		mrb_float red = 0;
		mrb_float green = 0;
		mrb_float blue = 0;
		mrb_float grey = 0;
		mrb_get_args(mrb, "fff|f", &red, &green, &blue, &grey);
		// TODO: add your code here.

	}
	else
	{
		mrb_float red = 0;
		mrb_float green = 0;
		mrb_float blue = 0;
		mrb_float grey = 0;
		// TODO: add your code here.

	}
	return mrb_nil_value();
}

mrb_value ToneSet(mrb_state* mrb, mrb_value self)
{
	if (mrb_get_argc(mrb) <= 1)
	{
		mrb_value Tone;
		mrb_get_args(mrb, "o", &Tone);
		// TODO: add your code here.

	}
	else
	{
		mrb_float red = 0;
		mrb_float green = 0;
		mrb_float blue = 0;
		mrb_float grey = 0;
		mrb_get_args(mrb, "fff|f", &red, &green, &blue, &grey);
		// TODO: add your code here.

	}
	return mrb_nil_value();
}

mrb_value ToneGetRed(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneSetRed(mrb_state* mrb, mrb_value self)
{
	mrb_float red = 0;
	mrb_get_args(mrb, "f", &red);
	if (red > 255) red = 255;
	if (red < 0) red = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneGetGreen(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneSetGreen(mrb_state* mrb, mrb_value self)
{
	mrb_float green = 0;
	mrb_get_args(mrb, "f", &green);
	if (green > 255) green = 255;
	if (green < 0) green = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneGetBlue(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneSetBlue(mrb_state* mrb, mrb_value self)
{
	mrb_float blue = 0;
	mrb_get_args(mrb, "f", &blue);
	if (blue > 255) blue = 255;
	if (blue < 0) blue = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneGetgrey(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ToneSetgrey(mrb_state* mrb, mrb_value self)
{
	mrb_float grey = 0;
	mrb_get_args(mrb, "f", &grey);
	if (grey > 255) grey = 255;
	if (grey < 0) grey = 0;
	// TODO: add your code here.

	return mrb_nil_value();
}

void Init_Tone(mrb_state* mrb)
{
	RClass* pTone = mrb_define_class(mrb, "Tone", mrb->object_class);

	mrb_define_method(mrb, pTone, "initialize", &ToneInitialize, MRB_ARGS_OPT(4));
	mrb_define_method(mrb, pTone, "set", &ToneSet, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(3));

	mrb_define_method(mrb, pTone, "red", &ToneGetRed, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTone, "red=", &ToneSetRed, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pTone, "green", &ToneGetGreen, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTone, "green=", &ToneSetGreen, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pTone, "blue", &ToneGetBlue, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTone, "blue=", &ToneSetBlue, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pTone, "grey", &ToneGetgrey, MRB_ARGS_NONE());
	mrb_define_method(mrb, pTone, "grey=", &ToneSetgrey, MRB_ARGS_REQ(1));
}

void Final_Tone(mrb_state* mrb)
{
	return;
}
