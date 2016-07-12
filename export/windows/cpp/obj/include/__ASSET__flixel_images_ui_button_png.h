#ifndef INCLUDED___ASSET__flixel_images_ui_button_png
#define INCLUDED___ASSET__flixel_images_ui_button_png

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS0(__ASSET__flixel_images_ui_button_png)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__flixel_images_ui_button_png_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef __ASSET__flixel_images_ui_button_png_obj OBJ_;
		__ASSET__flixel_images_ui_button_png_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="__ASSET__flixel_images_ui_button_png")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< __ASSET__flixel_images_ui_button_png_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__flixel_images_ui_button_png_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__flixel_images_ui_button_png","\x13","\x11","\x39","\x10"); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__flixel_images_ui_button_png */ 
