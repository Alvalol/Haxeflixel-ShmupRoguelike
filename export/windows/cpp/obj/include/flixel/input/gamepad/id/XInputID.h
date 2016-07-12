#ifndef INCLUDED_flixel_input_gamepad_id_XInputID
#define INCLUDED_flixel_input_gamepad_id_XInputID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,XInputID)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES  XInputID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XInputID_obj OBJ_;
		XInputID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.XInputID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XInputID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XInputID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XInputID","\xed","\xfc","\xc6","\x4a"); }

		static void __boot();
		static int A;
		static int B;
		static int X;
		static int Y;
		static int LB;
		static int RB;
		static int BACK;
		static int START;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int GUIDE;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_XInputID */ 
