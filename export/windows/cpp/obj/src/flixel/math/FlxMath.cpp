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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace math{

Void FlxMath_obj::__construct()
{
	return null();
}

//FlxMath_obj::~FlxMath_obj() { }

Dynamic FlxMath_obj::__CreateEmpty() { return  new FlxMath_obj; }
hx::ObjectPtr< FlxMath_obj > FlxMath_obj::__new()
{  hx::ObjectPtr< FlxMath_obj > _result_ = new FlxMath_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxMath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMath_obj > _result_ = new FlxMath_obj();
	_result_->__construct();
	return _result_;}

Float FlxMath_obj::MIN_VALUE_FLOAT;

Float FlxMath_obj::MAX_VALUE_FLOAT;

int FlxMath_obj::MIN_VALUE_INT;

int FlxMath_obj::MAX_VALUE_INT;

Float FlxMath_obj::SQUARE_ROOT_OF_TWO;

Float FlxMath_obj::EPSILON;

Float FlxMath_obj::roundDecimal( Float Value,int Precision){
	HX_STACK_FRAME("flixel.math.FlxMath","roundDecimal",0xaa14776b,"flixel.math.FlxMath.roundDecimal","flixel/math/FlxMath.hx",56,0x837802f8)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Precision,"Precision")
	HX_STACK_LINE(57)
	Float mult = (int)1;		HX_STACK_VAR(mult,"mult");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		while((true)){
			HX_STACK_LINE(58)
			bool tmp = (_g < Precision);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(58)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			if ((tmp1)){
				HX_STACK_LINE(58)
				break;
			}
			HX_STACK_LINE(58)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			hx::MultEq(mult,(int)10);
		}
	}
	HX_STACK_LINE(62)
	Float tmp = (Value * mult);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = mult;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,roundDecimal,return )

Float FlxMath_obj::bound( Float Value,Dynamic Min,Dynamic Max){
	HX_STACK_FRAME("flixel.math.FlxMath","bound",0xac2681b6,"flixel.math.FlxMath.bound","flixel/math/FlxMath.hx",76,0x837802f8)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(77)
	bool tmp = (Min != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	if ((tmp)){
		HX_STACK_LINE(77)
		tmp1 = (Value < Min);
	}
	else{
		HX_STACK_LINE(77)
		tmp1 = false;
	}
	HX_STACK_LINE(77)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp1)){
		HX_STACK_LINE(77)
		tmp2 = Min;
	}
	else{
		HX_STACK_LINE(77)
		tmp2 = Value;
	}
	HX_STACK_LINE(77)
	Float lowerBound = tmp2;		HX_STACK_VAR(lowerBound,"lowerBound");
	HX_STACK_LINE(78)
	bool tmp3 = (Max != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	if ((tmp3)){
		HX_STACK_LINE(78)
		tmp4 = (lowerBound > Max);
	}
	else{
		HX_STACK_LINE(78)
		tmp4 = false;
	}
	HX_STACK_LINE(78)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	if ((tmp4)){
		HX_STACK_LINE(78)
		tmp5 = Max;
	}
	else{
		HX_STACK_LINE(78)
		tmp5 = lowerBound;
	}
	HX_STACK_LINE(78)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,bound,return )

Float FlxMath_obj::lerp( Float Min,Float Max,Float Ratio){
	HX_STACK_FRAME("flixel.math.FlxMath","lerp",0xfe2b17ff,"flixel.math.FlxMath.lerp","flixel/math/FlxMath.hx",90,0x837802f8)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Ratio,"Ratio")
	HX_STACK_LINE(91)
	Float tmp = Min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	Float tmp1 = Ratio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	Float tmp2 = (Max - Min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,lerp,return )

