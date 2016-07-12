#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPLINEAR;

::openfl::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPNEAREST;

::openfl::display3D::Context3DMipFilter Context3DMipFilter_obj::MIPNONE;

HX_DEFINE_CREATE_ENUM(Context3DMipFilter_obj)

int Context3DMipFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f")) return 0;
	if (inName==HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2")) return 1;
	if (inName==HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5")) return 2;
	return super::__FindIndex(inName);
}

int Context3DMipFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f")) return 0;
	if (inName==HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2")) return 0;
	if (inName==HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DMipFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f")) return MIPLINEAR;
	if (inName==HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2")) return MIPNEAREST;
	if (inName==HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5")) return MIPNONE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f"),
	HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2"),
	HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_obj::MIPNONE,"MIPNONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_obj::MIPNONE,"MIPNONE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Context3DMipFilter_obj::__mClass;

Dynamic __Create_Context3DMipFilter_obj() { return new Context3DMipFilter_obj; }

void Context3DMipFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display3D.Context3DMipFilter","\xc5","\x7f","\xde","\xaf"), hx::TCanCast< Context3DMipFilter_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DMipFilter_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DMipFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DMipFilter_obj::__boot()
{
hx::Static(MIPLINEAR) = hx::CreateEnum< Context3DMipFilter_obj >(HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f"),0);
hx::Static(MIPNEAREST) = hx::CreateEnum< Context3DMipFilter_obj >(HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2"),1);
hx::Static(MIPNONE) = hx::CreateEnum< Context3DMipFilter_obj >(HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5"),2);
}


} // end namespace openfl
} // end namespace display3D
