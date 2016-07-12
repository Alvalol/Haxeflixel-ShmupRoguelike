#ifndef INCLUDED_openfl_events_IOErrorEvent
#define INCLUDED_openfl_events_IOErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  IOErrorEvent_obj : public ::openfl::events::ErrorEvent_obj{
	public:
		typedef ::openfl::events::ErrorEvent_obj super;
		typedef IOErrorEvent_obj OBJ_;
		IOErrorEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.IOErrorEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< IOErrorEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IOErrorEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("IOErrorEvent","\xb8","\x16","\xb3","\x65"); }

		static void __boot();
		static ::String IO_ERROR;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_IOErrorEvent */ 
