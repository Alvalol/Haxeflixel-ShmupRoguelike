#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#include <flixel/input/gamepad/id/PS4ID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

Void PS4ID_obj::__construct()
{
	return null();
}

//PS4ID_obj::~PS4ID_obj() { }

Dynamic PS4ID_obj::__CreateEmpty() { return  new PS4ID_obj; }
hx::ObjectPtr< PS4ID_obj > PS4ID_obj::__new()
{  hx::ObjectPtr< PS4ID_obj > _result_ = new PS4ID_obj();
	_result_->__construct();
	return _result_;}

Dynamic PS4ID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PS4ID_obj > _result_ = new PS4ID_obj();
	_result_->__construct();
	return _result_;}

int PS4ID_obj::SQUARE;

int PS4ID_obj::X;

int PS4ID_obj::CIRCLE;

int PS4ID_obj::TRIANGLE;

int PS4ID_obj::L1;

int PS4ID_obj::R1;

int PS4ID_obj::SHARE;

int PS4ID_obj::OPTIONS;

int PS4ID_obj::LEFT_STICK_CLICK;

int PS4ID_obj::RIGHT_STICK_CLICK;

int PS4ID_obj::PS;

int PS4ID_obj::TOUCHPAD_CLICK;

int PS4ID_obj::L2;

int PS4ID_obj::R2;

::flixel::input::gamepad::FlxGamepadAnalogStick PS4ID_obj::LEFT_ANALOG_STICK;

::flixel::input::gamepad::FlxGamepadAnalogStick PS4ID_obj::RIGHT_ANALOG_STICK;

int PS4ID_obj::DPAD_LEFT;

int PS4ID_obj::DPAD_RIGHT;

int PS4ID_obj::DPAD_DOWN;

int PS4ID_obj::DPAD_UP;


PS4ID_obj::PS4ID_obj()
{
}

bool PS4ID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { outValue = LEFT_ANALOG_STICK; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { outValue = RIGHT_ANALOG_STICK; return true;  }
	}
	return false;
}

bool PS4ID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { LEFT_ANALOG_STICK=ioValue.Cast< ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { RIGHT_ANALOG_STICK=ioValue.Cast< ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PS4ID_obj::SQUARE,HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")},
	{hx::fsInt,(void *) &PS4ID_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &PS4ID_obj::CIRCLE,HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08")},
	{hx::fsInt,(void *) &PS4ID_obj::TRIANGLE,HX_HCSTRING("TRIANGLE","\xc8","\x4e","\x4b","\xe7")},
	{hx::fsInt,(void *) &PS4ID_obj::L1,HX_HCSTRING("L1","\x65","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &PS4ID_obj::R1,HX_HCSTRING("R1","\x9f","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &PS4ID_obj::SHARE,HX_HCSTRING("SHARE","\xbf","\x1c","\x0b","\xfa")},
	{hx::fsInt,(void *) &PS4ID_obj::OPTIONS,HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f")},
	{hx::fsInt,(void *) &PS4ID_obj::LEFT_STICK_CLICK,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf")},
	{hx::fsInt,(void *) &PS4ID_obj::RIGHT_STICK_CLICK,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b")},
	{hx::fsInt,(void *) &PS4ID_obj::PS,HX_HCSTRING("PS","\x03","\x46","\x00","\x00")},
	{hx::fsInt,(void *) &PS4ID_obj::TOUCHPAD_CLICK,HX_HCSTRING("TOUCHPAD_CLICK","\x5d","\x95","\x24","\x4a")},
	{hx::fsInt,(void *) &PS4ID_obj::L2,HX_HCSTRING("L2","\x66","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &PS4ID_obj::R2,HX_HCSTRING("R2","\xa0","\x47","\x00","\x00")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &PS4ID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &PS4ID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{hx::fsInt,(void *) &PS4ID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &PS4ID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &PS4ID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &PS4ID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS4ID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PS4ID_obj::SQUARE,"SQUARE");
	HX_MARK_MEMBER_NAME(PS4ID_obj::X,"X");
	HX_MARK_MEMBER_NAME(PS4ID_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(PS4ID_obj::TRIANGLE,"TRIANGLE");
	HX_MARK_MEMBER_NAME(PS4ID_obj::L1,"L1");
	HX_MARK_MEMBER_NAME(PS4ID_obj::R1,"R1");
	HX_MARK_MEMBER_NAME(PS4ID_obj::SHARE,"SHARE");
	HX_MARK_MEMBER_NAME(PS4ID_obj::OPTIONS,"OPTIONS");
	HX_MARK_MEMBER_NAME(PS4ID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(PS4ID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(PS4ID_obj::PS,"PS");
	HX_MARK_MEMBER_NAME(PS4ID_obj::TOUCHPAD_CLICK,"TOUCHPAD_CLICK");
	HX_MARK_MEMBER_NAME(PS4ID_obj::L2,"L2");
	HX_MARK_MEMBER_NAME(PS4ID_obj::R2,"R2");
	HX_MARK_MEMBER_NAME(PS4ID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(PS4ID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(PS4ID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(PS4ID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(PS4ID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(PS4ID_obj::DPAD_UP,"DPAD_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS4ID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::SQUARE,"SQUARE");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::X,"X");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::TRIANGLE,"TRIANGLE");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::L1,"L1");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::R1,"R1");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::SHARE,"SHARE");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::OPTIONS,"OPTIONS");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::PS,"PS");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::TOUCHPAD_CLICK,"TOUCHPAD_CLICK");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::L2,"L2");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::R2,"R2");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::DPAD_UP,"DPAD_UP");
};

#endif

hx::Class PS4ID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08"),
	HX_HCSTRING("TRIANGLE","\xc8","\x4e","\x4b","\xe7"),
	HX_HCSTRING("L1","\x65","\x42","\x00","\x00"),
	HX_HCSTRING("R1","\x9f","\x47","\x00","\x00"),
	HX_HCSTRING("SHARE","\xbf","\x1c","\x0b","\xfa"),
	HX_HCSTRING("OPTIONS","\x3e","\x07","\xd2","\x5f"),
	HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),
	HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),
	HX_HCSTRING("PS","\x03","\x46","\x00","\x00"),
	HX_HCSTRING("TOUCHPAD_CLICK","\x5d","\x95","\x24","\x4a"),
	HX_HCSTRING("L2","\x66","\x42","\x00","\x00"),
	HX_HCSTRING("R2","\xa0","\x47","\x00","\x00"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	::String(null()) };

void PS4ID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.PS4ID","\x3c","\x68","\xba","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PS4ID_obj::__GetStatic;
	__mClass->mSetStaticField = &PS4ID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PS4ID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void PS4ID_obj::__boot()
{
	SQUARE= (int)0;
	X= (int)1;
	CIRCLE= (int)2;
	TRIANGLE= (int)3;
	L1= (int)4;
	R1= (int)5;
	SHARE= (int)8;
	OPTIONS= (int)9;
	LEFT_STICK_CLICK= (int)10;
	RIGHT_STICK_CLICK= (int)11;
	PS= (int)12;
	TOUCHPAD_CLICK= (int)13;
	L2= (int)3;
	R2= (int)4;
	LEFT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,null());
	RIGHT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)2,(int)5,null());
	DPAD_LEFT= (int)15;
	DPAD_RIGHT= (int)16;
	DPAD_DOWN= (int)17;
	DPAD_UP= (int)18;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
