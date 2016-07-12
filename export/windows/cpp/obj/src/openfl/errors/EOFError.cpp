#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif
namespace openfl{
namespace errors{

Void EOFError_obj::__construct()
{
HX_STACK_FRAME("openfl.errors.EOFError","new",0xc20c3743,"openfl.errors.EOFError.new","openfl/errors/EOFError.hx",7,0x8db2236d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct(HX_HCSTRING("End of file was encountered","\xfb","\x7f","\xd6","\x0b"));
	HX_STACK_LINE(11)
	this->name = HX_HCSTRING("EOFError","\x8c","\xe5","\x0a","\x43");
	HX_STACK_LINE(12)
	this->errorID = (int)2030;
}
;
	return null();
}

//EOFError_obj::~EOFError_obj() { }

Dynamic EOFError_obj::__CreateEmpty() { return  new EOFError_obj; }
hx::ObjectPtr< EOFError_obj > EOFError_obj::__new()
{  hx::ObjectPtr< EOFError_obj > _result_ = new EOFError_obj();
	_result_->__construct();
	return _result_;}

Dynamic EOFError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EOFError_obj > _result_ = new EOFError_obj();
	_result_->__construct();
	return _result_;}


EOFError_obj::EOFError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

#endif

hx::Class EOFError_obj::__mClass;

void EOFError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.EOFError","\xd1","\xd9","\xb0","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EOFError_obj >;
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
