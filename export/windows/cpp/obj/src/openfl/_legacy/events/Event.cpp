#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void Event_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl._legacy.events.Event","new",0xfb90e03b,"openfl._legacy.events.Event.new","openfl/_legacy/events/Event.hx",56,0xcca9b1d4)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(58)
	this->__type = type;
	HX_STACK_LINE(59)
	this->__bubbles = bubbles;
	HX_STACK_LINE(60)
	this->__cancelable = cancelable;
	HX_STACK_LINE(61)
	this->__isCancelled = false;
	HX_STACK_LINE(62)
	this->__isCancelledNow = false;
	HX_STACK_LINE(63)
	this->__target = null();
	HX_STACK_LINE(64)
	this->__currentTarget = null();
	HX_STACK_LINE(65)
	this->__eventPhase = (int)2;
}
;
	return null();
}

//Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hx::ObjectPtr< Event_obj > Event_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable);
	return _result_;}

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Event_obj > _result_ = new Event_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::openfl::_legacy::events::Event Event_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","clone",0x58e80ff8,"openfl._legacy.events.Event.clone","openfl/_legacy/events/Event.hx",70,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,clone,return )

bool Event_obj::isDefaultPrevented( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","isDefaultPrevented",0x6e262ec5,"openfl._legacy.events.Event.isDefaultPrevented","openfl/_legacy/events/Event.hx",77,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	bool tmp = this->__isCancelled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	if ((tmp1)){
		HX_STACK_LINE(79)
		tmp2 = this->__isCancelledNow;
	}
	else{
		HX_STACK_LINE(79)
		tmp2 = true;
	}
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,isDefaultPrevented,return )

