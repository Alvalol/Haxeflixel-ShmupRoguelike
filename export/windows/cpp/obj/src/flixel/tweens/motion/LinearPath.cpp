#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
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

Void LinearPath_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.LinearPath","new",0x6d0ffb80,"flixel.tweens.motion.LinearPath.new","flixel/tweens/motion/LinearPath.hx",10,0x519b896f)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(23)
	this->_index = (int)0;
	HX_STACK_LINE(22)
	this->_speed = ((Float)0);
	HX_STACK_LINE(15)
	this->distance = ((Float)0);
	HX_STACK_LINE(32)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	super::__construct(tmp);
	HX_STACK_LINE(34)
	this->points = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(35)
	this->_pointD = Array_obj< Float >::__new().Add((int)0);
	HX_STACK_LINE(36)
	this->_pointT = Array_obj< Float >::__new().Add((int)0);
}
;
	return null();
}

//LinearPath_obj::~LinearPath_obj() { }

Dynamic LinearPath_obj::__CreateEmpty() { return  new LinearPath_obj; }
hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new(Dynamic Options)
{  hx::ObjectPtr< LinearPath_obj > _result_ = new LinearPath_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic LinearPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearPath_obj > _result_ = new LinearPath_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void LinearPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","destroy",0x4706681a,"flixel.tweens.motion.LinearPath.destroy","flixel/tweens/motion/LinearPath.hx",40,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->super::destroy();
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			Array< ::Dynamic > _g1 = this->points;		HX_STACK_VAR(_g1,"_g1");
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
		::flixel::math::FlxPoint tmp = this->_last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		this->_last = tmp1;
		HX_STACK_LINE(48)
		::flixel::math::FlxPoint tmp2 = this->_prevPoint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		this->_prevPoint = tmp3;
		HX_STACK_LINE(49)
		::flixel::math::FlxPoint tmp4 = this->_nextPoint;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		this->_nextPoint = tmp5;
	}
return null();
}


::flixel::tweens::motion::LinearPath LinearPath_obj::setMotion( Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","setMotion",0x1a623e98,"flixel.tweens.motion.LinearPath.setMotion","flixel/tweens/motion/LinearPath.hx",59,0x519b896f)
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
			Float tmp1 = this->distance;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			Float tmp2 = DurationOrSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			this->_speed = tmp3;
		}
		else{
			HX_STACK_LINE(69)
			Float tmp1 = this->distance;		HX_STACK_VAR(tmp1,"tmp1");
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
		hx::TCast< ::flixel::tweens::motion::LinearPath >::cast(this->start());
		HX_STACK_LINE(74)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,setMotion,return )

::flixel::tweens::motion::LinearPath LinearPath_obj::addPoint( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","addPoint",0x4da05b4f,"flixel.tweens.motion.LinearPath.addPoint","flixel/tweens/motion/LinearPath.hx",78,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(79)
		::flixel::math::FlxPoint tmp = this->_last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(81)
			Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			::flixel::math::FlxPoint tmp3 = this->_last;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			::flixel::math::FlxPoint tmp7 = this->_last;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			Float tmp10 = (tmp5 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			::flixel::math::FlxPoint tmp12 = this->_last;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(81)
			::flixel::math::FlxPoint tmp16 = this->_last;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(81)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(81)
			Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(81)
			Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(81)
			Float tmp20 = (tmp10 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(81)
			Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(81)
			hx::AddEq(this->distance,tmp21);
			HX_STACK_LINE(82)
			int tmp22 = this->points->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(82)
			Float tmp23 = this->distance;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(82)
			this->_pointD[tmp22] = tmp23;
		}
		HX_STACK_LINE(84)
		int tmp2 = this->points->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(84)
			point->_inPool = false;
			HX_STACK_LINE(84)
			tmp3 = point;
		}
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp4 = this->_last = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		this->points[tmp2] = tmp4;
		HX_STACK_LINE(85)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,addPoint,return )

