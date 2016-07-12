#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace events{

Void KeyboardEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,hx::Null< int >  __o_keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue)
{
HX_STACK_FRAME("openfl._legacy.events.KeyboardEvent","new",0xb63afd94,"openfl._legacy.events.KeyboardEvent.new","openfl/_legacy/events/KeyboardEvent.hx",19,0x7429199b)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_charCodeValue,"charCodeValue")
HX_STACK_ARG(__o_keyCodeValue,"keyCodeValue")
HX_STACK_ARG(__o_keyLocationValue,"keyLocationValue")
HX_STACK_ARG(__o_ctrlKeyValue,"ctrlKeyValue")
HX_STACK_ARG(__o_altKeyValue,"altKeyValue")
HX_STACK_ARG(__o_shiftKeyValue,"shiftKeyValue")
HX_STACK_ARG(__o_controlKeyValue,"controlKeyValue")
HX_STACK_ARG(__o_commandKeyValue,"commandKeyValue")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int charCodeValue = __o_charCodeValue.Default(0);
int keyCodeValue = __o_keyCodeValue.Default(0);
int keyLocationValue = __o_keyLocationValue.Default(0);
bool ctrlKeyValue = __o_ctrlKeyValue.Default(false);
bool altKeyValue = __o_altKeyValue.Default(false);
bool shiftKeyValue = __o_shiftKeyValue.Default(false);
bool controlKeyValue = __o_controlKeyValue.Default(false);
bool commandKeyValue = __o_commandKeyValue.Default(false);
{
	HX_STACK_LINE(21)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(23)
	this->keyCode = keyCodeValue;
	HX_STACK_LINE(24)
	this->keyLocation = keyLocationValue;
	HX_STACK_LINE(25)
	this->charCode = charCodeValue;
	HX_STACK_LINE(27)
	this->shiftKey = shiftKeyValue;
	HX_STACK_LINE(28)
	this->altKey = altKeyValue;
	HX_STACK_LINE(29)
	this->controlKey = controlKeyValue;
	HX_STACK_LINE(30)
	this->commandKey = commandKeyValue;
	HX_STACK_LINE(31)
	bool tmp3 = ctrlKeyValue;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	if ((tmp5)){
		HX_STACK_LINE(31)
		tmp6 = this->controlKey;
	}
	else{
		HX_STACK_LINE(31)
		tmp6 = true;
	}
	HX_STACK_LINE(31)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	if ((tmp7)){
		HX_STACK_LINE(31)
		tmp8 = this->commandKey;
	}
	else{
		HX_STACK_LINE(31)
		tmp8 = true;
	}
	HX_STACK_LINE(31)
	this->ctrlKey = tmp8;
}
;
	return null();
}

//KeyboardEvent_obj::~KeyboardEvent_obj() { }

Dynamic KeyboardEvent_obj::__CreateEmpty() { return  new KeyboardEvent_obj; }
hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_charCodeValue,hx::Null< int >  __o_keyCodeValue,hx::Null< int >  __o_keyLocationValue,hx::Null< bool >  __o_ctrlKeyValue,hx::Null< bool >  __o_altKeyValue,hx::Null< bool >  __o_shiftKeyValue,hx::Null< bool >  __o_controlKeyValue,hx::Null< bool >  __o_commandKeyValue)
{  hx::ObjectPtr< KeyboardEvent_obj > _result_ = new KeyboardEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_charCodeValue,__o_keyCodeValue,__o_keyLocationValue,__o_ctrlKeyValue,__o_altKeyValue,__o_shiftKeyValue,__o_controlKeyValue,__o_commandKeyValue);
	return _result_;}

Dynamic KeyboardEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyboardEvent_obj > _result_ = new KeyboardEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _result_;}

::openfl::_legacy::events::Event KeyboardEvent_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.events.KeyboardEvent","clone",0xa856f591,"openfl._legacy.events.KeyboardEvent.clone","openfl/_legacy/events/KeyboardEvent.hx",36,0x7429199b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	int tmp3 = this->charCode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	int tmp4 = this->keyCode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	int tmp5 = this->keyLocation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	bool tmp6 = this->ctrlKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(38)
	bool tmp7 = this->altKey;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(38)
	bool tmp8 = this->shiftKey;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	bool tmp9 = this->controlKey;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	bool tmp10 = this->commandKey;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(38)
	::openfl::_legacy::events::KeyboardEvent tmp11 = ::openfl::_legacy::events::KeyboardEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(38)
	return tmp11;
}


