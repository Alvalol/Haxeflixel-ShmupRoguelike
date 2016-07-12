#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::EXACT_FIT;

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::NO_BORDER;

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::NO_SCALE;

::openfl::_legacy::display::StageScaleMode StageScaleMode_obj::SHOW_ALL;

HX_DEFINE_CREATE_ENUM(StageScaleMode_obj)

int StageScaleMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79")) return 3;
	if (inName==HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71")) return 2;
	if (inName==HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35")) return 1;
	if (inName==HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a")) return 0;
	return super::__FindIndex(inName);
}

int StageScaleMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79")) return 0;
	if (inName==HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71")) return 0;
	if (inName==HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35")) return 0;
	if (inName==HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StageScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79")) return EXACT_FIT;
	if (inName==HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71")) return NO_BORDER;
	if (inName==HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35")) return NO_SCALE;
	if (inName==HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a")) return SHOW_ALL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a"),
	HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35"),
	HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71"),
	HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::EXACT_FIT,"EXACT_FIT");
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::NO_BORDER,"NO_BORDER");
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::NO_SCALE,"NO_SCALE");
	HX_MARK_MEMBER_NAME(StageScaleMode_obj::SHOW_ALL,"SHOW_ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::EXACT_FIT,"EXACT_FIT");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::NO_BORDER,"NO_BORDER");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::NO_SCALE,"NO_SCALE");
	HX_VISIT_MEMBER_NAME(StageScaleMode_obj::SHOW_ALL,"SHOW_ALL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class StageScaleMode_obj::__mClass;

Dynamic __Create_StageScaleMode_obj() { return new StageScaleMode_obj; }

void StageScaleMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.StageScaleMode","\x1f","\x74","\xdb","\x99"), hx::TCanCast< StageScaleMode_obj >,sStaticFields,sMemberFields,
	&__Create_StageScaleMode_obj, &__Create,
	&super::__SGetClass(), &CreateStageScaleMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void StageScaleMode_obj::__boot()
{
hx::Static(EXACT_FIT) = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("EXACT_FIT","\xd1","\x38","\xee","\x79"),3);
hx::Static(NO_BORDER) = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("NO_BORDER","\x6a","\x40","\x33","\x71"),2);
hx::Static(NO_SCALE) = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("NO_SCALE","\xac","\xb8","\x22","\x35"),1);
hx::Static(SHOW_ALL) = hx::CreateEnum< StageScaleMode_obj >(HX_HCSTRING("SHOW_ALL","\x7f","\x39","\x6f","\x2a"),0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
