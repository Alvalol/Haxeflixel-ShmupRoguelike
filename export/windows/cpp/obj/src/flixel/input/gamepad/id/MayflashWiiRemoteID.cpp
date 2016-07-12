#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID
#include <flixel/input/gamepad/id/MayflashWiiRemoteID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

Void MayflashWiiRemoteID_obj::__construct()
{
	return null();
}

//MayflashWiiRemoteID_obj::~MayflashWiiRemoteID_obj() { }

Dynamic MayflashWiiRemoteID_obj::__CreateEmpty() { return  new MayflashWiiRemoteID_obj; }
hx::ObjectPtr< MayflashWiiRemoteID_obj > MayflashWiiRemoteID_obj::__new()
{  hx::ObjectPtr< MayflashWiiRemoteID_obj > _result_ = new MayflashWiiRemoteID_obj();
	_result_->__construct();
	return _result_;}

Dynamic MayflashWiiRemoteID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MayflashWiiRemoteID_obj > _result_ = new MayflashWiiRemoteID_obj();
	_result_->__construct();
	return _result_;}

int MayflashWiiRemoteID_obj::REMOTE_ONE;

int MayflashWiiRemoteID_obj::REMOTE_TWO;

int MayflashWiiRemoteID_obj::REMOTE_A;

int MayflashWiiRemoteID_obj::REMOTE_B;

int MayflashWiiRemoteID_obj::REMOTE_MINUS;

int MayflashWiiRemoteID_obj::REMOTE_PLUS;

int MayflashWiiRemoteID_obj::REMOTE_HOME;

int MayflashWiiRemoteID_obj::NUNCHUK_Z;

int MayflashWiiRemoteID_obj::NUNCHUK_C;

int MayflashWiiRemoteID_obj::NUNCHUK_DPAD_DOWN;

int MayflashWiiRemoteID_obj::NUNCHUK_DPAD_UP;

int MayflashWiiRemoteID_obj::NUNCHUK_DPAD_LEFT;

int MayflashWiiRemoteID_obj::NUNCHUK_DPAD_RIGHT;

int MayflashWiiRemoteID_obj::NUNCHUK_MINUS;

int MayflashWiiRemoteID_obj::NUNCHUK_PLUS;

int MayflashWiiRemoteID_obj::NUNCHUK_HOME;

int MayflashWiiRemoteID_obj::NUNCHUK_ONE;

int MayflashWiiRemoteID_obj::NUNCHUK_TWO;

int MayflashWiiRemoteID_obj::NUNCHUK_A;

int MayflashWiiRemoteID_obj::NUNCHUK_B;

int MayflashWiiRemoteID_obj::CLASSIC_Y;

int MayflashWiiRemoteID_obj::CLASSIC_X;

int MayflashWiiRemoteID_obj::CLASSIC_B;

int MayflashWiiRemoteID_obj::CLASSIC_A;

int MayflashWiiRemoteID_obj::CLASSIC_L;

int MayflashWiiRemoteID_obj::CLASSIC_R;

int MayflashWiiRemoteID_obj::CLASSIC_ZL;

int MayflashWiiRemoteID_obj::CLASSIC_ZR;

int MayflashWiiRemoteID_obj::CLASSIC_SELECT;

int MayflashWiiRemoteID_obj::CLASSIC_START;

int MayflashWiiRemoteID_obj::CLASSIC_HOME;

int MayflashWiiRemoteID_obj::CLASSIC_DPAD_DOWN;

int MayflashWiiRemoteID_obj::CLASSIC_DPAD_UP;

int MayflashWiiRemoteID_obj::CLASSIC_DPAD_LEFT;

int MayflashWiiRemoteID_obj::CLASSIC_DPAD_RIGHT;

int MayflashWiiRemoteID_obj::CLASSIC_ONE;

int MayflashWiiRemoteID_obj::CLASSIC_TWO;

int MayflashWiiRemoteID_obj::NUNCHUK_POINTER_X;

int MayflashWiiRemoteID_obj::NUNCHUK_POINTER_Y;

::flixel::input::gamepad::FlxGamepadAnalogStick MayflashWiiRemoteID_obj::REMOTE_DPAD;

::flixel::input::gamepad::FlxGamepadAnalogStick MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK;

::flixel::input::gamepad::FlxGamepadAnalogStick MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK;

int MayflashWiiRemoteID_obj::LEFT_TRIGGER_FAKE;

int MayflashWiiRemoteID_obj::RIGHT_TRIGGER_FAKE;

