#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#define INCLUDED_flixel_math_FlxCallbackPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxCallbackPoint)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FlxCallbackPoint_obj : public ::flixel::math::FlxPoint_obj{
	public:
		typedef ::flixel::math::FlxPoint_obj super;
		typedef FlxCallbackPoint_obj OBJ_;
		FlxCallbackPoint_obj();
		Void __construct(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.math.FlxCallbackPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxCallbackPoint_obj > __new(Dynamic setXCallback,Dynamic setYCallback,Dynamic setXYCallback);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCallbackPoint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxCallbackPoint","\x99","\x08","\xfc","\xdd"); }

		Dynamic _setXCallback;
		Dynamic &_setXCallback_dyn() { return _setXCallback;}
		Dynamic _setYCallback;
		Dynamic &_setYCallback_dyn() { return _setYCallback;}
		Dynamic _setXYCallback;
		Dynamic &_setXYCallback_dyn() { return _setXYCallback;}
		virtual ::flixel::math::FlxPoint set( hx::Null< Float >  X,hx::Null< Float >  Y);

		virtual Float set_x( Float Value);

		virtual Float set_y( Float Value);

		virtual Void destroy( );

		virtual Void put( );

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxCallbackPoint */ 
