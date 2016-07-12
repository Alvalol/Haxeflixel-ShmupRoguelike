#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#include <flixel/input/gamepad/FlxGamepadDeadZoneMode.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxGamepadDeadZoneMode FlxGamepadDeadZoneMode_obj::CIRCULAR;

::flixel::input::gamepad::FlxGamepadDeadZoneMode FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES;

HX_DEFINE_CREATE_ENUM(FlxGamepadDeadZoneMode_obj)

int FlxGamepadDeadZoneMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CIRCULAR","\x5f","\x36","\x58","\x69")) return 1;
	if (inName==HX_HCSTRING("INDEPENDENT_AXES","\x6a","\x31","\x50","\x25")) return 0;
	return super::__FindIndex(inName);
}

int FlxGamepadDeadZoneMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CIRCULAR","\x5f","\x36","\x58","\x69")) return 0;
	if (inName==HX_HCSTRING("INDEPENDENT_AXES","\x6a","\x31","\x50","\x25")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxGamepadDeadZoneMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CIRCULAR","\x5f","\x36","\x58","\x69")) return CIRCULAR;
	if (inName==HX_HCSTRING("INDEPENDENT_AXES","\x6a","\x31","\x50","\x25")) return INDEPENDENT_AXES;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("INDEPENDENT_AXES","\x6a","\x31","\x50","\x25"),
	HX_HCSTRING("CIRCULAR","\x5f","\x36","\x58","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::CIRCULAR,"CIRCULAR");
	HX_MARK_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES,"INDEPENDENT_AXES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::CIRCULAR,"CIRCULAR");
	HX_VISIT_MEMBER_NAME(FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES,"INDEPENDENT_AXES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxGamepadDeadZoneMode_obj::__mClass;

Dynamic __Create_FlxGamepadDeadZoneMode_obj() { return new FlxGamepadDeadZoneMode_obj; }

void FlxGamepadDeadZoneMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.input.gamepad.FlxGamepadDeadZoneMode","\xe5","\xe8","\x21","\x95"), hx::TCanCast< FlxGamepadDeadZoneMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxGamepadDeadZoneMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGamepadDeadZoneMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxGamepadDeadZoneMode_obj::__boot()
{
hx::Static(CIRCULAR) = hx::CreateEnum< FlxGamepadDeadZoneMode_obj >(HX_HCSTRING("CIRCULAR","\x5f","\x36","\x58","\x69"),1);
hx::Static(INDEPENDENT_AXES) = hx::CreateEnum< FlxGamepadDeadZoneMode_obj >(HX_HCSTRING("INDEPENDENT_AXES","\x6a","\x31","\x50","\x25"),0);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
