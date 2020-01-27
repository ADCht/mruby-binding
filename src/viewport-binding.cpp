#include "viewport-binding.h"

mrb_value ViewportInitialize(mrb_state* mrb, mrb_value self)
{
	switch (mrb_get_argc(mrb))
	{
	case 0:
		// TODO: add your code here.

		break;
	case 1:
		mrb_value rect;
		mrb_get_args(mrb, "o", &rect);
		// TODO: add your code here.

		break;
	default:
		mrb_int x = 0;
		mrb_int y = 0;
		mrb_int width = 0;
		mrb_int height = 0;
		mrb_get_args(mrb, "iiii", &x, &y, &width, &height);
		// TODO: add your code here.

		break;
	}
	return mrb_nil_value();
}

mrb_value ViewportDispose(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ViewportDisposed(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ViewportFlash(mrb_state* mrb, mrb_value self)
{
	mrb_value color;
	mrb_int duration = 0;
	mrb_get_args(mrb, "oi", &color, &duration);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportUpdate(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetRect(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ViewportSetRect(mrb_state* mrb, mrb_value self)
{
	mrb_value rect;
	mrb_get_args(mrb, "o", &rect);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetVisible(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_bool_value(false);
}

mrb_value ViewportSetVisible(mrb_state* mrb, mrb_value self)
{
	mrb_bool value;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetZ(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value ViewportSetZ(mrb_state* mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetOX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value ViewportSetOX(mrb_state* mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetOY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value ViewportSetOY(mrb_state* mrb, mrb_value self)
{
	mrb_int value;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetColor(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ViewportSetColor(mrb_state* mrb, mrb_value self)
{
	mrb_value color;
	mrb_get_args(mrb, "o", &color);
	// TODO: add your code here.

	return self;
}

mrb_value ViewportGetTone(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value ViewportSetTone(mrb_state* mrb, mrb_value self)
{
	mrb_value tone;
	mrb_get_args(mrb, "o", &tone);
	// TODO: add your code here.

	return self;
}

void Init_Viewport(mrb_state* mrb)
{
	RClass* pViewport = mrb_define_class(mrb, "Viewport", mrb->object_class);

	mrb_define_method(mrb, pViewport, "initialize", &ViewportInitialize, MRB_ARGS_OPT(4));
	mrb_define_method(mrb, pViewport, "dispose", &ViewportDispose, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "disposed?", &ViewportDisposed, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "flash", &ViewportFlash, MRB_ARGS_REQ(2));
	mrb_define_method(mrb, pViewport, "update", &ViewportUpdate, MRB_ARGS_NONE());

	mrb_define_method(mrb, pViewport, "rect", &ViewportGetRect, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "rect=", &ViewportSetRect, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pViewport, "visible", &ViewportGetVisible, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "visible=", &ViewportSetVisible, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pViewport, "z", &ViewportGetZ, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "z=", &ViewportSetZ, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pViewport, "ox", &ViewportGetOX, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "ox=", &ViewportSetOX, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pViewport, "oy", &ViewportGetOY, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "oy=", &ViewportSetOY, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pViewport, "color", &ViewportGetColor, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "color=", &ViewportSetColor, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pViewport, "tone", &ViewportGetTone, MRB_ARGS_NONE());
	mrb_define_method(mrb, pViewport, "tone=", &ViewportSetTone, MRB_ARGS_REQ(1));
}

void Final_Viewport(mrb_state* mrb)
{
	return;
}