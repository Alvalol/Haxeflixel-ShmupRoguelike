#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::ATLAS;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::FILTER;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::FONT;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::IMAGE;

::flixel::graphics::frames::FlxFrameCollectionType FlxFrameCollectionType_obj::TILES;

::flixel::graphics::frames::FlxFrameCollectionType  FlxFrameCollectionType_obj::USER(::String type)
	{ return hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38"),4,hx::DynamicArray(0,1).Add(type)); }

HX_DEFINE_CREATE_ENUM(FlxFrameCollectionType_obj)

int FlxFrameCollectionType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ATLAS","\x2b","\x85","\xcb","\xa4")) return 2;
	if (inName==HX_HCSTRING("FILTER","\xb8","\xcb","\xb7","\x37")) return 5;
	if (inName==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e")) return 3;
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return 0;
	if (inName==HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e")) return 1;
	if (inName==HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38")) return 4;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxFrameCollectionType_obj,USER,return)

int FlxFrameCollectionType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ATLAS","\x2b","\x85","\xcb","\xa4")) return 0;
	if (inName==HX_HCSTRING("FILTER","\xb8","\xcb","\xb7","\x37")) return 0;
	if (inName==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e")) return 0;
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return 0;
	if (inName==HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e")) return 0;
	if (inName==HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic FlxFrameCollectionType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ATLAS","\x2b","\x85","\xcb","\xa4")) return ATLAS;
	if (inName==HX_HCSTRING("FILTER","\xb8","\xcb","\xb7","\x37")) return FILTER;
	if (inName==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e")) return FONT;
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return IMAGE;
	if (inName==HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e")) return TILES;
	if (inName==HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38")) return USER_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),
	HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e"),
	HX_HCSTRING("ATLAS","\x2b","\x85","\xcb","\xa4"),
	HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),
	HX_HCSTRING("USER","\x4b","\x5a","\x6e","\x38"),
	HX_HCSTRING("FILTER","\xb8","\xcb","\xb7","\x37"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::ATLAS,"ATLAS");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::FILTER,"FILTER");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(FlxFrameCollectionType_obj::TILES,"TILES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::ATLAS,"ATLAS");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::FILTER,"FILTER");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(FlxFrameCollectionType_obj::TILES,"TILES");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxFrameCollectionType_obj::__mClass;

Dynamic __Create_FlxFrameCollectionType_obj() { return new FlxFrameCollectionType_obj; }

void FlxFrameCollectionType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.graphics.frames.FlxFrameCollectionType","\xca","\xae","\x38","\xe8"), hx::TCanCast< FlxFrameCollectionType_obj >,sStaticFields,sMemberFields,
	&__Create_FlxFrameCollectionType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxFrameCollectionType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxFrameCollectionType_obj::__boot()
{
hx::Static(ATLAS) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("ATLAS","\x2b","\x85","\xcb","\xa4"),2);
hx::Static(FILTER) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("FILTER","\xb8","\xcb","\xb7","\x37"),5);
hx::Static(FONT) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),3);
hx::Static(IMAGE) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),0);
hx::Static(TILES) = hx::CreateEnum< FlxFrameCollectionType_obj >(HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e"),1);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace frames
