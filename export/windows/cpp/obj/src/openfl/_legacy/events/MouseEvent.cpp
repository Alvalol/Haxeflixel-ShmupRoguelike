#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void MouseEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{
HX_STACK_FRAME("openfl._legacy.events.MouseEvent","new",0x38af2e98,"openfl._legacy.events.MouseEvent.new","openfl/_legacy/events/MouseEvent.hx",47,0xe60bb539)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_localX,"localX")
HX_STACK_ARG(__o_localY,"localY")
HX_STACK_ARG(relatedObject,"relatedObject")
HX_STACK_ARG(__o_ctrlKey,"ctrlKey")
HX_STACK_ARG(__o_altKey,"altKey")
HX_STACK_ARG(__o_shiftKey,"shiftKey")
HX_STACK_ARG(__o_buttonDown,"buttonDown")
HX_STACK_ARG(__o_delta,"delta")
HX_STACK_ARG(__o_commandKey,"commandKey")
HX_STACK_ARG(__o_clickCount,"clickCount")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool buttonDown = __o_buttonDown.Default(false);
int delta = __o_delta.Default(0);
bool commandKey = __o_commandKey.Default(false);
int clickCount = __o_clickCount.Default(0);
{
	HX_STACK_LINE(49)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(51)
	this->localX = localX;
	HX_STACK_LINE(52)
	this->localY = localY;
	HX_STACK_LINE(53)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(54)
	this->ctrlKey = ctrlKey;
	HX_STACK_LINE(55)
	this->altKey = altKey;
	HX_STACK_LINE(56)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(57)
	this->buttonDown = buttonDown;
	HX_STACK_LINE(58)
	this->delta = delta;
	HX_STACK_LINE(59)
	this->commandKey = commandKey;
	HX_STACK_LINE(60)
	this->clickCount = clickCount;
}
;
	return null();
}

//MouseEvent_obj::~MouseEvent_obj() { }

Dynamic MouseEvent_obj::__CreateEmpty() { return  new MouseEvent_obj; }
hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return _result_;}

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MouseEvent_obj > _result_ = new MouseEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _result_;}

::openfl::_legacy::events::Event MouseEvent_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.events.MouseEvent","clone",0xd4fc6f95,"openfl._legacy.events.MouseEvent.clone","openfl/_legacy/events/MouseEvent.hx",65,0xe60bb539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Float tmp3 = this->localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	Float tmp4 = this->localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	::openfl::_legacy::display::InteractiveObject tmp5 = this->relatedObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	bool tmp6 = this->ctrlKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	bool tmp7 = this->altKey;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(67)
	bool tmp8 = this->shiftKey;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(67)
	bool tmp9 = this->buttonDown;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(67)
	int tmp10 = this->delta;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(67)
	bool tmp11 = this->commandKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(67)
	int tmp12 = this->clickCount;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(67)
	::openfl::_legacy::events::MouseEvent tmp13 = ::openfl::_legacy::events::MouseEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(67)
	return tmp13;
}


