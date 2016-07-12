#ifndef INCLUDED_flixel_util_FlxGradient
#define INCLUDED_flixel_util_FlxGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxGradient)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxGradient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxGradient_obj OBJ_;
		FlxGradient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxGradient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxGradient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGradient_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxGradient","\x62","\x14","\x56","\x41"); }

		static Dynamic createGradientMatrix( int width,int height,Array< int > colors,hx::Null< int >  chunkSize,hx::Null< int >  rotation);
		static Dynamic createGradientMatrix_dyn();

		static Array< int > createGradientArray( int width,int height,Array< int > colors,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  interpolate);
		static Dynamic createGradientArray_dyn();

		static ::flixel::FlxSprite createGradientFlxSprite( int width,int height,Array< int > colors,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  interpolate);
		static Dynamic createGradientFlxSprite_dyn();

		static ::openfl::_legacy::display::BitmapData createGradientBitmapData( int width,int height,Array< int > colors,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  interpolate);
		static Dynamic createGradientBitmapData_dyn();

		static ::flixel::FlxSprite overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,Array< int > colors,hx::Null< int >  destX,hx::Null< int >  destY,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  interpolate);
		static Dynamic overlayGradientOnFlxSprite_dyn();

		static ::openfl::_legacy::display::BitmapData overlayGradientOnBitmapData( ::openfl::_legacy::display::BitmapData dest,int width,int height,Array< int > colors,hx::Null< int >  destX,hx::Null< int >  destY,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  interpolate);
		static Dynamic overlayGradientOnBitmapData_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxGradient */ 
