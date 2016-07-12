#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxSignal_Macro
#include <flixel/util/_FlxSignal/Macro.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void Macro_obj::__construct()
{
	return null();
}

//Macro_obj::~Macro_obj() { }

Dynamic Macro_obj::__CreateEmpty() { return  new Macro_obj; }
hx::ObjectPtr< Macro_obj > Macro_obj::__new()
{  hx::ObjectPtr< Macro_obj > _result_ = new Macro_obj();
	_result_->__construct();
	return _result_;}

Dynamic Macro_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macro_obj > _result_ = new Macro_obj();
	_result_->__construct();
	return _result_;}


Macro_obj::Macro_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#endif

hx::Class Macro_obj::__mClass;

void Macro_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.Macro","\xb3","\x29","\xa6","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Macro_obj >;
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
} // end namespace util
} // end namespace _FlxSignal
