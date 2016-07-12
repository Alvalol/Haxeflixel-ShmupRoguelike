#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

::flixel::_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::BIG;

::flixel::_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::LEFT;

::flixel::_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::MICRO;

::flixel::_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::RIGHT;

::flixel::_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::STANDARD;

::flixel::_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::TOP;

HX_DEFINE_CREATE_ENUM(FlxDebuggerLayout_obj)

int FlxDebuggerLayout_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00")) return 2;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 4;
	if (inName==HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86")) return 1;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 5;
	if (inName==HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")) return 0;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 3;
	return super::__FindIndex(inName);
}

int FlxDebuggerLayout_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")) return 0;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxDebuggerLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00")) return BIG;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86")) return MICRO;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43")) return STANDARD;
	if (inName==HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43"),
	HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86"),
	HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebuggerLayout_obj::BIG,"BIG");
	HX_MARK_MEMBER_NAME(FlxDebuggerLayout_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxDebuggerLayout_obj::MICRO,"MICRO");
	HX_MARK_MEMBER_NAME(FlxDebuggerLayout_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxDebuggerLayout_obj::STANDARD,"STANDARD");
	HX_MARK_MEMBER_NAME(FlxDebuggerLayout_obj::TOP,"TOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::BIG,"BIG");
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::MICRO,"MICRO");
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::STANDARD,"STANDARD");
	HX_VISIT_MEMBER_NAME(FlxDebuggerLayout_obj::TOP,"TOP");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxDebuggerLayout_obj::__mClass;

Dynamic __Create_FlxDebuggerLayout_obj() { return new FlxDebuggerLayout_obj; }

void FlxDebuggerLayout_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.system.debug.FlxDebuggerLayout","\x15","\xd0","\x5b","\x09"), hx::TCanCast< FlxDebuggerLayout_obj >,sStaticFields,sMemberFields,
	&__Create_FlxDebuggerLayout_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDebuggerLayout_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxDebuggerLayout_obj::__boot()
{
hx::Static(BIG) = hx::CreateEnum< FlxDebuggerLayout_obj >(HX_HCSTRING("BIG","\xa0","\x54","\x32","\x00"),2);
hx::Static(LEFT) = hx::CreateEnum< FlxDebuggerLayout_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),4);
hx::Static(MICRO) = hx::CreateEnum< FlxDebuggerLayout_obj >(HX_HCSTRING("MICRO","\xe4","\x5c","\x4e","\x86"),1);
hx::Static(RIGHT) = hx::CreateEnum< FlxDebuggerLayout_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),5);
hx::Static(STANDARD) = hx::CreateEnum< FlxDebuggerLayout_obj >(HX_HCSTRING("STANDARD","\x3d","\xc7","\xfd","\x43"),0);
hx::Static(TOP) = hx::CreateEnum< FlxDebuggerLayout_obj >(HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),3);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
