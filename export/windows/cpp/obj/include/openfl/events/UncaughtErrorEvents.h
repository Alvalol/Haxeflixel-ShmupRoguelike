#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#define INCLUDED_openfl_events_UncaughtErrorEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvents)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  UncaughtErrorEvents_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef UncaughtErrorEvents_obj OBJ_;
		UncaughtErrorEvents_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.events.UncaughtErrorEvents")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UncaughtErrorEvents_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UncaughtErrorEvents_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UncaughtErrorEvents","\x4c","\x8c","\x89","\xa6"); }

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_UncaughtErrorEvents */ 