int MayflashWiiRemoteID_obj::REMOTE_DPAD_UP;

int MayflashWiiRemoteID_obj::REMOTE_DPAD_DOWN;

int MayflashWiiRemoteID_obj::REMOTE_DPAD_LEFT;

int MayflashWiiRemoteID_obj::REMOTE_DPAD_RIGHT;


MayflashWiiRemoteID_obj::MayflashWiiRemoteID_obj()
{
}

bool MayflashWiiRemoteID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"REMOTE_DPAD") ) { outValue = REMOTE_DPAD; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { outValue = LEFT_ANALOG_STICK; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { outValue = RIGHT_ANALOG_STICK; return true;  }
	}
	return false;
}

bool MayflashWiiRemoteID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"REMOTE_DPAD") ) { REMOTE_DPAD=ioValue.Cast< ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
		break;
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
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_ONE,HX_HCSTRING("REMOTE_ONE","\xcd","\x7c","\xdf","\x0b")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_TWO,HX_HCSTRING("REMOTE_TWO","\xf3","\x4f","\xe3","\x0b")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_A,HX_HCSTRING("REMOTE_A","\x08","\xc7","\x4e","\x05")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_B,HX_HCSTRING("REMOTE_B","\x09","\xc7","\x4e","\x05")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_MINUS,HX_HCSTRING("REMOTE_MINUS","\x97","\xee","\x3d","\x36")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_PLUS,HX_HCSTRING("REMOTE_PLUS","\xf3","\x76","\x55","\x58")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_HOME,HX_HCSTRING("REMOTE_HOME","\xb8","\x01","\x0e","\x53")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_Z,HX_HCSTRING("NUNCHUK_Z","\x7d","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_C,HX_HCSTRING("NUNCHUK_C","\x66","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_DPAD_DOWN,HX_HCSTRING("NUNCHUK_DPAD_DOWN","\x95","\xd6","\x28","\x78")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_DPAD_UP,HX_HCSTRING("NUNCHUK_DPAD_UP","\xce","\x5d","\x38","\x3e")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_DPAD_LEFT,HX_HCSTRING("NUNCHUK_DPAD_LEFT","\x3a","\xe6","\x6a","\x7d")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_DPAD_RIGHT,HX_HCSTRING("NUNCHUK_DPAD_RIGHT","\x29","\x9a","\x2b","\xb7")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_MINUS,HX_HCSTRING("NUNCHUK_MINUS","\xf3","\xe6","\x24","\xaf")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_PLUS,HX_HCSTRING("NUNCHUK_PLUS","\x17","\xbe","\xcc","\x67")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_HOME,HX_HCSTRING("NUNCHUK_HOME","\xdc","\x48","\x85","\x62")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_ONE,HX_HCSTRING("NUNCHUK_ONE","\x29","\x66","\xb4","\x76")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_TWO,HX_HCSTRING("NUNCHUK_TWO","\x4f","\x39","\xb8","\x76")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_A,HX_HCSTRING("NUNCHUK_A","\x64","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_B,HX_HCSTRING("NUNCHUK_B","\x65","\x61","\x03","\x66")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_Y,HX_HCSTRING("CLASSIC_Y","\x8c","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_X,HX_HCSTRING("CLASSIC_X","\x8b","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_B,HX_HCSTRING("CLASSIC_B","\x75","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_A,HX_HCSTRING("CLASSIC_A","\x74","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_L,HX_HCSTRING("CLASSIC_L","\x7f","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_R,HX_HCSTRING("CLASSIC_R","\x85","\x59","\x70","\xe9")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_ZL,HX_HCSTRING("CLASSIC_ZL","\x1f","\x02","\xde","\x58")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_ZR,HX_HCSTRING("CLASSIC_ZR","\x25","\x02","\xde","\x58")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_SELECT,HX_HCSTRING("CLASSIC_SELECT","\xe9","\x34","\x96","\x24")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_START,HX_HCSTRING("CLASSIC_START","\xf5","\x1a","\x7a","\x6a")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_HOME,HX_HCSTRING("CLASSIC_HOME","\xcc","\xba","\x16","\xc2")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_DPAD_DOWN,HX_HCSTRING("CLASSIC_DPAD_DOWN","\xa5","\x5e","\x64","\x54")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_DPAD_UP,HX_HCSTRING("CLASSIC_DPAD_UP","\xde","\xc1","\x06","\x7f")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_DPAD_LEFT,HX_HCSTRING("CLASSIC_DPAD_LEFT","\x4a","\x6e","\xa6","\x59")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_DPAD_RIGHT,HX_HCSTRING("CLASSIC_DPAD_RIGHT","\x19","\x20","\x07","\x8f")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_ONE,HX_HCSTRING("CLASSIC_ONE","\x39","\x82","\x5b","\x69")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::CLASSIC_TWO,HX_HCSTRING("CLASSIC_TWO","\x5f","\x55","\x5f","\x69")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_POINTER_X,HX_HCSTRING("NUNCHUK_POINTER_X","\x19","\xc5","\xc7","\x19")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::NUNCHUK_POINTER_Y,HX_HCSTRING("NUNCHUK_POINTER_Y","\x1a","\xc5","\xc7","\x19")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &MayflashWiiRemoteID_obj::REMOTE_DPAD,HX_HCSTRING("REMOTE_DPAD","\x08","\xdf","\x69","\x50")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::LEFT_TRIGGER_FAKE,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::RIGHT_TRIGGER_FAKE,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_DPAD_UP,HX_HCSTRING("REMOTE_DPAD_UP","\x72","\x96","\x5d","\x83")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_DPAD_DOWN,HX_HCSTRING("REMOTE_DPAD_DOWN","\x39","\x80","\x88","\x3b")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_DPAD_LEFT,HX_HCSTRING("REMOTE_DPAD_LEFT","\xde","\x8f","\xca","\x40")},
	{hx::fsInt,(void *) &MayflashWiiRemoteID_obj::REMOTE_DPAD_RIGHT,HX_HCSTRING("REMOTE_DPAD_RIGHT","\x05","\x60","\x80","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_ONE,"REMOTE_ONE");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_TWO,"REMOTE_TWO");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_A,"REMOTE_A");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_B,"REMOTE_B");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_MINUS,"REMOTE_MINUS");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_PLUS,"REMOTE_PLUS");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_HOME,"REMOTE_HOME");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_Z,"NUNCHUK_Z");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_C,"NUNCHUK_C");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_DOWN,"NUNCHUK_DPAD_DOWN");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_UP,"NUNCHUK_DPAD_UP");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_LEFT,"NUNCHUK_DPAD_LEFT");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_RIGHT,"NUNCHUK_DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_MINUS,"NUNCHUK_MINUS");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_PLUS,"NUNCHUK_PLUS");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_HOME,"NUNCHUK_HOME");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_ONE,"NUNCHUK_ONE");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_TWO,"NUNCHUK_TWO");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_A,"NUNCHUK_A");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_B,"NUNCHUK_B");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_Y,"CLASSIC_Y");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_X,"CLASSIC_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_B,"CLASSIC_B");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_A,"CLASSIC_A");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_L,"CLASSIC_L");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_R,"CLASSIC_R");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_ZL,"CLASSIC_ZL");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_ZR,"CLASSIC_ZR");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_SELECT,"CLASSIC_SELECT");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_START,"CLASSIC_START");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_HOME,"CLASSIC_HOME");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_DOWN,"CLASSIC_DPAD_DOWN");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_UP,"CLASSIC_DPAD_UP");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_LEFT,"CLASSIC_DPAD_LEFT");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_RIGHT,"CLASSIC_DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_ONE,"CLASSIC_ONE");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_TWO,"CLASSIC_TWO");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_POINTER_X,"NUNCHUK_POINTER_X");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_POINTER_Y,"NUNCHUK_POINTER_Y");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD,"REMOTE_DPAD");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_UP,"REMOTE_DPAD_UP");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_DOWN,"REMOTE_DPAD_DOWN");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_LEFT,"REMOTE_DPAD_LEFT");
	HX_MARK_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_RIGHT,"REMOTE_DPAD_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_ONE,"REMOTE_ONE");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_TWO,"REMOTE_TWO");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_A,"REMOTE_A");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_B,"REMOTE_B");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_MINUS,"REMOTE_MINUS");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_PLUS,"REMOTE_PLUS");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_HOME,"REMOTE_HOME");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_Z,"NUNCHUK_Z");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_C,"NUNCHUK_C");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_DOWN,"NUNCHUK_DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_UP,"NUNCHUK_DPAD_UP");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_LEFT,"NUNCHUK_DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_DPAD_RIGHT,"NUNCHUK_DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_MINUS,"NUNCHUK_MINUS");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_PLUS,"NUNCHUK_PLUS");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_HOME,"NUNCHUK_HOME");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_ONE,"NUNCHUK_ONE");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_TWO,"NUNCHUK_TWO");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_A,"NUNCHUK_A");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_B,"NUNCHUK_B");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_Y,"CLASSIC_Y");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_X,"CLASSIC_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_B,"CLASSIC_B");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_A,"CLASSIC_A");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_L,"CLASSIC_L");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_R,"CLASSIC_R");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_ZL,"CLASSIC_ZL");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_ZR,"CLASSIC_ZR");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_SELECT,"CLASSIC_SELECT");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_START,"CLASSIC_START");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_HOME,"CLASSIC_HOME");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_DOWN,"CLASSIC_DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_UP,"CLASSIC_DPAD_UP");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_LEFT,"CLASSIC_DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_DPAD_RIGHT,"CLASSIC_DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_ONE,"CLASSIC_ONE");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::CLASSIC_TWO,"CLASSIC_TWO");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_POINTER_X,"NUNCHUK_POINTER_X");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::NUNCHUK_POINTER_Y,"NUNCHUK_POINTER_Y");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD,"REMOTE_DPAD");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_UP,"REMOTE_DPAD_UP");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_DOWN,"REMOTE_DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_LEFT,"REMOTE_DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(MayflashWiiRemoteID_obj::REMOTE_DPAD_RIGHT,"REMOTE_DPAD_RIGHT");
};

