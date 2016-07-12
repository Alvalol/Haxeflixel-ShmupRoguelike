#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#define INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,WiiRemoteMapping)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES  WiiRemoteMapping_obj : public ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj{
	public:
		typedef ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef WiiRemoteMapping_obj OBJ_;
		WiiRemoteMapping_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepadAttachment attachment);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.WiiRemoteMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WiiRemoteMapping_obj > __new(::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WiiRemoteMapping_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WiiRemoteMapping","\xb1","\x06","\xec","\x64"); }

		static void __boot();
		static int LEFT_ANALOG_STICK_FAKE_X;
		static int LEFT_ANALOG_STICK_FAKE_Y;
		static int RIGHT_ANALOG_STICK_FAKE_X;
		static int RIGHT_ANALOG_STICK_FAKE_Y;
		virtual Void initValues( );

		virtual int getID( int rawID);

		virtual int getIDClassicController( int rawID);
		Dynamic getIDClassicController_dyn();

		virtual int getIDNunchuk( int rawID);
		Dynamic getIDNunchuk_dyn();

		virtual int getIDDefault( int rawID);
		Dynamic getIDDefault_dyn();

		virtual int getRawID( int ID);

		virtual int getRawClassicController( int ID);
		Dynamic getRawClassicController_dyn();

		virtual int getRawNunchuk( int ID);
		Dynamic getRawNunchuk_dyn();

		virtual int getRawDefault( int ID);
		Dynamic getRawDefault_dyn();

		virtual bool isAxisForMotion( int ID);

		virtual bool isAxisFlipped( int axisID);

		virtual int axisIndexToRawID( int axisID);

		virtual int checkForFakeAxis( int ID);

		virtual ::flixel::input::gamepad::FlxGamepadAttachment set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping */ 
