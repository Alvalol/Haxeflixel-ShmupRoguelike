#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TILES;

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TRIANGLES;

HX_DEFINE_CREATE_ENUM(FlxDrawItemType_obj)

int FlxDrawItemType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e")) return 0;
	if (inName==HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")) return 1;
	return super::__FindIndex(inName);
}

int FlxDrawItemType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e")) return 0;
	if (inName==HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxDrawItemType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e")) return TILES;
	if (inName==HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")) return TRIANGLES;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e"),
	HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawItemType_obj::TILES,"TILES");
	HX_MARK_MEMBER_NAME(FlxDrawItemType_obj::TRIANGLES,"TRIANGLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::TILES,"TILES");
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::TRIANGLES,"TRIANGLES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxDrawItemType_obj::__mClass;

Dynamic __Create_FlxDrawItemType_obj() { return new FlxDrawItemType_obj; }

void FlxDrawItemType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.graphics.tile.FlxDrawItemType","\xb4","\xaa","\x75","\xd0"), hx::TCanCast< FlxDrawItemType_obj >,sStaticFields,sMemberFields,
	&__Create_FlxDrawItemType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDrawItemType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxDrawItemType_obj::__boot()
{
hx::Static(TILES) = hx::CreateEnum< FlxDrawItemType_obj >(HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e"),0);
hx::Static(TRIANGLES) = hx::CreateEnum< FlxDrawItemType_obj >(HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),1);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace tile
