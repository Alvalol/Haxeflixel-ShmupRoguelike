#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#define INCLUDED_openfl__legacy_events_EventDispatcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS4(openfl,_legacy,events,_EventDispatcher,Listener)
namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  EventDispatcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventDispatcher_obj OBJ_;
		EventDispatcher_obj();
		Void __construct(::openfl::_legacy::events::IEventDispatcher target);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.events.EventDispatcher")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventDispatcher_obj > __new(::openfl::_legacy::events::IEventDispatcher target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventDispatcher_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::_legacy::events::IEventDispatcher_obj *();
		::String __ToString() const { return HX_HCSTRING("EventDispatcher","\x41","\x82","\x63","\x5e"); }

		static int __sortByPriority( ::openfl::_legacy::events::_EventDispatcher::Listener l1,::openfl::_legacy::events::_EventDispatcher::Listener l2);
		static Dynamic __sortByPriority_dyn();

		::openfl::_legacy::events::IEventDispatcher __targetDispatcher;
		::haxe::ds::StringMap __eventMap;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		Dynamic addEventListener_dyn();

		virtual bool dispatchEvent( ::openfl::_legacy::events::Event event);
		Dynamic dispatchEvent_dyn();

		virtual bool hasEventListener( ::String type);
		Dynamic hasEventListener_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  capture);
		Dynamic removeEventListener_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool willTrigger( ::String type);
		Dynamic willTrigger_dyn();

		virtual Void __dispatchCompleteEvent( );
		Dynamic __dispatchCompleteEvent_dyn();

		virtual Void __dispatchIOErrorEvent( );
		Dynamic __dispatchIOErrorEvent_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_EventDispatcher */ 
