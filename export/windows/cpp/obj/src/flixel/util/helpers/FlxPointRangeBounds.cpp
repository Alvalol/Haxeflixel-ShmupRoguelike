#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxPointRangeBounds_obj::__construct(Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY)
{
HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","new",0x02dca7c3,"flixel.util.helpers.FlxPointRangeBounds.new","flixel/util/helpers/FlxPointRangeBounds.hx",11,0x6e9a8e2e)
HX_STACK_THIS(this)
HX_STACK_ARG(startMinX,"startMinX")
HX_STACK_ARG(startMinY,"startMinY")
HX_STACK_ARG(startMaxX,"startMaxX")
HX_STACK_ARG(startMaxY,"startMaxY")
HX_STACK_ARG(endMinX,"endMinX")
HX_STACK_ARG(endMinY,"endMinY")
HX_STACK_ARG(endMaxX,"endMaxX")
HX_STACK_ARG(endMaxY,"endMaxY")
{
	HX_STACK_LINE(24)
	this->active = false;
	HX_STACK_LINE(41)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(41)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(41)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(41)
		point->_inPool = false;
		HX_STACK_LINE(41)
		tmp = point;
	}
	HX_STACK_LINE(41)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(41)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(41)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(41)
		point->_inPool = false;
		HX_STACK_LINE(41)
		tmp1 = point;
	}
	HX_STACK_LINE(41)
	::flixel::util::helpers::FlxBounds tmp2 = ::flixel::util::helpers::FlxBounds_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	this->start = tmp2;
	HX_STACK_LINE(42)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(42)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(42)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(42)
		point->_inPool = false;
		HX_STACK_LINE(42)
		tmp3 = point;
	}
	HX_STACK_LINE(42)
	::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(42)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(42)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(42)
		point->_inPool = false;
		HX_STACK_LINE(42)
		tmp4 = point;
	}
	HX_STACK_LINE(42)
	::flixel::util::helpers::FlxBounds tmp5 = ::flixel::util::helpers::FlxBounds_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	this->end = tmp5;
	HX_STACK_LINE(44)
	Float tmp6 = startMinX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	Dynamic tmp7 = startMinY;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	Dynamic tmp8 = startMaxX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	Dynamic tmp9 = startMaxY;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	Dynamic tmp10 = endMinX;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(44)
	Dynamic tmp11 = endMinY;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	Dynamic tmp12 = endMaxX;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	Dynamic tmp13 = endMaxY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	this->set(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
}
;
	return null();
}

//FlxPointRangeBounds_obj::~FlxPointRangeBounds_obj() { }

