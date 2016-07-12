#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::PixelSnapping PixelSnapping_obj::ALWAYS;

::openfl::_legacy::display::PixelSnapping PixelSnapping_obj::AUTO;

::openfl::_legacy::display::PixelSnapping PixelSnapping_obj::NEVER;

HX_DEFINE_CREATE_ENUM(PixelSnapping_obj)

int PixelSnapping_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")) return 2;
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return 1;
	if (inName==HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")) return 0;
	return super::__FindIndex(inName);
}

int PixelSnapping_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")) return 0;
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return 0;
	if (inName==HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic PixelSnapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")) return ALWAYS;
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return AUTO;
	if (inName==HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")) return NEVER;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelSnapping_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(PixelSnapping_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(PixelSnapping_obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(PixelSnapping_obj::NEVER,"NEVER");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class PixelSnapping_obj::__mClass;

Dynamic __Create_PixelSnapping_obj() { return new PixelSnapping_obj; }

void PixelSnapping_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.PixelSnapping","\xb2","\x48","\xb0","\xa8"), hx::TCanCast< PixelSnapping_obj >,sStaticFields,sMemberFields,
	&__Create_PixelSnapping_obj, &__Create,
	&super::__SGetClass(), &CreatePixelSnapping_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void PixelSnapping_obj::__boot()
{
hx::Static(ALWAYS) = hx::CreateEnum< PixelSnapping_obj >(HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),2);
hx::Static(AUTO) = hx::CreateEnum< PixelSnapping_obj >(HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),1);
hx::Static(NEVER) = hx::CreateEnum< PixelSnapping_obj >(HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
