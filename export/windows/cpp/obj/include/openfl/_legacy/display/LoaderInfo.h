#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#define INCLUDED_openfl__legacy_display_LoaderInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Loader)
HX_DECLARE_CLASS3(openfl,_legacy,display,LoaderInfo)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLLoader)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvents)
HX_DECLARE_CLASS2(openfl,_system,ApplicationDomain)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  LoaderInfo_obj : public ::openfl::_legacy::net::URLLoader_obj{
	public:
		typedef ::openfl::_legacy::net::URLLoader_obj super;
		typedef LoaderInfo_obj OBJ_;
		LoaderInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.LoaderInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LoaderInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoaderInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LoaderInfo","\x41","\xb6","\x95","\xad"); }

		static ::openfl::_legacy::display::LoaderInfo create( ::openfl::_legacy::display::Loader loader);
		static Dynamic create_dyn();

		::openfl::_system::ApplicationDomain applicationDomain;
		::openfl::_legacy::utils::ByteArray bytes;
		bool childAllowsParent;
		::openfl::_legacy::display::DisplayObject content;
		::String contentType;
		Float frameRate;
		int height;
		::openfl::_legacy::display::Loader loader;
		::String loaderURL;
		Dynamic parameters;
		bool parentAllowsChild;
		bool sameDomain;
		::openfl::_legacy::events::EventDispatcher sharedEvents;
		::String url;
		int width;
		::openfl::events::UncaughtErrorEvents uncaughtErrorEvents;
		::String __pendingURL;
		virtual Void load( ::openfl::_legacy::net::URLRequest request);

		virtual Void this_onComplete( ::openfl::_legacy::events::Event event);
		Dynamic this_onComplete_dyn();

		virtual ::openfl::_legacy::utils::ByteArray get_bytes( );
		Dynamic get_bytes_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_LoaderInfo */ 