::flixel::math::FlxPoint LinearPath_obj::getPoint( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","getPoint",0x341a44ba,"flixel.tweens.motion.LinearPath.getPoint","flixel/tweens/motion/LinearPath.hx",89,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(90)
		int tmp = this->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		if ((tmp1)){
			HX_STACK_LINE(92)
			HX_STACK_DO_THROW(HX_HCSTRING("No points have been added to the path yet.","\xc7","\xa0","\x28","\x83"));
		}
		HX_STACK_LINE(94)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		int tmp3 = this->points->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		int tmp4 = hx::Mod(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp5 = this->points->__get(tmp4).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(LinearPath_obj,getPoint,return )

::flixel::tweens::FlxTween LinearPath_obj::start( ){
	HX_STACK_FRAME("flixel.tweens.motion.LinearPath","start",0xb880a782,"flixel.tweens.motion.LinearPath.start","flixel/tweens/motion/LinearPath.hx",98,0x519b896f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	bool tmp = this->backward;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(99)
		int tmp2 = this->points->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		tmp1 = (tmp2 - (int)1);
	}
	else{
		HX_STACK_LINE(99)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(99)
	this->_index = tmp1;
	HX_STACK_LINE(100)
	this->super::start();
	HX_STACK_LINE(101)
	return hx::ObjectPtr<OBJ_>(this);
}


Void LinearPath_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","update",0x391d0ee9,"flixel.tweens.motion.LinearPath.update","flixel/tweens/motion/LinearPath.hx",105,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(106)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		this->super::update(tmp);
		HX_STACK_LINE(107)
		Float td;		HX_STACK_VAR(td,"td");
		HX_STACK_LINE(108)
		Float tt;		HX_STACK_VAR(tt,"tt");
		HX_STACK_LINE(110)
		bool tmp1 = (this->points == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		if ((tmp1)){
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(113)
		bool tmp2 = this->backward;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(115)
			int tmp4 = this->_index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			int tmp5 = this->points->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			if ((tmp7)){
				HX_STACK_LINE(117)
				while((true)){
					HX_STACK_LINE(117)
					Float tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(117)
					int tmp9 = this->_index;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(117)
					int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(117)
					Float tmp11 = this->_pointT->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(117)
					bool tmp12 = (tmp8 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(117)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(117)
					if ((tmp13)){
						HX_STACK_LINE(117)
						break;
					}
					HX_STACK_LINE(119)
					(this->_index)++;
					HX_STACK_LINE(120)
					int tmp14 = this->_index;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(120)
					int tmp15 = this->points->length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(120)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(120)
					bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(120)
					if ((tmp17)){
						HX_STACK_LINE(122)
						hx::SubEq(this->_index,(int)1);
						HX_STACK_LINE(123)
						break;
					}
				}
			}
			HX_STACK_LINE(128)
			int tmp8 = this->_index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			Float tmp9 = this->_pointT->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			td = tmp9;
			HX_STACK_LINE(129)
			int tmp10 = this->_index;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			Float tmp12 = this->_pointT->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			Float tmp13 = td;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			tt = tmp14;
			HX_STACK_LINE(130)
			Float tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(130)
			Float tmp16 = td;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(130)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			Float tmp18 = tt;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(130)
			td = tmp19;
			HX_STACK_LINE(131)
			int tmp20 = this->_index;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			::flixel::math::FlxPoint tmp21 = this->points->__get(tmp20).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			this->_prevPoint = tmp21;
			HX_STACK_LINE(132)
			int tmp22 = this->_index;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(132)
			::flixel::math::FlxPoint tmp24 = this->points->__get(tmp23).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(132)
			this->_nextPoint = tmp24;
			HX_STACK_LINE(133)
			::flixel::math::FlxPoint tmp25 = this->_prevPoint;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(133)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(133)
			::flixel::math::FlxPoint tmp27 = this->_nextPoint;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(133)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(133)
			::flixel::math::FlxPoint tmp29 = this->_prevPoint;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(133)
			Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(133)
			Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(133)
			Float tmp32 = td;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(133)
			Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(133)
			Float tmp34 = (tmp26 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(133)
			this->x = tmp34;
			HX_STACK_LINE(134)
			::flixel::math::FlxPoint tmp35 = this->_prevPoint;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(134)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(134)
			::flixel::math::FlxPoint tmp37 = this->_nextPoint;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(134)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(134)
			::flixel::math::FlxPoint tmp39 = this->_prevPoint;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(134)
			Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(134)
			Float tmp41 = (tmp38 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(134)
			Float tmp42 = td;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(134)
			Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(134)
			Float tmp44 = (tmp36 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(134)
			this->y = tmp44;
		}
		else{
			HX_STACK_LINE(138)
			int tmp4 = this->_index;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			if ((tmp5)){
				HX_STACK_LINE(140)
				while((true)){
					HX_STACK_LINE(140)
					Float tmp6 = this->scale;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(140)
					int tmp7 = this->_index;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					Float tmp9 = this->_pointT->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					bool tmp10 = (tmp6 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(140)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(140)
					if ((tmp11)){
						HX_STACK_LINE(140)
						break;
					}
					HX_STACK_LINE(142)
					hx::SubEq(this->_index,(int)1);
					HX_STACK_LINE(143)
					int tmp12 = this->_index;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(143)
					if ((tmp13)){
						HX_STACK_LINE(145)
						hx::AddEq(this->_index,(int)1);
						HX_STACK_LINE(146)
						break;
					}
				}
			}
			HX_STACK_LINE(151)
			int tmp6 = this->_index;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			Float tmp7 = this->_pointT->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			td = tmp7;
			HX_STACK_LINE(152)
			int tmp8 = this->_index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			Float tmp10 = this->_pointT->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(152)
			Float tmp11 = td;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(152)
			Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(152)
			tt = tmp12;
			HX_STACK_LINE(153)
			Float tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(153)
			Float tmp14 = td;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(153)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(153)
			Float tmp16 = tt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(153)
			Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(153)
			td = tmp17;
			HX_STACK_LINE(154)
			int tmp18 = this->_index;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			::flixel::math::FlxPoint tmp19 = this->points->__get(tmp18).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(154)
			this->_prevPoint = tmp19;
			HX_STACK_LINE(155)
			int tmp20 = this->_index;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(155)
			int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(155)
			::flixel::math::FlxPoint tmp22 = this->points->__get(tmp21).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(155)
			this->_nextPoint = tmp22;
			HX_STACK_LINE(156)
			::flixel::math::FlxPoint tmp23 = this->_prevPoint;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(156)
			Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(156)
			::flixel::math::FlxPoint tmp25 = this->_nextPoint;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(156)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(156)
			::flixel::math::FlxPoint tmp27 = this->_prevPoint;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(156)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(156)
			Float tmp29 = (tmp26 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(156)
			Float tmp30 = td;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(156)
			Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(156)
			Float tmp32 = (tmp24 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(156)
			this->x = tmp32;
			HX_STACK_LINE(157)
			::flixel::math::FlxPoint tmp33 = this->_prevPoint;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(157)
			Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(157)
			::flixel::math::FlxPoint tmp35 = this->_nextPoint;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(157)
			Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(157)
			::flixel::math::FlxPoint tmp37 = this->_prevPoint;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(157)
			Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(157)
			Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(157)
			Float tmp40 = td;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(157)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(157)
			Float tmp42 = (tmp34 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(157)
			this->y = tmp42;
		}
		HX_STACK_LINE(160)
		this->super::postUpdate();
	}
return null();
}


Void LinearPath_obj::updatePath( ){
{
		HX_STACK_FRAME("flixel.tweens.motion.LinearPath","updatePath",0x8544492e,"flixel.tweens.motion.LinearPath.updatePath","flixel/tweens/motion/LinearPath.hx",167,0x519b896f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		int tmp = this->points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		bool tmp1 = (tmp < (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		if ((tmp1)){
			HX_STACK_LINE(168)
			HX_STACK_DO_THROW(HX_HCSTRING("A LinearPath must have at least 2 points to operate.","\x6c","\x59","\x79","\xaf"));
		}
		HX_STACK_LINE(169)
		int tmp2 = this->_pointD->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		int tmp3 = this->_pointT->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		if ((tmp4)){
			HX_STACK_LINE(169)
			return null();
		}
		HX_STACK_LINE(171)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			int tmp6 = this->points->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			if ((tmp8)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(174)
			int tmp9 = (i)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			Float tmp10 = this->_pointD->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			Float tmp11 = this->distance;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			this->_pointT[i] = tmp12;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LinearPath_obj,updatePath,(void))


LinearPath_obj::LinearPath_obj()
{
}

void LinearPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearPath);
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(_pointD,"_pointD");
	HX_MARK_MEMBER_NAME(_pointT,"_pointT");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_MARK_MEMBER_NAME(_nextPoint,"_nextPoint");
	::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(_pointD,"_pointD");
	HX_VISIT_MEMBER_NAME(_pointT,"_pointT");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_VISIT_MEMBER_NAME(_nextPoint,"_nextPoint");
	::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LinearPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { return _pointD; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { return _pointT; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return getPoint_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { return _prevPoint; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { return _nextPoint; }
		if (HX_FIELD_EQ(inName,"updatePath") ) { return updatePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { _pointD=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { _pointT=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { _prevPoint=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { _nextPoint=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("_pointD","\x93","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_pointT","\xa3","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"));
	outFields->push(HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"));
	outFields->push(HX_HCSTRING("_prevPoint","\x1e","\xd0","\x88","\x0d"));
	outFields->push(HX_HCSTRING("_nextPoint","\x1e","\x4a","\x77","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LinearPath_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LinearPath_obj,points),HX_HCSTRING("points","\x23","\x12","\x2e","\xf7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LinearPath_obj,_pointD),HX_HCSTRING("_pointD","\x93","\x23","\xa5","\x65")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LinearPath_obj,_pointT),HX_HCSTRING("_pointT","\xa3","\x23","\xa5","\x65")},
	{hx::fsFloat,(int)offsetof(LinearPath_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsInt,(int)offsetof(LinearPath_obj,_index),HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_last),HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_prevPoint),HX_HCSTRING("_prevPoint","\x1e","\xd0","\x88","\x0d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(LinearPath_obj,_nextPoint),HX_HCSTRING("_nextPoint","\x1e","\x4a","\x77","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"),
	HX_HCSTRING("_pointD","\x93","\x23","\xa5","\x65"),
	HX_HCSTRING("_pointT","\xa3","\x23","\xa5","\x65"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_prevPoint","\x1e","\xd0","\x88","\x0d"),
	HX_HCSTRING("_nextPoint","\x1e","\x4a","\x77","\xc9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("addPoint","\x6f","\xda","\xec","\x3f"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updatePath","\x4e","\xd0","\x06","\x03"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#endif

hx::Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.LinearPath","\x8e","\x7b","\x14","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LinearPath_obj >;
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
