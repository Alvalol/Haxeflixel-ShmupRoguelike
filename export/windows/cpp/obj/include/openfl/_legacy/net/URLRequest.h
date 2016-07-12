#ifndef INCLUDED_openfl__legacy_net_URLRequest
#define INCLUDED_openfl__legacy_net_URLRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)
namespace openfl{
namespace _legacy{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLRequest_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLRequest_obj OBJ_;
		URLRequest_obj();
		Void __construct(::String url);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.net.URLRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLRequest_obj > __new(::String url);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLRequest_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLRequest","\xc0","\x57","\xdd","\x76"); }

		static void __boot();
		static int AUTH_BASIC;
		static int AUTH_DIGEST;
		static int AUTH_GSSNEGOTIATE;
		static int AUTH_NTLM;
		static int AUTH_DIGEST_IE;
		static int AUTH_DIGEST_ANY;
		int authType;
		::String contentType;
		::String cookieString;
		::String credentials;
		Dynamic data;
		bool followRedirects;
		::String method;
		Array< ::Dynamic > requestHeaders;
		::String url;
		::String userAgent;
		bool verbose;
		::openfl::_legacy::utils::ByteArray __bytes;
		virtual Void basicAuth( ::String user,::String password);
		Dynamic basicAuth_dyn();

		virtual Void digestAuth( ::String user,::String password);
		Dynamic digestAuth_dyn();

		virtual Void __prepare( );
		Dynamic __prepare_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net

#endif /* INCLUDED_openfl__legacy_net_URLRequest */ 
