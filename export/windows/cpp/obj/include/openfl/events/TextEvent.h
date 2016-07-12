#ifndef INCLUDED_openfl_events_TextEvent
#define INCLUDED_openfl_events_TextEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TextEvent_obj : public ::openfl::_legacy::events::Event_obj{
	public:
		typedef ::openfl::_legacy::events::Event_obj super;
		typedef TextEvent_obj OBJ_;
		TextEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.TextEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEvent","\x0d","\x38","\x85","\xb0"); }

		static void __boot();
		static ::String LINK;
		static ::String TEXT_INPUT;
		::String text;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_TextEvent */ 
