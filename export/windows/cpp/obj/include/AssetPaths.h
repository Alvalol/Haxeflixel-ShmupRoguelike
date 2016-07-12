#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60"); }

		static void __boot();
		static ::String pixel_font__ttf;
		static ::String sandbox__tmx;
		static ::String enemies__png;
		static ::String explosion__png;
		static ::String images_go_here__txt;
		static ::String items__png;
		static ::String mockups__pyxel;
		static ::String nohit__png;
		static ::String player__png;
		static ::String player__pyxel;
		static ::String playerDawnbringer__pyxel;
		static ::String playerWip__pyxel;
		static ::String solid__png;
		static ::String solidtiles__pyxel;
		static ::String cursor__png;
		static ::String Thumbs__db;
		static ::String tiles__png;
		static ::String tiles__png_palette__png;
		static ::String turret__png;
		static ::String music_goes_here__txt;
		static ::String sounds_go_here__txt;
};


#endif /* INCLUDED_AssetPaths */ 
