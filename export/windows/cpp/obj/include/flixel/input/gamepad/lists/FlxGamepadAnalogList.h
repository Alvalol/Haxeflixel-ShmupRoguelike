#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogStateList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadAnalogValueList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadAnalogList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadAnalogList_obj OBJ_;
		FlxGamepadAnalogList_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadAnalogList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadAnalogList_obj > __new(::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadAnalogList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadAnalogList","\xfd","\x95","\x24","\x1d"); }

		::flixel::input::gamepad::lists::FlxGamepadAnalogValueList value;
		::flixel::input::gamepad::lists::FlxGamepadAnalogStateList justMoved;
		::flixel::input::gamepad::lists::FlxGamepadAnalogStateList justReleased;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList */ 
