#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace effects{
namespace particles{


static ::String sMemberFields[] = {
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("age","\xbf","\xf4","\x49","\x00"),
	HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"),
	HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"),
	HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"),
	HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"),
	HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"),
	HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"),
	HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"),
	HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"),
	HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"),
	HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"),
	HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#endif

hx::Class IFlxParticle_obj::__mClass;

void IFlxParticle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.IFlxParticle","\xae","\x0c","\x67","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IFlxParticle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
