#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#define INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxAnalogToDigitalMode)
namespace flixel{
namespace input{
namespace gamepad{


class FlxAnalogToDigitalMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxAnalogToDigitalMode_obj OBJ_;

	public:
		FlxAnalogToDigitalMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.input.gamepad.FlxAnalogToDigitalMode","\x81","\x45","\x84","\x3c"); }
		::String __ToString() const { return HX_HCSTRING("FlxAnalogToDigitalMode.","\x50","\x76","\x39","\xa7") + tag; }

		static ::flixel::input::gamepad::FlxAnalogToDigitalMode BOTH;
		static inline ::flixel::input::gamepad::FlxAnalogToDigitalMode BOTH_dyn() { return BOTH; }
		static ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_ANALOG;
		static inline ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_ANALOG_dyn() { return ONLY_ANALOG; }
		static ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_DIGITAL;
		static inline ::flixel::input::gamepad::FlxAnalogToDigitalMode ONLY_DIGITAL_dyn() { return ONLY_DIGITAL; }
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode */ 
