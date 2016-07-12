#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::CapsStyle CapsStyle_obj::NONE;

::openfl::_legacy::display::CapsStyle CapsStyle_obj::ROUND;

::openfl::_legacy::display::CapsStyle CapsStyle_obj::SQUARE;

HX_DEFINE_CREATE_ENUM(CapsStyle_obj)

int CapsStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 1;
	if (inName==HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")) return 0;
	if (inName==HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")) return 2;
	return super::__FindIndex(inName);
}

int CapsStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")) return 0;
	if (inName==HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CapsStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")) return ROUND;
	if (inName==HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")) return SQUARE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CapsStyle_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CapsStyle_obj::ROUND,"ROUND");
	HX_MARK_MEMBER_NAME(CapsStyle_obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CapsStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CapsStyle_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CapsStyle_obj::ROUND,"ROUND");
	HX_VISIT_MEMBER_NAME(CapsStyle_obj::SQUARE,"SQUARE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class CapsStyle_obj::__mClass;

Dynamic __Create_CapsStyle_obj() { return new CapsStyle_obj; }

void CapsStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.CapsStyle","\xa0","\x93","\xb1","\x2e"), hx::TCanCast< CapsStyle_obj >,sStaticFields,sMemberFields,
	&__Create_CapsStyle_obj, &__Create,
	&super::__SGetClass(), &CreateCapsStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CapsStyle_obj::__boot()
{
hx::Static(NONE) = hx::CreateEnum< CapsStyle_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),1);
hx::Static(ROUND) = hx::CreateEnum< CapsStyle_obj >(HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),0);
hx::Static(SQUARE) = hx::CreateEnum< CapsStyle_obj >(HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),2);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
