#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::CENTER;

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::LEFT;

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::NONE;

::openfl::_legacy::text::TextFieldAutoSize TextFieldAutoSize_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(TextFieldAutoSize_obj)

int TextFieldAutoSize_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 1;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 2;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 3;
	return super::__FindIndex(inName);
}

int TextFieldAutoSize_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TextFieldAutoSize_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return CENTER;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TextFieldAutoSize_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TextFieldAutoSize_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TextFieldAutoSize_obj::__mClass;

Dynamic __Create_TextFieldAutoSize_obj() { return new TextFieldAutoSize_obj; }

void TextFieldAutoSize_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.text.TextFieldAutoSize","\x80","\x20","\x7c","\x12"), hx::TCanCast< TextFieldAutoSize_obj >,sStaticFields,sMemberFields,
	&__Create_TextFieldAutoSize_obj, &__Create,
	&super::__SGetClass(), &CreateTextFieldAutoSize_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TextFieldAutoSize_obj::__boot()
{
hx::Static(CENTER) = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),0);
hx::Static(LEFT) = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),1);
hx::Static(NONE) = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),2);
hx::Static(RIGHT) = hx::CreateEnum< TextFieldAutoSize_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),3);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace text
