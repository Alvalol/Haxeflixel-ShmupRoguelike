#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
namespace flixel{
namespace input{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxInput_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxInput_obj::__mClass;

void IFlxInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.IFlxInput","\x2b","\x5c","\x36","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
