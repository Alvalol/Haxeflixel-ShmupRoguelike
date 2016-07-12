#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#define INCLUDED_flixel_util_FlxColorTransformUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxColorTransformUtil)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxColorTransformUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxColorTransformUtil_obj OBJ_;
		FlxColorTransformUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxColorTransformUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxColorTransformUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxColorTransformUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxColorTransformUtil","\x1d","\x71","\xdb","\xd2"); }

		static ::openfl::_legacy::geom::ColorTransform setMultipliers( ::openfl::_legacy::geom::ColorTransform transform,Float red,Float green,Float blue,Float alpha);
		static Dynamic setMultipliers_dyn();

		static ::openfl::_legacy::geom::ColorTransform setOffsets( ::openfl::_legacy::geom::ColorTransform transform,int red,int green,int blue,int alpha);
		static Dynamic setOffsets_dyn();

		static bool hasRGBMultipliers( ::openfl::_legacy::geom::ColorTransform transform);
		static Dynamic hasRGBMultipliers_dyn();

		static bool hasRGBAMultipliers( ::openfl::_legacy::geom::ColorTransform transform);
		static Dynamic hasRGBAMultipliers_dyn();

		static bool hasRGBOffsets( ::openfl::_legacy::geom::ColorTransform transform);
		static Dynamic hasRGBOffsets_dyn();

		static bool hasRGBAOffsets( ::openfl::_legacy::geom::ColorTransform transform);
		static Dynamic hasRGBAOffsets_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxColorTransformUtil */ 
