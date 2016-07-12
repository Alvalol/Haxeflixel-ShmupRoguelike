#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::LOGITECH;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::MAYFLASH_WII_REMOTE;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::MFI;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::OUYA;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::PS4;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::PSVITA;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::UNKNOWN;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::WII_REMOTE;

::flixel::input::gamepad::FlxGamepadModel FlxGamepadModel_obj::XINPUT;

HX_DEFINE_CREATE_ENUM(FlxGamepadModel_obj)

int FlxGamepadModel_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73")) return 0;
	if (inName==HX_HCSTRING("MAYFLASH_WII_REMOTE","\x22","\x7b","\xc7","\xb9")) return 5;
	if (inName==HX_HCSTRING("MFI","\xd0","\xaa","\x3a","\x00")) return 7;
	if (inName==HX_HCSTRING("OUYA","\x6e","\xa8","\x78","\x34")) return 1;
	if (inName==HX_HCSTRING("PS4","\xd1","\xfc","\x3c","\x00")) return 2;
	if (inName==HX_HCSTRING("PSVITA","\xe3","\x0a","\xdf","\xff")) return 3;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 8;
	if (inName==HX_HCSTRING("WII_REMOTE","\x0e","\x91","\x0a","\xf5")) return 6;
	if (inName==HX_HCSTRING("XINPUT","\x92","\xbc","\x73","\x6b")) return 4;
	return super::__FindIndex(inName);
}

int FlxGamepadModel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73")) return 0;
	if (inName==HX_HCSTRING("MAYFLASH_WII_REMOTE","\x22","\x7b","\xc7","\xb9")) return 0;
	if (inName==HX_HCSTRING("MFI","\xd0","\xaa","\x3a","\x00")) return 0;
	if (inName==HX_HCSTRING("OUYA","\x6e","\xa8","\x78","\x34")) return 0;
	if (inName==HX_HCSTRING("PS4","\xd1","\xfc","\x3c","\x00")) return 0;
	if (inName==HX_HCSTRING("PSVITA","\xe3","\x0a","\xdf","\xff")) return 0;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	if (inName==HX_HCSTRING("WII_REMOTE","\x0e","\x91","\x0a","\xf5")) return 0;
	if (inName==HX_HCSTRING("XINPUT","\x92","\xbc","\x73","\x6b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxGamepadModel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73")) return LOGITECH;
	if (inName==HX_HCSTRING("MAYFLASH_WII_REMOTE","\x22","\x7b","\xc7","\xb9")) return MAYFLASH_WII_REMOTE;
	if (inName==HX_HCSTRING("MFI","\xd0","\xaa","\x3a","\x00")) return MFI;
	if (inName==HX_HCSTRING("OUYA","\x6e","\xa8","\x78","\x34")) return OUYA;
	if (inName==HX_HCSTRING("PS4","\xd1","\xfc","\x3c","\x00")) return PS4;
	if (inName==HX_HCSTRING("PSVITA","\xe3","\x0a","\xdf","\xff")) return PSVITA;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return UNKNOWN;
	if (inName==HX_HCSTRING("WII_REMOTE","\x0e","\x91","\x0a","\xf5")) return WII_REMOTE;
	if (inName==HX_HCSTRING("XINPUT","\x92","\xbc","\x73","\x6b")) return XINPUT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73"),
	HX_HCSTRING("OUYA","\x6e","\xa8","\x78","\x34"),
	HX_HCSTRING("PS4","\xd1","\xfc","\x3c","\x00"),
	HX_HCSTRING("PSVITA","\xe3","\x0a","\xdf","\xff"),
	HX_HCSTRING("XINPUT","\x92","\xbc","\x73","\x6b"),
	HX_HCSTRING("MAYFLASH_WII_REMOTE","\x22","\x7b","\xc7","\xb9"),
	HX_HCSTRING("WII_REMOTE","\x0e","\x91","\x0a","\xf5"),
	HX_HCSTRING("MFI","\xd0","\xaa","\x3a","\x00"),
	HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::LOGITECH,"LOGITECH");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::MAYFLASH_WII_REMOTE,"MAYFLASH_WII_REMOTE");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::MFI,"MFI");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::OUYA,"OUYA");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::PS4,"PS4");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::PSVITA,"PSVITA");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::UNKNOWN,"UNKNOWN");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::WII_REMOTE,"WII_REMOTE");
	HX_MARK_MEMBER_NAME(FlxGamepadModel_obj::XINPUT,"XINPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::LOGITECH,"LOGITECH");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::MAYFLASH_WII_REMOTE,"MAYFLASH_WII_REMOTE");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::MFI,"MFI");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::OUYA,"OUYA");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::PS4,"PS4");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::PSVITA,"PSVITA");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::UNKNOWN,"UNKNOWN");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::WII_REMOTE,"WII_REMOTE");
	HX_VISIT_MEMBER_NAME(FlxGamepadModel_obj::XINPUT,"XINPUT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxGamepadModel_obj::__mClass;

Dynamic __Create_FlxGamepadModel_obj() { return new FlxGamepadModel_obj; }

void FlxGamepadModel_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.input.gamepad.FlxGamepadModel","\xf7","\xd6","\x4b","\x41"), hx::TCanCast< FlxGamepadModel_obj >,sStaticFields,sMemberFields,
	&__Create_FlxGamepadModel_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGamepadModel_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxGamepadModel_obj::__boot()
{
hx::Static(LOGITECH) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73"),0);
hx::Static(MAYFLASH_WII_REMOTE) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("MAYFLASH_WII_REMOTE","\x22","\x7b","\xc7","\xb9"),5);
hx::Static(MFI) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("MFI","\xd0","\xaa","\x3a","\x00"),7);
hx::Static(OUYA) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("OUYA","\x6e","\xa8","\x78","\x34"),1);
hx::Static(PS4) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("PS4","\xd1","\xfc","\x3c","\x00"),2);
hx::Static(PSVITA) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("PSVITA","\xe3","\x0a","\xdf","\xff"),3);
hx::Static(UNKNOWN) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),8);
hx::Static(WII_REMOTE) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("WII_REMOTE","\x0e","\x91","\x0a","\xf5"),6);
hx::Static(XINPUT) = hx::CreateEnum< FlxGamepadModel_obj >(HX_HCSTRING("XINPUT","\x92","\xbc","\x73","\x6b"),4);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
