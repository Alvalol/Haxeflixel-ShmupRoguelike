#include <hxcpp.h>

#ifndef INCLUDED_haxe_lang_Iterable
#include <haxe/lang/Iterable.h>
#endif
#ifndef INCLUDED_haxe_lang_Iterator
#include <haxe/lang/Iterator.h>
#endif
namespace haxe{
namespace lang{


static ::String sMemberFields[] = {
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Iterable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Iterable_obj::__mClass,"__mClass");
};

#endif

hx::Class Iterable_obj::__mClass;

void Iterable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.lang.Iterable","\x0a","\xeb","\xde","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Iterable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace lang
