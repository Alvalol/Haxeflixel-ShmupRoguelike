#ifndef INCLUDED_openfl_events_ErrorEvent
#define INCLUDED_openfl_events_ErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  ErrorEvent_obj : public ::openfl::events::TextEvent_obj{
	public:
		typedef ::openfl::events::TextEvent_obj super;
		typedef ErrorEvent_obj OBJ_;
		ErrorEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.ErrorEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ErrorEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ErrorEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ErrorEvent","\x52","\xbb","\x79","\xe1"); }

		static void __boot();
		static ::String ERROR;
		int errorID;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ErrorEvent */ 
