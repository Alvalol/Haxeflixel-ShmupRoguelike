#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::BYTES_4;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_1;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_2;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_3;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_4;

HX_DEFINE_CREATE_ENUM(Context3DVertexBufferFormat_obj)

int Context3DVertexBufferFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9")) return 0;
	if (inName==HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69")) return 1;
	if (inName==HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69")) return 2;
	if (inName==HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69")) return 3;
	if (inName==HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69")) return 4;
	return super::__FindIndex(inName);
}

int Context3DVertexBufferFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9")) return 0;
	if (inName==HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69")) return 0;
	if (inName==HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69")) return 0;
	if (inName==HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69")) return 0;
	if (inName==HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DVertexBufferFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9")) return BYTES_4;
	if (inName==HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69")) return FLOAT_1;
	if (inName==HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69")) return FLOAT_2;
	if (inName==HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69")) return FLOAT_3;
	if (inName==HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69")) return FLOAT_4;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9"),
	HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69"),
	HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69"),
	HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69"),
	HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Context3DVertexBufferFormat_obj::__mClass;

Dynamic __Create_Context3DVertexBufferFormat_obj() { return new Context3DVertexBufferFormat_obj; }

void Context3DVertexBufferFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.display3D.Context3DVertexBufferFormat","\x62","\x07","\x92","\xfd"), hx::TCanCast< Context3DVertexBufferFormat_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DVertexBufferFormat_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DVertexBufferFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DVertexBufferFormat_obj::__boot()
{
hx::Static(BYTES_4) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9"),0);
hx::Static(FLOAT_1) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69"),1);
hx::Static(FLOAT_2) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69"),2);
hx::Static(FLOAT_3) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69"),3);
hx::Static(FLOAT_4) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69"),4);
}


} // end namespace openfl
} // end namespace display3D
