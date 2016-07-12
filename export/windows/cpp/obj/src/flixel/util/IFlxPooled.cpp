#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace util{


static ::String sMemberFields[] = {
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxPooled_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxPooled_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxPooled_obj::__mClass;

void IFlxPooled_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.IFlxPooled","\x9e","\xd7","\x60","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxPooled_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
