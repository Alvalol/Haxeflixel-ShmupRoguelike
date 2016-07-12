#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
namespace openfl{
namespace events{

Void ProgressEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal)
{
HX_STACK_FRAME("openfl.events.ProgressEvent","new",0xeed66288,"openfl.events.ProgressEvent.new","openfl/events/ProgressEvent.hx",14,0xea3bf808)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_bytesLoaded,"bytesLoaded")
HX_STACK_ARG(__o_bytesTotal,"bytesTotal")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
Float bytesLoaded = __o_bytesLoaded.Default(0);
Float bytesTotal = __o_bytesTotal.Default(0);
{
	HX_STACK_LINE(16)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(18)
	this->bytesLoaded = bytesLoaded;
	HX_STACK_LINE(19)
	this->bytesTotal = bytesTotal;
}
;
	return null();
}

//ProgressEvent_obj::~ProgressEvent_obj() { }

Dynamic ProgressEvent_obj::__CreateEmpty() { return  new ProgressEvent_obj; }
hx::ObjectPtr< ProgressEvent_obj > ProgressEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_bytesLoaded,hx::Null< Float >  __o_bytesTotal)
{  hx::ObjectPtr< ProgressEvent_obj > _result_ = new ProgressEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_bytesLoaded,__o_bytesTotal);
	return _result_;}

Dynamic ProgressEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgressEvent_obj > _result_ = new ProgressEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::openfl::_legacy::events::Event ProgressEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.ProgressEvent","clone",0xca4c7f85,"openfl.events.ProgressEvent.clone","openfl/events/ProgressEvent.hx",24,0xea3bf808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float tmp3 = this->bytesLoaded;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	Float tmp4 = this->bytesTotal;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::openfl::events::ProgressEvent tmp5 = ::openfl::events::ProgressEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	::openfl::events::ProgressEvent event = tmp5;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(27)
	Dynamic tmp6 = this->get_target();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	event->set_target(tmp6);
	HX_STACK_LINE(28)
	Dynamic tmp7 = this->get_currentTarget();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	event->set_currentTarget(tmp7);
	HX_STACK_LINE(32)
	::openfl::events::ProgressEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	return tmp8;
}


::String ProgressEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.ProgressEvent","toString",0x8ba16d84,"openfl.events.ProgressEvent.toString","openfl/events/ProgressEvent.hx",37,0xea3bf808)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::String tmp = this->__formatToString(HX_HCSTRING("ProgressEvent","\x0d","\x9d","\x55","\x84"),Array_obj< ::String >::__new().Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")).Add(HX_HCSTRING("bubbles","\x67","\xbb","\x56","\x61")).Add(HX_HCSTRING("cancelable","\x14","\xa0","\x79","\xc4")).Add(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")).Add(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


::String ProgressEvent_obj::PROGRESS;

::String ProgressEvent_obj::SOCKET_DATA;


ProgressEvent_obj::ProgressEvent_obj()
{
}

Dynamic ProgressEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProgressEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsFloat,(int)offsetof(ProgressEvent_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ProgressEvent_obj::PROGRESS,HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf")},
	{hx::fsString,(void *) &ProgressEvent_obj::SOCKET_DATA,HX_HCSTRING("SOCKET_DATA","\x76","\x39","\x86","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_MARK_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::PROGRESS,"PROGRESS");
	HX_VISIT_MEMBER_NAME(ProgressEvent_obj::SOCKET_DATA,"SOCKET_DATA");
};

#endif

hx::Class ProgressEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PROGRESS","\xad","\x87","\xb0","\xdf"),
	HX_HCSTRING("SOCKET_DATA","\x76","\x39","\x86","\xc1"),
	::String(null()) };

void ProgressEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ProgressEvent","\x96","\xbe","\xc8","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ProgressEvent_obj >;
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

void ProgressEvent_obj::__boot()
{
	PROGRESS= HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86");
	SOCKET_DATA= HX_HCSTRING("socketData","\x7d","\x63","\xde","\xb1");
}

} // end namespace openfl
} // end namespace events
