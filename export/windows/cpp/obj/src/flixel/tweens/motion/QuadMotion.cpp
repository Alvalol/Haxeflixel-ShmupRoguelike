#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadMotion
#include <flixel/tweens/motion/QuadMotion.h>
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
namespace flixel{
namespace tweens{
namespace motion{

Void QuadMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","new",0xf59e5933,"flixel.tweens.motion.QuadMotion.new","flixel/tweens/motion/QuadMotion.hx",8,0x8023a31c)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(22)
	this->_controlY = ((Float)0);
	HX_STACK_LINE(21)
	this->_controlX = ((Float)0);
	HX_STACK_LINE(20)
	this->_toY = ((Float)0);
	HX_STACK_LINE(19)
	this->_toX = ((Float)0);
	HX_STACK_LINE(18)
	this->_fromY = ((Float)0);
	HX_STACK_LINE(17)
	this->_fromX = ((Float)0);
	HX_STACK_LINE(16)
	this->_distance = ((Float)-1);
	HX_STACK_LINE(8)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	super::__construct(tmp);
}
;
	return null();
}

//QuadMotion_obj::~QuadMotion_obj() { }

Dynamic QuadMotion_obj::__CreateEmpty() { return  new QuadMotion_obj; }
hx::ObjectPtr< QuadMotion_obj > QuadMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< QuadMotion_obj > _result_ = new QuadMotion_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic QuadMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadMotion_obj > _result_ = new QuadMotion_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::tweens::motion::QuadMotion QuadMotion_obj::setMotion( Float FromX,Float FromY,Float ControlX,Float ControlY,Float ToX,Float ToY,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","setMotion",0xe116648b,"flixel.tweens.motion.QuadMotion.setMotion","flixel/tweens/motion/QuadMotion.hx",37,0x8023a31c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(ControlX,"ControlX")
	HX_STACK_ARG(ControlY,"ControlY")
	HX_STACK_ARG(ToX,"ToX")
	HX_STACK_ARG(ToY,"ToY")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(38)
		this->_distance = (int)-1;
		HX_STACK_LINE(39)
		Float tmp = this->_fromX = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		this->x = tmp;
		HX_STACK_LINE(40)
		Float tmp1 = this->_fromY = FromY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		this->y = tmp1;
		HX_STACK_LINE(41)
		this->_controlX = ControlX;
		HX_STACK_LINE(42)
		this->_controlY = ControlY;
		HX_STACK_LINE(43)
		this->_toX = ToX;
		HX_STACK_LINE(44)
		this->_toY = ToY;
		HX_STACK_LINE(46)
		bool tmp2 = UseDuration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		if ((tmp2)){
			HX_STACK_LINE(48)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(52)
			Float tmp3 = this->get_distance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			Float tmp4 = DurationOrSpeed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			this->duration = tmp5;
		}
		HX_STACK_LINE(55)
		this->start();
		HX_STACK_LINE(57)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(QuadMotion_obj,setMotion,return )

Void QuadMotion_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","update",0xec780316,"flixel.tweens.motion.QuadMotion.update","flixel/tweens/motion/QuadMotion.hx",61,0x8023a31c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(62)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		this->super::update(tmp);
		HX_STACK_LINE(63)
		Float tmp1 = this->_fromX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		Float tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		Float tmp6 = ((int)1 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		Float tmp8 = this->_controlX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		Float tmp9 = (tmp8 * (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		Float tmp10 = this->scale;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		Float tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(63)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(63)
		Float tmp15 = (tmp7 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(63)
		Float tmp16 = this->_toX;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(63)
		Float tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(63)
		Float tmp19 = this->scale;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(63)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(63)
		Float tmp21 = (tmp15 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(63)
		this->x = tmp21;
		HX_STACK_LINE(64)
		Float tmp22 = this->_fromY;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(64)
		Float tmp23 = this->scale;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(64)
		Float tmp24 = ((int)1 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(64)
		Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(64)
		Float tmp26 = this->scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(64)
		Float tmp27 = ((int)1 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(64)
		Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(64)
		Float tmp29 = this->_controlY;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(64)
		Float tmp30 = (tmp29 * (int)2);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(64)
		Float tmp31 = this->scale;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(64)
		Float tmp32 = ((int)1 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(64)
		Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(64)
		Float tmp34 = this->scale;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(64)
		Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(64)
		Float tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(64)
		Float tmp37 = this->_toY;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(64)
		Float tmp38 = this->scale;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(64)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(64)
		Float tmp40 = this->scale;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(64)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(64)
		Float tmp42 = (tmp36 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(64)
		this->y = tmp42;
		HX_STACK_LINE(65)
		bool tmp43 = this->finished;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(65)
		if ((tmp43)){
			HX_STACK_LINE(67)
			this->postUpdate();
		}
	}
return null();
}


Float QuadMotion_obj::get_distance( ){
	HX_STACK_FRAME("flixel.tweens.motion.QuadMotion","get_distance",0x3f988c0b,"flixel.tweens.motion.QuadMotion.get_distance","flixel/tweens/motion/QuadMotion.hx",72,0x8023a31c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	Float tmp = this->_distance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	if ((tmp1)){
		HX_STACK_LINE(73)
		Float tmp2 = this->_distance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		return tmp2;
	}
	HX_STACK_LINE(74)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(74)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(74)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(74)
		point->_inPool = false;
		HX_STACK_LINE(74)
		tmp2 = point;
	}
	HX_STACK_LINE(74)
	::flixel::math::FlxPoint a = tmp2;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(75)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(75)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(75)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(75)
		point->_inPool = false;
		HX_STACK_LINE(75)
		tmp3 = point;
	}
	HX_STACK_LINE(75)
	::flixel::math::FlxPoint b = tmp3;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(76)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	Float tmp5 = this->_controlX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	Float tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(76)
	Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(76)
	Float tmp8 = this->_toX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(76)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(76)
	a->set_x(tmp9);
	HX_STACK_LINE(77)
	Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	Float tmp11 = this->_controlY;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	Float tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(77)
	Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(77)
	Float tmp14 = this->_toY;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(77)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(77)
	a->set_y(tmp15);
	HX_STACK_LINE(78)
	Float tmp16 = this->_controlX;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(78)
	Float tmp17 = ((int)2 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(78)
	Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(78)
	Float tmp19 = ((int)2 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(78)
	Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(78)
	b->set_x(tmp20);
	HX_STACK_LINE(79)
	Float tmp21 = this->_controlY;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(79)
	Float tmp22 = ((int)2 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(79)
	Float tmp23 = this->y;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(79)
	Float tmp24 = ((int)2 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(79)
	Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(79)
	b->set_y(tmp25);
	HX_STACK_LINE(80)
	Float tmp26 = (a->x * a->x);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(80)
	Float tmp27 = (a->y * a->y);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(80)
	Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(80)
	Float tmp29 = ((int)4 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(80)
	Float A = tmp29;		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(81)
	Float tmp30 = (a->x * b->x);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(81)
	Float tmp31 = (a->y * b->y);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(81)
	Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(81)
	Float tmp33 = ((int)4 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(81)
	Float B = tmp33;		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(82)
	Float tmp34 = (b->x * b->x);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(82)
	Float tmp35 = (b->y * b->y);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(82)
	Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(82)
	Float C = tmp36;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(83)
	Float tmp37 = (A + B);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(83)
	Float tmp38 = C;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(83)
	Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(83)
	Float tmp40 = ::Math_obj::sqrt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(83)
	Float tmp41 = ((int)2 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(83)
	Float ABC = tmp41;		HX_STACK_VAR(ABC,"ABC");
	HX_STACK_LINE(84)
	Float tmp42 = A;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(84)
	Float tmp43 = ::Math_obj::sqrt(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(84)
	Float A2 = tmp43;		HX_STACK_VAR(A2,"A2");
	HX_STACK_LINE(85)
	Float tmp44 = ((int)2 * A);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(85)
	Float tmp45 = A2;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(85)
	Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(85)
	Float A32 = tmp46;		HX_STACK_VAR(A32,"A32");
	HX_STACK_LINE(86)
	Float tmp47 = C;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(86)
	Float tmp48 = ::Math_obj::sqrt(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(86)
	Float tmp49 = ((int)2 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(86)
	Float C2 = tmp49;		HX_STACK_VAR(C2,"C2");
	HX_STACK_LINE(87)
	Float tmp50 = (Float(B) / Float(A2));		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(87)
	Float BA = tmp50;		HX_STACK_VAR(BA,"BA");
	HX_STACK_LINE(89)
	a->put();
	HX_STACK_LINE(90)
	b->put();
	HX_STACK_LINE(92)
	Float tmp51 = (A32 * ABC);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(92)
	Float tmp52 = (A2 * B);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(92)
	Float tmp53 = (ABC - C2);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(92)
	Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(92)
	Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(92)
	Float tmp56 = ((int)4 * C);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(92)
	Float tmp57 = A;		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(92)
	Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(92)
	Float tmp59 = (B * B);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(92)
	Float tmp60 = (tmp58 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(92)
	Float tmp61 = ((int)2 * A2);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(92)
	Float tmp62 = BA;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(92)
	Float tmp63 = (tmp61 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(92)
	Float tmp64 = ABC;		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(92)
	Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(92)
	Float tmp66 = (BA + C2);		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(92)
	Float tmp67 = (Float(tmp65) / Float(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(92)
	Float tmp68 = ::Math_obj::log(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(92)
	Float tmp69 = (tmp60 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(92)
	Float tmp70 = (tmp55 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(92)
	Float tmp71 = ((int)4 * A32);		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(92)
	Float tmp72 = (Float(tmp70) / Float(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(92)
	return tmp72;
}


HX_DEFINE_DYNAMIC_FUNC0(QuadMotion_obj,get_distance,return )


QuadMotion_obj::QuadMotion_obj()
{
}

Dynamic QuadMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return get_distance(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { return _controlX; }
		if (HX_FIELD_EQ(inName,"_controlY") ) { return _controlY; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlX") ) { _controlX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_controlY") ) { _controlY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	outFields->push(HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_controlX","\xba","\x7d","\x52","\x7f"));
	outFields->push(HX_HCSTRING("_controlY","\xbb","\x7d","\x52","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromX),HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_fromY),HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_toX),HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_toY),HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlX),HX_HCSTRING("_controlX","\xba","\x7d","\x52","\x7f")},
	{hx::fsFloat,(int)offsetof(QuadMotion_obj,_controlY),HX_HCSTRING("_controlY","\xbb","\x7d","\x52","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"),
	HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"),
	HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"),
	HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"),
	HX_HCSTRING("_controlX","\xba","\x7d","\x52","\x7f"),
	HX_HCSTRING("_controlY","\xbb","\x7d","\x52","\x7f"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadMotion_obj::__mClass;

void QuadMotion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.QuadMotion","\xc1","\x43","\x2f","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadMotion_obj >;
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
} // end namespace tweens
} // end namespace motion
