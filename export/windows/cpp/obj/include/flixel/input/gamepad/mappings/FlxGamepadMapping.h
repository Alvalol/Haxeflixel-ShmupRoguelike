#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#define INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,Manufacturer)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadMapping_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadMapping_obj OBJ_;
		FlxGamepadMapping_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepadAttachment attachment);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.FlxGamepadMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadMapping_obj > __new(::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadMapping_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadMapping","\x5f","\xc4","\xc0","\x66"); }

		bool supportsMotion;
		bool supportsPointer;
		::flixel::input::gamepad::FlxGamepadAnalogStick leftStick;
		::flixel::input::gamepad::FlxGamepadAnalogStick rightStick;
		::flixel::input::gamepad::FlxGamepadAttachment attachment;
		::flixel::input::gamepad::mappings::Manufacturer manufacturer;
		virtual Void initValues( );
		Dynamic initValues_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadAnalogStick getAnalogStick( int ID);
		Dynamic getAnalogStick_dyn();

		virtual int getID( int rawID);
		Dynamic getID_dyn();

		virtual int getRawID( int ID);
		Dynamic getRawID_dyn();

		virtual bool isAxisForMotion( int ID);
		Dynamic isAxisForMotion_dyn();

		virtual bool isAxisFlipped( int axisID);
		Dynamic isAxisFlipped_dyn();

		virtual int axisIndexToRawID( int axisID);
		Dynamic axisIndexToRawID_dyn();

		virtual int checkForFakeAxis( int ID);
		Dynamic checkForFakeAxis_dyn();

		virtual ::flixel::input::gamepad::FlxGamepadAttachment set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		Dynamic set_attachment_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping */ 
