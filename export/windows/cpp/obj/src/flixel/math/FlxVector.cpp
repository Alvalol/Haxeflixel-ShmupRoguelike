#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
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

Void FlxVector_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("flixel.math.FlxVector","new",0xe9d1dfd3,"flixel.math.FlxVector.new","flixel/math/FlxVector.hx",8,0x1fcaa75d)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(8)
	Dynamic tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	Dynamic tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//FlxVector_obj::~FlxVector_obj() { }

Dynamic FlxVector_obj::__CreateEmpty() { return  new FlxVector_obj; }
hx::ObjectPtr< FlxVector_obj > FlxVector_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< FlxVector_obj > _result_ = new FlxVector_obj();
	_result_->__construct(X,Y);
	return _result_;}

Dynamic FlxVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVector_obj > _result_ = new FlxVector_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxVector_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxVector","put",0xe9d37242,"flixel.math.FlxVector.put","flixel/math/FlxVector.hx",37,0x1fcaa75d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		bool tmp = this->_inPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(40)
			this->_inPool = true;
			HX_STACK_LINE(41)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp2 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			tmp2->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


::flixel::math::FlxPoint FlxVector_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVector","set",0xe9d5ab15,"flixel.math.FlxVector.set","flixel/math/FlxVector.hx",93,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(94)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		this->set_x(tmp);
		HX_STACK_LINE(95)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		this->set_y(tmp1);
		HX_STACK_LINE(96)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::math::FlxVector FlxVector_obj::scale( Float k){
	HX_STACK_FRAME("flixel.math.FlxVector","scale",0x4985e0bd,"flixel.math.FlxVector.scale","flixel/math/FlxVector.hx",106,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(107)
	{
		HX_STACK_LINE(107)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		Float tmp = (_g->x * k);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(108)
	{
		HX_STACK_LINE(108)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		Float tmp = (_g->y * k);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(109)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,scale,return )

::flixel::math::FlxVector FlxVector_obj::scaleNew( Float k){
	HX_STACK_FRAME("flixel.math.FlxVector","scaleNew",0x448efba3,"flixel.math.FlxVector.scaleNew","flixel/math/FlxVector.hx",119,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(120)
	::flixel::math::FlxVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	{
		HX_STACK_LINE(120)
		::flixel::math::FlxVector tmp1 = this->clone(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::flixel::math::FlxVector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Float tmp2 = (_g->x * k);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			_g->set_x(tmp2);
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Float tmp2 = (_g->y * k);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(120)
			_g->set_y(tmp2);
		}
		HX_STACK_LINE(120)
		tmp = _this;
	}
	HX_STACK_LINE(120)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,scaleNew,return )

::flixel::math::FlxVector FlxVector_obj::addNew( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","addNew",0x6e7dbb2c,"flixel.math.FlxVector.addNew","flixel/math/FlxVector.hx",130,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(131)
	::flixel::math::FlxVector tmp = this->clone(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	::flixel::math::FlxVector nv = tmp;		HX_STACK_VAR(nv,"nv");
	HX_STACK_LINE(132)
	::flixel::math::FlxVector tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	nv->addPoint(tmp1);
	HX_STACK_LINE(133)
	::flixel::math::FlxVector tmp2 = nv;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,addNew,return )

::flixel::math::FlxVector FlxVector_obj::subtractNew( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","subtractNew",0x8b10b21f,"flixel.math.FlxVector.subtractNew","flixel/math/FlxVector.hx",143,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(144)
	::flixel::math::FlxVector tmp = this->clone(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	::flixel::math::FlxVector nv = tmp;		HX_STACK_VAR(nv,"nv");
	HX_STACK_LINE(145)
	::flixel::math::FlxVector tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	nv->subtractPoint(tmp1);
	HX_STACK_LINE(146)
	::flixel::math::FlxVector tmp2 = nv;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(146)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,subtractNew,return )

Float FlxVector_obj::dotProduct( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","dotProduct",0x468b3c93,"flixel.math.FlxVector.dotProduct","flixel/math/FlxVector.hx",156,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(157)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dotProduct,return )

Float FlxVector_obj::dotProdWithNormalizing( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","dotProdWithNormalizing",0x0a930731,"flixel.math.FlxVector.dotProdWithNormalizing","flixel/math/FlxVector.hx",167,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(168)
	::flixel::math::FlxVector tmp = ::flixel::math::FlxVector_obj::_vector1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	::flixel::math::FlxVector tmp1 = v->clone(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	::flixel::math::FlxVector tmp2 = tmp1->normalize();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	::flixel::math::FlxVector normalized = tmp2;		HX_STACK_VAR(normalized,"normalized");
	HX_STACK_LINE(169)
	Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	Float tmp4 = normalized->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(169)
	Float tmp7 = normalized->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(169)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(169)
	Float tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(169)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dotProdWithNormalizing,return )

bool FlxVector_obj::isPerpendicular( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","isPerpendicular",0xefca0053,"flixel.math.FlxVector.isPerpendicular","flixel/math/FlxVector.hx",179,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(180)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	bool tmp8 = (tmp7 < ((Float)9.9999999999999984e-015));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,isPerpendicular,return )

Float FlxVector_obj::crossProductLength( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","crossProductLength",0x30678fc2,"flixel.math.FlxVector.crossProductLength","flixel/math/FlxVector.hx",190,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(191)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	Float tmp4 = v->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,crossProductLength,return )

bool FlxVector_obj::isParallel( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","isParallel",0x0140d1be,"flixel.math.FlxVector.isParallel","flixel/math/FlxVector.hx",201,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(202)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	Float tmp4 = v->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(202)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(202)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(202)
	Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(202)
	bool tmp8 = (tmp7 < ((Float)9.9999999999999984e-015));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(202)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,isParallel,return )

bool FlxVector_obj::isZero( ){
	HX_STACK_FRAME("flixel.math.FlxVector","isZero",0x3dd0ae9f,"flixel.math.FlxVector.isZero","flixel/math/FlxVector.hx",211,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	bool tmp2 = (tmp1 < ((Float)0.0000001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	if ((tmp2)){
		HX_STACK_LINE(212)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(212)
		tmp3 = (tmp8 < ((Float)0.0000001));
	}
	else{
		HX_STACK_LINE(212)
		tmp3 = false;
	}
	HX_STACK_LINE(212)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isZero,return )

::flixel::math::FlxVector FlxVector_obj::zero( ){
	HX_STACK_FRAME("flixel.math.FlxVector","zero",0xb5c08455,"flixel.math.FlxVector.zero","flixel/math/FlxVector.hx",219,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	Float tmp = this->set_y((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	this->set_x(tmp);
	HX_STACK_LINE(221)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,zero,return )

::flixel::math::FlxVector FlxVector_obj::normalize( ){
	HX_STACK_FRAME("flixel.math.FlxVector","normalize",0x37b8df40,"flixel.math.FlxVector.normalize","flixel/math/FlxVector.hx",228,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	bool tmp2 = (tmp1 < ((Float)0.0000001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(229)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	if ((tmp2)){
		HX_STACK_LINE(229)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		tmp3 = (tmp8 < ((Float)0.0000001));
	}
	else{
		HX_STACK_LINE(229)
		tmp3 = false;
	}
	HX_STACK_LINE(229)
	if ((tmp3)){
		HX_STACK_LINE(231)
		this->set_x((int)1);
		HX_STACK_LINE(232)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(234)
	::flixel::math::FlxVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(234)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(234)
		Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(234)
		Float tmp13 = (Float((int)1) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(234)
		Float k = tmp13;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			Float tmp14 = (_g->x * k);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(234)
			_g->set_x(tmp14);
		}
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			Float tmp14 = (_g->y * k);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(234)
			_g->set_y(tmp14);
		}
		HX_STACK_LINE(234)
		tmp4 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(234)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,normalize,return )

bool FlxVector_obj::isNormalized( ){
	HX_STACK_FRAME("flixel.math.FlxVector","isNormalized",0x08ca76ee,"flixel.math.FlxVector.isNormalized","flixel/math/FlxVector.hx",241,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(242)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(242)
	Float tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(242)
	Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(242)
	bool tmp9 = (tmp8 < ((Float)9.9999999999999984e-015));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(242)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isNormalized,return )

::flixel::math::FlxVector FlxVector_obj::rotateByRadians( Float rads){
	HX_STACK_FRAME("flixel.math.FlxVector","rotateByRadians",0xb2c6f773,"flixel.math.FlxVector.rotateByRadians","flixel/math/FlxVector.hx",252,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rads,"rads")
	HX_STACK_LINE(253)
	Float tmp = rads;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	Float tmp1 = ::Math_obj::sin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	Float s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(254)
	Float tmp2 = rads;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	Float c = tmp3;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(255)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(255)
	Float tempX = tmp4;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(257)
	Float tmp5 = (tempX * c);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(257)
	Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(257)
	Float tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(257)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(257)
	Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(257)
	this->set_x(tmp9);
	HX_STACK_LINE(258)
	Float tmp10 = (tempX * s);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(258)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(258)
	Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(258)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(258)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(258)
	this->set_y(tmp14);
	HX_STACK_LINE(260)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rotateByRadians,return )

::flixel::math::FlxVector FlxVector_obj::rotateByDegrees( Float degs){
	HX_STACK_FRAME("flixel.math.FlxVector","rotateByDegrees",0xc63194a8,"flixel.math.FlxVector.rotateByDegrees","flixel/math/FlxVector.hx",270,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degs,"degs")
	HX_STACK_LINE(271)
	::flixel::math::FlxVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	{
		HX_STACK_LINE(271)
		Float tmp1 = degs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		Float rads = tmp4;		HX_STACK_VAR(rads,"rads");
		HX_STACK_LINE(271)
		Float tmp5 = rads;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		Float s = tmp6;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(271)
		Float tmp7 = rads;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(271)
		Float c = tmp8;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(271)
		Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(271)
		Float tempX = tmp9;		HX_STACK_VAR(tempX,"tempX");
		HX_STACK_LINE(271)
		Float tmp10 = (tempX * c);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(271)
		Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(271)
		Float tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(271)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(271)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(271)
		this->set_x(tmp14);
		HX_STACK_LINE(271)
		Float tmp15 = (tempX * s);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(271)
		Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(271)
		Float tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(271)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(271)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(271)
		this->set_y(tmp19);
		HX_STACK_LINE(271)
		tmp = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(271)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rotateByDegrees,return )

::flixel::math::FlxVector FlxVector_obj::rotateWithTrig( Float sin,Float cos){
	HX_STACK_FRAME("flixel.math.FlxVector","rotateWithTrig",0x4eb49eea,"flixel.math.FlxVector.rotateWithTrig","flixel/math/FlxVector.hx",282,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sin,"sin")
	HX_STACK_ARG(cos,"cos")
	HX_STACK_LINE(283)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tempX = tmp;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(284)
	Float tmp1 = (tempX * cos);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	Float tmp3 = sin;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(284)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(284)
	Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(284)
	this->set_x(tmp5);
	HX_STACK_LINE(285)
	Float tmp6 = (tempX * sin);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(285)
	Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(285)
	Float tmp8 = cos;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(285)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(285)
	Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(285)
	this->set_y(tmp10);
	HX_STACK_LINE(286)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,rotateWithTrig,return )

::flixel::math::FlxVector FlxVector_obj::rightNormal( ::flixel::math::FlxVector vec){
	HX_STACK_FRAME("flixel.math.FlxVector","rightNormal",0x19057996,"flixel.math.FlxVector.rightNormal","flixel/math/FlxVector.hx",293,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(294)
	bool tmp = (vec == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	if ((tmp)){
		HX_STACK_LINE(296)
		::flixel::math::FlxVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		{
			HX_STACK_LINE(296)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(296)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(296)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp2 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(296)
			::flixel::math::FlxVector tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(296)
			::flixel::math::FlxVector tmp6 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp3->set(tmp4,tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			::flixel::math::FlxVector vector = tmp6;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(296)
			vector->_inPool = false;
			HX_STACK_LINE(296)
			tmp1 = vector;
		}
		HX_STACK_LINE(296)
		vec = tmp1;
	}
	HX_STACK_LINE(298)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(298)
	Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(298)
	hx::TCast< ::flixel::math::FlxVector >::cast(vec->set(tmp2,tmp3));
	HX_STACK_LINE(299)
	::flixel::math::FlxVector tmp4 = vec;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rightNormal,return )

::flixel::math::FlxVector FlxVector_obj::leftNormal( ::flixel::math::FlxVector vec){
	HX_STACK_FRAME("flixel.math.FlxVector","leftNormal",0x6815427b,"flixel.math.FlxVector.leftNormal","flixel/math/FlxVector.hx",306,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(307)
	bool tmp = (vec == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	if ((tmp)){
		HX_STACK_LINE(309)
		::flixel::math::FlxVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(309)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(309)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp2 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			::flixel::math::FlxVector tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(309)
			::flixel::math::FlxVector tmp6 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp3->set(tmp4,tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(309)
			::flixel::math::FlxVector vector = tmp6;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(309)
			vector->_inPool = false;
			HX_STACK_LINE(309)
			tmp1 = vector;
		}
		HX_STACK_LINE(309)
		vec = tmp1;
	}
	HX_STACK_LINE(311)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(311)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(311)
	hx::TCast< ::flixel::math::FlxVector >::cast(vec->set(tmp1,tmp3));
	HX_STACK_LINE(312)
	::flixel::math::FlxVector tmp4 = vec;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(312)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,leftNormal,return )

::flixel::math::FlxVector FlxVector_obj::negate( ){
	HX_STACK_FRAME("flixel.math.FlxVector","negate",0x36921c2f,"flixel.math.FlxVector.negate","flixel/math/FlxVector.hx",319,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(320)
	{
		HX_STACK_LINE(320)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		Float tmp = (_g->x * (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		_g->set_x(tmp);
	}
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		Float tmp = (_g->y * (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		_g->set_y(tmp);
	}
	HX_STACK_LINE(322)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,negate,return )

::flixel::math::FlxVector FlxVector_obj::negateNew( ){
	HX_STACK_FRAME("flixel.math.FlxVector","negateNew",0x51f3f371,"flixel.math.FlxVector.negateNew","flixel/math/FlxVector.hx",326,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	::flixel::math::FlxVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	{
		HX_STACK_LINE(327)
		::flixel::math::FlxVector tmp1 = this->clone(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(327)
		::flixel::math::FlxVector _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(327)
			Float tmp2 = (_g->x * (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(327)
			_g->set_x(tmp2);
		}
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			::flixel::math::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(327)
			Float tmp2 = (_g->y * (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(327)
			_g->set_y(tmp2);
		}
		HX_STACK_LINE(327)
		tmp = _this;
	}
	HX_STACK_LINE(327)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,negateNew,return )

::flixel::math::FlxVector FlxVector_obj::projectTo( ::flixel::math::FlxVector v,::flixel::math::FlxVector proj){
	HX_STACK_FRAME("flixel.math.FlxVector","projectTo",0x21102c67,"flixel.math.FlxVector.projectTo","flixel/math/FlxVector.hx",339,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(proj,"proj")
	HX_STACK_LINE(340)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(340)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(340)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(340)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(340)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(340)
	Float dp = tmp6;		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(341)
	Float tmp7 = (v->x * v->x);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(341)
	Float tmp8 = (v->y * v->y);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(341)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(341)
	Float lenSq = tmp9;		HX_STACK_VAR(lenSq,"lenSq");
	HX_STACK_LINE(343)
	bool tmp10 = (proj == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(343)
	if ((tmp10)){
		HX_STACK_LINE(345)
		::flixel::math::FlxVector tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(345)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(345)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp12 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(345)
			::flixel::math::FlxVector tmp13 = tmp12->get();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(345)
			Float tmp14 = X;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(345)
			Float tmp15 = Y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(345)
			::flixel::math::FlxVector tmp16 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp13->set(tmp14,tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(345)
			::flixel::math::FlxVector vector = tmp16;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(345)
			vector->_inPool = false;
			HX_STACK_LINE(345)
			tmp11 = vector;
		}
		HX_STACK_LINE(345)
		proj = tmp11;
	}
	HX_STACK_LINE(348)
	Float tmp11 = (dp * v->x);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(348)
	Float tmp12 = lenSq;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(348)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(348)
	Float tmp14 = (dp * v->y);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(348)
	Float tmp15 = lenSq;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(348)
	Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(348)
	::flixel::math::FlxVector tmp17 = hx::TCast< ::flixel::math::FlxVector >::cast(proj->set(tmp13,tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(348)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,projectTo,return )

::flixel::math::FlxVector FlxVector_obj::projectToNormalized( ::flixel::math::FlxVector v,::flixel::math::FlxVector proj){
	HX_STACK_FRAME("flixel.math.FlxVector","projectToNormalized",0xa11cbb7e,"flixel.math.FlxVector.projectToNormalized","flixel/math/FlxVector.hx",359,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(proj,"proj")
	HX_STACK_LINE(360)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(360)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(360)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(360)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(360)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(360)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(360)
	Float dp = tmp6;		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(362)
	bool tmp7 = (proj == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(362)
	if ((tmp7)){
		HX_STACK_LINE(364)
		::flixel::math::FlxVector tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(364)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(364)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp9 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(364)
			::flixel::math::FlxVector tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(364)
			Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(364)
			Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(364)
			::flixel::math::FlxVector tmp13 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp10->set(tmp11,tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(364)
			::flixel::math::FlxVector vector = tmp13;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(364)
			vector->_inPool = false;
			HX_STACK_LINE(364)
			tmp8 = vector;
		}
		HX_STACK_LINE(364)
		proj = tmp8;
	}
	HX_STACK_LINE(367)
	Float tmp8 = (dp * v->x);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(367)
	Float tmp9 = (dp * v->y);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(367)
	::flixel::math::FlxVector tmp10 = hx::TCast< ::flixel::math::FlxVector >::cast(proj->set(tmp8,tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(367)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,projectToNormalized,return )

Float FlxVector_obj::perpProduct( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","perpProduct",0x72ab38ef,"flixel.math.FlxVector.perpProduct","flixel/math/FlxVector.hx",374,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(375)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(375)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(375)
	Float tmp5 = v->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(375)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(375)
	Float tmp7 = (tmp2 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(375)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,perpProduct,return )

Float FlxVector_obj::ratio( ::flixel::math::FlxVector a,::flixel::math::FlxVector b,::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","ratio",0xb4db473e,"flixel.math.FlxVector.ratio","flixel/math/FlxVector.hx",387,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(388)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	Float tmp1 = v->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(388)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(388)
	Float tmp4 = v->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(388)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(388)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(388)
	Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(388)
	bool tmp8 = (tmp7 < ((Float)9.9999999999999984e-015));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(388)
	if ((tmp8)){
		HX_STACK_LINE(388)
		Float tmp9 = ::Math_obj::NaN;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(388)
		return tmp9;
	}
	HX_STACK_LINE(389)
	Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(389)
	Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(389)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(389)
	Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(389)
	Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(389)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(389)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(389)
	bool tmp16 = (tmp15 < ((Float)9.9999999999999984e-015));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(389)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(389)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(389)
	if ((tmp17)){
		HX_STACK_LINE(389)
		Float tmp19 = (v->x * v->x);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(389)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(389)
		Float tmp21 = (v->y * v->y);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(389)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(389)
		Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(389)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(389)
		tmp18 = (tmp24 < ((Float)9.9999999999999984e-015));
	}
	else{
		HX_STACK_LINE(389)
		tmp18 = true;
	}
	HX_STACK_LINE(389)
	if ((tmp18)){
		HX_STACK_LINE(389)
		Float tmp19 = ::Math_obj::NaN;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(389)
		return tmp19;
	}
	HX_STACK_LINE(391)
	::flixel::math::FlxVector tmp19 = ::flixel::math::FlxVector_obj::_vector1;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(391)
	::flixel::math::FlxVector tmp20 = b->clone(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(391)
	::flixel::math::FlxVector_obj::_vector1 = tmp20;
	HX_STACK_LINE(392)
	::flixel::math::FlxVector tmp21 = ::flixel::math::FlxVector_obj::_vector1;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(392)
	::flixel::math::FlxVector tmp22 = a;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(392)
	tmp21->subtractPoint(tmp22);
	HX_STACK_LINE(394)
	Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(394)
	{
		HX_STACK_LINE(394)
		::flixel::math::FlxVector tmp24 = ::flixel::math::FlxVector_obj::_vector1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(394)
		::flixel::math::FlxVector _this = tmp24;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(394)
		Float tmp25 = (_this->y * v->x);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(394)
		Float tmp26 = _this->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(394)
		Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(394)
		Float tmp28 = v->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(394)
		Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(394)
		tmp23 = (tmp25 + tmp29);
	}
	HX_STACK_LINE(394)
	Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(394)
	Float tmp25 = v->x;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(394)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(394)
	Float tmp27 = this->x;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(394)
	Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(394)
	Float tmp29 = v->y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(394)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(394)
	Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(394)
	Float tmp32 = (Float(tmp23) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(394)
	return tmp32;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxVector_obj,ratio,return )

::flixel::math::FlxVector FlxVector_obj::findIntersection( ::flixel::math::FlxVector a,::flixel::math::FlxVector b,::flixel::math::FlxVector v,::flixel::math::FlxVector intersection){
	HX_STACK_FRAME("flixel.math.FlxVector","findIntersection",0xca04b4cf,"flixel.math.FlxVector.findIntersection","flixel/math/FlxVector.hx",406,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(intersection,"intersection")
	HX_STACK_LINE(407)
	::flixel::math::FlxVector tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	::flixel::math::FlxVector tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	::flixel::math::FlxVector tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(407)
	Float tmp3 = this->ratio(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(407)
	Float t = tmp3;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(409)
	bool tmp4 = (intersection == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(409)
	if ((tmp4)){
		HX_STACK_LINE(411)
		::flixel::math::FlxVector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		{
			HX_STACK_LINE(411)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(411)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(411)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp6 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(411)
			::flixel::math::FlxVector tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(411)
			Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(411)
			Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(411)
			::flixel::math::FlxVector tmp10 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp7->set(tmp8,tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(411)
			::flixel::math::FlxVector vector = tmp10;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(411)
			vector->_inPool = false;
			HX_STACK_LINE(411)
			tmp5 = vector;
		}
		HX_STACK_LINE(411)
		intersection = tmp5;
	}
	HX_STACK_LINE(414)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(414)
	bool tmp6 = ::Math_obj::isNaN(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(414)
	if ((tmp6)){
		HX_STACK_LINE(416)
		Float tmp7 = ::Math_obj::NaN;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(416)
		Float tmp8 = ::Math_obj::NaN;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(416)
		::flixel::math::FlxVector tmp9 = hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set(tmp7,tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(416)
		return tmp9;
	}
	HX_STACK_LINE(419)
	Float tmp7 = a->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(419)
	Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(419)
	Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(419)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(419)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(419)
	Float tmp12 = a->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(419)
	Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(419)
	Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(419)
	Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(419)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(419)
	::flixel::math::FlxVector tmp17 = hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set(tmp11,tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(419)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxVector_obj,findIntersection,return )

::flixel::math::FlxVector FlxVector_obj::findIntersectionInBounds( ::flixel::math::FlxVector a,::flixel::math::FlxVector b,::flixel::math::FlxVector v,::flixel::math::FlxVector intersection){
	HX_STACK_FRAME("flixel.math.FlxVector","findIntersectionInBounds",0x855a2829,"flixel.math.FlxVector.findIntersectionInBounds","flixel/math/FlxVector.hx",431,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(intersection,"intersection")
	HX_STACK_LINE(432)
	bool tmp = (intersection == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(432)
	if ((tmp)){
		HX_STACK_LINE(434)
		::flixel::math::FlxVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(434)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(434)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp2 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(434)
			::flixel::math::FlxVector tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(434)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(434)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(434)
			::flixel::math::FlxVector tmp6 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp3->set(tmp4,tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(434)
			::flixel::math::FlxVector vector = tmp6;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(434)
			vector->_inPool = false;
			HX_STACK_LINE(434)
			tmp1 = vector;
		}
		HX_STACK_LINE(434)
		intersection = tmp1;
	}
	HX_STACK_LINE(437)
	::flixel::math::FlxVector tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	::flixel::math::FlxVector tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	::flixel::math::FlxVector tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(437)
	Float tmp4 = this->ratio(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(437)
	Float t1 = tmp4;		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(438)
	::flixel::math::FlxVector tmp5 = b;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(438)
	::flixel::math::FlxVector tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(438)
	Float tmp7 = v->ratio(tmp5,tmp6,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(438)
	Float t2 = tmp7;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(439)
	Float tmp8 = t1;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(439)
	bool tmp9 = ::Math_obj::isNaN(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(439)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(439)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(439)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(439)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(439)
	if ((tmp12)){
		HX_STACK_LINE(439)
		Float tmp14 = t2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(439)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(439)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(439)
		bool tmp17 = ::Math_obj::isNaN(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(439)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(439)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(439)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(439)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(439)
		tmp13 = !(tmp21);
	}
	else{
		HX_STACK_LINE(439)
		tmp13 = false;
	}
	HX_STACK_LINE(439)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(439)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(439)
	if ((tmp14)){
		HX_STACK_LINE(439)
		tmp15 = (t1 > (int)0);
	}
	else{
		HX_STACK_LINE(439)
		tmp15 = false;
	}
	HX_STACK_LINE(439)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(439)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(439)
	if ((tmp16)){
		HX_STACK_LINE(439)
		tmp17 = (t1 <= (int)1);
	}
	else{
		HX_STACK_LINE(439)
		tmp17 = false;
	}
	HX_STACK_LINE(439)
	bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(439)
	bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(439)
	if ((tmp18)){
		HX_STACK_LINE(439)
		tmp19 = (t2 > (int)0);
	}
	else{
		HX_STACK_LINE(439)
		tmp19 = false;
	}
	HX_STACK_LINE(439)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(439)
	if ((tmp19)){
		HX_STACK_LINE(439)
		tmp20 = (t2 <= (int)1);
	}
	else{
		HX_STACK_LINE(439)
		tmp20 = false;
	}
	HX_STACK_LINE(439)
	if ((tmp20)){
		HX_STACK_LINE(441)
		Float tmp21 = a->x;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(441)
		Float tmp22 = t1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(441)
		Float tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(441)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(441)
		Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(441)
		Float tmp26 = a->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(441)
		Float tmp27 = t1;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(441)
		Float tmp28 = this->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(441)
		Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(441)
		Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(441)
		::flixel::math::FlxVector tmp31 = hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set(tmp25,tmp30));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(441)
		return tmp31;
	}
	HX_STACK_LINE(444)
	Float tmp21 = ::Math_obj::NaN;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(444)
	Float tmp22 = ::Math_obj::NaN;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(444)
	::flixel::math::FlxVector tmp23 = hx::TCast< ::flixel::math::FlxVector >::cast(intersection->set(tmp21,tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(444)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxVector_obj,findIntersectionInBounds,return )

::flixel::math::FlxVector FlxVector_obj::truncate( Float max){
	HX_STACK_FRAME("flixel.math.FlxVector","truncate",0x122fce13,"flixel.math.FlxVector.truncate","flixel/math/FlxVector.hx",453,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(454)
	{
		HX_STACK_LINE(454)
		Float tmp = max;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(454)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(454)
		Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(454)
		Float tmp9 = ::Math_obj::min(tmp,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(454)
		Float l = tmp9;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(454)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(454)
		Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(454)
		bool tmp12 = (tmp11 < ((Float)0.0000001));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(454)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(454)
		if ((tmp12)){
			HX_STACK_LINE(454)
			Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(454)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(454)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(454)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(454)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(454)
			tmp13 = (tmp18 < ((Float)0.0000001));
		}
		else{
			HX_STACK_LINE(454)
			tmp13 = false;
		}
		HX_STACK_LINE(454)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(454)
		if ((tmp14)){
			HX_STACK_LINE(454)
			Float tmp15 = this->get_radians();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(454)
			Float a = tmp15;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(454)
			Float tmp16 = l;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(454)
			Float tmp17 = a;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(454)
			Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(454)
			Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(454)
			this->set_x(tmp19);
			HX_STACK_LINE(454)
			Float tmp20 = l;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(454)
			Float tmp21 = a;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(454)
			Float tmp22 = ::Math_obj::sin(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(454)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(454)
			this->set_y(tmp23);
		}
		HX_STACK_LINE(454)
		l;
	}
	HX_STACK_LINE(455)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,truncate,return )

Float FlxVector_obj::radiansBetween( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","radiansBetween",0x7a6c94e3,"flixel.math.FlxVector.radiansBetween","flixel/math/FlxVector.hx",465,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(466)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(466)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(466)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(466)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(466)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(466)
	Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(466)
	Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(466)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(466)
	Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(466)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(466)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(466)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(466)
	Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(466)
	Float tmp15 = (v->x * v->x);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(466)
	Float tmp16 = (v->y * v->y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(466)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(466)
	Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(466)
	Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(466)
	Float tmp20 = (Float(tmp6) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(466)
	Float tmp21 = ::Math_obj::acos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(466)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,radiansBetween,return )

Float FlxVector_obj::degreesBetween( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","degreesBetween",0xcfb1384e,"flixel.math.FlxVector.degreesBetween","flixel/math/FlxVector.hx",476,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(477)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(477)
	Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(477)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(477)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(477)
	Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(477)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(477)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(477)
	Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(477)
	Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(477)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(477)
	Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(477)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(477)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(477)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(477)
	Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(477)
	Float tmp15 = (v->x * v->x);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(477)
	Float tmp16 = (v->y * v->y);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(477)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(477)
	Float tmp18 = ::Math_obj::sqrt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(477)
	Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(477)
	Float tmp20 = (Float(tmp6) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(477)
	Float tmp21 = ::Math_obj::acos(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(477)
	Float tmp22 = ::Math_obj::PI;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(477)
	Float tmp23 = (Float((int)180) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(477)
	Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(477)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,degreesBetween,return )

int FlxVector_obj::sign( ::flixel::math::FlxVector a,::flixel::math::FlxVector b){
	HX_STACK_FRAME("flixel.math.FlxVector","sign",0xb123056a,"flixel.math.FlxVector.sign","flixel/math/FlxVector.hx",487,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(488)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(488)
	Float tmp3 = b->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(488)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(488)
	Float tmp7 = a->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(488)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(488)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(488)
	Float tmp10 = b->x;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(488)
	Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(488)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(488)
	Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(488)
	Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(488)
	Float signFl = tmp14;		HX_STACK_VAR(signFl,"signFl");
	HX_STACK_LINE(489)
	bool tmp15 = (signFl == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(489)
	if ((tmp15)){
		HX_STACK_LINE(491)
		return (int)0;
	}
	HX_STACK_LINE(493)
	Float tmp16 = signFl;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(493)
	Float tmp17 = signFl;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(493)
	Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(493)
	Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(493)
	int tmp20 = ::Math_obj::round(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(493)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,sign,return )

Float FlxVector_obj::dist( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","dist",0xa738dc93,"flixel.math.FlxVector.dist","flixel/math/FlxVector.hx",500,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(501)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(501)
	{
		HX_STACK_LINE(501)
		Float tmp1 = v->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		Float dx = tmp3;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(501)
		Float tmp4 = v->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		Float dy = tmp6;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(501)
		Float tmp7 = (dx * dx);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		Float tmp8 = (dy * dy);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		tmp = (tmp7 + tmp8);
	}
	HX_STACK_LINE(501)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dist,return )

Float FlxVector_obj::distSquared( ::flixel::math::FlxVector v){
	HX_STACK_FRAME("flixel.math.FlxVector","distSquared",0xa9f1dcd4,"flixel.math.FlxVector.distSquared","flixel/math/FlxVector.hx",508,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(509)
	Float tmp = v->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(510)
	Float tmp3 = v->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(510)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(510)
	Float dy = tmp5;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(511)
	Float tmp6 = (dx * dx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(511)
	Float tmp7 = (dy * dy);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(511)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(511)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,distSquared,return )

::flixel::math::FlxVector FlxVector_obj::bounce( ::flixel::math::FlxVector normal,hx::Null< Float >  __o_bounceCoeff){
Float bounceCoeff = __o_bounceCoeff.Default(1);
	HX_STACK_FRAME("flixel.math.FlxVector","bounce",0x35965ff5,"flixel.math.FlxVector.bounce","flixel/math/FlxVector.hx",522,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(bounceCoeff,"bounceCoeff")
{
		HX_STACK_LINE(523)
		Float tmp = ((int)1 + bounceCoeff);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(523)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		Float tmp2 = normal->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(523)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(523)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(523)
		Float tmp5 = normal->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(523)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(523)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(523)
		Float tmp8 = (tmp * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(523)
		Float d = tmp8;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(524)
			Float tmp9 = _g->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(524)
			Float tmp10 = (d * normal->x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(524)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(524)
			_g->set_x(tmp11);
		}
		HX_STACK_LINE(525)
		{
			HX_STACK_LINE(525)
			::flixel::math::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(525)
			Float tmp9 = _g->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(525)
			Float tmp10 = (d * normal->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(525)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(525)
			_g->set_y(tmp11);
		}
		HX_STACK_LINE(526)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,bounce,return )

::flixel::math::FlxVector FlxVector_obj::bounceWithFriction( ::flixel::math::FlxVector normal,hx::Null< Float >  __o_bounceCoeff,hx::Null< Float >  __o_friction){
Float bounceCoeff = __o_bounceCoeff.Default(1);
Float friction = __o_friction.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVector","bounceWithFriction",0xe6f568b5,"flixel.math.FlxVector.bounceWithFriction","flixel/math/FlxVector.hx",538,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(bounceCoeff,"bounceCoeff")
	HX_STACK_ARG(friction,"friction")
{
		HX_STACK_LINE(539)
		::flixel::math::FlxVector tmp = ::flixel::math::FlxVector_obj::_vector3;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(539)
		::flixel::math::FlxVector tmp1 = normal->rightNormal(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(539)
		::flixel::math::FlxVector tmp2 = ::flixel::math::FlxVector_obj::_vector1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		::flixel::math::FlxVector tmp3 = this->projectToNormalized(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		::flixel::math::FlxVector p1 = tmp3;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(540)
		::flixel::math::FlxVector tmp4 = normal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(540)
		::flixel::math::FlxVector tmp5 = ::flixel::math::FlxVector_obj::_vector2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(540)
		::flixel::math::FlxVector tmp6 = this->projectToNormalized(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(540)
		::flixel::math::FlxVector p2 = tmp6;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(541)
		Float tmp7 = p2->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(541)
		Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(541)
		Float bounceX = tmp8;		HX_STACK_VAR(bounceX,"bounceX");
		HX_STACK_LINE(542)
		Float tmp9 = p2->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(542)
		Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(542)
		Float bounceY = tmp10;		HX_STACK_VAR(bounceY,"bounceY");
		HX_STACK_LINE(543)
		Float frictionX = p1->x;		HX_STACK_VAR(frictionX,"frictionX");
		HX_STACK_LINE(544)
		Float frictionY = p1->y;		HX_STACK_VAR(frictionY,"frictionY");
		HX_STACK_LINE(545)
		Float tmp11 = (bounceX * bounceCoeff);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(545)
		Float tmp12 = (frictionX * friction);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(545)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(545)
		this->set_x(tmp13);
		HX_STACK_LINE(546)
		Float tmp14 = (bounceY * bounceCoeff);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(546)
		Float tmp15 = (frictionY * friction);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(546)
		Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(546)
		this->set_y(tmp16);
		HX_STACK_LINE(547)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxVector_obj,bounceWithFriction,return )

bool FlxVector_obj::isValid( ){
	HX_STACK_FRAME("flixel.math.FlxVector","isValid",0x88845da5,"flixel.math.FlxVector.isValid","flixel/math/FlxVector.hx",556,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(557)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	bool tmp1 = ::Math_obj::isNaN(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(557)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(557)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(557)
	if ((tmp4)){
		HX_STACK_LINE(557)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(557)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(557)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(557)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		bool tmp11 = ::Math_obj::isNaN(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(557)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(557)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(557)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(557)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(557)
		tmp5 = !(tmp15);
	}
	else{
		HX_STACK_LINE(557)
		tmp5 = false;
	}
	HX_STACK_LINE(557)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(557)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(557)
	if ((tmp6)){
		HX_STACK_LINE(557)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(557)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(557)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(557)
		tmp7 = ::Math_obj::isFinite(tmp12);
	}
	else{
		HX_STACK_LINE(557)
		tmp7 = false;
	}
	HX_STACK_LINE(557)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(557)
	if ((tmp7)){
		HX_STACK_LINE(557)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(557)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(557)
		tmp8 = ::Math_obj::isFinite(tmp11);
	}
	else{
		HX_STACK_LINE(557)
		tmp8 = false;
	}
	HX_STACK_LINE(557)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isValid,return )

::flixel::math::FlxVector FlxVector_obj::clone( ::flixel::math::FlxVector vec){
	HX_STACK_FRAME("flixel.math.FlxVector","clone",0x191a2590,"flixel.math.FlxVector.clone","flixel/math/FlxVector.hx",567,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(568)
	bool tmp = (vec == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	if ((tmp)){
		HX_STACK_LINE(570)
		::flixel::math::FlxVector tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(570)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(570)
			::flixel::util::FlxPool_flixel_math_FlxVector tmp2 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(570)
			::flixel::math::FlxVector tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(570)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(570)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(570)
			::flixel::math::FlxVector tmp6 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp3->set(tmp4,tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(570)
			::flixel::math::FlxVector vector = tmp6;		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(570)
			vector->_inPool = false;
			HX_STACK_LINE(570)
			tmp1 = vector;
		}
		HX_STACK_LINE(570)
		vec = tmp1;
	}
	HX_STACK_LINE(573)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(573)
	vec->set_x(tmp1);
	HX_STACK_LINE(574)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(574)
	vec->set_y(tmp2);
	HX_STACK_LINE(575)
	::flixel::math::FlxVector tmp3 = vec;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(575)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,clone,return )

Float FlxVector_obj::get_dx( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_dx",0x72a8c94a,"flixel.math.FlxVector.get_dx","flixel/math/FlxVector.hx",579,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(580)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	bool tmp2 = (tmp1 < ((Float)0.0000001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(580)
	if ((tmp2)){
		HX_STACK_LINE(580)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(580)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(580)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(580)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(580)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(580)
		tmp3 = (tmp8 < ((Float)0.0000001));
	}
	else{
		HX_STACK_LINE(580)
		tmp3 = false;
	}
	HX_STACK_LINE(580)
	if ((tmp3)){
		HX_STACK_LINE(580)
		return (int)0;
	}
	HX_STACK_LINE(582)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(582)
	Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(582)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(582)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(582)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(582)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(582)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(582)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(582)
	Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(582)
	Float tmp13 = (Float(tmp4) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(582)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_dx,return )

Float FlxVector_obj::get_dy( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_dy",0x72a8c94b,"flixel.math.FlxVector.get_dy","flixel/math/FlxVector.hx",586,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(587)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(587)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(587)
	bool tmp2 = (tmp1 < ((Float)0.0000001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(587)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(587)
	if ((tmp2)){
		HX_STACK_LINE(587)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(587)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(587)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(587)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(587)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(587)
		tmp3 = (tmp8 < ((Float)0.0000001));
	}
	else{
		HX_STACK_LINE(587)
		tmp3 = false;
	}
	HX_STACK_LINE(587)
	if ((tmp3)){
		HX_STACK_LINE(587)
		return (int)0;
	}
	HX_STACK_LINE(589)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(589)
	Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(589)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(589)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(589)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(589)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(589)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(589)
	Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(589)
	Float tmp12 = ::Math_obj::sqrt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(589)
	Float tmp13 = (Float(tmp4) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(589)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_dy,return )

Float FlxVector_obj::get_length( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_length",0x982a199c,"flixel.math.FlxVector.get_length","flixel/math/FlxVector.hx",593,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(594)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(594)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(594)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(594)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(594)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(594)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(594)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_length,return )

Float FlxVector_obj::set_length( Float l){
	HX_STACK_FRAME("flixel.math.FlxVector","set_length",0x9ba7b810,"flixel.math.FlxVector.set_length","flixel/math/FlxVector.hx",598,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(599)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(599)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(599)
	bool tmp2 = (tmp1 < ((Float)0.0000001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(599)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(599)
	if ((tmp2)){
		HX_STACK_LINE(599)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(599)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(599)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(599)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(599)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(599)
		tmp3 = (tmp8 < ((Float)0.0000001));
	}
	else{
		HX_STACK_LINE(599)
		tmp3 = false;
	}
	HX_STACK_LINE(599)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(599)
	if ((tmp4)){
		HX_STACK_LINE(601)
		Float tmp5 = this->get_radians();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(601)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(602)
		Float tmp6 = l;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(602)
		Float tmp7 = a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(602)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(602)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(602)
		this->set_x(tmp9);
		HX_STACK_LINE(603)
		Float tmp10 = l;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(603)
		Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(603)
		Float tmp12 = ::Math_obj::sin(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(603)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(603)
		this->set_y(tmp13);
	}
	HX_STACK_LINE(605)
	Float tmp5 = l;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(605)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_length,return )

Float FlxVector_obj::get_lengthSquared( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_lengthSquared",0x311842eb,"flixel.math.FlxVector.get_lengthSquared","flixel/math/FlxVector.hx",609,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(610)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(610)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(610)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(610)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(610)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(610)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(610)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(610)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_lengthSquared,return )

Float FlxVector_obj::get_degrees( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_degrees",0x3f6c7e31,"flixel.math.FlxVector.get_degrees","flixel/math/FlxVector.hx",614,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(615)
	Float tmp = this->get_radians();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(615)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(615)
	Float tmp2 = (Float((int)180) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(615)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(615)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_degrees,return )

Float FlxVector_obj::set_degrees( Float degs){
	HX_STACK_FRAME("flixel.math.FlxVector","set_degrees",0x49d9853d,"flixel.math.FlxVector.set_degrees","flixel/math/FlxVector.hx",619,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degs,"degs")
	HX_STACK_LINE(620)
	{
		HX_STACK_LINE(620)
		Float tmp = degs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(620)
		Float tmp2 = (Float(tmp1) / Float((int)180));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		Float rads = tmp3;		HX_STACK_VAR(rads,"rads");
		HX_STACK_LINE(620)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(620)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(620)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(620)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(620)
		Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(620)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(620)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(620)
		Float tmp11 = ::Math_obj::sqrt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(620)
		Float len = tmp11;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(620)
		Float tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(620)
		Float tmp13 = rads;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(620)
		Float tmp14 = ::Math_obj::cos(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(620)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(620)
		this->set_x(tmp15);
		HX_STACK_LINE(620)
		Float tmp16 = len;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(620)
		Float tmp17 = rads;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(620)
		Float tmp18 = ::Math_obj::sin(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(620)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(620)
		this->set_y(tmp19);
		HX_STACK_LINE(620)
		rads;
	}
	HX_STACK_LINE(621)
	Float tmp = degs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_degrees,return )

Float FlxVector_obj::get_radians( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_radians",0x2c01e0fc,"flixel.math.FlxVector.get_radians","flixel/math/FlxVector.hx",625,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(626)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(626)
	bool tmp2 = (tmp1 < ((Float)0.0000001));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(626)
	if ((tmp2)){
		HX_STACK_LINE(626)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(626)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(626)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(626)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(626)
		tmp3 = (tmp8 < ((Float)0.0000001));
	}
	else{
		HX_STACK_LINE(626)
		tmp3 = false;
	}
	HX_STACK_LINE(626)
	if ((tmp3)){
		HX_STACK_LINE(626)
		return (int)0;
	}
	HX_STACK_LINE(628)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(628)
	Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(628)
	Float tmp6 = ::Math_obj::atan2(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(628)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_radians,return )

Float FlxVector_obj::set_radians( Float rads){
	HX_STACK_FRAME("flixel.math.FlxVector","set_radians",0x366ee808,"flixel.math.FlxVector.set_radians","flixel/math/FlxVector.hx",632,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rads,"rads")
	HX_STACK_LINE(633)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(633)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(633)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(633)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(633)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(633)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(633)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(633)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(633)
	Float len = tmp7;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(635)
	Float tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(635)
	Float tmp9 = rads;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(635)
	Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(635)
	Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(635)
	this->set_x(tmp11);
	HX_STACK_LINE(636)
	Float tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(636)
	Float tmp13 = rads;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(636)
	Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(636)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(636)
	this->set_y(tmp15);
	HX_STACK_LINE(637)
	Float tmp16 = rads;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(637)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_radians,return )

Float FlxVector_obj::get_rx( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_rx",0x72a8d57c,"flixel.math.FlxVector.get_rx","flixel/math/FlxVector.hx",641,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(642)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(642)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(642)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_rx,return )

Float FlxVector_obj::get_ry( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_ry",0x72a8d57d,"flixel.math.FlxVector.get_ry","flixel/math/FlxVector.hx",646,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(647)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(647)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_ry,return )

Float FlxVector_obj::get_lx( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_lx",0x72a8d042,"flixel.math.FlxVector.get_lx","flixel/math/FlxVector.hx",651,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(652)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(652)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_lx,return )

Float FlxVector_obj::get_ly( ){
	HX_STACK_FRAME("flixel.math.FlxVector","get_ly",0x72a8d043,"flixel.math.FlxVector.get_ly","flixel/math/FlxVector.hx",656,0x1fcaa75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(657)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(657)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_ly,return )

Float FlxVector_obj::EPSILON;

Float FlxVector_obj::EPSILON_SQUARED;

::flixel::util::FlxPool_flixel_math_FlxVector FlxVector_obj::_pool;

::flixel::math::FlxVector FlxVector_obj::_vector1;

::flixel::math::FlxVector FlxVector_obj::_vector2;

::flixel::math::FlxVector FlxVector_obj::_vector3;

::flixel::math::FlxVector FlxVector_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.math.FlxVector","get",0xe9cc9009,"flixel.math.FlxVector.get","flixel/math/FlxVector.hx",27,0x1fcaa75d)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(28)
		::flixel::util::FlxPool_flixel_math_FlxVector tmp = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::flixel::math::FlxVector tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::flixel::math::FlxVector tmp4 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp1->set(tmp2,tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::flixel::math::FlxVector vector = tmp4;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(29)
		vector->_inPool = false;
		HX_STACK_LINE(30)
		::flixel::math::FlxVector tmp5 = vector;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,get,return )


FlxVector_obj::FlxVector_obj()
{
}

Dynamic FlxVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { if (inCallProp == hx::paccAlways) return get_dx(); }
		if (HX_FIELD_EQ(inName,"dy") ) { if (inCallProp == hx::paccAlways) return get_dy(); }
		if (HX_FIELD_EQ(inName,"rx") ) { if (inCallProp == hx::paccAlways) return get_rx(); }
		if (HX_FIELD_EQ(inName,"ry") ) { if (inCallProp == hx::paccAlways) return get_ry(); }
		if (HX_FIELD_EQ(inName,"lx") ) { if (inCallProp == hx::paccAlways) return get_lx(); }
		if (HX_FIELD_EQ(inName,"ly") ) { if (inCallProp == hx::paccAlways) return get_ly(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { return zero_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"addNew") ) { return addNew_dyn(); }
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dx") ) { return get_dx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dy") ) { return get_dy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rx") ) { return get_rx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ry") ) { return get_ry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lx") ) { return get_lx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ly") ) { return get_ly_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { if (inCallProp == hx::paccAlways) return get_degrees(); }
		if (HX_FIELD_EQ(inName,"radians") ) { if (inCallProp == hx::paccAlways) return get_radians(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"scaleNew") ) { return scaleNew_dyn(); }
		if (HX_FIELD_EQ(inName,"truncate") ) { return truncate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"negateNew") ) { return negateNew_dyn(); }
		if (HX_FIELD_EQ(inName,"projectTo") ) { return projectTo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"isParallel") ) { return isParallel_dyn(); }
		if (HX_FIELD_EQ(inName,"leftNormal") ) { return leftNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subtractNew") ) { return subtractNew_dyn(); }
		if (HX_FIELD_EQ(inName,"rightNormal") ) { return rightNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"perpProduct") ) { return perpProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"distSquared") ) { return distSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"get_degrees") ) { return get_degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"set_degrees") ) { return set_degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return get_radians_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radians") ) { return set_radians_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isNormalized") ) { return isNormalized_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { if (inCallProp == hx::paccAlways) return get_lengthSquared(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { return rotateWithTrig_dyn(); }
		if (HX_FIELD_EQ(inName,"radiansBetween") ) { return radiansBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"degreesBetween") ) { return degreesBetween_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isPerpendicular") ) { return isPerpendicular_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByRadians") ) { return rotateByRadians_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByDegrees") ) { return rotateByDegrees_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findIntersection") ) { return findIntersection_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"crossProductLength") ) { return crossProductLength_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceWithFriction") ) { return bounceWithFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"projectToNormalized") ) { return projectToNormalized_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"dotProdWithNormalizing") ) { return dotProdWithNormalizing_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findIntersectionInBounds") ) { return findIntersectionInBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxVector_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vector1") ) { outValue = _vector1; return true;  }
		if (HX_FIELD_EQ(inName,"_vector2") ) { outValue = _vector2; return true;  }
		if (HX_FIELD_EQ(inName,"_vector3") ) { outValue = _vector3; return true;  }
	}
	return false;
}

Dynamic FlxVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { if (inCallProp == hx::paccAlways) return set_degrees(inValue); }
		if (HX_FIELD_EQ(inName,"radians") ) { if (inCallProp == hx::paccAlways) return set_radians(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxVector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool_flixel_math_FlxVector >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vector1") ) { _vector1=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"_vector2") ) { _vector2=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
		if (HX_FIELD_EQ(inName,"_vector3") ) { _vector3=ioValue.Cast< ::flixel::math::FlxVector >(); return true; }
	}
	return false;
}

void FlxVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("lengthSquared","\xe1","\x24","\x45","\x35"));
	outFields->push(HX_HCSTRING("degrees","\xa7","\xe3","\x5a","\x3a"));
	outFields->push(HX_HCSTRING("radians","\x72","\x46","\xf0","\x26"));
	outFields->push(HX_HCSTRING("rx","\xc6","\x63","\x00","\x00"));
	outFields->push(HX_HCSTRING("ry","\xc7","\x63","\x00","\x00"));
	outFields->push(HX_HCSTRING("lx","\x8c","\x5e","\x00","\x00"));
	outFields->push(HX_HCSTRING("ly","\x8d","\x5e","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxVector_obj::EPSILON,HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c")},
	{hx::fsFloat,(void *) &FlxVector_obj::EPSILON_SQUARED,HX_HCSTRING("EPSILON_SQUARED","\xd2","\x99","\xe6","\x6d")},
	{hx::fsObject /*::flixel::util::FlxPool_flixel_math_FlxVector*/ ,(void *) &FlxVector_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxVector_obj::_vector1,HX_HCSTRING("_vector1","\x8f","\x53","\x55","\x14")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxVector_obj::_vector2,HX_HCSTRING("_vector2","\x90","\x53","\x55","\x14")},
	{hx::fsObject /*::flixel::math::FlxVector*/ ,(void *) &FlxVector_obj::_vector3,HX_HCSTRING("_vector3","\x91","\x53","\x55","\x14")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("scaleNew","\xf6","\xeb","\x58","\x01"),
	HX_HCSTRING("addNew","\xbf","\xe0","\x04","\x9f"),
	HX_HCSTRING("subtractNew","\xac","\x77","\xf9","\x0b"),
	HX_HCSTRING("dotProduct","\xa6","\x27","\xf0","\x3d"),
	HX_HCSTRING("dotProdWithNormalizing","\xc4","\xc2","\x75","\x68"),
	HX_HCSTRING("isPerpendicular","\x60","\x10","\x79","\x24"),
	HX_HCSTRING("crossProductLength","\xd5","\x45","\x1a","\x6f"),
	HX_HCSTRING("isParallel","\xd1","\xbc","\xa5","\xf8"),
	HX_HCSTRING("isZero","\x32","\xd4","\x57","\x6e"),
	HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("isNormalized","\xc1","\x8c","\x8e","\x53"),
	HX_HCSTRING("rotateByRadians","\x80","\x07","\x76","\xe7"),
	HX_HCSTRING("rotateByDegrees","\xb5","\xa4","\xe0","\xfa"),
	HX_HCSTRING("rotateWithTrig","\x7d","\x0f","\x08","\xe3"),
	HX_HCSTRING("rightNormal","\x23","\x3f","\xee","\x99"),
	HX_HCSTRING("leftNormal","\x8e","\x2d","\x7a","\x5f"),
	HX_HCSTRING("negate","\xc2","\x41","\x19","\x67"),
	HX_HCSTRING("negateNew","\xbe","\x4b","\xdc","\xc5"),
	HX_HCSTRING("projectTo","\xb4","\x84","\xf8","\x94"),
	HX_HCSTRING("projectToNormalized","\x0b","\x56","\xc9","\x3e"),
	HX_HCSTRING("perpProduct","\x7c","\xfe","\x93","\xf3"),
	HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"),
	HX_HCSTRING("findIntersection","\x22","\xb0","\x83","\xae"),
	HX_HCSTRING("findIntersectionInBounds","\x7c","\x2e","\x11","\x2e"),
	HX_HCSTRING("truncate","\x66","\xbe","\xf9","\xce"),
	HX_HCSTRING("radiansBetween","\x76","\x05","\xc0","\x0e"),
	HX_HCSTRING("degreesBetween","\xe1","\xa8","\x04","\x64"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("dist","\x66","\x67","\x69","\x42"),
	HX_HCSTRING("distSquared","\x61","\xa2","\xda","\x2a"),
	HX_HCSTRING("bounce","\x88","\x85","\x1d","\x66"),
	HX_HCSTRING("bounceWithFriction","\xc8","\x1e","\xa8","\x25"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_dx","\xdd","\xee","\x2f","\xa3"),
	HX_HCSTRING("get_dy","\xde","\xee","\x2f","\xa3"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_lengthSquared","\x38","\x30","\xb5","\x3b"),
	HX_HCSTRING("get_degrees","\xbe","\x43","\x55","\xc0"),
	HX_HCSTRING("set_degrees","\xca","\x4a","\xc2","\xca"),
	HX_HCSTRING("get_radians","\x89","\xa6","\xea","\xac"),
	HX_HCSTRING("set_radians","\x95","\xad","\x57","\xb7"),
	HX_HCSTRING("get_rx","\x0f","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_ry","\x10","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_lx","\xd5","\xf5","\x2f","\xa3"),
	HX_HCSTRING("get_ly","\xd6","\xf5","\x2f","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVector_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxVector_obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(FlxVector_obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_pool,"_pool");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector1,"_vector1");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector2,"_vector2");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector3,"_vector3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVector_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_pool,"_pool");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector1,"_vector1");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector2,"_vector2");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector3,"_vector3");
};

#endif

hx::Class FlxVector_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c"),
	HX_HCSTRING("EPSILON_SQUARED","\xd2","\x99","\xe6","\x6d"),
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("_vector1","\x8f","\x53","\x55","\x14"),
	HX_HCSTRING("_vector2","\x90","\x53","\x55","\x14"),
	HX_HCSTRING("_vector3","\x91","\x53","\x55","\x14"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

void FlxVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxVector","\x61","\xfa","\x32","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxVector_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxVector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxVector_obj >;
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

void FlxVector_obj::__boot()
{
	EPSILON= ((Float)0.0000001);
	EPSILON_SQUARED= ((Float)9.9999999999999984e-015);
	_pool= ::flixel::util::FlxPool_flixel_math_FlxVector_obj::__new(hx::ClassOf< ::flixel::math::FlxVector >());
	_vector1= ::flixel::math::FlxVector_obj::__new(null(),null());
	_vector2= ::flixel::math::FlxVector_obj::__new(null(),null());
	_vector3= ::flixel::math::FlxVector_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace math
