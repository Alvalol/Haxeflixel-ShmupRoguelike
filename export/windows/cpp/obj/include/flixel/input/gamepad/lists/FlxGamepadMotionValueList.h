#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadMotionValueList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadMotionValueList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadMotionValueList_obj OBJ_;
		FlxGamepadMotionValueList_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadMotionValueList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadMotionValueList_obj > __new(::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadMotionValueList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadMotionValueList","\xaa","\x39","\x1b","\x8f"); }

		::flixel::input::gamepad::FlxGamepad gamepad;
		virtual Float get_TILT_PITCH( );
		Dynamic get_TILT_PITCH_dyn();

		virtual Float get_TILT_ROLL( );
		Dynamic get_TILT_ROLL_dyn();

		virtual Float getAxis( int id);
		Dynamic getAxis_dyn();

		virtual bool get_isSupported( );
		Dynamic get_isSupported_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList */ 
