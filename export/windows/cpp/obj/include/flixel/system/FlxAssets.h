#ifndef INCLUDED_flixel_system_FlxAssets
#define INCLUDED_flixel_system_FlxAssets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,_system,FlxAssets)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxAssets_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAssets_obj OBJ_;
		FlxAssets_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.FlxAssets")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxAssets_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAssets_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxAssets","\x75","\x42","\xf2","\xcd"); }

		static void __boot();
		static ::String FONT_DEFAULT;
		static ::String FONT_DEBUGGER;
		static Void drawLogo( ::openfl::_legacy::display::Graphics graph);
		static Dynamic drawLogo_dyn();

		static ::openfl::_legacy::display::BitmapData getBitmapData( ::String id);
		static Dynamic getBitmapData_dyn();

		static ::openfl::_legacy::display::BitmapData getBitmapFromClass( ::hx::Class source);
		static Dynamic getBitmapFromClass_dyn();

		static ::openfl::_legacy::display::BitmapData resolveBitmapData( Dynamic Graphic);
		static Dynamic resolveBitmapData_dyn();

		static ::String resolveKey( Dynamic Graphic,::String Key);
		static Dynamic resolveKey_dyn();

		static ::openfl::_legacy::media::Sound getSound( ::String id);
		static Dynamic getSound_dyn();

		static ::flixel::graphics::frames::FlxAtlasFrames getVirtualInputFrames( );
		static Dynamic getVirtualInputFrames_dyn();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxAssets */ 
