#ifndef INCLUDED_flixel_util_FlxBitmapDataPool
#define INCLUDED_flixel_util_FlxBitmapDataPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxBitmapDataPool)
HX_DECLARE_CLASS3(flixel,util,_FlxBitmapDataPool,FlxBitmapDataPoolNode)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxBitmapDataPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxBitmapDataPool_obj OBJ_;
		FlxBitmapDataPool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxBitmapDataPool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBitmapDataPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBitmapDataPool_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxBitmapDataPool","\x27","\x6f","\x5b","\xac"); }

		static void __boot();
		static int maxLength;
		static int length;
		static ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _head;
		static ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode _tail;
		static ::openfl::_legacy::geom::Rectangle _rect;
		static ::openfl::_legacy::display::BitmapData get( int w,int h,hx::Null< bool >  transparent,Dynamic fillColor,Dynamic exactSize);
		static Dynamic get_dyn();

		static Void put( ::openfl::_legacy::display::BitmapData bmd);
		static Dynamic put_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

		static int set_maxLength( int value);
		static Dynamic set_maxLength_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxBitmapDataPool */ 
