#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace events{

Void ErrorEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.events.ErrorEvent","new",0x1354a39b,"openfl.events.ErrorEvent.new","openfl/events/ErrorEvent.hx",12,0x9d2fc215)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_text,"text")
HX_STACK_ARG(__o_id,"id")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(14)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(15)
	this->errorID = id;
}
;
	return null();
}

//ErrorEvent_obj::~ErrorEvent_obj() { }

Dynamic ErrorEvent_obj::__CreateEmpty() { return  new ErrorEvent_obj; }
hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id)
{  hx::ObjectPtr< ErrorEvent_obj > _result_ = new ErrorEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _result_;}

Dynamic ErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ErrorEvent_obj > _result_ = new ErrorEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::_legacy::events::Event ErrorEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.ErrorEvent","clone",0xbbab6b58,"openfl.events.ErrorEvent.clone","openfl/events/ErrorEvent.hx",20,0x9d2fc215)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::String tmp3 = this->text;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	int tmp4 = this->errorID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	::openfl::events::ErrorEvent tmp5 = ::openfl::events::ErrorEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	::openfl::events::ErrorEvent event = tmp5;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(23)
	Dynamic tmp6 = this->get_target();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	event->set_target(tmp6);
	HX_STACK_LINE(24)
	Dynamic tmp7 = this->get_currentTarget();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	event->set_currentTarget(tmp7);
	HX_STACK_LINE(28)
	::openfl::events::ErrorEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	return tmp8;
}


::String ErrorEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.ErrorEvent","toString",0x299f6791,"openfl.events.ErrorEvent.toString","openfl/events/ErrorEvent.hx",33,0x9d2fc215)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::String tmp = this->__formatToString(HX_HCSTRING("ErrorEvent","\x52","\xbb","\x79","\xe1"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")).Add(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


::String ErrorEvent_obj::ERROR;


ErrorEvent_obj::ErrorEvent_obj()
{
}

Dynamic ErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ErrorEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ErrorEvent_obj,errorID),HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ErrorEvent_obj::ERROR,HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#endif

hx::Class ErrorEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	::String(null()) };

void ErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ErrorEvent","\x29","\x3a","\x86","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ErrorEvent_obj >;
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

void ErrorEvent_obj::__boot()
{
	ERROR= HX_HCSTRING("error","\xc8","\xcb","\x29","\x73");
}

} // end namespace openfl
} // end namespace events