Dynamic FlxPointRangeBounds_obj::__CreateEmpty() { return  new FlxPointRangeBounds_obj; }
hx::ObjectPtr< FlxPointRangeBounds_obj > FlxPointRangeBounds_obj::__new(Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY)
{  hx::ObjectPtr< FlxPointRangeBounds_obj > _result_ = new FlxPointRangeBounds_obj();
	_result_->__construct(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
	return _result_;}

Dynamic FlxPointRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPointRangeBounds_obj > _result_ = new FlxPointRangeBounds_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

hx::Object *FlxPointRangeBounds_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxPointRangeBounds_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxPointRangeBounds_obj >(this); }
::flixel::util::helpers::FlxPointRangeBounds FlxPointRangeBounds_obj::set( Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY){
	HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","set",0x02e07305,"flixel.util.helpers.FlxPointRangeBounds.set","flixel/util/helpers/FlxPointRangeBounds.hx",61,0x6e9a8e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startMinX,"startMinX")
	HX_STACK_ARG(startMinY,"startMinY")
	HX_STACK_ARG(startMaxX,"startMaxX")
	HX_STACK_ARG(startMaxY,"startMaxY")
	HX_STACK_ARG(endMinX,"endMinX")
	HX_STACK_ARG(endMinY,"endMinY")
	HX_STACK_ARG(endMaxX,"endMaxX")
	HX_STACK_ARG(endMaxY,"endMaxY")
	HX_STACK_LINE(62)
	::flixel::util::helpers::FlxBounds tmp = this->start;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = startMinX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	tmp->min->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(63)
	::flixel::util::helpers::FlxBounds tmp2 = this->start;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	bool tmp3 = (startMinY == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	if ((tmp3)){
		HX_STACK_LINE(63)
		::flixel::util::helpers::FlxBounds tmp5 = this->start;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		tmp4 = tmp5->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(63)
		tmp4 = startMinY;
	}
	HX_STACK_LINE(63)
	tmp2->min->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp4);
	HX_STACK_LINE(64)
	::flixel::util::helpers::FlxBounds tmp5 = this->start;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	bool tmp6 = (startMaxX == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	if ((tmp6)){
		HX_STACK_LINE(64)
		::flixel::util::helpers::FlxBounds tmp8 = this->start;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp7 = tmp8->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(64)
		tmp7 = startMaxX;
	}
	HX_STACK_LINE(64)
	tmp5->max->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp7);
	HX_STACK_LINE(65)
	::flixel::util::helpers::FlxBounds tmp8 = this->start;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	bool tmp9 = (startMaxY == null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	if ((tmp9)){
		HX_STACK_LINE(65)
		::flixel::util::helpers::FlxBounds tmp11 = this->start;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		tmp10 = tmp11->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(65)
		tmp10 = startMaxY;
	}
	HX_STACK_LINE(65)
	tmp8->max->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp10);
	HX_STACK_LINE(66)
	::flixel::util::helpers::FlxBounds tmp11 = this->end;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(66)
	bool tmp12 = (endMinX == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(66)
	Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(66)
	if ((tmp12)){
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds tmp14 = this->start;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(66)
		tmp13 = tmp14->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(66)
		tmp13 = endMinX;
	}
	HX_STACK_LINE(66)
	tmp11->min->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp13);
	HX_STACK_LINE(67)
	::flixel::util::helpers::FlxBounds tmp14 = this->end;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(67)
	bool tmp15 = (endMinY == null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(67)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(67)
	if ((tmp15)){
		HX_STACK_LINE(67)
		::flixel::util::helpers::FlxBounds tmp17 = this->start;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(67)
		tmp16 = tmp17->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(67)
		tmp16 = endMinY;
	}
	HX_STACK_LINE(67)
	tmp14->min->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp16);
	HX_STACK_LINE(68)
	::flixel::util::helpers::FlxBounds tmp17 = this->end;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(68)
	bool tmp18 = (endMaxX == null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(68)
	Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(68)
	if ((tmp18)){
		HX_STACK_LINE(68)
		bool tmp20 = (endMinX == null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(68)
		if ((tmp20)){
			HX_STACK_LINE(68)
			::flixel::util::helpers::FlxBounds tmp21 = this->start;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			tmp19 = tmp21->max->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(68)
			::flixel::util::helpers::FlxBounds tmp21 = this->end;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(68)
			tmp19 = tmp21->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(68)
		tmp19 = endMaxX;
	}
	HX_STACK_LINE(68)
	tmp17->max->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp19);
	HX_STACK_LINE(69)
	::flixel::util::helpers::FlxBounds tmp20 = this->end;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(69)
	bool tmp21 = (endMaxY == null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(69)
	Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(69)
	if ((tmp21)){
		HX_STACK_LINE(69)
		bool tmp23 = (endMinY == null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(69)
		if ((tmp23)){
			HX_STACK_LINE(69)
			::flixel::util::helpers::FlxBounds tmp24 = this->start;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(69)
			tmp22 = tmp24->max->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(69)
			::flixel::util::helpers::FlxBounds tmp24 = this->end;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(69)
			tmp22 = tmp24->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		}
	}
	else{
		HX_STACK_LINE(69)
		tmp22 = endMaxY;
	}
	HX_STACK_LINE(69)
	tmp20->max->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp22);
	HX_STACK_LINE(71)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC8(FlxPointRangeBounds_obj,set,return )

bool FlxPointRangeBounds_obj::equals( ::flixel::util::helpers::FlxPointRangeBounds OtherFlxPointRangeBounds){
	HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","equals",0x60ba96bc,"flixel.util.helpers.FlxPointRangeBounds.equals","flixel/util/helpers/FlxPointRangeBounds.hx",81,0x6e9a8e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherFlxPointRangeBounds,"OtherFlxPointRangeBounds")
	HX_STACK_LINE(82)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	{
		HX_STACK_LINE(82)
		::flixel::util::helpers::FlxBounds tmp1 = this->start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		::flixel::util::helpers::FlxBounds tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint _this = tmp2->min;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint tmp3 = OtherFlxPointRangeBounds->start->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(82)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(82)
			Float tmp6 = (_this->x - point->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			Float tmp14 = aDiff;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			bool tmp15 = (tmp13 <= tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			tmp5 = tmp15;
		}
		HX_STACK_LINE(82)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		bool tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		if ((tmp7)){
			HX_STACK_LINE(82)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(82)
			Float tmp8 = (_this->y - point->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			Float tmp16 = aDiff;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			tmp6 = tmp17;
		}
		else{
			HX_STACK_LINE(82)
			tmp6 = false;
		}
		HX_STACK_LINE(82)
		bool result = tmp6;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			bool tmp8 = point->_weak;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			if ((tmp9)){
				HX_STACK_LINE(82)
				point->put();
			}
		}
		HX_STACK_LINE(82)
		tmp = result;
	}
	HX_STACK_LINE(82)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(83)
		::flixel::util::helpers::FlxBounds tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		::flixel::util::helpers::FlxBounds tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		::flixel::util::helpers::FlxBounds tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint _this = tmp5->max;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint tmp6 = OtherFlxPointRangeBounds->start->max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(83)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(83)
			Float tmp10 = (_this->x - point->x);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(83)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(83)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(83)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(83)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(83)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(83)
			Float tmp21 = aDiff;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(83)
			bool tmp22 = (tmp20 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(83)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(83)
			tmp9 = tmp23;
		}
		HX_STACK_LINE(83)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		if ((tmp12)){
			HX_STACK_LINE(83)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(83)
			Float tmp13 = (_this->y - point->y);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(83)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(83)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(83)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(83)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(83)
			Float tmp20 = ::Math_obj::abs(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(83)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(83)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(83)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(83)
			Float tmp24 = aDiff;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(83)
			bool tmp25 = (tmp23 <= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(83)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(83)
			tmp10 = tmp26;
		}
		else{
			HX_STACK_LINE(83)
			tmp10 = false;
		}
		HX_STACK_LINE(83)
		bool result = tmp10;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			bool tmp13 = point->_weak;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(83)
			if ((tmp15)){
				HX_STACK_LINE(83)
				point->put();
			}
		}
		HX_STACK_LINE(83)
		tmp2 = result;
	}
	else{
		HX_STACK_LINE(82)
		tmp2 = false;
	}
	HX_STACK_LINE(82)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	if ((tmp3)){
		HX_STACK_LINE(84)
		::flixel::util::helpers::FlxBounds tmp5 = this->end;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		::flixel::util::helpers::FlxBounds tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		::flixel::util::helpers::FlxBounds tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint _this = tmp7->min;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp8 = OtherFlxPointRangeBounds->end->min;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(84)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(84)
			Float tmp12 = (_this->x - point->x);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(84)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			Float tmp19 = ::Math_obj::abs(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(84)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(84)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(84)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(84)
			Float tmp23 = aDiff;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(84)
			bool tmp24 = (tmp22 <= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(84)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(84)
			tmp11 = tmp25;
		}
		HX_STACK_LINE(84)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		if ((tmp14)){
			HX_STACK_LINE(84)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(84)
			Float tmp15 = (_this->y - point->y);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(84)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(84)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(84)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(84)
			Float tmp22 = ::Math_obj::abs(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(84)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(84)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(84)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(84)
			Float tmp26 = aDiff;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(84)
			bool tmp27 = (tmp25 <= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(84)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(84)
			tmp12 = tmp28;
		}
		else{
			HX_STACK_LINE(84)
			tmp12 = false;
		}
		HX_STACK_LINE(84)
		bool result = tmp12;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			bool tmp15 = point->_weak;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(84)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(84)
			if ((tmp17)){
				HX_STACK_LINE(84)
				point->put();
			}
		}
		HX_STACK_LINE(84)
		tmp4 = result;
	}
	else{
		HX_STACK_LINE(82)
		tmp4 = false;
	}
	HX_STACK_LINE(82)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	if ((tmp4)){
		HX_STACK_LINE(85)
		::flixel::util::helpers::FlxBounds tmp6 = this->end;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		::flixel::util::helpers::FlxBounds tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint _this = tmp7->max;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint tmp8 = OtherFlxPointRangeBounds->end->max;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(85)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(85)
			Float tmp11 = (_this->x - point->x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(85)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(85)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(85)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(85)
			Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(85)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(85)
			Float tmp19 = aDiff;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(85)
			bool tmp20 = (tmp18 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(85)
			tmp10 = tmp20;
		}
		HX_STACK_LINE(85)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		if ((tmp12)){
			HX_STACK_LINE(85)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(85)
			Float tmp13 = (_this->y - point->y);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(85)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(85)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(85)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(85)
			Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(85)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(85)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(85)
			Float tmp21 = aDiff;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(85)
			bool tmp22 = (tmp20 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(85)
			tmp11 = tmp22;
		}
		else{
			HX_STACK_LINE(85)
			tmp11 = false;
		}
		HX_STACK_LINE(85)
		bool result = tmp11;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			bool tmp13 = point->_weak;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(85)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(85)
			if ((tmp14)){
				HX_STACK_LINE(85)
				point->put();
			}
		}
		HX_STACK_LINE(85)
		tmp5 = result;
	}
	else{
		HX_STACK_LINE(82)
		tmp5 = false;
	}
	HX_STACK_LINE(82)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointRangeBounds_obj,equals,return )

::String FlxPointRangeBounds_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","toString",0x58cf5269,"flixel.util.helpers.FlxPointRangeBounds.toString","flixel/util/helpers/FlxPointRangeBounds.hx",92,0x6e9a8e2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(94)
		_this->label = HX_HCSTRING("start.min.x","\x90","\xc5","\x24","\xb0");
		HX_STACK_LINE(94)
		::flixel::util::helpers::FlxBounds tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Float tmp4 = tmp3->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		_this->value = tmp4;
		HX_STACK_LINE(94)
		tmp = _this;
	}
	HX_STACK_LINE(95)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(95)
		_this->label = HX_HCSTRING("start.min.y","\x91","\xc5","\x24","\xb0");
		HX_STACK_LINE(95)
		::flixel::util::helpers::FlxBounds tmp4 = this->start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		Float tmp5 = tmp4->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		_this->value = tmp5;
		HX_STACK_LINE(95)
		tmp1 = _this;
	}
	HX_STACK_LINE(96)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(96)
		_this->label = HX_HCSTRING("start.max.x","\x22","\xa7","\xe2","\xaa");
		HX_STACK_LINE(96)
		::flixel::util::helpers::FlxBounds tmp5 = this->start;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		Float tmp6 = tmp5->max->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		_this->value = tmp6;
		HX_STACK_LINE(96)
		tmp2 = _this;
	}
	HX_STACK_LINE(97)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(97)
		_this->label = HX_HCSTRING("start.max.y","\x23","\xa7","\xe2","\xaa");
		HX_STACK_LINE(97)
		::flixel::util::helpers::FlxBounds tmp6 = this->start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		Float tmp7 = tmp6->max->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		_this->value = tmp7;
		HX_STACK_LINE(97)
		tmp3 = _this;
	}
	HX_STACK_LINE(98)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(98)
		_this->label = HX_HCSTRING("end.min.x","\xc9","\xb5","\x20","\x78");
		HX_STACK_LINE(98)
		::flixel::util::helpers::FlxBounds tmp7 = this->end;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		Float tmp8 = tmp7->min->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		_this->value = tmp8;
		HX_STACK_LINE(98)
		tmp4 = _this;
	}
	HX_STACK_LINE(99)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(99)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(99)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		_this->label = HX_HCSTRING("end.min.y","\xca","\xb5","\x20","\x78");
		HX_STACK_LINE(99)
		::flixel::util::helpers::FlxBounds tmp8 = this->end;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		Float tmp9 = tmp8->min->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		_this->value = tmp9;
		HX_STACK_LINE(99)
		tmp5 = _this;
	}
	HX_STACK_LINE(100)
	::flixel::util::LabelValuePair tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp7 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		::flixel::util::LabelValuePair tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		::flixel::util::LabelValuePair _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(100)
		_this->label = HX_HCSTRING("end.max.x","\x5b","\x97","\xde","\x72");
		HX_STACK_LINE(100)
		::flixel::util::helpers::FlxBounds tmp9 = this->end;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		Float tmp10 = tmp9->max->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		_this->value = tmp10;
		HX_STACK_LINE(100)
		tmp6 = _this;
	}
	HX_STACK_LINE(101)
	::flixel::util::LabelValuePair tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp8 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		::flixel::util::LabelValuePair tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		::flixel::util::LabelValuePair _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(101)
		_this->label = HX_HCSTRING("end.max.y","\x5c","\x97","\xde","\x72");
		HX_STACK_LINE(101)
		::flixel::util::helpers::FlxBounds tmp10 = this->end;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		Float tmp11 = tmp10->max->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		_this->value = tmp11;
		HX_STACK_LINE(101)
		tmp7 = _this;
	}
	HX_STACK_LINE(93)
	::String tmp8 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5).Add(tmp6).Add(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(93)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,toString,return )

