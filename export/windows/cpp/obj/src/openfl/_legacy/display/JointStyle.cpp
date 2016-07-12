#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::JointStyle JointStyle_obj::BEVEL;

::openfl::_legacy::display::JointStyle JointStyle_obj::MITER;

::openfl::_legacy::display::JointStyle JointStyle_obj::ROUND;

HX_DEFINE_CREATE_ENUM(JointStyle_obj)

int JointStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e")) return 2;
	if (inName==HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86")) return 1;
	if (inName==HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")) return 0;
	return super::__FindIndex(inName);
}

int JointStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e")) return 0;
	if (inName==HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86")) return 0;
	if (inName==HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic JointStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e")) return BEVEL;
	if (inName==HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86")) return MITER;
	if (inName==HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")) return ROUND;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),
	HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86"),
	HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JointStyle_obj::BEVEL,"BEVEL");
	HX_MARK_MEMBER_NAME(JointStyle_obj::MITER,"MITER");
	HX_MARK_MEMBER_NAME(JointStyle_obj::ROUND,"ROUND");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JointStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JointStyle_obj::BEVEL,"BEVEL");
	HX_VISIT_MEMBER_NAME(JointStyle_obj::MITER,"MITER");
	HX_VISIT_MEMBER_NAME(JointStyle_obj::ROUND,"ROUND");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class JointStyle_obj::__mClass;

Dynamic __Create_JointStyle_obj() { return new JointStyle_obj; }

void JointStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.JointStyle","\x37","\xc3","\xe9","\x45"), hx::TCanCast< JointStyle_obj >,sStaticFields,sMemberFields,
	&__Create_JointStyle_obj, &__Create,
	&super::__SGetClass(), &CreateJointStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void JointStyle_obj::__boot()
{
hx::Static(BEVEL) = hx::CreateEnum< JointStyle_obj >(HX_HCSTRING("BEVEL","\x5a","\x80","\x4f","\x2e"),2);
hx::Static(MITER) = hx::CreateEnum< JointStyle_obj >(HX_HCSTRING("MITER","\xe5","\x37","\x5b","\x86"),1);
hx::Static(ROUND) = hx::CreateEnum< JointStyle_obj >(HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
