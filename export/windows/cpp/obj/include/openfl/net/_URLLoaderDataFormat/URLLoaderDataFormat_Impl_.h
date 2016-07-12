#ifndef INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_
#define INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,net,_URLLoaderDataFormat,URLLoaderDataFormat_Impl_)
namespace openfl{
namespace net{
namespace _URLLoaderDataFormat{


class HXCPP_CLASS_ATTRIBUTES  URLLoaderDataFormat_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLLoaderDataFormat_Impl__obj OBJ_;
		URLLoaderDataFormat_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoaderDataFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("URLLoaderDataFormat_Impl_","\x43","\x31","\x80","\x7f"); }

		static void __boot();
		static Dynamic BINARY;
		static Dynamic TEXT;
		static Dynamic VARIABLES;
		static Dynamic fromString( ::String value);
		static Dynamic fromString_dyn();

		static ::String toString( int value);
		static Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace net
} // end namespace _URLLoaderDataFormat

#endif /* INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_ */ 
