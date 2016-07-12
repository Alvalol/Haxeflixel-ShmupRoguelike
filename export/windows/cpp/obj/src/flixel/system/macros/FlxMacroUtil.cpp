#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_macros_FlxMacroUtil
#include <flixel/system/macros/FlxMacroUtil.h>
#endif
namespace flixel{
namespace _system{
namespace macros{

Void FlxMacroUtil_obj::__construct()
{
	return null();
}

//FlxMacroUtil_obj::~FlxMacroUtil_obj() { }

Dynamic FlxMacroUtil_obj::__CreateEmpty() { return  new FlxMacroUtil_obj; }
hx::ObjectPtr< FlxMacroUtil_obj > FlxMacroUtil_obj::__new()
{  hx::ObjectPtr< FlxMacroUtil_obj > _result_ = new FlxMacroUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxMacroUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMacroUtil_obj > _result_ = new FlxMacroUtil_obj();
	_result_->__construct();
	return _result_;}


FlxMacroUtil_obj::FlxMacroUtil_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMacroUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMacroUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMacroUtil_obj::__mClass;

void FlxMacroUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.macros.FlxMacroUtil","\x36","\xeb","\x79","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxMacroUtil_obj >;
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
} // end namespace macros
