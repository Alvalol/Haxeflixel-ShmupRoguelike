#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace errors{

Void ArgumentError_obj::__construct(::String __o_message)
{
HX_STACK_FRAME("openfl.errors.ArgumentError","new",0x72c6c578,"openfl.errors.ArgumentError.new","openfl/errors/ArgumentError.hx",7,0xb16d4318)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(9)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp,null());
	HX_STACK_LINE(11)
	this->name = HX_HCSTRING("ArgumentError","\xeb","\x77","\x4b","\x60");
}
;
	return null();
}

//ArgumentError_obj::~ArgumentError_obj() { }

Dynamic ArgumentError_obj::__CreateEmpty() { return  new ArgumentError_obj; }
hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__new(::String __o_message)
{  hx::ObjectPtr< ArgumentError_obj > _result_ = new ArgumentError_obj();
	_result_->__construct(__o_message);
	return _result_;}

Dynamic ArgumentError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArgumentError_obj > _result_ = new ArgumentError_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


ArgumentError_obj::ArgumentError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#endif

hx::Class ArgumentError_obj::__mClass;

void ArgumentError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.ArgumentError","\x86","\xe9","\x30","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArgumentError_obj >;
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

} // end namespace openfl
} // end namespace errors
