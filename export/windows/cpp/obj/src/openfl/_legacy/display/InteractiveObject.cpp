#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void InteractiveObject_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","new",0xc8f78603,"openfl._legacy.display.InteractiveObject.new","openfl/_legacy/display/InteractiveObject.hx",18,0x78315950)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(20)
	this->doubleClickEnabled = false;
	HX_STACK_LINE(21)
	this->__mouseEnabled = true;
	HX_STACK_LINE(23)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//InteractiveObject_obj::~InteractiveObject_obj() { }

Dynamic InteractiveObject_obj::__CreateEmpty() { return  new InteractiveObject_obj; }
hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< InteractiveObject_obj > _result_ = new InteractiveObject_obj();
	_result_->__construct(handle,type);
	return _result_;}

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractiveObject_obj > _result_ = new InteractiveObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool InteractiveObject_obj::__dismissSoftKeyboard( ){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","__dismissSoftKeyboard",0x4413ed5e,"openfl._legacy.display.InteractiveObject.__dismissSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",28,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,__dismissSoftKeyboard,return )

bool InteractiveObject_obj::requestSoftKeyboard( ){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","requestSoftKeyboard",0x18066143,"openfl._legacy.display.InteractiveObject.requestSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",35,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_request_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

::openfl::_legacy::display::InteractiveObject InteractiveObject_obj::__asInteractiveObject( ){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","__asInteractiveObject",0x82877c32,"openfl._legacy.display.InteractiveObject.__asInteractiveObject","openfl/_legacy/display/InteractiveObject.hx",44,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return hx::ObjectPtr<OBJ_>(this);
}


bool InteractiveObject_obj::get_mouseEnabled( ){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","get_mouseEnabled",0x324081e2,"openfl._legacy.display.InteractiveObject.get_mouseEnabled","openfl/_legacy/display/InteractiveObject.hx",56,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	bool tmp = this->__mouseEnabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_mouseEnabled,return )

bool InteractiveObject_obj::set_mouseEnabled( bool value){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","set_mouseEnabled",0x88826f56,"openfl._legacy.display.InteractiveObject.set_mouseEnabled","openfl/_legacy/display/InteractiveObject.hx",57,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(59)
	this->__mouseEnabled = value;
	HX_STACK_LINE(60)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_set_mouse_enabled(tmp,tmp1);
	HX_STACK_LINE(61)
	bool tmp2 = this->__mouseEnabled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_mouseEnabled,return )

bool InteractiveObject_obj::set_moveForSoftKeyboard( bool value){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","set_moveForSoftKeyboard",0xd4d7550f,"openfl._legacy.display.InteractiveObject.set_moveForSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",66,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(68)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard(tmp,tmp1);
	HX_STACK_LINE(69)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_moveForSoftKeyboard,return )

bool InteractiveObject_obj::get_moveForSoftKeyboard( ){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","get_moveForSoftKeyboard",0xd275ec03,"openfl._legacy.display.InteractiveObject.get_moveForSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",74,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	bool tmp1 = ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_moveForSoftKeyboard,return )

bool InteractiveObject_obj::set_needsSoftKeyboard( bool value){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","set_needsSoftKeyboard",0xa062f5f4,"openfl._legacy.display.InteractiveObject.set_needsSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",81,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard(tmp,tmp1);
	HX_STACK_LINE(84)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_needsSoftKeyboard,return )

bool InteractiveObject_obj::get_needsSoftKeyboard( ){
	HX_STACK_FRAME("openfl._legacy.display.InteractiveObject","get_needsSoftKeyboard",0x4c5a27e8,"openfl._legacy.display.InteractiveObject.get_needsSoftKeyboard","openfl/_legacy/display/InteractiveObject.hx",89,0x78315950)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	bool tmp1 = ::openfl::_legacy::display::InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_needsSoftKeyboard,return )

Dynamic InteractiveObject_obj::lime_display_object_set_mouse_enabled;

Dynamic InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard;

Dynamic InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard;

Dynamic InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard;

Dynamic InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard;

Dynamic InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard;

Dynamic InteractiveObject_obj::lime_display_object_request_soft_keyboard;


InteractiveObject_obj::InteractiveObject_obj()
{
}

Dynamic InteractiveObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == hx::paccAlways) return get_mouseEnabled(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseEnabled") ) { return __mouseEnabled; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return get_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseEnabled") ) { return set_mouseEnabled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return get_needsSoftKeyboard(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return get_moveForSoftKeyboard(); }
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__dismissSoftKeyboard") ) { return __dismissSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"__asInteractiveObject") ) { return __asInteractiveObject_dyn(); }
		if (HX_FIELD_EQ(inName,"set_needsSoftKeyboard") ) { return set_needsSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"get_needsSoftKeyboard") ) { return get_needsSoftKeyboard_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_moveForSoftKeyboard") ) { return set_moveForSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"get_moveForSoftKeyboard") ) { return get_moveForSoftKeyboard_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool InteractiveObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_mouse_enabled") ) { outValue = lime_display_object_set_mouse_enabled; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_display_object_dismiss_soft_keyboard") ) { outValue = lime_display_object_dismiss_soft_keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_request_soft_keyboard") ) { outValue = lime_display_object_request_soft_keyboard; return true;  }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_needs_soft_keyboard") ) { outValue = lime_display_object_set_needs_soft_keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_needs_soft_keyboard") ) { outValue = lime_display_object_get_needs_soft_keyboard; return true;  }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_moves_for_soft_keyboard") ) { outValue = lime_display_object_set_moves_for_soft_keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_moves_for_soft_keyboard") ) { outValue = lime_display_object_get_moves_for_soft_keyboard; return true;  }
	}
	return false;
}

