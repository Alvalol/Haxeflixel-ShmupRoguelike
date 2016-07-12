#ifndef INCLUDED_openfl__legacy_geom_Point
#define INCLUDED_openfl__legacy_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace openfl{
namespace _legacy{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.geom.Point")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Point_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"); }

		static Float distance( ::openfl::_legacy::geom::Point pt1,::openfl::_legacy::geom::Point pt2);
		static Dynamic distance_dyn();

		static ::openfl::_legacy::geom::Point interpolate( ::openfl::_legacy::geom::Point pt1,::openfl::_legacy::geom::Point pt2,Float f);
		static Dynamic interpolate_dyn();

		static ::openfl::_legacy::geom::Point polar( Float len,Float angle);
		static Dynamic polar_dyn();

		Float length;
		Float x;
		Float y;
		virtual ::openfl::_legacy::geom::Point add( ::openfl::_legacy::geom::Point v);
		Dynamic add_dyn();

		virtual ::openfl::_legacy::geom::Point clone( );
		Dynamic clone_dyn();

		virtual Void copyFrom( ::openfl::_legacy::geom::Point sourcePoint);
		Dynamic copyFrom_dyn();

		virtual bool equals( ::openfl::_legacy::geom::Point toCompare);
		Dynamic equals_dyn();

		virtual Void normalize( Float thickness);
		Dynamic normalize_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void setTo( Float x,Float y);
		Dynamic setTo_dyn();

		virtual ::openfl::_legacy::geom::Point subtract( ::openfl::_legacy::geom::Point v);
		Dynamic subtract_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom

#endif /* INCLUDED_openfl__legacy_geom_Point */ 
