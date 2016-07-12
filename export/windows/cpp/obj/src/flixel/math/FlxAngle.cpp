#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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

Void FlxAngle_obj::__construct()
{
	return null();
}

//FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > _result_ = new FlxAngle_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > _result_ = new FlxAngle_obj();
	_result_->__construct();
	return _result_;}

Float FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_FRAME("flixel.math.FlxAngle","wrapAngle",0xae3043f0,"flixel.math.FlxAngle.wrapAngle","flixel/math/FlxAngle.hx",67,0x32e99189)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(68)
	bool tmp = (angle > (int)180);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	if ((tmp)){
		HX_STACK_LINE(70)
		Float tmp1 = (angle - (int)360);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		Float tmp2 = ::flixel::math::FlxAngle_obj::wrapAngle(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		angle = tmp2;
	}
	else{
		HX_STACK_LINE(72)
		bool tmp1 = (angle < (int)-180);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(74)
			Float tmp2 = (angle + (int)360);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			Float tmp3 = ::flixel::math::FlxAngle_obj::wrapAngle(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			angle = tmp3;
		}
	}
	HX_STACK_LINE(77)
	Float tmp1 = angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_FRAME("flixel.math.FlxAngle","asDegrees",0x8ea59f1c,"flixel.math.FlxAngle.asDegrees","flixel/math/FlxAngle.hx",88,0x32e99189)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(89)
	Float tmp = radians;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Float tmp2 = (Float((int)180) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_FRAME("flixel.math.FlxAngle","asRadians",0x7b3b01e7,"flixel.math.FlxAngle.asRadians","flixel/math/FlxAngle.hx",100,0x32e99189)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(101)
	Float tmp = degrees;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetween",0x83e3464e,"flixel.math.FlxAngle.angleBetween","flixel/math/FlxAngle.hx",114,0x32e99189)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(115)
		Float tmp = SpriteB->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		Float tmp1 = SpriteB->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		Float tmp3 = SpriteA->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		Float tmp4 = SpriteA->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(116)
		Float tmp7 = SpriteB->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		Float tmp8 = SpriteB->origin->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(116)
		Float tmp10 = SpriteA->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(116)
		Float tmp11 = SpriteA->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(116)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(116)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(116)
		Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(118)
		bool tmp14 = AsDegrees;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		if ((tmp14)){
			HX_STACK_LINE(119)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				Float tmp16 = dy;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(119)
				Float tmp17 = dx;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(119)
				Float tmp18 = ::Math_obj::atan2(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(119)
				Float radians = tmp18;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(119)
				Float tmp19 = radians;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(119)
				Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(119)
				Float tmp21 = (Float((int)180) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(119)
				tmp15 = (tmp19 * tmp21);
			}
			HX_STACK_LINE(119)
			return tmp15;
		}
		else{
			HX_STACK_LINE(121)
			Float tmp15 = dy;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(121)
			Float tmp16 = dx;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(121)
			Float tmp17 = ::Math_obj::atan2(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			return tmp17;
		}
		HX_STACK_LINE(118)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenPoint",0x0a124322,"flixel.math.FlxAngle.angleBetweenPoint","flixel/math/FlxAngle.hx",134,0x32e99189)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(135)
		Float tmp = Target->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Float tmp1 = Sprite->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		Float tmp2 = Sprite->origin->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		Float tmp4 = (tmp - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(136)
		Float tmp5 = Target->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		Float tmp6 = Sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		Float tmp7 = Sprite->origin->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(136)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(136)
		Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(136)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			bool tmp10 = Target->_weak;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(138)
			if ((tmp10)){
				HX_STACK_LINE(138)
				Target->put();
			}
		}
		HX_STACK_LINE(140)
		bool tmp10 = AsDegrees;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		if ((tmp10)){
			HX_STACK_LINE(141)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				Float tmp12 = dy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(141)
				Float tmp13 = dx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(141)
				Float tmp14 = ::Math_obj::atan2(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(141)
				Float radians = tmp14;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(141)
				Float tmp15 = radians;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(141)
				Float tmp17 = (Float((int)180) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(141)
				tmp11 = (tmp15 * tmp17);
			}
			HX_STACK_LINE(141)
			return tmp11;
		}
		else{
			HX_STACK_LINE(143)
			Float tmp11 = dy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			Float tmp12 = dx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(143)
			Float tmp13 = ::Math_obj::atan2(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			return tmp13;
		}
		HX_STACK_LINE(140)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenMouse",0x4fe7a4f7,"flixel.math.FlxAngle.angleBetweenMouse","flixel/math/FlxAngle.hx",156,0x32e99189)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(158)
		bool tmp = (Object == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		if ((tmp)){
			HX_STACK_LINE(159)
			return (int)0;
		}
		HX_STACK_LINE(161)
		::flixel::math::FlxPoint tmp1 = Object->getScreenPosition(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		::flixel::math::FlxPoint p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(163)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		int tmp3 = tmp2->screenX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		Float tmp4 = p->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(163)
		Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(164)
		::flixel::input::mouse::FlxMouse tmp6 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		int tmp7 = tmp6->screenY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		Float tmp8 = p->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(166)
		p->put();
		HX_STACK_LINE(168)
		bool tmp10 = AsDegrees;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(168)
		if ((tmp10)){
			HX_STACK_LINE(169)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				Float tmp12 = dy;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(169)
				Float tmp13 = dx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(169)
				Float tmp14 = ::Math_obj::atan2(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(169)
				Float radians = tmp14;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(169)
				Float tmp15 = radians;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(169)
				Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(169)
				Float tmp17 = (Float((int)180) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(169)
				tmp11 = (tmp15 * tmp17);
			}
			HX_STACK_LINE(169)
			return tmp11;
		}
		else{
			HX_STACK_LINE(171)
			Float tmp11 = dy;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(171)
			Float tmp12 = dx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(171)
			Float tmp13 = ::Math_obj::atan2(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(171)
			return tmp13;
		}
		HX_STACK_LINE(168)
		return ((Float)0.);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleFromFacing( int FacingBitmask,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleFromFacing",0x8474a75e,"flixel.math.FlxAngle.angleFromFacing","flixel/math/FlxAngle.hx",210,0x32e99189)
	HX_STACK_ARG(FacingBitmask,"FacingBitmask")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(211)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			int f = FacingBitmask;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(211)
			int f1 = FacingBitmask;		HX_STACK_VAR(f1,"f1");
			HX_STACK_LINE(211)
			int f2 = FacingBitmask;		HX_STACK_VAR(f2,"f2");
			HX_STACK_LINE(211)
			int f3 = FacingBitmask;		HX_STACK_VAR(f3,"f3");
			HX_STACK_LINE(211)
			int tmp1 = FacingBitmask;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			switch( (int)(tmp1)){
				case (int)1: {
					HX_STACK_LINE(213)
					tmp = (int)180;
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(214)
					tmp = (int)0;
				}
				;break;
				case (int)256: {
					HX_STACK_LINE(215)
					tmp = (int)-90;
				}
				;break;
				case (int)4096: {
					HX_STACK_LINE(216)
					tmp = (int)90;
				}
				;break;
				default: {
					HX_STACK_LINE(217)
					int tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(217)
					int tmp3 = (int)257;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(217)
					bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(217)
					if ((tmp4)){
						HX_STACK_LINE(217)
						tmp = (int)-135;
					}
					else{
						HX_STACK_LINE(218)
						int tmp5 = f1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(218)
						int tmp6 = (int)272;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(218)
						bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(218)
						if ((tmp7)){
							HX_STACK_LINE(218)
							tmp = (int)-45;
						}
						else{
							HX_STACK_LINE(219)
							int tmp8 = f2;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(219)
							int tmp9 = (int)4097;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(219)
							bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(219)
							if ((tmp10)){
								HX_STACK_LINE(219)
								tmp = (int)135;
							}
							else{
								HX_STACK_LINE(220)
								int tmp11 = f3;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(220)
								int tmp12 = (int)4112;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(220)
								bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(220)
								if ((tmp13)){
									HX_STACK_LINE(220)
									tmp = (int)45;
								}
								else{
									HX_STACK_LINE(221)
									tmp = (int)0;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(211)
		int degrees = tmp;		HX_STACK_VAR(degrees,"degrees");
		HX_STACK_LINE(223)
		bool tmp1 = AsDegrees;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		if ((tmp1)){
			HX_STACK_LINE(223)
			tmp2 = degrees;
		}
		else{
			HX_STACK_LINE(223)
			int tmp3 = degrees;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			tmp2 = (tmp3 * tmp5);
		}
		HX_STACK_LINE(223)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleFromFacing,return )

::flixel::math::FlxPoint FlxAngle_obj::getCartesianCoords( Float Radius,Float Angle,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxAngle","getCartesianCoords",0x688d1f29,"flixel.math.FlxAngle.getCartesianCoords","flixel/math/FlxAngle.hx",236,0x32e99189)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(237)
	::flixel::math::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(238)
	bool tmp = (p == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	if ((tmp)){
		HX_STACK_LINE(239)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		{
			HX_STACK_LINE(239)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(239)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(239)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(239)
			point1->_inPool = false;
			HX_STACK_LINE(239)
			tmp1 = point1;
		}
		HX_STACK_LINE(239)
		p = tmp1;
	}
	HX_STACK_LINE(241)
	Float tmp1 = Radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	Float tmp2 = Angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(241)
	Float tmp4 = (Float(tmp3) / Float((int)180));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(241)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(241)
	Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(241)
	Float tmp7 = (tmp1 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(241)
	p->set_x(tmp7);
	HX_STACK_LINE(242)
	Float tmp8 = Radius;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(242)
	Float tmp9 = Angle;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(242)
	Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(242)
	Float tmp11 = (Float(tmp10) / Float((int)180));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(242)
	Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(242)
	Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(242)
	Float tmp14 = (tmp8 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(242)
	p->set_y(tmp14);
	HX_STACK_LINE(243)
	::flixel::math::FlxPoint tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(243)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

::flixel::math::FlxPoint FlxAngle_obj::getPolarCoords( Float X,Float Y,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxAngle","getPolarCoords",0xf74e15df,"flixel.math.FlxAngle.getPolarCoords","flixel/math/FlxAngle.hx",255,0x32e99189)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(256)
	::flixel::math::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(257)
	bool tmp = (p == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	if ((tmp)){
		HX_STACK_LINE(258)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(258)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(258)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(258)
			Float tmp4 = X1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(258)
			Float tmp5 = Y1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(258)
			point1->_inPool = false;
			HX_STACK_LINE(258)
			tmp1 = point1;
		}
		HX_STACK_LINE(258)
		p = tmp1;
	}
	HX_STACK_LINE(260)
	Float tmp1 = (X * X);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	Float tmp2 = (Y * Y);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(260)
	Float tmp4 = ::Math_obj::sqrt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	p->set_x(tmp4);
	HX_STACK_LINE(261)
	Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(261)
	Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(261)
	Float tmp9 = (Float((int)180) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(261)
	Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(261)
	p->set_y(tmp10);
	HX_STACK_LINE(262)
	::flixel::math::FlxPoint tmp11 = p;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(262)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG( ){
	HX_STACK_FRAME("flixel.math.FlxAngle","get_TO_DEG",0x36e6a544,"flixel.math.FlxAngle.get_TO_DEG","flixel/math/FlxAngle.hx",266,0x32e99189)
	HX_STACK_LINE(267)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	Float tmp1 = (Float((int)180) / Float(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD( ){
	HX_STACK_FRAME("flixel.math.FlxAngle","get_TO_RAD",0x36f14153,"flixel.math.FlxAngle.get_TO_RAD","flixel/math/FlxAngle.hx",271,0x32e99189)
	HX_STACK_LINE(272)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	Float tmp1 = (Float(tmp) / Float((int)180));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

bool FlxAngle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { if (inCallProp == hx::paccAlways) { outValue = get_TO_DEG(); return true; } }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { if (inCallProp == hx::paccAlways) { outValue = get_TO_RAD(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { outValue = wrapAngle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { outValue = asDegrees_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"asRadians") ) { outValue = asRadians_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { outValue = get_TO_DEG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { outValue = get_TO_RAD_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { outValue = angleBetween_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { outValue = getPolarCoords_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleFromFacing") ) { outValue = angleFromFacing_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { outValue = angleBetweenPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { outValue = angleBetweenMouse_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { outValue = getCartesianCoords_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAngle_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("wrapAngle","\xa9","\xbd","\x58","\xc6"),
	HX_HCSTRING("asDegrees","\xd5","\x18","\xce","\xa6"),
	HX_HCSTRING("asRadians","\xa0","\x7b","\x63","\x93"),
	HX_HCSTRING("angleBetween","\x35","\xe6","\xd4","\x69"),
	HX_HCSTRING("angleBetweenPoint","\xdb","\x9d","\x50","\x15"),
	HX_HCSTRING("angleBetweenMouse","\xb0","\xff","\x25","\x5b"),
	HX_HCSTRING("angleFromFacing","\xd7","\xb1","\xc0","\xdc"),
	HX_HCSTRING("getCartesianCoords","\x50","\x26","\xde","\x33"),
	HX_HCSTRING("getPolarCoords","\x86","\xbd","\xd4","\x74"),
	HX_HCSTRING("get_TO_DEG","\x6b","\xad","\x28","\x42"),
	HX_HCSTRING("get_TO_RAD","\x7a","\x49","\x33","\x42"),
	::String(null()) };

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxAngle","\xf5","\x97","\xd6","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAngle_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxAngle_obj >;
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
