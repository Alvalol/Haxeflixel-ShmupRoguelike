#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#define INCLUDED_flixel_input_gamepad_FlxGamepadButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadButton)
namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadButton_obj : public ::flixel::input::FlxInput_obj{
	public:
		typedef ::flixel::input::FlxInput_obj super;
		typedef FlxGamepadButton_obj OBJ_;
		FlxGamepadButton_obj();
		Void __construct(int ID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepadButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadButton_obj > __new(int ID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadButton_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxGamepadButton","\xc1","\x6d","\x24","\xd3"); }

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadButton */ 
