#ifndef INCLUDED_flixel_util_FlxCollision
#define INCLUDED_flixel_util_FlxCollision

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,FlxCollision)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxCollision_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxCollision_obj OBJ_;
		FlxCollision_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxCollision")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxCollision_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCollision_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxCollision","\xc0","\xf1","\x22","\xf8"); }

		static void __boot();
		static ::openfl::_legacy::geom::Point pointA;
		static ::openfl::_legacy::geom::Point pointB;
		static ::openfl::_legacy::geom::Point centerA;
		static ::openfl::_legacy::geom::Point centerB;
		static ::openfl::_legacy::geom::Matrix matrixA;
		static ::openfl::_legacy::geom::Matrix matrixB;
		static ::openfl::_legacy::geom::Matrix testMatrix;
		static ::openfl::_legacy::geom::Rectangle boundsA;
		static ::openfl::_legacy::geom::Rectangle boundsB;
		static bool pixelPerfectCheck( ::flixel::FlxSprite Contact,::flixel::FlxSprite Target,hx::Null< int >  AlphaTolerance,::flixel::FlxCamera Camera);
		static Dynamic pixelPerfectCheck_dyn();

		static bool pixelPerfectPointCheck( int PointX,int PointY,::flixel::FlxSprite Target,hx::Null< int >  AlphaTolerance);
		static Dynamic pixelPerfectPointCheck_dyn();

		static ::flixel::group::FlxTypedGroup createCameraWall( ::flixel::FlxCamera Camera,hx::Null< bool >  PlaceOutside,int Thickness,hx::Null< bool >  AdjustWorldBounds);
		static Dynamic createCameraWall_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxCollision */ 
