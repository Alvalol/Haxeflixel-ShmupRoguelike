#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
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
namespace math{

Void FlxVelocity_obj::__construct()
{
	return null();
}

//FlxVelocity_obj::~FlxVelocity_obj() { }

Dynamic FlxVelocity_obj::__CreateEmpty() { return  new FlxVelocity_obj; }
hx::ObjectPtr< FlxVelocity_obj > FlxVelocity_obj::__new()
{  hx::ObjectPtr< FlxVelocity_obj > _result_ = new FlxVelocity_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxVelocity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVelocity_obj > _result_ = new FlxVelocity_obj();
	_result_->__construct();
	return _result_;}

Void FlxVelocity_obj::moveTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsObject",0xaf722b77,"flixel.math.FlxVelocity.moveTowardsObject","flixel/math/FlxVelocity.hx",25,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Dest,"Dest")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(26)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(26)
			Float tmp1 = Dest->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(26)
			Float tmp2 = Dest->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(26)
			Float tmp8 = Dest->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(26)
			Float tmp9 = Dest->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(26)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(26)
			Float tmp11 = Source->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(26)
			Float tmp12 = Source->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(26)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(26)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(26)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(26)
			bool tmp15 = AsDegrees;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(26)
			if ((tmp15)){
				HX_STACK_LINE(26)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(26)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(26)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(26)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(26)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(26)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(26)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(26)
				tmp = (tmp19 * tmp21);
			}
			else{
				HX_STACK_LINE(26)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(26)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(26)
				tmp = ::Math_obj::atan2(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(26)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(28)
		bool tmp1 = (MaxTime > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		if ((tmp1)){
			HX_STACK_LINE(30)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				Float tmp3 = Source->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(30)
				Float tmp4 = Source->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(30)
				Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(30)
				Float tmp6 = Dest->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(30)
				Float tmp7 = Dest->origin->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(30)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(30)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(30)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(30)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(30)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(30)
				Float tmp13 = Dest->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(30)
				Float tmp14 = Dest->origin->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(30)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(30)
				Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(30)
				Float dy = tmp16;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(30)
				Float tmp17 = (dx * dx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(30)
				Float tmp18 = (dy * dy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(30)
				Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(30)
				Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(30)
				tmp2 = ::Std_obj::_int(tmp20);
			}
			HX_STACK_LINE(30)
			int d = tmp2;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(33)
			int tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			Float tmp4 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			Speed = tmp6;
		}
		HX_STACK_LINE(36)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		Source->velocity->set_x(tmp5);
		HX_STACK_LINE(37)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		Source->velocity->set_y(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsObject,(void))

Void FlxVelocity_obj::accelerateTowardsObject( ::flixel::FlxSprite Source,::flixel::FlxSprite Dest,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsObject",0x1ebf81eb,"flixel.math.FlxVelocity.accelerateTowardsObject","flixel/math/FlxVelocity.hx",51,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Dest,"Dest")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(52)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
			HX_STACK_LINE(52)
			Float tmp1 = Dest->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			Float tmp2 = Dest->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			Float dx = tmp7;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(52)
			Float tmp8 = Dest->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			Float tmp9 = Dest->origin->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			Float tmp11 = Source->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			Float tmp12 = Source->origin->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(52)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(52)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(52)
			bool tmp15 = AsDegrees;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			if ((tmp15)){
				HX_STACK_LINE(52)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(52)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(52)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(52)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(52)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(52)
				tmp = (tmp19 * tmp21);
			}
			else{
				HX_STACK_LINE(52)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				tmp = ::Math_obj::atan2(tmp16,tmp17);
			}
		}
		HX_STACK_LINE(52)
		Float a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(53)
			Float tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			Float tmp2 = ::Math_obj::sin(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			Float sin = tmp2;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(53)
			Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Float cos = tmp4;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(53)
			bool tmp5 = resetVelocity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			if ((tmp5)){
				HX_STACK_LINE(53)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(53)
			Float tmp6 = (cos * Acceleration);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			Float tmp7 = (sin * Acceleration);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			Source->acceleration->set(tmp6,tmp7);
			HX_STACK_LINE(53)
			Float tmp8 = (cos * MaxSpeed);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(53)
			Float tmp9 = (sin * MaxSpeed);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			Source->maxVelocity->set(tmp8,tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsObject,(void))

Void FlxVelocity_obj::moveTowardsMouse( ::flixel::FlxSprite Source,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsMouse",0x58da686d,"flixel.math.FlxVelocity.moveTowardsMouse","flixel/math/FlxVelocity.hx",68,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(69)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		Float tmp1 = ::flixel::math::FlxAngle_obj::angleBetweenMouse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(71)
		bool tmp2 = (MaxTime > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(73)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				Float tmp4 = Source->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				Float tmp5 = Source->origin->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				::flixel::input::mouse::FlxMouse tmp7 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				int tmp8 = tmp7->screenX;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(73)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(73)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				::flixel::input::mouse::FlxMouse tmp13 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				int tmp14 = tmp13->screenY;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				Float dy = tmp15;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(73)
				Float tmp16 = (dx * dx);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				Float tmp17 = (dy * dy);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(73)
				Float tmp19 = ::Math_obj::sqrt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(73)
				tmp3 = ::Std_obj::_int(tmp19);
			}
			HX_STACK_LINE(73)
			int d = tmp3;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(76)
			int tmp4 = d;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			Float tmp5 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			Speed = tmp7;
		}
		HX_STACK_LINE(79)
		Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		Float tmp5 = Speed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		Source->velocity->set_x(tmp6);
		HX_STACK_LINE(80)
		Float tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(80)
		Float tmp9 = Speed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		Source->velocity->set_y(tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,moveTowardsMouse,(void))

Void FlxVelocity_obj::accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsMouse",0x2dba9c79,"flixel.math.FlxVelocity.accelerateTowardsMouse","flixel/math/FlxVelocity.hx",123,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(124)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		Float tmp1 = ::flixel::math::FlxAngle_obj::angleBetweenMouse(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Float a = tmp1;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(126)
			Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			Float sin = tmp3;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(126)
			Float tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			Float cos = tmp5;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(126)
			bool tmp6 = resetVelocity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			if ((tmp6)){
				HX_STACK_LINE(126)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(126)
			Float tmp7 = (cos * Acceleration);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			Float tmp8 = (sin * Acceleration);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			Source->acceleration->set(tmp7,tmp8);
			HX_STACK_LINE(126)
			Float tmp9 = (cos * MaxSpeed);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			Float tmp10 = (sin * MaxSpeed);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(126)
			Source->maxVelocity->set(tmp9,tmp10);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxVelocity_obj,accelerateTowardsMouse,(void))

Void FlxVelocity_obj::moveTowardsPoint( ::flixel::FlxSprite Source,::flixel::math::FlxPoint Target,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_MaxTime){
Float Speed = __o_Speed.Default(60);
int MaxTime = __o_MaxTime.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVelocity","moveTowardsPoint",0x13050698,"flixel.math.FlxVelocity.moveTowardsPoint","flixel/math/FlxVelocity.hx",161,0xbea30ec3)
	HX_STACK_ARG(Source,"Source")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(MaxTime,"MaxTime")
{
		HX_STACK_LINE(162)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::flixel::math::FlxPoint tmp1 = Target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		Float tmp2 = ::flixel::math::FlxAngle_obj::angleBetweenPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(164)
		bool tmp3 = (MaxTime > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		if ((tmp3)){
			HX_STACK_LINE(166)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			{
				HX_STACK_LINE(166)
				Float tmp5 = Source->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				Float tmp6 = Source->origin->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				Float tmp8 = Target->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(166)
				Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(166)
				Float tmp10 = Source->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(166)
				Float tmp11 = Source->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(166)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(166)
				Float tmp13 = Target->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(166)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(166)
				Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					bool tmp15 = Target->_weak;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(166)
					if ((tmp15)){
						HX_STACK_LINE(166)
						Target->put();
					}
				}
				HX_STACK_LINE(166)
				Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(166)
				Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(166)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(166)
				Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(166)
				tmp4 = ::Std_obj::_int(tmp18);
			}
			HX_STACK_LINE(166)
			int d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(169)
			int tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			Float tmp6 = (Float(MaxTime) / Float((int)1000));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			Speed = tmp8;
		}
		HX_STACK_LINE(172)
		Float tmp4 = a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		Float tmp6 = Speed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		Source->velocity->set_x(tmp7);
		HX_STACK_LINE(173)
		Float tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		Float tmp10 = Speed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(173)
		Source->velocity->set_y(tmp11);
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			bool tmp12 = Target->_weak;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(175)
			if ((tmp12)){
				HX_STACK_LINE(175)
				Target->put();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,moveTowardsPoint,(void))

Void FlxVelocity_obj::accelerateTowardsPoint( ::flixel::FlxSprite Source,::flixel::math::FlxPoint Target,Float Acceleration,Float MaxSpeed){
{
		HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateTowardsPoint",0xe7e53aa4,"flixel.math.FlxVelocity.accelerateTowardsPoint","flixel/math/FlxVelocity.hx",189,0xbea30ec3)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Acceleration,"Acceleration")
		HX_STACK_ARG(MaxSpeed,"MaxSpeed")
		HX_STACK_LINE(190)
		::flixel::FlxSprite tmp = Source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::flixel::math::FlxPoint tmp1 = Target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		Float tmp2 = ::flixel::math::FlxAngle_obj::angleBetweenPoint(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			bool resetVelocity = true;		HX_STACK_VAR(resetVelocity,"resetVelocity");
			HX_STACK_LINE(192)
			Float tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			Float sin = tmp4;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(192)
			Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			Float cos = tmp6;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(192)
			bool tmp7 = resetVelocity;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(192)
			if ((tmp7)){
				HX_STACK_LINE(192)
				Source->velocity->set((int)0,(int)0);
			}
			HX_STACK_LINE(192)
			Float tmp8 = (cos * Acceleration);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			Float tmp9 = (sin * Acceleration);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			Source->acceleration->set(tmp8,tmp9);
			HX_STACK_LINE(192)
			Float tmp10 = (cos * MaxSpeed);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			Float tmp11 = (sin * MaxSpeed);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(192)
			Source->maxVelocity->set(tmp10,tmp11);
		}
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			bool tmp3 = Target->_weak;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			if ((tmp3)){
				HX_STACK_LINE(194)
				Target->put();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxVelocity_obj,accelerateTowardsPoint,(void))

::flixel::math::FlxPoint FlxVelocity_obj::velocityFromAngle( Float Angle,Float Speed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","velocityFromAngle",0x954f2639,"flixel.math.FlxVelocity.velocityFromAngle","flixel/math/FlxVelocity.hx",205,0xbea30ec3)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(206)
	Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	Float a = tmp3;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(208)
	::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	{
		HX_STACK_LINE(208)
		Float tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		Float tmp7 = Speed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		Float X = tmp8;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(208)
		Float tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(208)
		Float tmp10 = ::Math_obj::sin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(208)
		Float tmp11 = Speed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(208)
		Float Y = tmp12;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(208)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(208)
		::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(208)
		Float tmp15 = X;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(208)
		Float tmp16 = Y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(208)
		::flixel::math::FlxPoint tmp17 = tmp14->set(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(208)
		::flixel::math::FlxPoint point = tmp17;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(208)
		point->_inPool = false;
		HX_STACK_LINE(208)
		tmp4 = point;
	}
	HX_STACK_LINE(208)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromAngle,return )

::flixel::math::FlxPoint FlxVelocity_obj::velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","velocityFromFacing",0x90de75f4,"flixel.math.FlxVelocity.velocityFromFacing","flixel/math/FlxVelocity.hx",219,0xbea30ec3)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_LINE(220)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		int FacingBitmask = Parent->facing;		HX_STACK_VAR(FacingBitmask,"FacingBitmask");
		HX_STACK_LINE(220)
		bool AsDegrees = false;		HX_STACK_VAR(AsDegrees,"AsDegrees");
		HX_STACK_LINE(220)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int f = FacingBitmask;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(220)
			int f1 = FacingBitmask;		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(220)
			int f2 = FacingBitmask;		HX_STACK_VAR(f2,"f2");
			HX_STACK_LINE(220)
			int f3 = FacingBitmask;		HX_STACK_VAR(f3,"f3");
			HX_STACK_LINE(220)
			int tmp2 = FacingBitmask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(220)
			switch( (int)(tmp2)){
				case (int)1: {
					HX_STACK_LINE(220)
					tmp1 = (int)180;
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(220)
					tmp1 = (int)0;
				}
				;break;
				case (int)256: {
					HX_STACK_LINE(220)
					tmp1 = (int)-90;
				}
				;break;
				case (int)4096: {
					HX_STACK_LINE(220)
					tmp1 = (int)90;
				}
				;break;
				default: {
					HX_STACK_LINE(220)
					int tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(220)
					int tmp4 = (int)257;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(220)
					bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(220)
					if ((tmp5)){
						HX_STACK_LINE(220)
						tmp1 = (int)-135;
					}
					else{
						HX_STACK_LINE(220)
						int tmp6 = f1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(220)
						int tmp7 = (int)272;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(220)
						bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(220)
						if ((tmp8)){
							HX_STACK_LINE(220)
							tmp1 = (int)-45;
						}
						else{
							HX_STACK_LINE(220)
							int tmp9 = f2;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(220)
							int tmp10 = (int)4097;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(220)
							bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(220)
							if ((tmp11)){
								HX_STACK_LINE(220)
								tmp1 = (int)135;
							}
							else{
								HX_STACK_LINE(220)
								int tmp12 = f3;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(220)
								int tmp13 = (int)4112;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(220)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(220)
								if ((tmp14)){
									HX_STACK_LINE(220)
									tmp1 = (int)45;
								}
								else{
									HX_STACK_LINE(220)
									tmp1 = (int)0;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(220)
		int degrees = tmp1;		HX_STACK_VAR(degrees,"degrees");
		HX_STACK_LINE(220)
		bool tmp2 = AsDegrees;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		if ((tmp2)){
			HX_STACK_LINE(220)
			tmp = degrees;
		}
		else{
			HX_STACK_LINE(220)
			int tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(220)
			Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(220)
			tmp = (tmp3 * tmp5);
		}
	}
	HX_STACK_LINE(220)
	Float a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(221)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	{
		HX_STACK_LINE(221)
		Float tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		Float tmp4 = Speed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Float X = tmp5;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(221)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		Float tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(221)
		Float Y = tmp9;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(221)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp10 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(221)
		Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(221)
		Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(221)
		::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(221)
		point->_inPool = false;
		HX_STACK_LINE(221)
		tmp1 = point;
	}
	HX_STACK_LINE(221)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVelocity_obj,velocityFromFacing,return )

Float FlxVelocity_obj::computeVelocity( Float Velocity,Float Acceleration,Float Drag,Float Max,Float Elapsed){
	HX_STACK_FRAME("flixel.math.FlxVelocity","computeVelocity",0xd7550d81,"flixel.math.FlxVelocity.computeVelocity","flixel/math/FlxVelocity.hx",235,0xbea30ec3)
	HX_STACK_ARG(Velocity,"Velocity")
	HX_STACK_ARG(Acceleration,"Acceleration")
	HX_STACK_ARG(Drag,"Drag")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Elapsed,"Elapsed")
	HX_STACK_LINE(236)
	bool tmp = (Acceleration != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	if ((tmp)){
		HX_STACK_LINE(238)
		Float tmp1 = (Acceleration * Elapsed);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		hx::AddEq(Velocity,tmp1);
	}
	else{
		HX_STACK_LINE(240)
		bool tmp1 = (Drag != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		if ((tmp1)){
			HX_STACK_LINE(242)
			Float tmp2 = (Drag * Elapsed);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			Float drag = tmp2;		HX_STACK_VAR(drag,"drag");
			HX_STACK_LINE(243)
			Float tmp3 = (Velocity - drag);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			if ((tmp4)){
				HX_STACK_LINE(245)
				hx::SubEq(Velocity,drag);
			}
			else{
				HX_STACK_LINE(247)
				Float tmp5 = (Velocity + drag);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(247)
				bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(247)
				if ((tmp6)){
					HX_STACK_LINE(249)
					hx::AddEq(Velocity,drag);
				}
				else{
					HX_STACK_LINE(253)
					Velocity = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(256)
	bool tmp1 = (Velocity != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	if ((tmp1)){
		HX_STACK_LINE(256)
		tmp2 = (Max != (int)0);
	}
	else{
		HX_STACK_LINE(256)
		tmp2 = false;
	}
	HX_STACK_LINE(256)
	if ((tmp2)){
		HX_STACK_LINE(258)
		bool tmp3 = (Velocity > Max);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		if ((tmp3)){
			HX_STACK_LINE(260)
			Velocity = Max;
		}
		else{
			HX_STACK_LINE(262)
			Float tmp4 = Velocity;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			Float tmp5 = Max;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(262)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(262)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(262)
			if ((tmp7)){
				HX_STACK_LINE(264)
				Float tmp8 = Max;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(264)
				Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(264)
				Velocity = tmp9;
			}
		}
	}
	HX_STACK_LINE(267)
	Float tmp3 = Velocity;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(267)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,computeVelocity,return )

Void FlxVelocity_obj::accelerateFromAngle( ::flixel::FlxSprite source,Float radians,Float acceleration,Float maxSpeed,hx::Null< bool >  __o_resetVelocity){
bool resetVelocity = __o_resetVelocity.Default(true);
	HX_STACK_FRAME("flixel.math.FlxVelocity","accelerateFromAngle",0x5b8d48b9,"flixel.math.FlxVelocity.accelerateFromAngle","flixel/math/FlxVelocity.hx",271,0xbea30ec3)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(radians,"radians")
	HX_STACK_ARG(acceleration,"acceleration")
	HX_STACK_ARG(maxSpeed,"maxSpeed")
	HX_STACK_ARG(resetVelocity,"resetVelocity")
{
		HX_STACK_LINE(272)
		Float tmp = radians;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		Float tmp1 = ::Math_obj::sin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		Float sin = tmp1;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(273)
		Float tmp2 = radians;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		Float cos = tmp3;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(275)
		bool tmp4 = resetVelocity;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(275)
		if ((tmp4)){
			HX_STACK_LINE(276)
			source->velocity->set((int)0,(int)0);
		}
		HX_STACK_LINE(278)
		Float tmp5 = (cos * acceleration);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		Float tmp6 = (sin * acceleration);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		source->acceleration->set(tmp5,tmp6);
		HX_STACK_LINE(279)
		Float tmp7 = (cos * maxSpeed);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		Float tmp8 = (sin * maxSpeed);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		source->maxVelocity->set(tmp7,tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxVelocity_obj,accelerateFromAngle,(void))


FlxVelocity_obj::FlxVelocity_obj()
{
}

bool FlxVelocity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"computeVelocity") ) { outValue = computeVelocity_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"moveTowardsMouse") ) { outValue = moveTowardsMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"moveTowardsPoint") ) { outValue = moveTowardsPoint_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"moveTowardsObject") ) { outValue = moveTowardsObject_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"velocityFromAngle") ) { outValue = velocityFromAngle_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"velocityFromFacing") ) { outValue = velocityFromFacing_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"accelerateFromAngle") ) { outValue = accelerateFromAngle_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"accelerateTowardsMouse") ) { outValue = accelerateTowardsMouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"accelerateTowardsPoint") ) { outValue = accelerateTowardsPoint_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"accelerateTowardsObject") ) { outValue = accelerateTowardsObject_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVelocity_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxVelocity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("moveTowardsObject","\x6a","\x65","\x02","\x02"),
	HX_HCSTRING("accelerateTowardsObject","\x1e","\x34","\xa0","\x7d"),
	HX_HCSTRING("moveTowardsMouse","\xda","\xed","\x3e","\xbe"),
	HX_HCSTRING("accelerateTowardsMouse","\xa6","\x71","\x74","\x11"),
	HX_HCSTRING("moveTowardsPoint","\x05","\x8c","\x69","\x78"),
	HX_HCSTRING("accelerateTowardsPoint","\xd1","\x0f","\x9f","\xcb"),
	HX_HCSTRING("velocityFromAngle","\x2c","\x60","\xdf","\xe7"),
	HX_HCSTRING("velocityFromFacing","\xa1","\xf0","\x80","\x7c"),
	HX_HCSTRING("computeVelocity","\xb4","\xd4","\x7e","\xb6"),
	HX_HCSTRING("accelerateFromAngle","\x6c","\x25","\x16","\x9e"),
	::String(null()) };

void FlxVelocity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxVelocity","\x3b","\x6f","\xef","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVelocity_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxVelocity_obj >;
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
} // end namespace math
