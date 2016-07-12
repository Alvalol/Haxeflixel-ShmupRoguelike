#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","new",0x3e1a9dc9,"flixel.effects.particles.FlxTypedEmitter.new","flixel/effects/particles/FlxEmitter.hx",30,0x6dff0520)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(171)
	this->_waitForKill = false;
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",167,0x6dff0520)
			{
				HX_STACK_LINE(167)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(167)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(167)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(167)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(167)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(167)
				point->_inPool = false;
				HX_STACK_LINE(167)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(167)
	this->_point = _Function_1_1::Block();
	HX_STACK_LINE(163)
	this->_counter = (int)0;
	HX_STACK_LINE(159)
	this->_timer = ((Float)0);
	HX_STACK_LINE(155)
	this->_explode = true;
	HX_STACK_LINE(151)
	this->_quantity = (int)0;
	HX_STACK_LINE(143)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(139)
	this->autoUpdateHitbox = false;
	HX_STACK_LINE(135)
	this->immovable = false;
	HX_STACK_LINE(131)
	this->elasticity = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,null(),null(),null());
	HX_STACK_LINE(127)
	this->acceleration = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)0,(int)0,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(123)
	this->drag = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)0,(int)0,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(119)
	this->color = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)-1,(int)-1,null(),null());
	HX_STACK_LINE(115)
	this->alpha = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)1,null(),null(),null());
	HX_STACK_LINE(111)
	this->scale = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)1,(int)1,null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(107)
	this->lifespan = ::flixel::util::helpers::FlxBounds_obj::__new((int)3,null());
	HX_STACK_LINE(103)
	this->launchAngle = ::flixel::util::helpers::FlxBounds_obj::__new((int)-180,(int)180);
	HX_STACK_LINE(99)
	this->ignoreAngularVelocity = false;
	HX_STACK_LINE(95)
	this->angle = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,null(),null(),null());
	HX_STACK_LINE(91)
	this->angularVelocity = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(87)
	this->angularDrag = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(83)
	this->angularAcceleration = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());
	HX_STACK_LINE(79)
	this->speed = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)100,null(),null());
	HX_STACK_LINE(75)
	this->velocity = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)-100,(int)-100,(int)100,(int)100,null(),null(),null(),null());
	HX_STACK_LINE(71)
	this->keepScaleRatio = false;
	HX_STACK_LINE(67)
	this->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE;
	HX_STACK_LINE(63)
	this->height = ((Float)0);
	HX_STACK_LINE(59)
	this->width = ((Float)0);
	HX_STACK_LINE(55)
	this->y = ((Float)0);
	HX_STACK_LINE(51)
	this->x = ((Float)0);
	HX_STACK_LINE(43)
	this->frequency = ((Float)0.1);
	HX_STACK_LINE(39)
	this->emitting = false;
	HX_STACK_LINE(35)
	this->particleClass = ((::hx::Class)(hx::ClassOf< ::flixel::effects::particles::FlxParticle >()));
	HX_STACK_LINE(183)
	int tmp = Size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	super::__construct(tmp);
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		this->x = X;
		HX_STACK_LINE(185)
		this->y = Y;
	}
	HX_STACK_LINE(186)
	this->set_exists(false);
}
;
	return null();
}

//FlxTypedEmitter_obj::~FlxTypedEmitter_obj() { }

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return  new FlxTypedEmitter_obj; }
hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitter_obj > _result_ = new FlxTypedEmitter_obj();
	_result_->__construct(__o_X,__o_Y,__o_Size);
	return _result_;}

Dynamic FlxTypedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitter_obj > _result_ = new FlxTypedEmitter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxTypedEmitter_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","destroy",0x574a62e3,"flixel.effects.particles.FlxTypedEmitter.destroy","flixel/effects/particles/FlxEmitter.hx",193,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		::flixel::util::helpers::FlxPointRangeBounds tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::flixel::util::helpers::FlxPointRangeBounds tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		this->velocity = tmp1;
		HX_STACK_LINE(195)
		::flixel::util::helpers::FlxPointRangeBounds tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		::flixel::util::helpers::FlxPointRangeBounds tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		this->scale = tmp3;
		HX_STACK_LINE(196)
		::flixel::util::helpers::FlxPointRangeBounds tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		::flixel::util::helpers::FlxPointRangeBounds tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		this->drag = tmp5;
		HX_STACK_LINE(197)
		::flixel::util::helpers::FlxPointRangeBounds tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		::flixel::util::helpers::FlxPointRangeBounds tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		this->acceleration = tmp7;
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(198)
		this->_point = tmp9;
		HX_STACK_LINE(200)
		this->blend = null();
		HX_STACK_LINE(201)
		this->angularAcceleration = null();
		HX_STACK_LINE(202)
		this->angularDrag = null();
		HX_STACK_LINE(203)
		this->angularVelocity = null();
		HX_STACK_LINE(204)
		this->angle = null();
		HX_STACK_LINE(205)
		this->speed = null();
		HX_STACK_LINE(206)
		this->launchAngle = null();
		HX_STACK_LINE(207)
		this->lifespan = null();
		HX_STACK_LINE(208)
		this->alpha = null();
		HX_STACK_LINE(209)
		this->color = null();
		HX_STACK_LINE(210)
		this->elasticity = null();
		HX_STACK_LINE(212)
		this->super::destroy();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::loadParticles( Dynamic Graphics,hx::Null< int >  __o_Quantity,hx::Null< int >  __o_bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< bool >  __o_AutoBuffer){
int Quantity = __o_Quantity.Default(50);
int bakedRotationAngles = __o_bakedRotationAngles.Default(16);
bool Multiple = __o_Multiple.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","loadParticles",0x7d4e1b10,"flixel.effects.particles.FlxTypedEmitter.loadParticles","flixel/effects/particles/FlxEmitter.hx",227,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(228)
		int tmp = Quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(228)
		this->set_maxSize(tmp);
		HX_STACK_LINE(229)
		int totalFrames = (int)1;		HX_STACK_VAR(totalFrames,"totalFrames");
		HX_STACK_LINE(231)
		bool tmp1 = Multiple;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(233)
			::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			::flixel::FlxSprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(234)
			Dynamic tmp3 = Graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			sprite->loadGraphic(tmp3,true,null(),null(),null(),null());
			HX_STACK_LINE(235)
			totalFrames = sprite->numFrames;
			HX_STACK_LINE(236)
			sprite->destroy();
		}
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(239)
			while((true)){
				HX_STACK_LINE(239)
				bool tmp2 = (_g < Quantity);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(239)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(239)
				if ((tmp3)){
					HX_STACK_LINE(239)
					break;
				}
				HX_STACK_LINE(239)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(239)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(240)
				Dynamic tmp5 = Graphics;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(240)
				int tmp6 = Quantity;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				int tmp7 = bakedRotationAngles;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				bool tmp8 = Multiple;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				bool tmp9 = AutoBuffer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(240)
				int tmp10 = totalFrames;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(240)
				Dynamic tmp11 = this->loadParticle(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				this->add(tmp11);
			}
		}
		HX_STACK_LINE(242)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,loadParticles,return )

