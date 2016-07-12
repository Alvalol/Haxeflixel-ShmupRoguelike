#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#define INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxBaseGamepadList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxBaseGamepadList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBaseGamepadList_obj OBJ_;
		FlxBaseGamepadList_obj();
		Void __construct(int status,::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxBaseGamepadList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBaseGamepadList_obj > __new(int status,::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBaseGamepadList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBaseGamepadList","\xdc","\xbc","\x85","\xd3"); }

		int status;
		::flixel::input::gamepad::FlxGamepad gamepad;
		virtual bool check( int id);
		Dynamic check_dyn();

		virtual bool checkRaw( int id);
		Dynamic checkRaw_dyn();

		virtual bool get_ANY( );
		Dynamic get_ANY_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList */ 
