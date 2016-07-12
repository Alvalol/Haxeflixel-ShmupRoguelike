#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_StageAlign
#include <openfl/_legacy/display/StageAlign.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::StageAlign StageAlign_obj::BOTTOM;

::openfl::_legacy::display::StageAlign StageAlign_obj::BOTTOM_LEFT;

::openfl::_legacy::display::StageAlign StageAlign_obj::BOTTOM_RIGHT;

::openfl::_legacy::display::StageAlign StageAlign_obj::LEFT;

::openfl::_legacy::display::StageAlign StageAlign_obj::RIGHT;

::openfl::_legacy::display::StageAlign StageAlign_obj::TOP;

::openfl::_legacy::display::StageAlign StageAlign_obj::TOP_LEFT;

::openfl::_legacy::display::StageAlign StageAlign_obj::TOP_RIGHT;

HX_DEFINE_CREATE_ENUM(StageAlign_obj)

int StageAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")) return 7;
	if (inName==HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10")) return 6;
	if (inName==HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93")) return 5;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 4;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 3;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 2;
	if (inName==HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b")) return 1;
	if (inName==HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f")) return 0;
	return super::__FindIndex(inName);
}

int StageAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")) return 0;
	if (inName==HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10")) return 0;
	if (inName==HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 0;
	if (inName==HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b")) return 0;
	if (inName==HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic StageAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")) return BOTTOM;
	if (inName==HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10")) return BOTTOM_LEFT;
	if (inName==HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93")) return BOTTOM_RIGHT;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return TOP;
	if (inName==HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b")) return TOP_LEFT;
	if (inName==HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f")) return TOP_RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f"),
	HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93"),
	HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageAlign_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(StageAlign_obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(StageAlign_obj::TOP_LEFT,"TOP_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_obj::TOP_RIGHT,"TOP_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::TOP_LEFT,"TOP_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_obj::TOP_RIGHT,"TOP_RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class StageAlign_obj::__mClass;

Dynamic __Create_StageAlign_obj() { return new StageAlign_obj; }

void StageAlign_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.StageAlign","\xd7","\x7e","\xae","\xd8"), hx::TCanCast< StageAlign_obj >,sStaticFields,sMemberFields,
	&__Create_StageAlign_obj, &__Create,
	&super::__SGetClass(), &CreateStageAlign_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void StageAlign_obj::__boot()
{
hx::Static(BOTTOM) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),7);
hx::Static(BOTTOM_LEFT) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10"),6);
hx::Static(BOTTOM_RIGHT) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93"),5);
hx::Static(LEFT) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),4);
hx::Static(RIGHT) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),3);
hx::Static(TOP) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),2);
hx::Static(TOP_LEFT) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b"),1);
hx::Static(TOP_RIGHT) = hx::CreateEnum< StageAlign_obj >(HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f"),0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
