#ifndef INCLUDED_flixel_input_gamepad_mappings_PS4Mapping
#define INCLUDED_flixel_input_gamepad_mappings_PS4Mapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,PS4Mapping)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES  PS4Mapping_obj : public ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj{
	public:
		typedef ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef PS4Mapping_obj OBJ_;
		PS4Mapping_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepadAttachment attachment);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.PS4Mapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PS4Mapping_obj > __new(::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PS4Mapping_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PS4Mapping","\x3d","\x52","\x95","\x2b"); }

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

#endif /* INCLUDED_flixel_input_gamepad_mappings_PS4Mapping */ 
