#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#define INCLUDED_flixel_system_scaleModes_BaseScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_system,scaleModes,BaseScaleMode)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,FlxVerticalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
namespace flixel{
namespace _system{
namespace scaleModes{


class HXCPP_CLASS_ATTRIBUTES  BaseScaleMode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseScaleMode_obj OBJ_;
		BaseScaleMode_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.scaleModes.BaseScaleMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseScaleMode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseScaleMode_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BaseScaleMode","\x9c","\x18","\x1b","\x74"); }

		::flixel::math::FlxPoint deviceSize;
		::flixel::math::FlxPoint gameSize;
		::flixel::math::FlxPoint scale;
		::flixel::math::FlxPoint offset;
		::flixel::util::FlxHorizontalAlign horizontalAlign;
		::flixel::util::FlxVerticalAlign verticalAlign;
		virtual Void onMeasure( int Width,int Height);
		Dynamic onMeasure_dyn();

		virtual Void updateGameSize( int Width,int Height);
		Dynamic updateGameSize_dyn();

		virtual Void updateDeviceSize( int Width,int Height);
		Dynamic updateDeviceSize_dyn();

		virtual Void updateScaleOffset( );
		Dynamic updateScaleOffset_dyn();

		virtual Void updateOffsetX( );
		Dynamic updateOffsetX_dyn();

		virtual Void updateOffsetY( );
		Dynamic updateOffsetY_dyn();

		virtual Void updateGamePosition( );
		Dynamic updateGamePosition_dyn();

		virtual ::flixel::util::FlxHorizontalAlign set_horizontalAlign( ::flixel::util::FlxHorizontalAlign value);
		Dynamic set_horizontalAlign_dyn();

		virtual ::flixel::util::FlxVerticalAlign set_verticalAlign( ::flixel::util::FlxVerticalAlign value);
		Dynamic set_verticalAlign_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace scaleModes

#endif /* INCLUDED_flixel_system_scaleModes_BaseScaleMode */ 
