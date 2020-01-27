#include "sprite-binding.h"

mrb_value SpriteInitialize(mrb_state* mrb, mrb_value self)
{
	mrb_value viewport;
	mrb_get_args(mrb, "|o", &viewport);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteDispose(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteDisposed(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteWidth(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value SpriteHeight(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_fixnum_value(0);
}

mrb_value SpriteFlash(mrb_state* mrb, mrb_value self)
{
	mrb_value color;
	mrb_int duration = 0;
	mrb_get_args(mrb, "oi", &color, &duration);
	// TODO: add your code here.

	return self;
}

mrb_value SpriteUpdate(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return self;
}

mrb_value SpriteGetBitmap(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetBitmap(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetSrcRect(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetSrcRect(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetViewport(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetViewport(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetVisible(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetVisible(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = false;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetX(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetY(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetZ(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetZ(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetOX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetOX(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetOY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetOY(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetZoomX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetZoomX(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetZoomY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetZoomY(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetAngle(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetAngle(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetZoomY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetZoomY(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetOpacity(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetOpacity(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetBlendType(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetBlendType(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetColor(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetColor(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteGetTone(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value SpriteSetTone(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

void Init_Sprite(mrb_state* mrb)
{
	RClass* pSprite = mrb_define_class(mrb, "Sprite", mrb->object_class);

	mrb_define_method(mrb, pSprite, "initialize", &SpriteInitialize, MRB_ARGS_OPT(1));
	mrb_define_method(mrb, pSprite, "dispose", &SpriteDispose, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "disposed?", &SpriteDisposed, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "width", &SpriteWidth, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "height", &SpriteHeight, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "flash", &SpriteFlash, MRB_ARGS_REQ(2));
	mrb_define_method(mrb, pSprite, "update", &SpriteUpdate, MRB_ARGS_NONE());

	mrb_define_method(mrb, pSprite, "bitmap", &SpriteGetBitmap, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "bitmap=", &SpriteSetBitmap, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "src_rect", &SpriteGetSrcRect, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "src_rect=", &SpriteSetSrcRect, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "viewport", &SpriteGetViewport, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "viewport=", &SpriteSetViewport, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "visible", &SpriteGetVisible, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "visible=", &SpriteSetVisible, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "x", &SpriteGetZ, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "x=", &SpriteSetZ, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "y", &SpriteGetZ, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "y=", &SpriteSetZ, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "z", &SpriteGetZ, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "z=", &SpriteSetZ, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "ox", &SpriteGetOX, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "ox=", &SpriteSetOX, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "oy", &SpriteGetOY, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "oy=", &SpriteSetOY, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "zoom_x", &SpriteGetZoomX, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "zoom_x=", &SpriteSetZoomX, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "zoom_y", &SpriteGetZoomY, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "zoom_y=", &SpriteSetZoomY, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "angle", &SpriteGetAngle, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "angle=", &SpriteSetAngle, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "wave_amp", &SpriteGetWaveAmp, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "wave_amp=", &SpriteSetWaveAmp, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "wave_length", &SpriteGetWaveLength, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "wave_length=", &SpriteSetWaveLength, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "wave_speed", &SpriteGetWaveSpeed, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "wave_speed=", &SpriteSetWaveSpeed, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "wave_phase", &SpriteGetWavePhase, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "wave_phase=", &SpriteSetWavePhase, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "mirror", &SpriteGetMirror, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "mirror=", &SpriteSetMirror, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "bush_depth", &SpriteGetBushDepth, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "bush_depth=", &SpriteSetBushDepth, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "bush_opacity", &SpriteGetBushOpacity, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "bush_opacity=", &SpriteSetBushOpacity, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "opacity", &SpriteGetOpacity, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "opacity=", &SpriteSetOpacity, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "blend_type", &SpriteGetBlendType, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "blent_type=", &SpriteSetBlendType, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "color", &SpriteGetColor, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "color=", &SpriteSetColor, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pSprite, "tone", &SpriteGetTone, MRB_ARGS_NONE());
	mrb_define_method(mrb, pSprite, "tone=", &SpriteSetTone, MRB_ARGS_REQ(1));
}

void Final_Sprite(mrb_state* mrb)
{
	return;
}