#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_mappings_Manufacturer
#include <flixel/input/gamepad/mappings/Manufacturer.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

::flixel::input::gamepad::mappings::Manufacturer Manufacturer_obj::AdobeWindows;

::flixel::input::gamepad::mappings::Manufacturer Manufacturer_obj::GooglePepper;

::flixel::input::gamepad::mappings::Manufacturer Manufacturer_obj::Unknown;

HX_DEFINE_CREATE_ENUM(Manufacturer_obj)

int Manufacturer_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AdobeWindows","\x74","\xf3","\xdd","\x6f")) return 1;
	if (inName==HX_HCSTRING("GooglePepper","\x9b","\xcf","\x95","\x53")) return 0;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return 2;
	return super::__FindIndex(inName);
}

int Manufacturer_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AdobeWindows","\x74","\xf3","\xdd","\x6f")) return 0;
	if (inName==HX_HCSTRING("GooglePepper","\x9b","\xcf","\x95","\x53")) return 0;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Manufacturer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AdobeWindows","\x74","\xf3","\xdd","\x6f")) return AdobeWindows;
	if (inName==HX_HCSTRING("GooglePepper","\x9b","\xcf","\x95","\x53")) return GooglePepper;
	if (inName==HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")) return Unknown;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("GooglePepper","\x9b","\xcf","\x95","\x53"),
	HX_HCSTRING("AdobeWindows","\x74","\xf3","\xdd","\x6f"),
	HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manufacturer_obj::AdobeWindows,"AdobeWindows");
	HX_MARK_MEMBER_NAME(Manufacturer_obj::GooglePepper,"GooglePepper");
	HX_MARK_MEMBER_NAME(Manufacturer_obj::Unknown,"Unknown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manufacturer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Manufacturer_obj::AdobeWindows,"AdobeWindows");
	HX_VISIT_MEMBER_NAME(Manufacturer_obj::GooglePepper,"GooglePepper");
	HX_VISIT_MEMBER_NAME(Manufacturer_obj::Unknown,"Unknown");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Manufacturer_obj::__mClass;

Dynamic __Create_Manufacturer_obj() { return new Manufacturer_obj; }

void Manufacturer_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.input.gamepad.mappings.Manufacturer","\xd7","\x3a","\x0b","\xc4"), hx::TCanCast< Manufacturer_obj >,sStaticFields,sMemberFields,
	&__Create_Manufacturer_obj, &__Create,
	&super::__SGetClass(), &CreateManufacturer_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Manufacturer_obj::__boot()
{
hx::Static(AdobeWindows) = hx::CreateEnum< Manufacturer_obj >(HX_HCSTRING("AdobeWindows","\x74","\xf3","\xdd","\x6f"),1);
hx::Static(GooglePepper) = hx::CreateEnum< Manufacturer_obj >(HX_HCSTRING("GooglePepper","\x9b","\xcf","\x95","\x53"),0);
hx::Static(Unknown) = hx::CreateEnum< Manufacturer_obj >(HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),2);
}


} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
