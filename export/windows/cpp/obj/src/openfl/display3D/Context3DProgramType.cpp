#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#include <openfl/display3D/Context3DProgramType.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DProgramType Context3DProgramType_obj::FRAGMENT;

::openfl::display3D::Context3DProgramType Context3DProgramType_obj::VERTEX;

HX_DEFINE_CREATE_ENUM(Context3DProgramType_obj)

int Context3DProgramType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")) return 1;
	if (inName==HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")) return 0;
	return super::__FindIndex(inName);
}

int Context3DProgramType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")) return 0;
	if (inName==HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DProgramType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07")) return FRAGMENT;
	if (inName==HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53")) return VERTEX;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53"),
	HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_MARK_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::FRAGMENT,"FRAGMENT");
	HX_VISIT_MEMBER_NAME(Context3DProgramType_obj::VERTEX,"VERTEX");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Context3DProgramType_obj::__mClass;

Dynamic __Create_Context3DProgramType_obj() { return new Context3DProgramType_obj; }

void Context3DProgramType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display3D.Context3DProgramType","\xf7","\xb6","\x69","\x13"), hx::TCanCast< Context3DProgramType_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DProgramType_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DProgramType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DProgramType_obj::__boot()
{
hx::Static(FRAGMENT) = hx::CreateEnum< Context3DProgramType_obj >(HX_HCSTRING("FRAGMENT","\xd0","\xef","\x6a","\x07"),1);
hx::Static(VERTEX) = hx::CreateEnum< Context3DProgramType_obj >(HX_HCSTRING("VERTEX","\x64","\x87","\xca","\x53"),0);
}


} // end namespace openfl
} // end namespace display3D
