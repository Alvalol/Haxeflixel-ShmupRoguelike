#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#include <flixel/input/gamepad/_FlxGamepadInputID/FlxGamepadInputID_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace _FlxGamepadInputID{

Void FlxGamepadInputID_Impl__obj::__construct()
{
	return null();
}

//FlxGamepadInputID_Impl__obj::~FlxGamepadInputID_Impl__obj() { }

Dynamic FlxGamepadInputID_Impl__obj::__CreateEmpty() { return  new FlxGamepadInputID_Impl__obj; }
hx::ObjectPtr< FlxGamepadInputID_Impl__obj > FlxGamepadInputID_Impl__obj::__new()
{  hx::ObjectPtr< FlxGamepadInputID_Impl__obj > _result_ = new FlxGamepadInputID_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGamepadInputID_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadInputID_Impl__obj > _result_ = new FlxGamepadInputID_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap FlxGamepadInputID_Impl__obj::fromStringMap;

::haxe::ds::IntMap FlxGamepadInputID_Impl__obj::toStringMap;

int FlxGamepadInputID_Impl__obj::ANY;

int FlxGamepadInputID_Impl__obj::NONE;

int FlxGamepadInputID_Impl__obj::A;

int FlxGamepadInputID_Impl__obj::B;

int FlxGamepadInputID_Impl__obj::X;

int FlxGamepadInputID_Impl__obj::Y;

int FlxGamepadInputID_Impl__obj::LEFT_SHOULDER;

int FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER;

int FlxGamepadInputID_Impl__obj::BACK;

int FlxGamepadInputID_Impl__obj::START;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK;

int FlxGamepadInputID_Impl__obj::GUIDE;

int FlxGamepadInputID_Impl__obj::DPAD_UP;

int FlxGamepadInputID_Impl__obj::DPAD_DOWN;

int FlxGamepadInputID_Impl__obj::DPAD_LEFT;

int FlxGamepadInputID_Impl__obj::DPAD_RIGHT;

int FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON;

int FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON;

int FlxGamepadInputID_Impl__obj::LEFT_TRIGGER;

int FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER;

int FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK;

int FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK;

int FlxGamepadInputID_Impl__obj::DPAD;

int FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_FAKE;

int FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_FAKE;

int FlxGamepadInputID_Impl__obj::LEFT_STICK_FAKE;

int FlxGamepadInputID_Impl__obj::RIGHT_STICK_FAKE;

int FlxGamepadInputID_Impl__obj::TILT_PITCH;

int FlxGamepadInputID_Impl__obj::TILT_ROLL;

int FlxGamepadInputID_Impl__obj::POINTER_X;

int FlxGamepadInputID_Impl__obj::POINTER_Y;

int FlxGamepadInputID_Impl__obj::EXTRA_0;

int FlxGamepadInputID_Impl__obj::EXTRA_1;

int FlxGamepadInputID_Impl__obj::EXTRA_2;

int FlxGamepadInputID_Impl__obj::EXTRA_3;

int FlxGamepadInputID_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","fromString",0xff2eba07,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.fromString","flixel/input/gamepad/FlxGamepadInputID.hx",95,0x292d23ae)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(96)
	::String tmp = s.toUpperCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	s = tmp;
	HX_STACK_LINE(97)
	::haxe::ds::StringMap tmp1 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	if ((tmp3)){
		HX_STACK_LINE(97)
		::haxe::ds::StringMap tmp5 = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		tmp4 = tmp7;
	}
	else{
		HX_STACK_LINE(97)
		tmp4 = (int)-1;
	}
	HX_STACK_LINE(97)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadInputID_Impl__obj,fromString,return )

::String FlxGamepadInputID_Impl__obj::toString( int this1){
	HX_STACK_FRAME("flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","toString",0xe73bb9d8,"flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_.toString","flixel/input/gamepad/FlxGamepadInputID.hx",102,0x292d23ae)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(103)
	::haxe::ds::IntMap tmp = ::flixel::input::gamepad::_FlxGamepadInputID::FlxGamepadInputID_Impl__obj::toStringMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	int tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadInputID_Impl__obj,toString,return )


FlxGamepadInputID_Impl__obj::FlxGamepadInputID_Impl__obj()
{
}

