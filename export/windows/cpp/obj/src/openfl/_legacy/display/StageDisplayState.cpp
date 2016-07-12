#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_StageDisplayState
#include <openfl/_legacy/display/StageDisplayState.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::StageDisplayState StageDisplayState_obj::FULL_SCREEN;

::openfl::_legacy::display::StageDisplayState StageDisplayState_obj::FULL_SCREEN_INTERACTIVE;

::openfl::_legacy::display::StageDisplayState StageDisplayState_obj::NORMAL;

HX_DEFINE_CREATE_ENUM(StageDisplayState_obj)

int StageDisplayState_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")) return 1;
	if (inName==HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23")) return 2;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	return super::__FindIndex(inName);
}

int StageDisplayState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")) return 0;
	if (inName==HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23")) return 0;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StageDisplayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")) return FULL_SCREEN;
	if (inName==HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23")) return FULL_SCREEN_INTERACTIVE;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return NORMAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18"),
	HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageDisplayState_obj::FULL_SCREEN,"FULL_SCREEN");
	HX_MARK_MEMBER_NAME(StageDisplayState_obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_MARK_MEMBER_NAME(StageDisplayState_obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageDisplayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageDisplayState_obj::FULL_SCREEN,"FULL_SCREEN");
	HX_VISIT_MEMBER_NAME(StageDisplayState_obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_VISIT_MEMBER_NAME(StageDisplayState_obj::NORMAL,"NORMAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class StageDisplayState_obj::__mClass;

Dynamic __Create_StageDisplayState_obj() { return new StageDisplayState_obj; }

void StageDisplayState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.StageDisplayState","\x9d","\x2a","\x48","\x8e"), hx::TCanCast< StageDisplayState_obj >,sStaticFields,sMemberFields,
	&__Create_StageDisplayState_obj, &__Create,
	&super::__SGetClass(), &CreateStageDisplayState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void StageDisplayState_obj::__boot()
{
hx::Static(FULL_SCREEN) = hx::CreateEnum< StageDisplayState_obj >(HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18"),1);
hx::Static(FULL_SCREEN_INTERACTIVE) = hx::CreateEnum< StageDisplayState_obj >(HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23"),2);
hx::Static(NORMAL) = hx::CreateEnum< StageDisplayState_obj >(HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
