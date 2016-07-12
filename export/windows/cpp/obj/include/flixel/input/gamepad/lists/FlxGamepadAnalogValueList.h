#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogValueList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadAnalogValueList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadAnalogValueList_obj OBJ_;
		FlxGamepadAnalogValueList_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadAnalogValueList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadAnalogValueList_obj > __new(::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadAnalogValueList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadAnalogValueList","\x70","\x1a","\x8e","\x26"); }

		::flixel::input::gamepad::FlxGamepad gamepad;
		virtual Float get_LEFT_STICK_X( );
		Dynamic get_LEFT_STICK_X_dyn();

		virtual Float get_LEFT_STICK_Y( );
		Dynamic get_LEFT_STICK_Y_dyn();

		virtual Float get_RIGHT_STICK_X( );
		Dynamic get_RIGHT_STICK_X_dyn();

		virtual Float get_RIGHT_STICK_Y( );
		Dynamic get_RIGHT_STICK_Y_dyn();

		virtual Float get_LEFT_TRIGGER( );
		Dynamic get_LEFT_TRIGGER_dyn();

		virtual Float get_RIGHT_TRIGGER( );
		Dynamic get_RIGHT_TRIGGER_dyn();

		virtual Float get_POINTER_X( );
		Dynamic get_POINTER_X_dyn();

		virtual Float get_POINTER_Y( );
		Dynamic get_POINTER_Y_dyn();

		virtual Float getAxis( int id);
		Dynamic getAxis_dyn();

		virtual Float getXAxis( int id);
		Dynamic getXAxis_dyn();

		virtual Float getYAxis( int id);
		Dynamic getYAxis_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList */ 
