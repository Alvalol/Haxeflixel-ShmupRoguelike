#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_StageQuality
#include <openfl/_legacy/display/StageQuality.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::StageQuality StageQuality_obj::BEST;

::openfl::_legacy::display::StageQuality StageQuality_obj::HIGH;

::openfl::_legacy::display::StageQuality StageQuality_obj::LOW;

::openfl::_legacy::display::StageQuality StageQuality_obj::MEDIUM;

HX_DEFINE_CREATE_ENUM(StageQuality_obj)

int StageQuality_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b")) return 3;
	if (inName==HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f")) return 2;
	if (inName==HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00")) return 0;
	if (inName==HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1")) return 1;
	return super::__FindIndex(inName);
}

int StageQuality_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b")) return 0;
	if (inName==HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f")) return 0;
	if (inName==HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00")) return 0;
	if (inName==HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StageQuality_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b")) return BEST;
	if (inName==HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f")) return HIGH;
	if (inName==HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00")) return LOW;
	if (inName==HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1")) return MEDIUM;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00"),
	HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1"),
	HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f"),
	HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageQuality_obj::BEST,"BEST");
	HX_MARK_MEMBER_NAME(StageQuality_obj::HIGH,"HIGH");
	HX_MARK_MEMBER_NAME(StageQuality_obj::LOW,"LOW");
	HX_MARK_MEMBER_NAME(StageQuality_obj::MEDIUM,"MEDIUM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageQuality_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageQuality_obj::BEST,"BEST");
	HX_VISIT_MEMBER_NAME(StageQuality_obj::HIGH,"HIGH");
	HX_VISIT_MEMBER_NAME(StageQuality_obj::LOW,"LOW");
	HX_VISIT_MEMBER_NAME(StageQuality_obj::MEDIUM,"MEDIUM");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class StageQuality_obj::__mClass;

Dynamic __Create_StageQuality_obj() { return new StageQuality_obj; }

void StageQuality_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.StageQuality","\x51","\xd5","\x10","\xdb"), hx::TCanCast< StageQuality_obj >,sStaticFields,sMemberFields,
	&__Create_StageQuality_obj, &__Create,
	&super::__SGetClass(), &CreateStageQuality_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void StageQuality_obj::__boot()
{
hx::Static(BEST) = hx::CreateEnum< StageQuality_obj >(HX_HCSTRING("BEST","\x24","\xb9","\xd4","\x2b"),3);
hx::Static(HIGH) = hx::CreateEnum< StageQuality_obj >(HX_HCSTRING("HIGH","\x62","\xff","\xce","\x2f"),2);
hx::Static(LOW) = hx::CreateEnum< StageQuality_obj >(HX_HCSTRING("LOW","\x74","\xf0","\x39","\x00"),0);
hx::Static(MEDIUM) = hx::CreateEnum< StageQuality_obj >(HX_HCSTRING("MEDIUM","\x75","\x00","\x4b","\xb1"),1);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
