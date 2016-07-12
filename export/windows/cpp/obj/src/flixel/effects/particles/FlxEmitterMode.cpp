#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

::flixel::effects::particles::FlxEmitterMode FlxEmitterMode_obj::CIRCLE;

::flixel::effects::particles::FlxEmitterMode FlxEmitterMode_obj::SQUARE;

HX_DEFINE_CREATE_ENUM(FlxEmitterMode_obj)

int FlxEmitterMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08")) return 1;
	if (inName==HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")) return 0;
	return super::__FindIndex(inName);
}

int FlxEmitterMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08")) return 0;
	if (inName==HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FlxEmitterMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08")) return CIRCLE;
	if (inName==HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")) return SQUARE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),
	HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmitterMode_obj::CIRCLE,"CIRCLE");
	HX_MARK_MEMBER_NAME(FlxEmitterMode_obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmitterMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxEmitterMode_obj::CIRCLE,"CIRCLE");
	HX_VISIT_MEMBER_NAME(FlxEmitterMode_obj::SQUARE,"SQUARE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FlxEmitterMode_obj::__mClass;

Dynamic __Create_FlxEmitterMode_obj() { return new FlxEmitterMode_obj; }

void FlxEmitterMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("flixel.effects.particles.FlxEmitterMode","\x1e","\xd4","\x79","\xe9"), hx::TCanCast< FlxEmitterMode_obj >,sStaticFields,sMemberFields,
	&__Create_FlxEmitterMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxEmitterMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FlxEmitterMode_obj::__boot()
{
hx::Static(CIRCLE) = hx::CreateEnum< FlxEmitterMode_obj >(HX_HCSTRING("CIRCLE","\x10","\x1e","\x90","\x08"),1);
hx::Static(SQUARE) = hx::CreateEnum< FlxEmitterMode_obj >(HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),0);
}


} // end namespace flixel
} // end namespace effects
} // end namespace particles
