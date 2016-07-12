#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{


static ::String sMemberFields[] = {
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_facing","\x57","\x4d","\x0a","\xd8"),
	HX_HCSTRING("set_moves","\xa5","\x14","\x60","\x33"),
	HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("facing","\x1a","\x3f","\x05","\xe4"),
	HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxSprite_obj::__mClass;

void IFlxSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.IFlxSprite","\x60","\xad","\x56","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxSprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