#endif

hx::Class MayflashWiiRemoteID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("REMOTE_ONE","\xcd","\x7c","\xdf","\x0b"),
	HX_HCSTRING("REMOTE_TWO","\xf3","\x4f","\xe3","\x0b"),
	HX_HCSTRING("REMOTE_A","\x08","\xc7","\x4e","\x05"),
	HX_HCSTRING("REMOTE_B","\x09","\xc7","\x4e","\x05"),
	HX_HCSTRING("REMOTE_MINUS","\x97","\xee","\x3d","\x36"),
	HX_HCSTRING("REMOTE_PLUS","\xf3","\x76","\x55","\x58"),
	HX_HCSTRING("REMOTE_HOME","\xb8","\x01","\x0e","\x53"),
	HX_HCSTRING("NUNCHUK_Z","\x7d","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_C","\x66","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_DPAD_DOWN","\x95","\xd6","\x28","\x78"),
	HX_HCSTRING("NUNCHUK_DPAD_UP","\xce","\x5d","\x38","\x3e"),
	HX_HCSTRING("NUNCHUK_DPAD_LEFT","\x3a","\xe6","\x6a","\x7d"),
	HX_HCSTRING("NUNCHUK_DPAD_RIGHT","\x29","\x9a","\x2b","\xb7"),
	HX_HCSTRING("NUNCHUK_MINUS","\xf3","\xe6","\x24","\xaf"),
	HX_HCSTRING("NUNCHUK_PLUS","\x17","\xbe","\xcc","\x67"),
	HX_HCSTRING("NUNCHUK_HOME","\xdc","\x48","\x85","\x62"),
	HX_HCSTRING("NUNCHUK_ONE","\x29","\x66","\xb4","\x76"),
	HX_HCSTRING("NUNCHUK_TWO","\x4f","\x39","\xb8","\x76"),
	HX_HCSTRING("NUNCHUK_A","\x64","\x61","\x03","\x66"),
	HX_HCSTRING("NUNCHUK_B","\x65","\x61","\x03","\x66"),
	HX_HCSTRING("CLASSIC_Y","\x8c","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_X","\x8b","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_B","\x75","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_A","\x74","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_L","\x7f","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_R","\x85","\x59","\x70","\xe9"),
	HX_HCSTRING("CLASSIC_ZL","\x1f","\x02","\xde","\x58"),
	HX_HCSTRING("CLASSIC_ZR","\x25","\x02","\xde","\x58"),
	HX_HCSTRING("CLASSIC_SELECT","\xe9","\x34","\x96","\x24"),
	HX_HCSTRING("CLASSIC_START","\xf5","\x1a","\x7a","\x6a"),
	HX_HCSTRING("CLASSIC_HOME","\xcc","\xba","\x16","\xc2"),
	HX_HCSTRING("CLASSIC_DPAD_DOWN","\xa5","\x5e","\x64","\x54"),
	HX_HCSTRING("CLASSIC_DPAD_UP","\xde","\xc1","\x06","\x7f"),
	HX_HCSTRING("CLASSIC_DPAD_LEFT","\x4a","\x6e","\xa6","\x59"),
	HX_HCSTRING("CLASSIC_DPAD_RIGHT","\x19","\x20","\x07","\x8f"),
	HX_HCSTRING("CLASSIC_ONE","\x39","\x82","\x5b","\x69"),
	HX_HCSTRING("CLASSIC_TWO","\x5f","\x55","\x5f","\x69"),
	HX_HCSTRING("NUNCHUK_POINTER_X","\x19","\xc5","\xc7","\x19"),
	HX_HCSTRING("NUNCHUK_POINTER_Y","\x1a","\xc5","\xc7","\x19"),
	HX_HCSTRING("REMOTE_DPAD","\x08","\xdf","\x69","\x50"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),
	HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),
	HX_HCSTRING("REMOTE_DPAD_UP","\x72","\x96","\x5d","\x83"),
	HX_HCSTRING("REMOTE_DPAD_DOWN","\x39","\x80","\x88","\x3b"),
	HX_HCSTRING("REMOTE_DPAD_LEFT","\xde","\x8f","\xca","\x40"),
	HX_HCSTRING("REMOTE_DPAD_RIGHT","\x05","\x60","\x80","\xe7"),
	::String(null()) };

