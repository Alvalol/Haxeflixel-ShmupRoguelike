#ifndef INCLUDED_flixel_input_gamepad_id_PSVitaID
#define INCLUDED_flixel_input_gamepad_id_PSVitaID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,PSVitaID)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES  PSVitaID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PSVitaID_obj OBJ_;
		PSVitaID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.PSVitaID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PSVitaID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PSVitaID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PSVitaID","\x9e","\xb5","\xf3","\x7f"); }

		static void __boot();
		static int X;
		static int CIRCLE;
		static int SQUARE;
		static int TRIANGLE;
		static int SELECT;
		static int START;
		static int L;
		static int R;
		static int DPAD_UP;
		static int DPAD_DOWN;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_PSVitaID */ 
