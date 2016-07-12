#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_HTTPStatusEvent
#include <openfl/_legacy/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void HTTPStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status)
{
HX_STACK_FRAME("openfl._legacy.events.HTTPStatusEvent","new",0x2f96f8e1,"openfl._legacy.events.HTTPStatusEvent.new","openfl/_legacy/events/HTTPStatusEvent.hx",14,0xa6d8d4ae)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_status,"status")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int status = __o_status.Default(0);
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
	this->status = status;
	HX_STACK_LINE(19)
	this->responseHeaders = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//HTTPStatusEvent_obj::~HTTPStatusEvent_obj() { }

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return  new HTTPStatusEvent_obj; }
hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status)
{  hx::ObjectPtr< HTTPStatusEvent_obj > _result_ = new HTTPStatusEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_status);
	return _result_;}

Dynamic HTTPStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HTTPStatusEvent_obj > _result_ = new HTTPStatusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::_legacy::events::Event HTTPStatusEvent_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.events.HTTPStatusEvent","clone",0x2d221e1e,"openfl._legacy.events.HTTPStatusEvent.clone","openfl/_legacy/events/HTTPStatusEvent.hx",23,0xa6d8d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::openfl::_legacy::events::HTTPStatusEvent tmp4 = ::openfl::_legacy::events::HTTPStatusEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	return tmp4;
}


::String HTTPStatusEvent_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.HTTPStatusEvent","toString",0xb0c4348b,"openfl._legacy.events.HTTPStatusEvent.toString","openfl/_legacy/events/HTTPStatusEvent.hx",30,0xa6d8d4ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1 = (HX_HCSTRING("[HTTPStatusEvent type=","\xc8","\xa0","\x6f","\xf4") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::String tmp2 = (tmp1 + HX_HCSTRING(" bubbles=","\x16","\x5f","\xba","\x28"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	::String tmp10 = (tmp9 + HX_HCSTRING(" status=","\xab","\xa8","\xbc","\x5c"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(32)
	int tmp11 = this->status;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(32)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(32)
	::String tmp13 = (tmp12 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	return tmp13;
}


::String HTTPStatusEvent_obj::HTTP_STATUS;


HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseURL,"responseURL");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseURL,"responseURL");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HTTPStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { return responseURL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return responseHeaders; }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPStatusEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { outValue = HTTP_STATUS; return true;  }
	}
	return false;
}

Dynamic HTTPStatusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { responseURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPStatusEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"HTTP_STATUS") ) { HTTP_STATUS=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsString,(int)offsetof(HTTPStatusEvent_obj,responseURL),HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_STATUS,HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#endif

hx::Class HTTPStatusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94"),
	::String(null()) };

void HTTPStatusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.HTTPStatusEvent","\x6f","\xf4","\xd6","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPStatusEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPStatusEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPStatusEvent_obj >;
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

void HTTPStatusEvent_obj::__boot()
{
	HTTP_STATUS= HX_HCSTRING("httpStatus","\xda","\x4c","\x74","\x0a");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
