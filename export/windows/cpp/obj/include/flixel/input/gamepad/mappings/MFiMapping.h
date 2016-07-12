#ifndef INCLUDED_flixel_input_gamepad_mappings_MFiMapping
#define INCLUDED_flixel_input_gamepad_mappings_MFiMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,MFiMapping)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES  MFiMapping_obj : public ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj{
	public:
		typedef ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef MFiMapping_obj OBJ_;
		MFiMapping_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepadAttachment attachment);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.MFiMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MFiMapping_obj > __new(::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MFiMapping_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MFiMapping","\xfe","\x35","\xe5","\x0b"); }

		virtual Void initValues( );

		virtual int getID( int rawID);

		virtual int getRawID( int ID);

		virtual int axisIndexToRawID( int axisID);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_MFiMapping */ 
