#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#define INCLUDED_flixel_system_ui_FlxFocusLostScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,ui,FlxFocusLostScreen)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{
namespace _system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxFocusLostScreen_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef FlxFocusLostScreen_obj OBJ_;
		FlxFocusLostScreen_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxFocusLostScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxFocusLostScreen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxFocusLostScreen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxFocusLostScreen","\x36","\xb6","\xac","\x46"); }

		virtual Void draw( );
		Dynamic draw_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxFocusLostScreen */ 
