#include "plane-binding.h"

mrb_value PlaneInitialize(mrb_state* mrb, mrb_value self)
{
	mrb_value viewport;
	mrb_get_args(mrb, "|o", &viewport);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneDispose(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneDisposed(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetBitmap(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetBitmap(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetViewport(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetViewport(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetVisible(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetVisible(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = false;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetZ(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetZ(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetOX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetOX(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetOY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetOY(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetZoomX(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetZoomX(mrb_state* mrb, mrb_value self)
{
	mrb_float value = 0;
	mrb_get_args(mrb, "f", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetZoomY(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetZoomY(mrb_state* mrb, mrb_value self)
{
	mrb_float value = 0;
	mrb_get_args(mrb, "f", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetOpacity(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetOpacity(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetBlendType(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetBlendType(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetColor(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetColor(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneGetTone(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value PlaneSetTone(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

void Init_Plane(mrb_state* mrb)
{
	RClass* pPlane = mrb_define_class(mrb, "Plane", mrb->object_class);

	mrb_define_method(mrb, pPlane, "initialize", &PlaneInitialize, MRB_ARGS_OPT(1));
	mrb_define_method(mrb, pPlane, "dispose", &PlaneDispose, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "disposed?", &PlaneDisposed, MRB_ARGS_NONE());

	mrb_define_method(mrb, pPlane, "bitmap", &PlaneGetBitmap, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "bitmap=", &PlaneSetBitmap, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "viewport", &PlaneGetViewport, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "viewport=", &PlaneSetViewport, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "visible", &PlaneGetVisible, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "visible=", &PlaneSetVisible, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "z", &PlaneGetZ, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "z=", &PlaneSetZ, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "ox", &PlaneGetOX, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "ox=", &PlaneSetOX, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "oy", &PlaneGetOY, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "oy=", &PlaneSetOY, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "zoom_x", &PlaneGetZoomX, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "zoom_x=", &PlaneSetZoomX, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "zoom_y", &PlaneGetZoomY, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "zoom_y=", &PlaneSetZoomY, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "opacity", &PlaneGetOpacity, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "opacity=", &PlaneSetOpacity, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "blend_type", &PlaneGetBlendType, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "blent_type=", &PlaneSetBlendType, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "color", &PlaneGetColor, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "color=", &PlaneSetColor, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pPlane, "tone", &PlaneGetTone, MRB_ARGS_NONE());
	mrb_define_method(mrb, pPlane, "tone=", &PlaneSetTone, MRB_ARGS_REQ(1));
}

void Final_Plane(mrb_state* mrb)
{
	return;
}
