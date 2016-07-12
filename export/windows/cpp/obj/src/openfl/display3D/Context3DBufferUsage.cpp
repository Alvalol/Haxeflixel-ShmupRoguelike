#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DBufferUsage
#include <openfl/display3D/Context3DBufferUsage.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DBufferUsage Context3DBufferUsage_obj::DYNAMIC_DRAW;

::openfl::display3D::Context3DBufferUsage Context3DBufferUsage_obj::STATIC_DRAW;

HX_DEFINE_CREATE_ENUM(Context3DBufferUsage_obj)

int Context3DBufferUsage_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")) return 1;
	if (inName==HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")) return 0;
	return super::__FindIndex(inName);
}

int Context3DBufferUsage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")) return 0;
	if (inName==HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DBufferUsage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")) return DYNAMIC_DRAW;
	if (inName==HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")) return STATIC_DRAW;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_obj::STATIC_DRAW,"STATIC_DRAW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_obj::STATIC_DRAW,"STATIC_DRAW");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Context3DBufferUsage_obj::__mClass;

Dynamic __Create_Context3DBufferUsage_obj() { return new Context3DBufferUsage_obj; }

void Context3DBufferUsage_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display3D.Context3DBufferUsage","\x9a","\xab","\xb7","\x96"), hx::TCanCast< Context3DBufferUsage_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DBufferUsage_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DBufferUsage_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DBufferUsage_obj::__boot()
{
hx::Static(DYNAMIC_DRAW) = hx::CreateEnum< Context3DBufferUsage_obj >(HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),1);
hx::Static(STATIC_DRAW) = hx::CreateEnum< Context3DBufferUsage_obj >(HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),0);
}


} // end namespace openfl
} // end namespace display3D
