#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_SystemEvent
#include <openfl/_legacy/events/SystemEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void SystemEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_data)
{
HX_STACK_FRAME("openfl._legacy.events.SystemEvent","new",0xeeaaa08c,"openfl._legacy.events.SystemEvent.new","openfl/_legacy/events/SystemEvent.hx",15,0x919fdfe3)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_data,"data")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int data = __o_data.Default(0);
{
	HX_STACK_LINE(17)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(18)
	this->data = data;
}
;
	return null();
}

//SystemEvent_obj::~SystemEvent_obj() { }

Dynamic SystemEvent_obj::__CreateEmpty() { return  new SystemEvent_obj; }
hx::ObjectPtr< SystemEvent_obj > SystemEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_data)
{  hx::ObjectPtr< SystemEvent_obj > _result_ = new SystemEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_data);
	return _result_;}

Dynamic SystemEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SystemEvent_obj > _result_ = new SystemEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::_legacy::events::Event SystemEvent_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.events.SystemEvent","clone",0x962f4689,"openfl._legacy.events.SystemEvent.clone","openfl/_legacy/events/SystemEvent.hx",23,0x919fdfe3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	int tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::openfl::_legacy::events::SystemEvent tmp4 = ::openfl::_legacy::events::SystemEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	return tmp4;
}


::String SystemEvent_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.SystemEvent","toString",0x6519e100,"openfl._legacy.events.SystemEvent.toString","openfl/_legacy/events/SystemEvent.hx",30,0x919fdfe3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1 = (HX_HCSTRING("[SystemEvent type=","\x33","\x96","\x7e","\xb4") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
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
	::String tmp10 = (tmp9 + HX_HCSTRING(" data=","\xb3","\x9a","\xf3","\x9f"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(32)
	int tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(32)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(32)
	::String tmp13 = (tmp12 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	return tmp13;
}


::String SystemEvent_obj::SYSTEM;


SystemEvent_obj::SystemEvent_obj()
{
}

Dynamic SystemEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SystemEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SYSTEM") ) { outValue = SYSTEM; return true;  }
	}
	return false;
}

Dynamic SystemEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SystemEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"SYSTEM") ) { SYSTEM=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void SystemEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SystemEvent_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SystemEvent_obj::SYSTEM,HX_HCSTRING("SYSTEM","\xef","\x42","\x65","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SystemEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SystemEvent_obj::SYSTEM,"SYSTEM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SystemEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SystemEvent_obj::SYSTEM,"SYSTEM");
};

#endif

hx::Class SystemEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SYSTEM","\xef","\x42","\x65","\xa5"),
	::String(null()) };

void SystemEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.SystemEvent","\x9a","\xaa","\x9c","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SystemEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &SystemEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SystemEvent_obj >;
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

void SystemEvent_obj::__boot()
{
	SYSTEM= HX_HCSTRING("system","\xef","\x96","\xe2","\xf2");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