::String MouseEvent_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.MouseEvent","toString",0xc61ae774,"openfl._legacy.events.MouseEvent.toString","openfl/_legacy/events/MouseEvent.hx",72,0xe60bb539)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::String tmp1 = (HX_HCSTRING("[MouseEvent type=","\x13","\x70","\x9a","\x37") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	::String tmp2 = (tmp1 + HX_HCSTRING(" bubbles=","\x16","\x5f","\xba","\x28"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(74)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(74)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(74)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(74)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(74)
	::String tmp10 = (tmp9 + HX_HCSTRING(" localX=","\xf0","\xca","\x14","\x54"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(74)
	Float tmp11 = this->localX;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(74)
	::String tmp13 = (tmp12 + HX_HCSTRING(" localY=","\xcf","\xcb","\x14","\x54"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(74)
	Float tmp14 = this->localY;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(74)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(74)
	::String tmp16 = (tmp15 + HX_HCSTRING(" relatedObject=","\x13","\x62","\xef","\x68"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(74)
	::openfl::_legacy::display::InteractiveObject tmp17 = this->relatedObject;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(74)
	::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(74)
	::String tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(74)
	::String tmp20 = (tmp19 + HX_HCSTRING(" ctrlKey=","\x29","\xe8","\x3e","\x4a"));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(74)
	bool tmp21 = this->ctrlKey;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(74)
	::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(74)
	::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(74)
	::String tmp24 = (tmp23 + HX_HCSTRING(" altKey=","\x67","\x93","\xd6","\x12"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(74)
	bool tmp25 = this->altKey;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(74)
	::String tmp26 = ::Std_obj::string(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(74)
	::String tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(74)
	::String tmp28 = (tmp27 + HX_HCSTRING(" shiftKey=","\x40","\x5f","\x4f","\xdb"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(74)
	bool tmp29 = this->shiftKey;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(74)
	::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(74)
	::String tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(74)
	::String tmp32 = (tmp31 + HX_HCSTRING(" buttonDown=","\x29","\xd2","\x63","\x63"));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(74)
	bool tmp33 = this->buttonDown;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(74)
	::String tmp34 = ::Std_obj::string(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(74)
	::String tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(74)
	::String tmp36 = (tmp35 + HX_HCSTRING(" delta=","\x65","\xe9","\x92","\x9d"));		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(74)
	int tmp37 = this->delta;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(74)
	::String tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(74)
	::String tmp39 = (tmp38 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(74)
	return tmp39;
}


Void MouseEvent_obj::updateAfterEvent( ){
{
		HX_STACK_FRAME("openfl._legacy.events.MouseEvent","updateAfterEvent",0xc8141a8f,"openfl._legacy.events.MouseEvent.updateAfterEvent","openfl/_legacy/events/MouseEvent.hx",79,0xe60bb539)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,updateAfterEvent,(void))

::openfl::_legacy::events::MouseEvent MouseEvent_obj::__createSimilar( ::String type,::openfl::_legacy::display::InteractiveObject related,::openfl::_legacy::display::InteractiveObject target){
	HX_STACK_FRAME("openfl._legacy.events.MouseEvent","__createSimilar",0xe70509a7,"openfl._legacy.events.MouseEvent.__createSimilar","openfl/_legacy/events/MouseEvent.hx",98,0xe60bb539)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(related,"related")
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(100)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	Float tmp3 = this->localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	Float tmp4 = this->localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	bool tmp5 = (related == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(100)
	::openfl::_legacy::display::InteractiveObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(100)
	if ((tmp5)){
		HX_STACK_LINE(100)
		tmp6 = this->relatedObject;
	}
	else{
		HX_STACK_LINE(100)
		tmp6 = related;
	}
	HX_STACK_LINE(100)
	bool tmp7 = this->ctrlKey;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(100)
	bool tmp8 = this->altKey;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	bool tmp9 = this->shiftKey;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(100)
	bool tmp10 = this->buttonDown;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(100)
	int tmp11 = this->delta;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(100)
	bool tmp12 = this->commandKey;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(100)
	int tmp13 = this->clickCount;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(100)
	::openfl::_legacy::events::MouseEvent tmp14 = ::openfl::_legacy::events::MouseEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(100)
	::openfl::_legacy::events::MouseEvent mouseEvent = tmp14;		HX_STACK_VAR(mouseEvent,"mouseEvent");
	HX_STACK_LINE(102)
	Float tmp15 = this->stageX;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(102)
	mouseEvent->stageX = tmp15;
	HX_STACK_LINE(103)
	Float tmp16 = this->stageY;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(103)
	mouseEvent->stageY = tmp16;
	HX_STACK_LINE(105)
	bool tmp17 = (target != null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(105)
	if ((tmp17)){
		HX_STACK_LINE(107)
		::openfl::_legacy::display::InteractiveObject tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(107)
		mouseEvent->set_target(tmp18);
	}
	HX_STACK_LINE(111)
	::openfl::_legacy::events::MouseEvent tmp18 = mouseEvent;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(111)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC3(MouseEvent_obj,__createSimilar,return )

::String MouseEvent_obj::DOUBLE_CLICK;

::String MouseEvent_obj::CLICK;

::String MouseEvent_obj::MIDDLE_CLICK;

::String MouseEvent_obj::MIDDLE_MOUSE_DOWN;

::String MouseEvent_obj::MIDDLE_MOUSE_UP;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::RIGHT_CLICK;

::String MouseEvent_obj::RIGHT_MOUSE_DOWN;

::String MouseEvent_obj::RIGHT_MOUSE_UP;

::String MouseEvent_obj::ROLL_OUT;

::String MouseEvent_obj::ROLL_OVER;

int MouseEvent_obj::efLeftDown;

int MouseEvent_obj::efShiftDown;

int MouseEvent_obj::efCtrlDown;

int MouseEvent_obj::efAltDown;

int MouseEvent_obj::efCommandDown;

::openfl::_legacy::events::MouseEvent MouseEvent_obj::__create( ::String type,Dynamic event,::openfl::_legacy::geom::Point local,::openfl::_legacy::display::InteractiveObject target){
	HX_STACK_FRAME("openfl._legacy.events.MouseEvent","__create",0xb1eae8e4,"openfl._legacy.events.MouseEvent.__create","openfl/_legacy/events/MouseEvent.hx",86,0xe60bb539)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(local,"local")
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(88)
	int flags = event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic );		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(89)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = local->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Float tmp2 = local->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	int tmp3 = flags;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	int tmp4 = ::openfl::_legacy::events::MouseEvent_obj::efCtrlDown;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	int tmp5 = (int(tmp3) & int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	int tmp7 = flags;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(89)
	int tmp8 = ::openfl::_legacy::events::MouseEvent_obj::efAltDown;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	int tmp9 = (int(tmp7) & int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(89)
	bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(89)
	int tmp11 = flags;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(89)
	int tmp12 = ::openfl::_legacy::events::MouseEvent_obj::efShiftDown;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(89)
	int tmp13 = (int(tmp11) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(89)
	bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(89)
	int tmp15 = flags;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(89)
	int tmp16 = ::openfl::_legacy::events::MouseEvent_obj::efLeftDown;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(89)
	int tmp17 = (int(tmp15) & int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(89)
	bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(89)
	::openfl::_legacy::events::MouseEvent tmp19 = ::openfl::_legacy::events::MouseEvent_obj::__new(tmp,true,true,tmp1,tmp2,null(),tmp6,tmp10,tmp14,tmp18,(int)0,null(),(int)0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(89)
	::openfl::_legacy::events::MouseEvent mouseEvent = tmp19;		HX_STACK_VAR(mouseEvent,"mouseEvent");
	HX_STACK_LINE(90)
	mouseEvent->stageX = event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(91)
	mouseEvent->stageY = event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(92)
	::openfl::_legacy::display::InteractiveObject tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(92)
	mouseEvent->set_target(tmp20);
	HX_STACK_LINE(93)
	::openfl::_legacy::events::MouseEvent tmp21 = mouseEvent;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(93)
	return tmp21;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(MouseEvent_obj,__create,return )


MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(clickCount,"clickCount");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(clickCount,"clickCount");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return delta; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		if (HX_FIELD_EQ(inName,"localX") ) { return localX; }
		if (HX_FIELD_EQ(inName,"localY") ) { return localY; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return buttonDown; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { return clickCount; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createSimilar") ) { return __createSimilar_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MouseEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { outValue = CLICK; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { outValue = MOUSE_UP; return true;  }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { outValue = ROLL_OUT; return true;  }
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = __create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { outValue = MOUSE_OUT; return true;  }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { outValue = ROLL_OVER; return true;  }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { outValue = efAltDown; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { outValue = MOUSE_DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { outValue = MOUSE_MOVE; return true;  }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { outValue = MOUSE_OVER; return true;  }
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { outValue = efLeftDown; return true;  }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { outValue = efCtrlDown; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { outValue = MOUSE_WHEEL; return true;  }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { outValue = RIGHT_CLICK; return true;  }
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { outValue = efShiftDown; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { outValue = DOUBLE_CLICK; return true;  }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { outValue = MIDDLE_CLICK; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { outValue = efCommandDown; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { outValue = RIGHT_MOUSE_UP; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { outValue = MIDDLE_MOUSE_UP; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { outValue = RIGHT_MOUSE_DOWN; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { outValue = MIDDLE_MOUSE_DOWN; return true;  }
	}
	return false;
}

Dynamic MouseEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickCount") ) { clickCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::openfl::_legacy::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MouseEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CLICK") ) { CLICK=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MOUSE_UP") ) { MOUSE_UP=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ROLL_OUT") ) { ROLL_OUT=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MOUSE_OUT") ) { MOUSE_OUT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ROLL_OVER") ) { ROLL_OVER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOUSE_DOWN") ) { MOUSE_DOWN=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MOUSE_MOVE") ) { MOUSE_MOVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MOUSE_OVER") ) { MOUSE_OVER=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { efLeftDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MOUSE_WHEEL") ) { MOUSE_WHEEL=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"RIGHT_CLICK") ) { RIGHT_CLICK=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DOUBLE_CLICK") ) { DOUBLE_CLICK=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"MIDDLE_CLICK") ) { MIDDLE_CLICK=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { efCommandDown=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_UP") ) { RIGHT_MOUSE_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_UP") ) { MIDDLE_MOUSE_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"RIGHT_MOUSE_DOWN") ) { RIGHT_MOUSE_DOWN=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MIDDLE_MOUSE_DOWN") ) { MIDDLE_MOUSE_DOWN=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
	outFields->push(HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a"));
	outFields->push(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(MouseEvent_obj,altKey),HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,buttonDown),HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,clickCount),HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,commandKey),HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,ctrlKey),HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localX),HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,localY),HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")},
	{hx::fsObject /*::openfl::_legacy::display::InteractiveObject*/ ,(int)offsetof(MouseEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(MouseEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &MouseEvent_obj::DOUBLE_CLICK,HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68")},
	{hx::fsString,(void *) &MouseEvent_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_CLICK,HX_HCSTRING("MIDDLE_CLICK","\x7e","\x28","\x5f","\x94")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_MOUSE_DOWN,HX_HCSTRING("MIDDLE_MOUSE_DOWN","\x06","\xb0","\x34","\x98")},
	{hx::fsString,(void *) &MouseEvent_obj::MIDDLE_MOUSE_UP,HX_HCSTRING("MIDDLE_MOUSE_UP","\xff","\x48","\x8e","\xac")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_DOWN,HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_MOVE,HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OUT,HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_OVER,HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_UP,HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd")},
	{hx::fsString,(void *) &MouseEvent_obj::MOUSE_WHEEL,HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_CLICK,HX_HCSTRING("RIGHT_CLICK","\x25","\xb4","\xdd","\x1a")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_DOWN,HX_HCSTRING("RIGHT_MOUSE_DOWN","\xff","\x86","\xb7","\x29")},
	{hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_UP,HX_HCSTRING("RIGHT_MOUSE_UP","\xb8","\x3f","\xdb","\x17")},
	{hx::fsString,(void *) &MouseEvent_obj::ROLL_OUT,HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b")},
	{hx::fsString,(void *) &MouseEvent_obj::ROLL_OVER,HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda")},
	{hx::fsInt,(void *) &MouseEvent_obj::efLeftDown,HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c")},
	{hx::fsInt,(void *) &MouseEvent_obj::efShiftDown,HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4")},
	{hx::fsInt,(void *) &MouseEvent_obj::efCtrlDown,HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa")},
	{hx::fsInt,(void *) &MouseEvent_obj::efAltDown,HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8")},
	{hx::fsInt,(void *) &MouseEvent_obj::efCommandDown,HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"),
	HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),
	HX_HCSTRING("clickCount","\x67","\xb3","\xe2","\x8a"),
	HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"),
	HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"),
	HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updateAfterEvent","\xc7","\xfb","\xc7","\x22"),
	HX_HCSTRING("__createSimilar","\x6f","\x37","\xf9","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::efCommandDown,"efCommandDown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_CLICK,"MIDDLE_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_DOWN,"MIDDLE_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MIDDLE_MOUSE_UP,"MIDDLE_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::efCommandDown,"efCommandDown");
};

#endif

hx::Class MouseEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68"),
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	HX_HCSTRING("MIDDLE_CLICK","\x7e","\x28","\x5f","\x94"),
	HX_HCSTRING("MIDDLE_MOUSE_DOWN","\x06","\xb0","\x34","\x98"),
	HX_HCSTRING("MIDDLE_MOUSE_UP","\xff","\x48","\x8e","\xac"),
	HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde"),
	HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4"),
	HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11"),
	HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6"),
	HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd"),
	HX_HCSTRING("MOUSE_WHEEL","\x81","\xd3","\x3c","\x28"),
	HX_HCSTRING("RIGHT_CLICK","\x25","\xb4","\xdd","\x1a"),
	HX_HCSTRING("RIGHT_MOUSE_DOWN","\xff","\x86","\xb7","\x29"),
	HX_HCSTRING("RIGHT_MOUSE_UP","\xb8","\x3f","\xdb","\x17"),
	HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b"),
	HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda"),
	HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c"),
	HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4"),
	HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa"),
	HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8"),
	HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b"),
	HX_HCSTRING("__create","\x1c","\xd2","\x3e","\x24"),
	::String(null()) };

void MouseEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.MouseEvent","\xa6","\x42","\x26","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &MouseEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
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

void MouseEvent_obj::__boot()
{
	DOUBLE_CLICK= HX_HCSTRING("doubleClick","\x77","\x03","\x76","\xcd");
	CLICK= HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
	MIDDLE_CLICK= HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43");
	MIDDLE_MOUSE_DOWN= HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01");
	MIDDLE_MOUSE_UP= HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a");
	MOUSE_DOWN= HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
	MOUSE_MOVE= HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4");
	MOUSE_OUT= HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4");
	MOUSE_OVER= HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6");
	MOUSE_UP= HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
	MOUSE_WHEEL= HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7");
	RIGHT_CLICK= HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b");
	RIGHT_MOUSE_DOWN= HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd");
	RIGHT_MOUSE_UP= HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab");
	ROLL_OUT= HX_HCSTRING("rollOut","\x11","\xf9","\x11","\x5d");
	ROLL_OVER= HX_HCSTRING("rollOver","\x71","\xab","\xa8","\x12");
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
