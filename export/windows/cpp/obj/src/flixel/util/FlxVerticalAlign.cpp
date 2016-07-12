#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxVerticalAlign
#include <flixel/util/FlxVerticalAlign.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxVerticalAlign FlxVerticalAlign_obj::BOTTOM;

::flixel::util::FlxVerticalAlign FlxVerticalAlign_obj::CENTER;

::flixel::util::FlxVerticalAlign FlxVerticalAlign_obj::TOP;

HX_DEFINE_CREATE_ENUM(FlxVerticalAlign_obj)

int FlxVerticalAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")) return 2;
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return 1;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 0;
	return super::__FindIndex(inName);
}

int FlxVerticalAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")) return 0;
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return 0;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxVerticalAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")) return BOTTOM;
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return CENTER;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(FlxVerticalAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxVerticalAlign_obj::TOP,"TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxVerticalAlign_obj::TOP,"TOP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxVerticalAlign_obj::__mClass;

Dynamic __Create_FlxVerticalAlign_obj() { return new FlxVerticalAlign_obj; }

void FlxVerticalAlign_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.util.FlxVerticalAlign","\x17","\xad","\xc7","\x75"), hx::TCanCast< FlxVerticalAlign_obj >,sStaticFields,sMemberFields,
	&__Create_FlxVerticalAlign_obj, &__Create,
	&super::__SGetClass(), &CreateFlxVerticalAlign_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxVerticalAlign_obj::__boot()
{
hx::Static(BOTTOM) = hx::CreateEnum< FlxVerticalAlign_obj >(HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),2);
hx::Static(CENTER) = hx::CreateEnum< FlxVerticalAlign_obj >(HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),1);
hx::Static(TOP) = hx::CreateEnum< FlxVerticalAlign_obj >(HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),0);
}


} // end namespace flixel
} // end namespace util