Dynamic InteractiveObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp == hx::paccAlways) return set_mouseEnabled(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__mouseEnabled") ) { __mouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return set_needsSoftKeyboard(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { if (inCallProp == hx::paccAlways) return set_moveForSoftKeyboard(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InteractiveObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_mouse_enabled") ) { lime_display_object_set_mouse_enabled=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_display_object_dismiss_soft_keyboard") ) { lime_display_object_dismiss_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_request_soft_keyboard") ) { lime_display_object_request_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_needs_soft_keyboard") ) { lime_display_object_set_needs_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_needs_soft_keyboard") ) { lime_display_object_get_needs_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 47:
		if (HX_FIELD_EQ(inName,"lime_display_object_set_moves_for_soft_keyboard") ) { lime_display_object_set_moves_for_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_display_object_get_moves_for_soft_keyboard") ) { lime_display_object_get_moves_for_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"));
	outFields->push(HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"));
	outFields->push(HX_HCSTRING("moveForSoftKeyboard","\x49","\xcc","\x61","\xee"));
	outFields->push(HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"));
	outFields->push(HX_HCSTRING("__mouseEnabled","\xfc","\xd7","\x96","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,__mouseEnabled),HX_HCSTRING("__mouseEnabled","\xfc","\xd7","\x96","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_set_mouse_enabled,HX_HCSTRING("lime_display_object_set_mouse_enabled","\x51","\x06","\xbb","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard,HX_HCSTRING("lime_display_object_set_needs_soft_keyboard","\xe4","\xda","\x5f","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard,HX_HCSTRING("lime_display_object_get_needs_soft_keyboard","\xd8","\x71","\xfe","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard,HX_HCSTRING("lime_display_object_set_moves_for_soft_keyboard","\x13","\x26","\x0a","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard,HX_HCSTRING("lime_display_object_get_moves_for_soft_keyboard","\x07","\x47","\x71","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard,HX_HCSTRING("lime_display_object_dismiss_soft_keyboard","\x2e","\xc8","\x72","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::lime_display_object_request_soft_keyboard,HX_HCSTRING("lime_display_object_request_soft_keyboard","\xf3","\x76","\x71","\x51")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"),
	HX_HCSTRING("__mouseEnabled","\xfc","\xd7","\x96","\x80"),
	HX_HCSTRING("__dismissSoftKeyboard","\xfb","\x12","\x0b","\x20"),
	HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"),
	HX_HCSTRING("__asInteractiveObject","\xcf","\xa1","\x7e","\x5e"),
	HX_HCSTRING("get_mouseEnabled","\x65","\x41","\x75","\x64"),
	HX_HCSTRING("set_mouseEnabled","\xd9","\x2e","\xb7","\xba"),
	HX_HCSTRING("set_moveForSoftKeyboard","\xec","\xdb","\x18","\xf9"),
	HX_HCSTRING("get_moveForSoftKeyboard","\xe0","\x72","\xb7","\xf6"),
	HX_HCSTRING("set_needsSoftKeyboard","\x91","\x1b","\x5a","\x7c"),
	HX_HCSTRING("get_needsSoftKeyboard","\x85","\x4d","\x51","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_mouse_enabled,"lime_display_object_set_mouse_enabled");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard,"lime_display_object_set_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard,"lime_display_object_get_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard,"lime_display_object_set_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard,"lime_display_object_get_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard,"lime_display_object_dismiss_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::lime_display_object_request_soft_keyboard,"lime_display_object_request_soft_keyboard");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_mouse_enabled,"lime_display_object_set_mouse_enabled");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_needs_soft_keyboard,"lime_display_object_set_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_needs_soft_keyboard,"lime_display_object_get_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_set_moves_for_soft_keyboard,"lime_display_object_set_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_get_moves_for_soft_keyboard,"lime_display_object_get_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_dismiss_soft_keyboard,"lime_display_object_dismiss_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::lime_display_object_request_soft_keyboard,"lime_display_object_request_soft_keyboard");
};

#endif

hx::Class InteractiveObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_display_object_set_mouse_enabled","\x51","\x06","\xbb","\x73"),
	HX_HCSTRING("lime_display_object_set_needs_soft_keyboard","\xe4","\xda","\x5f","\xb1"),
	HX_HCSTRING("lime_display_object_get_needs_soft_keyboard","\xd8","\x71","\xfe","\xae"),
	HX_HCSTRING("lime_display_object_set_moves_for_soft_keyboard","\x13","\x26","\x0a","\x9b"),
	HX_HCSTRING("lime_display_object_get_moves_for_soft_keyboard","\x07","\x47","\x71","\x58"),
	HX_HCSTRING("lime_display_object_dismiss_soft_keyboard","\x2e","\xc8","\x72","\x21"),
	HX_HCSTRING("lime_display_object_request_soft_keyboard","\xf3","\x76","\x71","\x51"),
	::String(null()) };

void InteractiveObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.InteractiveObject","\x91","\xc8","\x9d","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InteractiveObject_obj::__GetStatic;
	__mClass->mSetStaticField = &InteractiveObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractiveObject_obj >;
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

void InteractiveObject_obj::__boot()
{
	lime_display_object_set_mouse_enabled= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_mouse_enabled","\x33","\x46","\xed","\xec"),(int)2);
	lime_display_object_set_needs_soft_keyboard= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_needs_soft_keyboard","\x46","\x30","\x3e","\x9a"),(int)2);
	lime_display_object_get_needs_soft_keyboard= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_needs_soft_keyboard","\x3a","\xc7","\xdc","\x97"),(int)1);
	lime_display_object_set_moves_for_soft_keyboard= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_set_moves_for_soft_keyboard","\x75","\xd4","\x7b","\xc7"),(int)2);
	lime_display_object_get_moves_for_soft_keyboard= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_get_moves_for_soft_keyboard","\x69","\xf5","\xe2","\x84"),(int)1);
	lime_display_object_dismiss_soft_keyboard= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_dismiss_soft_keyboard","\x10","\xa1","\xbf","\x7a"),(int)1);
	lime_display_object_request_soft_keyboard= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_display_object_request_soft_keyboard","\xd5","\x4f","\xbe","\xaa"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
