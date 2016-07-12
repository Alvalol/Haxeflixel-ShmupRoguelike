#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#define INCLUDED_flixel_input_gamepad_FlxGamepadAttachment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
namespace flixel{
namespace input{
namespace gamepad{


class FlxGamepadAttachment_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FlxGamepadAttachment_obj OBJ_;

	public:
		FlxGamepadAttachment_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.input.gamepad.FlxGamepadAttachment","\xd5","\x99","\x0c","\xe9"); }
		::String __ToString() const { return HX_HCSTRING("FlxGamepadAttachment.","\xbc","\xa4","\x47","\x88") + tag; }

		static ::flixel::input::gamepad::FlxGamepadAttachment NONE;
		static inline ::flixel::input::gamepad::FlxGamepadAttachment NONE_dyn() { return NONE; }
		static ::flixel::input::gamepad::FlxGamepadAttachment WII_CLASSIC_CONTROLLER;
		static inline ::flixel::input::gamepad::FlxGamepadAttachment WII_CLASSIC_CONTROLLER_dyn() { return WII_CLASSIC_CONTROLLER; }
		static ::flixel::input::gamepad::FlxGamepadAttachment WII_NUNCHUCK;
		static inline ::flixel::input::gamepad::FlxGamepadAttachment WII_NUNCHUCK_dyn() { return WII_NUNCHUCK; }
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadAttachment */ 
