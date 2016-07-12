#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

::openfl::_legacy::text::FontType FontType_obj::DEVICE;

::openfl::_legacy::text::FontType FontType_obj::EMBEDDED;

::openfl::_legacy::text::FontType FontType_obj::EMBEDDED_CFF;

HX_DEFINE_CREATE_ENUM(FontType_obj)

int FontType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23")) return 0;
	if (inName==HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37")) return 1;
	if (inName==HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23")) return 2;
	return super::__FindIndex(inName);
}

int FontType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23")) return 0;
	if (inName==HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37")) return 0;
	if (inName==HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FontType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23")) return DEVICE;
	if (inName==HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37")) return EMBEDDED;
	if (inName==HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23")) return EMBEDDED_CFF;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23"),
	HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37"),
	HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontType_obj::DEVICE,"DEVICE");
	HX_MARK_MEMBER_NAME(FontType_obj::EMBEDDED,"EMBEDDED");
	HX_MARK_MEMBER_NAME(FontType_obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontType_obj::DEVICE,"DEVICE");
	HX_VISIT_MEMBER_NAME(FontType_obj::EMBEDDED,"EMBEDDED");
	HX_VISIT_MEMBER_NAME(FontType_obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FontType_obj::__mClass;

Dynamic __Create_FontType_obj() { return new FontType_obj; }

void FontType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.text.FontType","\xc6","\xd9","\xb6","\xae"), hx::TCanCast< FontType_obj >,sStaticFields,sMemberFields,
	&__Create_FontType_obj, &__Create,
	&super::__SGetClass(), &CreateFontType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FontType_obj::__boot()
{
hx::Static(DEVICE) = hx::CreateEnum< FontType_obj >(HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23"),0);
hx::Static(EMBEDDED) = hx::CreateEnum< FontType_obj >(HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37"),1);
hx::Static(EMBEDDED_CFF) = hx::CreateEnum< FontType_obj >(HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23"),2);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace text
