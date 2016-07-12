#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#define INCLUDED_openfl__legacy_events_TouchEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,TouchEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TouchEvent_obj : public ::openfl::_legacy::events::MouseEvent_obj{
	public:
		typedef ::openfl::_legacy::events::MouseEvent_obj super;
		typedef TouchEvent_obj OBJ_;
		TouchEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.events.TouchEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TouchEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TouchEvent","\xfb","\xaf","\x06","\x66"); }

		static void __boot();
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_END;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OUT;
		static ::String TOUCH_OVER;
		static ::String TOUCH_ROLL_OUT;
		static ::String TOUCH_ROLL_OVER;
		static ::String TOUCH_TAP;
		static ::openfl::_legacy::events::TouchEvent __create( ::String type,Dynamic event,::openfl::_legacy::geom::Point local,::openfl::_legacy::display::InteractiveObject target,Float sizeX,Float sizeY);
		static Dynamic __create_dyn();

		bool isPrimaryTouchPoint;
		Float pressure;
		Float sizeX;
		Float sizeY;
		int touchPointID;
		virtual ::openfl::_legacy::events::MouseEvent __createSimilar( ::String type,::openfl::_legacy::display::InteractiveObject related,::openfl::_legacy::display::InteractiveObject target);

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_TouchEvent */ 
