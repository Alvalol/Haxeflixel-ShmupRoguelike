#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#include <openfl/_legacy/display/InterpolationMethod.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::InterpolationMethod InterpolationMethod_obj::LINEAR_RGB;

::openfl::_legacy::display::InterpolationMethod InterpolationMethod_obj::RGB;

HX_DEFINE_CREATE_ENUM(InterpolationMethod_obj)

int InterpolationMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52")) return 1;
	if (inName==HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")) return 0;
	return super::__FindIndex(inName);
}

int InterpolationMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52")) return 0;
	if (inName==HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InterpolationMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52")) return LINEAR_RGB;
	if (inName==HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")) return RGB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMethod_obj::LINEAR_RGB,"LINEAR_RGB");
	HX_MARK_MEMBER_NAME(InterpolationMethod_obj::RGB,"RGB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::LINEAR_RGB,"LINEAR_RGB");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_obj::RGB,"RGB");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class InterpolationMethod_obj::__mClass;

Dynamic __Create_InterpolationMethod_obj() { return new InterpolationMethod_obj; }

void InterpolationMethod_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.InterpolationMethod","\x75","\xc5","\xa7","\x1f"), hx::TCanCast< InterpolationMethod_obj >,sStaticFields,sMemberFields,
	&__Create_InterpolationMethod_obj, &__Create,
	&super::__SGetClass(), &CreateInterpolationMethod_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InterpolationMethod_obj::__boot()
{
hx::Static(LINEAR_RGB) = hx::CreateEnum< InterpolationMethod_obj >(HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52"),1);
hx::Static(RGB) = hx::CreateEnum< InterpolationMethod_obj >(HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
