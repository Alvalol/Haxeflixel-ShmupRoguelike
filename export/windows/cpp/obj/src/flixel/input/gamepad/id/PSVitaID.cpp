#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PSVitaID
#include <flixel/input/gamepad/id/PSVitaID.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

Void PSVitaID_obj::__construct()
{
	return null();
}

//PSVitaID_obj::~PSVitaID_obj() { }

Dynamic PSVitaID_obj::__CreateEmpty() { return  new PSVitaID_obj; }
hx::ObjectPtr< PSVitaID_obj > PSVitaID_obj::__new()
{  hx::ObjectPtr< PSVitaID_obj > _result_ = new PSVitaID_obj();
	_result_->__construct();
	return _result_;}

Dynamic PSVitaID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PSVitaID_obj > _result_ = new PSVitaID_obj();
	_result_->__construct();
	return _result_;}

int PSVitaID_obj::X;

int PSVitaID_obj::CIRCLE;

int PSVitaID_obj::SQUARE;

int PSVitaID_obj::TRIANGLE;

int PSVitaID_obj::SELECT;

int PSVitaID_obj::START;

int PSVitaID_obj::L;

int PSVitaID_obj::R;

int PSVitaID_obj::DPAD_UP;

int PSVitaID_obj::DPAD_DOWN;

int PSVitaID_obj::DPAD_LEFT;

int PSVitaID_obj::DPAD_RIGHT;

::flixel::input::gamepad::FlxGamepadAnalogStick PSVitaID_obj::LEFT_ANALOG_STICK;

::flixel::input::gamepad::FlxGamepadAnalogStick PSVitaID_obj::RIGHT_ANALOG_STICK;


PSVitaID_obj::PSVitaID_obj()
{
}

bool PSVitaID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

bool PSVitaID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
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
	{hx::fsInt,(void *) &PSVitaID_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &PSVitaID_obj::CIRCLE,HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08")},
	{hx::fsInt,(void *) &PSVitaID_obj::SQUARE,HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")},
	{hx::fsInt,(void *) &PSVitaID_obj::TRIANGLE,HX_HCSTRING("TRIANGLE","\xc8","\x4e","\x4b","\xe7")},
	{hx::fsInt,(void *) &PSVitaID_obj::SELECT,HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c")},
	{hx::fsInt,(void *) &PSVitaID_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsInt,(void *) &PSVitaID_obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &PSVitaID_obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &PSVitaID_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &PSVitaID_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &PSVitaID_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &PSVitaID_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &PSVitaID_obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAnalogStick*/ ,(void *) &PSVitaID_obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PSVitaID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::X,"X");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::SQUARE,"SQUARE");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::TRIANGLE,"TRIANGLE");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::START,"START");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::L,"L");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::R,"R");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(PSVitaID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::X,"X");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::SQUARE,"SQUARE");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::TRIANGLE,"TRIANGLE");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::START,"START");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::L,"L");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::R,"R");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(PSVitaID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#endif

hx::Class PSVitaID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08"),
	HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),
	HX_HCSTRING("TRIANGLE","\xc8","\x4e","\x4b","\xe7"),
	HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	::String(null()) };

void PSVitaID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.id.PSVitaID","\x4e","\x52","\x58","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PSVitaID_obj::__GetStatic;
	__mClass->mSetStaticField = &PSVitaID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PSVitaID_obj >;
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

void PSVitaID_obj::__boot()
{
	X= (int)6;
	CIRCLE= (int)7;
	SQUARE= (int)8;
	TRIANGLE= (int)9;
	SELECT= (int)10;
	START= (int)12;
	L= (int)15;
	R= (int)16;
	DPAD_UP= (int)17;
	DPAD_DOWN= (int)18;
	DPAD_LEFT= (int)19;
	DPAD_RIGHT= (int)20;
	LEFT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)0,(int)1,null());
	RIGHT_ANALOG_STICK= ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__new((int)2,(int)3,null());
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
