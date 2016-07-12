#ifndef INCLUDED___ASSET__assets_data_pixel_font_ttf
#define INCLUDED___ASSET__assets_data_pixel_font_ttf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
HX_DECLARE_CLASS0(__ASSET__assets_data_pixel_font_ttf)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__assets_data_pixel_font_ttf_obj : public ::openfl::_legacy::text::Font_obj{
	public:
		typedef ::openfl::_legacy::text::Font_obj super;
		typedef __ASSET__assets_data_pixel_font_ttf_obj OBJ_;
		__ASSET__assets_data_pixel_font_ttf_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="__ASSET__assets_data_pixel_font_ttf")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< __ASSET__assets_data_pixel_font_ttf_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__assets_data_pixel_font_ttf_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__assets_data_pixel_font_ttf","\xd8","\x73","\x2a","\x05"); }

};


#endif /* INCLUDED___ASSET__assets_data_pixel_font_ttf */ 
