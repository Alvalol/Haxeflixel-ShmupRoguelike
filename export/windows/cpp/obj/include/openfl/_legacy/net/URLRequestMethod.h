#ifndef INCLUDED_openfl__legacy_net_URLRequestMethod
#define INCLUDED_openfl__legacy_net_URLRequestMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequestMethod)
namespace openfl{
namespace _legacy{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLRequestMethod_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequestMethod_obj OBJ_;
		URLRequestMethod_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.net.URLRequestMethod")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLRequestMethod_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLRequestMethod_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("URLRequestMethod","\xc1","\x12","\x01","\xb4"); }

		static void __boot();
		static ::String DELETE;
		static ::String GET;
		static ::String HEAD;
		static ::String OPTIONS;
		static ::String POST;
		static ::String PUT;
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net

#endif /* INCLUDED_openfl__legacy_net_URLRequestMethod */ 
