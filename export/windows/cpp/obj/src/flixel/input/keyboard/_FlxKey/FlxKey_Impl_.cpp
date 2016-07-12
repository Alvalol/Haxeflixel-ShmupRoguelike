#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
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
namespace keyboard{
namespace _FlxKey{

Void FlxKey_Impl__obj::__construct()
{
	return null();
}

//FlxKey_Impl__obj::~FlxKey_Impl__obj() { }

Dynamic FlxKey_Impl__obj::__CreateEmpty() { return  new FlxKey_Impl__obj; }
hx::ObjectPtr< FlxKey_Impl__obj > FlxKey_Impl__obj::__new()
{  hx::ObjectPtr< FlxKey_Impl__obj > _result_ = new FlxKey_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxKey_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKey_Impl__obj > _result_ = new FlxKey_Impl__obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap FlxKey_Impl__obj::fromStringMap;

::haxe::ds::IntMap FlxKey_Impl__obj::toStringMap;

int FlxKey_Impl__obj::ANY;

int FlxKey_Impl__obj::NONE;

int FlxKey_Impl__obj::A;

int FlxKey_Impl__obj::B;

int FlxKey_Impl__obj::C;

int FlxKey_Impl__obj::D;

int FlxKey_Impl__obj::E;

int FlxKey_Impl__obj::F;

int FlxKey_Impl__obj::G;

int FlxKey_Impl__obj::H;

int FlxKey_Impl__obj::I;

int FlxKey_Impl__obj::J;

int FlxKey_Impl__obj::K;

int FlxKey_Impl__obj::L;

int FlxKey_Impl__obj::M;

int FlxKey_Impl__obj::N;

int FlxKey_Impl__obj::O;

int FlxKey_Impl__obj::P;

int FlxKey_Impl__obj::Q;

int FlxKey_Impl__obj::R;

int FlxKey_Impl__obj::S;

int FlxKey_Impl__obj::T;

int FlxKey_Impl__obj::U;

int FlxKey_Impl__obj::V;

int FlxKey_Impl__obj::W;

int FlxKey_Impl__obj::X;

int FlxKey_Impl__obj::Y;

int FlxKey_Impl__obj::Z;

int FlxKey_Impl__obj::ZERO;

int FlxKey_Impl__obj::ONE;

int FlxKey_Impl__obj::TWO;

int FlxKey_Impl__obj::THREE;

int FlxKey_Impl__obj::FOUR;

int FlxKey_Impl__obj::FIVE;

int FlxKey_Impl__obj::SIX;

int FlxKey_Impl__obj::SEVEN;

int FlxKey_Impl__obj::EIGHT;

int FlxKey_Impl__obj::NINE;

int FlxKey_Impl__obj::PAGEUP;

int FlxKey_Impl__obj::PAGEDOWN;

int FlxKey_Impl__obj::HOME;

int FlxKey_Impl__obj::END;

int FlxKey_Impl__obj::INSERT;

int FlxKey_Impl__obj::ESCAPE;

int FlxKey_Impl__obj::MINUS;

int FlxKey_Impl__obj::PLUS;

int FlxKey_Impl__obj::DELETE;

int FlxKey_Impl__obj::BACKSPACE;

int FlxKey_Impl__obj::LBRACKET;

int FlxKey_Impl__obj::RBRACKET;

int FlxKey_Impl__obj::BACKSLASH;

int FlxKey_Impl__obj::CAPSLOCK;

int FlxKey_Impl__obj::SEMICOLON;

int FlxKey_Impl__obj::QUOTE;

int FlxKey_Impl__obj::ENTER;

int FlxKey_Impl__obj::SHIFT;

int FlxKey_Impl__obj::COMMA;

int FlxKey_Impl__obj::PERIOD;

int FlxKey_Impl__obj::SLASH;

int FlxKey_Impl__obj::GRAVEACCENT;

int FlxKey_Impl__obj::CONTROL;

int FlxKey_Impl__obj::ALT;

int FlxKey_Impl__obj::SPACE;

int FlxKey_Impl__obj::UP;

int FlxKey_Impl__obj::DOWN;

int FlxKey_Impl__obj::LEFT;

int FlxKey_Impl__obj::RIGHT;

int FlxKey_Impl__obj::TAB;

int FlxKey_Impl__obj::PRINTSCREEN;

int FlxKey_Impl__obj::F1;

int FlxKey_Impl__obj::F2;

int FlxKey_Impl__obj::F3;

int FlxKey_Impl__obj::F4;

int FlxKey_Impl__obj::F5;

int FlxKey_Impl__obj::F6;

int FlxKey_Impl__obj::F7;

int FlxKey_Impl__obj::F8;

int FlxKey_Impl__obj::F9;

int FlxKey_Impl__obj::F10;

int FlxKey_Impl__obj::F11;

int FlxKey_Impl__obj::F12;

int FlxKey_Impl__obj::NUMPADZERO;

int FlxKey_Impl__obj::NUMPADONE;

int FlxKey_Impl__obj::NUMPADTWO;

int FlxKey_Impl__obj::NUMPADTHREE;

int FlxKey_Impl__obj::NUMPADFOUR;

int FlxKey_Impl__obj::NUMPADFIVE;

int FlxKey_Impl__obj::NUMPADSIX;

int FlxKey_Impl__obj::NUMPADSEVEN;

int FlxKey_Impl__obj::NUMPADEIGHT;

int FlxKey_Impl__obj::NUMPADNINE;

int FlxKey_Impl__obj::NUMPADMINUS;

int FlxKey_Impl__obj::NUMPADPLUS;

int FlxKey_Impl__obj::NUMPADPERIOD;

int FlxKey_Impl__obj::NUMPADMULTIPLY;

int FlxKey_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("flixel.input.keyboard._FlxKey.FlxKey_Impl_","fromString",0xcc26c669,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.fromString","flixel/input/keyboard/FlxKey.hx",116,0x46a3c741)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(117)
	::String tmp = s.toUpperCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	s = tmp;
	HX_STACK_LINE(118)
	::haxe::ds::StringMap tmp1 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	if ((tmp3)){
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp5 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		Dynamic tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		tmp4 = tmp7;
	}
	else{
		HX_STACK_LINE(118)
		tmp4 = (int)-1;
	}
	HX_STACK_LINE(118)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxKey_Impl__obj,fromString,return )

::String FlxKey_Impl__obj::toString( int this1){
	HX_STACK_FRAME("flixel.input.keyboard._FlxKey.FlxKey_Impl_","toString",0xf3f689ba,"flixel.input.keyboard._FlxKey.FlxKey_Impl_.toString","flixel/input/keyboard/FlxKey.hx",123,0x46a3c741)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(124)
	::haxe::ds::IntMap tmp = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::toStringMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	int tmp1 = this1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxKey_Impl__obj,toString,return )


FlxKey_Impl__obj::FlxKey_Impl__obj()
{
}

bool FlxKey_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &FlxKey_Impl__obj::fromStringMap,HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &FlxKey_Impl__obj::toStringMap,HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::C,HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::D,HX_HCSTRING("D","\x44","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F,HX_HCSTRING("F","\x46","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::G,HX_HCSTRING("G","\x47","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::H,HX_HCSTRING("H","\x48","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::I,HX_HCSTRING("I","\x49","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::J,HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::K,HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::M,HX_HCSTRING("M","\x4d","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::N,HX_HCSTRING("N","\x4e","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::Q,HX_HCSTRING("Q","\x51","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::S,HX_HCSTRING("S","\x53","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::T,HX_HCSTRING("T","\x54","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::V,HX_HCSTRING("V","\x56","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::Z,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::TWO,HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::THREE,HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::FOUR,HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::FIVE,HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::SIX,HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::SEVEN,HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::EIGHT,HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NINE,HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::PAGEUP,HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::PAGEDOWN,HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::INSERT,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::ESCAPE,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::MINUS,HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::PLUS,HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::BACKSPACE,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::LBRACKET,HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::RBRACKET,HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::BACKSLASH,HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::CAPSLOCK,HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::SEMICOLON,HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::QUOTE,HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::ENTER,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::SHIFT,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::COMMA,HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::PERIOD,HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::SLASH,HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::GRAVEACCENT,HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::CONTROL,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::ALT,HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::SPACE,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::TAB,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::PRINTSCREEN,HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F1,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F2,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F3,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F4,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F5,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F6,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F7,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F8,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F9,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F10,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F11,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::F12,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADZERO,HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADONE,HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADTWO,HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADTHREE,HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADFOUR,HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADFIVE,HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADSIX,HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADSEVEN,HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADEIGHT,HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADNINE,HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADMINUS,HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADPLUS,HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADPERIOD,HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13")},
	{hx::fsInt,(void *) &FlxKey_Impl__obj::NUMPADMULTIPLY,HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::A,"A");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::B,"B");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::C,"C");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::D,"D");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::E,"E");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F,"F");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::G,"G");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::H,"H");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::I,"I");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::J,"J");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::K,"K");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::L,"L");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::M,"M");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::N,"N");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::O,"O");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::P,"P");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Q,"Q");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::R,"R");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::S,"S");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::T,"T");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::U,"U");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::V,"V");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::W,"W");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Y,"Y");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::Z,"Z");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::END,"END");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::GRAVEACCENT,"GRAVEACCENT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::PRINTSCREEN,"PRINTSCREEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F1,"F1");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F2,"F2");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F3,"F3");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F4,"F4");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F5,"F5");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F6,"F6");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F7,"F7");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F8,"F8");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F9,"F9");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F10,"F10");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F11,"F11");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::F12,"F12");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADZERO,"NUMPADZERO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADONE,"NUMPADONE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTWO,"NUMPADTWO");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTHREE,"NUMPADTHREE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFOUR,"NUMPADFOUR");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFIVE,"NUMPADFIVE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSIX,"NUMPADSIX");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADNINE,"NUMPADNINE");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMINUS,"NUMPADMINUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPLUS,"NUMPADPLUS");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_MARK_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::A,"A");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::B,"B");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::C,"C");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::D,"D");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::E,"E");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F,"F");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::G,"G");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::H,"H");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::I,"I");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::J,"J");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::K,"K");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::L,"L");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::M,"M");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::N,"N");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::O,"O");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::P,"P");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::R,"R");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::S,"S");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::T,"T");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::U,"U");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::V,"V");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::W,"W");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::END,"END");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::GRAVEACCENT,"GRAVEACCENT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::PRINTSCREEN,"PRINTSCREEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADZERO,"NUMPADZERO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADONE,"NUMPADONE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTWO,"NUMPADTWO");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADTHREE,"NUMPADTHREE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFOUR,"NUMPADFOUR");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADFIVE,"NUMPADFIVE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSIX,"NUMPADSIX");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADSEVEN,"NUMPADSEVEN");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADEIGHT,"NUMPADEIGHT");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADNINE,"NUMPADNINE");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMINUS,"NUMPADMINUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPLUS,"NUMPADPLUS");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADPERIOD,"NUMPADPERIOD");
	HX_VISIT_MEMBER_NAME(FlxKey_Impl__obj::NUMPADMULTIPLY,"NUMPADMULTIPLY");
};

