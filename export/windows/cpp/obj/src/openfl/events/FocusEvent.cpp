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
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
namespace openfl{
namespace events{

Void FocusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode)
{
HX_STACK_FRAME("openfl.events.FocusEvent","new",0xf00a0d8b,"openfl.events.FocusEvent.new","openfl/events/FocusEvent.hx",20,0xe559e625)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(relatedObject,"relatedObject")
HX_STACK_ARG(__o_shiftKey,"shiftKey")
HX_STACK_ARG(__o_keyCode,"keyCode")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
int keyCode = __o_keyCode.Default(0);
{
	HX_STACK_LINE(22)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(24)
	this->keyCode = keyCode;
	HX_STACK_LINE(25)
	this->shiftKey = shiftKey;
	HX_STACK_LINE(26)
	this->relatedObject = relatedObject;
}
;
	return null();
}

//FocusEvent_obj::~FocusEvent_obj() { }

Dynamic FocusEvent_obj::__CreateEmpty() { return  new FocusEvent_obj; }
hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode)
{  hx::ObjectPtr< FocusEvent_obj > _result_ = new FocusEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return _result_;}

Dynamic FocusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FocusEvent_obj > _result_ = new FocusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::openfl::_legacy::events::Event FocusEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.FocusEvent","clone",0x40033148,"openfl.events.FocusEvent.clone","openfl/events/FocusEvent.hx",31,0xe559e625)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::openfl::_legacy::display::InteractiveObject tmp3 = this->relatedObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	bool tmp4 = this->shiftKey;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	int tmp5 = this->keyCode;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	::openfl::events::FocusEvent tmp6 = ::openfl::events::FocusEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	::openfl::events::FocusEvent event = tmp6;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(34)
	Dynamic tmp7 = this->get_target();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	event->set_target(tmp7);
	HX_STACK_LINE(35)
	Dynamic tmp8 = this->get_currentTarget();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(35)
	event->set_currentTarget(tmp8);
	HX_STACK_LINE(39)
	::openfl::events::FocusEvent tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(39)
	return tmp9;
}


::String FocusEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.FocusEvent","toString",0x8b53f7a1,"openfl.events.FocusEvent.toString","openfl/events/FocusEvent.hx",44,0xe559e625)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::String tmp = this->__formatToString(HX_HCSTRING("FocusEvent","\x42","\x6d","\xd7","\x2e"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")).Add(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")).Add(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;

::String FocusEvent_obj::KEY_FOCUS_CHANGE;

::String FocusEvent_obj::MOUSE_FOCUS_CHANGE;


FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FocusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FocusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::openfl::_legacy::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FocusEvent_obj,keyCode),HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")},
	{hx::fsObject /*::openfl::_legacy::display::InteractiveObject*/ ,(int)offsetof(FocusEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(FocusEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FocusEvent_obj::FOCUS_IN,HX_HCSTRING("FOCUS_IN","\x4c","\x61","\x08","\x6b")},
	{hx::fsString,(void *) &FocusEvent_obj::FOCUS_OUT,HX_HCSTRING("FOCUS_OUT","\x27","\x55","\x51","\x3c")},
	{hx::fsString,(void *) &FocusEvent_obj::KEY_FOCUS_CHANGE,HX_HCSTRING("KEY_FOCUS_CHANGE","\x57","\x48","\x06","\x94")},
	{hx::fsString,(void *) &FocusEvent_obj::MOUSE_FOCUS_CHANGE,HX_HCSTRING("MOUSE_FOCUS_CHANGE","\x11","\xc4","\x6c","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#endif

hx::Class FocusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FOCUS_IN","\x4c","\x61","\x08","\x6b"),
	HX_HCSTRING("FOCUS_OUT","\x27","\x55","\x51","\x3c"),
	HX_HCSTRING("KEY_FOCUS_CHANGE","\x57","\x48","\x06","\x94"),
	HX_HCSTRING("MOUSE_FOCUS_CHANGE","\x11","\xc4","\x6c","\x3d"),
	::String(null()) };

void FocusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.FocusEvent","\x19","\xec","\xe3","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FocusEvent_obj >;
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

void FocusEvent_obj::__boot()
{
	FOCUS_IN= HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41");
	FOCUS_OUT= HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11");
	KEY_FOCUS_CHANGE= HX_HCSTRING("keyFocusChange","\x09","\x9c","\x8e","\xe5");
	MOUSE_FOCUS_CHANGE= HX_HCSTRING("mouseFocusChange","\x43","\xf1","\x81","\x96");
}

} // end namespace openfl
} // end namespace events
