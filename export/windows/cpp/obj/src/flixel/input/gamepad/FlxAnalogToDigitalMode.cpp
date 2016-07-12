#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxAnalogToDigitalMode FlxAnalogToDigitalMode_obj::BOTH;

::flixel::input::gamepad::FlxAnalogToDigitalMode FlxAnalogToDigitalMode_obj::ONLY_ANALOG;

::flixel::input::gamepad::FlxAnalogToDigitalMode FlxAnalogToDigitalMode_obj::ONLY_DIGITAL;

HX_DEFINE_CREATE_ENUM(FlxAnalogToDigitalMode_obj)

int FlxAnalogToDigitalMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BOTH","\x81","\x50","\xdc","\x2b")) return 0;
	if (inName==HX_HCSTRING("ONLY_ANALOG","\xe3","\x0b","\xa4","\x5d")) return 2;
	if (inName==HX_HCSTRING("ONLY_DIGITAL","\xa5","\x8e","\x4d","\x81")) return 1;
	return super::__FindIndex(inName);
}

int FlxAnalogToDigitalMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BOTH","\x81","\x50","\xdc","\x2b")) return 0;
	if (inName==HX_HCSTRING("ONLY_ANALOG","\xe3","\x0b","\xa4","\x5d")) return 0;
	if (inName==HX_HCSTRING("ONLY_DIGITAL","\xa5","\x8e","\x4d","\x81")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxAnalogToDigitalMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BOTH","\x81","\x50","\xdc","\x2b")) return BOTH;
	if (inName==HX_HCSTRING("ONLY_ANALOG","\xe3","\x0b","\xa4","\x5d")) return ONLY_ANALOG;
	if (inName==HX_HCSTRING("ONLY_DIGITAL","\xa5","\x8e","\x4d","\x81")) return ONLY_DIGITAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BOTH","\x81","\x50","\xdc","\x2b"),
	HX_HCSTRING("ONLY_DIGITAL","\xa5","\x8e","\x4d","\x81"),
	HX_HCSTRING("ONLY_ANALOG","\xe3","\x0b","\xa4","\x5d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnalogToDigitalMode_obj::BOTH,"BOTH");
	HX_MARK_MEMBER_NAME(FlxAnalogToDigitalMode_obj::ONLY_ANALOG,"ONLY_ANALOG");
	HX_MARK_MEMBER_NAME(FlxAnalogToDigitalMode_obj::ONLY_DIGITAL,"ONLY_DIGITAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnalogToDigitalMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAnalogToDigitalMode_obj::BOTH,"BOTH");
	HX_VISIT_MEMBER_NAME(FlxAnalogToDigitalMode_obj::ONLY_ANALOG,"ONLY_ANALOG");
	HX_VISIT_MEMBER_NAME(FlxAnalogToDigitalMode_obj::ONLY_DIGITAL,"ONLY_DIGITAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxAnalogToDigitalMode_obj::__mClass;

Dynamic __Create_FlxAnalogToDigitalMode_obj() { return new FlxAnalogToDigitalMode_obj; }

void FlxAnalogToDigitalMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.input.gamepad.FlxAnalogToDigitalMode","\x81","\x45","\x84","\x3c"), hx::TCanCast< FlxAnalogToDigitalMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxAnalogToDigitalMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxAnalogToDigitalMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxAnalogToDigitalMode_obj::__boot()
{
hx::Static(BOTH) = hx::CreateEnum< FlxAnalogToDigitalMode_obj >(HX_HCSTRING("BOTH","\x81","\x50","\xdc","\x2b"),0);
hx::Static(ONLY_ANALOG) = hx::CreateEnum< FlxAnalogToDigitalMode_obj >(HX_HCSTRING("ONLY_ANALOG","\xe3","\x0b","\xa4","\x5d"),2);
hx::Static(ONLY_DIGITAL) = hx::CreateEnum< FlxAnalogToDigitalMode_obj >(HX_HCSTRING("ONLY_DIGITAL","\xa5","\x8e","\x4d","\x81"),1);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
