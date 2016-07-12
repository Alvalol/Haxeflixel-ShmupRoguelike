#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_QuadPath
#include <flixel/tweens/motion/QuadPath.h>
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
namespace flixel{
namespace tweens{
namespace motion{

Void QuadPath_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.QuadPath","new",0x9e663362,"flixel.tweens.motion.QuadPath.new","flixel/tweens/motion/QuadPath.hx",11,0x562bb60d)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(21)
	this->_updateCurve = true;
	HX_STACK_LINE(18)
	this->_numSegs = (int)0;
	HX_STACK_LINE(17)
	this->_index = (int)0;
	HX_STACK_LINE(16)
	this->_speed = ((Float)0);
	HX_STACK_LINE(15)
	this->_distance = ((Float)0);
	HX_STACK_LINE(32)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	super::__construct(tmp);
	HX_STACK_LINE(34)
	this->_points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	this->_curveT = Array_obj< Float >::__new();
	HX_STACK_LINE(36)
	this->_curveD = Array_obj< Float >::__new();
}
;
	return null();
}

//QuadPath_obj::~QuadPath_obj() { }

Dynamic QuadPath_obj::__CreateEmpty() { return  new QuadPath_obj; }
hx::ObjectPtr< QuadPath_obj > QuadPath_obj::__new(Dynamic Options)
{  hx::ObjectPtr< QuadPath_obj > _result_ = new QuadPath_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic QuadPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadPath_obj > _result_ = new QuadPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void QuadPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadPath","destroy",0x05d338fc,"flixel.tweens.motion.QuadPath.destroy","flixel/tweens/motion/QuadPath.hx",40,0x562bb60d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->super::destroy();
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			Array< ::Dynamic > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(43)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(43)
				if ((tmp1)){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(43)
				::flixel::math::FlxPoint tmp2 = _g1->__get(_g).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(43)
				::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(43)
				++(_g);
				HX_STACK_LINE(45)
				::flixel::math::FlxPoint tmp3 = point;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(45)
				point = tmp4;
			}
		}
		HX_STACK_LINE(47)
		::flixel::math::FlxPoint tmp = this->_a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		this->_a = tmp1;
		HX_STACK_LINE(48)
		::flixel::math::FlxPoint tmp2 = this->_b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		this->_b = tmp3;
		HX_STACK_LINE(49)
		::flixel::math::FlxPoint tmp4 = this->_c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		this->_c = tmp5;
	}
return null();
}


::flixel::tweens::motion::QuadPath QuadPath_obj::setMotion( Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","setMotion",0xc2ae8bfa,"flixel.tweens.motion.QuadPath.setMotion","flixel/tweens/motion/QuadPath.hx",59,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(60)
		this->updatePath();
		HX_STACK_LINE(62)
		bool tmp = UseDuration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(64)
			this->duration = DurationOrSpeed;
			HX_STACK_LINE(65)
			Float tmp1 = this->_distance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			Float tmp2 = DurationOrSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			this->_speed = tmp3;
		}
		else{
			HX_STACK_LINE(69)
			Float tmp1 = this->_distance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			Float tmp2 = DurationOrSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			this->duration = tmp3;
			HX_STACK_LINE(70)
			this->_speed = DurationOrSpeed;
		}
		HX_STACK_LINE(73)
		hx::TCast< ::flixel::tweens::motion::QuadPath >::cast(this->start());
		HX_STACK_LINE(74)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,setMotion,return )

::flixel::tweens::motion::QuadPath QuadPath_obj::addPoint( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","addPoint",0x820a502d,"flixel.tweens.motion.QuadPath.addPoint","flixel/tweens/motion/QuadPath.hx",81,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(82)
		this->_updateCurve = true;
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(83)
			point->_inPool = false;
			HX_STACK_LINE(83)
			tmp = point;
		}
		HX_STACK_LINE(83)
		this->_points->push(tmp);
		HX_STACK_LINE(84)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(QuadPath_obj,addPoint,return )

