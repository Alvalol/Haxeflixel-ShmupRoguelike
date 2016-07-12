#ifndef INCLUDED_openfl_events_SampleDataEvent
#define INCLUDED_openfl_events_SampleDataEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,events,SampleDataEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  SampleDataEvent_obj : public ::openfl::_legacy::events::Event_obj{
	public:
		typedef ::openfl::_legacy::events::Event_obj super;
		typedef SampleDataEvent_obj OBJ_;
		SampleDataEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.SampleDataEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SampleDataEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SampleDataEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SampleDataEvent","\xe6","\x7b","\xb4","\x20"); }

		static void __boot();
		static ::String SAMPLE_DATA;
		::openfl::_legacy::utils::ByteArray data;
		Float position;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_SampleDataEvent */ 
