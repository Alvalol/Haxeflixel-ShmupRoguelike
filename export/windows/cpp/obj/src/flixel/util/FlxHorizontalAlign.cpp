#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxHorizontalAlign FlxHorizontalAlign_obj::CENTER;

::flixel::util::FlxHorizontalAlign FlxHorizontalAlign_obj::LEFT;

::flixel::util::FlxHorizontalAlign FlxHorizontalAlign_obj::RIGHT;

HX_DEFINE_CREATE_ENUM(FlxHorizontalAlign_obj)

int FlxHorizontalAlign_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return 1;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 2;
	return super::__FindIndex(inName);
}

int FlxHorizontalAlign_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxHorizontalAlign_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")) return CENTER;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxHorizontalAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxHorizontalAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxHorizontalAlign_obj::RIGHT,"RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxHorizontalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxHorizontalAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxHorizontalAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxHorizontalAlign_obj::RIGHT,"RIGHT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxHorizontalAlign_obj::__mClass;

Dynamic __Create_FlxHorizontalAlign_obj() { return new FlxHorizontalAlign_obj; }

void FlxHorizontalAlign_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.util.FlxHorizontalAlign","\xe9","\x17","\xb2","\x1a"), hx::TCanCast< FlxHorizontalAlign_obj >,sStaticFields,sMemberFields,
	&__Create_FlxHorizontalAlign_obj, &__Create,
	&super::__SGetClass(), &CreateFlxHorizontalAlign_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxHorizontalAlign_obj::__boot()
{
hx::Static(CENTER) = hx::CreateEnum< FlxHorizontalAlign_obj >(HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),1);
hx::Static(LEFT) = hx::CreateEnum< FlxHorizontalAlign_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),0);
hx::Static(RIGHT) = hx::CreateEnum< FlxHorizontalAlign_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),2);
}


} // end namespace flixel
} // end namespace util
