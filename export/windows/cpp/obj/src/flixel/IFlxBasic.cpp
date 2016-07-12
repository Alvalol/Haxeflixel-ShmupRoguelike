#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
namespace flixel{


static ::String sMemberFields[] = {
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("set_alive","\x30","\xac","\x8b","\x48"),
	HX_HCSTRING("set_exists","\x19","\x2c","\xe5","\xb3"),
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("alive","\xcd","\x63","\x91","\x21"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxBasic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxBasic_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxBasic_obj::__mClass;

void IFlxBasic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.IFlxBasic","\xb3","\xfd","\xd1","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxBasic_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
