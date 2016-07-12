#ifndef INCLUDED_flixel_math_FlxMatrix
#define INCLUDED_flixel_math_FlxMatrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES  FlxMatrix_obj : public ::openfl::_legacy::geom::Matrix_obj{
	public:
		typedef ::openfl::_legacy::geom::Matrix_obj super;
		typedef FlxMatrix_obj OBJ_;
		FlxMatrix_obj();
		Void __construct(Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic tx,Dynamic ty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxMatrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxMatrix_obj > __new(Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic tx,Dynamic ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMatrix_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxMatrix","\x33","\x30","\xb7","\x3d"); }

		virtual ::flixel::math::FlxMatrix rotateWithTrig( Float cos,Float sin);
		Dynamic rotateWithTrig_dyn();

		virtual ::flixel::math::FlxMatrix rotateBy180( );
		Dynamic rotateBy180_dyn();

		virtual ::flixel::math::FlxMatrix rotateByPositive90( );
		Dynamic rotateByPositive90_dyn();

		virtual ::flixel::math::FlxMatrix rotateByNegative90( );
		Dynamic rotateByNegative90_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxMatrix */ 
