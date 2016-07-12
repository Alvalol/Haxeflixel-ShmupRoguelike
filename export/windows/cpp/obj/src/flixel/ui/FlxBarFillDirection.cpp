#include <hxcpp.h>

#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
namespace flixel{
namespace ui{

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::BOTTOM_TO_TOP;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::LEFT_TO_RIGHT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::RIGHT_TO_LEFT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::TOP_TO_BOTTOM;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT;

::flixel::ui::FlxBarFillDirection FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN;

HX_DEFINE_CREATE_ENUM(FlxBarFillDirection_obj)

int FlxBarFillDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3")) return 3;
	if (inName==HX_HCSTRING("HORIZONTAL_INSIDE_OUT","\x26","\x1a","\x06","\xee")) return 4;
	if (inName==HX_HCSTRING("HORIZONTAL_OUTSIDE_IN","\xda","\xa4","\xa6","\x68")) return 5;
	if (inName==HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07")) return 0;
	if (inName==HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b")) return 1;
	if (inName==HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32")) return 2;
	if (inName==HX_HCSTRING("VERTICAL_INSIDE_OUT","\xd4","\xa3","\x4c","\x1d")) return 6;
	if (inName==HX_HCSTRING("VERTICAL_OUTSIDE_IN","\x88","\x2e","\xed","\x97")) return 7;
	return super::__FindIndex(inName);
}

int FlxBarFillDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3")) return 0;
	if (inName==HX_HCSTRING("HORIZONTAL_INSIDE_OUT","\x26","\x1a","\x06","\xee")) return 0;
	if (inName==HX_HCSTRING("HORIZONTAL_OUTSIDE_IN","\xda","\xa4","\xa6","\x68")) return 0;
	if (inName==HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07")) return 0;
	if (inName==HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b")) return 0;
	if (inName==HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32")) return 0;
	if (inName==HX_HCSTRING("VERTICAL_INSIDE_OUT","\xd4","\xa3","\x4c","\x1d")) return 0;
	if (inName==HX_HCSTRING("VERTICAL_OUTSIDE_IN","\x88","\x2e","\xed","\x97")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxBarFillDirection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3")) return BOTTOM_TO_TOP;
	if (inName==HX_HCSTRING("HORIZONTAL_INSIDE_OUT","\x26","\x1a","\x06","\xee")) return HORIZONTAL_INSIDE_OUT;
	if (inName==HX_HCSTRING("HORIZONTAL_OUTSIDE_IN","\xda","\xa4","\xa6","\x68")) return HORIZONTAL_OUTSIDE_IN;
	if (inName==HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07")) return LEFT_TO_RIGHT;
	if (inName==HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b")) return RIGHT_TO_LEFT;
	if (inName==HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32")) return TOP_TO_BOTTOM;
	if (inName==HX_HCSTRING("VERTICAL_INSIDE_OUT","\xd4","\xa3","\x4c","\x1d")) return VERTICAL_INSIDE_OUT;
	if (inName==HX_HCSTRING("VERTICAL_OUTSIDE_IN","\x88","\x2e","\xed","\x97")) return VERTICAL_OUTSIDE_IN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07"),
	HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b"),
	HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32"),
	HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3"),
	HX_HCSTRING("HORIZONTAL_INSIDE_OUT","\x26","\x1a","\x06","\xee"),
	HX_HCSTRING("HORIZONTAL_OUTSIDE_IN","\xda","\xa4","\xa6","\x68"),
	HX_HCSTRING("VERTICAL_INSIDE_OUT","\xd4","\xa3","\x4c","\x1d"),
	HX_HCSTRING("VERTICAL_OUTSIDE_IN","\x88","\x2e","\xed","\x97"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT,"HORIZONTAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN,"HORIZONTAL_OUTSIDE_IN");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT,"VERTICAL_INSIDE_OUT");
	HX_MARK_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN,"VERTICAL_OUTSIDE_IN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::BOTTOM_TO_TOP,"BOTTOM_TO_TOP");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_INSIDE_OUT,"HORIZONTAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::HORIZONTAL_OUTSIDE_IN,"HORIZONTAL_OUTSIDE_IN");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::LEFT_TO_RIGHT,"LEFT_TO_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::RIGHT_TO_LEFT,"RIGHT_TO_LEFT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::TOP_TO_BOTTOM,"TOP_TO_BOTTOM");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_INSIDE_OUT,"VERTICAL_INSIDE_OUT");
	HX_VISIT_MEMBER_NAME(FlxBarFillDirection_obj::VERTICAL_OUTSIDE_IN,"VERTICAL_OUTSIDE_IN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxBarFillDirection_obj::__mClass;

Dynamic __Create_FlxBarFillDirection_obj() { return new FlxBarFillDirection_obj; }

void FlxBarFillDirection_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.ui.FlxBarFillDirection","\x93","\x96","\xf4","\x4c"), hx::TCanCast< FlxBarFillDirection_obj >,sStaticFields,sMemberFields,
	&__Create_FlxBarFillDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxBarFillDirection_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxBarFillDirection_obj::__boot()
{
hx::Static(BOTTOM_TO_TOP) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("BOTTOM_TO_TOP","\x85","\xec","\xed","\xb3"),3);
hx::Static(HORIZONTAL_INSIDE_OUT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("HORIZONTAL_INSIDE_OUT","\x26","\x1a","\x06","\xee"),4);
hx::Static(HORIZONTAL_OUTSIDE_IN) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("HORIZONTAL_OUTSIDE_IN","\xda","\xa4","\xa6","\x68"),5);
hx::Static(LEFT_TO_RIGHT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("LEFT_TO_RIGHT","\x30","\x11","\x7b","\x07"),0);
hx::Static(RIGHT_TO_LEFT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("RIGHT_TO_LEFT","\xc8","\x1d","\x8d","\x7b"),1);
hx::Static(TOP_TO_BOTTOM) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("TOP_TO_BOTTOM","\xe5","\x52","\x9a","\x32"),2);
hx::Static(VERTICAL_INSIDE_OUT) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("VERTICAL_INSIDE_OUT","\xd4","\xa3","\x4c","\x1d"),6);
hx::Static(VERTICAL_OUTSIDE_IN) = hx::CreateEnum< FlxBarFillDirection_obj >(HX_HCSTRING("VERTICAL_OUTSIDE_IN","\x88","\x2e","\xed","\x97"),7);
}


} // end namespace flixel
} // end namespace ui
