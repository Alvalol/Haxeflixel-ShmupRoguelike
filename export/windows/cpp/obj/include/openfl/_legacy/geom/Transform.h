#ifndef INCLUDED_openfl__legacy_geom_Transform
#define INCLUDED_openfl__legacy_geom_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Transform)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
namespace openfl{
namespace _legacy{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct(::openfl::_legacy::display::DisplayObject parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.geom.Transform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Transform_obj > __new(::openfl::_legacy::display::DisplayObject parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Transform","\x4c","\x0d","\x66","\xe7"); }

		::openfl::_legacy::geom::ColorTransform concatenatedColorTransform;
		::openfl::_legacy::geom::Matrix concatenatedMatrix;
		::openfl::_legacy::geom::Rectangle pixelBounds;
		bool __hasMatrix;
		bool __hasMatrix3D;
		::openfl::_legacy::display::DisplayObject __parent;
		virtual ::openfl::_legacy::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		virtual ::openfl::_legacy::geom::ColorTransform set_colorTransform( ::openfl::_legacy::geom::ColorTransform value);
		Dynamic set_colorTransform_dyn();

		virtual ::openfl::_legacy::geom::ColorTransform get_concatenatedColorTransform( );
		Dynamic get_concatenatedColorTransform_dyn();

		virtual ::openfl::_legacy::geom::Matrix get_concatenatedMatrix( );
		Dynamic get_concatenatedMatrix_dyn();

		virtual ::openfl::_legacy::geom::Matrix get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::openfl::_legacy::geom::Matrix set_matrix( ::openfl::_legacy::geom::Matrix value);
		Dynamic set_matrix_dyn();

		virtual ::openfl::geom::Matrix3D get_matrix3D( );
		Dynamic get_matrix3D_dyn();

		virtual ::openfl::geom::Matrix3D set_matrix3D( ::openfl::geom::Matrix3D value);
		Dynamic set_matrix3D_dyn();

		virtual ::openfl::_legacy::geom::Rectangle get_pixelBounds( );
		Dynamic get_pixelBounds_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom

#endif /* INCLUDED_openfl__legacy_geom_Transform */ 
