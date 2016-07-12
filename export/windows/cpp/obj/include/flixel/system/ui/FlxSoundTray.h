#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#define INCLUDED_flixel_system_ui_FlxSoundTray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSoundTray)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
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


class HXCPP_CLASS_ATTRIBUTES  FlxSoundTray_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef FlxSoundTray_obj OBJ_;
		FlxSoundTray_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxSoundTray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSoundTray_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSoundTray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSoundTray","\xb3","\xab","\xb9","\x74"); }

		bool active;
		Float _timer;
		Array< ::Dynamic > _bars;
		int _width;
		Float _defaultScale;
		virtual Void update( Float MS);
		Dynamic update_dyn();

		virtual Void show( hx::Null< bool >  Silent);
		Dynamic show_dyn();

		virtual Void screenCenter( );
		Dynamic screenCenter_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxSoundTray */ 
