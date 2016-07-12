#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
namespace flixel{
namespace util{

::flixel::util::FlxAxes FlxAxes_obj::X;

::flixel::util::FlxAxes FlxAxes_obj::XY;

::flixel::util::FlxAxes FlxAxes_obj::Y;

HX_DEFINE_CREATE_ENUM(FlxAxes_obj)

int FlxAxes_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("X","\x58","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("XY","\x01","\x4d","\x00","\x00")) return 2;
	if (inName==HX_HCSTRING("Y","\x59","\x00","\x00","\x00")) return 1;
	return super::__FindIndex(inName);
}

int FlxAxes_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("X","\x58","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("XY","\x01","\x4d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("Y","\x59","\x00","\x00","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxAxes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("X","\x58","\x00","\x00","\x00")) return X;
	if (inName==HX_HCSTRING("XY","\x01","\x4d","\x00","\x00")) return XY;
	if (inName==HX_HCSTRING("Y","\x59","\x00","\x00","\x00")) return Y;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("XY","\x01","\x4d","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAxes_obj::X,"X");
	HX_MARK_MEMBER_NAME(FlxAxes_obj::XY,"XY");
	HX_MARK_MEMBER_NAME(FlxAxes_obj::Y,"Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::X,"X");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::XY,"XY");
	HX_VISIT_MEMBER_NAME(FlxAxes_obj::Y,"Y");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxAxes_obj::__mClass;

Dynamic __Create_FlxAxes_obj() { return new FlxAxes_obj; }

void FlxAxes_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.util.FlxAxes","\x7d","\xff","\x79","\xb0"), hx::TCanCast< FlxAxes_obj >,sStaticFields,sMemberFields,
	&__Create_FlxAxes_obj, &__Create,
	&super::__SGetClass(), &CreateFlxAxes_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxAxes_obj::__boot()
{
hx::Static(X) = hx::CreateEnum< FlxAxes_obj >(HX_HCSTRING("X","\x58","\x00","\x00","\x00"),0);
hx::Static(XY) = hx::CreateEnum< FlxAxes_obj >(HX_HCSTRING("XY","\x01","\x4d","\x00","\x00"),2);
hx::Static(Y) = hx::CreateEnum< FlxAxes_obj >(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),1);
}


} // end namespace flixel
} // end namespace util
