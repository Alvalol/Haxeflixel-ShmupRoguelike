#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#include <flixel/input/gamepad/id/XInputID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

Void XInputID_obj::__construct()
{
	return null();
}

//XInputID_obj::~XInputID_obj() { }

Dynamic XInputID_obj::__CreateEmpty() { return  new XInputID_obj; }
hx::ObjectPtr< XInputID_obj > XInputID_obj::__new()
{  hx::ObjectPtr< XInputID_obj > _result_ = new XInputID_obj();
	_result_->__construct();
	return _result_;}

Dynamic XInputID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XInputID_obj > _result_ = new XInputID_obj();
	_result_->__construct();
	return _result_;}

int XInputID_obj::A;

int XInputID_obj::B;

int XInputID_obj::X;

int XInputID_obj::Y;

int XInputID_obj::LB;

int XInputID_obj::RB;

int XInputID_obj::BACK;

int XInputID_obj::START;

int XInputID_obj::LEFT_STICK_CLICK;

int XInputID_obj::RIGHT_STICK_CLICK;

int XInputID_obj::GUIDE;

int XInputID_obj::DPAD_UP;

int XInputID_obj::DPAD_DOWN;

int XInputID_obj::DPAD_LEFT;

int XInputID_obj::DPAD_RIGHT;

int XInputID_obj::LEFT_TRIGGER;

int XInputID_obj::RIGHT_TRIGGER;

::flixel::input::gamepad::FlxGamepadAnalogStick XInputID_obj::LEFT_ANALOG_STICK;

::flixel::input::gamepad::FlxGamepadAnalogStick XInputID_obj::RIGHT_ANALOG_STICK;


XInputID_obj::XInputID_obj()
{
}

bool XInputID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool XInputID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &XInputID_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XInputID_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XInputID_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XInputID_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &XInputID_obj::LB,HX_HCSTRING("LB","\x76","\x42","\x00","\x00")},
	{hx::fsInt,(void *) &XInputID_obj::RB,HX_HCSTRING("RB","\xb0","\x47","\x00","\x00")},
	{hx::fsInt,(void *) &XInputID_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &XInputID_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsInt,(void *) &XInputID_obj::LEFT_STICK_CLICK,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf")},
	{hx::fsInt,(void *) &XInputID_obj::RIGHT_STICK_CLICK,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b")},
	{hx::fsInt,(void *) &XInputID_obj::GUIDE,HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19")},
	{hx::fsInt,(void *) &XInputID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &XInputID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &XInputID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &XInputID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &XInputID_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &XInputID_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &XInputID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &XInputID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XInputID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XInputID_obj::A,"A");
	HX_MARK_MEMBER_NAME(XInputID_obj::B,"B");
	HX_MARK_MEMBER_NAME(XInputID_obj::X,"X");
	HX_MARK_MEMBER_NAME(XInputID_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(XInputID_obj::LB,"LB");
	HX_MARK_MEMBER_NAME(XInputID_obj::RB,"RB");
	HX_MARK_MEMBER_NAME(XInputID_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(XInputID_obj::START,"START");
	HX_MARK_MEMBER_NAME(XInputID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(XInputID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(XInputID_obj::GUIDE,"GUIDE");
	HX_MARK_MEMBER_NAME(XInputID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(XInputID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(XInputID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(XInputID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(XInputID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(XInputID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_MARK_MEMBER_NAME(XInputID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(XInputID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XInputID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XInputID_obj::A,"A");
	HX_VISIT_MEMBER_NAME(XInputID_obj::B,"B");
	HX_VISIT_MEMBER_NAME(XInputID_obj::X,"X");
	HX_VISIT_MEMBER_NAME(XInputID_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(XInputID_obj::LB,"LB");
	HX_VISIT_MEMBER_NAME(XInputID_obj::RB,"RB");
	HX_VISIT_MEMBER_NAME(XInputID_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(XInputID_obj::START,"START");
	HX_VISIT_MEMBER_NAME(XInputID_obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(XInputID_obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(XInputID_obj::GUIDE,"GUIDE");
	HX_VISIT_MEMBER_NAME(XInputID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(XInputID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(XInputID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(XInputID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(XInputID_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(XInputID_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_VISIT_MEMBER_NAME(XInputID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(XInputID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#endif

hx::Class XInputID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("LB","\x76","\x42","\x00","\x00"),
	HX_HCSTRING("RB","\xb0","\x47","\x00","\x00"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),
	HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),
	HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	::String(null()) };

void XInputID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.XInputID","\x9d","\x99","\x2b","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &XInputID_obj::__GetStatic;
	__mClass->mSetStaticField = &XInputID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< XInputID_obj >;
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

void XInputID_obj::__boot()
{
	A= (int)0;
	B= (int)1;
	X= (int)2;
	Y= (int)3;
	LB= (int)4;
	RB= (int)5;
	BACK= (int)6;
	START= (int)7;
	LEFT_STICK_CLICK= (int)8;
	RIGHT_STICK_CLICK= (int)9;
	GUIDE= (int)10;
	DPAD_UP= (int)11;
	DPAD_DOWN= (int)12;
	DPAD_LEFT= (int)13;
	DPAD_RIGHT= (int)14;
	LEFT_TRIGGER= (int)2;
	RIGHT_TRIGGER= (int)5;
	LEFT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,null());
	RIGHT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)3,(int)4,null());
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
