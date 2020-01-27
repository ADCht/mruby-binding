#include "graphics-binding.h"

mrb_value GraphicsUpdate(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsWait(mrb_state* mrb, mrb_value self)
{
	mrb_int duration = 0;
	mrb_get_args(mrb, "i", &duration);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsFadeOut(mrb_state* mrb, mrb_value self)
{
	mrb_int duration = 0;
	mrb_get_args(mrb, "i", &duration);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsFadeIn(mrb_state* mrb, mrb_value self)
{
	mrb_int duration = 0;
	mrb_get_args(mrb, "i", &duration);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsFreeze(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsTransition(mrb_state* mrb, mrb_value self)
{
	mrb_int duration = 0;
	char* filename = 0;
	mrb_int vague = 0;
	mrb_get_args(mrb, "|izi", &duration, &filename, &vague);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsSnapToBitmap(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsFrameReset(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsWidth(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value GraphicsHeight(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value GraphicsResizeScreen(mrb_state* mrb, mrb_value self)
{
	mrb_int width = 0;
	mrb_int height = 0;
	mrb_get_args(mrb, "ii", &width, &height);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsPlayMovie(mrb_state* mrb, mrb_value self)
{
	char* filename = 0;
	mrb_get_args(mrb, "z", &filename);
	// TODO: 我知道你实现不了。

	return self;
}

mrb_value GraphicsGetFrameRate(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsSetFrameRate(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsGetFrameCount(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsSetFrameCount(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsGetBrightness(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value GraphicsSetBrightness(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

void Init_Graphics(mrb_state* mrb)
{
	RClass* pGraphics = mrb_define_module(mrb, "Graphics");
	mrb_define_module_function(mrb, pGraphics, "update", &GraphicsUpdate, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, pGraphics, "wait", &GraphicsWait, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, pGraphics, "fadeout", &GraphicsFadeOut, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, pGraphics, "fadein", &GraphicsFadeIn, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, pGraphics, "freeze", &GraphicsFreeze, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, pGraphics, "transition", &GraphicsTransition, MRB_ARGS_OPT(3));
	mrb_define_module_function(mrb, pGraphics, "snap_to_bitmap", &GraphicsSnapToBitmap, MRB_ARGS_NONE());

	mrb_define_module_function(mrb, pGraphics, "frame_rate", &GraphicsGetFrameRate, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, pGraphics, "frame_rate=", &GraphicsSetFrameRate, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, pGraphics, "frame_count", &GraphicsGetFrameCount, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, pGraphics, "frame_count=", &GraphicsSetFrameCount, MRB_ARGS_REQ(1));
	mrb_define_module_function(mrb, pGraphics, "frame_brightness", &GraphicsGetBrightness, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, pGraphics, "frame_brightness=", &GraphicsSetBrightness, MRB_ARGS_REQ(1));
}

void Final_Graphics(mrb_state* mrb)
{
	return;
}
