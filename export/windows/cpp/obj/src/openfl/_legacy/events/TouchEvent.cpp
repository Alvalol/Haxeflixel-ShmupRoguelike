#include <hxcpp.h>

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
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void TouchEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{
HX_STACK_FRAME("openfl._legacy.events.TouchEvent","new",0xbe6529be,"openfl._legacy.events.TouchEvent.new","openfl/_legacy/events/TouchEvent.hx",27,0x427be0d3)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_localX,"localX")
HX_STACK_ARG(__o_localY,"localY")
HX_STACK_ARG(__o_sizeX,"sizeX")
HX_STACK_ARG(__o_sizeY,"sizeY")
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
Float sizeX = __o_sizeX.Default(1);
Float sizeY = __o_sizeY.Default(1);
bool ctrlKey = __o_ctrlKey.Default(false);
bool altKey = __o_altKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool buttonDown = __o_buttonDown.Default(false);
int delta = __o_delta.Default(0);
bool commandKey = __o_commandKey.Default(false);
int clickCount = __o_clickCount.Default(0);
{
	HX_STACK_LINE(29)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Float tmp3 = localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	Float tmp4 = localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	::openfl::_legacy::display::InteractiveObject tmp5 = relatedObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	bool tmp6 = ctrlKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	bool tmp7 = altKey;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	bool tmp8 = shiftKey;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	bool tmp9 = buttonDown;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	int tmp10 = delta;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	bool tmp11 = commandKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	int tmp12 = clickCount;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(29)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
	HX_STACK_LINE(31)
	this->pressure = (int)1;
	HX_STACK_LINE(32)
	this->touchPointID = (int)0;
	HX_STACK_LINE(33)
	this->isPrimaryTouchPoint = true;
	HX_STACK_LINE(34)
	this->sizeX = sizeX;
	HX_STACK_LINE(35)
	this->sizeY = sizeY;
}
;
	return null();
}

//TouchEvent_obj::~TouchEvent_obj() { }

Dynamic TouchEvent_obj::__CreateEmpty() { return  new TouchEvent_obj; }
hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_localX,__o_localY,__o_sizeX,__o_sizeY,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_buttonDown,__o_delta,__o_commandKey,__o_clickCount);
	return _result_;}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return _result_;}

