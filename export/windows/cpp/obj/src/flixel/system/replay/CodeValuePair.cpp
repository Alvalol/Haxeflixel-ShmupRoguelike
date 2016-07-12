#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
namespace flixel{
namespace _system{
namespace replay{

Void CodeValuePair_obj::__construct(int code,int value)
{
HX_STACK_FRAME("flixel.system.replay.CodeValuePair","new",0x0170ef56,"flixel.system.replay.CodeValuePair.new","flixel/system/replay/CodeValuePair.hx",11,0xc7f270bb)
HX_STACK_THIS(this)
HX_STACK_ARG(code,"code")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(12)
	this->code = code;
	HX_STACK_LINE(13)
	this->value = value;
}
;
	return null();
}

//CodeValuePair_obj::~CodeValuePair_obj() { }

Dynamic CodeValuePair_obj::__CreateEmpty() { return  new CodeValuePair_obj; }
hx::ObjectPtr< CodeValuePair_obj > CodeValuePair_obj::__new(int code,int value)
{  hx::ObjectPtr< CodeValuePair_obj > _result_ = new CodeValuePair_obj();
	_result_->__construct(code,value);
	return _result_;}

Dynamic CodeValuePair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodeValuePair_obj > _result_ = new CodeValuePair_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


CodeValuePair_obj::CodeValuePair_obj()
{
}

Dynamic CodeValuePair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return code; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodeValuePair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodeValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CodeValuePair_obj,code),HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41")},
	{hx::fsInt,(int)offsetof(CodeValuePair_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeValuePair_obj::__mClass,"__mClass");
};

#endif

hx::Class CodeValuePair_obj::__mClass;

void CodeValuePair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.replay.CodeValuePair","\x64","\x4c","\x0d","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CodeValuePair_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace replay
