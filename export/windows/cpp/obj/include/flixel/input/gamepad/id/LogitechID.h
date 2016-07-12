#ifndef INCLUDED_flixel_input_gamepad_id_LogitechID
#define INCLUDED_flixel_input_gamepad_id_LogitechID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,LogitechID)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES  LogitechID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogitechID_obj OBJ_;
		LogitechID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.LogitechID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LogitechID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogitechID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LogitechID","\xf6","\x78","\xff","\x68"); }

		static void __boot();
		static int ONE;
		static int TWO;
		static int THREE;
		static int FOUR;
		static int FIVE;
		static int SIX;
		static int SEVEN;
		static int EIGHT;
		static int NINE;
		static int TEN;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int LOGITECH;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_LogitechID */ 
