#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogStateList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadAnalogStateList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadAnalogStateList_obj OBJ_;
		FlxGamepadAnalogStateList_obj();
		Void __construct(int status,::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadAnalogStateList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadAnalogStateList_obj > __new(int status,::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadAnalogStateList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadAnalogStateList","\x10","\xe1","\xb0","\xbc"); }

		::flixel::input::gamepad::FlxGamepad gamepad;
		int status;
		virtual bool get_LEFT_STICK( );
		Dynamic get_LEFT_STICK_dyn();

		virtual bool get_LEFT_STICK_X( );
		Dynamic get_LEFT_STICK_X_dyn();

		virtual bool get_LEFT_STICK_Y( );
		Dynamic get_LEFT_STICK_Y_dyn();

		virtual bool get_RIGHT_STICK( );
		Dynamic get_RIGHT_STICK_dyn();

		virtual bool get_RIGHT_STICK_X( );
		Dynamic get_RIGHT_STICK_X_dyn();

		virtual bool get_RIGHT_STICK_Y( );
		Dynamic get_RIGHT_STICK_Y_dyn();

		virtual bool checkXY( int id);
		Dynamic checkXY_dyn();

		virtual bool checkX( int id);
		Dynamic checkX_dyn();

		virtual bool checkY( int id);
		Dynamic checkY_dyn();

		virtual bool checkRaw( int RawID,int Status);
		Dynamic checkRaw_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList */ 
