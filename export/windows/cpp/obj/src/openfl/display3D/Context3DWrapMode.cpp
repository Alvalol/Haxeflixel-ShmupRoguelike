#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DWrapMode Context3DWrapMode_obj::CLAMP;

::openfl::display3D::Context3DWrapMode Context3DWrapMode_obj::REPEAT;

HX_DEFINE_CREATE_ENUM(Context3DWrapMode_obj)

int Context3DWrapMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6")) return 0;
	if (inName==HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")) return 1;
	return super::__FindIndex(inName);
}

int Context3DWrapMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6")) return 0;
	if (inName==HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DWrapMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6")) return CLAMP;
	if (inName==HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")) return REPEAT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DWrapMode_obj::CLAMP,"CLAMP");
	HX_MARK_MEMBER_NAME(Context3DWrapMode_obj::REPEAT,"REPEAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_obj::CLAMP,"CLAMP");
	HX_VISIT_MEMBER_NAME(Context3DWrapMode_obj::REPEAT,"REPEAT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Context3DWrapMode_obj::__mClass;

Dynamic __Create_Context3DWrapMode_obj() { return new Context3DWrapMode_obj; }

void Context3DWrapMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display3D.Context3DWrapMode","\x14","\xe1","\xdf","\xf5"), hx::TCanCast< Context3DWrapMode_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DWrapMode_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DWrapMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DWrapMode_obj::__boot()
{
hx::Static(CLAMP) = hx::CreateEnum< Context3DWrapMode_obj >(HX_HCSTRING("CLAMP","\xdb","\xaa","\x46","\xc6"),0);
hx::Static(REPEAT) = hx::CreateEnum< Context3DWrapMode_obj >(HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),1);
}


} // end namespace openfl
} // end namespace display3D