Dynamic FlxTypedEmitter_obj::loadParticle( Dynamic Graphics,int Quantity,int bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< bool >  __o_AutoBuffer,int totalFrames){
bool Multiple = __o_Multiple.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","loadParticle",0x7ffce803,"flixel.effects.particles.FlxTypedEmitter.loadParticle","flixel/effects/particles/FlxEmitter.hx",247,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
	HX_STACK_ARG(totalFrames,"totalFrames")
{
		HX_STACK_LINE(248)
		::hx::Class tmp = this->particleClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		Dynamic tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		Dynamic particle = tmp1;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(249)
		bool tmp2 = Multiple;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		if ((tmp2)){
			HX_STACK_LINE(249)
			::flixel::math::FlxRandom tmp4 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			int tmp5 = (totalFrames - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			tmp3 = tmp4->_int((int)0,tmp5,null());
		}
		else{
			HX_STACK_LINE(249)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(249)
		int frame = tmp3;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(251)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		if ((tmp4)){
			HX_STACK_LINE(251)
			tmp5 = (bakedRotationAngles > (int)0);
		}
		else{
			HX_STACK_LINE(251)
			tmp5 = false;
		}
		HX_STACK_LINE(251)
		if ((tmp5)){
			HX_STACK_LINE(252)
			Dynamic tmp6 = Graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			int tmp7 = bakedRotationAngles;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			int tmp8 = frame;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			bool tmp9 = AutoBuffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			particle->__Field(HX_HCSTRING("loadRotatedGraphic","\xc5","\x14","\x74","\x62"), hx::paccDynamic )(tmp6,tmp7,tmp8,false,tmp9,null());
		}
		else{
			HX_STACK_LINE(254)
			Dynamic tmp6 = Graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(254)
			bool tmp7 = Multiple;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(254)
			particle->__Field(HX_HCSTRING("loadGraphic","\x22","\x19","\xa5","\x44"), hx::paccDynamic )(tmp6,tmp7,null(),null(),null(),null());
		}
		HX_STACK_LINE(256)
		bool tmp6 = Multiple;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(256)
		if ((tmp6)){
			HX_STACK_LINE(257)
			int tmp7 = frame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(257)
			particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("set_frameIndex","\x62","\x40","\x50","\x37"), hx::paccDynamic )(tmp7);
		}
		HX_STACK_LINE(259)
		Dynamic tmp7 = particle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitter_obj,loadParticle,return )

::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_Color,hx::Null< int >  __o_Quantity){
int Width = __o_Width.Default(2);
int Height = __o_Height.Default(2);
int Color = __o_Color.Default(-1);
int Quantity = __o_Quantity.Default(50);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","makeParticles",0xf3914248,"flixel.effects.particles.FlxTypedEmitter.makeParticles","flixel/effects/particles/FlxEmitter.hx",272,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Quantity,"Quantity")
{
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(273)
			while((true)){
				HX_STACK_LINE(273)
				bool tmp = (_g < Quantity);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(273)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(273)
				if ((tmp1)){
					HX_STACK_LINE(273)
					break;
				}
				HX_STACK_LINE(273)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(273)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				::hx::Class tmp3 = this->particleClass;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(275)
				Dynamic tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(275)
				Dynamic particle = tmp4;		HX_STACK_VAR(particle,"particle");
				HX_STACK_LINE(276)
				int tmp5 = Width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				int tmp6 = Height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				int tmp7 = Color;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(276)
				particle->__Field(HX_HCSTRING("makeGraphic","\x5a","\x82","\x11","\xb8"), hx::paccDynamic )(tmp5,tmp6,tmp7,null(),null());
				HX_STACK_LINE(277)
				Dynamic tmp8 = particle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(277)
				this->add(tmp8);
			}
		}
		HX_STACK_LINE(280)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,makeParticles,return )

Void FlxTypedEmitter_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","update",0x6f244040,"flixel.effects.particles.FlxTypedEmitter.update","flixel/effects/particles/FlxEmitter.hx",287,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(288)
		bool tmp = this->emitting;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		if ((tmp)){
			HX_STACK_LINE(290)
			bool tmp1 = this->_explode;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			if ((tmp1)){
				HX_STACK_LINE(291)
				this->explode();
			}
			else{
				HX_STACK_LINE(293)
				Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(293)
				this->emitContinuously(tmp2);
			}
		}
		else{
			HX_STACK_LINE(295)
			bool tmp1 = this->_waitForKill;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			if ((tmp1)){
				HX_STACK_LINE(297)
				hx::AddEq(this->_timer,elapsed);
				HX_STACK_LINE(299)
				::flixel::util::helpers::FlxBounds tmp2 = this->lifespan;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(299)
				Float tmp3 = tmp2->max;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(299)
				bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(299)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(299)
				if ((tmp4)){
					HX_STACK_LINE(299)
					Float tmp6 = this->_timer;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(299)
					Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(299)
					::flixel::util::helpers::FlxBounds tmp8 = this->lifespan;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(299)
					::flixel::util::helpers::FlxBounds tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(299)
					Float tmp10 = tmp9->max;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(299)
					tmp5 = (tmp7 > tmp10);
				}
				else{
					HX_STACK_LINE(299)
					tmp5 = false;
				}
				HX_STACK_LINE(299)
				if ((tmp5)){
					HX_STACK_LINE(301)
					this->kill();
					HX_STACK_LINE(302)
					return null();
				}
			}
		}
		HX_STACK_LINE(306)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		this->super::update(tmp1);
	}
return null();
}


Void FlxTypedEmitter_obj::explode( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","explode",0x5a27f1ca,"flixel.effects.particles.FlxTypedEmitter.explode","flixel/effects/particles/FlxEmitter.hx",310,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(311)
		int tmp = this->_quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		int amount = tmp;		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(312)
		bool tmp1 = (amount <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(312)
			int tmp4 = amount;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			tmp3 = (tmp4 > tmp6);
		}
		else{
			HX_STACK_LINE(312)
			tmp3 = true;
		}
		HX_STACK_LINE(312)
		if ((tmp3)){
			HX_STACK_LINE(313)
			int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			amount = tmp4;
		}
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				bool tmp4 = (_g < amount);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(315)
				if ((tmp5)){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(315)
				int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(315)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(316)
				this->emitParticle();
			}
		}
		HX_STACK_LINE(318)
		this->onFinished();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,explode,(void))

