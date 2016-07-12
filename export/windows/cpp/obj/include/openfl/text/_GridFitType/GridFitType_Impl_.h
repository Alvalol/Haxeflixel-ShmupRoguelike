#ifndef INCLUDED_openfl_text__GridFitType_GridFitType_Impl_
#define INCLUDED_openfl_text__GridFitType_GridFitType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_GridFitType,GridFitType_Impl_)
namespace openfl{
namespace text{
namespace _GridFitType{


class HXCPP_CLASS_ATTRIBUTES  GridFitType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GridFitType_Impl__obj OBJ_;
		GridFitType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.text._GridFitType.GridFitType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GridFitType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GridFitType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GridFitType_Impl_","\x45","\x81","\x06","\x22"); }

		static void __boot();
		static Dynamic NONE;
		static Dynamic PIXEL;
		static Dynamic SUBPIXEL;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _GridFitType

#endif /* INCLUDED_openfl_text__GridFitType_GridFitType_Impl_ */ 