#endif

hx::Class FlxKey_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromStringMap","\x81","\x6f","\xa2","\x3b"),
	HX_HCSTRING("toStringMap","\x50","\xa5","\x9e","\x2e"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),
	HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),
	HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),
	HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),
	HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),
	HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),
	HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),
	HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),
	HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"),
	HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),
	HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"),
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"),
	HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"),
	HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),
	HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"),
	HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),
	HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),
	HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),
	HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),
	HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"),
	HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"),
	HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"),
	HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"),
	HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"),
	HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"),
	HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"),
	HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"),
	HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"),
	HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"),
	HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"),
	HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"),
	HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"),
	HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"),
	HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void FlxKey_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.keyboard._FlxKey.FlxKey_Impl_","\x20","\x01","\xa0","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxKey_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxKey_Impl__obj >;
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

void FlxKey_Impl__obj::__boot()
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
			_g->set(HX_HCSTRING("A","\x41","\x00","\x00","\x00"),(int)65);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("B","\x42","\x00","\x00","\x00"),(int)66);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("C","\x43","\x00","\x00","\x00"),(int)67);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("D","\x44","\x00","\x00","\x00"),(int)68);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("E","\x45","\x00","\x00","\x00"),(int)69);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F","\x46","\x00","\x00","\x00"),(int)70);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("G","\x47","\x00","\x00","\x00"),(int)71);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("H","\x48","\x00","\x00","\x00"),(int)72);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("I","\x49","\x00","\x00","\x00"),(int)73);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),(int)74);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),(int)75);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),(int)76);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),(int)77);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),(int)78);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),(int)79);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("P","\x50","\x00","\x00","\x00"),(int)80);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),(int)81);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("R","\x52","\x00","\x00","\x00"),(int)82);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("S","\x53","\x00","\x00","\x00"),(int)83);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("T","\x54","\x00","\x00","\x00"),(int)84);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("U","\x55","\x00","\x00","\x00"),(int)85);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("V","\x56","\x00","\x00","\x00"),(int)86);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("W","\x57","\x00","\x00","\x00"),(int)87);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("X","\x58","\x00","\x00","\x00"),(int)88);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),(int)89);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),(int)90);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),(int)48);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),(int)49);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),(int)50);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),(int)51);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),(int)52);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),(int)53);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),(int)54);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),(int)55);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),(int)56);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),(int)57);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"),(int)33);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"),(int)34);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),(int)36);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),(int)35);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),(int)45);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),(int)27);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),(int)189);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"),(int)187);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),(int)46);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),(int)8);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"),(int)219);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"),(int)221);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),(int)220);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"),(int)20);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),(int)186);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),(int)222);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),(int)13);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),(int)16);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),(int)188);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),(int)190);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),(int)191);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"),(int)192);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),(int)17);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),(int)18);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),(int)32);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),(int)38);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),(int)40);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),(int)37);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),(int)39);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),(int)9);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"),(int)301);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),(int)112);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),(int)113);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),(int)114);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),(int)115);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),(int)116);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),(int)117);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),(int)118);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),(int)119);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),(int)120);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),(int)121);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),(int)122);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),(int)123);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"),(int)96);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"),(int)97);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"),(int)98);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"),(int)99);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"),(int)100);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"),(int)101);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"),(int)102);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"),(int)103);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"),(int)104);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"),(int)105);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"),(int)109);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"),(int)107);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"),(int)110);
			HX_STACK_LINE(54)
			_g->set(HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"),(int)106);
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
			_g->set((int)65,HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)66,HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)67,HX_HCSTRING("C","\x43","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)68,HX_HCSTRING("D","\x44","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)69,HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)70,HX_HCSTRING("F","\x46","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)71,HX_HCSTRING("G","\x47","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)72,HX_HCSTRING("H","\x48","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)73,HX_HCSTRING("I","\x49","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)74,HX_HCSTRING("J","\x4a","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)75,HX_HCSTRING("K","\x4b","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)76,HX_HCSTRING("L","\x4c","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)77,HX_HCSTRING("M","\x4d","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)78,HX_HCSTRING("N","\x4e","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)79,HX_HCSTRING("O","\x4f","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)80,HX_HCSTRING("P","\x50","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)81,HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)82,HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)83,HX_HCSTRING("S","\x53","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)84,HX_HCSTRING("T","\x54","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)85,HX_HCSTRING("U","\x55","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)86,HX_HCSTRING("V","\x56","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)87,HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)88,HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)89,HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)90,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)48,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"));
			HX_STACK_LINE(54)
			_g->set((int)49,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)50,HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)51,HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"));
			HX_STACK_LINE(54)
			_g->set((int)52,HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"));
			HX_STACK_LINE(54)
			_g->set((int)53,HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"));
			HX_STACK_LINE(54)
			_g->set((int)54,HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)55,HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"));
			HX_STACK_LINE(54)
			_g->set((int)56,HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"));
			HX_STACK_LINE(54)
			_g->set((int)57,HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"));
			HX_STACK_LINE(54)
			_g->set((int)33,HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"));
			HX_STACK_LINE(54)
			_g->set((int)34,HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"));
			HX_STACK_LINE(54)
			_g->set((int)36,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"));
			HX_STACK_LINE(54)
			_g->set((int)35,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)45,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"));
			HX_STACK_LINE(54)
			_g->set((int)27,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"));
			HX_STACK_LINE(54)
			_g->set((int)189,HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"));
			HX_STACK_LINE(54)
			_g->set((int)187,HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"));
			HX_STACK_LINE(54)
			_g->set((int)46,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"));
			HX_STACK_LINE(54)
			_g->set((int)8,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"));
			HX_STACK_LINE(54)
			_g->set((int)219,HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"));
			HX_STACK_LINE(54)
			_g->set((int)221,HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"));
			HX_STACK_LINE(54)
			_g->set((int)220,HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"));
			HX_STACK_LINE(54)
			_g->set((int)20,HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"));
			HX_STACK_LINE(54)
			_g->set((int)186,HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"));
			HX_STACK_LINE(54)
			_g->set((int)222,HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"));
			HX_STACK_LINE(54)
			_g->set((int)13,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"));
			HX_STACK_LINE(54)
			_g->set((int)16,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"));
			HX_STACK_LINE(54)
			_g->set((int)188,HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"));
			HX_STACK_LINE(54)
			_g->set((int)190,HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"));
			HX_STACK_LINE(54)
			_g->set((int)191,HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"));
			HX_STACK_LINE(54)
			_g->set((int)192,HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"));
			HX_STACK_LINE(54)
			_g->set((int)17,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"));
			HX_STACK_LINE(54)
			_g->set((int)18,HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)32,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"));
			HX_STACK_LINE(54)
			_g->set((int)38,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)40,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"));
			HX_STACK_LINE(54)
			_g->set((int)37,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"));
			HX_STACK_LINE(54)
			_g->set((int)39,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"));
			HX_STACK_LINE(54)
			_g->set((int)9,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)301,HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"));
			HX_STACK_LINE(54)
			_g->set((int)112,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)113,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)114,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)115,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)116,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)117,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)118,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)119,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)120,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)121,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)122,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)123,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"));
			HX_STACK_LINE(54)
			_g->set((int)96,HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"));
			HX_STACK_LINE(54)
			_g->set((int)97,HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"));
			HX_STACK_LINE(54)
			_g->set((int)98,HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"));
			HX_STACK_LINE(54)
			_g->set((int)99,HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"));
			HX_STACK_LINE(54)
			_g->set((int)100,HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"));
			HX_STACK_LINE(54)
			_g->set((int)101,HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"));
			HX_STACK_LINE(54)
			_g->set((int)102,HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"));
			HX_STACK_LINE(54)
			_g->set((int)103,HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"));
			HX_STACK_LINE(54)
			_g->set((int)104,HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"));
			HX_STACK_LINE(54)
			_g->set((int)105,HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"));
			HX_STACK_LINE(54)
			_g->set((int)109,HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"));
			HX_STACK_LINE(54)
			_g->set((int)107,HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"));
			HX_STACK_LINE(54)
			_g->set((int)110,HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"));
			HX_STACK_LINE(54)
			_g->set((int)106,HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"));
			HX_STACK_LINE(54)
			return _g;
		}
		return null();
	}
};
	toStringMap= _Function_0_2::Block();
	ANY= (int)-2;
	NONE= (int)-1;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	ZERO= (int)48;
	ONE= (int)49;
	TWO= (int)50;
	THREE= (int)51;
	FOUR= (int)52;
	FIVE= (int)53;
	SIX= (int)54;
	SEVEN= (int)55;
	EIGHT= (int)56;
	NINE= (int)57;
	PAGEUP= (int)33;
	PAGEDOWN= (int)34;
	HOME= (int)36;
	END= (int)35;
	INSERT= (int)45;
	ESCAPE= (int)27;
	MINUS= (int)189;
	PLUS= (int)187;
	DELETE= (int)46;
	BACKSPACE= (int)8;
	LBRACKET= (int)219;
	RBRACKET= (int)221;
	BACKSLASH= (int)220;
	CAPSLOCK= (int)20;
	SEMICOLON= (int)186;
	QUOTE= (int)222;
	ENTER= (int)13;
	SHIFT= (int)16;
	COMMA= (int)188;
	PERIOD= (int)190;
	SLASH= (int)191;
	GRAVEACCENT= (int)192;
	CONTROL= (int)17;
	ALT= (int)18;
	SPACE= (int)32;
	UP= (int)38;
	DOWN= (int)40;
	LEFT= (int)37;
	RIGHT= (int)39;
	TAB= (int)9;
	PRINTSCREEN= (int)301;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	NUMPADZERO= (int)96;
	NUMPADONE= (int)97;
	NUMPADTWO= (int)98;
	NUMPADTHREE= (int)99;
	NUMPADFOUR= (int)100;
	NUMPADFIVE= (int)101;
	NUMPADSIX= (int)102;
	NUMPADSEVEN= (int)103;
	NUMPADEIGHT= (int)104;
	NUMPADNINE= (int)105;
	NUMPADMINUS= (int)109;
	NUMPADPLUS= (int)107;
	NUMPADPERIOD= (int)110;
	NUMPADMULTIPLY= (int)106;
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
} // end namespace _FlxKey
