#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#define INCLUDED_openfl_events_UncaughtErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  UncaughtErrorEvent_obj : public ::openfl::events::ErrorEvent_obj{
	public:
		typedef ::openfl::events::ErrorEvent_obj super;
		typedef UncaughtErrorEvent_obj OBJ_;
		UncaughtErrorEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic error);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.UncaughtErrorEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UncaughtErrorEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic error);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UncaughtErrorEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UncaughtErrorEvent","\x47","\x72","\x9a","\xe0"); }

		static void __boot();
		static ::String UNCAUGHT_ERROR;
		Dynamic error;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_UncaughtErrorEvent */ 
