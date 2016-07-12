#ifndef INCLUDED_openfl__legacy_display_Bitmap
#define INCLUDED_openfl__legacy_display_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,PixelSnapping)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Bitmap_obj : public ::openfl::_legacy::display::DisplayObject_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObject_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();
		Void __construct(::openfl::_legacy::display::BitmapData bitmapData,::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.Bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bitmap_obj > __new(::openfl::_legacy::display::BitmapData bitmapData,::openfl::_legacy::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"); }

		static void __boot();
		static Dynamic lime_display_object_get_pixel_snapping;
		static Dynamic &lime_display_object_get_pixel_snapping_dyn() { return lime_display_object_get_pixel_snapping;}
		static Dynamic lime_display_object_set_pixel_snapping;
		static Dynamic &lime_display_object_set_pixel_snapping_dyn() { return lime_display_object_set_pixel_snapping;}
		::openfl::_legacy::display::BitmapData bitmapData;
		bool smoothing;
		virtual Void __rebuild( );
		Dynamic __rebuild_dyn();

		virtual ::openfl::_legacy::display::BitmapData set_bitmapData( ::openfl::_legacy::display::BitmapData value);
		Dynamic set_bitmapData_dyn();

		virtual ::openfl::_legacy::display::PixelSnapping get_pixelSnapping( );
		Dynamic get_pixelSnapping_dyn();

		virtual ::openfl::_legacy::display::PixelSnapping set_pixelSnapping( ::openfl::_legacy::display::PixelSnapping value);
		Dynamic set_pixelSnapping_dyn();

		virtual bool set_smoothing( bool value);
		Dynamic set_smoothing_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_Bitmap */ 
