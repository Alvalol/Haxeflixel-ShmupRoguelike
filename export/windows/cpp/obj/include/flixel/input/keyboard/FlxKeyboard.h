#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#define INCLUDED_flixel_input_keyboard_FlxKeyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,_system,replay,CodeValuePair)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace flixel{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  FlxKeyboard_obj : public ::flixel::input::FlxKeyManager_obj{
	public:
		typedef ::flixel::input::FlxKeyManager_obj super;
		typedef FlxKeyboard_obj OBJ_;
		FlxKeyboard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.keyboard.FlxKeyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxKeyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxKeyboard_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxKeyboard","\x19","\x97","\x40","\x7f"); }

		::haxe::ds::StringMap _nativeCorrection;
		virtual Void onKeyUp( ::openfl::_legacy::events::KeyboardEvent event);

		virtual Void onKeyDown( ::openfl::_legacy::events::KeyboardEvent event);

		virtual int resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e);

		virtual Array< ::Dynamic > record( );
		Dynamic record_dyn();

		virtual Void playback( Array< ::Dynamic > Record);
		Dynamic playback_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_flixel_input_keyboard_FlxKeyboard */ 
