#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events__EventDispatcher_Listener
#include <openfl/_legacy/events/_EventDispatcher/Listener.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void EventDispatcher_obj::__construct(::openfl::_legacy::events::IEventDispatcher target)
{
HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","new",0x6a7bf2c2,"openfl._legacy.events.EventDispatcher.new","openfl/_legacy/events/EventDispatcher.hx",20,0xebfd71ed)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(22)
	bool tmp = (target != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	if ((tmp)){
		HX_STACK_LINE(24)
		this->__targetDispatcher = target;
	}
}
;
	return null();
}

//EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::openfl::_legacy::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(target);
	return _result_;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::events::IEventDispatcher_obj)) return operator ::openfl::_legacy::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

EventDispatcher_obj::operator ::openfl::_legacy::events::IEventDispatcher_obj *()
	{ return new ::openfl::_legacy::events::IEventDispatcher_delegate_< EventDispatcher_obj >(this); }
Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","addEventListener",0xd9a8942b,"openfl._legacy.events.EventDispatcher.addEventListener","openfl/_legacy/events/EventDispatcher.hx",31,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(35)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			this->__eventMap = tmp2;
		}
		HX_STACK_LINE(39)
		::haxe::ds::StringMap tmp2 = this->__eventMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		if ((tmp5)){
			HX_STACK_LINE(41)
			Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(42)
			::openfl::_legacy::events::_EventDispatcher::Listener tmp6 = ::openfl::_legacy::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			list->push(tmp6);
			HX_STACK_LINE(43)
			::haxe::ds::StringMap tmp7 = this->__eventMap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			tmp7->set(tmp8,list);
		}
		else{
			HX_STACK_LINE(47)
			::haxe::ds::StringMap tmp6 = this->__eventMap;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp6->get(tmp7)));		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(49)
				int _g = list->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				while((true)){
					HX_STACK_LINE(49)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(49)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(49)
					if ((tmp9)){
						HX_STACK_LINE(49)
						break;
					}
					HX_STACK_LINE(49)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(49)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(51)
					::openfl::_legacy::events::_EventDispatcher::Listener tmp11 = list->__get(i).StaticCast< ::openfl::_legacy::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(51)
					Dynamic tmp12 = tmp11->callback;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(51)
					Dynamic tmp13 = listener;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(51)
					bool tmp14 = ::Reflect_obj::compareMethods(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(51)
					if ((tmp14)){
						HX_STACK_LINE(51)
						return null();
					}
				}
			}
			HX_STACK_LINE(55)
			::openfl::_legacy::events::_EventDispatcher::Listener tmp8 = ::openfl::_legacy::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			list->push(tmp8);
			HX_STACK_LINE(56)
			Dynamic tmp9 = ::openfl::_legacy::events::EventDispatcher_obj::__sortByPriority_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			list->sort(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::_legacy::events::Event event){
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","dispatchEvent",0x51f077e2,"openfl._legacy.events.EventDispatcher.dispatchEvent","openfl/_legacy/events/EventDispatcher.hx",63,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	if ((tmp2)){
		HX_STACK_LINE(65)
		tmp3 = (event == null());
	}
	else{
		HX_STACK_LINE(65)
		tmp3 = true;
	}
	HX_STACK_LINE(65)
	if ((tmp3)){
		HX_STACK_LINE(65)
		return false;
	}
	HX_STACK_LINE(67)
	Array< ::Dynamic > list;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::String tmp4 = event->get_type();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::String key = tmp4;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(67)
		::haxe::ds::StringMap tmp5 = this->__eventMap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		list = tmp5->get(tmp6);
	}
	HX_STACK_LINE(69)
	bool tmp4 = (list == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	if ((tmp4)){
		HX_STACK_LINE(69)
		return false;
	}
	HX_STACK_LINE(71)
	Dynamic tmp5 = event->get_target();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	if ((tmp6)){
		HX_STACK_LINE(73)
		::openfl::_legacy::events::IEventDispatcher tmp7 = this->__targetDispatcher;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		if ((tmp8)){
			HX_STACK_LINE(75)
			::openfl::_legacy::events::IEventDispatcher tmp9 = this->__targetDispatcher;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(75)
			event->set_target(tmp9);
		}
		else{
			HX_STACK_LINE(79)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(85)
	event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(87)
	int tmp7 = event->get_eventPhase();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(87)
	bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	bool capture = tmp8;		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(88)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(89)
	::openfl::_legacy::events::_EventDispatcher::Listener listener;		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(91)
	while((true)){
		HX_STACK_LINE(91)
		bool tmp9 = (index < list->length);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		if ((tmp10)){
			HX_STACK_LINE(91)
			break;
		}
		HX_STACK_LINE(93)
		::openfl::_legacy::events::_EventDispatcher::Listener tmp11 = list->__get(index).StaticCast< ::openfl::_legacy::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		listener = tmp11;
		HX_STACK_LINE(95)
		bool tmp12 = (listener->useCapture == capture);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(95)
		if ((tmp12)){
			HX_STACK_LINE(98)
			::openfl::_legacy::events::Event tmp13 = event;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(98)
			listener->callback(tmp13);
			HX_STACK_LINE(100)
			bool tmp14 = event->__isCancelledNow;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			if ((tmp14)){
				HX_STACK_LINE(102)
				return true;
			}
		}
		HX_STACK_LINE(108)
		::openfl::_legacy::events::_EventDispatcher::Listener tmp13 = listener;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(108)
		::openfl::_legacy::events::_EventDispatcher::Listener tmp14 = list->__get(index).StaticCast< ::openfl::_legacy::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(108)
		bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		if ((tmp15)){
			HX_STACK_LINE(110)
			(index)++;
		}
	}
	HX_STACK_LINE(116)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","hasEventListener",0xf52eb752,"openfl._legacy.events.EventDispatcher.hasEventListener","openfl/_legacy/events/EventDispatcher.hx",121,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(123)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	if ((tmp1)){
		HX_STACK_LINE(123)
		return false;
	}
	HX_STACK_LINE(124)
	::haxe::ds::StringMap tmp2 = this->__eventMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(124)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(124)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","removeEventListener",0x12d80e2c,"openfl._legacy.events.EventDispatcher.removeEventListener","openfl/_legacy/events/EventDispatcher.hx",129,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(133)
		::haxe::ds::StringMap tmp2 = this->__eventMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		Array< ::Dynamic > list = ((Array< ::Dynamic >)(tmp2->get(tmp3)));		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(135)
		bool tmp4 = (list == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		if ((tmp4)){
			HX_STACK_LINE(135)
			return null();
		}
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(137)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				if ((tmp6)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(139)
				::openfl::_legacy::events::_EventDispatcher::Listener tmp8 = list->__get(i).StaticCast< ::openfl::_legacy::events::_EventDispatcher::Listener >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				Dynamic tmp9 = listener;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(139)
				bool tmp10 = capture;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				bool tmp11 = tmp8->match(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(139)
				if ((tmp11)){
					HX_STACK_LINE(141)
					int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(141)
					list->splice(tmp12,(int)1);
					HX_STACK_LINE(142)
					break;
				}
			}
		}
		HX_STACK_LINE(148)
		bool tmp5 = (list->length == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		if ((tmp5)){
			HX_STACK_LINE(150)
			::haxe::ds::StringMap tmp6 = this->__eventMap;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp6->remove(tmp7);
		}
		HX_STACK_LINE(154)
		::haxe::ds::StringMap tmp6 = this->__eventMap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		bool tmp8 = tmp7->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		if ((tmp9)){
			HX_STACK_LINE(156)
			this->__eventMap = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","toString",0x4e84cb0a,"openfl._legacy.events.EventDispatcher.toString","openfl/_legacy/events/EventDispatcher.hx",163,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	::String full = tmp1;		HX_STACK_VAR(full,"full");
	HX_STACK_LINE(166)
	::String tmp2 = full.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->pop();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	::String _short = tmp2;		HX_STACK_VAR(_short,"short");
	HX_STACK_LINE(168)
	::String tmp3 = (HX_HCSTRING("[object ","\x86","\xf9","\x3d","\xd7") + _short);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(168)
	::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(168)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","willTrigger",0x7ac448a8,"openfl._legacy.events.EventDispatcher.willTrigger","openfl/_legacy/events/EventDispatcher.hx",173,0xebfd71ed)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(175)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	bool tmp1 = this->hasEventListener(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

Void EventDispatcher_obj::__dispatchCompleteEvent( ){
{
		HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","__dispatchCompleteEvent",0x002ac5c9,"openfl._legacy.events.EventDispatcher.__dispatchCompleteEvent","openfl/_legacy/events/EventDispatcher.hx",180,0xebfd71ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		::String tmp = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::openfl::_legacy::events::Event tmp1 = ::openfl::_legacy::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,__dispatchCompleteEvent,(void))

Void EventDispatcher_obj::__dispatchIOErrorEvent( ){
{
		HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","__dispatchIOErrorEvent",0x8653da70,"openfl._legacy.events.EventDispatcher.__dispatchIOErrorEvent","openfl/_legacy/events/EventDispatcher.hx",187,0xebfd71ed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::openfl::events::IOErrorEvent tmp = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		this->dispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,__dispatchIOErrorEvent,(void))

int EventDispatcher_obj::__sortByPriority( ::openfl::_legacy::events::_EventDispatcher::Listener l1,::openfl::_legacy::events::_EventDispatcher::Listener l2){
	HX_STACK_FRAME("openfl._legacy.events.EventDispatcher","__sortByPriority",0x571c1cd7,"openfl._legacy.events.EventDispatcher.__sortByPriority","openfl/_legacy/events/EventDispatcher.hx",194,0xebfd71ed)
	HX_STACK_ARG(l1,"l1")
	HX_STACK_ARG(l2,"l2")
	HX_STACK_LINE(196)
	bool tmp = (l1->priority == l2->priority);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	if ((tmp)){
		HX_STACK_LINE(196)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(196)
		bool tmp2 = (l1->priority > l2->priority);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		if ((tmp2)){
			HX_STACK_LINE(196)
			tmp1 = (int)-1;
		}
		else{
			HX_STACK_LINE(196)
			tmp1 = (int)1;
		}
	}
	HX_STACK_LINE(196)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,__sortByPriority,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_MARK_MEMBER_NAME(__eventMap,"__eventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_VISIT_MEMBER_NAME(__eventMap,"__eventMap");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return __eventMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return __targetDispatcher; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__dispatchIOErrorEvent") ) { return __dispatchIOErrorEvent_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__dispatchCompleteEvent") ) { return __dispatchCompleteEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { outValue = __sortByPriority_dyn(); return true;  }
	}
	return false;
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { __eventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { __targetDispatcher=inValue.Cast< ::openfl::_legacy::events::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"));
	outFields->push(HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,__targetDispatcher),HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__eventMap),HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"),
	HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	HX_HCSTRING("__dispatchCompleteEvent","\x67","\x66","\xc8","\xca"),
	HX_HCSTRING("__dispatchIOErrorEvent","\x92","\xb7","\x17","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__sortByPriority","\x79","\x94","\xd7","\x6e"),
	::String(null()) };

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.EventDispatcher","\xd0","\x29","\x1f","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
