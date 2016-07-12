#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
namespace openfl{
namespace errors{

Void IOError_obj::__construct(::String __o_message)
{
HX_STACK_FRAME("openfl.errors.IOError","new",0xdfaba8cf,"openfl.errors.IOError.new","openfl/errors/IOError.hx",7,0x640bffa1)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(9)
	::String tmp = message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp,null());
	HX_STACK_LINE(11)
	this->name = HX_HCSTRING("IOError","\x02","\x9a","\x27","\x78");
}
;
	return null();
}

//IOError_obj::~IOError_obj() { }

Dynamic IOError_obj::__CreateEmpty() { return  new IOError_obj; }
hx::ObjectPtr< IOError_obj > IOError_obj::__new(::String __o_message)
{  hx::ObjectPtr< IOError_obj > _result_ = new IOError_obj();
	_result_->__construct(__o_message);
	return _result_;}

Dynamic IOError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IOError_obj > _result_ = new IOError_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


IOError_obj::IOError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOError_obj::__mClass,"__mClass");
};

#endif

hx::Class IOError_obj::__mClass;

void IOError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.IOError","\x5d","\x95","\xbd","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IOError_obj >;
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
