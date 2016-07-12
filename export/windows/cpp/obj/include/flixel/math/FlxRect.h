#ifndef INCLUDED_flixel_math_FlxRect
#define INCLUDED_flixel_math_FlxRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_math_FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FlxRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRect_obj OBJ_;
		FlxRect_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxRect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxRect_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRect_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxPooled_obj *();
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxRect","\x96","\x86","\xff","\xdb"); }

		static void __boot();
		static ::flixel::util::FlxPool_flixel_math_FlxRect _pool;
		static ::flixel::math::FlxRect get( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		static Dynamic get_dyn();

		static ::flixel::math::FlxRect weak( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		static Dynamic weak_dyn();

		static ::flixel::util::IFlxPool get_pool( );
		static Dynamic get_pool_dyn();

		Float x;
		Float y;
		Float width;
		Float height;
		bool isEmpty;
		bool _weak;
		bool _inPool;
		virtual Void put( );
		Dynamic put_dyn();

		virtual Void putWeak( );
		Dynamic putWeak_dyn();

		virtual ::flixel::math::FlxRect setSize( Float Width,Float Height);
		Dynamic setSize_dyn();

		virtual ::flixel::math::FlxRect setPosition( Float x,Float y);
		Dynamic setPosition_dyn();

		virtual ::flixel::math::FlxRect set( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height);
		Dynamic set_dyn();

		virtual ::flixel::math::FlxRect copyFrom( ::flixel::math::FlxRect Rect);
		Dynamic copyFrom_dyn();

		virtual ::flixel::math::FlxRect copyTo( ::flixel::math::FlxRect Rect);
		Dynamic copyTo_dyn();

		virtual ::flixel::math::FlxRect copyFromFlash( ::openfl::_legacy::geom::Rectangle FlashRect);
		Dynamic copyFromFlash_dyn();

		virtual ::openfl::_legacy::geom::Rectangle copyToFlash( ::openfl::_legacy::geom::Rectangle FlashRect);
		Dynamic copyToFlash_dyn();

		virtual bool overlaps( ::flixel::math::FlxRect Rect);
		Dynamic overlaps_dyn();

		virtual bool containsPoint( ::flixel::math::FlxPoint Point);
		Dynamic containsPoint_dyn();

		virtual ::flixel::math::FlxRect _union( ::flixel::math::FlxRect Rect);
		Dynamic _union_dyn();

		virtual ::flixel::math::FlxRect floor( );
		Dynamic floor_dyn();

		virtual ::flixel::math::FlxRect ceil( );
		Dynamic ceil_dyn();

		virtual ::flixel::math::FlxRect round( );
		Dynamic round_dyn();

		virtual ::flixel::math::FlxRect fromTwoPoints( ::flixel::math::FlxPoint Point1,::flixel::math::FlxPoint Point2);
		Dynamic fromTwoPoints_dyn();

		virtual ::flixel::math::FlxRect unionWithPoint( ::flixel::math::FlxPoint Point);
		Dynamic unionWithPoint_dyn();

		virtual ::flixel::math::FlxRect offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual bool equals( ::flixel::math::FlxRect rect);
		Dynamic equals_dyn();

		virtual ::flixel::math::FlxRect intersection( ::flixel::math::FlxRect rect);
		Dynamic intersection_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float Value);
		Dynamic set_left_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float Value);
		Dynamic set_right_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float Value);
		Dynamic set_top_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float Value);
		Dynamic set_bottom_dyn();

		virtual bool get_isEmpty( );
		Dynamic get_isEmpty_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxRect */ 
