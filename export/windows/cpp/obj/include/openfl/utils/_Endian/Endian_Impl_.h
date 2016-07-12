#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#define INCLUDED_openfl_utils__Endian_Endian_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,utils,_Endian,Endian_Impl_)
namespace openfl{
namespace utils{
namespace _Endian{


class HXCPP_CLASS_ATTRIBUTES  Endian_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Endian_Impl__obj OBJ_;
		Endian_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.utils._Endian.Endian_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Endian_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Endian_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Endian_Impl_","\x9b","\x07","\x25","\x91"); }

		static void __boot();
		static Dynamic _BIG_ENDIAN;
		static Dynamic _LITTLE_ENDIAN;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _Endian

#endif /* INCLUDED_openfl_utils__Endian_Endian_Impl_ */ 
