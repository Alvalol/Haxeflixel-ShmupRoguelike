#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#include <flixel/input/gamepad/id/OUYAID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

Void OUYAID_obj::__construct()
{
	return null();
}

//OUYAID_obj::~OUYAID_obj() { }

Dynamic OUYAID_obj::__CreateEmpty() { return  new OUYAID_obj; }
hx::ObjectPtr< OUYAID_obj > OUYAID_obj::__new()
{  hx::ObjectPtr< OUYAID_obj > _result_ = new OUYAID_obj();
	_result_->__construct();
	return _result_;}

Dynamic OUYAID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OUYAID_obj > _result_ = new OUYAID_obj();
	_result_->__construct();
	return _result_;}

int OUYAID_obj::O;

int OUYAID_obj::U;

int OUYAID_obj::Y;

int OUYAID_obj::A;

int OUYAID_obj::LB;

int OUYAID_obj::RB;

int OUYAID_obj::LEFT_STICK_CLICK;

int OUYAID_obj::RIGHT_STICK_CLICK;

int OUYAID_obj::HOME;

int OUYAID_obj::LEFT_TRIGGER;

int OUYAID_obj::RIGHT_TRIGGER;

int OUYAID_obj::DPAD_LEFT;

int OUYAID_obj::DPAD_RIGHT;

int OUYAID_obj::DPAD_DOWN;

int OUYAID_obj::DPAD_UP;

::flixel::input::gamepad::FlxGamepadAnalogStick OUYAID_obj::LEFT_ANALOG_STICK;

::flixel::input::gamepad::FlxGamepadAnalogStick OUYAID_obj::RIGHT_ANALOG_STICK;

int OUYAID_obj::LEFT_TRIGGER_ANALOG;

int OUYAID_obj::RIGHT_TRIGGER_ANALOG;


OUYAID_obj::OUYAID_obj()
{
}

bool OUYAID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool OUYAID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &OUYAID_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::LB,HX_HCSTRING("LB","\x76","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::RB,HX_HCSTRING("RB","\xb0","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::LEFT_STICK_CLICK,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf")},
	{hx::fsInt,(void *) &OUYAID_obj::RIGHT_STICK_CLICK,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b")},
	{hx::fsInt,(void *) &OUYAID_obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &OUYAID_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &OUYAID_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{hx::fsInt,(void *) &OUYAID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &OUYAID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &OUYAID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &OUYAID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &OUYAID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &OUYAID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{hx::fsInt,(void *) &OUYAID_obj::LEFT_TRIGGER_ANALOG,HX_HCSTRING("LEFT_TRIGGER_ANALOG","\x2f","\xd6","\x74","\xa0")},
	{hx::fsInt,(void *) &OUYAID_obj::RIGHT_TRIGGER_ANALOG,HX_HCSTRING("RIGHT_TRIGGER_ANALOG","\x1a","\xd6","\x39","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OUYAID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OUYAID_obj::O,"O");
	HX_MARK_MEMBER_NAME(OUYAID_obj::U,"U");
	HX_MARK_MEMBER_NAME(OUYAID_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(OUYAID_obj::A,"A");
	HX_MARK_MEMBER_NAME(OUYAID_obj::LB,"LB");
	HX_MARK_MEMBER_NAME(OUYAID_obj::RB,"RB");
	HX_MARK_MEMBER_NAME(OUYAID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(OUYAID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(OUYAID_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(OUYAID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(OUYAID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_MARK_MEMBER_NAME(OUYAID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(OUYAID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(OUYAID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(OUYAID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(OUYAID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(OUYAID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(OUYAID_obj::LEFT_TRIGGER_ANALOG,"LEFT_TRIGGER_ANALOG");
	HX_MARK_MEMBER_NAME(OUYAID_obj::RIGHT_TRIGGER_ANALOG,"RIGHT_TRIGGER_ANALOG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OUYAID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::O,"O");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::U,"U");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::A,"A");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::LB,"LB");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::RB,"RB");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::LEFT_TRIGGER_ANALOG,"LEFT_TRIGGER_ANALOG");
	HX_VISIT_MEMBER_NAME(OUYAID_obj::RIGHT_TRIGGER_ANALOG,"RIGHT_TRIGGER_ANALOG");
};

#endif

hx::Class OUYAID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("LB","\x76","\x42","\x00","\x00"),
	HX_HCSTRING("RB","\xb0","\x47","\x00","\x00"),
	HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),
	HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	HX_HCSTRING("LEFT_TRIGGER_ANALOG","\x2f","\xd6","\x74","\xa0"),
	HX_HCSTRING("RIGHT_TRIGGER_ANALOG","\x1a","\xd6","\x39","\x88"),
	::String(null()) };

void OUYAID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.OUYAID","\x79","\x70","\x41","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OUYAID_obj::__GetStatic;
	__mClass->mSetStaticField = &OUYAID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OUYAID_obj >;
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

void OUYAID_obj::__boot()
{
	O= (int)0;
	U= (int)3;
	Y= (int)4;
	A= (int)1;
	LB= (int)6;
	RB= (int)7;
	LEFT_STICK_CLICK= (int)10;
	RIGHT_STICK_CLICK= (int)11;
	HOME= (int)2;
	LEFT_TRIGGER= (int)8;
	RIGHT_TRIGGER= (int)9;
	DPAD_LEFT= (int)13;
	DPAD_RIGHT= (int)14;
	DPAD_DOWN= (int)15;
	DPAD_UP= (int)16;
	LEFT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,null());
	RIGHT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)11,(int)14,null());
	LEFT_TRIGGER_ANALOG= (int)17;
	RIGHT_TRIGGER_ANALOG= (int)18;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
