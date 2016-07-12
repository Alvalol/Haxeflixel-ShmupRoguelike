#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadPointerValueList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadPointerValueList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGamepadPointerValueList_obj OBJ_;
		FlxGamepadPointerValueList_obj();
		Void __construct(::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadPointerValueList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadPointerValueList_obj > __new(::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadPointerValueList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadPointerValueList","\x81","\xf8","\x63","\x82"); }

		::flixel::input::gamepad::FlxGamepad gamepad;
		virtual Float get_X( );
		Dynamic get_X_dyn();

		virtual Float get_Y( );
		Dynamic get_Y_dyn();

		virtual Float getAxis( int id);
		Dynamic getAxis_dyn();

		virtual bool get_isSupported( );
		Dynamic get_isSupported_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList */ 
