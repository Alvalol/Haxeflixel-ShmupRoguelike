#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#define INCLUDED_flixel_graphics_tile_FlxTilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxTilesheet)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Tilesheet)
namespace flixel{
namespace graphics{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  FlxTilesheet_obj : public ::openfl::_legacy::display::Tilesheet_obj{
	public:
		typedef ::openfl::_legacy::display::Tilesheet_obj super;
		typedef FlxTilesheet_obj OBJ_;
		FlxTilesheet_obj();
		Void __construct(::openfl::_legacy::display::BitmapData image);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.tile.FlxTilesheet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTilesheet_obj > __new(::openfl::_legacy::display::BitmapData image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTilesheet_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxTilesheet","\xff","\x19","\x36","\x91"); }

		static void __boot();
		static int _DRAWCALLS;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace tile

#endif /* INCLUDED_flixel_graphics_tile_FlxTilesheet */ 
