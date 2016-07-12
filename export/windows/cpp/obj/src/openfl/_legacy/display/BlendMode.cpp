#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::BlendMode BlendMode_obj::ADD;

::openfl::_legacy::display::BlendMode BlendMode_obj::ALPHA;

::openfl::_legacy::display::BlendMode BlendMode_obj::DARKEN;

::openfl::_legacy::display::BlendMode BlendMode_obj::DIFFERENCE;

::openfl::_legacy::display::BlendMode BlendMode_obj::ERASE;

::openfl::_legacy::display::BlendMode BlendMode_obj::HARDLIGHT;

::openfl::_legacy::display::BlendMode BlendMode_obj::INVERT;

::openfl::_legacy::display::BlendMode BlendMode_obj::LAYER;

::openfl::_legacy::display::BlendMode BlendMode_obj::LIGHTEN;

::openfl::_legacy::display::BlendMode BlendMode_obj::MULTIPLY;

::openfl::_legacy::display::BlendMode BlendMode_obj::NORMAL;

::openfl::_legacy::display::BlendMode BlendMode_obj::OVERLAY;

::openfl::_legacy::display::BlendMode BlendMode_obj::SCREEN;

::openfl::_legacy::display::BlendMode BlendMode_obj::SUBTRACT;

HX_DEFINE_CREATE_ENUM(BlendMode_obj)

int BlendMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00")) return 7;
	if (inName==HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")) return 10;
	if (inName==HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3")) return 5;
	if (inName==HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38")) return 6;
	if (inName==HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1")) return 11;
	if (inName==HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e")) return 13;
	if (inName==HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")) return 9;
	if (inName==HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed")) return 1;
	if (inName==HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99")) return 4;
	if (inName==HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4")) return 2;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	if (inName==HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28")) return 12;
	if (inName==HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9")) return 3;
	if (inName==HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51")) return 8;
	return super::__FindIndex(inName);
}

int BlendMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")) return 0;
	if (inName==HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3")) return 0;
	if (inName==HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38")) return 0;
	if (inName==HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1")) return 0;
	if (inName==HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e")) return 0;
	if (inName==HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")) return 0;
	if (inName==HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed")) return 0;
	if (inName==HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99")) return 0;
	if (inName==HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4")) return 0;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	if (inName==HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28")) return 0;
	if (inName==HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9")) return 0;
	if (inName==HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BlendMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00")) return ADD;
	if (inName==HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")) return ALPHA;
	if (inName==HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3")) return DARKEN;
	if (inName==HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38")) return DIFFERENCE;
	if (inName==HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1")) return ERASE;
	if (inName==HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e")) return HARDLIGHT;
	if (inName==HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")) return INVERT;
	if (inName==HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed")) return LAYER;
	if (inName==HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99")) return LIGHTEN;
	if (inName==HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4")) return MULTIPLY;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return NORMAL;
	if (inName==HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28")) return OVERLAY;
	if (inName==HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9")) return SCREEN;
	if (inName==HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51")) return SUBTRACT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed"),
	HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4"),
	HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9"),
	HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99"),
	HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3"),
	HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38"),
	HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00"),
	HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1"),
	HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28"),
	HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DARKEN,"DARKEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::DIFFERENCE,"DIFFERENCE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_MARK_MEMBER_NAME(BlendMode_obj::HARDLIGHT,"HARDLIGHT");
	HX_MARK_MEMBER_NAME(BlendMode_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(BlendMode_obj::LAYER,"LAYER");
	HX_MARK_MEMBER_NAME(BlendMode_obj::LIGHTEN,"LIGHTEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(BlendMode_obj::OVERLAY,"OVERLAY");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_MARK_MEMBER_NAME(BlendMode_obj::SUBTRACT,"SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlendMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ADD,"ADD");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DARKEN,"DARKEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::DIFFERENCE,"DIFFERENCE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::ERASE,"ERASE");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::HARDLIGHT,"HARDLIGHT");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::LAYER,"LAYER");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::LIGHTEN,"LIGHTEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::MULTIPLY,"MULTIPLY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::OVERLAY,"OVERLAY");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SCREEN,"SCREEN");
	HX_VISIT_MEMBER_NAME(BlendMode_obj::SUBTRACT,"SUBTRACT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BlendMode_obj::__mClass;

Dynamic __Create_BlendMode_obj() { return new BlendMode_obj; }

void BlendMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.display.BlendMode","\xa4","\x16","\xb7","\xb7"), hx::TCanCast< BlendMode_obj >,sStaticFields,sMemberFields,
	&__Create_BlendMode_obj, &__Create,
	&super::__SGetClass(), &CreateBlendMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BlendMode_obj::__boot()
{
hx::Static(ADD) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("ADD","\x01","\x8e","\x31","\x00"),7);
hx::Static(ALPHA) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),10);
hx::Static(DARKEN) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("DARKEN","\x5f","\xe2","\xbc","\xd3"),5);
hx::Static(DIFFERENCE) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("DIFFERENCE","\xfd","\x0f","\x9b","\x38"),6);
hx::Static(ERASE) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("ERASE","\xc6","\x20","\x0b","\xf1"),11);
hx::Static(HARDLIGHT) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("HARDLIGHT","\xeb","\xdd","\xc3","\x4e"),13);
hx::Static(INVERT) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),9);
hx::Static(LAYER) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("LAYER","\xb1","\xb9","\xae","\xed"),1);
hx::Static(LIGHTEN) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("LIGHTEN","\x9f","\x1e","\xb7","\x99"),4);
hx::Static(MULTIPLY) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("MULTIPLY","\x24","\x72","\x12","\xf4"),2);
hx::Static(NORMAL) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),0);
hx::Static(OVERLAY) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("OVERLAY","\x70","\x17","\xe4","\x28"),12);
hx::Static(SCREEN) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("SCREEN","\x6c","\xe7","\xdf","\xf9"),3);
hx::Static(SUBTRACT) = hx::CreateEnum< BlendMode_obj >(HX_HCSTRING("SUBTRACT","\x14","\x05","\x97","\x51"),8);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
