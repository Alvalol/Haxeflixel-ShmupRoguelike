#ifndef INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_
#define INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,geom,_Orientation3D,Orientation3D_Impl_)
namespace openfl{
namespace geom{
namespace _Orientation3D{


class HXCPP_CLASS_ATTRIBUTES  Orientation3D_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Orientation3D_Impl__obj OBJ_;
		Orientation3D_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.geom._Orientation3D.Orientation3D_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Orientation3D_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Orientation3D_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Orientation3D_Impl_","\xc1","\x3a","\x69","\x1b"); }

		static void __boot();
		static Dynamic AXIS_ANGLE;
		static Dynamic EULER_ANGLES;
		static Dynamic QUATERNION;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace geom
} // end namespace _Orientation3D

#endif /* INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_ */ 