bool FlxGamepadInputID_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxGamepadInputID_Impl__obj::fromStringMap,HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &FlxGamepadInputID_Impl__obj::toStringMap,HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_SHOULDER,HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER,HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::GUIDE,HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON,HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON,HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::DPAD,HX_HCSTRING("DPAD","\x6f","\x6f","\x2f","\x2d")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_FAKE,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_FAKE,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::LEFT_STICK_FAKE,HX_HCSTRING("LEFT_STICK_FAKE","\xbc","\x9c","\x8e","\xca")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::RIGHT_STICK_FAKE,HX_HCSTRING("RIGHT_STICK_FAKE","\x27","\x8b","\xe4","\xe9")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::TILT_PITCH,HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::TILT_ROLL,HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::POINTER_X,HX_HCSTRING("POINTER_X","\xf6","\x08","\xfa","\x28")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::POINTER_Y,HX_HCSTRING("POINTER_Y","\xf7","\x08","\xfa","\x28")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_0,HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_1,HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_2,HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8")},
	{hx::fsInt,(void *) &FlxGamepadInputID_Impl__obj::EXTRA_3,HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::START,"START");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::GUIDE,"GUIDE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON,"LEFT_TRIGGER_BUTTON");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON,"RIGHT_TRIGGER_BUTTON");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD,"DPAD");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_FAKE,"LEFT_STICK_FAKE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_FAKE,"RIGHT_STICK_FAKE");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_PITCH,"TILT_PITCH");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_ROLL,"TILT_ROLL");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_X,"POINTER_X");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_Y,"POINTER_Y");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_0,"EXTRA_0");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_1,"EXTRA_1");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_2,"EXTRA_2");
	HX_MARK_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_3,"EXTRA_3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_SHOULDER,"LEFT_SHOULDER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_SHOULDER,"RIGHT_SHOULDER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::START,"START");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_CLICK,"LEFT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_CLICK,"RIGHT_STICK_CLICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::GUIDE,"GUIDE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_BUTTON,"LEFT_TRIGGER_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_BUTTON,"RIGHT_TRIGGER_BUTTON");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::DPAD,"DPAD");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_TRIGGER_FAKE,"LEFT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_TRIGGER_FAKE,"RIGHT_TRIGGER_FAKE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::LEFT_STICK_FAKE,"LEFT_STICK_FAKE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::RIGHT_STICK_FAKE,"RIGHT_STICK_FAKE");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_PITCH,"TILT_PITCH");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::TILT_ROLL,"TILT_ROLL");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_X,"POINTER_X");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::POINTER_Y,"POINTER_Y");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_0,"EXTRA_0");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_1,"EXTRA_1");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_2,"EXTRA_2");
	HX_VISIT_MEMBER_NAME(FlxGamepadInputID_Impl__obj::EXTRA_3,"EXTRA_3");
};

#endif

hx::Class FlxGamepadInputID_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b"),
	HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"),
	HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),
	HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),
	HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b"),
	HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),
	HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),
	HX_HCSTRING("DPAD","\x6f","\x6f","\x2f","\x2d"),
	HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),
	HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),
	HX_HCSTRING("LEFT_STICK_FAKE","\xbc","\x9c","\x8e","\xca"),
	HX_HCSTRING("RIGHT_STICK_FAKE","\x27","\x8b","\xe4","\xe9"),
	HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b"),
	HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e"),
	HX_HCSTRING("POINTER_X","\xf6","\x08","\xfa","\x28"),
	HX_HCSTRING("POINTER_Y","\xf7","\x08","\xfa","\x28"),
	HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8"),
	HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8"),
	HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8"),
	HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void FlxGamepadInputID_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_","\xc2","\x4c","\x79","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGamepadInputID_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadInputID_Impl__obj >;
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

