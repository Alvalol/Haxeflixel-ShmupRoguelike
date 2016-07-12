#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#define INCLUDED_flixel_effects_particles_FlxParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS3(flixel,effects,particles,IFlxParticle)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRange)
namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  FlxParticle_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxParticle_obj OBJ_;
		FlxParticle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.effects.particles.FlxParticle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxParticle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxParticle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::IFlxSprite_obj *();
		operator ::flixel::IFlxBasic_obj *();
		operator ::flixel::effects::particles::IFlxParticle_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxParticle","\xb8","\x18","\xa8","\x83"); }

		Float lifespan;
		Float age;
		Float percent;
		bool autoUpdateHitbox;
		::flixel::util::helpers::FlxRange velocityRange;
		::flixel::util::helpers::FlxRange angularVelocityRange;
		::flixel::util::helpers::FlxRange scaleRange;
		::flixel::util::helpers::FlxRange alphaRange;
		::flixel::util::helpers::FlxRange colorRange;
		::flixel::util::helpers::FlxRange dragRange;
		::flixel::util::helpers::FlxRange accelerationRange;
		::flixel::util::helpers::FlxRange elasticityRange;
		Float _delta;
		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void reset( Float X,Float Y);

		virtual Void onEmit( );
		Dynamic onEmit_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxParticle */ 