::String KeyboardEvent_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.events.KeyboardEvent","toString",0x96f346f8,"openfl._legacy.events.KeyboardEvent.toString","openfl/_legacy/events/KeyboardEvent.hx",43,0x7429199b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::String tmp1 = (HX_HCSTRING("[KeyboardEvent type=","\xbb","\xae","\x1e","\x4c") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::String tmp2 = (tmp1 + HX_HCSTRING(" bubbles=","\x16","\x5f","\xba","\x28"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	::String tmp10 = (tmp9 + HX_HCSTRING(" charCode=","\x9a","\xdb","\xfd","\x0c"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(45)
	int tmp11 = this->charCode;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(45)
	::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(45)
	::String tmp13 = (tmp12 + HX_HCSTRING(" keyCode=","\x71","\x1c","\xed","\xec"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(45)
	int tmp14 = this->keyCode;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(45)
	::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(45)
	::String tmp16 = (tmp15 + HX_HCSTRING(" keyLocation=","\xe9","\x5a","\x32","\x48"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(45)
	int tmp17 = this->keyLocation;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(45)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(45)
	::String tmp19 = (tmp18 + HX_HCSTRING(" ctrlKey=","\x29","\xe8","\x3e","\x4a"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(45)
	bool tmp20 = this->ctrlKey;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(45)
	::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(45)
	::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(45)
	::String tmp23 = (tmp22 + HX_HCSTRING(" altKey=","\x67","\x93","\xd6","\x12"));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(45)
	bool tmp24 = this->altKey;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(45)
	::String tmp25 = ::Std_obj::string(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(45)
	::String tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(45)
	::String tmp27 = (tmp26 + HX_HCSTRING(" shiftKey=","\x40","\x5f","\x4f","\xdb"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(45)
	bool tmp28 = this->shiftKey;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(45)
	::String tmp29 = ::Std_obj::string(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(45)
	::String tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(45)
	::String tmp31 = (tmp30 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(45)
	return tmp31;
}


::String KeyboardEvent_obj::KEY_DOWN;

::String KeyboardEvent_obj::KEY_UP;


KeyboardEvent_obj::KeyboardEvent_obj()
{
}

Dynamic KeyboardEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return altKey; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ctrlKey; }
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { return charCode; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controlKey") ) { return controlKey; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { return commandKey; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyLocation") ) { return keyLocation; }
	}
	return super::__Field(inName,inCallProp);
}

bool KeyboardEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"KEY_UP") ) { outValue = KEY_UP; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_DOWN") ) { outValue = KEY_DOWN; return true;  }
	}
	return false;
}

Dynamic KeyboardEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charCode") ) { charCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyLocation") ) { keyLocation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool KeyboardEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"KEY_UP") ) { KEY_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"KEY_DOWN") ) { KEY_DOWN=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void KeyboardEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04"));
	outFields->push(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"));
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("keyLocation","\xf4","\xea","\x6a","\x2d"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,altKey),HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,charCode),HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,ctrlKey),HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,controlKey),HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,commandKey),HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,keyCode),HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")},
	{hx::fsInt,(int)offsetof(KeyboardEvent_obj,keyLocation),HX_HCSTRING("keyLocation","\xf4","\xea","\x6a","\x2d")},
	{hx::fsBool,(int)offsetof(KeyboardEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &KeyboardEvent_obj::KEY_DOWN,HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d")},
	{hx::fsString,(void *) &KeyboardEvent_obj::KEY_UP,HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"),
	HX_HCSTRING("charCode","\x23","\x5f","\x24","\x9c"),
	HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"),
	HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04"),
	HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"),
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("keyLocation","\xf4","\xea","\x6a","\x2d"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#endif

hx::Class KeyboardEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d"),
	HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2"),
	::String(null()) };

void KeyboardEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.events.KeyboardEvent","\xa2","\xe3","\x67","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &KeyboardEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &KeyboardEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyboardEvent_obj >;
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

void KeyboardEvent_obj::__boot()
{
	KEY_DOWN= HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c");
	KEY_UP= HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace events