bool FlxMath_obj::inBounds( Float Value,Dynamic Min,Dynamic Max){
	HX_STACK_FRAME("flixel.math.FlxMath","inBounds",0x4dfc39c2,"flixel.math.FlxMath.inBounds","flixel/math/FlxMath.hx",103,0x837802f8)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_LINE(104)
	bool tmp = (Min == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	if ((tmp2)){
		HX_STACK_LINE(104)
		tmp3 = (Value >= Min);
	}
	else{
		HX_STACK_LINE(104)
		tmp3 = true;
	}
	HX_STACK_LINE(104)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	if ((tmp3)){
		HX_STACK_LINE(104)
		bool tmp5 = (Max == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		if ((tmp10)){
			HX_STACK_LINE(104)
			tmp4 = (Value <= Max);
		}
		else{
			HX_STACK_LINE(104)
			tmp4 = true;
		}
	}
	else{
		HX_STACK_LINE(104)
		tmp4 = false;
	}
	HX_STACK_LINE(104)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,inBounds,return )

bool FlxMath_obj::isOdd( Float n){
	HX_STACK_FRAME("flixel.math.FlxMath","isOdd",0xb67c8d5d,"flixel.math.FlxMath.isOdd","flixel/math/FlxMath.hx",114,0x837802f8)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(115)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	int tmp2 = (int(tmp1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isOdd,return )

bool FlxMath_obj::isEven( Float n){
	HX_STACK_FRAME("flixel.math.FlxMath","isEven",0xeff0abac,"flixel.math.FlxMath.isEven","flixel/math/FlxMath.hx",125,0x837802f8)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(126)
	Float tmp = n;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	int tmp2 = (int(tmp1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,isEven,return )

int FlxMath_obj::numericComparison( Float num1,Float num2){
	HX_STACK_FRAME("flixel.math.FlxMath","numericComparison",0xd7f909ee,"flixel.math.FlxMath.numericComparison","flixel/math/FlxMath.hx",137,0x837802f8)
	HX_STACK_ARG(num1,"num1")
	HX_STACK_ARG(num2,"num2")
	HX_STACK_LINE(138)
	bool tmp = (num2 > num1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(140)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(142)
		bool tmp1 = (num1 > num2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		if ((tmp1)){
			HX_STACK_LINE(144)
			return (int)1;
		}
	}
	HX_STACK_LINE(146)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,numericComparison,return )

bool FlxMath_obj::pointInCoordinates( Float pointX,Float pointY,Float rectX,Float rectY,Float rectWidth,Float rectHeight){
	HX_STACK_FRAME("flixel.math.FlxMath","pointInCoordinates",0xc68dec2e,"flixel.math.FlxMath.pointInCoordinates","flixel/math/FlxMath.hx",162,0x837802f8)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rectX,"rectX")
	HX_STACK_ARG(rectY,"rectY")
	HX_STACK_ARG(rectWidth,"rectWidth")
	HX_STACK_ARG(rectHeight,"rectHeight")
	HX_STACK_LINE(163)
	bool tmp = (pointX >= rectX);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp)){
		HX_STACK_LINE(163)
		Float tmp2 = pointX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		Float tmp3 = (rectX + rectWidth);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(163)
		tmp1 = (tmp2 <= tmp4);
	}
	else{
		HX_STACK_LINE(163)
		tmp1 = false;
	}
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(165)
		bool tmp2 = (pointY >= rectY);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(165)
			Float tmp4 = pointY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			Float tmp5 = (rectY + rectHeight);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			tmp3 = (tmp4 <= tmp6);
		}
		else{
			HX_STACK_LINE(165)
			tmp3 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp3)){
			HX_STACK_LINE(167)
			return true;
		}
	}
	HX_STACK_LINE(170)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxMath_obj,pointInCoordinates,return )

bool FlxMath_obj::pointInFlxRect( Float pointX,Float pointY,::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxMath","pointInFlxRect",0x061f0269,"flixel.math.FlxMath.pointInFlxRect","flixel/math/FlxMath.hx",182,0x837802f8)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(183)
	bool tmp = (pointX >= rect->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	if ((tmp1)){
		HX_STACK_LINE(183)
		Float tmp3 = pointX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		Float tmp4 = (rect->x + rect->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		tmp2 = (tmp3 <= tmp6);
	}
	else{
		HX_STACK_LINE(183)
		tmp2 = false;
	}
	HX_STACK_LINE(183)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(183)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	if ((tmp3)){
		HX_STACK_LINE(183)
		tmp4 = (pointY >= rect->y);
	}
	else{
		HX_STACK_LINE(183)
		tmp4 = false;
	}
	HX_STACK_LINE(183)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(183)
	if ((tmp4)){
		HX_STACK_LINE(183)
		Float tmp6 = pointY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		Float tmp7 = (rect->y + rect->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		tmp5 = (tmp6 <= tmp8);
	}
	else{
		HX_STACK_LINE(183)
		tmp5 = false;
	}
	HX_STACK_LINE(183)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInFlxRect,return )

bool FlxMath_obj::mouseInFlxRect( bool useWorldCoords,::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxMath","mouseInFlxRect",0x130b3df4,"flixel.math.FlxMath.mouseInFlxRect","flixel/math/FlxMath.hx",196,0x837802f8)
	HX_STACK_ARG(useWorldCoords,"useWorldCoords")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(197)
	bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	if ((tmp)){
		HX_STACK_LINE(199)
		return true;
	}
	HX_STACK_LINE(202)
	bool tmp1 = useWorldCoords;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	if ((tmp1)){
		HX_STACK_LINE(204)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		int tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		::flixel::input::mouse::FlxMouse tmp5 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		int tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		::flixel::math::FlxRect tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		bool tmp9 = ::flixel::math::FlxMath_obj::pointInFlxRect(tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		return tmp9;
	}
	else{
		HX_STACK_LINE(208)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		int tmp3 = tmp2->screenX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		::flixel::input::mouse::FlxMouse tmp4 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		int tmp5 = tmp4->screenY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		::flixel::math::FlxRect tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		bool tmp7 = ::flixel::math::FlxMath_obj::pointInFlxRect(tmp3,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		return tmp7;
	}
	HX_STACK_LINE(202)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,mouseInFlxRect,return )

bool FlxMath_obj::pointInRectangle( Float pointX,Float pointY,::openfl::_legacy::geom::Rectangle rect){
	HX_STACK_FRAME("flixel.math.FlxMath","pointInRectangle",0x49240aa2,"flixel.math.FlxMath.pointInRectangle","flixel/math/FlxMath.hx",222,0x837802f8)
	HX_STACK_ARG(pointX,"pointX")
	HX_STACK_ARG(pointY,"pointY")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(223)
	bool tmp = (pointX >= rect->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	if ((tmp1)){
		HX_STACK_LINE(223)
		Float tmp3 = pointX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		Float tmp4 = rect->get_right();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		tmp2 = (tmp3 <= tmp6);
	}
	else{
		HX_STACK_LINE(223)
		tmp2 = false;
	}
	HX_STACK_LINE(223)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(223)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(223)
	if ((tmp3)){
		HX_STACK_LINE(223)
		tmp4 = (pointY >= rect->y);
	}
	else{
		HX_STACK_LINE(223)
		tmp4 = false;
	}
	HX_STACK_LINE(223)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(223)
	if ((tmp4)){
		HX_STACK_LINE(223)
		Float tmp6 = pointY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		Float tmp7 = rect->get_bottom();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		tmp5 = (tmp6 <= tmp8);
	}
	else{
		HX_STACK_LINE(223)
		tmp5 = false;
	}
	HX_STACK_LINE(223)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,pointInRectangle,return )

int FlxMath_obj::maxAdd( int value,int amount,int max,hx::Null< int >  __o_min){
int min = __o_min.Default(0);
	HX_STACK_FRAME("flixel.math.FlxMath","maxAdd",0x4db55565,"flixel.math.FlxMath.maxAdd","flixel/math/FlxMath.hx",237,0x837802f8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min,"min")
{
		HX_STACK_LINE(238)
		hx::AddEq(value,amount);
		HX_STACK_LINE(240)
		bool tmp = (value > max);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		if ((tmp)){
			HX_STACK_LINE(242)
			value = max;
		}
		else{
			HX_STACK_LINE(244)
			bool tmp1 = (value <= min);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(244)
			if ((tmp1)){
				HX_STACK_LINE(246)
				value = min;
			}
		}
		HX_STACK_LINE(249)
		int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,maxAdd,return )

int FlxMath_obj::wrap( int value,int min,int max){
	HX_STACK_FRAME("flixel.math.FlxMath","wrap",0x057a3f52,"flixel.math.FlxMath.wrap","flixel/math/FlxMath.hx",262,0x837802f8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(263)
	int tmp = (max - min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	int range = tmp1;		HX_STACK_VAR(range,"range");
	HX_STACK_LINE(265)
	bool tmp2 = (value < min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	if ((tmp2)){
		HX_STACK_LINE(266)
		int tmp3 = range;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		int tmp4 = (min - value);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		int tmp5 = range;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(266)
		Float tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(266)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(266)
		int tmp9 = (tmp3 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(266)
		hx::AddEq(value,tmp9);
	}
	HX_STACK_LINE(268)
	int tmp3 = min;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	int tmp4 = (value - min);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(268)
	int tmp5 = range;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(268)
	int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(268)
	int tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(268)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,wrap,return )

Float FlxMath_obj::remapToRange( Float value,Float start1,Float stop1,Float start2,Float stop2){
	HX_STACK_FRAME("flixel.math.FlxMath","remapToRange",0x60fbca01,"flixel.math.FlxMath.remapToRange","flixel/math/FlxMath.hx",282,0x837802f8)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(start1,"start1")
	HX_STACK_ARG(stop1,"stop1")
	HX_STACK_ARG(start2,"start2")
	HX_STACK_ARG(stop2,"stop2")
	HX_STACK_LINE(283)
	Float tmp = start2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tmp1 = (value - start1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	Float tmp2 = (stop2 - start2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	Float tmp3 = (stop1 - start1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(283)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(283)
	Float tmp5 = (tmp1 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(283)
	Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(283)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxMath_obj,remapToRange,return )

Float FlxMath_obj::dotProduct( Float ax,Float ay,Float bx,Float by){
	HX_STACK_FRAME("flixel.math.FlxMath","dotProduct",0x8564032e,"flixel.math.FlxMath.dotProduct","flixel/math/FlxMath.hx",297,0x837802f8)
	HX_STACK_ARG(ax,"ax")
	HX_STACK_ARG(ay,"ay")
	HX_STACK_ARG(bx,"bx")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(298)
	Float tmp = (ax * bx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	Float tmp1 = (ay * by);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,dotProduct,return )

Float FlxMath_obj::vectorLength( Float dx,Float dy){
	HX_STACK_FRAME("flixel.math.FlxMath","vectorLength",0x2dfefb91,"flixel.math.FlxMath.vectorLength","flixel/math/FlxMath.hx",307,0x837802f8)
	HX_STACK_ARG(dx,"dx")
	HX_STACK_ARG(dy,"dy")
	HX_STACK_LINE(308)
	Float tmp = (dx * dx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	Float tmp1 = (dy * dy);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(308)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	Float tmp3 = ::Math_obj::sqrt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(308)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,vectorLength,return )

int FlxMath_obj::distanceBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceBetween",0x58607e8b,"flixel.math.FlxMath.distanceBetween","flixel/math/FlxMath.hx",319,0x837802f8)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_LINE(320)
	Float tmp = SpriteA->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	Float tmp1 = SpriteA->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	Float tmp3 = SpriteB->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	Float tmp4 = SpriteB->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(320)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(320)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(320)
	Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(321)
	Float tmp7 = SpriteA->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(321)
	Float tmp8 = SpriteA->origin->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(321)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(321)
	Float tmp10 = SpriteB->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(321)
	Float tmp11 = SpriteB->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(321)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(321)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(321)
	Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(322)
	Float tmp14 = (dx * dx);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(322)
	Float tmp15 = (dy * dy);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(322)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(322)
	Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(322)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(322)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceBetween,return )

bool FlxMath_obj::isDistanceWithin( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceWithin",0x44c72392,"flixel.math.FlxMath.isDistanceWithin","flixel/math/FlxMath.hx",336,0x837802f8)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(337)
		Float tmp = SpriteA->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		Float tmp1 = SpriteA->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		Float tmp3 = SpriteB->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		Float tmp4 = SpriteB->origin->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(337)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(338)
		Float tmp7 = SpriteA->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(338)
		Float tmp8 = SpriteA->origin->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(338)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(338)
		Float tmp10 = SpriteB->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(338)
		Float tmp11 = SpriteB->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(338)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(338)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(338)
		Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(340)
		bool tmp14 = IncludeEqual;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(340)
		if ((tmp14)){
			HX_STACK_LINE(341)
			Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(341)
			Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(341)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(341)
			Float tmp18 = (Distance * Distance);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(341)
			bool tmp19 = (tmp17 <= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(341)
			return tmp19;
		}
		else{
			HX_STACK_LINE(343)
			Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(343)
			Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(343)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(343)
			Float tmp18 = (Distance * Distance);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(343)
			bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(343)
			return tmp19;
		}
		HX_STACK_LINE(340)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceWithin,return )

int FlxMath_obj::distanceToPoint( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceToPoint",0x84c0ed98,"flixel.math.FlxMath.distanceToPoint","flixel/math/FlxMath.hx",355,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(356)
	Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	Float tmp3 = Target->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(356)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(356)
	Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(357)
	Float tmp5 = Sprite->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(357)
	Float tmp6 = Sprite->origin->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(357)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(357)
	Float tmp8 = Target->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(357)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(357)
	Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(358)
	{
		HX_STACK_LINE(358)
		bool tmp10 = Target->_weak;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(358)
		if ((tmp10)){
			HX_STACK_LINE(358)
			Target->put();
		}
	}
	HX_STACK_LINE(359)
	Float tmp10 = (dx * dx);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(359)
	Float tmp11 = (dy * dy);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(359)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(359)
	Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(359)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(359)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,distanceToPoint,return )

bool FlxMath_obj::isDistanceToPointWithin( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceToPointWithin",0xb54ac0d9,"flixel.math.FlxMath.isDistanceToPointWithin","flixel/math/FlxMath.hx",374,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(375)
		Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(375)
		Float tmp3 = Target->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		Float dx = tmp4;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(376)
		Float tmp5 = Sprite->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(376)
		Float tmp6 = Sprite->origin->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(376)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(376)
		Float tmp8 = Target->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(376)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(376)
		Float dy = tmp9;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			bool tmp10 = Target->_weak;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(378)
			if ((tmp10)){
				HX_STACK_LINE(378)
				Target->put();
			}
		}
		HX_STACK_LINE(380)
		bool tmp10 = IncludeEqual;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(380)
		if ((tmp10)){
			HX_STACK_LINE(381)
			Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(381)
			Float tmp14 = (Distance * Distance);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(381)
			bool tmp15 = (tmp13 <= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(381)
			return tmp15;
		}
		else{
			HX_STACK_LINE(383)
			Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(383)
			Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(383)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(383)
			Float tmp14 = (Distance * Distance);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(383)
			bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(383)
			return tmp15;
		}
		HX_STACK_LINE(380)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxMath_obj,isDistanceToPointWithin,return )

int FlxMath_obj::distanceToMouse( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.math.FlxMath","distanceToMouse",0xca964f6d,"flixel.math.FlxMath.distanceToMouse","flixel/math/FlxMath.hx",394,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(395)
	Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(395)
	Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(395)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(395)
	int tmp4 = tmp3->screenX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(395)
	Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(395)
	Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(396)
	Float tmp6 = Sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(396)
	Float tmp7 = Sprite->origin->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(396)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(396)
	::flixel::input::mouse::FlxMouse tmp9 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(396)
	int tmp10 = tmp9->screenY;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(396)
	Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(396)
	Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(397)
	Float tmp12 = (dx * dx);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(397)
	Float tmp13 = (dy * dy);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(397)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(397)
	Float tmp15 = ::Math_obj::sqrt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(397)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(397)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,distanceToMouse,return )

bool FlxMath_obj::isDistanceToMouseWithin( ::flixel::FlxSprite Sprite,Float Distance,hx::Null< bool >  __o_IncludeEqual){
bool IncludeEqual = __o_IncludeEqual.Default(false);
	HX_STACK_FRAME("flixel.math.FlxMath","isDistanceToMouseWithin",0xc43ab06e,"flixel.math.FlxMath.isDistanceToMouseWithin","flixel/math/FlxMath.hx",410,0x837802f8)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(IncludeEqual,"IncludeEqual")
{
		HX_STACK_LINE(411)
		Float tmp = Sprite->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		Float tmp1 = Sprite->origin->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		int tmp4 = tmp3->screenX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(411)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(412)
		Float tmp6 = Sprite->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(412)
		Float tmp7 = Sprite->origin->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(412)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(412)
		::flixel::input::mouse::FlxMouse tmp9 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(412)
		int tmp10 = tmp9->screenY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(412)
		Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(412)
		Float dy = tmp11;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(414)
		bool tmp12 = IncludeEqual;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(414)
		if ((tmp12)){
			HX_STACK_LINE(415)
			Float tmp13 = (dx * dx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(415)
			Float tmp14 = (dy * dy);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(415)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(415)
			Float tmp16 = (Distance * Distance);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(415)
			bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(415)
			return tmp17;
		}
		else{
			HX_STACK_LINE(417)
			Float tmp13 = (dx * dx);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(417)
			Float tmp14 = (dy * dy);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(417)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(417)
			Float tmp16 = (Distance * Distance);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(417)
			bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(417)
			return tmp17;
		}
		HX_STACK_LINE(414)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,isDistanceToMouseWithin,return )

int FlxMath_obj::getDecimals( Float Number){
	HX_STACK_FRAME("flixel.math.FlxMath","getDecimals",0x764a48f0,"flixel.math.FlxMath.getDecimals","flixel/math/FlxMath.hx",464,0x837802f8)
	HX_STACK_ARG(Number,"Number")
	HX_STACK_LINE(465)
	Float tmp = Number;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(465)
	Array< ::String > helperArray = tmp1.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(helperArray,"helperArray");
	HX_STACK_LINE(466)
	int decimals = (int)0;		HX_STACK_VAR(decimals,"decimals");
	HX_STACK_LINE(468)
	bool tmp2 = (helperArray->length > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(468)
	if ((tmp2)){
		HX_STACK_LINE(470)
		::String tmp3 = helperArray->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		decimals = tmp3.length;
	}
	HX_STACK_LINE(473)
	int tmp3 = decimals;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(473)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,getDecimals,return )

bool FlxMath_obj::equal( Float aValueA,Float aValueB,hx::Null< Float >  __o_aDiff){
Float aDiff = __o_aDiff.Default(((Float)0.0000001));
	HX_STACK_FRAME("flixel.math.FlxMath","equal",0x67aca12c,"flixel.math.FlxMath.equal","flixel/math/FlxMath.hx",477,0x837802f8)
	HX_STACK_ARG(aValueA,"aValueA")
	HX_STACK_ARG(aValueB,"aValueB")
	HX_STACK_ARG(aDiff,"aDiff")
{
		HX_STACK_LINE(478)
		Float tmp = (aValueA - aValueB);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		Float tmp2 = aDiff;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxMath_obj,equal,return )

int FlxMath_obj::signOf( Float f){
	HX_STACK_FRAME("flixel.math.FlxMath","signOf",0x43f3963c,"flixel.math.FlxMath.signOf","flixel/math/FlxMath.hx",485,0x837802f8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(486)
	bool tmp = (f < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(486)
	if ((tmp)){
		HX_STACK_LINE(486)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(486)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(486)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,signOf,return )

bool FlxMath_obj::sameSign( Float f1,Float f2){
	HX_STACK_FRAME("flixel.math.FlxMath","sameSign",0xc637544b,"flixel.math.FlxMath.sameSign","flixel/math/FlxMath.hx",493,0x837802f8)
	HX_STACK_ARG(f1,"f1")
	HX_STACK_ARG(f2,"f2")
	HX_STACK_LINE(494)
	bool tmp = (f1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(494)
	if ((tmp)){
		HX_STACK_LINE(494)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(494)
		tmp1 = (int)1;
	}
	HX_STACK_LINE(494)
	bool tmp2 = (f2 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(494)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(494)
	if ((tmp2)){
		HX_STACK_LINE(494)
		tmp3 = (int)-1;
	}
	else{
		HX_STACK_LINE(494)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(494)
	bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(494)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,sameSign,return )

Float FlxMath_obj::fastSin( Float f){
	HX_STACK_FRAME("flixel.math.FlxMath","fastSin",0xce873d54,"flixel.math.FlxMath.fastSin","flixel/math/FlxMath.hx",504,0x837802f8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(505)
	hx::MultEq(f,((Float)0.3183098862));
	HX_STACK_LINE(508)
	bool tmp = (f > (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	if ((tmp)){
		HX_STACK_LINE(510)
		Float tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		int tmp2 = ::Math_obj::ceil(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		int tmp3 = (int(tmp2) >> int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(510)
		int tmp4 = (int(tmp3) << int((int)1));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(510)
		hx::SubEq(f,tmp4);
	}
	else{
		HX_STACK_LINE(512)
		bool tmp1 = (f < (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(512)
		if ((tmp1)){
			HX_STACK_LINE(514)
			Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(514)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(514)
			int tmp4 = ::Math_obj::ceil(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(514)
			int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			int tmp6 = (int(tmp5) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			hx::AddEq(f,tmp6);
		}
	}
	HX_STACK_LINE(518)
	bool tmp1 = (f > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(518)
	if ((tmp1)){
		HX_STACK_LINE(520)
		Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(520)
		Float tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(520)
		Float tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(520)
		Float tmp5 = ((Float)-7.2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		Float tmp6 = (f * ((Float)3.6));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(520)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(520)
		Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(520)
		Float tmp9 = (((Float)0.5) + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(520)
		Float tmp10 = (tmp3 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(520)
		Float tmp11 = (((Float)3.1) + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(520)
		Float tmp12 = (tmp2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(520)
		return tmp12;
	}
	else{
		HX_STACK_LINE(524)
		Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(524)
		Float tmp3 = f;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(524)
		Float tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(524)
		Float tmp5 = (f * ((Float)3.6));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(524)
		Float tmp6 = (((Float)7.2) + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(524)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(524)
		Float tmp8 = (((Float)0.5) + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(524)
		Float tmp9 = (tmp3 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(524)
		Float tmp10 = (((Float)3.1) - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(524)
		Float tmp11 = (tmp2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(524)
		return tmp11;
	}
	HX_STACK_LINE(518)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastSin,return )

Float FlxMath_obj::fastCos( Float f){
	HX_STACK_FRAME("flixel.math.FlxMath","fastCos",0xce7b1e83,"flixel.math.FlxMath.fastCos","flixel/math/FlxMath.hx",535,0x837802f8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(536)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		Float tmp1 = (f + ((Float)1.570796327));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(536)
		Float f1 = tmp1;		HX_STACK_VAR(f1,"f1");
		HX_STACK_LINE(536)
		hx::MultEq(f1,((Float)0.3183098862));
		HX_STACK_LINE(536)
		bool tmp2 = (f1 > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(536)
		if ((tmp2)){
			HX_STACK_LINE(536)
			Float tmp3 = f1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(536)
			int tmp4 = ::Math_obj::ceil(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			int tmp6 = (int(tmp5) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			hx::SubEq(f1,tmp6);
		}
		else{
			HX_STACK_LINE(536)
			bool tmp3 = (f1 < (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(536)
			if ((tmp3)){
				HX_STACK_LINE(536)
				Float tmp4 = f1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(536)
				Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(536)
				int tmp6 = ::Math_obj::ceil(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(536)
				int tmp7 = (int(tmp6) >> int((int)1));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(536)
				int tmp8 = (int(tmp7) << int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(536)
				hx::AddEq(f1,tmp8);
			}
		}
		HX_STACK_LINE(536)
		bool tmp3 = (f1 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(536)
		if ((tmp3)){
			HX_STACK_LINE(536)
			Float tmp4 = f1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			Float tmp5 = f1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			Float tmp6 = f1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			Float tmp7 = ((Float)-7.2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Float tmp8 = (f1 * ((Float)3.6));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(536)
			Float tmp11 = (((Float)0.5) + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(536)
			Float tmp12 = (tmp5 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(536)
			Float tmp13 = (((Float)3.1) + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(536)
			tmp = (tmp4 * tmp13);
		}
		else{
			HX_STACK_LINE(536)
			Float tmp4 = f1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(536)
			Float tmp5 = f1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(536)
			Float tmp6 = f1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			Float tmp7 = (f1 * ((Float)3.6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Float tmp8 = (((Float)7.2) + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			Float tmp10 = (((Float)0.5) + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(536)
			Float tmp11 = (tmp5 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(536)
			Float tmp12 = (((Float)3.1) - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(536)
			tmp = (tmp4 * tmp12);
		}
	}
	HX_STACK_LINE(536)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,fastCos,return )

Float FlxMath_obj::sinh( Float f){
	HX_STACK_FRAME("flixel.math.FlxMath","sinh",0x02ce9bd8,"flixel.math.FlxMath.sinh","flixel/math/FlxMath.hx",543,0x837802f8)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(544)
	Float tmp = f;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	Float tmp1 = ::Math_obj::exp(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(544)
	Float tmp4 = ::Math_obj::exp(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(544)
	Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(544)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(544)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,sinh,return )

int FlxMath_obj::maxInt( int a,int b){
	HX_STACK_FRAME("flixel.math.FlxMath","maxInt",0x4dbb7033,"flixel.math.FlxMath.maxInt","flixel/math/FlxMath.hx",551,0x837802f8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(552)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	if ((tmp)){
		HX_STACK_LINE(552)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(552)
		tmp1 = b;
	}
	HX_STACK_LINE(552)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,maxInt,return )

int FlxMath_obj::minInt( int a,int b){
	HX_STACK_FRAME("flixel.math.FlxMath","minInt",0xe253f205,"flixel.math.FlxMath.minInt","flixel/math/FlxMath.hx",559,0x837802f8)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(560)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(560)
	if ((tmp)){
		HX_STACK_LINE(560)
		tmp1 = b;
	}
	else{
		HX_STACK_LINE(560)
		tmp1 = a;
	}
	HX_STACK_LINE(560)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxMath_obj,minInt,return )

int FlxMath_obj::absInt( int a){
	HX_STACK_FRAME("flixel.math.FlxMath","absInt",0x118b9f25,"flixel.math.FlxMath.absInt","flixel/math/FlxMath.hx",567,0x837802f8)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(568)
	bool tmp = (a > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(568)
	if ((tmp)){
		HX_STACK_LINE(568)
		tmp1 = a;
	}
	else{
		HX_STACK_LINE(568)
		int tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		tmp1 = -(tmp2);
	}
	HX_STACK_LINE(568)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMath_obj,absInt,return )


FlxMath_obj::FlxMath_obj()
{
}

bool FlxMath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"wrap") ) { outValue = wrap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sinh") ) { outValue = sinh_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isOdd") ) { outValue = isOdd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"equal") ) { outValue = equal_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isEven") ) { outValue = isEven_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"maxAdd") ) { outValue = maxAdd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"signOf") ) { outValue = signOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"maxInt") ) { outValue = maxInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"minInt") ) { outValue = minInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"absInt") ) { outValue = absInt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fastSin") ) { outValue = fastSin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fastCos") ) { outValue = fastCos_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inBounds") ) { outValue = inBounds_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sameSign") ) { outValue = sameSign_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { outValue = dotProduct_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getDecimals") ) { outValue = getDecimals_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"roundDecimal") ) { outValue = roundDecimal_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"remapToRange") ) { outValue = remapToRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vectorLength") ) { outValue = vectorLength_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"pointInFlxRect") ) { outValue = pointInFlxRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"mouseInFlxRect") ) { outValue = mouseInFlxRect_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceBetween") ) { outValue = distanceBetween_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { outValue = distanceToPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceToMouse") ) { outValue = distanceToMouse_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pointInRectangle") ) { outValue = pointInRectangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isDistanceWithin") ) { outValue = isDistanceWithin_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericComparison") ) { outValue = numericComparison_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pointInCoordinates") ) { outValue = pointInCoordinates_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"isDistanceToPointWithin") ) { outValue = isDistanceToPointWithin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isDistanceToMouseWithin") ) { outValue = isDistanceToMouseWithin_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxMath_obj::MIN_VALUE_FLOAT,HX_HCSTRING("MIN_VALUE_FLOAT","\x41","\x8d","\x8c","\x66")},
	{hx::fsFloat,(void *) &FlxMath_obj::MAX_VALUE_FLOAT,HX_HCSTRING("MAX_VALUE_FLOAT","\x53","\xd9","\xa6","\x0a")},
	{hx::fsInt,(void *) &FlxMath_obj::MIN_VALUE_INT,HX_HCSTRING("MIN_VALUE_INT","\x54","\x4d","\x29","\x0b")},
	{hx::fsInt,(void *) &FlxMath_obj::MAX_VALUE_INT,HX_HCSTRING("MAX_VALUE_INT","\xe6","\x10","\xde","\x05")},
	{hx::fsFloat,(void *) &FlxMath_obj::SQUARE_ROOT_OF_TWO,HX_HCSTRING("SQUARE_ROOT_OF_TWO","\xdf","\x00","\xe4","\xf7")},
	{hx::fsFloat,(void *) &FlxMath_obj::EPSILON,HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_MARK_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_MARK_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_FLOAT,"MIN_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_FLOAT,"MAX_VALUE_FLOAT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MIN_VALUE_INT,"MIN_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::MAX_VALUE_INT,"MAX_VALUE_INT");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::SQUARE_ROOT_OF_TWO,"SQUARE_ROOT_OF_TWO");
	HX_VISIT_MEMBER_NAME(FlxMath_obj::EPSILON,"EPSILON");
};

#endif

hx::Class FlxMath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MIN_VALUE_FLOAT","\x41","\x8d","\x8c","\x66"),
	HX_HCSTRING("MAX_VALUE_FLOAT","\x53","\xd9","\xa6","\x0a"),
	HX_HCSTRING("MIN_VALUE_INT","\x54","\x4d","\x29","\x0b"),
	HX_HCSTRING("MAX_VALUE_INT","\xe6","\x10","\xde","\x05"),
	HX_HCSTRING("SQUARE_ROOT_OF_TWO","\xdf","\x00","\xe4","\xf7"),
	HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c"),
	HX_HCSTRING("roundDecimal","\xe3","\xa9","\x4c","\xb9"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("inBounds","\x3a","\xd0","\x9b","\xee"),
	HX_HCSTRING("isOdd","\xe5","\xbb","\x52","\xc1"),
	HX_HCSTRING("isEven","\x24","\x34","\x83","\x60"),
	HX_HCSTRING("numericComparison","\x76","\xe4","\x9e","\x70"),
	HX_HCSTRING("pointInCoordinates","\xa6","\x48","\x07","\xbf"),
	HX_HCSTRING("pointInFlxRect","\xe1","\xc2","\xa2","\x79"),
	HX_HCSTRING("mouseInFlxRect","\x6c","\xfe","\x8e","\x86"),
	HX_HCSTRING("pointInRectangle","\x1a","\xd9","\x72","\x75"),
	HX_HCSTRING("maxAdd","\xdd","\xdd","\x47","\xbe"),
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("remapToRange","\x79","\xfc","\x33","\x70"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("vectorLength","\x09","\x2e","\x37","\x3d"),
	HX_HCSTRING("distanceBetween","\x13","\x27","\x25","\xf8"),
	HX_HCSTRING("isDistanceWithin","\x0a","\xf2","\x15","\x71"),
	HX_HCSTRING("distanceToPoint","\x20","\x96","\x85","\x24"),
	HX_HCSTRING("isDistanceToPointWithin","\x61","\x31","\x37","\x36"),
	HX_HCSTRING("distanceToMouse","\xf5","\xf7","\x5a","\x6a"),
	HX_HCSTRING("isDistanceToMouseWithin","\xf6","\x20","\x27","\x45"),
	HX_HCSTRING("getDecimals","\x78","\x0d","\x5e","\x38"),
	HX_HCSTRING("equal","\xb4","\xcf","\x82","\x72"),
	HX_HCSTRING("signOf","\xb4","\x1e","\x86","\xb4"),
	HX_HCSTRING("sameSign","\xc3","\xea","\xd6","\x66"),
	HX_HCSTRING("fastSin","\xdc","\x1d","\x2c","\xde"),
	HX_HCSTRING("fastCos","\x0b","\xff","\x1f","\xde"),
	HX_HCSTRING("sinh","\x50","\x96","\x53","\x4c"),
	HX_HCSTRING("maxInt","\xab","\xf8","\x4d","\xbe"),
	HX_HCSTRING("minInt","\x7d","\x7a","\xe6","\x52"),
	HX_HCSTRING("absInt","\x9d","\x27","\x1e","\x82"),
	::String(null()) };

void FlxMath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxMath","\xe6","\x47","\x47","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxMath_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxMath_obj >;
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

void FlxMath_obj::__boot()
{
	MIN_VALUE_FLOAT= ((Float)5e-324);
	MAX_VALUE_FLOAT= ((Float)1.79e+308);
	MIN_VALUE_INT= (int)-2147483647;
	MAX_VALUE_INT= (int)2147483647;
	SQUARE_ROOT_OF_TWO= ((Float)1.41421356237);
	EPSILON= ((Float)0.0000001);
}

} // end namespace flixel
} // end namespace math