::flixel::math::FlxPoint QuadPath_obj::getPoint( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","getPoint",0x68843998,"flixel.tweens.motion.QuadPath.getPoint","flixel/tweens/motion/QuadPath.hx",91,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(92)
		int tmp = this->_points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(94)
			HX_STACK_DO_THROW(HX_HCSTRING("No points have been added to the path yet.","\xc7","\xa0","\x28","\x83"));
		}
		HX_STACK_LINE(96)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		int tmp3 = this->_points->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		int tmp4 = hx::Mod(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::flixel::math::FlxPoint tmp5 = this->_points->__get(tmp4).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(QuadPath_obj,getPoint,return )

::flixel::tweens::FlxTween QuadPath_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","start",0x95be1be4,"flixel.tweens.motion.QuadPath.start","flixel/tweens/motion/QuadPath.hx",100,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	bool tmp = this->backward;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	if ((tmp)){
		HX_STACK_LINE(101)
		int tmp2 = this->_numSegs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		tmp1 = (tmp2 - (int)1);
	}
	else{
		HX_STACK_LINE(101)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(101)
	this->_index = tmp1;
	HX_STACK_LINE(102)
	this->super::start();
	HX_STACK_LINE(103)
	return hx::ObjectPtr<OBJ_>(this);
}


Void QuadPath_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadPath","update",0xf1a57047,"flixel.tweens.motion.QuadPath.update","flixel/tweens/motion/QuadPath.hx",107,0x562bb60d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(108)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		this->super::update(tmp);
		HX_STACK_LINE(109)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(110)
		Float tt;		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(112)
		bool tmp1 = this->backward;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		if ((tmp3)){
			HX_STACK_LINE(112)
			tmp4 = (this->_points != null());
		}
		else{
			HX_STACK_LINE(112)
			tmp4 = false;
		}
		HX_STACK_LINE(112)
		if ((tmp4)){
			HX_STACK_LINE(114)
			int tmp5 = this->_index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			int tmp6 = this->_numSegs;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			if ((tmp8)){
				HX_STACK_LINE(116)
				while((true)){
					HX_STACK_LINE(116)
					Float tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(116)
					int tmp10 = this->_index;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(116)
					Float tmp12 = this->_curveT->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(116)
					bool tmp13 = (tmp9 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					if ((tmp14)){
						HX_STACK_LINE(116)
						break;
					}
					HX_STACK_LINE(118)
					(this->_index)++;
					HX_STACK_LINE(119)
					int tmp15 = this->_index;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(119)
					int tmp16 = this->_numSegs;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(119)
					int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(119)
					bool tmp18 = (tmp15 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(119)
					if ((tmp18)){
						HX_STACK_LINE(121)
						break;
					}
				}
			}
			HX_STACK_LINE(125)
			int tmp9 = this->_index;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			Float tmp10 = this->_curveT->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			td = tmp10;
			HX_STACK_LINE(126)
			int tmp11 = this->_index;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(126)
			int tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(126)
			Float tmp13 = this->_curveT->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(126)
			Float tmp14 = td;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(126)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(126)
			tt = tmp15;
			HX_STACK_LINE(127)
			Float tmp16 = this->scale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(127)
			Float tmp17 = td;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(127)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(127)
			Float tmp19 = tt;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(127)
			td = tmp20;
			HX_STACK_LINE(128)
			int tmp21 = this->_index;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(128)
			int tmp22 = (tmp21 * (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(128)
			::flixel::math::FlxPoint tmp23 = this->_points->__get(tmp22).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(128)
			this->_a = tmp23;
			HX_STACK_LINE(129)
			int tmp24 = this->_index;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(129)
			int tmp25 = (tmp24 * (int)2);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(129)
			int tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(129)
			::flixel::math::FlxPoint tmp27 = this->_points->__get(tmp26).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(129)
			this->_b = tmp27;
			HX_STACK_LINE(130)
			int tmp28 = this->_index;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(130)
			int tmp29 = (tmp28 * (int)2);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(130)
			int tmp30 = (tmp29 + (int)2);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(130)
			::flixel::math::FlxPoint tmp31 = this->_points->__get(tmp30).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(130)
			this->_c = tmp31;
			HX_STACK_LINE(132)
			::flixel::math::FlxPoint tmp32 = this->_a;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(132)
			Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(132)
			Float tmp34 = ((int)1 - td);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(132)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(132)
			Float tmp36 = ((int)1 - td);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(132)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(132)
			::flixel::math::FlxPoint tmp38 = this->_b;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(132)
			Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(132)
			Float tmp40 = (tmp39 * (int)2);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(132)
			Float tmp41 = ((int)1 - td);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(132)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(132)
			Float tmp43 = td;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(132)
			Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(132)
			Float tmp45 = (tmp37 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(132)
			::flixel::math::FlxPoint tmp46 = this->_c;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(132)
			Float tmp47 = tmp46->x;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(132)
			Float tmp48 = td;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(132)
			Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(132)
			Float tmp50 = td;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(132)
			Float tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(132)
			Float tmp52 = (tmp45 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(132)
			this->x = tmp52;
			HX_STACK_LINE(133)
			::flixel::math::FlxPoint tmp53 = this->_a;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(133)
			Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(133)
			Float tmp55 = ((int)1 - td);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(133)
			Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(133)
			Float tmp57 = ((int)1 - td);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(133)
			Float tmp58 = (tmp56 * tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(133)
			::flixel::math::FlxPoint tmp59 = this->_b;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(133)
			Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(133)
			Float tmp61 = (tmp60 * (int)2);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(133)
			Float tmp62 = ((int)1 - td);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(133)
			Float tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(133)
			Float tmp64 = td;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(133)
			Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(133)
			Float tmp66 = (tmp58 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(133)
			::flixel::math::FlxPoint tmp67 = this->_c;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(133)
			Float tmp68 = tmp67->y;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(133)
			Float tmp69 = td;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(133)
			Float tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(133)
			Float tmp71 = td;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(133)
			Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(133)
			Float tmp73 = (tmp66 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(133)
			this->y = tmp73;
		}
		else{
			HX_STACK_LINE(135)
			bool tmp5 = (this->_points != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			if ((tmp5)){
				HX_STACK_LINE(137)
				int tmp6 = this->_index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				if ((tmp7)){
					HX_STACK_LINE(139)
					while((true)){
						HX_STACK_LINE(139)
						Float tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(139)
						int tmp9 = this->_index;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(139)
						Float tmp10 = this->_curveT->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(139)
						bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(139)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(139)
						if ((tmp12)){
							HX_STACK_LINE(139)
							break;
						}
						HX_STACK_LINE(141)
						(this->_index)--;
						HX_STACK_LINE(142)
						int tmp13 = this->_index;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(142)
						bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(142)
						if ((tmp14)){
							HX_STACK_LINE(144)
							break;
						}
					}
				}
				HX_STACK_LINE(149)
				int tmp8 = this->_index;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(149)
				Float tmp10 = this->_curveT->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				td = tmp10;
				HX_STACK_LINE(150)
				int tmp11 = this->_index;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(150)
				Float tmp12 = this->_curveT->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(150)
				Float tmp13 = td;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(150)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(150)
				tt = tmp14;
				HX_STACK_LINE(151)
				Float tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(151)
				Float tmp16 = td;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(151)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(151)
				Float tmp18 = tt;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(151)
				Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(151)
				td = tmp19;
				HX_STACK_LINE(152)
				int tmp20 = this->_index;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(152)
				int tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(152)
				int tmp22 = (tmp21 + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(152)
				::flixel::math::FlxPoint tmp23 = this->_points->__get(tmp22).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(152)
				this->_a = tmp23;
				HX_STACK_LINE(153)
				int tmp24 = this->_index;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(153)
				int tmp25 = (tmp24 * (int)2);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(153)
				int tmp26 = (tmp25 + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(153)
				::flixel::math::FlxPoint tmp27 = this->_points->__get(tmp26).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(153)
				this->_b = tmp27;
				HX_STACK_LINE(154)
				int tmp28 = this->_index;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(154)
				int tmp29 = (tmp28 * (int)2);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(154)
				::flixel::math::FlxPoint tmp30 = this->_points->__get(tmp29).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(154)
				this->_c = tmp30;
				HX_STACK_LINE(156)
				::flixel::math::FlxPoint tmp31 = this->_a;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(156)
				Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(156)
				Float tmp33 = ((int)1 - td);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(156)
				Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(156)
				Float tmp35 = ((int)1 - td);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(156)
				Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(156)
				::flixel::math::FlxPoint tmp37 = this->_b;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(156)
				Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(156)
				Float tmp39 = (tmp38 * (int)2);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(156)
				Float tmp40 = ((int)1 - td);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(156)
				Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(156)
				Float tmp42 = td;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(156)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(156)
				Float tmp44 = (tmp36 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(156)
				::flixel::math::FlxPoint tmp45 = this->_c;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(156)
				Float tmp46 = tmp45->x;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(156)
				Float tmp47 = td;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(156)
				Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(156)
				Float tmp49 = td;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(156)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(156)
				Float tmp51 = (tmp44 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(156)
				this->x = tmp51;
				HX_STACK_LINE(157)
				::flixel::math::FlxPoint tmp52 = this->_a;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(157)
				Float tmp53 = tmp52->y;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(157)
				Float tmp54 = ((int)1 - td);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(157)
				Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(157)
				Float tmp56 = ((int)1 - td);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(157)
				Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(157)
				::flixel::math::FlxPoint tmp58 = this->_b;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(157)
				Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(157)
				Float tmp60 = (tmp59 * (int)2);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(157)
				Float tmp61 = ((int)1 - td);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(157)
				Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(157)
				Float tmp63 = td;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(157)
				Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(157)
				Float tmp65 = (tmp57 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(157)
				::flixel::math::FlxPoint tmp66 = this->_c;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(157)
				Float tmp67 = tmp66->y;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(157)
				Float tmp68 = td;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(157)
				Float tmp69 = (tmp67 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(157)
				Float tmp70 = td;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(157)
				Float tmp71 = (tmp69 * tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(157)
				Float tmp72 = (tmp65 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(157)
				this->y = tmp72;
			}
		}
		HX_STACK_LINE(159)
		this->super::postUpdate();
	}
return null();
}


Void QuadPath_obj::updatePath( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.QuadPath","updatePath",0x1fbbb18c,"flixel.tweens.motion.QuadPath.updatePath","flixel/tweens/motion/QuadPath.hx",164,0x562bb60d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		int tmp = this->_points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		int tmp2 = hx::Mod(tmp1,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		if ((tmp4)){
			HX_STACK_LINE(165)
			int tmp6 = this->_points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			tmp5 = (tmp7 < (int)3);
		}
		else{
			HX_STACK_LINE(165)
			tmp5 = true;
		}
		HX_STACK_LINE(165)
		if ((tmp5)){
			HX_STACK_LINE(167)
			HX_STACK_DO_THROW(HX_HCSTRING("A QuadPath must have at least 3 points to operate and number of points must be a odd.","\x67","\xe3","\x16","\xba"));
		}
		HX_STACK_LINE(169)
		bool tmp6 = this->_updateCurve;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(169)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(169)
		if ((tmp7)){
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(173)
		this->_updateCurve = false;
		HX_STACK_LINE(176)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(177)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(178)
		this->_distance = (int)0;
		HX_STACK_LINE(179)
		int tmp8 = this->_points->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		this->_numSegs = tmp11;
		HX_STACK_LINE(180)
		while((true)){
			HX_STACK_LINE(180)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(180)
			int tmp13 = this->_numSegs;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(180)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(180)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(180)
			if ((tmp15)){
				HX_STACK_LINE(180)
				break;
			}
			HX_STACK_LINE(182)
			int tmp16 = (i * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(182)
			j = tmp16;
			HX_STACK_LINE(183)
			::flixel::math::FlxPoint tmp17 = this->_points->__get(j).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(183)
			int tmp18 = (j + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(183)
			::flixel::math::FlxPoint tmp19 = this->_points->__get(tmp18).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(183)
			int tmp20 = (j + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(183)
			::flixel::math::FlxPoint tmp21 = this->_points->__get(tmp20).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(183)
			Float tmp22 = this->getCurveLength(tmp17,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(183)
			this->_curveD[i] = tmp22;
			HX_STACK_LINE(184)
			int tmp23 = (i)++;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(184)
			Float tmp24 = this->_curveD->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(184)
			hx::AddEq(this->_distance,tmp24);
		}
		HX_STACK_LINE(188)
		i = (int)0;
		HX_STACK_LINE(189)
		Float d = (int)0;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(190)
			int tmp13 = this->_numSegs;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(190)
			bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(190)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(190)
			if ((tmp15)){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(192)
			Float tmp16 = this->_curveD->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(192)
			hx::AddEq(d,tmp16);
			HX_STACK_LINE(193)
			int tmp17 = (i)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(193)
			Float tmp18 = d;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(193)
			Float tmp19 = this->_distance;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(193)
			Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(193)
			this->_curveT[tmp17] = tmp20;
		}
		HX_STACK_LINE(195)
		int tmp12 = this->_numSegs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(195)
		this->_curveT[tmp13] = (int)1;
		HX_STACK_LINE(196)
		this->_curveT->unshift((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(QuadPath_obj,updatePath,(void))

Float QuadPath_obj::getCurveLength( ::flixel::math::FlxPoint start,::flixel::math::FlxPoint control,::flixel::math::FlxPoint finish){
	HX_STACK_FRAME("flixel.tweens.motion.QuadPath","getCurveLength",0x2a112e3d,"flixel.tweens.motion.QuadPath.getCurveLength","flixel/tweens/motion/QuadPath.hx",200,0x562bb60d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(control,"control")
	HX_STACK_ARG(finish,"finish")
	HX_STACK_LINE(201)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(201)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(201)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(201)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(201)
		point->_inPool = false;
		HX_STACK_LINE(201)
		tmp = point;
	}
	HX_STACK_LINE(201)
	::flixel::math::FlxPoint a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(202)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(202)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(202)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(202)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(202)
		point->_inPool = false;
		HX_STACK_LINE(202)
		tmp1 = point;
	}
	HX_STACK_LINE(202)
	::flixel::math::FlxPoint b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(204)
	Float tmp2 = start->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	Float tmp3 = ((int)2 * control->x);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(204)
	Float tmp5 = finish->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(204)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(204)
	a->set_x(tmp6);
	HX_STACK_LINE(205)
	Float tmp7 = start->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(205)
	Float tmp8 = ((int)2 * control->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(205)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(205)
	Float tmp10 = finish->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(205)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(205)
	a->set_y(tmp11);
	HX_STACK_LINE(206)
	Float tmp12 = ((int)2 * control->x);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(206)
	Float tmp13 = ((int)2 * start->x);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(206)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(206)
	b->set_x(tmp14);
	HX_STACK_LINE(207)
	Float tmp15 = ((int)2 * control->y);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(207)
	Float tmp16 = ((int)2 * start->y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(207)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(207)
	b->set_y(tmp17);
	HX_STACK_LINE(208)
	Float tmp18 = (a->x * a->x);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(208)
	Float tmp19 = (a->y * a->y);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(208)
	Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(208)
	Float tmp21 = ((int)4 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(208)
	Float A = tmp21;		HX_STACK_VAR(A,"A");
	HX_STACK_LINE(209)
	Float tmp22 = (a->x * b->x);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(209)
	Float tmp23 = (a->y * b->y);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(209)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(209)
	Float tmp25 = ((int)4 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(209)
	Float B = tmp25;		HX_STACK_VAR(B,"B");
	HX_STACK_LINE(210)
	Float tmp26 = (b->x * b->x);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(210)
	Float tmp27 = (b->y * b->y);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(210)
	Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(210)
	Float C = tmp28;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(211)
	Float tmp29 = (A + B);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(211)
	Float tmp30 = C;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(211)
	Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(211)
	Float tmp32 = ::Math_obj::sqrt(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(211)
	Float tmp33 = ((int)2 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(211)
	Float ABC = tmp33;		HX_STACK_VAR(ABC,"ABC");
	HX_STACK_LINE(212)
	Float tmp34 = A;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(212)
	Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(212)
	Float A2 = tmp35;		HX_STACK_VAR(A2,"A2");
	HX_STACK_LINE(213)
	Float tmp36 = ((int)2 * A);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(213)
	Float tmp37 = A2;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(213)
	Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(213)
	Float A32 = tmp38;		HX_STACK_VAR(A32,"A32");
	HX_STACK_LINE(214)
	Float tmp39 = C;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(214)
	Float tmp40 = ::Math_obj::sqrt(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(214)
	Float tmp41 = ((int)2 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(214)
	Float C2 = tmp41;		HX_STACK_VAR(C2,"C2");
	HX_STACK_LINE(215)
	Float tmp42 = (Float(B) / Float(A2));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(215)
	Float BA = tmp42;		HX_STACK_VAR(BA,"BA");
	HX_STACK_LINE(217)
	a->put();
	HX_STACK_LINE(218)
	b->put();
	HX_STACK_LINE(220)
	Float tmp43 = (A32 * ABC);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(220)
	Float tmp44 = (A2 * B);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(220)
	Float tmp45 = (ABC - C2);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(220)
	Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(220)
	Float tmp47 = (tmp43 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(220)
	Float tmp48 = ((int)4 * C);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(220)
	Float tmp49 = A;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(220)
	Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(220)
	Float tmp51 = (B * B);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(220)
	Float tmp52 = (tmp50 - tmp51);		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(220)
	Float tmp53 = ((int)2 * A2);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(220)
	Float tmp54 = BA;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(220)
	Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(220)
	Float tmp56 = ABC;		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(220)
	Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(220)
	Float tmp58 = (BA + C2);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(220)
	Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(220)
	Float tmp60 = ::Math_obj::log(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(220)
	Float tmp61 = (tmp52 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(220)
	Float tmp62 = (tmp47 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(220)
	Float tmp63 = ((int)4 * A32);		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(220)
	Float tmp64 = (Float(tmp62) / Float(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(220)
	return tmp64;
}


HX_DEFINE_DYNAMIC_FUNC3(QuadPath_obj,getCurveLength,return )


QuadPath_obj::QuadPath_obj()
{
}

void QuadPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuadPath);
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_distance,"_distance");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_numSegs,"_numSegs");
	HX_MARK_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_MARK_MEMBER_NAME(_curveT,"_curveT");
	HX_MARK_MEMBER_NAME(_curveD,"_curveD");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(_b,"_b");
	HX_MARK_MEMBER_NAME(_c,"_c");
	::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QuadPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_distance,"_distance");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_numSegs,"_numSegs");
	HX_VISIT_MEMBER_NAME(_updateCurve,"_updateCurve");
	HX_VISIT_MEMBER_NAME(_curveT,"_curveT");
	HX_VISIT_MEMBER_NAME(_curveD,"_curveD");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(_b,"_b");
	HX_VISIT_MEMBER_NAME(_c,"_c");
	::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QuadPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { return _a; }
		if (HX_FIELD_EQ(inName,"_b") ) { return _b; }
		if (HX_FIELD_EQ(inName,"_c") ) { return _c; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"_curveT") ) { return _curveT; }
		if (HX_FIELD_EQ(inName,"_curveD") ) { return _curveD; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { return _numSegs; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { return _distance; }
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updatePath") ) { return updatePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { return _updateCurve; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCurveLength") ) { return getCurveLength_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_b") ) { _b=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_c") ) { _c=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveT") ) { _curveT=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curveD") ) { _curveD=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_numSegs") ) { _numSegs=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_distance") ) { _distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_updateCurve") ) { _updateCurve=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"));
	outFields->push(HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9"));
	outFields->push(HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99"));
	outFields->push(HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad"));
	outFields->push(HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad"));
	outFields->push(HX_HCSTRING("_a","\x22","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_b","\x23","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_c","\x24","\x53","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(QuadPath_obj,_points),HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65")},
	{hx::fsFloat,(int)offsetof(QuadPath_obj,_distance),HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3")},
	{hx::fsFloat,(int)offsetof(QuadPath_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsInt,(int)offsetof(QuadPath_obj,_index),HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9")},
	{hx::fsInt,(int)offsetof(QuadPath_obj,_numSegs),HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9")},
	{hx::fsBool,(int)offsetof(QuadPath_obj,_updateCurve),HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(QuadPath_obj,_curveT),HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(QuadPath_obj,_curveD),HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_a),HX_HCSTRING("_a","\x22","\x53","\x00","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_b),HX_HCSTRING("_b","\x23","\x53","\x00","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(QuadPath_obj,_c),HX_HCSTRING("_c","\x24","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"),
	HX_HCSTRING("_distance","\x94","\x8a","\x8f","\xb3"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("_numSegs","\x25","\x86","\x89","\xd9"),
	HX_HCSTRING("_updateCurve","\xe7","\x63","\xfa","\x99"),
	HX_HCSTRING("_curveT","\x64","\xde","\x61","\xad"),
	HX_HCSTRING("_curveD","\x54","\xde","\x61","\xad"),
	HX_HCSTRING("_a","\x22","\x53","\x00","\x00"),
	HX_HCSTRING("_b","\x23","\x53","\x00","\x00"),
	HX_HCSTRING("_c","\x24","\x53","\x00","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updatePath","\x4e","\xd0","\x06","\x03"),
	HX_HCSTRING("getCurveLength","\xff","\xd5","\xff","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadPath_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadPath_obj::__mClass;

void QuadPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.QuadPath","\x70","\x9a","\x74","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadPath_obj >;
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