Void Event_obj::stopImmediatePropagation( ){
{
		HX_STACK_FRAME("openfl._legacy.events.Event","stopImmediatePropagation",0x3e5eefc2,"openfl._legacy.events.Event.stopImmediatePropagation","openfl/_legacy/events/Event.hx",84,0xcca9b1d4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		bool tmp = this->get_cancelable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		if ((tmp)){
			HX_STACK_LINE(88)
			this->__isCancelled = true;
			HX_STACK_LINE(89)
			this->__isCancelledNow = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopImmediatePropagation,(void))

Void Event_obj::stopPropagation( ){
{
		HX_STACK_FRAME("openfl._legacy.events.Event","stopPropagation",0xf6346e45,"openfl._legacy.events.Event.stopPropagation","openfl/_legacy/events/Event.hx",96,0xcca9b1d4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		bool tmp = this->get_cancelable();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		if ((tmp)){
			HX_STACK_LINE(100)
			this->__isCancelled = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,stopPropagation,(void))

::String Event_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","toString",0x4aa366f1,"openfl._legacy.events.Event.toString","openfl/_legacy/events/Event.hx",107,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	::String tmp1 = (HX_HCSTRING("[Event type=","\x22","\x63","\x2e","\x48") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	::String tmp2 = (tmp1 + HX_HCSTRING(" bubbles=","\x16","\x5f","\xba","\x28"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(109)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(109)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(109)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	::String tmp10 = (tmp9 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(109)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,toString,return )

::String Event_obj::__formatToString( ::String className,Array< ::String > parameters){
	HX_STACK_FRAME("openfl._legacy.events.Event","__formatToString",0x623f1968,"openfl._legacy.events.Event.__formatToString","openfl/_legacy/events/Event.hx",114,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(118)
	::String tmp = (HX_HCSTRING("[","\x5b","\x00","\x00","\x00") + className);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	::String output = tmp;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(119)
	Dynamic arg = null();		HX_STACK_VAR(arg,"arg");
	HX_STACK_LINE(121)
	{
		HX_STACK_LINE(121)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		while((true)){
			HX_STACK_LINE(121)
			bool tmp1 = (_g < parameters->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(121)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			if ((tmp2)){
				HX_STACK_LINE(121)
				break;
			}
			HX_STACK_LINE(121)
			::String tmp3 = parameters->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			::String param = tmp3;		HX_STACK_VAR(param,"param");
			HX_STACK_LINE(121)
			++(_g);
			HX_STACK_LINE(123)
			::String tmp4 = param;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			Dynamic tmp5 = ::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			arg = tmp5;
			HX_STACK_LINE(125)
			Dynamic tmp6 = arg;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(125)
			if ((tmp7)){
				HX_STACK_LINE(127)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + param);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(127)
				::String tmp9 = (tmp8 + HX_HCSTRING("=\"","\x45","\x35","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(127)
				Dynamic tmp10 = arg;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(127)
				::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(127)
				hx::AddEq(output,tmp13);
			}
			else{
				HX_STACK_LINE(131)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + param);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(131)
				::String tmp9 = (tmp8 + HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(131)
				Dynamic tmp10 = arg;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(131)
				::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(131)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(131)
				hx::AddEq(output,tmp12);
			}
		}
	}
	HX_STACK_LINE(137)
	hx::AddEq(output,HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));
	HX_STACK_LINE(138)
	::String tmp1 = output;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Event_obj,__formatToString,return )

bool Event_obj::__getIsCancelled( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","__getIsCancelled",0x715efeb6,"openfl._legacy.events.Event.__getIsCancelled","openfl/_legacy/events/Event.hx",143,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	bool tmp = this->__isCancelled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,__getIsCancelled,return )

bool Event_obj::__getIsCancelledNow( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","__getIsCancelledNow",0x9a1c2800,"openfl._legacy.events.Event.__getIsCancelledNow","openfl/_legacy/events/Event.hx",150,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	bool tmp = this->__isCancelledNow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,__getIsCancelledNow,return )

Void Event_obj::__setPhase( int value){
{
		HX_STACK_FRAME("openfl._legacy.events.Event","__setPhase",0xec9075de,"openfl._legacy.events.Event.__setPhase","openfl/_legacy/events/Event.hx",159,0xcca9b1d4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(159)
		this->__eventPhase = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,__setPhase,(void))

bool Event_obj::get_bubbles( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_bubbles",0x8139fe59,"openfl._legacy.events.Event.get_bubbles","openfl/_legacy/events/Event.hx",171,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	bool tmp = this->__bubbles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_bubbles,return )

bool Event_obj::get_cancelable( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_cancelable",0xb4814062,"openfl._legacy.events.Event.get_cancelable","openfl/_legacy/events/Event.hx",172,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	bool tmp = this->__cancelable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_cancelable,return )

Dynamic Event_obj::get_currentTarget( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_currentTarget",0xee5478dc,"openfl._legacy.events.Event.get_currentTarget","openfl/_legacy/events/Event.hx",173,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	Dynamic tmp = this->__currentTarget;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_currentTarget,return )

Dynamic Event_obj::set_currentTarget( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.events.Event","set_currentTarget",0x11c250e8,"openfl._legacy.events.Event.set_currentTarget","openfl/_legacy/events/Event.hx",174,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(174)
	Dynamic tmp = this->__currentTarget = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,set_currentTarget,return )

int Event_obj::get_eventPhase( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_eventPhase",0x2e4bd20f,"openfl._legacy.events.Event.get_eventPhase","openfl/_legacy/events/Event.hx",175,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	int tmp = this->__eventPhase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_eventPhase,return )

Dynamic Event_obj::get_target( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_target",0xf0aed49f,"openfl._legacy.events.Event.get_target","openfl/_legacy/events/Event.hx",176,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	Dynamic tmp = this->__target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_target,return )

Dynamic Event_obj::set_target( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.events.Event","set_target",0xf42c7313,"openfl._legacy.events.Event.set_target","openfl/_legacy/events/Event.hx",177,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(177)
	Dynamic tmp = this->__target = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Event_obj,set_target,return )

::String Event_obj::get_type( ){
	HX_STACK_FRAME("openfl._legacy.events.Event","get_type",0xdef84488,"openfl._legacy.events.Event.get_type","openfl/_legacy/events/Event.hx",178,0xcca9b1d4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::String tmp = this->__type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Event_obj,get_type,return )

::String Event_obj::ACTIVATE;

::String Event_obj::ADDED;

::String Event_obj::ADDED_TO_STAGE;

::String Event_obj::CANCEL;

::String Event_obj::CHANGE;

::String Event_obj::CLOSE;

::String Event_obj::COMPLETE;

::String Event_obj::CONNECT;

::String Event_obj::CONTEXT3D_CREATE;

::String Event_obj::DEACTIVATE;

::String Event_obj::ENTER_FRAME;

::String Event_obj::ID3;

::String Event_obj::INIT;

::String Event_obj::MOUSE_LEAVE;

::String Event_obj::OPEN;

::String Event_obj::REMOVED;

::String Event_obj::REMOVED_FROM_STAGE;

::String Event_obj::RENDER;

::String Event_obj::RESIZE;

::String Event_obj::SCROLL;

::String Event_obj::SELECT;

::String Event_obj::SOUND_COMPLETE;

::String Event_obj::TAB_CHILDREN_CHANGE;

::String Event_obj::TAB_ENABLED_CHANGE;

::String Event_obj::TAB_INDEX_CHANGE;

::String Event_obj::UNLOAD;


Event_obj::Event_obj()
{
}

void Event_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Event);
	HX_MARK_MEMBER_NAME(__bubbles,"__bubbles");
	HX_MARK_MEMBER_NAME(__cancelable,"__cancelable");
	HX_MARK_MEMBER_NAME(__currentTarget,"__currentTarget");
	HX_MARK_MEMBER_NAME(__eventPhase,"__eventPhase");
	HX_MARK_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_MARK_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_MARK_MEMBER_NAME(__target,"__target");
	HX_MARK_MEMBER_NAME(__type,"__type");
	HX_MARK_END_CLASS();
}

void Event_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bubbles,"__bubbles");
	HX_VISIT_MEMBER_NAME(__cancelable,"__cancelable");
	HX_VISIT_MEMBER_NAME(__currentTarget,"__currentTarget");
	HX_VISIT_MEMBER_NAME(__eventPhase,"__eventPhase");
	HX_VISIT_MEMBER_NAME(__isCancelled,"__isCancelled");
	HX_VISIT_MEMBER_NAME(__isCancelledNow,"__isCancelledNow");
	HX_VISIT_MEMBER_NAME(__target,"__target");
	HX_VISIT_MEMBER_NAME(__type,"__type");
}

Dynamic Event_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return get_target(); }
		if (HX_FIELD_EQ(inName,"__type") ) { return __type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bubbles") ) { if (inCallProp == hx::paccAlways) return get_bubbles(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__target") ) { return __target; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__bubbles") ) { return __bubbles; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelable") ) { if (inCallProp == hx::paccAlways) return get_cancelable(); }
		if (HX_FIELD_EQ(inName,"eventPhase") ) { if (inCallProp == hx::paccAlways) return get_eventPhase(); }
		if (HX_FIELD_EQ(inName,"__setPhase") ) { return __setPhase_dyn(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_bubbles") ) { return get_bubbles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__cancelable") ) { return __cancelable; }
		if (HX_FIELD_EQ(inName,"__eventPhase") ) { return __eventPhase; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { if (inCallProp == hx::paccAlways) return get_currentTarget(); }
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { return __isCancelled; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_cancelable") ) { return get_cancelable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_eventPhase") ) { return get_eventPhase_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentTarget") ) { return __currentTarget; }
		if (HX_FIELD_EQ(inName,"stopPropagation") ) { return stopPropagation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { return __isCancelledNow; }
		if (HX_FIELD_EQ(inName,"__formatToString") ) { return __formatToString_dyn(); }
		if (HX_FIELD_EQ(inName,"__getIsCancelled") ) { return __getIsCancelled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_currentTarget") ) { return get_currentTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentTarget") ) { return set_currentTarget_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isDefaultPrevented") ) { return isDefaultPrevented_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__getIsCancelledNow") ) { return __getIsCancelledNow_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"stopImmediatePropagation") ) { return stopImmediatePropagation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Event_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { outValue = ID3; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { outValue = INIT; return true;  }
		if (HX_FIELD_EQ(inName,"OPEN") ) { outValue = OPEN; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { outValue = ADDED; return true;  }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { outValue = CLOSE; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { outValue = CANCEL; return true;  }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { outValue = CHANGE; return true;  }
		if (HX_FIELD_EQ(inName,"RENDER") ) { outValue = RENDER; return true;  }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { outValue = RESIZE; return true;  }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { outValue = SCROLL; return true;  }
		if (HX_FIELD_EQ(inName,"SELECT") ) { outValue = SELECT; return true;  }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { outValue = UNLOAD; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { outValue = CONNECT; return true;  }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { outValue = REMOVED; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { outValue = ACTIVATE; return true;  }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { outValue = COMPLETE; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { outValue = DEACTIVATE; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { outValue = ENTER_FRAME; return true;  }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { outValue = MOUSE_LEAVE; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { outValue = ADDED_TO_STAGE; return true;  }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { outValue = SOUND_COMPLETE; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { outValue = CONTEXT3D_CREATE; return true;  }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { outValue = TAB_INDEX_CHANGE; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { outValue = REMOVED_FROM_STAGE; return true;  }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { outValue = TAB_ENABLED_CHANGE; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { outValue = TAB_CHILDREN_CHANGE; return true;  }
	}
	return false;
}

Dynamic Event_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return set_target(inValue); }
		if (HX_FIELD_EQ(inName,"__type") ) { __type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__target") ) { __target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__bubbles") ) { __bubbles=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__cancelable") ) { __cancelable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__eventPhase") ) { __eventPhase=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentTarget") ) { if (inCallProp == hx::paccAlways) return set_currentTarget(inValue); }
		if (HX_FIELD_EQ(inName,"__isCancelled") ) { __isCancelled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentTarget") ) { __currentTarget=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__isCancelledNow") ) { __isCancelledNow=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Event_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ID3") ) { ID3=ioValue.Cast< ::String >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"INIT") ) { INIT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=ioValue.Cast< ::String >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ADDED") ) { ADDED=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"CLOSE") ) { CLOSE=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CANCEL") ) { CANCEL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"CHANGE") ) { CHANGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"RENDER") ) { RENDER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"RESIZE") ) { RESIZE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SCROLL") ) { SCROLL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"UNLOAD") ) { UNLOAD=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"CONNECT") ) { CONNECT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"REMOVED") ) { REMOVED=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ACTIVATE") ) { ACTIVATE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DEACTIVATE") ) { DEACTIVATE=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTER_FRAME") ) { ENTER_FRAME=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MOUSE_LEAVE") ) { MOUSE_LEAVE=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ADDED_TO_STAGE") ) { ADDED_TO_STAGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"SOUND_COMPLETE") ) { SOUND_COMPLETE=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CONTEXT3D_CREATE") ) { CONTEXT3D_CREATE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB_INDEX_CHANGE") ) { TAB_INDEX_CHANGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"REMOVED_FROM_STAGE") ) { REMOVED_FROM_STAGE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB_ENABLED_CHANGE") ) { TAB_ENABLED_CHANGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"TAB_CHILDREN_CHANGE") ) { TAB_CHILDREN_CHANGE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void Event_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61"));
	outFields->push(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4"));
	outFields->push(HX_HCSTRING("currentTarget","\x6a","\x74","\x49","\x6a"));
	outFields->push(HX_HCSTRING("eventPhase","\xc1","\x31","\x44","\x3e"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("__bubbles","\x47","\x0c","\xa5","\xe2"));
	outFields->push(HX_HCSTRING("__cancelable","\x34","\x1b","\x0d","\xfd"));
	outFields->push(HX_HCSTRING("__currentTarget","\x4a","\xad","\xfb","\xf1"));
	outFields->push(HX_HCSTRING("__eventPhase","\xe1","\xac","\xd7","\x76"));
	outFields->push(HX_HCSTRING("__isCancelled","\x27","\x7e","\x2d","\x49"));
	outFields->push(HX_HCSTRING("__isCancelledNow","\x2f","\x25","\xd8","\x53"));
	outFields->push(HX_HCSTRING("__target","\x71","\x5e","\x1c","\x2f"));
	outFields->push(HX_HCSTRING("__type","\xda","\x55","\x01","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Event_obj,__bubbles),HX_HCSTRING("__bubbles","\x47","\x0c","\xa5","\xe2")},
	{hx::fsBool,(int)offsetof(Event_obj,__cancelable),HX_HCSTRING("__cancelable","\x34","\x1b","\x0d","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,__currentTarget),HX_HCSTRING("__currentTarget","\x4a","\xad","\xfb","\xf1")},
	{hx::fsInt,(int)offsetof(Event_obj,__eventPhase),HX_HCSTRING("__eventPhase","\xe1","\xac","\xd7","\x76")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelled),HX_HCSTRING("__isCancelled","\x27","\x7e","\x2d","\x49")},
	{hx::fsBool,(int)offsetof(Event_obj,__isCancelledNow),HX_HCSTRING("__isCancelledNow","\x2f","\x25","\xd8","\x53")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Event_obj,__target),HX_HCSTRING("__target","\x71","\x5e","\x1c","\x2f")},
	{hx::fsString,(int)offsetof(Event_obj,__type),HX_HCSTRING("__type","\xda","\x55","\x01","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Event_obj::ACTIVATE,HX_HCSTRING("ACTIVATE","\xb3","\xab","\x31","\x3f")},
	{hx::fsString,(void *) &Event_obj::ADDED,HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a")},
	{hx::fsString,(void *) &Event_obj::ADDED_TO_STAGE,HX_HCSTRING("ADDED_TO_STAGE","\x59","\x58","\xdb","\x1a")},
	{hx::fsString,(void *) &Event_obj::CANCEL,HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a")},
	{hx::fsString,(void *) &Event_obj::CHANGE,HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69")},
	{hx::fsString,(void *) &Event_obj::CLOSE,HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6")},
	{hx::fsString,(void *) &Event_obj::COMPLETE,HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9")},
	{hx::fsString,(void *) &Event_obj::CONNECT,HX_HCSTRING("CONNECT","\xca","\x0f","\x54","\x95")},
	{hx::fsString,(void *) &Event_obj::CONTEXT3D_CREATE,HX_HCSTRING("CONTEXT3D_CREATE","\x5b","\xc4","\x3d","\x41")},
	{hx::fsString,(void *) &Event_obj::DEACTIVATE,HX_HCSTRING("DEACTIVATE","\x34","\xd0","\x0a","\x2e")},
	{hx::fsString,(void *) &Event_obj::ENTER_FRAME,HX_HCSTRING("ENTER_FRAME","\x46","\xa6","\xab","\xc6")},
	{hx::fsString,(void *) &Event_obj::ID3,HX_HCSTRING("ID3","\xf8","\x9f","\x37","\x00")},
	{hx::fsString,(void *) &Event_obj::INIT,HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30")},
	{hx::fsString,(void *) &Event_obj::MOUSE_LEAVE,HX_HCSTRING("MOUSE_LEAVE","\xdd","\xd3","\xd5","\xd0")},
	{hx::fsString,(void *) &Event_obj::OPEN,HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34")},
	{hx::fsString,(void *) &Event_obj::REMOVED,HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72")},
	{hx::fsString,(void *) &Event_obj::REMOVED_FROM_STAGE,HX_HCSTRING("REMOVED_FROM_STAGE","\x68","\xcc","\x72","\xdb")},
	{hx::fsString,(void *) &Event_obj::RENDER,HX_HCSTRING("RENDER","\x56","\x17","\xac","\xb7")},
	{hx::fsString,(void *) &Event_obj::RESIZE,HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba")},
	{hx::fsString,(void *) &Event_obj::SCROLL,HX_HCSTRING("SCROLL","\x0d","\x84","\xe7","\xf9")},
	{hx::fsString,(void *) &Event_obj::SELECT,HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c")},
	{hx::fsString,(void *) &Event_obj::SOUND_COMPLETE,HX_HCSTRING("SOUND_COMPLETE","\x89","\x35","\x98","\xf1")},
	{hx::fsString,(void *) &Event_obj::TAB_CHILDREN_CHANGE,HX_HCSTRING("TAB_CHILDREN_CHANGE","\x66","\x8e","\x83","\x1c")},
	{hx::fsString,(void *) &Event_obj::TAB_ENABLED_CHANGE,HX_HCSTRING("TAB_ENABLED_CHANGE","\xd8","\x4a","\xcd","\x8b")},
	{hx::fsString,(void *) &Event_obj::TAB_INDEX_CHANGE,HX_HCSTRING("TAB_INDEX_CHANGE","\xe7","\xbd","\xc6","\xb6")},
	{hx::fsString,(void *) &Event_obj::UNLOAD,HX_HCSTRING("UNLOAD","\xff","\x4c","\x0f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__bubbles","\x47","\x0c","\xa5","\xe2"),
	HX_HCSTRING("__cancelable","\x34","\x1b","\x0d","\xfd"),
	HX_HCSTRING("__currentTarget","\x4a","\xad","\xfb","\xf1"),
	HX_HCSTRING("__eventPhase","\xe1","\xac","\xd7","\x76"),
	HX_HCSTRING("__isCancelled","\x27","\x7e","\x2d","\x49"),
	HX_HCSTRING("__isCancelledNow","\x2f","\x25","\xd8","\x53"),
	HX_HCSTRING("__target","\x71","\x5e","\x1c","\x2f"),
	HX_HCSTRING("__type","\xda","\x55","\x01","\xfc"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("isDefaultPrevented","\x40","\x30","\x27","\x04"),
	HX_HCSTRING("stopImmediatePropagation","\x7d","\xbf","\x66","\x5b"),
	HX_HCSTRING("stopPropagation","\xea","\x81","\x71","\xa0"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__formatToString","\x23","\x36","\x73","\xad"),
	HX_HCSTRING("__getIsCancelled","\x71","\x1b","\x93","\xbc"),
	HX_HCSTRING("__getIsCancelledNow","\x25","\x72","\xfc","\x44"),
	HX_HCSTRING("__setPhase","\x59","\x04","\x56","\x73"),
	HX_HCSTRING("get_bubbles","\x7e","\x1b","\x51","\xe7"),
	HX_HCSTRING("get_cancelable","\x5d","\x28","\x6f","\x3a"),
	HX_HCSTRING("get_currentTarget","\xc1","\x7f","\xb9","\x70"),
	HX_HCSTRING("set_currentTarget","\xcd","\x57","\x27","\x94"),
	HX_HCSTRING("get_eventPhase","\x0a","\xba","\x39","\xb4"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_MARK_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_MARK_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_MARK_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_MARK_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_MARK_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_MARK_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_MARK_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Event_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(Event_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(Event_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(Event_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::CONNECT,"CONNECT");
	HX_VISIT_MEMBER_NAME(Event_obj::CONTEXT3D_CREATE,"CONTEXT3D_CREATE");
	HX_VISIT_MEMBER_NAME(Event_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(Event_obj::ENTER_FRAME,"ENTER_FRAME");
	HX_VISIT_MEMBER_NAME(Event_obj::ID3,"ID3");
	HX_VISIT_MEMBER_NAME(Event_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(Event_obj::MOUSE_LEAVE,"MOUSE_LEAVE");
	HX_VISIT_MEMBER_NAME(Event_obj::OPEN,"OPEN");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(Event_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(Event_obj::RENDER,"RENDER");
	HX_VISIT_MEMBER_NAME(Event_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(Event_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(Event_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(Event_obj::SOUND_COMPLETE,"SOUND_COMPLETE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_CHILDREN_CHANGE,"TAB_CHILDREN_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_ENABLED_CHANGE,"TAB_ENABLED_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::TAB_INDEX_CHANGE,"TAB_INDEX_CHANGE");
	HX_VISIT_MEMBER_NAME(Event_obj::UNLOAD,"UNLOAD");
};

#endif

hx::Class Event_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACTIVATE","\xb3","\xab","\x31","\x3f"),
	HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a"),
	HX_HCSTRING("ADDED_TO_STAGE","\x59","\x58","\xdb","\x1a"),
	HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a"),
	HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69"),
	HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6"),
	HX_HCSTRING("COMPLETE","\xb9","\x90","\x4d","\xd9"),
	HX_HCSTRING("CONNECT","\xca","\x0f","\x54","\x95"),
	HX_HCSTRING("CONTEXT3D_CREATE","\x5b","\xc4","\x3d","\x41"),
	HX_HCSTRING("DEACTIVATE","\x34","\xd0","\x0a","\x2e"),
	HX_HCSTRING("ENTER_FRAME","\x46","\xa6","\xab","\xc6"),
	HX_HCSTRING("ID3","\xf8","\x9f","\x37","\x00"),
	HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30"),
	HX_HCSTRING("MOUSE_LEAVE","\xdd","\xd3","\xd5","\xd0"),
	HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34"),
	HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72"),
	HX_HCSTRING("REMOVED_FROM_STAGE","\x68","\xcc","\x72","\xdb"),
	HX_HCSTRING("RENDER","\x56","\x17","\xac","\xb7"),
	HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba"),
	HX_HCSTRING("SCROLL","\x0d","\x84","\xe7","\xf9"),
	HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c"),
	HX_HCSTRING("SOUND_COMPLETE","\x89","\x35","\x98","\xf1"),
	HX_HCSTRING("TAB_CHILDREN_CHANGE","\x66","\x8e","\x83","\x1c"),
	HX_HCSTRING("TAB_ENABLED_CHANGE","\xd8","\x4a","\xcd","\x8b"),
	HX_HCSTRING("TAB_INDEX_CHANGE","\xe7","\xbd","\xc6","\xb6"),
	HX_HCSTRING("UNLOAD","\xff","\x4c","\x0f","\x18"),
	::String(null()) };

void Event_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.Event","\xc9","\xa6","\x7f","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Event_obj::__GetStatic;
	__mClass->mSetStaticField = &Event_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Event_obj >;
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

void Event_obj::__boot()
{
	ACTIVATE= HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5");
	ADDED= HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c");
	ADDED_TO_STAGE= HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c");
	CANCEL= HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8");
	CHANGE= HX_HCSTRING("change","\x70","\x91","\x72","\xb7");
	CLOSE= HX_HCSTRING("close","\xb8","\x17","\x63","\x48");
	COMPLETE= HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f");
	CONNECT= HX_HCSTRING("connect","\xea","\x3b","\x80","\x15");
	CONTEXT3D_CREATE= HX_HCSTRING("context3DCreate","\x7c","\xbf","\x59","\x7b");
	DEACTIVATE= HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c");
	ENTER_FRAME= HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02");
	ID3= HX_HCSTRING("id3","\xf8","\x03","\x50","\x00");
	INIT= HX_HCSTRING("init","\x10","\x3b","\xbb","\x45");
	MOUSE_LEAVE= HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90");
	OPEN= HX_HCSTRING("open","\xca","\x03","\xb4","\x49");
	REMOVED= HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3");
	REMOVED_FROM_STAGE= HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba");
	RENDER= HX_HCSTRING("render","\x56","\x6b","\x29","\x05");
	RESIZE= HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08");
	SCROLL= HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47");
	SELECT= HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a");
	SOUND_COMPLETE= HX_HCSTRING("soundComplete","\xa8","\x30","\xe6","\x1c");
	TAB_CHILDREN_CHANGE= HX_HCSTRING("tabChildrenChange","\x44","\x91","\xb5","\xde");
	TAB_ENABLED_CHANGE= HX_HCSTRING("tabEnabledChange","\x3c","\x45","\x98","\x72");
	TAB_INDEX_CHANGE= HX_HCSTRING("tabIndexChange","\xcd","\x1d","\x78","\x90");
	UNLOAD= HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
