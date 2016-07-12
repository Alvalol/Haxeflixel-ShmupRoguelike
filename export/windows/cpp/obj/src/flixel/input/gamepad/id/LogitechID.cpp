#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_LogitechID
#include <flixel/input/gamepad/id/LogitechID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

Void LogitechID_obj::__construct()
{
	return null();
}

//LogitechID_obj::~LogitechID_obj() { }

Dynamic LogitechID_obj::__CreateEmpty() { return  new LogitechID_obj; }
hx::ObjectPtr< LogitechID_obj > LogitechID_obj::__new()
{  hx::ObjectPtr< LogitechID_obj > _result_ = new LogitechID_obj();
	_result_->__construct();
	return _result_;}

Dynamic LogitechID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogitechID_obj > _result_ = new LogitechID_obj();
	_result_->__construct();
	return _result_;}

int LogitechID_obj::ONE;

int LogitechID_obj::TWO;

int LogitechID_obj::THREE;

int LogitechID_obj::FOUR;

int LogitechID_obj::FIVE;

int LogitechID_obj::SIX;

int LogitechID_obj::SEVEN;

int LogitechID_obj::EIGHT;

int LogitechID_obj::NINE;

int LogitechID_obj::TEN;

int LogitechID_obj::LEFT_STICK_CLICK;

int LogitechID_obj::RIGHT_STICK_CLICK;

int LogitechID_obj::DPAD_UP;

int LogitechID_obj::DPAD_DOWN;

int LogitechID_obj::DPAD_LEFT;

int LogitechID_obj::DPAD_RIGHT;

int LogitechID_obj::LOGITECH;

::flixel::input::gamepad::FlxGamepadAnalogStick LogitechID_obj::LEFT_ANALOG_STICK;

::flixel::input::gamepad::FlxGamepadAnalogStick LogitechID_obj::RIGHT_ANALOG_STICK;


LogitechID_obj::LogitechID_obj()
{
}

bool LogitechID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool LogitechID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &LogitechID_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &LogitechID_obj::TWO,HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")},
	{hx::fsInt,(void *) &LogitechID_obj::THREE,HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")},
	{hx::fsInt,(void *) &LogitechID_obj::FOUR,HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")},
	{hx::fsInt,(void *) &LogitechID_obj::FIVE,HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")},
	{hx::fsInt,(void *) &LogitechID_obj::SIX,HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")},
	{hx::fsInt,(void *) &LogitechID_obj::SEVEN,HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")},
	{hx::fsInt,(void *) &LogitechID_obj::EIGHT,HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")},
	{hx::fsInt,(void *) &LogitechID_obj::NINE,HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")},
	{hx::fsInt,(void *) &LogitechID_obj::TEN,HX_HCSTRING("TEN","\xbd","\xf9","\x3f","\x00")},
	{hx::fsInt,(void *) &LogitechID_obj::LEFT_STICK_CLICK,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf")},
	{hx::fsInt,(void *) &LogitechID_obj::RIGHT_STICK_CLICK,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b")},
	{hx::fsInt,(void *) &LogitechID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &LogitechID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &LogitechID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &LogitechID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &LogitechID_obj::LOGITECH,HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &LogitechID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &LogitechID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogitechID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogitechID_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(LogitechID_obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(LogitechID_obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(LogitechID_obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(LogitechID_obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(LogitechID_obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(LogitechID_obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(LogitechID_obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(LogitechID_obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(LogitechID_obj::TEN,"TEN");
	HX_MARK_MEMBER_NAME(LogitechID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(LogitechID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(LogitechID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(LogitechID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(LogitechID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(LogitechID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(LogitechID_obj::LOGITECH,"LOGITECH");
	HX_MARK_MEMBER_NAME(LogitechID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(LogitechID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogitechID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::TEN,"TEN");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::LOGITECH,"LOGITECH");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(LogitechID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#endif

hx::Class LogitechID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),
	HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),
	HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),
	HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),
	HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),
	HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),
	HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),
	HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),
	HX_HCSTRING("TEN","\xbd","\xf9","\x3f","\x00"),
	HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),
	HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LOGITECH","\x3b","\x00","\x6b","\x73"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	::String(null()) };

void LogitechID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.LogitechID","\xa6","\xa1","\x48","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogitechID_obj::__GetStatic;
	__mClass->mSetStaticField = &LogitechID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LogitechID_obj >;
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

void LogitechID_obj::__boot()
{
	ONE= (int)0;
	TWO= (int)1;
	THREE= (int)2;
	FOUR= (int)3;
	FIVE= (int)4;
	SIX= (int)5;
	SEVEN= (int)6;
	EIGHT= (int)7;
	NINE= (int)8;
	TEN= (int)9;
	LEFT_STICK_CLICK= (int)10;
	RIGHT_STICK_CLICK= (int)11;
	DPAD_UP= (int)16;
	DPAD_DOWN= (int)17;
	DPAD_LEFT= (int)18;
	DPAD_RIGHT= (int)19;
	LOGITECH= (int)-5;
	LEFT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,null());
	RIGHT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)2,(int)3,null());
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
