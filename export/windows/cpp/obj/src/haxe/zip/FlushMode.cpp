#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip_FlushMode
#include <haxe/zip/FlushMode.h>
#endif
namespace haxe{
namespace zip{

::haxe::zip::FlushMode FlushMode_obj::BLOCK;

::haxe::zip::FlushMode FlushMode_obj::FINISH;

::haxe::zip::FlushMode FlushMode_obj::FULL;

::haxe::zip::FlushMode FlushMode_obj::NO;

::haxe::zip::FlushMode FlushMode_obj::SYNC;

HX_DEFINE_CREATE_ENUM(FlushMode_obj)

int FlushMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BLOCK","\x2d","\xad","\xea","\x32")) return 4;
	if (inName==HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39")) return 3;
	if (inName==HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")) return 2;
	if (inName==HX_HCSTRING("NO","\x41","\x44","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")) return 1;
	return super::__FindIndex(inName);
}

int FlushMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BLOCK","\x2d","\xad","\xea","\x32")) return 0;
	if (inName==HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39")) return 0;
	if (inName==HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")) return 0;
	if (inName==HX_HCSTRING("NO","\x41","\x44","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlushMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BLOCK","\x2d","\xad","\xea","\x32")) return BLOCK;
	if (inName==HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39")) return FINISH;
	if (inName==HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e")) return FULL;
	if (inName==HX_HCSTRING("NO","\x41","\x44","\x00","\x00")) return NO;
	if (inName==HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37")) return SYNC;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NO","\x41","\x44","\x00","\x00"),
	HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),
	HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),
	HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39"),
	HX_HCSTRING("BLOCK","\x2d","\xad","\xea","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlushMode_obj::BLOCK,"BLOCK");
	HX_MARK_MEMBER_NAME(FlushMode_obj::FINISH,"FINISH");
	HX_MARK_MEMBER_NAME(FlushMode_obj::FULL,"FULL");
	HX_MARK_MEMBER_NAME(FlushMode_obj::NO,"NO");
	HX_MARK_MEMBER_NAME(FlushMode_obj::SYNC,"SYNC");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlushMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::BLOCK,"BLOCK");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::FINISH,"FINISH");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::FULL,"FULL");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::NO,"NO");
	HX_VISIT_MEMBER_NAME(FlushMode_obj::SYNC,"SYNC");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlushMode_obj::__mClass;

Dynamic __Create_FlushMode_obj() { return new FlushMode_obj; }

void FlushMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxe.zip.FlushMode","\x12","\x16","\x75","\x3c"), hx::TCanCast< FlushMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlushMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlushMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlushMode_obj::__boot()
{
hx::Static(BLOCK) = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("BLOCK","\x2d","\xad","\xea","\x32"),4);
hx::Static(FINISH) = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39"),3);
hx::Static(FULL) = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("FULL","\x8f","\xb1","\x85","\x2e"),2);
hx::Static(NO) = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("NO","\x41","\x44","\x00","\x00"),0);
hx::Static(SYNC) = hx::CreateEnum< FlushMode_obj >(HX_HCSTRING("SYNC","\x5b","\x82","\x20","\x37"),1);
}


} // end namespace haxe
} // end namespace zip
