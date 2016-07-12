#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#define INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadDeadZoneMode)
namespace flixel{
namespace input{
namespace gamepad{


class FlxGamepadDeadZoneMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxGamepadDeadZoneMode_obj OBJ_;

	public:
		FlxGamepadDeadZoneMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.input.gamepad.FlxGamepadDeadZoneMode","\xe5","\xe8","\x21","\x95"); }
		::String __ToString() const { return HX_HCSTRING("FlxGamepadDeadZoneMode.","\x6c","\xca","\x8a","\xd8") + tag; }

		static ::flixel::input::gamepad::FlxGamepadDeadZoneMode CIRCULAR;
		static inline ::flixel::input::gamepad::FlxGamepadDeadZoneMode CIRCULAR_dyn() { return CIRCULAR; }
		static ::flixel::input::gamepad::FlxGamepadDeadZoneMode INDEPENDENT_AXES;
		static inline ::flixel::input::gamepad::FlxGamepadDeadZoneMode INDEPENDENT_AXES_dyn() { return INDEPENDENT_AXES; }
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode */ 