Void FlxTypedEmitter_obj::emitContinuously( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitContinuously",0xda87e546,"flixel.effects.particles.FlxTypedEmitter.emitContinuously","flixel/effects/particles/FlxEmitter.hx",322,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(324)
		Float tmp = this->frequency;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		if ((tmp1)){
			HX_STACK_LINE(326)
			this->emitParticleContinuously();
		}
		else{
			HX_STACK_LINE(330)
			hx::AddEq(this->_timer,elapsed);
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(332)
				Float tmp2 = this->_timer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(332)
				Float tmp3 = this->frequency;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(332)
				bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(332)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(332)
				if ((tmp5)){
					HX_STACK_LINE(332)
					break;
				}
				HX_STACK_LINE(334)
				Float tmp6 = this->frequency;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(334)
				hx::SubEq(this->_timer,tmp6);
				HX_STACK_LINE(335)
				this->emitParticleContinuously();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,emitContinuously,(void))

Void FlxTypedEmitter_obj::emitParticleContinuously( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticleContinuously",0xf1d3baac,"flixel.effects.particles.FlxTypedEmitter.emitParticleContinuously","flixel/effects/particles/FlxEmitter.hx",341,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		this->emitParticle();
		HX_STACK_LINE(343)
		(this->_counter)++;
		HX_STACK_LINE(345)
		int tmp = this->_quantity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(345)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		if ((tmp1)){
			HX_STACK_LINE(345)
			int tmp3 = this->_counter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			int tmp5 = this->_quantity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(345)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(345)
			tmp2 = (tmp4 >= tmp6);
		}
		else{
			HX_STACK_LINE(345)
			tmp2 = false;
		}
		HX_STACK_LINE(345)
		if ((tmp2)){
			HX_STACK_LINE(346)
			this->onFinished();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticleContinuously,(void))

Void FlxTypedEmitter_obj::onFinished( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","onFinished",0xf4d30968,"flixel.effects.particles.FlxTypedEmitter.onFinished","flixel/effects/particles/FlxEmitter.hx",350,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(351)
		this->emitting = false;
		HX_STACK_LINE(352)
		this->_waitForKill = true;
		HX_STACK_LINE(353)
		this->_quantity = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,onFinished,(void))

Void FlxTypedEmitter_obj::kill( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","kill",0x1736ce15,"flixel.effects.particles.FlxTypedEmitter.kill","flixel/effects/particles/FlxEmitter.hx",360,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(361)
		this->emitting = false;
		HX_STACK_LINE(362)
		this->_waitForKill = false;
		HX_STACK_LINE(364)
		this->super::kill();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity){
bool Explode = __o_Explode.Default(true);
Float Frequency = __o_Frequency.Default(((Float)0.1));
int Quantity = __o_Quantity.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","start",0xdb2f2e0b,"flixel.effects.particles.FlxTypedEmitter.start","flixel/effects/particles/FlxEmitter.hx",376,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
{
		HX_STACK_LINE(377)
		this->set_exists(true);
		HX_STACK_LINE(378)
		this->set_visible(true);
		HX_STACK_LINE(379)
		this->emitting = true;
		HX_STACK_LINE(381)
		this->_explode = Explode;
		HX_STACK_LINE(382)
		this->frequency = Frequency;
		HX_STACK_LINE(383)
		hx::AddEq(this->_quantity,Quantity);
		HX_STACK_LINE(385)
		this->_counter = (int)0;
		HX_STACK_LINE(386)
		this->_timer = (int)0;
		HX_STACK_LINE(388)
		this->_waitForKill = false;
		HX_STACK_LINE(390)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedEmitter_obj,start,return )

Void FlxTypedEmitter_obj::emitParticle( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticle",0xe36e6130,"flixel.effects.particles.FlxTypedEmitter.emitParticle","flixel/effects/particles/FlxEmitter.hx",397,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		::hx::Class tmp = this->particleClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		::hx::Class tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		Dynamic tmp2 = this->recycle(tmp1,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		Dynamic particle = tmp2;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(400)
		particle->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )((int)0,(int)0);
		HX_STACK_LINE(402)
		::openfl::_legacy::display::BlendMode tmp3 = this->blend;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		particle->__Field(HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(403)
		bool tmp4 = this->immovable;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		particle->__Field(HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(404)
		int tmp5 = this->allowCollisions;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		int tmp6 = (int(tmp5) & int((int)4369));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		particle->__Field(HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"), hx::paccDynamic )(tmp7);
		HX_STACK_LINE(405)
		int tmp8 = this->allowCollisions;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(405)
		particle->__Field(HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"), hx::paccDynamic )(tmp8);
		HX_STACK_LINE(406)
		bool tmp9 = this->autoUpdateHitbox;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(406)
		particle->__FieldRef(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24")) = tmp9;
		HX_STACK_LINE(410)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(410)
		{
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint tmp11 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint _this = tmp11;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint tmp12 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(410)
			::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(410)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(410)
			{
				HX_STACK_LINE(410)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(410)
				Float tmp14 = (_this->x - point->x);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(410)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(410)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(410)
				Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(410)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(410)
				Float tmp19 = aDiff;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(410)
				tmp13 = (tmp18 <= tmp19);
			}
			HX_STACK_LINE(410)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(410)
			if ((tmp13)){
				HX_STACK_LINE(410)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(410)
				Float tmp15 = (_this->y - point->y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(410)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(410)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(410)
				Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(410)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(410)
				Float tmp20 = aDiff;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(410)
				tmp14 = (tmp19 <= tmp20);
			}
			else{
				HX_STACK_LINE(410)
				tmp14 = false;
			}
			HX_STACK_LINE(410)
			bool result = tmp14;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(410)
			{
				HX_STACK_LINE(410)
				bool tmp15 = point->_weak;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(410)
				if ((tmp15)){
					HX_STACK_LINE(410)
					point->put();
				}
			}
			HX_STACK_LINE(410)
			tmp10 = result;
		}
		HX_STACK_LINE(410)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(410)
		particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp11;
		HX_STACK_LINE(412)
		::flixel::effects::particles::FlxEmitterMode tmp12 = this->launchMode;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(412)
		bool tmp13 = (tmp12 == ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(412)
		if ((tmp13)){
			HX_STACK_LINE(414)
			::flixel::math::FlxRandom tmp14 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(414)
			::flixel::util::helpers::FlxBounds tmp15 = this->launchAngle;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(414)
			Float tmp16 = tmp15->min;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(414)
			::flixel::util::helpers::FlxBounds tmp17 = this->launchAngle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(414)
			Float tmp18 = tmp17->max;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(414)
			Float tmp19 = tmp14->_float(tmp16,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(414)
			Float particleAngle = tmp19;		HX_STACK_VAR(particleAngle,"particleAngle");
			HX_STACK_LINE(416)
			::flixel::math::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(416)
				::flixel::util::helpers::FlxRangeBounds tmp22 = this->speed;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(416)
				Float tmp23 = tmp22->start->min;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(416)
				::flixel::util::helpers::FlxRangeBounds tmp24 = this->speed;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(416)
				Float tmp25 = tmp24->start->max;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(416)
				Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(416)
				Float Speed = tmp26;		HX_STACK_VAR(Speed,"Speed");
				HX_STACK_LINE(416)
				Float tmp27 = particleAngle;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(416)
				Float tmp28 = ::Math_obj::PI;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(416)
				Float tmp29 = (Float(tmp28) / Float((int)180));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(416)
				Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(416)
				Float a = tmp30;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(416)
				{
					HX_STACK_LINE(416)
					Float tmp31 = a;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(416)
					Float tmp32 = ::Math_obj::cos(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(416)
					Float tmp33 = Speed;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(416)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(416)
					Float X = tmp34;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(416)
					Float tmp35 = a;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(416)
					Float tmp36 = ::Math_obj::sin(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(416)
					Float tmp37 = Speed;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(416)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(416)
					Float Y = tmp38;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(416)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp39 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(416)
					::flixel::math::FlxPoint tmp40 = tmp39->get();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(416)
					Float tmp41 = X;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(416)
					Float tmp42 = Y;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(416)
					::flixel::math::FlxPoint tmp43 = tmp40->set(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(416)
					::flixel::math::FlxPoint point = tmp43;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(416)
					point->_inPool = false;
					HX_STACK_LINE(416)
					tmp20 = point;
				}
			}
			HX_STACK_LINE(416)
			this->_point = tmp20;
			HX_STACK_LINE(417)
			::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(417)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(417)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp22);
			HX_STACK_LINE(418)
			::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(418)
			Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(418)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp24);
			HX_STACK_LINE(419)
			::flixel::math::FlxPoint tmp25 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(419)
			::flixel::math::FlxPoint tmp26 = this->_point;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(419)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(419)
			::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(419)
			Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(419)
			tmp25->set(tmp27,tmp29);
			HX_STACK_LINE(421)
			::flixel::math::FlxPoint tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				::flixel::math::FlxRandom tmp31 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(421)
				::flixel::util::helpers::FlxRangeBounds tmp32 = this->speed;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(421)
				Float tmp33 = tmp32->end->min;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(421)
				::flixel::util::helpers::FlxRangeBounds tmp34 = this->speed;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(421)
				Float tmp35 = tmp34->end->max;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(421)
				Float tmp36 = tmp31->_float(tmp33,tmp35,null());		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(421)
				Float Speed = tmp36;		HX_STACK_VAR(Speed,"Speed");
				HX_STACK_LINE(421)
				Float tmp37 = particleAngle;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(421)
				Float tmp38 = ::Math_obj::PI;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(421)
				Float tmp39 = (Float(tmp38) / Float((int)180));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(421)
				Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(421)
				Float a = tmp40;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(421)
					Float tmp41 = a;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(421)
					Float tmp42 = ::Math_obj::cos(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(421)
					Float tmp43 = Speed;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(421)
					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(421)
					Float X = tmp44;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(421)
					Float tmp45 = a;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(421)
					Float tmp46 = ::Math_obj::sin(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(421)
					Float tmp47 = Speed;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(421)
					Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(421)
					Float Y = tmp48;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(421)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp49 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(421)
					::flixel::math::FlxPoint tmp50 = tmp49->get();		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(421)
					Float tmp51 = X;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(421)
					Float tmp52 = Y;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(421)
					::flixel::math::FlxPoint tmp53 = tmp50->set(tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(421)
					::flixel::math::FlxPoint point = tmp53;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(421)
					point->_inPool = false;
					HX_STACK_LINE(421)
					tmp30 = point;
				}
			}
			HX_STACK_LINE(421)
			this->_point = tmp30;
			HX_STACK_LINE(422)
			::flixel::math::FlxPoint tmp31 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(422)
			::flixel::math::FlxPoint tmp32 = this->_point;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(422)
			Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(422)
			::flixel::math::FlxPoint tmp34 = this->_point;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(422)
			Float tmp35 = tmp34->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(422)
			tmp31->set(tmp33,tmp35);
		}
		else{
			HX_STACK_LINE(426)
			::flixel::math::FlxPoint tmp14 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(426)
			::flixel::math::FlxRandom tmp15 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(426)
			::flixel::util::helpers::FlxPointRangeBounds tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(426)
			::flixel::math::FlxPoint tmp17 = tmp16->start->min;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(426)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(426)
			::flixel::util::helpers::FlxPointRangeBounds tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(426)
			::flixel::math::FlxPoint tmp20 = tmp19->start->max;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(426)
			Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(426)
			Float tmp22 = tmp15->_float(tmp18,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(426)
			tmp14->set_x(tmp22);
			HX_STACK_LINE(427)
			::flixel::math::FlxPoint tmp23 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(427)
			::flixel::math::FlxRandom tmp24 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(427)
			::flixel::util::helpers::FlxPointRangeBounds tmp25 = this->velocity;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(427)
			::flixel::math::FlxPoint tmp26 = tmp25->start->min;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(427)
			Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(427)
			::flixel::util::helpers::FlxPointRangeBounds tmp28 = this->velocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(427)
			::flixel::math::FlxPoint tmp29 = tmp28->start->max;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(427)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(427)
			Float tmp31 = tmp24->_float(tmp27,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(427)
			tmp23->set_y(tmp31);
			HX_STACK_LINE(428)
			::flixel::math::FlxPoint tmp32 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(428)
			::flixel::math::FlxRandom tmp33 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(428)
			::flixel::util::helpers::FlxPointRangeBounds tmp34 = this->velocity;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(428)
			::flixel::math::FlxPoint tmp35 = tmp34->end->min;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(428)
			Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(428)
			::flixel::util::helpers::FlxPointRangeBounds tmp37 = this->velocity;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(428)
			::flixel::math::FlxPoint tmp38 = tmp37->end->max;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(428)
			Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(428)
			Float tmp40 = tmp33->_float(tmp36,tmp39,null());		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(428)
			tmp32->set_x(tmp40);
			HX_STACK_LINE(429)
			::flixel::math::FlxPoint tmp41 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(429)
			::flixel::math::FlxRandom tmp42 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(429)
			::flixel::util::helpers::FlxPointRangeBounds tmp43 = this->velocity;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(429)
			::flixel::math::FlxPoint tmp44 = tmp43->end->min;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(429)
			Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(429)
			::flixel::util::helpers::FlxPointRangeBounds tmp46 = this->velocity;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(429)
			::flixel::math::FlxPoint tmp47 = tmp46->end->max;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(429)
			Float tmp48 = tmp47->y;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(429)
			Float tmp49 = tmp42->_float(tmp45,tmp48,null());		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(429)
			tmp41->set_y(tmp49);
			HX_STACK_LINE(430)
			::flixel::math::FlxPoint tmp50 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(430)
			Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(430)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp51);
			HX_STACK_LINE(431)
			::flixel::math::FlxPoint tmp52 = particle->__Field(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(431)
			Float tmp53 = tmp52->y;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(431)
			particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp53);
		}
		HX_STACK_LINE(436)
		::flixel::util::helpers::FlxRangeBounds tmp14 = this->angularVelocity;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(436)
		::flixel::util::helpers::FlxBounds tmp15 = tmp14->start;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(436)
		::flixel::util::helpers::FlxRangeBounds tmp16 = this->angularVelocity;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(436)
		::flixel::util::helpers::FlxBounds tmp17 = tmp16->end;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(436)
		bool tmp18 = (tmp15 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(436)
		particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp18;
		HX_STACK_LINE(438)
		bool tmp19 = this->ignoreAngularVelocity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(438)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(438)
		if ((tmp20)){
			HX_STACK_LINE(440)
			::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(440)
			::flixel::util::helpers::FlxRangeBounds tmp22 = this->angularAcceleration;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(440)
			Float tmp23 = tmp22->start->min;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(440)
			::flixel::util::helpers::FlxRangeBounds tmp24 = this->angularAcceleration;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(440)
			Float tmp25 = tmp24->start->max;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(440)
			Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(440)
			particle->__FieldRef(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")) = tmp26;
			HX_STACK_LINE(442)
			::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(442)
			::flixel::util::helpers::FlxRangeBounds tmp28 = this->angularVelocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(442)
			Float tmp29 = tmp28->start->min;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(442)
			::flixel::util::helpers::FlxRangeBounds tmp30 = this->angularVelocity;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(442)
			Float tmp31 = tmp30->start->max;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(442)
			Float tmp32 = tmp27->_float(tmp29,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(442)
			particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp32;
			HX_STACK_LINE(443)
			::flixel::math::FlxRandom tmp33 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(443)
			::flixel::util::helpers::FlxRangeBounds tmp34 = this->angularVelocity;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(443)
			Float tmp35 = tmp34->end->min;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(443)
			::flixel::util::helpers::FlxRangeBounds tmp36 = this->angularVelocity;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(443)
			Float tmp37 = tmp36->end->max;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(443)
			Float tmp38 = tmp33->_float(tmp35,tmp37,null());		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(443)
			particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp38;
			HX_STACK_LINE(444)
			Float tmp39 = particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(444)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp39;
			HX_STACK_LINE(446)
			::flixel::math::FlxRandom tmp40 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(446)
			::flixel::util::helpers::FlxRangeBounds tmp41 = this->angularDrag;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(446)
			Float tmp42 = tmp41->start->min;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(446)
			::flixel::util::helpers::FlxRangeBounds tmp43 = this->angularDrag;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(446)
			Float tmp44 = tmp43->start->max;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(446)
			Float tmp45 = tmp40->_float(tmp42,tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(446)
			particle->__FieldRef(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")) = tmp45;
		}
		else{
			HX_STACK_LINE(450)
			::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(450)
			::flixel::util::helpers::FlxRangeBounds tmp22 = this->angle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(450)
			Float tmp23 = tmp22->end->min;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(450)
			::flixel::util::helpers::FlxRangeBounds tmp24 = this->angle;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(450)
			Float tmp25 = tmp24->end->max;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(450)
			Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(450)
			::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(450)
			::flixel::util::helpers::FlxRangeBounds tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(450)
			Float tmp29 = tmp28->start->min;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(450)
			::flixel::util::helpers::FlxRangeBounds tmp30 = this->angle;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(450)
			Float tmp31 = tmp30->start->max;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(450)
			Float tmp32 = tmp27->_float(tmp29,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(450)
			Float tmp33 = (tmp26 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(450)
			::flixel::math::FlxRandom tmp34 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(450)
			::flixel::util::helpers::FlxBounds tmp35 = this->lifespan;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(450)
			Float tmp36 = tmp35->min;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(450)
			::flixel::util::helpers::FlxBounds tmp37 = this->lifespan;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(450)
			Float tmp38 = tmp37->max;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(450)
			Float tmp39 = tmp34->_float(tmp36,tmp38,null());		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(450)
			Float tmp40 = (Float(tmp33) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(450)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp40;
			HX_STACK_LINE(451)
			particle->__Field(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = false;
		}
		HX_STACK_LINE(456)
		::flixel::math::FlxRandom tmp21 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(456)
		::flixel::util::helpers::FlxRangeBounds tmp22 = this->angle;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(456)
		Float tmp23 = tmp22->start->min;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(456)
		::flixel::util::helpers::FlxRangeBounds tmp24 = this->angle;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(456)
		Float tmp25 = tmp24->start->max;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(456)
		Float tmp26 = tmp21->_float(tmp23,tmp25,null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(456)
		particle->__Field(HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"), hx::paccDynamic )(tmp26);
		HX_STACK_LINE(460)
		::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(460)
		::flixel::util::helpers::FlxBounds tmp28 = this->lifespan;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(460)
		Float tmp29 = tmp28->min;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(460)
		::flixel::util::helpers::FlxBounds tmp30 = this->lifespan;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(460)
		Float tmp31 = tmp30->max;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(460)
		Float tmp32 = tmp27->_float(tmp29,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(460)
		particle->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp32;
		HX_STACK_LINE(464)
		::flixel::math::FlxPoint tmp33 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(464)
		::flixel::math::FlxRandom tmp34 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(464)
		::flixel::util::helpers::FlxPointRangeBounds tmp35 = this->scale;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(464)
		::flixel::math::FlxPoint tmp36 = tmp35->start->min;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(464)
		Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(464)
		::flixel::util::helpers::FlxPointRangeBounds tmp38 = this->scale;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(464)
		::flixel::math::FlxPoint tmp39 = tmp38->start->max;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(464)
		Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(464)
		Float tmp41 = tmp34->_float(tmp37,tmp40,null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(464)
		tmp33->set_x(tmp41);
		HX_STACK_LINE(465)
		::flixel::math::FlxPoint tmp42 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(465)
		bool tmp43 = this->keepScaleRatio;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(465)
		Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(465)
		if ((tmp43)){
			HX_STACK_LINE(465)
			::flixel::math::FlxPoint tmp45 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(465)
			tmp44 = tmp45->x;
		}
		else{
			HX_STACK_LINE(465)
			::flixel::math::FlxRandom tmp45 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(465)
			::flixel::util::helpers::FlxPointRangeBounds tmp46 = this->scale;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(465)
			::flixel::math::FlxPoint tmp47 = tmp46->start->min;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(465)
			Float tmp48 = tmp47->y;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(465)
			::flixel::util::helpers::FlxPointRangeBounds tmp49 = this->scale;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(465)
			::flixel::math::FlxPoint tmp50 = tmp49->start->max;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(465)
			Float tmp51 = tmp50->y;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(465)
			tmp44 = tmp45->_float(tmp48,tmp51,null());
		}
		HX_STACK_LINE(465)
		tmp42->set_y(tmp44);
		HX_STACK_LINE(466)
		::flixel::math::FlxPoint tmp45 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(466)
		::flixel::math::FlxRandom tmp46 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(466)
		::flixel::util::helpers::FlxPointRangeBounds tmp47 = this->scale;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(466)
		::flixel::math::FlxPoint tmp48 = tmp47->end->min;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(466)
		Float tmp49 = tmp48->x;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(466)
		::flixel::util::helpers::FlxPointRangeBounds tmp50 = this->scale;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(466)
		::flixel::math::FlxPoint tmp51 = tmp50->end->max;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(466)
		Float tmp52 = tmp51->x;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(466)
		Float tmp53 = tmp46->_float(tmp49,tmp52,null());		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(466)
		tmp45->set_x(tmp53);
		HX_STACK_LINE(467)
		::flixel::math::FlxPoint tmp54 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(467)
		bool tmp55 = this->keepScaleRatio;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(467)
		Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(467)
		if ((tmp55)){
			HX_STACK_LINE(467)
			::flixel::math::FlxPoint tmp57 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(467)
			tmp56 = tmp57->x;
		}
		else{
			HX_STACK_LINE(467)
			::flixel::math::FlxRandom tmp57 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(467)
			::flixel::util::helpers::FlxPointRangeBounds tmp58 = this->scale;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(467)
			::flixel::math::FlxPoint tmp59 = tmp58->end->min;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(467)
			Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(467)
			::flixel::util::helpers::FlxPointRangeBounds tmp61 = this->scale;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(467)
			::flixel::math::FlxPoint tmp62 = tmp61->end->max;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(467)
			Float tmp63 = tmp62->y;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(467)
			tmp56 = tmp57->_float(tmp60,tmp63,null());
		}
		HX_STACK_LINE(467)
		tmp54->set_y(tmp56);
		HX_STACK_LINE(468)
		bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			::flixel::math::FlxPoint tmp58 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(468)
			::flixel::math::FlxPoint _this = tmp58;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(468)
			::flixel::math::FlxPoint tmp59 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(468)
			::flixel::math::FlxPoint point = tmp59;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(468)
			bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(468)
				Float tmp61 = (_this->x - point->x);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(468)
				Float tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(468)
				Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(468)
				Float tmp64 = ::Math_obj::abs(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(468)
				Float tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(468)
				Float tmp66 = aDiff;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(468)
				tmp60 = (tmp65 <= tmp66);
			}
			HX_STACK_LINE(468)
			bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(468)
			if ((tmp60)){
				HX_STACK_LINE(468)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(468)
				Float tmp62 = (_this->y - point->y);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(468)
				Float tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(468)
				Float tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(468)
				Float tmp65 = ::Math_obj::abs(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(468)
				Float tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(468)
				Float tmp67 = aDiff;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(468)
				tmp61 = (tmp66 <= tmp67);
			}
			else{
				HX_STACK_LINE(468)
				tmp61 = false;
			}
			HX_STACK_LINE(468)
			bool result = tmp61;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				bool tmp62 = point->_weak;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(468)
				if ((tmp62)){
					HX_STACK_LINE(468)
					point->put();
				}
			}
			HX_STACK_LINE(468)
			tmp57 = result;
		}
		HX_STACK_LINE(468)
		bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(468)
		particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp58;
		HX_STACK_LINE(469)
		::flixel::math::FlxPoint tmp59 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(469)
		Float tmp60 = tmp59->x;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(469)
		particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp60);
		HX_STACK_LINE(470)
		::flixel::math::FlxPoint tmp61 = particle->__Field(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(470)
		Float tmp62 = tmp61->y;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(470)
		particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp62);
		HX_STACK_LINE(471)
		bool tmp63 = particle->__Field(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"), hx::paccDynamic );		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(471)
		if ((tmp63)){
			HX_STACK_LINE(471)
			particle->__Field(HX_HCSTRING("updateHitbox","\x81","\x94","\xeb","\x56"), hx::paccDynamic )();
		}
		HX_STACK_LINE(475)
		::flixel::math::FlxRandom tmp64 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(475)
		::flixel::util::helpers::FlxRangeBounds tmp65 = this->alpha;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(475)
		Float tmp66 = tmp65->start->min;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(475)
		::flixel::util::helpers::FlxRangeBounds tmp67 = this->alpha;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(475)
		Float tmp68 = tmp67->start->max;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(475)
		Float tmp69 = tmp64->_float(tmp66,tmp68,null());		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(475)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp69;
		HX_STACK_LINE(476)
		::flixel::math::FlxRandom tmp70 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(476)
		::flixel::util::helpers::FlxRangeBounds tmp71 = this->alpha;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(476)
		Float tmp72 = tmp71->end->min;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(476)
		::flixel::util::helpers::FlxRangeBounds tmp73 = this->alpha;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(476)
		Float tmp74 = tmp73->end->max;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(476)
		Float tmp75 = tmp70->_float(tmp72,tmp74,null());		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(476)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp75;
		HX_STACK_LINE(477)
		Float tmp76 = particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(477)
		Float tmp77 = particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(477)
		bool tmp78 = (tmp76 != tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(477)
		particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp78;
		HX_STACK_LINE(478)
		Float tmp79 = particle->__Field(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(478)
		particle->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp79);
		HX_STACK_LINE(482)
		::flixel::math::FlxRandom tmp80 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(482)
		::flixel::util::helpers::FlxRangeBounds tmp81 = this->color;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(482)
		int tmp82 = tmp81->start->min;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(482)
		::flixel::util::helpers::FlxRangeBounds tmp83 = this->color;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(482)
		int tmp84 = tmp83->start->max;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(482)
		int tmp85 = tmp80->color(tmp82,tmp84,null(),null());		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(482)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp85;
		HX_STACK_LINE(483)
		::flixel::math::FlxRandom tmp86 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(483)
		::flixel::util::helpers::FlxRangeBounds tmp87 = this->color;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(483)
		int tmp88 = tmp87->end->min;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(483)
		::flixel::util::helpers::FlxRangeBounds tmp89 = this->color;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(483)
		int tmp90 = tmp89->end->max;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(483)
		int tmp91 = tmp86->color(tmp88,tmp90,null(),null());		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(483)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp91;
		HX_STACK_LINE(484)
		int tmp92 = particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(484)
		int tmp93 = particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(484)
		bool tmp94 = (tmp92 != tmp93);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(484)
		particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp94;
		HX_STACK_LINE(485)
		int tmp95 = particle->__Field(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(485)
		particle->__Field(HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"), hx::paccDynamic )(tmp95);
		HX_STACK_LINE(489)
		::flixel::math::FlxPoint tmp96 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(489)
		::flixel::math::FlxRandom tmp97 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(489)
		::flixel::util::helpers::FlxPointRangeBounds tmp98 = this->drag;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(489)
		::flixel::math::FlxPoint tmp99 = tmp98->start->min;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(489)
		Float tmp100 = tmp99->x;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(489)
		::flixel::util::helpers::FlxPointRangeBounds tmp101 = this->drag;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(489)
		::flixel::math::FlxPoint tmp102 = tmp101->start->max;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(489)
		Float tmp103 = tmp102->x;		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(489)
		Float tmp104 = tmp97->_float(tmp100,tmp103,null());		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(489)
		tmp96->set_x(tmp104);
		HX_STACK_LINE(490)
		::flixel::math::FlxPoint tmp105 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(490)
		::flixel::math::FlxRandom tmp106 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(490)
		::flixel::util::helpers::FlxPointRangeBounds tmp107 = this->drag;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(490)
		::flixel::math::FlxPoint tmp108 = tmp107->start->min;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(490)
		Float tmp109 = tmp108->y;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(490)
		::flixel::util::helpers::FlxPointRangeBounds tmp110 = this->drag;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(490)
		::flixel::math::FlxPoint tmp111 = tmp110->start->max;		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(490)
		Float tmp112 = tmp111->y;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(490)
		Float tmp113 = tmp106->_float(tmp109,tmp112,null());		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(490)
		tmp105->set_y(tmp113);
		HX_STACK_LINE(491)
		::flixel::math::FlxPoint tmp114 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(491)
		::flixel::math::FlxRandom tmp115 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(491)
		::flixel::util::helpers::FlxPointRangeBounds tmp116 = this->drag;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(491)
		::flixel::math::FlxPoint tmp117 = tmp116->end->min;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(491)
		Float tmp118 = tmp117->x;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(491)
		::flixel::util::helpers::FlxPointRangeBounds tmp119 = this->drag;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(491)
		::flixel::math::FlxPoint tmp120 = tmp119->end->max;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(491)
		Float tmp121 = tmp120->x;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(491)
		Float tmp122 = tmp115->_float(tmp118,tmp121,null());		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(491)
		tmp114->set_x(tmp122);
		HX_STACK_LINE(492)
		::flixel::math::FlxPoint tmp123 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(492)
		::flixel::math::FlxRandom tmp124 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(492)
		::flixel::util::helpers::FlxPointRangeBounds tmp125 = this->drag;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(492)
		::flixel::math::FlxPoint tmp126 = tmp125->end->min;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(492)
		Float tmp127 = tmp126->y;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(492)
		::flixel::util::helpers::FlxPointRangeBounds tmp128 = this->drag;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(492)
		::flixel::math::FlxPoint tmp129 = tmp128->end->max;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(492)
		Float tmp130 = tmp129->y;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(492)
		Float tmp131 = tmp124->_float(tmp127,tmp130,null());		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(492)
		tmp123->set_y(tmp131);
		HX_STACK_LINE(493)
		bool tmp132;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(493)
		{
			HX_STACK_LINE(493)
			::flixel::math::FlxPoint tmp133 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(493)
			::flixel::math::FlxPoint _this = tmp133;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(493)
			::flixel::math::FlxPoint tmp134 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(493)
			::flixel::math::FlxPoint point = tmp134;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(493)
			bool tmp135;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(493)
				Float tmp136 = (_this->x - point->x);		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(493)
				Float tmp137 = tmp136;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(493)
				Float tmp138 = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(493)
				Float tmp139 = ::Math_obj::abs(tmp138);		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(493)
				Float tmp140 = tmp139;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(493)
				Float tmp141 = aDiff;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(493)
				tmp135 = (tmp140 <= tmp141);
			}
			HX_STACK_LINE(493)
			bool tmp136;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(493)
			if ((tmp135)){
				HX_STACK_LINE(493)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(493)
				Float tmp137 = (_this->y - point->y);		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(493)
				Float tmp138 = tmp137;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(493)
				Float tmp139 = tmp138;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(493)
				Float tmp140 = ::Math_obj::abs(tmp139);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(493)
				Float tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(493)
				Float tmp142 = aDiff;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(493)
				tmp136 = (tmp141 <= tmp142);
			}
			else{
				HX_STACK_LINE(493)
				tmp136 = false;
			}
			HX_STACK_LINE(493)
			bool result = tmp136;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(493)
			{
				HX_STACK_LINE(493)
				bool tmp137 = point->_weak;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(493)
				if ((tmp137)){
					HX_STACK_LINE(493)
					point->put();
				}
			}
			HX_STACK_LINE(493)
			tmp132 = result;
		}
		HX_STACK_LINE(493)
		bool tmp133 = !(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(493)
		particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp133;
		HX_STACK_LINE(494)
		::flixel::math::FlxPoint tmp134 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(494)
		Float tmp135 = tmp134->x;		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(494)
		particle->__Field(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp135);
		HX_STACK_LINE(495)
		::flixel::math::FlxPoint tmp136 = particle->__Field(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(495)
		Float tmp137 = tmp136->y;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(495)
		particle->__Field(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp137);
		HX_STACK_LINE(499)
		::flixel::math::FlxPoint tmp138 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(499)
		::flixel::math::FlxRandom tmp139 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(499)
		::flixel::util::helpers::FlxPointRangeBounds tmp140 = this->acceleration;		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(499)
		::flixel::math::FlxPoint tmp141 = tmp140->start->min;		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(499)
		Float tmp142 = tmp141->x;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(499)
		::flixel::util::helpers::FlxPointRangeBounds tmp143 = this->acceleration;		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(499)
		::flixel::math::FlxPoint tmp144 = tmp143->start->max;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(499)
		Float tmp145 = tmp144->x;		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(499)
		Float tmp146 = tmp139->_float(tmp142,tmp145,null());		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(499)
		tmp138->set_x(tmp146);
		HX_STACK_LINE(500)
		::flixel::math::FlxPoint tmp147 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(500)
		::flixel::math::FlxRandom tmp148 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(500)
		::flixel::util::helpers::FlxPointRangeBounds tmp149 = this->acceleration;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(500)
		::flixel::math::FlxPoint tmp150 = tmp149->start->min;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(500)
		Float tmp151 = tmp150->y;		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(500)
		::flixel::util::helpers::FlxPointRangeBounds tmp152 = this->acceleration;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(500)
		::flixel::math::FlxPoint tmp153 = tmp152->start->max;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(500)
		Float tmp154 = tmp153->y;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(500)
		Float tmp155 = tmp148->_float(tmp151,tmp154,null());		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(500)
		tmp147->set_y(tmp155);
		HX_STACK_LINE(501)
		::flixel::math::FlxPoint tmp156 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(501)
		::flixel::math::FlxRandom tmp157 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(501)
		::flixel::util::helpers::FlxPointRangeBounds tmp158 = this->acceleration;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(501)
		::flixel::math::FlxPoint tmp159 = tmp158->end->min;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(501)
		Float tmp160 = tmp159->x;		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(501)
		::flixel::util::helpers::FlxPointRangeBounds tmp161 = this->acceleration;		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(501)
		::flixel::math::FlxPoint tmp162 = tmp161->end->max;		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(501)
		Float tmp163 = tmp162->x;		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(501)
		Float tmp164 = tmp157->_float(tmp160,tmp163,null());		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(501)
		tmp156->set_x(tmp164);
		HX_STACK_LINE(502)
		::flixel::math::FlxPoint tmp165 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(502)
		::flixel::math::FlxRandom tmp166 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(502)
		::flixel::util::helpers::FlxPointRangeBounds tmp167 = this->acceleration;		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(502)
		::flixel::math::FlxPoint tmp168 = tmp167->end->min;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(502)
		Float tmp169 = tmp168->y;		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(502)
		::flixel::util::helpers::FlxPointRangeBounds tmp170 = this->acceleration;		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(502)
		::flixel::math::FlxPoint tmp171 = tmp170->end->max;		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(502)
		Float tmp172 = tmp171->y;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(502)
		Float tmp173 = tmp166->_float(tmp169,tmp172,null());		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(502)
		tmp165->set_y(tmp173);
		HX_STACK_LINE(503)
		bool tmp174;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			::flixel::math::FlxPoint tmp175 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp175,"tmp175");
			HX_STACK_LINE(503)
			::flixel::math::FlxPoint _this = tmp175;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(503)
			::flixel::math::FlxPoint tmp176 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(503)
			::flixel::math::FlxPoint point = tmp176;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(503)
			bool tmp177;		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(503)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(503)
				Float tmp178 = (_this->x - point->x);		HX_STACK_VAR(tmp178,"tmp178");
				HX_STACK_LINE(503)
				Float tmp179 = tmp178;		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(503)
				Float tmp180 = tmp179;		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(503)
				Float tmp181 = ::Math_obj::abs(tmp180);		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(503)
				Float tmp182 = tmp181;		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(503)
				Float tmp183 = aDiff;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(503)
				tmp177 = (tmp182 <= tmp183);
			}
			HX_STACK_LINE(503)
			bool tmp178;		HX_STACK_VAR(tmp178,"tmp178");
			HX_STACK_LINE(503)
			if ((tmp177)){
				HX_STACK_LINE(503)
				Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
				HX_STACK_LINE(503)
				Float tmp179 = (_this->y - point->y);		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(503)
				Float tmp180 = tmp179;		HX_STACK_VAR(tmp180,"tmp180");
				HX_STACK_LINE(503)
				Float tmp181 = tmp180;		HX_STACK_VAR(tmp181,"tmp181");
				HX_STACK_LINE(503)
				Float tmp182 = ::Math_obj::abs(tmp181);		HX_STACK_VAR(tmp182,"tmp182");
				HX_STACK_LINE(503)
				Float tmp183 = tmp182;		HX_STACK_VAR(tmp183,"tmp183");
				HX_STACK_LINE(503)
				Float tmp184 = aDiff;		HX_STACK_VAR(tmp184,"tmp184");
				HX_STACK_LINE(503)
				tmp178 = (tmp183 <= tmp184);
			}
			else{
				HX_STACK_LINE(503)
				tmp178 = false;
			}
			HX_STACK_LINE(503)
			bool result = tmp178;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(503)
				bool tmp179 = point->_weak;		HX_STACK_VAR(tmp179,"tmp179");
				HX_STACK_LINE(503)
				if ((tmp179)){
					HX_STACK_LINE(503)
					point->put();
				}
			}
			HX_STACK_LINE(503)
			tmp174 = result;
		}
		HX_STACK_LINE(503)
		bool tmp175 = !(tmp174);		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(503)
		particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp175;
		HX_STACK_LINE(504)
		::flixel::math::FlxPoint tmp176 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(504)
		Float tmp177 = tmp176->x;		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(504)
		particle->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp177);
		HX_STACK_LINE(505)
		::flixel::math::FlxPoint tmp178 = particle->__Field(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(505)
		Float tmp179 = tmp178->y;		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(505)
		particle->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp179);
		HX_STACK_LINE(509)
		::flixel::math::FlxRandom tmp180 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(509)
		::flixel::util::helpers::FlxRangeBounds tmp181 = this->elasticity;		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(509)
		Float tmp182 = tmp181->start->min;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(509)
		::flixel::util::helpers::FlxRangeBounds tmp183 = this->elasticity;		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(509)
		Float tmp184 = tmp183->start->max;		HX_STACK_VAR(tmp184,"tmp184");
		HX_STACK_LINE(509)
		Float tmp185 = tmp180->_float(tmp182,tmp184,null());		HX_STACK_VAR(tmp185,"tmp185");
		HX_STACK_LINE(509)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp185;
		HX_STACK_LINE(510)
		::flixel::math::FlxRandom tmp186 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp186,"tmp186");
		HX_STACK_LINE(510)
		::flixel::util::helpers::FlxRangeBounds tmp187 = this->elasticity;		HX_STACK_VAR(tmp187,"tmp187");
		HX_STACK_LINE(510)
		Float tmp188 = tmp187->end->min;		HX_STACK_VAR(tmp188,"tmp188");
		HX_STACK_LINE(510)
		::flixel::util::helpers::FlxRangeBounds tmp189 = this->elasticity;		HX_STACK_VAR(tmp189,"tmp189");
		HX_STACK_LINE(510)
		Float tmp190 = tmp189->end->max;		HX_STACK_VAR(tmp190,"tmp190");
		HX_STACK_LINE(510)
		Float tmp191 = tmp186->_float(tmp188,tmp190,null());		HX_STACK_VAR(tmp191,"tmp191");
		HX_STACK_LINE(510)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp191;
		HX_STACK_LINE(511)
		Float tmp192 = particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp192,"tmp192");
		HX_STACK_LINE(511)
		Float tmp193 = particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp193,"tmp193");
		HX_STACK_LINE(511)
		bool tmp194 = (tmp192 != tmp193);		HX_STACK_VAR(tmp194,"tmp194");
		HX_STACK_LINE(511)
		particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("active","\xc6","\x41","\x46","\x16")) = tmp194;
		HX_STACK_LINE(512)
		Float tmp195 = particle->__Field(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"), hx::paccDynamic )->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );		HX_STACK_VAR(tmp195,"tmp195");
		HX_STACK_LINE(512)
		particle->__FieldRef(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")) = tmp195;
		HX_STACK_LINE(515)
		::flixel::math::FlxRandom tmp196 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp196,"tmp196");
		HX_STACK_LINE(515)
		Float tmp197 = this->x;		HX_STACK_VAR(tmp197,"tmp197");
		HX_STACK_LINE(515)
		Float tmp198 = this->x;		HX_STACK_VAR(tmp198,"tmp198");
		HX_STACK_LINE(515)
		Float tmp199 = this->width;		HX_STACK_VAR(tmp199,"tmp199");
		HX_STACK_LINE(515)
		Float tmp200 = (tmp198 + tmp199);		HX_STACK_VAR(tmp200,"tmp200");
		HX_STACK_LINE(515)
		Float tmp201 = tmp196->_float(tmp197,tmp200,null());		HX_STACK_VAR(tmp201,"tmp201");
		HX_STACK_LINE(515)
		Float tmp202 = particle->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp202,"tmp202");
		HX_STACK_LINE(515)
		Float tmp203 = (Float(tmp202) / Float((int)2));		HX_STACK_VAR(tmp203,"tmp203");
		HX_STACK_LINE(515)
		Float tmp204 = (tmp201 - tmp203);		HX_STACK_VAR(tmp204,"tmp204");
		HX_STACK_LINE(515)
		particle->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp204);
		HX_STACK_LINE(516)
		::flixel::math::FlxRandom tmp205 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp205,"tmp205");
		HX_STACK_LINE(516)
		Float tmp206 = this->y;		HX_STACK_VAR(tmp206,"tmp206");
		HX_STACK_LINE(516)
		Float tmp207 = this->y;		HX_STACK_VAR(tmp207,"tmp207");
		HX_STACK_LINE(516)
		Float tmp208 = this->height;		HX_STACK_VAR(tmp208,"tmp208");
		HX_STACK_LINE(516)
		Float tmp209 = (tmp207 + tmp208);		HX_STACK_VAR(tmp209,"tmp209");
		HX_STACK_LINE(516)
		Float tmp210 = tmp205->_float(tmp206,tmp209,null());		HX_STACK_VAR(tmp210,"tmp210");
		HX_STACK_LINE(516)
		Float tmp211 = particle->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp211,"tmp211");
		HX_STACK_LINE(516)
		Float tmp212 = (Float(tmp211) / Float((int)2));		HX_STACK_VAR(tmp212,"tmp212");
		HX_STACK_LINE(516)
		Float tmp213 = (tmp210 - tmp212);		HX_STACK_VAR(tmp213,"tmp213");
		HX_STACK_LINE(516)
		particle->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp213);
		HX_STACK_LINE(519)
		::flixel::animation::FlxAnimation tmp214 = particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp214,"tmp214");
		HX_STACK_LINE(519)
		bool tmp215 = (tmp214 != null());		HX_STACK_VAR(tmp215,"tmp215");
		HX_STACK_LINE(519)
		if ((tmp215)){
			HX_STACK_LINE(521)
			::flixel::animation::FlxAnimation tmp216 = particle->__Field(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"), hx::paccDynamic )->__Field(HX_HCSTRING("_curAnim","\x32","\x51","\x3f","\xe5"), hx::paccDynamic );		HX_STACK_VAR(tmp216,"tmp216");
			HX_STACK_LINE(521)
			tmp216->restart();
		}
		HX_STACK_LINE(524)
		particle->__Field(HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,(void))

Void FlxTypedEmitter_obj::focusOn( ::flixel::FlxObject Object){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","focusOn",0x74478100,"flixel.effects.particles.FlxTypedEmitter.focusOn","flixel/effects/particles/FlxEmitter.hx",533,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_LINE(534)
		::flixel::math::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		Object->getMidpoint(tmp);
		HX_STACK_LINE(536)
		::flixel::math::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		Float tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(536)
		int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(536)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(536)
		this->x = tmp6;
		HX_STACK_LINE(537)
		::flixel::math::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(537)
		Float tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(537)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(537)
		int tmp11 = (int(tmp10) >> int((int)1));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(537)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(537)
		this->y = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,focusOn,(void))

Void FlxTypedEmitter_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setPosition",0x453b48d4,"flixel.effects.particles.FlxTypedEmitter.setPosition","flixel/effects/particles/FlxEmitter.hx",544,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(545)
		this->x = X;
		HX_STACK_LINE(546)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setPosition,(void))

Void FlxTypedEmitter_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setSize",0x449c176c,"flixel.effects.particles.FlxTypedEmitter.setSize","flixel/effects/particles/FlxEmitter.hx",550,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(551)
		this->width = Width;
		HX_STACK_LINE(552)
		this->height = Height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

bool FlxTypedEmitter_obj::get_solid( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_solid",0x591b52ab,"flixel.effects.particles.FlxTypedEmitter.get_solid","flixel/effects/particles/FlxEmitter.hx",556,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_LINE(557)
	int tmp = this->allowCollisions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	int tmp1 = (int(tmp) & int((int)4369));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_solid,return )

bool FlxTypedEmitter_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_solid",0x3c6c3eb7,"flixel.effects.particles.FlxTypedEmitter.set_solid","flixel/effects/particles/FlxEmitter.hx",561,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(562)
	bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(562)
	if ((tmp)){
		HX_STACK_LINE(564)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(568)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(570)
	bool tmp1 = Solid;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_solid,return )


FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(particleClass,"particleClass");
	HX_MARK_MEMBER_NAME(emitting,"emitting");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(launchMode,"launchMode");
	HX_MARK_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_MARK_MEMBER_NAME(launchAngle,"launchAngle");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(particleClass,"particleClass");
	HX_VISIT_MEMBER_NAME(emitting,"emitting");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(launchMode,"launchMode");
	HX_VISIT_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_VISIT_MEMBER_NAME(launchAngle,"launchAngle");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedEmitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return get_solid(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"explode") ) { return explode_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { return emitting; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"_explode") ) { return _explode; }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return _quantity; }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { return launchMode; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"onFinished") ) { return onFinished_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { return launchAngle; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return _waitForKill; }
		if (HX_FIELD_EQ(inName,"loadParticle") ) { return loadParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return particleClass; }
		if (HX_FIELD_EQ(inName,"loadParticles") ) { return loadParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return makeParticles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { return keepScaleRatio; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return autoUpdateHitbox; }
		if (HX_FIELD_EQ(inName,"emitContinuously") ) { return emitContinuously_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { return ignoreAngularVelocity; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"emitParticleContinuously") ) { return emitParticleContinuously_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return set_solid(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { emitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { launchMode=inValue.Cast< ::flixel::effects::particles::FlxEmitterMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { launchAngle=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { particleClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { keepScaleRatio=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { ignoreAngularVelocity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e"));
	outFields->push(HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58"));
	outFields->push(HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("launchMode","\x36","\x97","\x65","\xb9"));
	outFields->push(HX_HCSTRING("keepScaleRatio","\x06","\x6f","\x41","\x31"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("ignoreAngularVelocity","\x2d","\x72","\xdc","\x56"));
	outFields->push(HX_HCSTRING("launchAngle","\xa0","\xd8","\x08","\x96"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"));
	outFields->push(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"));
	outFields->push(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"));
	outFields->push(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	outFields->push(HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3"));
	outFields->push(HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxTypedEmitter_obj,particleClass),HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,emitting),HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,frequency),HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTypedEmitter_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitterMode*/ ,(int)offsetof(FlxTypedEmitter_obj,launchMode),HX_HCSTRING("launchMode","\x36","\x97","\x65","\xb9")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,keepScaleRatio),HX_HCSTRING("keepScaleRatio","\x06","\x6f","\x41","\x31")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularAcceleration),HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularDrag),HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularVelocity),HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,ignoreAngularVelocity),HX_HCSTRING("ignoreAngularVelocity","\x2d","\x72","\xdc","\x56")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,launchAngle),HX_HCSTRING("launchAngle","\xa0","\xd8","\x08","\x96")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,drag),HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,immovable),HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,autoUpdateHitbox),HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,allowCollisions),HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_quantity),HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_explode),HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_counter),HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_waitForKill),HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("particleClass","\x12","\x2c","\xaf","\x5e"),
	HX_HCSTRING("emitting","\xc1","\x90","\x7b","\x58"),
	HX_HCSTRING("frequency","\x9c","\x82","\xea","\xbb"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("launchMode","\x36","\x97","\x65","\xb9"),
	HX_HCSTRING("keepScaleRatio","\x06","\x6f","\x41","\x31"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"),
	HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"),
	HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("ignoreAngularVelocity","\x2d","\x72","\xdc","\x56"),
	HX_HCSTRING("launchAngle","\xa0","\xd8","\x08","\x96"),
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"),
	HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"),
	HX_HCSTRING("_quantity","\xea","\x3e","\xd8","\xf3"),
	HX_HCSTRING("_explode","\x62","\x15","\x1c","\x61"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_waitForKill","\x53","\x6f","\x91","\x2f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("loadParticles","\x67","\x10","\xeb","\x14"),
	HX_HCSTRING("loadParticle","\x8c","\x2a","\xfa","\x25"),
	HX_HCSTRING("makeParticles","\x9f","\x37","\x2e","\x8b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),
	HX_HCSTRING("emitContinuously","\x4f","\xa0","\x33","\x17"),
	HX_HCSTRING("emitParticleContinuously","\xb5","\x26","\xaf","\x13"),
	HX_HCSTRING("onFinished","\xb1","\x67","\xc5","\x72"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("emitParticle","\xb9","\xa3","\x6b","\x89"),
	HX_HCSTRING("focusOn","\x17","\x4b","\x83","\x41"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("get_solid","\x82","\x10","\x6f","\xc4"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxTypedEmitter","\x57","\x05","\x9c","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedEmitter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
