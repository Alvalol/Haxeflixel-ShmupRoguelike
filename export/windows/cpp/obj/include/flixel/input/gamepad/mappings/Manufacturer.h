#ifndef INCLUDED_flixel_input_gamepad_mappings_Manufacturer
#define INCLUDED_flixel_input_gamepad_mappings_Manufacturer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,Manufacturer)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class Manufacturer_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Manufacturer_obj OBJ_;

	public:
		Manufacturer_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("flixel.input.gamepad.mappings.Manufacturer","\xd7","\x3a","\x0b","\xc4"); }
		::String __ToString() const { return HX_HCSTRING("Manufacturer.","\x9d","\x3c","\x12","\xfe") + tag; }

		static ::flixel::input::gamepad::mappings::Manufacturer AdobeWindows;
		static inline ::flixel::input::gamepad::mappings::Manufacturer AdobeWindows_dyn() { return AdobeWindows; }
		static ::flixel::input::gamepad::mappings::Manufacturer GooglePepper;
		static inline ::flixel::input::gamepad::mappings::Manufacturer GooglePepper_dyn() { return GooglePepper; }
		static ::flixel::input::gamepad::mappings::Manufacturer Unknown;
		static inline ::flixel::input::gamepad::mappings::Manufacturer Unknown_dyn() { return Unknown; }
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_Manufacturer */ 
