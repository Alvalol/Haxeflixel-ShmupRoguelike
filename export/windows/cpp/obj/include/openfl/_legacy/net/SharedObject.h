#ifndef INCLUDED_openfl__legacy_net_SharedObject
#define INCLUDED_openfl__legacy_net_SharedObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,net,SharedObject)
namespace openfl{
namespace _legacy{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  SharedObject_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef SharedObject_obj OBJ_;
		SharedObject_obj();
		Void __construct(::String name,::String localPath,Dynamic data);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.net.SharedObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SharedObject_obj > __new(::String name,::String localPath,Dynamic data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SharedObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SharedObject","\x64","\xa7","\x41","\x90"); }

		static Void mkdir( ::String directory);
		static Dynamic mkdir_dyn();

		static ::String getFilePath( ::String name,::String localPath);
		static Dynamic getFilePath_dyn();

		static ::openfl::_legacy::net::SharedObject getLocal( ::String name,::String localPath,hx::Null< bool >  secure);
		static Dynamic getLocal_dyn();

		static ::hx::Class resolveClass( ::String name);
		static Dynamic resolveClass_dyn();

		Dynamic data;
		int size;
		::String localPath;
		::String name;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Dynamic flush( hx::Null< int >  minDiskSpace);
		Dynamic flush_dyn();

		virtual Void setProperty( ::String propertyName,Dynamic value);
		Dynamic setProperty_dyn();

		virtual int get_size( );
		Dynamic get_size_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net

#endif /* INCLUDED_openfl__legacy_net_SharedObject */ 
