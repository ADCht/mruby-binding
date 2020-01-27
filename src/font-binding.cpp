#include "font-binding.h"

mrb_value FontInitialize(mrb_state* mrb, mrb_value self)
{
	char* name = 0;
	mrb_int size = 24;
	mrb_get_args(mrb, "|zi", &name, &size);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontExist(mrb_state* mrb, mrb_value self) // Static Method
{
	char* name = 0;
	mrb_get_args(mrb, "z", &name);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetName(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetName(mrb_state* mrb, mrb_value self)
{
	char* value = 0;
	mrb_get_args(mrb, "z", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetSize(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetSize(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetBold(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetBold(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetItalic(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetItalic(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetOutline(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetOutline(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetShadow(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetShadow(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetColor(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetColor(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetOutColor(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetOutColor(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

// ----------------------- Static Method -----------------------
mrb_value FontGetNameDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetNameDef(mrb_state* mrb, mrb_value self)
{
	char* value = 0;
	mrb_get_args(mrb, "z", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetSizeDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetSizeDef(mrb_state* mrb, mrb_value self)
{
	mrb_int value = 0;
	mrb_get_args(mrb, "i", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetBoldDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetBoldDef(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetItalicDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetItalicDef(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetOutlineDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetOutlineDef(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetShadowDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetShadowDef(mrb_state* mrb, mrb_value self)
{
	mrb_bool value = 0;
	mrb_get_args(mrb, "b", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetColorDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetColorDef(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontGetOutColorDef(mrb_state* mrb, mrb_value self)
{
	// TODO: add your code here.

	return mrb_nil_value();
}

mrb_value FontSetOutColorDef(mrb_state* mrb, mrb_value self)
{
	mrb_value value;
	mrb_get_args(mrb, "o", &value);
	// TODO: add your code here.

	return mrb_nil_value();
}

void Init_Font(mrb_state* mrb)
{
	RClass* pFont = mrb_define_class(mrb, "Font", mrb->object_class);

	mrb_define_method(mrb, pFont, "initialize", &FontInitialize, MRB_ARGS_OPT(2));
	mrb_define_class_method(mrb, pFont, "exist?", &FontExist, MRB_ARGS_REQ(1));

	mrb_define_method(mrb, pFont, "name", &FontGetName, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "name=", &FontSetName, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "size", &FontGetSize, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "size=", &FontSetSize, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "bold", &FontGetBold, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "bold=", &FontSetBold, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "italic", &FontGetItalic, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "italic=", &FontSetItalic, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "outline", &FontGetOutline, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "outline=", &FontSetOutline, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "shadow", &FontGetShadow, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "shadow=", &FontSetShadow, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "color", &FontGetColor, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "color=", &FontSetColor, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, pFont, "out_color", &FontGetOutColor, MRB_ARGS_NONE());
	mrb_define_method(mrb, pFont, "out_color=", &FontSetOutColor, MRB_ARGS_REQ(1));

	mrb_define_class_method(mrb, pFont, "default_name", &FontGetNameDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_name=", &FontSetNameDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_size", &FontGetSizeDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_size=", &FontSetSizeDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_bold", &FontGetBoldDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_bold=", &FontSetBoldDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_italic", &FontGetItalicDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_italic=", &FontSetItalicDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_outline", &FontGetOutlineDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_outline=", &FontSetOutlineDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_shadow", &FontGetShadowDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_shadow=", &FontSetShadowDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_color", &FontGetColorDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_color=", &FontSetColorDef, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, pFont, "default_out_color", &FontGetOutColorDef, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, pFont, "default_out_color=", &FontSetOutColorDef, MRB_ARGS_REQ(1));
}

void Final_Font(mrb_state* mrb)
{
	return;
}