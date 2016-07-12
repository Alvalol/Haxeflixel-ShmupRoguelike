#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#define INCLUDED_flixel_input_gamepad_mappings_XInputMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,XInputMapping)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES  XInputMapping_obj : public ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj{
	public:
		typedef ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef XInputMapping_obj OBJ_;
		XInputMapping_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepadAttachment attachment);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.XInputMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XInputMapping_obj > __new(::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XInputMapping_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XInputMapping","\x9c","\x44","\xe4","\x9e"); }

		static void __boot();
		static int LEFT_ANALOG_STICK_FAKE_X;
		static int LEFT_ANALOG_STICK_FAKE_Y;
		static int RIGHT_ANALOG_STICK_FAKE_X;
		static int RIGHT_ANALOG_STICK_FAKE_Y;
		static int LEFT_TRIGGER_FAKE;
		static int RIGHT_TRIGGER_FAKE;
		virtual Void initValues( );

		virtual int getID( int rawID);

		virtual int getRawID( int ID);

		virtual int axisIndexToRawID( int axisID);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_XInputMapping */ 
