#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
namespace flixel{

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::LOCKON;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::NO_DEAD_ZONE;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::PLATFORMER;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::TOPDOWN;

::flixel::FlxCameraFollowStyle FlxCameraFollowStyle_obj::TOPDOWN_TIGHT;

HX_DEFINE_CREATE_ENUM(FlxCameraFollowStyle_obj)

int FlxCameraFollowStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("LOCKON","\xca","\xb9","\x49","\x0c")) return 0;
	if (inName==HX_HCSTRING("NO_DEAD_ZONE","\x29","\xd8","\x53","\x49")) return 5;
	if (inName==HX_HCSTRING("PLATFORMER","\xe0","\xd1","\xdb","\x91")) return 1;
	if (inName==HX_HCSTRING("SCREEN_BY_SCREEN","\x41","\x1a","\xfc","\xbf")) return 4;
	if (inName==HX_HCSTRING("TOPDOWN","\x57","\xa1","\x79","\x78")) return 2;
	if (inName==HX_HCSTRING("TOPDOWN_TIGHT","\x96","\x70","\xba","\x44")) return 3;
	return super::__FindIndex(inName);
}

int FlxCameraFollowStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("LOCKON","\xca","\xb9","\x49","\x0c")) return 0;
	if (inName==HX_HCSTRING("NO_DEAD_ZONE","\x29","\xd8","\x53","\x49")) return 0;
	if (inName==HX_HCSTRING("PLATFORMER","\xe0","\xd1","\xdb","\x91")) return 0;
	if (inName==HX_HCSTRING("SCREEN_BY_SCREEN","\x41","\x1a","\xfc","\xbf")) return 0;
	if (inName==HX_HCSTRING("TOPDOWN","\x57","\xa1","\x79","\x78")) return 0;
	if (inName==HX_HCSTRING("TOPDOWN_TIGHT","\x96","\x70","\xba","\x44")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxCameraFollowStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("LOCKON","\xca","\xb9","\x49","\x0c")) return LOCKON;
	if (inName==HX_HCSTRING("NO_DEAD_ZONE","\x29","\xd8","\x53","\x49")) return NO_DEAD_ZONE;
	if (inName==HX_HCSTRING("PLATFORMER","\xe0","\xd1","\xdb","\x91")) return PLATFORMER;
	if (inName==HX_HCSTRING("SCREEN_BY_SCREEN","\x41","\x1a","\xfc","\xbf")) return SCREEN_BY_SCREEN;
	if (inName==HX_HCSTRING("TOPDOWN","\x57","\xa1","\x79","\x78")) return TOPDOWN;
	if (inName==HX_HCSTRING("TOPDOWN_TIGHT","\x96","\x70","\xba","\x44")) return TOPDOWN_TIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LOCKON","\xca","\xb9","\x49","\x0c"),
	HX_HCSTRING("PLATFORMER","\xe0","\xd1","\xdb","\x91"),
	HX_HCSTRING("TOPDOWN","\x57","\xa1","\x79","\x78"),
	HX_HCSTRING("TOPDOWN_TIGHT","\x96","\x70","\xba","\x44"),
	HX_HCSTRING("SCREEN_BY_SCREEN","\x41","\x1a","\xfc","\xbf"),
	HX_HCSTRING("NO_DEAD_ZONE","\x29","\xd8","\x53","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::LOCKON,"LOCKON");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::NO_DEAD_ZONE,"NO_DEAD_ZONE");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::PLATFORMER,"PLATFORMER");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN,"SCREEN_BY_SCREEN");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN,"TOPDOWN");
	HX_MARK_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN_TIGHT,"TOPDOWN_TIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::LOCKON,"LOCKON");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::NO_DEAD_ZONE,"NO_DEAD_ZONE");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::PLATFORMER,"PLATFORMER");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN,"SCREEN_BY_SCREEN");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN,"TOPDOWN");
	HX_VISIT_MEMBER_NAME(FlxCameraFollowStyle_obj::TOPDOWN_TIGHT,"TOPDOWN_TIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxCameraFollowStyle_obj::__mClass;

Dynamic __Create_FlxCameraFollowStyle_obj() { return new FlxCameraFollowStyle_obj; }

void FlxCameraFollowStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.FlxCameraFollowStyle","\xfb","\x4d","\x2f","\xfa"), hx::TCanCast< FlxCameraFollowStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FlxCameraFollowStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFlxCameraFollowStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxCameraFollowStyle_obj::__boot()
{
hx::Static(LOCKON) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_HCSTRING("LOCKON","\xca","\xb9","\x49","\x0c"),0);
hx::Static(NO_DEAD_ZONE) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_HCSTRING("NO_DEAD_ZONE","\x29","\xd8","\x53","\x49"),5);
hx::Static(PLATFORMER) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_HCSTRING("PLATFORMER","\xe0","\xd1","\xdb","\x91"),1);
hx::Static(SCREEN_BY_SCREEN) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_HCSTRING("SCREEN_BY_SCREEN","\x41","\x1a","\xfc","\xbf"),4);
hx::Static(TOPDOWN) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_HCSTRING("TOPDOWN","\x57","\xa1","\x79","\x78"),2);
hx::Static(TOPDOWN_TIGHT) = hx::CreateEnum< FlxCameraFollowStyle_obj >(HX_HCSTRING("TOPDOWN_TIGHT","\x96","\x70","\xba","\x44"),3);
}


} // end namespace flixel