Void FlxPointRangeBounds_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","destroy",0x3271f1dd,"flixel.util.helpers.FlxPointRangeBounds.destroy","flixel/util/helpers/FlxPointRangeBounds.hx",105,0x6e9a8e2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::flixel::util::helpers::FlxBounds tmp = this->start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint tmp1 = tmp->min;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint tmp2 = ::flixel::util::FlxDestroyUtil_obj::put(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::flixel::util::helpers::FlxBounds tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		tmp3->min = tmp2;
		HX_STACK_LINE(107)
		::flixel::util::helpers::FlxBounds tmp4 = this->start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint tmp5 = tmp4->max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxDestroyUtil_obj::put(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		::flixel::util::helpers::FlxBounds tmp7 = this->start;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		tmp7->max = tmp6;
		HX_STACK_LINE(108)
		::flixel::util::helpers::FlxBounds tmp8 = this->end;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint tmp9 = tmp8->min;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint tmp10 = ::flixel::util::FlxDestroyUtil_obj::put(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		::flixel::util::helpers::FlxBounds tmp11 = this->end;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		tmp11->min = tmp10;
		HX_STACK_LINE(109)
		::flixel::util::helpers::FlxBounds tmp12 = this->end;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(109)
		::flixel::math::FlxPoint tmp13 = tmp12->max;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(109)
		::flixel::math::FlxPoint tmp14 = ::flixel::util::FlxDestroyUtil_obj::put(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(109)
		::flixel::util::helpers::FlxBounds tmp15 = this->end;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(109)
		tmp15->max = tmp14;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,destroy,(void))


FlxPointRangeBounds_obj::FlxPointRangeBounds_obj()
{
}

void FlxPointRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPointRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxPointRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxPointRangeBounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPointRangeBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPointRangeBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxPointRangeBounds_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxPointRangeBounds_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(FlxPointRangeBounds_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointRangeBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointRangeBounds_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxPointRangeBounds_obj::__mClass;

void FlxPointRangeBounds_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxPointRangeBounds","\x51","\x0a","\x5f","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPointRangeBounds_obj >;
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
} // end namespace util
} // end namespace helpers
