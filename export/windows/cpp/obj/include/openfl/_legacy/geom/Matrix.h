#ifndef INCLUDED_openfl__legacy_geom_Matrix
#define INCLUDED_openfl__legacy_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Vector3D)
namespace openfl{
namespace _legacy{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.geom.Matrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matrix_obj > __new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Matrix","\x61","\xaa","\x5c","\xf0"); }

		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		virtual ::openfl::_legacy::geom::Matrix clone( );
		Dynamic clone_dyn();

		virtual Void concat( ::openfl::_legacy::geom::Matrix m);
		Dynamic concat_dyn();

		virtual Void copyColumnFrom( int column,::openfl::geom::Vector3D vector3D);
		Dynamic copyColumnFrom_dyn();

		virtual Void copyColumnTo( int column,::openfl::geom::Vector3D vector3D);
		Dynamic copyColumnTo_dyn();

		virtual Void copyFrom( ::openfl::_legacy::geom::Matrix other);
		Dynamic copyFrom_dyn();

		virtual Void copyRowFrom( int row,::openfl::geom::Vector3D vector3D);
		Dynamic copyRowFrom_dyn();

		virtual Void copyRowTo( int row,::openfl::geom::Vector3D vector3D);
		Dynamic copyRowTo_dyn();

		virtual Void createBox( Float scaleX,Float scaleY,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createBox_dyn();

		virtual Void createGradientBox( Float width,Float height,hx::Null< Float >  rotation,hx::Null< Float >  tx,hx::Null< Float >  ty);
		Dynamic createGradientBox_dyn();

		virtual ::openfl::_legacy::geom::Point deltaTransformPoint( ::openfl::_legacy::geom::Point point);
		Dynamic deltaTransformPoint_dyn();

		virtual bool equals( Dynamic matrix);
		Dynamic equals_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::openfl::_legacy::geom::Matrix invert( );
		Dynamic invert_dyn();

		virtual ::openfl::_legacy::geom::Matrix mult( ::openfl::_legacy::geom::Matrix m);
		Dynamic mult_dyn();

		virtual Void rotate( Float angle);
		Dynamic rotate_dyn();

		virtual Void scale( Float x,Float y);
		Dynamic scale_dyn();

		virtual Void setRotation( Float angle,hx::Null< Float >  scale);
		Dynamic setRotation_dyn();

		virtual Void setTo( Float a,Float b,Float c,Float d,Float tx,Float ty);
		Dynamic setTo_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::openfl::_legacy::geom::Point transformPoint( ::openfl::_legacy::geom::Point point);
		Dynamic transformPoint_dyn();

		virtual Void translate( Float x,Float y);
		Dynamic translate_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom

#endif /* INCLUDED_openfl__legacy_geom_Matrix */ 