void FlxGamepadInputID_Impl__obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
		{
			HX_STACK_LINE(54)
			::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				tmp = tmp2;
			}
			HX_STACK_LINE(54)
			::haxe::ds::StringMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),(int)-2);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("A","\x41","\x00","\x00","\x00"),(int)0);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("B","\x42","\x00","\x00","\x00"),(int)1);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("X","\x58","\x00","\x00","\x00"),(int)2);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),(int)3);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"),(int)4);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"),(int)5);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),(int)6);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),(int)7);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"),(int)8);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"),(int)9);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"),(int)10);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),(int)11);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),(int)12);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),(int)13);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),(int)14);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b"),(int)15);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02"),(int)16);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),(int)17);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),(int)18);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"),(int)19);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"),(int)20);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DPAD","\x6f","\x6f","\x2f","\x2d"),(int)21);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"),(int)22);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"),(int)23);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT_STICK_FAKE","\xbc","\x9c","\x8e","\xca"),(int)24);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT_STICK_FAKE","\x27","\x8b","\xe4","\xe9"),(int)25);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b"),(int)26);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e"),(int)27);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("POINTER_X","\xf6","\x08","\xfa","\x28"),(int)28);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("POINTER_Y","\xf7","\x08","\xfa","\x28"),(int)29);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8"),(int)30);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8"),(int)31);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8"),(int)32);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8"),(int)33);
			HX_STACK_LINE(54)
			return _g;
		}
		return null();
	}
};
	fromStringMap= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
		{
			HX_STACK_LINE(54)
			::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(54)
				::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(54)
				tmp = tmp2;
			}
			HX_STACK_LINE(54)
			::haxe::ds::IntMap _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			_g->set((int)-2,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)0,HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)1,HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)2,HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)3,HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)4,HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"));
			HX_STACK_LINE(54)
			_g->set((int)5,HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"));
			HX_STACK_LINE(54)
			_g->set((int)6,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
			HX_STACK_LINE(54)
			_g->set((int)7,HX_HCSTRING("START","\x42","\xac","\xf9","\x01"));
			HX_STACK_LINE(54)
			_g->set((int)8,HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"));
			HX_STACK_LINE(54)
			_g->set((int)9,HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"));
			HX_STACK_LINE(54)
			_g->set((int)10,HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"));
			HX_STACK_LINE(54)
			_g->set((int)11,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"));
			HX_STACK_LINE(54)
			_g->set((int)12,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"));
			HX_STACK_LINE(54)
			_g->set((int)13,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"));
			HX_STACK_LINE(54)
			_g->set((int)14,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"));
			HX_STACK_LINE(54)
			_g->set((int)15,HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b"));
			HX_STACK_LINE(54)
			_g->set((int)16,HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02"));
			HX_STACK_LINE(54)
			_g->set((int)17,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"));
			HX_STACK_LINE(54)
			_g->set((int)18,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)19,HX_HCSTRING("LEFT_ANALOG_STICK","\x19","\x49","\x58","\xa5"));
			HX_STACK_LINE(54)
			_g->set((int)20,HX_HCSTRING("RIGHT_ANALOG_STICK","\x44","\xe8","\xd6","\xb8"));
			HX_STACK_LINE(54)
			_g->set((int)21,HX_HCSTRING("DPAD","\x6f","\x6f","\x2f","\x2d"));
			HX_STACK_LINE(54)
			_g->set((int)22,HX_HCSTRING("LEFT_TRIGGER_FAKE","\xd4","\x89","\xc9","\xfd"));
			HX_STACK_LINE(54)
			_g->set((int)23,HX_HCSTRING("RIGHT_TRIGGER_FAKE","\xff","\x28","\x48","\x11"));
			HX_STACK_LINE(54)
			_g->set((int)24,HX_HCSTRING("LEFT_STICK_FAKE","\xbc","\x9c","\x8e","\xca"));
			HX_STACK_LINE(54)
			_g->set((int)25,HX_HCSTRING("RIGHT_STICK_FAKE","\x27","\x8b","\xe4","\xe9"));
			HX_STACK_LINE(54)
			_g->set((int)26,HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b"));
			HX_STACK_LINE(54)
			_g->set((int)27,HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e"));
			HX_STACK_LINE(54)
			_g->set((int)28,HX_HCSTRING("POINTER_X","\xf6","\x08","\xfa","\x28"));
			HX_STACK_LINE(54)
			_g->set((int)29,HX_HCSTRING("POINTER_Y","\xf7","\x08","\xfa","\x28"));
			HX_STACK_LINE(54)
			_g->set((int)30,HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(54)
			_g->set((int)31,HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(54)
			_g->set((int)32,HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(54)
			_g->set((int)33,HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8"));
			HX_STACK_LINE(54)
			return _g;
		}
		return null();
	}
};
	toStringMap= _Function_0_2::Block();
	ANY= (int)-2;
	NONE= (int)-1;
	A= (int)0;
	B= (int)1;
	X= (int)2;
	Y= (int)3;
	LEFT_SHOULDER= (int)4;
	RIGHT_SHOULDER= (int)5;
	BACK= (int)6;
	START= (int)7;
	LEFT_STICK_CLICK= (int)8;
	RIGHT_STICK_CLICK= (int)9;
	GUIDE= (int)10;
	DPAD_UP= (int)11;
	DPAD_DOWN= (int)12;
	DPAD_LEFT= (int)13;
	DPAD_RIGHT= (int)14;
	LEFT_TRIGGER_BUTTON= (int)15;
	RIGHT_TRIGGER_BUTTON= (int)16;
	LEFT_TRIGGER= (int)17;
	RIGHT_TRIGGER= (int)18;
	LEFT_ANALOG_STICK= (int)19;
	RIGHT_ANALOG_STICK= (int)20;
	DPAD= (int)21;
	LEFT_TRIGGER_FAKE= (int)22;
	RIGHT_TRIGGER_FAKE= (int)23;
	LEFT_STICK_FAKE= (int)24;
	RIGHT_STICK_FAKE= (int)25;
	TILT_PITCH= (int)26;
	TILT_ROLL= (int)27;
	POINTER_X= (int)28;
	POINTER_Y= (int)29;
	EXTRA_0= (int)30;
	EXTRA_1= (int)31;
	EXTRA_2= (int)32;
	EXTRA_3= (int)33;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace _FlxGamepadInputID
