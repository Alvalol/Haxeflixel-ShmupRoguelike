#ifndef INCLUDED_flixel_input_gamepad_id_WiiRemoteID
#define INCLUDED_flixel_input_gamepad_id_WiiRemoteID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,WiiRemoteID)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES  WiiRemoteID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WiiRemoteID_obj OBJ_;
		WiiRemoteID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.WiiRemoteID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WiiRemoteID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WiiRemoteID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WiiRemoteID","\xf8","\x72","\xa0","\xb4"); }

		static void __boot();
		static int REMOTE_ONE;
		static int REMOTE_TWO;
		static int REMOTE_A;
		static int REMOTE_B;
		static int REMOTE_PLUS;
		static int REMOTE_MINUS;
		static int REMOTE_HOME;
		static int NUNCHUK_A;
		static int NUNCHUK_B;
		static int NUNCHUK_C;
		static int NUNCHUK_Z;
		static int NUNCHUK_ONE;
		static int NUNCHUK_TWO;
		static int NUNCHUK_PLUS;
		static int NUNCHUK_MINUS;
		static int NUNCHUK_HOME;
		static int CLASSIC_A;
		static int CLASSIC_B;
		static int CLASSIC_Y;
		static int CLASSIC_X;
		static int CLASSIC_L;
		static int CLASSIC_R;
		static int CLASSIC_ZL;
		static int CLASSIC_ZR;
		static int CLASSIC_START;
		static int CLASSIC_SELECT;
		static int CLASSIC_HOME;
		static int CLASSIC_ONE;
		static int CLASSIC_TWO;
		static int REMOTE_TILT_PITCH;
		static int REMOTE_TILT_ROLL;
		static int NUNCHUK_TILT_PITCH;
		static int NUNCHUK_TILT_ROLL;
		static int REMOTE_NULL_AXIS;
		static int NUNCHUK_NULL_AXIS;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick REMOTE_DPAD;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int LEFT_TRIGGER_FAKE;
		static int RIGHT_TRIGGER_FAKE;
		static int REMOTE_DPAD_UP;
		static int REMOTE_DPAD_DOWN;
		static int REMOTE_DPAD_LEFT;
		static int REMOTE_DPAD_RIGHT;
		static int REMOTE_DPAD_X;
		static int REMOTE_DPAD_Y;
		static int CLASSIC_DPAD_DOWN;
		static int CLASSIC_DPAD_UP;
		static int CLASSIC_DPAD_LEFT;
		static int CLASSIC_DPAD_RIGHT;
		static int NUNCHUK_DPAD_DOWN;
		static int NUNCHUK_DPAD_UP;
		static int NUNCHUK_DPAD_LEFT;
		static int NUNCHUK_DPAD_RIGHT;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_WiiRemoteID */ 
