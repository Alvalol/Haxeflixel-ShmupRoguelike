#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxParticle_obj::__construct()
{
HX_STACK_FRAME("flixel.effects.particles.FlxParticle","new",0x64bf516b,"flixel.effects.particles.FlxParticle.new","flixel/effects/particles/FlxParticle.hx",17,0xdb578328)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(71)
	this->_delta = ((Float)0);
	HX_STACK_LINE(35)
	this->autoUpdateHitbox = false;
	HX_STACK_LINE(31)
	this->percent = ((Float)0);
	HX_STACK_LINE(27)
	this->age = ((Float)0);
	HX_STACK_LINE(23)
	this->lifespan = ((Float)0);
	HX_STACK_LINE(80)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(82)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(82)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(82)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(82)
		point->_inPool = false;
		HX_STACK_LINE(82)
		tmp = point;
	}
	HX_STACK_LINE(82)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(82)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(82)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(82)
		point->_inPool = false;
		HX_STACK_LINE(82)
		tmp1 = point;
	}
	HX_STACK_LINE(82)
	::flixel::util::helpers::FlxRange tmp2 = ::flixel::util::helpers::FlxRange_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	this->velocityRange = tmp2;
	HX_STACK_LINE(83)
	::flixel::util::helpers::FlxRange tmp3 = ::flixel::util::helpers::FlxRange_obj::__new((int)0,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	this->angularVelocityRange = tmp3;
	HX_STACK_LINE(84)
	::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp7 = tmp6->set((int)1,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(84)
		point->_inPool = false;
		HX_STACK_LINE(84)
		tmp4 = point;
	}
	HX_STACK_LINE(84)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp8 = tmp7->set((int)1,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(84)
		point->_inPool = false;
		HX_STACK_LINE(84)
		tmp5 = point;
	}
	HX_STACK_LINE(84)
	::flixel::util::helpers::FlxRange tmp6 = ::flixel::util::helpers::FlxRange_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(84)
	this->scaleRange = tmp6;
	HX_STACK_LINE(85)
	::flixel::util::helpers::FlxRange tmp7 = ::flixel::util::helpers::FlxRange_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	this->alphaRange = tmp7;
	HX_STACK_LINE(86)
	::flixel::util::helpers::FlxRange tmp8 = ::flixel::util::helpers::FlxRange_obj::__new((int)-1,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	this->colorRange = tmp8;
	HX_STACK_LINE(87)
	::flixel::math::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(87)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(87)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp10 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(87)
		Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(87)
		point->_inPool = false;
		HX_STACK_LINE(87)
		tmp9 = point;
	}
	HX_STACK_LINE(87)
	::flixel::math::FlxPoint tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(87)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(87)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp11 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(87)
		Float tmp13 = X;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(87)
		Float tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint tmp15 = tmp12->set(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint point = tmp15;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(87)
		point->_inPool = false;
		HX_STACK_LINE(87)
		tmp10 = point;
	}
	HX_STACK_LINE(87)
	::flixel::util::helpers::FlxRange tmp11 = ::flixel::util::helpers::FlxRange_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(87)
	this->dragRange = tmp11;
	HX_STACK_LINE(88)
	::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(88)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(88)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(88)
		Float tmp15 = X;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(88)
		Float tmp16 = Y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint tmp17 = tmp14->set(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(88)
		point->_inPool = false;
		HX_STACK_LINE(88)
		tmp12 = point;
	}
	HX_STACK_LINE(88)
	::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(88)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(88)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp14 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(88)
		Float tmp16 = X;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(88)
		Float tmp17 = Y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint tmp18 = tmp15->set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(88)
		::flixel::math::FlxPoint point = tmp18;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(88)
		point->_inPool = false;
		HX_STACK_LINE(88)
		tmp13 = point;
	}
	HX_STACK_LINE(88)
	::flixel::util::helpers::FlxRange tmp14 = ::flixel::util::helpers::FlxRange_obj::__new(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(88)
	this->accelerationRange = tmp14;
	HX_STACK_LINE(89)
	::flixel::util::helpers::FlxRange tmp15 = ::flixel::util::helpers::FlxRange_obj::__new((int)0,null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(89)
	this->elasticityRange = tmp15;
	HX_STACK_LINE(91)
	this->set_exists(false);
}
;
	return null();
}