void MayflashWiiRemoteID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.MayflashWiiRemoteID","\x1d","\xd9","\x70","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MayflashWiiRemoteID_obj::__GetStatic;
	__mClass->mSetStaticField = &MayflashWiiRemoteID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MayflashWiiRemoteID_obj >;
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

void MayflashWiiRemoteID_obj::__boot()
{
	REMOTE_ONE= (int)0;
	REMOTE_TWO= (int)1;
	REMOTE_A= (int)2;
	REMOTE_B= (int)3;
	REMOTE_MINUS= (int)4;
	REMOTE_PLUS= (int)5;
	REMOTE_HOME= (int)11;
	NUNCHUK_Z= (int)6;
	NUNCHUK_C= (int)7;
	NUNCHUK_DPAD_DOWN= (int)12;
	NUNCHUK_DPAD_UP= (int)13;
	NUNCHUK_DPAD_LEFT= (int)14;
	NUNCHUK_DPAD_RIGHT= (int)15;
	NUNCHUK_MINUS= (int)4;
	NUNCHUK_PLUS= (int)5;
	NUNCHUK_HOME= (int)11;
	NUNCHUK_ONE= (int)0;
	NUNCHUK_TWO= (int)1;
	NUNCHUK_A= (int)2;
	NUNCHUK_B= (int)3;
	CLASSIC_Y= (int)0;
	CLASSIC_X= (int)1;
	CLASSIC_B= (int)2;
	CLASSIC_A= (int)3;
	CLASSIC_L= (int)4;
	CLASSIC_R= (int)5;
	CLASSIC_ZL= (int)6;
	CLASSIC_ZR= (int)7;
	CLASSIC_SELECT= (int)8;
	CLASSIC_START= (int)9;
	CLASSIC_HOME= (int)11;
	CLASSIC_DPAD_DOWN= (int)12;
	CLASSIC_DPAD_UP= (int)13;
	CLASSIC_DPAD_LEFT= (int)14;
	CLASSIC_DPAD_RIGHT= (int)15;
	CLASSIC_ONE= (int)-1;
	CLASSIC_TWO= (int)-1;
	NUNCHUK_POINTER_X= (int)2;
	NUNCHUK_POINTER_Y= (int)3;
struct _Function_0_1{
	inline static ::flixel::input::gamepad::FlxGamepadAnalogStick Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/id/MayflashWiiRemoteID.hx",83,0xf531935f)
		{
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/id/MayflashWiiRemoteID.hx",83,0xf531935f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("up","\x5b","\x66","\x00","\x00") , (int)22,false);
						__result->Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42") , (int)23,false);
						__result->Add(HX_HCSTRING("left","\x07","\x08","\xb0","\x47") , (int)24,false);
						__result->Add(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9") , (int)25,false);
						__result->Add(HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34") , ((Float)0.5),false);
						__result->Add(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48") , ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_DIGITAL,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(83)
			Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(83)
			return ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,tmp);
		}
		return null();
	}
};
	REMOTE_DPAD= _Function_0_1::Block();
	LEFT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,null());
	RIGHT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)2,(int)3,null());
	LEFT_TRIGGER_FAKE= (int)4;
	RIGHT_TRIGGER_FAKE= (int)5;
	REMOTE_DPAD_UP= (int)22;
	REMOTE_DPAD_DOWN= (int)23;
	REMOTE_DPAD_LEFT= (int)24;
	REMOTE_DPAD_RIGHT= (int)25;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
