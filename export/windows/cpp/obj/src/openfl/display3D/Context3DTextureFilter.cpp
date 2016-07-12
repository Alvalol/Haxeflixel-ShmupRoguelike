#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC16X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC2X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC4X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC8X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::LINEAR;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::NEAREST;

HX_DEFINE_CREATE_ENUM(Context3DTextureFilter_obj)

int Context3DTextureFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d")) return 3;
	if (inName==HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb")) return 0;
	if (inName==HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb")) return 1;
	if (inName==HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb")) return 2;
	if (inName==HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")) return 4;
	if (inName==HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")) return 5;
	return super::__FindIndex(inName);
}

int Context3DTextureFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d")) return 0;
	if (inName==HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb")) return 0;
	if (inName==HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb")) return 0;
	if (inName==HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb")) return 0;
	if (inName==HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")) return 0;
	if (inName==HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DTextureFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d")) return ANISOTROPIC16X;
	if (inName==HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb")) return ANISOTROPIC2X;
	if (inName==HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb")) return ANISOTROPIC4X;
	if (inName==HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb")) return ANISOTROPIC8X;
	if (inName==HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")) return LINEAR;
	if (inName==HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")) return NEAREST;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb"),
	HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::NEAREST,"NEAREST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::NEAREST,"NEAREST");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Context3DTextureFilter_obj::__mClass;

Dynamic __Create_Context3DTextureFilter_obj() { return new Context3DTextureFilter_obj; }

void Context3DTextureFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display3D.Context3DTextureFilter","\xcc","\x86","\xe2","\x3c"), hx::TCanCast< Context3DTextureFilter_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DTextureFilter_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DTextureFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DTextureFilter_obj::__boot()
{
hx::Static(ANISOTROPIC16X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_HCSTRING("ANISOTROPIC16X","\x62","\xf6","\x10","\x1d"),3);
hx::Static(ANISOTROPIC2X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_HCSTRING("ANISOTROPIC2X","\x37","\x1a","\x65","\xdb"),0);
hx::Static(ANISOTROPIC4X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_HCSTRING("ANISOTROPIC4X","\xf5","\x1b","\x65","\xdb"),1);
hx::Static(ANISOTROPIC8X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_HCSTRING("ANISOTROPIC8X","\x71","\x1f","\x65","\xdb"),2);
hx::Static(LINEAR) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),4);
hx::Static(NEAREST) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),5);
}


} // end namespace openfl
} // end namespace display3D
