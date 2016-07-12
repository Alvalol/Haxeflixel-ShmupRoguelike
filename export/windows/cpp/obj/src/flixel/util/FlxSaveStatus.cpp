#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxSaveStatus
#include <flixel/util/FlxSaveStatus.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::ERROR;

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::PENDING;

::flixel::util::FlxSaveStatus FlxSaveStatus_obj::SUCCESS;

HX_DEFINE_CREATE_ENUM(FlxSaveStatus_obj)

int FlxSaveStatus_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return 2;
	if (inName==HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")) return 1;
	if (inName==HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38")) return 0;
	return super::__FindIndex(inName);
}

int FlxSaveStatus_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return 0;
	if (inName==HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")) return 0;
	if (inName==HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxSaveStatus_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")) return ERROR;
	if (inName==HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")) return PENDING;
	if (inName==HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38")) return SUCCESS;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38"),
	HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSaveStatus_obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(FlxSaveStatus_obj::PENDING,"PENDING");
	HX_MARK_MEMBER_NAME(FlxSaveStatus_obj::SUCCESS,"SUCCESS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::PENDING,"PENDING");
	HX_VISIT_MEMBER_NAME(FlxSaveStatus_obj::SUCCESS,"SUCCESS");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxSaveStatus_obj::__mClass;

Dynamic __Create_FlxSaveStatus_obj() { return new FlxSaveStatus_obj; }

void FlxSaveStatus_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.util.FlxSaveStatus","\xa7","\xaa","\xc7","\x52"), hx::TCanCast< FlxSaveStatus_obj >,sStaticFields,sMemberFields,
	&__Create_FlxSaveStatus_obj, &__Create,
	&super::__SGetClass(), &CreateFlxSaveStatus_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxSaveStatus_obj::__boot()
{
hx::Static(ERROR) = hx::CreateEnum< FlxSaveStatus_obj >(HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),2);
hx::Static(PENDING) = hx::CreateEnum< FlxSaveStatus_obj >(HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),1);
hx::Static(SUCCESS) = hx::CreateEnum< FlxSaveStatus_obj >(HX_HCSTRING("SUCCESS","\xa3","\xf9","\x21","\x38"),0);
}


} // end namespace flixel
} // end namespace util
