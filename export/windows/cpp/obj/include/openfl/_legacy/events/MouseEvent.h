#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#define INCLUDED_openfl__legacy_events_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace openfl{
namespace _legacy{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  MouseEvent_obj : public ::openfl::_legacy::events::Event_obj{
	public:
		typedef ::openfl::_legacy::events::Event_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.events.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MouseEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"); }

		static void __boot();
		static ::String DOUBLE_CLICK;
		static ::String CLICK;
		static ::String MIDDLE_CLICK;
		static ::String MIDDLE_MOUSE_DOWN;
		static ::String MIDDLE_MOUSE_UP;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_MOVE;
		static ::String MOUSE_OUT;
		static ::String MOUSE_OVER;
		static ::String MOUSE_UP;
		static ::String MOUSE_WHEEL;
		static ::String RIGHT_CLICK;
		static ::String RIGHT_MOUSE_DOWN;
		static ::String RIGHT_MOUSE_UP;
		static ::String ROLL_OUT;
		static ::String ROLL_OVER;
		static int efLeftDown;
		static int efShiftDown;
		static int efCtrlDown;
		static int efAltDown;
		static int efCommandDown;
		static ::openfl::_legacy::events::MouseEvent __create( ::String type,Dynamic event,::openfl::_legacy::geom::Point local,::openfl::_legacy::display::InteractiveObject target);
		static Dynamic __create_dyn();

		bool altKey;
		bool buttonDown;
		int clickCount;
		bool commandKey;
		bool ctrlKey;
		int delta;
		Float localX;
		Float localY;
		::openfl::_legacy::display::InteractiveObject relatedObject;
		bool shiftKey;
		Float stageX;
		Float stageY;
		virtual ::openfl::_legacy::events::Event clone( );

		virtual ::String toString( );

		virtual Void updateAfterEvent( );
		Dynamic updateAfterEvent_dyn();

		virtual ::openfl::_legacy::events::MouseEvent __createSimilar( ::String type,::openfl::_legacy::display::InteractiveObject related,::openfl::_legacy::display::InteractiveObject target);
		Dynamic __createSimilar_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace events

#endif /* INCLUDED_openfl__legacy_events_MouseEvent */ 
