#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxRenderMethod
#include <flixel/FlxRenderMethod.h>
#endif
namespace flixel{

::flixel::FlxRenderMethod FlxRenderMethod_obj::BLITTING;

::flixel::FlxRenderMethod FlxRenderMethod_obj::DRAW_TILES;

HX_DEFINE_CREATE_ENUM(FlxRenderMethod_obj)

int FlxRenderMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BLITTING","\xa3","\x53","\xd4","\xdc")) return 1;
	if (inName==HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6")) return 0;
	return super::__FindIndex(inName);
}

int FlxRenderMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BLITTING","\xa3","\x53","\xd4","\xdc")) return 0;
	if (inName==HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxRenderMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BLITTING","\xa3","\x53","\xd4","\xdc")) return BLITTING;
	if (inName==HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6")) return DRAW_TILES;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6"),
	HX_HCSTRING("BLITTING","\xa3","\x53","\xd4","\xdc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRenderMethod_obj::BLITTING,"BLITTING");
	HX_MARK_MEMBER_NAME(FlxRenderMethod_obj::DRAW_TILES,"DRAW_TILES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRenderMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRenderMethod_obj::BLITTING,"BLITTING");
	HX_VISIT_MEMBER_NAME(FlxRenderMethod_obj::DRAW_TILES,"DRAW_TILES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxRenderMethod_obj::__mClass;

Dynamic __Create_FlxRenderMethod_obj() { return new FlxRenderMethod_obj; }

void FlxRenderMethod_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.FlxRenderMethod","\x37","\x14","\xc6","\xa4"), hx::TCanCast< FlxRenderMethod_obj >,sStaticFields,sMemberFields,
	&__Create_FlxRenderMethod_obj, &__Create,
	&super::__SGetClass(), &CreateFlxRenderMethod_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxRenderMethod_obj::__boot()
{
hx::Static(BLITTING) = hx::CreateEnum< FlxRenderMethod_obj >(HX_HCSTRING("BLITTING","\xa3","\x53","\xd4","\xdc"),1);
hx::Static(DRAW_TILES) = hx::CreateEnum< FlxRenderMethod_obj >(HX_HCSTRING("DRAW_TILES","\xaa","\x4b","\xc0","\xd6"),0);
}


} // end namespace flixel
