#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace math{

Void FlxRect_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.math.FlxRect","new",0xa1ebbd34,"flixel.math.FlxRect.new","flixel/math/FlxRect.hx",11,0x2aef791c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
{
	HX_STACK_LINE(70)
	this->_inPool = false;
	HX_STACK_LINE(69)
	this->_weak = false;
	HX_STACK_LINE(75)
	this->x = X;
	HX_STACK_LINE(75)
	this->y = Y;
	HX_STACK_LINE(75)
	this->width = Width;
	HX_STACK_LINE(75)
	this->height = Height;
	HX_STACK_LINE(75)
	hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//FlxRect_obj::~FlxRect_obj() { }

Dynamic FlxRect_obj::__CreateEmpty() { return  new FlxRect_obj; }
hx::ObjectPtr< FlxRect_obj > FlxRect_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxRect_obj > _result_ = new FlxRect_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return _result_;}

Dynamic FlxRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRect_obj > _result_ = new FlxRect_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxRect_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxPooled_obj)) return operator ::flixel::util::IFlxPooled_obj *();
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxRect_obj::operator ::flixel::util::IFlxPooled_obj *()
	{ return new ::flixel::util::IFlxPooled_delegate_< FlxRect_obj >(this); }
FlxRect_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxRect_obj >(this); }
Void FlxRect_obj::put( ){
{
		HX_STACK_FRAME("flixel.math.FlxRect","put",0xa1ed4fa3,"flixel.math.FlxRect.put","flixel/math/FlxRect.hx",82,0x2aef791c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		bool tmp = this->_inPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(85)
			this->_inPool = true;
			HX_STACK_LINE(86)
			this->_weak = false;
			HX_STACK_LINE(87)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp2 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			tmp2->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,put,(void))

Void FlxRect_obj::putWeak( ){
{
		HX_STACK_FRAME("flixel.math.FlxRect","putWeak",0x585fe5bb,"flixel.math.FlxRect.putWeak","flixel/math/FlxRect.hx",95,0x2aef791c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		bool tmp = this->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		if ((tmp)){
			HX_STACK_LINE(98)
			bool tmp1 = this->_inPool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			if ((tmp2)){
				HX_STACK_LINE(98)
				this->_inPool = true;
				HX_STACK_LINE(98)
				this->_weak = false;
				HX_STACK_LINE(98)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(98)
				tmp3->putUnsafe(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,putWeak,(void))

::flixel::math::FlxRect FlxRect_obj::setSize( Float Width,Float Height){
	HX_STACK_FRAME("flixel.math.FlxRect","setSize",0x6cc8c857,"flixel.math.FlxRect.setSize","flixel/math/FlxRect.hx",109,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(110)
	this->width = Width;
	HX_STACK_LINE(111)
	this->height = Height;
	HX_STACK_LINE(112)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setSize,return )

::flixel::math::FlxRect FlxRect_obj::setPosition( Float x,Float y){
	HX_STACK_FRAME("flixel.math.FlxRect","setPosition",0xc8aa4b3f,"flixel.math.FlxRect.setPosition","flixel/math/FlxRect.hx",119,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(120)
	this->x = x;
	HX_STACK_LINE(121)
	this->y = y;
	HX_STACK_LINE(122)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,setPosition,return )

::flixel::math::FlxRect FlxRect_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRect","set",0xa1ef8876,"flixel.math.FlxRect.set","flixel/math/FlxRect.hx",135,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(136)
		this->x = X;
		HX_STACK_LINE(137)
		this->y = Y;
		HX_STACK_LINE(138)
		this->width = Width;
		HX_STACK_LINE(139)
		this->height = Height;
		HX_STACK_LINE(140)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,set,return )

::flixel::math::FlxRect FlxRect_obj::copyFrom( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyFrom",0x003a1e6b,"flixel.math.FlxRect.copyFrom","flixel/math/FlxRect.hx",150,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(151)
	this->x = Rect->x;
	HX_STACK_LINE(152)
	this->y = Rect->y;
	HX_STACK_LINE(153)
	this->width = Rect->width;
	HX_STACK_LINE(154)
	this->height = Rect->height;
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		bool tmp = Rect->_weak;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		if ((tmp)){
			HX_STACK_LINE(156)
			bool tmp1 = Rect->_inPool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			if ((tmp2)){
				HX_STACK_LINE(156)
				Rect->_inPool = true;
				HX_STACK_LINE(156)
				Rect->_weak = false;
				HX_STACK_LINE(156)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				::flixel::math::FlxRect tmp4 = Rect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(156)
				tmp3->putUnsafe(tmp4);
			}
		}
	}
	HX_STACK_LINE(157)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFrom,return )

::flixel::math::FlxRect FlxRect_obj::copyTo( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyTo",0x8a77ec3c,"flixel.math.FlxRect.copyTo","flixel/math/FlxRect.hx",167,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(168)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	Rect->x = tmp;
	HX_STACK_LINE(169)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	Rect->y = tmp1;
	HX_STACK_LINE(170)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	Rect->width = tmp2;
	HX_STACK_LINE(171)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(171)
	Rect->height = tmp3;
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		bool tmp4 = Rect->_weak;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		if ((tmp4)){
			HX_STACK_LINE(173)
			bool tmp5 = Rect->_inPool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			if ((tmp6)){
				HX_STACK_LINE(173)
				Rect->_inPool = true;
				HX_STACK_LINE(173)
				Rect->_weak = false;
				HX_STACK_LINE(173)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp7 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(173)
				::flixel::math::FlxRect tmp8 = Rect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				tmp7->putUnsafe(tmp8);
			}
		}
	}
	HX_STACK_LINE(174)
	::flixel::math::FlxRect tmp4 = Rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(174)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyTo,return )

::flixel::math::FlxRect FlxRect_obj::copyFromFlash( ::openfl::_legacy::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyFromFlash",0x00426345,"flixel.math.FlxRect.copyFromFlash","flixel/math/FlxRect.hx",184,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(185)
	this->x = FlashRect->x;
	HX_STACK_LINE(186)
	this->y = FlashRect->y;
	HX_STACK_LINE(187)
	this->width = FlashRect->width;
	HX_STACK_LINE(188)
	this->height = FlashRect->height;
	HX_STACK_LINE(189)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyFromFlash,return )

::openfl::_legacy::geom::Rectangle FlxRect_obj::copyToFlash( ::openfl::_legacy::geom::Rectangle FlashRect){
	HX_STACK_FRAME("flixel.math.FlxRect","copyToFlash",0xf273dfd4,"flixel.math.FlxRect.copyToFlash","flixel/math/FlxRect.hx",199,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FlashRect,"FlashRect")
	HX_STACK_LINE(200)
	bool tmp = (FlashRect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	if ((tmp)){
		HX_STACK_LINE(202)
		::openfl::_legacy::geom::Rectangle tmp1 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		FlashRect = tmp1;
	}
	HX_STACK_LINE(205)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	FlashRect->x = tmp1;
	HX_STACK_LINE(206)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	FlashRect->y = tmp2;
	HX_STACK_LINE(207)
	Float tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	FlashRect->width = tmp3;
	HX_STACK_LINE(208)
	Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	FlashRect->height = tmp4;
	HX_STACK_LINE(209)
	::openfl::_legacy::geom::Rectangle tmp5 = FlashRect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,copyToFlash,return )

bool FlxRect_obj::overlaps( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","overlaps",0x7d03e5b8,"flixel.math.FlxRect.overlaps","flixel/math/FlxRect.hx",219,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(221)
	Float tmp = (Rect->x + Rect->width);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(221)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(221)
	if ((tmp3)){
		HX_STACK_LINE(222)
		Float tmp5 = Rect->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		Float tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(222)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		tmp4 = (tmp5 < tmp14);
	}
	else{
		HX_STACK_LINE(221)
		tmp4 = false;
	}
	HX_STACK_LINE(221)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(221)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(221)
	if ((tmp5)){
		HX_STACK_LINE(223)
		Float tmp7 = (Rect->y + Rect->height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(223)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(223)
		tmp6 = (tmp9 > tmp12);
	}
	else{
		HX_STACK_LINE(221)
		tmp6 = false;
	}
	HX_STACK_LINE(221)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(221)
	if ((tmp6)){
		HX_STACK_LINE(224)
		Float tmp8 = Rect->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(224)
		Float tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(224)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(224)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(224)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(224)
		tmp7 = (tmp8 < tmp14);
	}
	else{
		HX_STACK_LINE(221)
		tmp7 = false;
	}
	HX_STACK_LINE(221)
	bool result = tmp7;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		bool tmp8 = Rect->_weak;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		if ((tmp8)){
			HX_STACK_LINE(225)
			bool tmp9 = Rect->_inPool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(225)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(225)
			if ((tmp10)){
				HX_STACK_LINE(225)
				Rect->_inPool = true;
				HX_STACK_LINE(225)
				Rect->_weak = false;
				HX_STACK_LINE(225)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(225)
				::flixel::math::FlxRect tmp12 = Rect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				tmp11->putUnsafe(tmp12);
			}
		}
	}
	HX_STACK_LINE(226)
	bool tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(226)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,overlaps,return )

bool FlxRect_obj::containsPoint( ::flixel::math::FlxPoint Point){
	HX_STACK_FRAME("flixel.math.FlxRect","containsPoint",0x7a537785,"flixel.math.FlxRect.containsPoint","flixel/math/FlxRect.hx",236,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point,"Point")
	HX_STACK_LINE(237)
	Float tmp = Point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	Float tmp1 = Point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	bool tmp2 = ::flixel::math::FlxMath_obj::pointInFlxRect(tmp,tmp1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	bool result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		bool tmp3 = Point->_weak;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		if ((tmp3)){
			HX_STACK_LINE(238)
			Point->put();
		}
	}
	HX_STACK_LINE(239)
	bool tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,containsPoint,return )

::flixel::math::FlxRect FlxRect_obj::_union( ::flixel::math::FlxRect Rect){
	HX_STACK_FRAME("flixel.math.FlxRect","union",0xcff32ee3,"flixel.math.FlxRect.union","flixel/math/FlxRect.hx",250,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Rect,"Rect")
	HX_STACK_LINE(251)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	Float tmp1 = Rect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	Float minX = tmp2;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(252)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	Float tmp4 = Rect->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(252)
	Float minY = tmp5;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(253)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(253)
	Float tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(253)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(253)
	Float tmp9 = (Rect->x + Rect->width);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(253)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(253)
	Float maxX = tmp10;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(254)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(254)
	Float tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(254)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(254)
	Float tmp14 = (Rect->y + Rect->height);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(254)
	Float tmp15 = ::Math_obj::max(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(254)
	Float maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		bool tmp16 = Rect->_weak;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(256)
		if ((tmp16)){
			HX_STACK_LINE(256)
			bool tmp17 = Rect->_inPool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(256)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			if ((tmp18)){
				HX_STACK_LINE(256)
				Rect->_inPool = true;
				HX_STACK_LINE(256)
				Rect->_weak = false;
				HX_STACK_LINE(256)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp19 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(256)
				::flixel::math::FlxRect tmp20 = Rect;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				tmp19->putUnsafe(tmp20);
			}
		}
	}
	HX_STACK_LINE(257)
	::flixel::math::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(257)
	{
		HX_STACK_LINE(257)
		this->x = minX;
		HX_STACK_LINE(257)
		this->y = minY;
		HX_STACK_LINE(257)
		Float tmp17 = (maxX - minX);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(257)
		this->width = tmp17;
		HX_STACK_LINE(257)
		Float tmp18 = (maxY - minY);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(257)
		this->height = tmp18;
		HX_STACK_LINE(257)
		tmp16 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(257)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,_union,return )

::flixel::math::FlxRect FlxRect_obj::floor( ){
	HX_STACK_FRAME("flixel.math.FlxRect","floor",0x2ba29ba0,"flixel.math.FlxRect.floor","flixel/math/FlxRect.hx",264,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	int tmp1 = ::Math_obj::floor(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	this->x = tmp1;
	HX_STACK_LINE(266)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	this->y = tmp3;
	HX_STACK_LINE(267)
	Float tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(267)
	int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(267)
	this->width = tmp5;
	HX_STACK_LINE(268)
	Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(268)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(268)
	this->height = tmp7;
	HX_STACK_LINE(269)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,floor,return )

::flixel::math::FlxRect FlxRect_obj::ceil( ){
	HX_STACK_FRAME("flixel.math.FlxRect","ceil",0x05146bb1,"flixel.math.FlxRect.ceil","flixel/math/FlxRect.hx",276,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	int tmp1 = ::Math_obj::ceil(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	this->x = tmp1;
	HX_STACK_LINE(278)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	int tmp3 = ::Math_obj::ceil(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	this->y = tmp3;
	HX_STACK_LINE(279)
	Float tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(279)
	this->width = tmp5;
	HX_STACK_LINE(280)
	Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(280)
	int tmp7 = ::Math_obj::ceil(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(280)
	this->height = tmp7;
	HX_STACK_LINE(281)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,ceil,return )

::flixel::math::FlxRect FlxRect_obj::round( ){
	HX_STACK_FRAME("flixel.math.FlxRect","round",0x1671c222,"flixel.math.FlxRect.round","flixel/math/FlxRect.hx",288,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(289)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(289)
	this->x = tmp1;
	HX_STACK_LINE(290)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(290)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(290)
	this->y = tmp3;
	HX_STACK_LINE(291)
	Float tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(291)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(291)
	this->width = tmp5;
	HX_STACK_LINE(292)
	Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(292)
	int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(292)
	this->height = tmp7;
	HX_STACK_LINE(293)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,round,return )

::flixel::math::FlxRect FlxRect_obj::fromTwoPoints( ::flixel::math::FlxPoint Point1,::flixel::math::FlxPoint Point2){
	HX_STACK_FRAME("flixel.math.FlxRect","fromTwoPoints",0xbab89fd9,"flixel.math.FlxRect.fromTwoPoints","flixel/math/FlxRect.hx",304,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point1,"Point1")
	HX_STACK_ARG(Point2,"Point2")
	HX_STACK_LINE(305)
	Float tmp = Point1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(305)
	Float tmp1 = Point2->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(305)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(305)
	Float minX = tmp2;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(306)
	Float tmp3 = Point1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(306)
	Float tmp4 = Point2->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(306)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(306)
	Float minY = tmp5;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(308)
	Float tmp6 = Point1->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(308)
	Float tmp7 = Point2->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(308)
	Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(308)
	Float maxX = tmp8;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(309)
	Float tmp9 = Point1->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(309)
	Float tmp10 = Point2->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(309)
	Float tmp11 = ::Math_obj::max(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(309)
	Float maxY = tmp11;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		bool tmp12 = Point1->_weak;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(311)
		if ((tmp12)){
			HX_STACK_LINE(311)
			Point1->put();
		}
	}
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		bool tmp12 = Point2->_weak;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		if ((tmp12)){
			HX_STACK_LINE(312)
			Point2->put();
		}
	}
	HX_STACK_LINE(313)
	::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		this->x = minX;
		HX_STACK_LINE(313)
		this->y = minY;
		HX_STACK_LINE(313)
		Float tmp13 = (maxX - minX);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(313)
		this->width = tmp13;
		HX_STACK_LINE(313)
		Float tmp14 = (maxY - minY);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(313)
		this->height = tmp14;
		HX_STACK_LINE(313)
		tmp12 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(313)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,fromTwoPoints,return )

::flixel::math::FlxRect FlxRect_obj::unionWithPoint( ::flixel::math::FlxPoint Point){
	HX_STACK_FRAME("flixel.math.FlxRect","unionWithPoint",0xe98f5507,"flixel.math.FlxRect.unionWithPoint","flixel/math/FlxRect.hx",324,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Point,"Point")
	HX_STACK_LINE(325)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(325)
	Float tmp1 = Point->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(325)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	Float minX = tmp2;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(326)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(326)
	Float tmp4 = Point->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(326)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(326)
	Float minY = tmp5;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(327)
	Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(327)
	Float tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(327)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(327)
	Float tmp9 = Point->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(327)
	Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(327)
	Float maxX = tmp10;		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(328)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(328)
	Float tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(328)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(328)
	Float tmp14 = Point->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(328)
	Float tmp15 = ::Math_obj::max(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(328)
	Float maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		bool tmp16 = Point->_weak;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(330)
		if ((tmp16)){
			HX_STACK_LINE(330)
			Point->put();
		}
	}
	HX_STACK_LINE(331)
	::flixel::math::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(331)
	{
		HX_STACK_LINE(331)
		this->x = minX;
		HX_STACK_LINE(331)
		this->y = minY;
		HX_STACK_LINE(331)
		Float tmp17 = (maxX - minX);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(331)
		this->width = tmp17;
		HX_STACK_LINE(331)
		Float tmp18 = (maxY - minY);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(331)
		this->height = tmp18;
		HX_STACK_LINE(331)
		tmp16 = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(331)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,unionWithPoint,return )

::flixel::math::FlxRect FlxRect_obj::offset( Float dx,Float dy){
	HX_STACK_FRAME("flixel.math.FlxRect","offset",0x2184673f,"flixel.math.FlxRect.offset","flixel/math/FlxRect.hx",335,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dx,"dx")
	HX_STACK_ARG(dy,"dy")
	HX_STACK_LINE(336)
	hx::AddEq(this->x,dx);
	HX_STACK_LINE(337)
	hx::AddEq(this->y,dy);
	HX_STACK_LINE(338)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRect_obj,offset,return )

Void FlxRect_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.math.FlxRect","destroy",0x7f7713ce,"flixel.math.FlxRect.destroy","flixel/math/FlxRect.hx",344,0x2aef791c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,destroy,(void))

bool FlxRect_obj::equals( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxRect","equals",0x8137bdeb,"flixel.math.FlxRect.equals","flixel/math/FlxRect.hx",353,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(355)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	{
		HX_STACK_LINE(355)
		Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(355)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		Float tmp3 = rect->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(355)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(355)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(355)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(355)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(355)
		Float tmp9 = aDiff;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(355)
		tmp = (tmp8 <= tmp9);
	}
	HX_STACK_LINE(355)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	if ((tmp1)){
		HX_STACK_LINE(356)
		Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(356)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(356)
		Float tmp6 = rect->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(356)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(356)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(356)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(356)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(356)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(356)
		Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(356)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(356)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(356)
		Float tmp15 = aDiff;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(356)
		tmp2 = (tmp14 <= tmp15);
	}
	else{
		HX_STACK_LINE(355)
		tmp2 = false;
	}
	HX_STACK_LINE(355)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(355)
	if ((tmp3)){
		HX_STACK_LINE(357)
		Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(357)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(357)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(357)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(357)
		Float tmp8 = rect->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(357)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(357)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(357)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(357)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(357)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(357)
		Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(357)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(357)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(357)
		Float tmp17 = aDiff;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(357)
		tmp4 = (tmp16 <= tmp17);
	}
	else{
		HX_STACK_LINE(355)
		tmp4 = false;
	}
	HX_STACK_LINE(355)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(355)
	if ((tmp4)){
		HX_STACK_LINE(358)
		Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
		HX_STACK_LINE(358)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(358)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(358)
		Float tmp8 = rect->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(358)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(358)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(358)
		Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(358)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(358)
		Float tmp14 = aDiff;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(358)
		tmp5 = (tmp13 <= tmp14);
	}
	else{
		HX_STACK_LINE(355)
		tmp5 = false;
	}
	HX_STACK_LINE(355)
	bool result = tmp5;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(359)
	{
		HX_STACK_LINE(359)
		bool tmp6 = rect->_weak;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(359)
		if ((tmp6)){
			HX_STACK_LINE(359)
			bool tmp7 = rect->_inPool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(359)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(359)
			if ((tmp8)){
				HX_STACK_LINE(359)
				rect->_inPool = true;
				HX_STACK_LINE(359)
				rect->_weak = false;
				HX_STACK_LINE(359)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(359)
				::flixel::math::FlxRect tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(359)
				tmp9->putUnsafe(tmp10);
			}
		}
	}
	HX_STACK_LINE(360)
	bool tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(360)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,equals,return )

::flixel::math::FlxRect FlxRect_obj::intersection( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.math.FlxRect","intersection",0x60177af5,"flixel.math.FlxRect.intersection","flixel/math/FlxRect.hx",371,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(372)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(372)
	Float tmp1 = rect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(372)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(372)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(372)
	if ((tmp2)){
		HX_STACK_LINE(372)
		tmp3 = rect->x;
	}
	else{
		HX_STACK_LINE(372)
		tmp3 = this->x;
	}
	HX_STACK_LINE(372)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(373)
	Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(373)
	Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(373)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(373)
	Float tmp7 = (rect->x + rect->width);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(373)
	bool tmp8 = (tmp6 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(373)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(373)
	if ((tmp8)){
		HX_STACK_LINE(373)
		tmp9 = (rect->x + rect->width);
	}
	else{
		HX_STACK_LINE(373)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(373)
		Float tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(373)
		tmp9 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(373)
	Float x1 = tmp9;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(374)
	bool tmp10 = (x1 <= x0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(374)
	if ((tmp10)){
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			bool tmp11 = rect->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(376)
			if ((tmp11)){
				HX_STACK_LINE(376)
				bool tmp12 = rect->_inPool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(376)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(376)
				if ((tmp13)){
					HX_STACK_LINE(376)
					rect->_inPool = true;
					HX_STACK_LINE(376)
					rect->_weak = false;
					HX_STACK_LINE(376)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp14 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(376)
					::flixel::math::FlxRect tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(376)
					tmp14->putUnsafe(tmp15);
				}
			}
		}
		HX_STACK_LINE(377)
		::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp13 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(377)
				::flixel::math::FlxRect tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(377)
				::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(377)
				_this->x = (int)0;
				HX_STACK_LINE(377)
				_this->y = (int)0;
				HX_STACK_LINE(377)
				_this->width = (int)0;
				HX_STACK_LINE(377)
				_this->height = (int)0;
				HX_STACK_LINE(377)
				tmp12 = _this;
			}
			HX_STACK_LINE(377)
			::flixel::math::FlxRect rect1 = tmp12;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(377)
			rect1->_inPool = false;
			HX_STACK_LINE(377)
			tmp11 = rect1;
		}
		HX_STACK_LINE(377)
		return tmp11;
	}
	HX_STACK_LINE(380)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(380)
	Float tmp12 = rect->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(380)
	bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(380)
	Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(380)
	if ((tmp13)){
		HX_STACK_LINE(380)
		tmp14 = rect->y;
	}
	else{
		HX_STACK_LINE(380)
		tmp14 = this->y;
	}
	HX_STACK_LINE(380)
	Float y0 = tmp14;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(381)
	Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(381)
	Float tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(381)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(381)
	Float tmp18 = (rect->y + rect->height);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(381)
	bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(381)
	Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(381)
	if ((tmp19)){
		HX_STACK_LINE(381)
		tmp20 = (rect->y + rect->height);
	}
	else{
		HX_STACK_LINE(381)
		Float tmp21 = this->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(381)
		Float tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(381)
		tmp20 = (tmp21 + tmp22);
	}
	HX_STACK_LINE(381)
	Float y1 = tmp20;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(382)
	bool tmp21 = (y1 <= y0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(382)
	if ((tmp21)){
		HX_STACK_LINE(384)
		{
			HX_STACK_LINE(384)
			bool tmp22 = rect->_weak;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(384)
			if ((tmp22)){
				HX_STACK_LINE(384)
				bool tmp23 = rect->_inPool;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(384)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(384)
				if ((tmp24)){
					HX_STACK_LINE(384)
					rect->_inPool = true;
					HX_STACK_LINE(384)
					rect->_weak = false;
					HX_STACK_LINE(384)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp25 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(384)
					::flixel::math::FlxRect tmp26 = rect;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(384)
					tmp25->putUnsafe(tmp26);
				}
			}
		}
		HX_STACK_LINE(385)
		::flixel::math::FlxRect tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(385)
		{
			HX_STACK_LINE(385)
			::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(385)
			{
				HX_STACK_LINE(385)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(385)
				::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(385)
				::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(385)
				_this->x = (int)0;
				HX_STACK_LINE(385)
				_this->y = (int)0;
				HX_STACK_LINE(385)
				_this->width = (int)0;
				HX_STACK_LINE(385)
				_this->height = (int)0;
				HX_STACK_LINE(385)
				tmp23 = _this;
			}
			HX_STACK_LINE(385)
			::flixel::math::FlxRect rect1 = tmp23;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(385)
			rect1->_inPool = false;
			HX_STACK_LINE(385)
			tmp22 = rect1;
		}
		HX_STACK_LINE(385)
		return tmp22;
	}
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		bool tmp22 = rect->_weak;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(388)
		if ((tmp22)){
			HX_STACK_LINE(388)
			bool tmp23 = rect->_inPool;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(388)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(388)
			if ((tmp24)){
				HX_STACK_LINE(388)
				rect->_inPool = true;
				HX_STACK_LINE(388)
				rect->_weak = false;
				HX_STACK_LINE(388)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp25 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(388)
				::flixel::math::FlxRect tmp26 = rect;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(388)
				tmp25->putUnsafe(tmp26);
			}
		}
	}
	HX_STACK_LINE(389)
	::flixel::math::FlxRect tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(389)
		::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(389)
			::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(389)
			::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(389)
			_this->x = x0;
			HX_STACK_LINE(389)
			_this->y = y0;
			HX_STACK_LINE(389)
			Float tmp26 = (x1 - x0);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(389)
			_this->width = tmp26;
			HX_STACK_LINE(389)
			Float tmp27 = (y1 - y0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(389)
			_this->height = tmp27;
			HX_STACK_LINE(389)
			tmp23 = _this;
		}
		HX_STACK_LINE(389)
		::flixel::math::FlxRect rect1 = tmp23;		HX_STACK_VAR(rect1,"rect1");
		HX_STACK_LINE(389)
		rect1->_inPool = false;
		HX_STACK_LINE(389)
		tmp22 = rect1;
	}
	HX_STACK_LINE(389)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,intersection,return )

::String FlxRect_obj::toString( ){
	HX_STACK_FRAME("flixel.math.FlxRect","toString",0x7047e358,"flixel.math.FlxRect.toString","flixel/math/FlxRect.hx",396,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(398)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(398)
	{
		HX_STACK_LINE(398)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(398)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(398)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(398)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(398)
		_this->value = tmp3;
		HX_STACK_LINE(398)
		tmp = _this;
	}
	HX_STACK_LINE(399)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(399)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(399)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(399)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(399)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(399)
		_this->value = tmp4;
		HX_STACK_LINE(399)
		tmp1 = _this;
	}
	HX_STACK_LINE(400)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(400)
	{
		HX_STACK_LINE(400)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(400)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(400)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(400)
		_this->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
		HX_STACK_LINE(400)
		Float tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(400)
		_this->value = tmp5;
		HX_STACK_LINE(400)
		tmp2 = _this;
	}
	HX_STACK_LINE(401)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(401)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(401)
		_this->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
		HX_STACK_LINE(401)
		Float tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(401)
		_this->value = tmp6;
		HX_STACK_LINE(401)
		tmp3 = _this;
	}
	HX_STACK_LINE(397)
	::String tmp4 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(397)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,toString,return )

Float FlxRect_obj::get_left( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_left",0xff43d63c,"flixel.math.FlxRect.get_left","flixel/math/FlxRect.hx",405,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_left,return )

Float FlxRect_obj::set_left( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_left",0xada12fb0,"flixel.math.FlxRect.set_left","flixel/math/FlxRect.hx",410,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(411)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(411)
	hx::SubEq(this->width,tmp2);
	HX_STACK_LINE(412)
	Float tmp3 = this->x = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_left,return )

Float FlxRect_obj::get_right( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_right",0xd324ac07,"flixel.math.FlxRect.get_right","flixel/math/FlxRect.hx",416,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(417)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(417)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(417)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_right,return )

Float FlxRect_obj::set_right( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_right",0xb6759813,"flixel.math.FlxRect.set_right","flixel/math/FlxRect.hx",421,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(422)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(422)
	this->width = tmp2;
	HX_STACK_LINE(423)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(423)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_right,return )

Float FlxRect_obj::get_top( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_top",0x81be1600,"flixel.math.FlxRect.get_top","flixel/math/FlxRect.hx",427,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(428)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_top,return )

Float FlxRect_obj::set_top( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_top",0x74bfa70c,"flixel.math.FlxRect.set_top","flixel/math/FlxRect.hx",432,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(433)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(433)
	hx::SubEq(this->height,tmp2);
	HX_STACK_LINE(434)
	Float tmp3 = this->y = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(434)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_top,return )

Float FlxRect_obj::get_bottom( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_bottom",0x04446c60,"flixel.math.FlxRect.get_bottom","flixel/math/FlxRect.hx",438,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(439)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(439)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(439)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(439)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_bottom,return )

Float FlxRect_obj::set_bottom( Float Value){
	HX_STACK_FRAME("flixel.math.FlxRect","set_bottom",0x07c20ad4,"flixel.math.FlxRect.set_bottom","flixel/math/FlxRect.hx",443,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(444)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(444)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(444)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(444)
	this->height = tmp2;
	HX_STACK_LINE(445)
	Float tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRect_obj,set_bottom,return )

bool FlxRect_obj::get_isEmpty( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_isEmpty",0x5fa91f2e,"flixel.math.FlxRect.get_isEmpty","flixel/math/FlxRect.hx",449,0x2aef791c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(450)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(450)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(450)
	if ((tmp2)){
		HX_STACK_LINE(450)
		Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(450)
		tmp3 = (tmp5 == (int)0);
	}
	else{
		HX_STACK_LINE(450)
		tmp3 = true;
	}
	HX_STACK_LINE(450)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_isEmpty,return )

::flixel::util::FlxPool_flixel_math_FlxRect FlxRect_obj::_pool;

::flixel::math::FlxRect FlxRect_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRect","get",0xa1e66d6a,"flixel.math.FlxRect.get","flixel/math/FlxRect.hx",22,0x2aef791c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(23)
		::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(23)
			_this->x = X;
			HX_STACK_LINE(23)
			_this->y = Y;
			HX_STACK_LINE(23)
			_this->width = Width;
			HX_STACK_LINE(23)
			_this->height = Height;
			HX_STACK_LINE(23)
			tmp = _this;
		}
		HX_STACK_LINE(23)
		::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(24)
		rect->_inPool = false;
		HX_STACK_LINE(25)
		::flixel::math::FlxRect tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,get,return )

::flixel::math::FlxRect FlxRect_obj::weak( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRect","weak",0x124ca924,"flixel.math.FlxRect.weak","flixel/math/FlxRect.hx",33,0x2aef791c)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
{
		HX_STACK_LINE(34)
		::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp2 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(34)
				_this->x = X;
				HX_STACK_LINE(34)
				_this->y = Y;
				HX_STACK_LINE(34)
				_this->width = Width;
				HX_STACK_LINE(34)
				_this->height = Height;
				HX_STACK_LINE(34)
				tmp1 = _this;
			}
			HX_STACK_LINE(34)
			::flixel::math::FlxRect rect = tmp1;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(34)
			rect->_inPool = false;
			HX_STACK_LINE(34)
			tmp = rect;
		}
		HX_STACK_LINE(34)
		::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(35)
		rect->_weak = true;
		HX_STACK_LINE(36)
		::flixel::math::FlxRect tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxRect_obj,weak,return )

::flixel::util::IFlxPool FlxRect_obj::get_pool( ){
	HX_STACK_FRAME("flixel.math.FlxRect","get_pool",0x01f04f11,"flixel.math.FlxRect.get_pool","flixel/math/FlxRect.hx",454,0x2aef791c)
	HX_STACK_LINE(455)
	::flixel::util::FlxPool_flixel_math_FlxRect tmp = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxRect_obj,get_pool,return )


FlxRect_obj::FlxRect_obj()
{
}

Dynamic FlxRect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		if (HX_FIELD_EQ(inName,"ceil") ) { return ceil_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"_weak") ) { return _weak; }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		if (HX_FIELD_EQ(inName,"floor") ) { return floor_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return inCallProp == hx::paccAlways ? get_isEmpty() : isEmpty; }
		if (HX_FIELD_EQ(inName,"_inPool") ) { return _inPool; }
		if (HX_FIELD_EQ(inName,"putWeak") ) { return putWeak_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToFlash") ) { return copyToFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return get_isEmpty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"copyFromFlash") ) { return copyFromFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"fromTwoPoints") ) { return fromTwoPoints_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unionWithPoint") ) { return unionWithPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxRect_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pool") ) { if (inCallProp == hx::paccAlways) { outValue = get_pool(); return true; } }
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_pool") ) { outValue = get_pool_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"_weak") ) { _weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { isEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inPool") ) { _inPool=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxRect_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool_flixel_math_FlxRect >(); return true; }
	}
	return false;
}

void FlxRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"));
	outFields->push(HX_HCSTRING("_weak","\x57","\x78","\x06","\x02"));
	outFields->push(HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxRect_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxRect_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,isEmpty),HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,_weak),HX_HCSTRING("_weak","\x57","\x78","\x06","\x02")},
	{hx::fsBool,(int)offsetof(FlxRect_obj,_inPool),HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool_flixel_math_FlxRect*/ ,(void *) &FlxRect_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("_weak","\x57","\x78","\x06","\x02"),
	HX_HCSTRING("_inPool","\x00","\x71","\x39","\xf5"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("putWeak","\xe7","\xfe","\x6e","\xfd"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("copyTo","\x90","\x1c","\x33","\xc9"),
	HX_HCSTRING("copyFromFlash","\x71","\xa5","\xda","\x18"),
	HX_HCSTRING("copyToFlash","\x00","\xff","\x24","\x25"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("floor","\xcc","\xd1","\x96","\x02"),
	HX_HCSTRING("ceil","\x05","\x1f","\xbd","\x41"),
	HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"),
	HX_HCSTRING("fromTwoPoints","\x05","\xe2","\x50","\xd3"),
	HX_HCSTRING("unionWithPoint","\x5b","\xf9","\x30","\x56"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_isEmpty","\x5a","\x3e","\x5a","\x92"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRect_obj::_pool,"_pool");
};

#endif

hx::Class FlxRect_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	HX_HCSTRING("get_pool","\x65","\x3c","\x17","\xca"),
	::String(null()) };

void FlxRect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxRect","\x42","\x53","\x98","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRect_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxRect_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRect_obj >;
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

void FlxRect_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_flixel_math_FlxRect_obj::__new(hx::ClassOf< ::flixel::math::FlxRect >());
}

} // end namespace flixel
} // end namespace math
