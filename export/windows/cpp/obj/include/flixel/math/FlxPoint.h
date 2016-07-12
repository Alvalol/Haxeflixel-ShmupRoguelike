#ifndef INCLUDED_flixel_math_FlxPoint
#define INCLUDED_flixel_math_FlxPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_math_FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FlxPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPoint_obj OBJ_;
		FlxPoint_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPoint_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPoint_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxPoint","\x9e","\xbe","\x69","\x83"); }

		static void __boot();
		static ::flixel::util::FlxPool_flixel_math_FlxPoint _pool;
		static ::flixel::math::FlxPoint get( hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic get_dyn();

		static ::flixel::math::FlxPoint weak( hx::Null< Float >  X,hx::Null< Float >  Y);
		static Dynamic weak_dyn();

		static ::flixel::util::IFlxPool get_pool( );
		static Dynamic get_pool_dyn();

		Float x;
		Float y;
		bool _weak;
		bool _inPool;
		virtual Void put( );
		Dynamic put_dyn();

		virtual Void putWeak( );
		Dynamic putWeak_dyn();

		virtual ::flixel::math::FlxPoint set( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic set_dyn();

		virtual ::flixel::math::FlxPoint add( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic add_dyn();

		virtual ::flixel::math::FlxPoint addPoint( ::flixel::math::FlxPoint point);
		Dynamic addPoint_dyn();

		virtual ::flixel::math::FlxPoint subtract( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic subtract_dyn();

		virtual ::flixel::math::FlxPoint subtractPoint( ::flixel::math::FlxPoint point);
		Dynamic subtractPoint_dyn();

		virtual ::flixel::math::FlxPoint copyFrom( ::flixel::math::FlxPoint point);
		Dynamic copyFrom_dyn();

		virtual ::flixel::math::FlxPoint copyTo( ::flixel::math::FlxPoint point);
		Dynamic copyTo_dyn();

		virtual ::flixel::math::FlxPoint copyFromFlash( ::openfl::_legacy::geom::Point FlashPoint);
		Dynamic copyFromFlash_dyn();

		virtual ::openfl::_legacy::geom::Point copyToFlash( ::openfl::_legacy::geom::Point FlashPoint);
		Dynamic copyToFlash_dyn();

		virtual ::openfl::_legacy::geom::Point addToFlash( ::openfl::_legacy::geom::Point FlashPoint);
		Dynamic addToFlash_dyn();

		virtual ::openfl::_legacy::geom::Point subtractFromFlash( ::openfl::_legacy::geom::Point FlashPoint);
		Dynamic subtractFromFlash_dyn();

		virtual bool inCoords( Float RectX,Float RectY,Float RectWidth,Float RectHeight);
		Dynamic inCoords_dyn();

		virtual bool inRect( ::flixel::math::FlxRect Rect);
		Dynamic inRect_dyn();

		virtual Float distanceTo( ::flixel::math::FlxPoint point);
		Dynamic distanceTo_dyn();

		virtual ::flixel::math::FlxPoint floor( );
		Dynamic floor_dyn();

		virtual ::flixel::math::FlxPoint ceil( );
		Dynamic ceil_dyn();

		virtual ::flixel::math::FlxPoint round( );
		Dynamic round_dyn();

		virtual ::flixel::math::FlxPoint rotate( ::flixel::math::FlxPoint Pivot,Float Angle);
		Dynamic rotate_dyn();

		virtual Float angleBetween( ::flixel::math::FlxPoint point);
		Dynamic angleBetween_dyn();

		virtual bool equals( ::flixel::math::FlxPoint point);
		Dynamic equals_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::math::FlxPoint transform( ::openfl::_legacy::geom::Matrix matrix);
		Dynamic transform_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float set_x( Float Value);
		Dynamic set_x_dyn();

		virtual Float set_y( Float Value);
		Dynamic set_y_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxPoint */ 