::openfl::_legacy::events::MouseEvent TouchEvent_obj::__createSimilar( ::String type,::openfl::_legacy::display::InteractiveObject related,::openfl::_legacy::display::InteractiveObject target){
	HX_STACK_FRAME("openfl._legacy.events.TouchEvent","__createSimilar",0xbdda25cd,"openfl._legacy.events.TouchEvent.__createSimilar","openfl/_legacy/events/TouchEvent.hx",52,0x427be0d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(related,"related")
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(54)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	Float tmp3 = this->localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	Float tmp4 = this->localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	Float tmp5 = this->sizeX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	Float tmp6 = this->sizeY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	bool tmp7 = (related == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	::openfl::_legacy::display::InteractiveObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	if ((tmp7)){
		HX_STACK_LINE(54)
		tmp8 = this->relatedObject;
	}
	else{
		HX_STACK_LINE(54)
		tmp8 = related;
	}
	HX_STACK_LINE(54)
	bool tmp9 = this->ctrlKey;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(54)
	bool tmp10 = this->altKey;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(54)
	bool tmp11 = this->shiftKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	bool tmp12 = this->buttonDown;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(54)
	int tmp13 = this->delta;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(54)
	bool tmp14 = this->commandKey;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	int tmp15 = this->clickCount;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(54)
	::openfl::_legacy::events::TouchEvent tmp16 = ::openfl::_legacy::events::TouchEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(54)
	::openfl::_legacy::events::TouchEvent touchEvent = tmp16;		HX_STACK_VAR(touchEvent,"touchEvent");
	HX_STACK_LINE(56)
	int tmp17 = this->touchPointID;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(56)
	touchEvent->touchPointID = tmp17;
	HX_STACK_LINE(57)
	bool tmp18 = this->isPrimaryTouchPoint;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(57)
	touchEvent->isPrimaryTouchPoint = tmp18;
	HX_STACK_LINE(59)
	bool tmp19 = (target != null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(59)
	if ((tmp19)){
		HX_STACK_LINE(61)
		::openfl::_legacy::display::InteractiveObject tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		touchEvent->set_target(tmp20);
	}
	HX_STACK_LINE(65)
	::openfl::_legacy::events::TouchEvent tmp20 = touchEvent;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(65)
	return tmp20;
}


::String TouchEvent_obj::TOUCH_BEGIN;

::String TouchEvent_obj::TOUCH_END;

::String TouchEvent_obj::TOUCH_MOVE;

::String TouchEvent_obj::TOUCH_OUT;

::String TouchEvent_obj::TOUCH_OVER;

::String TouchEvent_obj::TOUCH_ROLL_OUT;

::String TouchEvent_obj::TOUCH_ROLL_OVER;

::String TouchEvent_obj::TOUCH_TAP;

::openfl::_legacy::events::TouchEvent TouchEvent_obj::__create( ::String type,Dynamic event,::openfl::_legacy::geom::Point local,::openfl::_legacy::display::InteractiveObject target,Float sizeX,Float sizeY){
	HX_STACK_FRAME("openfl._legacy.events.TouchEvent","__create",0x2136c3fe,"openfl._legacy.events.TouchEvent.__create","openfl/_legacy/events/TouchEvent.hx",40,0x427be0d3)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(local,"local")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(sizeX,"sizeX")
	HX_STACK_ARG(sizeY,"sizeY")
	HX_STACK_LINE(42)
	int flags = event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic );		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(43)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	Float tmp1 = local->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Float tmp2 = local->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float tmp3 = sizeX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Float tmp4 = sizeY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	int tmp5 = flags;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	int tmp6 = ::openfl::_legacy::events::MouseEvent_obj::efCtrlDown;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	int tmp7 = (int(tmp5) & int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(43)
	bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	int tmp9 = flags;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(43)
	int tmp10 = ::openfl::_legacy::events::MouseEvent_obj::efAltDown;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(43)
	int tmp11 = (int(tmp9) & int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(43)
	bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(43)
	int tmp13 = flags;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(43)
	int tmp14 = ::openfl::_legacy::events::MouseEvent_obj::efShiftDown;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(43)
	int tmp15 = (int(tmp13) & int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(43)
	bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(43)
	int tmp17 = flags;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(43)
	int tmp18 = ::openfl::_legacy::events::MouseEvent_obj::efLeftDown;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(43)
	int tmp19 = (int(tmp17) & int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(43)
	bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(43)
	::openfl::_legacy::events::TouchEvent tmp21 = ::openfl::_legacy::events::TouchEvent_obj::__new(tmp,true,false,tmp1,tmp2,tmp3,tmp4,null(),tmp8,tmp12,tmp16,tmp20,(int)0,null(),(int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(43)
	::openfl::_legacy::events::TouchEvent touchEvent = tmp21;		HX_STACK_VAR(touchEvent,"touchEvent");
	HX_STACK_LINE(44)
	touchEvent->stageX = event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(45)
	touchEvent->stageY = event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	HX_STACK_LINE(46)
	::openfl::_legacy::display::InteractiveObject tmp22 = target;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(46)
	touchEvent->set_target(tmp22);
	HX_STACK_LINE(47)
	::openfl::_legacy::events::TouchEvent tmp23 = touchEvent;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(47)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,__create,return )


TouchEvent_obj::TouchEvent_obj()
{
}

Dynamic TouchEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { return sizeX; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return sizeY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return pressure; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createSimilar") ) { return __createSimilar_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return isPrimaryTouchPoint; }
	}
	return super::__Field(inName,inCallProp);
}

bool TouchEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = __create_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { outValue = TOUCH_END; return true;  }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { outValue = TOUCH_OUT; return true;  }
		if (HX_FIELD_EQ(inName,"TOUCH_TAP") ) { outValue = TOUCH_TAP; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { outValue = TOUCH_MOVE; return true;  }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { outValue = TOUCH_OVER; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { outValue = TOUCH_BEGIN; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OUT") ) { outValue = TOUCH_ROLL_OUT; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OVER") ) { outValue = TOUCH_ROLL_OVER; return true;  }
	}
	return false;
}

Dynamic TouchEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TouchEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { TOUCH_END=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { TOUCH_OUT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TOUCH_TAP") ) { TOUCH_TAP=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { TOUCH_MOVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { TOUCH_OVER=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { TOUCH_BEGIN=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OUT") ) { TOUCH_ROLL_OUT=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OVER") ) { TOUCH_ROLL_OVER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TouchEvent_obj,isPrimaryTouchPoint),HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeX),HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeY),HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,touchPointID),HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_BEGIN,HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_END,HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_MOVE,HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OUT,HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OVER,HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OUT,HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OVER,HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_TAP,HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"),
	HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"),
	HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"),
	HX_HCSTRING("__createSimilar","\x6f","\x37","\xf9","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#endif

hx::Class TouchEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e"),
	HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a"),
	HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0"),
	HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a"),
	HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2"),
	HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde"),
	HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9"),
	HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a"),
	HX_HCSTRING("__create","\x1c","\xd2","\x3e","\x24"),
	::String(null()) };

void TouchEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.TouchEvent","\xcc","\x32","\xea","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TouchEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEvent_obj >;
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

void TouchEvent_obj::__boot()
{
	TOUCH_BEGIN= HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9");
	TOUCH_END= HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00");
	TOUCH_MOVE= HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d");
	TOUCH_OUT= HX_HCSTRING("touchOut","\x0f","\x62","\x11","\x00");
	TOUCH_OVER= HX_HCSTRING("touchOver","\xb3","\x20","\x25","\x0f");
	TOUCH_ROLL_OUT= HX_HCSTRING("touchRollOut","\x12","\x0f","\x74","\x87");
	TOUCH_ROLL_OVER= HX_HCSTRING("touchRollOver","\x50","\xd6","\x19","\xfe");
	TOUCH_TAP= HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
