#ifndef INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager
#define INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLLoader)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS4(openfl,_legacy,net,_URLLoader,URLLoadersManager)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{


class HXCPP_CLASS_ATTRIBUTES  URLLoadersManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef URLLoadersManager_obj OBJ_;
		URLLoadersManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.net._URLLoader.URLLoadersManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLLoadersManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoadersManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLLoadersManager","\xfc","\xf8","\x08","\x2d"); }

		static void __boot();
		static ::openfl::_legacy::net::_URLLoader::URLLoadersManager instance;
		static ::openfl::_legacy::net::_URLLoader::URLLoadersManager getInstance( );
		static Dynamic getInstance_dyn();

		static Dynamic lime_curl_create;
		static Dynamic &lime_curl_create_dyn() { return lime_curl_create;}
		static Dynamic lime_curl_process_loaders;
		static Dynamic &lime_curl_process_loaders_dyn() { return lime_curl_process_loaders;}
		static Dynamic lime_curl_update_loader;
		static Dynamic &lime_curl_update_loader_dyn() { return lime_curl_update_loader;}
		static Dynamic lime_curl_get_code;
		static Dynamic &lime_curl_get_code_dyn() { return lime_curl_get_code;}
		static Dynamic lime_curl_get_error_message;
		static Dynamic &lime_curl_get_error_message_dyn() { return lime_curl_get_error_message;}
		static Dynamic lime_curl_get_data;
		static Dynamic &lime_curl_get_data_dyn() { return lime_curl_get_data;}
		static Dynamic lime_curl_get_cookies;
		static Dynamic &lime_curl_get_cookies_dyn() { return lime_curl_get_cookies;}
		static Dynamic lime_curl_get_headers;
		static Dynamic &lime_curl_get_headers_dyn() { return lime_curl_get_headers;}
		static Dynamic lime_curl_initialize;
		static Dynamic &lime_curl_initialize_dyn() { return lime_curl_initialize;}
		::cpp::vm::Thread managersThread;
		::List activeLoaders;
		cpp::ArrayBase loadsQueue;
		::cpp::vm::Mutex loadsQueueMutex;
		virtual Void mainLoop( );
		Dynamic mainLoop_dyn();

		virtual Void enqueueLoad( ::openfl::_legacy::net::URLLoader loader,::openfl::_legacy::net::URLRequest request);
		Dynamic enqueueLoad_dyn();

		virtual bool activeLoadersIsEmpty( );
		Dynamic activeLoadersIsEmpty_dyn();

		virtual ::List getActiveLoaders( );
		Dynamic getActiveLoaders_dyn();

		virtual Dynamic create( ::openfl::_legacy::net::URLRequest request);
		Dynamic create_dyn();

		virtual Void updateLoader( Dynamic handle,::openfl::_legacy::net::URLLoader loader);
		Dynamic updateLoader_dyn();

		virtual int getCode( Dynamic handle);
		Dynamic getCode_dyn();

		virtual ::String getErrorMessage( Dynamic handle);
		Dynamic getErrorMessage_dyn();

		virtual ::openfl::_legacy::utils::ByteArray getData( Dynamic handle);
		Dynamic getData_dyn();

		virtual Array< ::String > getHeaders( Dynamic handle);
		Dynamic getHeaders_dyn();

		virtual Void initialize( ::String caCertFilePath);
		Dynamic initialize_dyn();

		virtual Array< ::String > getCookies( Dynamic handle);
		Dynamic getCookies_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader

#endif /* INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager */ 
