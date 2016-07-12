#ifndef INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID
#define INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,MayflashWiiRemoteID)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES  MayflashWiiRemoteID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MayflashWiiRemoteID_obj OBJ_;
		MayflashWiiRemoteID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.MayflashWiiRemoteID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MayflashWiiRemoteID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MayflashWiiRemoteID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MayflashWiiRemoteID","\xcd","\x97","\xec","\x1c"); }

		static void __boot();
		static int REMOTE_ONE;
		static int REMOTE_TWO;
		static int REMOTE_A;
		static int REMOTE_B;
		static int REMOTE_MINUS;
		static int REMOTE_PLUS;
		static int REMOTE_HOME;
		static int NUNCHUK_Z;
		static int NUNCHUK_C;
		static int NUNCHUK_DPAD_DOWN;
		static int NUNCHUK_DPAD_UP;
		static int NUNCHUK_DPAD_LEFT;
		static int NUNCHUK_DPAD_RIGHT;
		static int NUNCHUK_MINUS;
		static int NUNCHUK_PLUS;
		static int NUNCHUK_HOME;
		static int NUNCHUK_ONE;
		static int NUNCHUK_TWO;
		static int NUNCHUK_A;
		static int NUNCHUK_B;
		static int CLASSIC_Y;
		static int CLASSIC_X;
		static int CLASSIC_B;
		static int CLASSIC_A;
		static int CLASSIC_L;
		static int CLASSIC_R;
		static int CLASSIC_ZL;
		static int CLASSIC_ZR;
		static int CLASSIC_SELECT;
		static int CLASSIC_START;
		static int CLASSIC_HOME;
		static int CLASSIC_DPAD_DOWN;
		static int CLASSIC_DPAD_UP;
		static int CLASSIC_DPAD_LEFT;
		static int CLASSIC_DPAD_RIGHT;
		static int CLASSIC_ONE;
		static int CLASSIC_TWO;
		static int NUNCHUK_POINTER_X;
		static int NUNCHUK_POINTER_Y;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick REMOTE_DPAD;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int LEFT_TRIGGER_FAKE;
		static int RIGHT_TRIGGER_FAKE;
		static int REMOTE_DPAD_UP;
		static int REMOTE_DPAD_DOWN;
		static int REMOTE_DPAD_LEFT;
		static int REMOTE_DPAD_RIGHT;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID */ 
