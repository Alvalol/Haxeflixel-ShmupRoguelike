#ifndef INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_
#define INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,input,gamepad,_FlxGamepadInputID,FlxGamepadInputID_Impl_)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace input{
namespace gamepad{
namespace _FlxGamepadInputID{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadInputID_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadInputID_Impl__obj OBJ_;
		FlxGamepadInputID_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad._FlxGamepadInputID.FlxGamepadInputID_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadInputID_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadInputID_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxGamepadInputID_Impl_","\xd6","\xcc","\x7c","\x3e"); }

		static void __boot();
		static ::haxe::ds::StringMap fromStringMap;
		static ::haxe::ds::IntMap toStringMap;
		static int ANY;
		static int NONE;
		static int A;
		static int B;
		static int X;
		static int Y;
		static int LEFT_SHOULDER;
		static int RIGHT_SHOULDER;
		static int BACK;
		static int START;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int GUIDE;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LEFT_TRIGGER_BUTTON;
		static int RIGHT_TRIGGER_BUTTON;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
		static int LEFT_ANALOG_STICK;
		static int RIGHT_ANALOG_STICK;
		static int DPAD;
		static int LEFT_TRIGGER_FAKE;
		static int RIGHT_TRIGGER_FAKE;
		static int LEFT_STICK_FAKE;
		static int RIGHT_STICK_FAKE;
		static int TILT_PITCH;
		static int TILT_ROLL;
		static int POINTER_X;
		static int POINTER_Y;
		static int EXTRA_0;
		static int EXTRA_1;
		static int EXTRA_2;
		static int EXTRA_3;
		static int fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace _FlxGamepadInputID

#endif /* INCLUDED_flixel_input_gamepad__FlxGamepadInputID_FlxGamepadInputID_Impl_ */ 
