#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxBaseGamepadList)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadButtonList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES  FlxGamepadButtonList_obj : public ::flixel::input::gamepad::lists::FlxBaseGamepadList_obj{
	public:
		typedef ::flixel::input::gamepad::lists::FlxBaseGamepadList_obj super;
		typedef FlxGamepadButtonList_obj OBJ_;
		FlxGamepadButtonList_obj();
		Void __construct(int status,::flixel::input::gamepad::FlxGamepad gamepad);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadButtonList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGamepadButtonList_obj > __new(int status,::flixel::input::gamepad::FlxGamepad gamepad);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadButtonList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxGamepadButtonList","\xbf","\x2a","\x41","\x35"); }

		virtual bool get_A( );
		Dynamic get_A_dyn();

		virtual bool get_B( );
		Dynamic get_B_dyn();

		virtual bool get_X( );
		Dynamic get_X_dyn();

		virtual bool get_Y( );
		Dynamic get_Y_dyn();

		virtual bool get_LEFT_SHOULDER( );
		Dynamic get_LEFT_SHOULDER_dyn();

		virtual bool get_RIGHT_SHOULDER( );
		Dynamic get_RIGHT_SHOULDER_dyn();

		virtual bool get_BACK( );
		Dynamic get_BACK_dyn();

		virtual bool get_START( );
		Dynamic get_START_dyn();

		virtual bool get_LEFT_STICK_CLICK( );
		Dynamic get_LEFT_STICK_CLICK_dyn();

		virtual bool get_RIGHT_STICK_CLICK( );
		Dynamic get_RIGHT_STICK_CLICK_dyn();

		virtual bool get_GUIDE( );
		Dynamic get_GUIDE_dyn();

		virtual bool get_DPAD_UP( );
		Dynamic get_DPAD_UP_dyn();

		virtual bool get_DPAD_DOWN( );
		Dynamic get_DPAD_DOWN_dyn();

		virtual bool get_DPAD_LEFT( );
		Dynamic get_DPAD_LEFT_dyn();

		virtual bool get_DPAD_RIGHT( );
		Dynamic get_DPAD_RIGHT_dyn();

		virtual bool get_LEFT_TRIGGER( );
		Dynamic get_LEFT_TRIGGER_dyn();

		virtual bool get_RIGHT_TRIGGER( );
		Dynamic get_RIGHT_TRIGGER_dyn();

		virtual bool get_EXTRA_0( );
		Dynamic get_EXTRA_0_dyn();

		virtual bool get_EXTRA_1( );
		Dynamic get_EXTRA_1_dyn();

		virtual bool get_EXTRA_2( );
		Dynamic get_EXTRA_2_dyn();

		virtual bool get_EXTRA_3( );
		Dynamic get_EXTRA_3_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList */ 
