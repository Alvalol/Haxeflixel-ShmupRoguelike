#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DClearMask
#include <openfl/display3D/Context3DClearMask.h>
#endif
namespace openfl{
namespace display3D{

Void Context3DClearMask_obj::__construct()
{
	return null();
}

//Context3DClearMask_obj::~Context3DClearMask_obj() { }

Dynamic Context3DClearMask_obj::__CreateEmpty() { return  new Context3DClearMask_obj; }
hx::ObjectPtr< Context3DClearMask_obj > Context3DClearMask_obj::__new()
{  hx::ObjectPtr< Context3DClearMask_obj > _result_ = new Context3DClearMask_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DClearMask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DClearMask_obj > _result_ = new Context3DClearMask_obj();
	_result_->__construct();
	return _result_;}

int Context3DClearMask_obj::ALL;

int Context3DClearMask_obj::COLOR;

int Context3DClearMask_obj::DEPTH;

int Context3DClearMask_obj::STENCIL;


Context3DClearMask_obj::Context3DClearMask_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DClearMask_obj::ALL,HX_HCSTRING("ALL","\x01","\x95","\x31","\x00")},
	{hx::fsInt,(void *) &Context3DClearMask_obj::COLOR,HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8")},
	{hx::fsInt,(void *) &Context3DClearMask_obj::DEPTH,HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55")},
	{hx::fsInt,(void *) &Context3DClearMask_obj::STENCIL,HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::ALL,"ALL");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::COLOR,"COLOR");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::DEPTH,"DEPTH");
	HX_MARK_MEMBER_NAME(Context3DClearMask_obj::STENCIL,"STENCIL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::ALL,"ALL");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::COLOR,"COLOR");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::DEPTH,"DEPTH");
	HX_VISIT_MEMBER_NAME(Context3DClearMask_obj::STENCIL,"STENCIL");
};

#endif

hx::Class Context3DClearMask_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ALL","\x01","\x95","\x31","\x00"),
	HX_HCSTRING("COLOR","\x43","\xa9","\x4a","\xc8"),
	HX_HCSTRING("DEPTH","\xe3","\x28","\x18","\x55"),
	HX_HCSTRING("STENCIL","\xdc","\x91","\xd7","\xff"),
	::String(null()) };

void Context3DClearMask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3DClearMask","\x72","\x9c","\x4d","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DClearMask_obj >;
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

void Context3DClearMask_obj::__boot()
{
	ALL= (int)17664;
	COLOR= (int)16384;
	DEPTH= (int)256;
	STENCIL= (int)1024;
}

} // end namespace openfl
} // end namespace display3D
