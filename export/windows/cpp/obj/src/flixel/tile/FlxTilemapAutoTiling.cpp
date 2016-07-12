#include <hxcpp.h>

#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
namespace flixel{
namespace tile{

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::ALT;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::AUTO;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::OFF;

HX_DEFINE_CREATE_ENUM(FlxTilemapAutoTiling_obj)

int FlxTilemapAutoTiling_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return 2;
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return 1;
	if (inName==HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00")) return 0;
	return super::__FindIndex(inName);
}

int FlxTilemapAutoTiling_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return 0;
	if (inName==HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxTilemapAutoTiling_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return ALT;
	if (inName==HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")) return AUTO;
	if (inName==HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00")) return OFF;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00"),
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapAutoTiling_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxTilemapAutoTiling_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemapAutoTiling_obj::OFF,"OFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemapAutoTiling_obj::OFF,"OFF");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxTilemapAutoTiling_obj::__mClass;

Dynamic __Create_FlxTilemapAutoTiling_obj() { return new FlxTilemapAutoTiling_obj; }

void FlxTilemapAutoTiling_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.tile.FlxTilemapAutoTiling","\x84","\x9e","\x85","\x97"), hx::TCanCast< FlxTilemapAutoTiling_obj >,sStaticFields,sMemberFields,
	&__Create_FlxTilemapAutoTiling_obj, &__Create,
	&super::__SGetClass(), &CreateFlxTilemapAutoTiling_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxTilemapAutoTiling_obj::__boot()
{
hx::Static(ALT) = hx::CreateEnum< FlxTilemapAutoTiling_obj >(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),2);
hx::Static(AUTO) = hx::CreateEnum< FlxTilemapAutoTiling_obj >(HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),1);
hx::Static(OFF) = hx::CreateEnum< FlxTilemapAutoTiling_obj >(HX_HCSTRING("OFF","\x4f","\x2f","\x3c","\x00"),0);
}


} // end namespace flixel
} // end namespace tile