//FlxParticle_obj::~FlxParticle_obj() { }

Dynamic FlxParticle_obj::__CreateEmpty() { return  new FlxParticle_obj; }
hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new()
{  hx::ObjectPtr< FlxParticle_obj > _result_ = new FlxParticle_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxParticle_obj > _result_ = new FlxParticle_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxParticle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::effects::particles::IFlxParticle_obj)) return operator ::flixel::effects::particles::IFlxParticle_obj *();
	return super::__ToInterface(inType);
}

FlxParticle_obj::operator ::flixel::IFlxSprite_obj *()
	{ return new ::flixel::IFlxSprite_delegate_< FlxParticle_obj >(this); }
FlxParticle_obj::operator ::flixel::IFlxBasic_obj *()
	{ return new ::flixel::IFlxBasic_delegate_< FlxParticle_obj >(this); }
FlxParticle_obj::operator ::flixel::effects::particles::IFlxParticle_obj *()
	{ return new ::flixel::effects::particles::IFlxParticle_delegate_< FlxParticle_obj >(this); }
Void FlxParticle_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","destroy",0xa0ae8f85,"flixel.effects.particles.FlxParticle.destroy","flixel/effects/particles/FlxParticle.hx",98,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		::flixel::util::helpers::FlxRange tmp = this->velocityRange;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(101)
			::flixel::util::helpers::FlxRange tmp2 = this->velocityRange;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint tmp3 = tmp2->start;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			::flixel::util::helpers::FlxRange tmp5 = this->velocityRange;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			tmp5->start = tmp4;
			HX_STACK_LINE(102)
			::flixel::util::helpers::FlxRange tmp6 = this->velocityRange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			::flixel::math::FlxPoint tmp7 = tmp6->end;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			::flixel::math::FlxPoint tmp8 = ::flixel::util::FlxDestroyUtil_obj::put(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			::flixel::util::helpers::FlxRange tmp9 = this->velocityRange;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			tmp9->end = tmp8;
			HX_STACK_LINE(103)
			this->velocityRange = null();
		}
		HX_STACK_LINE(105)
		::flixel::util::helpers::FlxRange tmp2 = this->scaleRange;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		if ((tmp3)){
			HX_STACK_LINE(107)
			::flixel::util::helpers::FlxRange tmp4 = this->scaleRange;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			::flixel::math::FlxPoint tmp5 = tmp4->start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxDestroyUtil_obj::put(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			::flixel::util::helpers::FlxRange tmp7 = this->scaleRange;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			tmp7->start = tmp6;
			HX_STACK_LINE(108)
			::flixel::util::helpers::FlxRange tmp8 = this->scaleRange;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint tmp9 = tmp8->end;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint tmp10 = ::flixel::util::FlxDestroyUtil_obj::put(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			::flixel::util::helpers::FlxRange tmp11 = this->scaleRange;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			tmp11->end = tmp10;
			HX_STACK_LINE(109)
			this->scaleRange = null();
		}
		HX_STACK_LINE(111)
		::flixel::util::helpers::FlxRange tmp4 = this->dragRange;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		if ((tmp5)){
			HX_STACK_LINE(113)
			::flixel::util::helpers::FlxRange tmp6 = this->dragRange;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			::flixel::math::FlxPoint tmp7 = tmp6->start;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			::flixel::math::FlxPoint tmp8 = ::flixel::util::FlxDestroyUtil_obj::put(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			::flixel::util::helpers::FlxRange tmp9 = this->dragRange;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			tmp9->start = tmp8;
			HX_STACK_LINE(114)
			::flixel::util::helpers::FlxRange tmp10 = this->dragRange;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			::flixel::math::FlxPoint tmp11 = tmp10->end;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			::flixel::math::FlxPoint tmp12 = ::flixel::util::FlxDestroyUtil_obj::put(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			::flixel::util::helpers::FlxRange tmp13 = this->dragRange;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			tmp13->end = tmp12;
			HX_STACK_LINE(115)
			this->dragRange = null();
		}
		HX_STACK_LINE(117)
		::flixel::util::helpers::FlxRange tmp6 = this->accelerationRange;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		if ((tmp7)){
			HX_STACK_LINE(119)
			::flixel::util::helpers::FlxRange tmp8 = this->accelerationRange;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			::flixel::math::FlxPoint tmp9 = tmp8->start;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(119)
			::flixel::math::FlxPoint tmp10 = ::flixel::util::FlxDestroyUtil_obj::put(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(119)
			::flixel::util::helpers::FlxRange tmp11 = this->accelerationRange;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(119)
			tmp11->start = tmp10;
			HX_STACK_LINE(120)
			::flixel::util::helpers::FlxRange tmp12 = this->accelerationRange;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			::flixel::math::FlxPoint tmp13 = tmp12->end;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			::flixel::math::FlxPoint tmp14 = ::flixel::util::FlxDestroyUtil_obj::put(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(120)
			::flixel::util::helpers::FlxRange tmp15 = this->accelerationRange;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(120)
			tmp15->end = tmp14;
			HX_STACK_LINE(121)
			this->angularVelocityRange = null();
		}
		HX_STACK_LINE(124)
		this->alphaRange = null();
		HX_STACK_LINE(125)
		this->colorRange = null();
		HX_STACK_LINE(126)
		this->accelerationRange = null();
		HX_STACK_LINE(127)
		this->elasticityRange = null();
		HX_STACK_LINE(129)
		this->super::destroy();
	}
return null();
}


Void FlxParticle_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","update",0xc345fdde,"flixel.effects.particles.FlxParticle.update","flixel/effects/particles/FlxParticle.hx",136,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(137)
		Float tmp = this->age;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		Float tmp1 = this->lifespan;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		if ((tmp2)){
			HX_STACK_LINE(139)
			hx::AddEq(this->age,elapsed);
		}
		HX_STACK_LINE(142)
		Float tmp3 = this->age;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		Float tmp4 = this->lifespan;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		if ((tmp5)){
			HX_STACK_LINE(142)
			Float tmp7 = this->lifespan;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			tmp6 = (tmp8 != (int)0);
		}
		else{
			HX_STACK_LINE(142)
			tmp6 = false;
		}
		HX_STACK_LINE(142)
		if ((tmp6)){
			HX_STACK_LINE(144)
			this->kill();
		}
		else{
			HX_STACK_LINE(148)
			Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			Float tmp8 = this->lifespan;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(148)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(148)
			this->_delta = tmp9;
			HX_STACK_LINE(149)
			Float tmp10 = this->age;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(149)
			Float tmp11 = this->lifespan;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(149)
			Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(149)
			this->percent = tmp12;
			HX_STACK_LINE(151)
			::flixel::util::helpers::FlxRange tmp13 = this->velocityRange;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(151)
			bool tmp14 = tmp13->active;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(151)
			if ((tmp14)){
				HX_STACK_LINE(153)
				{
					HX_STACK_LINE(153)
					::flixel::math::FlxPoint tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(153)
					::flixel::math::FlxPoint _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(153)
					Float tmp16 = _g->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(153)
					::flixel::util::helpers::FlxRange tmp17 = this->velocityRange;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(153)
					Float tmp18 = tmp17->end->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(153)
					::flixel::util::helpers::FlxRange tmp19 = this->velocityRange;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(153)
					Float tmp20 = tmp19->start->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(153)
					Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(153)
					Float tmp22 = this->_delta;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(153)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(153)
					Float tmp24 = (tmp16 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(153)
					_g->set_x(tmp24);
				}
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					::flixel::math::FlxPoint tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(154)
					::flixel::math::FlxPoint _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					Float tmp16 = _g->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(154)
					::flixel::util::helpers::FlxRange tmp17 = this->velocityRange;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(154)
					Float tmp18 = tmp17->end->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(154)
					::flixel::util::helpers::FlxRange tmp19 = this->velocityRange;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(154)
					Float tmp20 = tmp19->start->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(154)
					Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(154)
					Float tmp22 = this->_delta;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(154)
					Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(154)
					Float tmp24 = (tmp16 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(154)
					_g->set_y(tmp24);
				}
			}
			HX_STACK_LINE(157)
			::flixel::util::helpers::FlxRange tmp15 = this->angularVelocityRange;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(157)
			bool tmp16 = tmp15->active;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(157)
			if ((tmp16)){
				HX_STACK_LINE(159)
				::flixel::util::helpers::FlxRange tmp17 = this->angularVelocityRange;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(159)
				Float tmp18 = tmp17->end;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(159)
				::flixel::util::helpers::FlxRange tmp19 = this->angularVelocityRange;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(159)
				Float tmp20 = tmp19->start;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(159)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(159)
				Float tmp22 = this->_delta;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(159)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(159)
				hx::AddEq(this->angularVelocity,tmp23);
			}
			HX_STACK_LINE(162)
			::flixel::util::helpers::FlxRange tmp17 = this->scaleRange;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(162)
			bool tmp18 = tmp17->active;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(162)
			if ((tmp18)){
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					::flixel::math::FlxPoint tmp19 = this->scale;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(164)
					::flixel::math::FlxPoint _g = tmp19;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(164)
					Float tmp20 = _g->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(164)
					::flixel::util::helpers::FlxRange tmp21 = this->scaleRange;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(164)
					Float tmp22 = tmp21->end->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(164)
					::flixel::util::helpers::FlxRange tmp23 = this->scaleRange;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(164)
					Float tmp24 = tmp23->start->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(164)
					Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(164)
					Float tmp26 = this->_delta;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(164)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(164)
					Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(164)
					_g->set_x(tmp28);
				}
				HX_STACK_LINE(165)
				{
					HX_STACK_LINE(165)
					::flixel::math::FlxPoint tmp19 = this->scale;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(165)
					::flixel::math::FlxPoint _g = tmp19;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(165)
					Float tmp20 = _g->y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(165)
					::flixel::util::helpers::FlxRange tmp21 = this->scaleRange;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(165)
					Float tmp22 = tmp21->end->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(165)
					::flixel::util::helpers::FlxRange tmp23 = this->scaleRange;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(165)
					Float tmp24 = tmp23->start->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(165)
					Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(165)
					Float tmp26 = this->_delta;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(165)
					Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(165)
					Float tmp28 = (tmp20 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(165)
					_g->set_y(tmp28);
				}
				HX_STACK_LINE(166)
				bool tmp19 = this->autoUpdateHitbox;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(166)
				if ((tmp19)){
					HX_STACK_LINE(166)
					this->updateHitbox();
				}
			}
			HX_STACK_LINE(169)
			::flixel::util::helpers::FlxRange tmp19 = this->alphaRange;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(169)
			bool tmp20 = tmp19->active;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(169)
			if ((tmp20)){
				HX_STACK_LINE(171)
				::flixel::effects::particles::FlxParticle _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(171)
				Float tmp21 = _g->alpha;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(171)
				::flixel::util::helpers::FlxRange tmp22 = this->alphaRange;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(171)
				Float tmp23 = tmp22->end;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(171)
				::flixel::util::helpers::FlxRange tmp24 = this->alphaRange;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(171)
				Float tmp25 = tmp24->start;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(171)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(171)
				Float tmp27 = this->_delta;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(171)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(171)
				Float tmp29 = (tmp21 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(171)
				_g->set_alpha(tmp29);
			}
			HX_STACK_LINE(174)
			::flixel::util::helpers::FlxRange tmp21 = this->colorRange;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(174)
			bool tmp22 = tmp21->active;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(174)
			if ((tmp22)){
				HX_STACK_LINE(176)
				int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					::flixel::util::helpers::FlxRange tmp24 = this->colorRange;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(176)
					int Color1 = tmp24->start;		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(176)
					::flixel::util::helpers::FlxRange tmp25 = this->colorRange;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(176)
					int Color2 = tmp25->end;		HX_STACK_VAR(Color2,"Color2");
					HX_STACK_LINE(176)
					Float tmp26 = this->percent;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(176)
					Float Factor = tmp26;		HX_STACK_VAR(Factor,"Factor");
					HX_STACK_LINE(176)
					int tmp27 = (int(Color2) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(176)
					int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(176)
					int tmp29 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(176)
					int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(176)
					int tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(176)
					Float tmp32 = Factor;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(176)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(176)
					int tmp34 = (int(Color1) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(176)
					int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(176)
					Float tmp36 = (tmp33 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(176)
					int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(176)
					int r = tmp37;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(176)
					int tmp38 = (int(Color2) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(176)
					int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(176)
					int tmp40 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(176)
					int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(176)
					int tmp42 = (tmp39 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(176)
					Float tmp43 = Factor;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(176)
					Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(176)
					int tmp45 = (int(Color1) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(176)
					int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(176)
					Float tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(176)
					int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(176)
					int g = tmp48;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(176)
					int tmp49 = (int(Color2) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(176)
					int tmp50 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(176)
					int tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(176)
					Float tmp52 = Factor;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(176)
					Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(176)
					int tmp54 = (int(Color1) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(176)
					Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(176)
					int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(176)
					int b = tmp56;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(176)
					int tmp57 = (int(Color2) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(176)
					int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(176)
					int tmp59 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(176)
					int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(176)
					int tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(176)
					Float tmp62 = Factor;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(176)
					Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(176)
					int tmp64 = (int(Color1) >> int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(176)
					int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(176)
					Float tmp66 = (tmp63 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(176)
					int tmp67 = ::Std_obj::_int(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(176)
					int a = tmp67;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(176)
					{
						HX_STACK_LINE(176)
						int tmp68 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(176)
						int color = tmp68;		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(176)
						int tmp69;		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(176)
						{
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(176)
								bool tmp70 = (r > (int)255);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(176)
								int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(176)
								if ((tmp70)){
									HX_STACK_LINE(176)
									tmp71 = (int)255;
								}
								else{
									HX_STACK_LINE(176)
									bool tmp72 = (r < (int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(176)
									if ((tmp72)){
										HX_STACK_LINE(176)
										tmp71 = (int)0;
									}
									else{
										HX_STACK_LINE(176)
										tmp71 = r;
									}
								}
								HX_STACK_LINE(176)
								int tmp72 = (int(tmp71) << int((int)16));		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(176)
								hx::OrEq(color,tmp72);
								HX_STACK_LINE(176)
								r;
							}
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(176)
								bool tmp70 = (g > (int)255);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(176)
								int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(176)
								if ((tmp70)){
									HX_STACK_LINE(176)
									tmp71 = (int)255;
								}
								else{
									HX_STACK_LINE(176)
									bool tmp72 = (g < (int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(176)
									if ((tmp72)){
										HX_STACK_LINE(176)
										tmp71 = (int)0;
									}
									else{
										HX_STACK_LINE(176)
										tmp71 = g;
									}
								}
								HX_STACK_LINE(176)
								int tmp72 = (int(tmp71) << int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(176)
								hx::OrEq(color,tmp72);
								HX_STACK_LINE(176)
								g;
							}
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(176)
								bool tmp70 = (b > (int)255);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(176)
								int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(176)
								if ((tmp70)){
									HX_STACK_LINE(176)
									tmp71 = (int)255;
								}
								else{
									HX_STACK_LINE(176)
									bool tmp72 = (b < (int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(176)
									if ((tmp72)){
										HX_STACK_LINE(176)
										tmp71 = (int)0;
									}
									else{
										HX_STACK_LINE(176)
										tmp71 = b;
									}
								}
								HX_STACK_LINE(176)
								hx::OrEq(color,tmp71);
								HX_STACK_LINE(176)
								b;
							}
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(176)
								bool tmp70 = (a > (int)255);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(176)
								int tmp71;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(176)
								if ((tmp70)){
									HX_STACK_LINE(176)
									tmp71 = (int)255;
								}
								else{
									HX_STACK_LINE(176)
									bool tmp72 = (a < (int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(176)
									if ((tmp72)){
										HX_STACK_LINE(176)
										tmp71 = (int)0;
									}
									else{
										HX_STACK_LINE(176)
										tmp71 = a;
									}
								}
								HX_STACK_LINE(176)
								int tmp72 = (int(tmp71) << int((int)24));		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(176)
								hx::OrEq(color,tmp72);
								HX_STACK_LINE(176)
								a;
							}
							HX_STACK_LINE(176)
							tmp69 = color;
						}
						HX_STACK_LINE(176)
						tmp23 = tmp69;
					}
				}
				HX_STACK_LINE(176)
				this->set_color(tmp23);
			}
			HX_STACK_LINE(179)
			::flixel::util::helpers::FlxRange tmp23 = this->dragRange;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(179)
			bool tmp24 = tmp23->active;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(179)
			if ((tmp24)){
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::flixel::math::FlxPoint tmp25 = this->drag;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(181)
					::flixel::math::FlxPoint _g = tmp25;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(181)
					Float tmp26 = _g->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(181)
					::flixel::util::helpers::FlxRange tmp27 = this->dragRange;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(181)
					Float tmp28 = tmp27->end->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(181)
					::flixel::util::helpers::FlxRange tmp29 = this->dragRange;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(181)
					Float tmp30 = tmp29->start->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(181)
					Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(181)
					Float tmp32 = this->_delta;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(181)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(181)
					Float tmp34 = (tmp26 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(181)
					_g->set_x(tmp34);
				}
				HX_STACK_LINE(182)
				{
					HX_STACK_LINE(182)
					::flixel::math::FlxPoint tmp25 = this->drag;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(182)
					::flixel::math::FlxPoint _g = tmp25;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(182)
					Float tmp26 = _g->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(182)
					::flixel::util::helpers::FlxRange tmp27 = this->dragRange;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(182)
					Float tmp28 = tmp27->end->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(182)
					::flixel::util::helpers::FlxRange tmp29 = this->dragRange;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(182)
					Float tmp30 = tmp29->start->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(182)
					Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(182)
					Float tmp32 = this->_delta;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(182)
					Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(182)
					Float tmp34 = (tmp26 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(182)
					_g->set_y(tmp34);
				}
			}
			HX_STACK_LINE(185)
			::flixel::util::helpers::FlxRange tmp25 = this->accelerationRange;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(185)
			bool tmp26 = tmp25->active;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(185)
			if ((tmp26)){
				HX_STACK_LINE(187)
				{
					HX_STACK_LINE(187)
					::flixel::math::FlxPoint tmp27 = this->acceleration;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(187)
					::flixel::math::FlxPoint _g = tmp27;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(187)
					Float tmp28 = _g->x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(187)
					::flixel::util::helpers::FlxRange tmp29 = this->accelerationRange;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(187)
					Float tmp30 = tmp29->end->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(187)
					::flixel::util::helpers::FlxRange tmp31 = this->accelerationRange;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(187)
					Float tmp32 = tmp31->start->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(187)
					Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(187)
					Float tmp34 = this->_delta;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(187)
					Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(187)
					Float tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(187)
					_g->set_x(tmp36);
				}
				HX_STACK_LINE(188)
				{
					HX_STACK_LINE(188)
					::flixel::math::FlxPoint tmp27 = this->acceleration;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(188)
					::flixel::math::FlxPoint _g = tmp27;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(188)
					Float tmp28 = _g->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(188)
					::flixel::util::helpers::FlxRange tmp29 = this->accelerationRange;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(188)
					Float tmp30 = tmp29->end->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(188)
					::flixel::util::helpers::FlxRange tmp31 = this->accelerationRange;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(188)
					Float tmp32 = tmp31->start->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(188)
					Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(188)
					Float tmp34 = this->_delta;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(188)
					Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(188)
					Float tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(188)
					_g->set_y(tmp36);
				}
			}
			HX_STACK_LINE(191)
			::flixel::util::helpers::FlxRange tmp27 = this->elasticityRange;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(191)
			bool tmp28 = tmp27->active;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(191)
			if ((tmp28)){
				HX_STACK_LINE(193)
				::flixel::util::helpers::FlxRange tmp29 = this->elasticityRange;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(193)
				Float tmp30 = tmp29->end;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(193)
				::flixel::util::helpers::FlxRange tmp31 = this->elasticityRange;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(193)
				Float tmp32 = tmp31->start;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(193)
				Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(193)
				Float tmp34 = this->_delta;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(193)
				Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(193)
				hx::AddEq(this->elasticity,tmp35);
			}
		}
		HX_STACK_LINE(197)
		Float tmp7 = elapsed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		this->super::update(tmp7);
	}
return null();
}


Void FlxParticle_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","reset",0xddde639a,"flixel.effects.particles.FlxParticle.reset","flixel/effects/particles/FlxParticle.hx",201,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(202)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		this->super::reset(tmp,tmp1);
		HX_STACK_LINE(203)
		this->age = (int)0;
		HX_STACK_LINE(204)
		this->set_visible(true);
	}
return null();
}


Void FlxParticle_obj::onEmit( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","onEmit",0x21e01ee7,"flixel.effects.particles.FlxParticle.onEmit","flixel/effects/particles/FlxParticle.hx",211,0xdb578328)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))


FlxParticle_obj::FlxParticle_obj()
{
}

void FlxParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxParticle);
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(velocityRange,"velocityRange");
	HX_MARK_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_MARK_MEMBER_NAME(scaleRange,"scaleRange");
	HX_MARK_MEMBER_NAME(alphaRange,"alphaRange");
	HX_MARK_MEMBER_NAME(colorRange,"colorRange");
	HX_MARK_MEMBER_NAME(dragRange,"dragRange");
	HX_MARK_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_MARK_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(age,"age");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(velocityRange,"velocityRange");
	HX_VISIT_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_VISIT_MEMBER_NAME(scaleRange,"scaleRange");
	HX_VISIT_MEMBER_NAME(alphaRange,"alphaRange");
	HX_VISIT_MEMBER_NAME(colorRange,"colorRange");
	HX_VISIT_MEMBER_NAME(dragRange,"dragRange");
	HX_VISIT_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_VISIT_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxParticle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return age; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onEmit") ) { return onEmit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return percent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { return dragRange; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { return scaleRange; }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { return alphaRange; }
		if (HX_FIELD_EQ(inName,"colorRange") ) { return colorRange; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { return velocityRange; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { return elasticityRange; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return autoUpdateHitbox; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { return accelerationRange; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { return angularVelocityRange; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { dragRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { scaleRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { alphaRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorRange") ) { colorRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { velocityRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { elasticityRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { accelerationRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { angularVelocityRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("age","\xbf","\xf4","\x49","\x00"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24"));
	outFields->push(HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e"));
	outFields->push(HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a"));
	outFields->push(HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05"));
	outFields->push(HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04"));
	outFields->push(HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08"));
	outFields->push(HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46"));
	outFields->push(HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34"));
	outFields->push(HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb"));
	outFields->push(HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,age),HX_HCSTRING("age","\xbf","\xf4","\x49","\x00")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,percent),HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,autoUpdateHitbox),HX_HCSTRING("autoUpdateHitbox","\x90","\xaa","\x3d","\x24")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,velocityRange),HX_HCSTRING("velocityRange","\x60","\x4a","\xa1","\x8e")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,angularVelocityRange),HX_HCSTRING("angularVelocityRange","\x1e","\xc6","\xce","\x3a")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,scaleRange),HX_HCSTRING("scaleRange","\xd3","\x52","\x53","\x05")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,alphaRange),HX_HCSTRING("alphaRange","\x7f","\xf9","\xc4","\x04")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,colorRange),HX_HCSTRING("colorRange","\x5a","\xbd","\x8b","\x08")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,dragRange),HX_HCSTRING("dragRange","\x29","\x15","\x75","\x46")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,accelerationRange),HX_HCSTRING("accelerationRange","\x5d","\x2d","\x23","\x34")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,elasticityRange),HX_HCSTRING("elasticityRange","\x84","\xbb","\xe8","\xdb")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,_delta),HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

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
	HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxParticle","\xf9","\xbf","\xf1","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxParticle_obj >;
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
