#ifndef INCLUDED_flixel_input_gamepad_id_MFiID
#define INCLUDED_flixel_input_gamepad_id_MFiID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,MFiID)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES  MFiID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MFiID_obj OBJ_;
		MFiID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.MFiID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MFiID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MFiID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MFiID","\xcb","\x86","\x6f","\x84"); }

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
		static ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_MFiID */ 
