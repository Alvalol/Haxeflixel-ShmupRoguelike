#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
namespace flixel{
namespace text{

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::NONE;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::OUTLINE;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::OUTLINE_FAST;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::SHADOW;

HX_DEFINE_CREATE_ENUM(FlxTextBorderStyle_obj)

int FlxTextBorderStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61")) return 2;
	if (inName==HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f")) return 3;
	if (inName==HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf")) return 1;
	return super::__FindIndex(inName);
}

int FlxTextBorderStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61")) return 0;
	if (inName==HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f")) return 0;
	if (inName==HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxTextBorderStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61")) return OUTLINE;
	if (inName==HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f")) return OUTLINE_FAST;
	if (inName==HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf")) return SHADOW;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf"),
	HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61"),
	HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE,"OUTLINE");
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE_FAST,"OUTLINE_FAST");
	HX_MARK_MEMBER_NAME(FlxTextBorderStyle_obj::SHADOW,"SHADOW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE,"OUTLINE");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::OUTLINE_FAST,"OUTLINE_FAST");
	HX_VISIT_MEMBER_NAME(FlxTextBorderStyle_obj::SHADOW,"SHADOW");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxTextBorderStyle_obj::__mClass;

Dynamic __Create_FlxTextBorderStyle_obj() { return new FlxTextBorderStyle_obj; }

void FlxTextBorderStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.text.FlxTextBorderStyle","\xd5","\x5b","\xd9","\x83"), hx::TCanCast< FlxTextBorderStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FlxTextBorderStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFlxTextBorderStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxTextBorderStyle_obj::__boot()
{
hx::Static(NONE) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),0);
hx::Static(OUTLINE) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_HCSTRING("OUTLINE","\x62","\xeb","\x91","\x61"),2);
hx::Static(OUTLINE_FAST) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_HCSTRING("OUTLINE_FAST","\xd9","\x37","\x1b","\x3f"),3);
hx::Static(SHADOW) = hx::CreateEnum< FlxTextBorderStyle_obj >(HX_HCSTRING("SHADOW","\xe0","\x73","\xa3","\xcf"),1);
}


} // end namespace flixel
} // end namespace text
