#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace input{

Void FlxSwipe_obj::__construct(int ID,::flixel::math::FlxPoint StartPosition,::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks)
{
HX_STACK_FRAME("flixel.input.FlxSwipe","new",0xecc12d70,"flixel.input.FlxSwipe.new","flixel/input/FlxSwipe.hx",29,0xe38cac7e)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(StartPosition,"StartPosition")
HX_STACK_ARG(EndPosition,"EndPosition")
HX_STACK_ARG(StartTimeInTicks,"StartTimeInTicks")
{
	HX_STACK_LINE(30)
	this->ID = ID;
	HX_STACK_LINE(31)
	this->startPosition = StartPosition;
	HX_STACK_LINE(32)
	this->endPosition = EndPosition;
	HX_STACK_LINE(33)
	this->_startTimeInTicks = StartTimeInTicks;
	HX_STACK_LINE(34)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->_endTimeInTicks = tmp->ticks;
}
;
	return null();
}

//FlxSwipe_obj::~FlxSwipe_obj() { }

Dynamic FlxSwipe_obj::__CreateEmpty() { return  new FlxSwipe_obj; }
hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__new(int ID,::flixel::math::FlxPoint StartPosition,::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks)
{  hx::ObjectPtr< FlxSwipe_obj > _result_ = new FlxSwipe_obj();
	_result_->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return _result_;}

Dynamic FlxSwipe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSwipe_obj > _result_ = new FlxSwipe_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String FlxSwipe_obj::toString( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","toString",0xb726199c,"flixel.input.FlxSwipe.toString","flixel/input/FlxSwipe.hx",38,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		_this->label = HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00");
		HX_STACK_LINE(40)
		int tmp3 = this->ID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		_this->value = tmp3;
		HX_STACK_LINE(40)
		tmp = _this;
	}
	HX_STACK_LINE(41)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		_this->label = HX_HCSTRING("start","\x62","\x74","\x0b","\x84");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint tmp4 = this->startPosition;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		_this->value = tmp4;
		HX_STACK_LINE(41)
		tmp1 = _this;
	}
	HX_STACK_LINE(42)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(42)
		_this->label = HX_HCSTRING("end","\xdb","\x03","\x4d","\x00");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint tmp5 = this->endPosition;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		_this->value = tmp5;
		HX_STACK_LINE(42)
		tmp2 = _this;
	}
	HX_STACK_LINE(43)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint tmp5 = this->startPosition;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint tmp7 = this->endPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint tmp10 = this->startPosition;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(43)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			::flixel::math::FlxPoint tmp12 = this->endPosition;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(43)
			Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(43)
			Float tmp15 = (dx * dx);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(43)
			Float tmp16 = (dy * dy);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(43)
			Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(43)
			tmp4 = ::Math_obj::sqrt(tmp17);
		}
		HX_STACK_LINE(43)
		Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(43)
			::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(43)
			_this->label = HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b");
			HX_STACK_LINE(43)
			_this->value = value;
			HX_STACK_LINE(43)
			tmp3 = _this;
		}
	}
	HX_STACK_LINE(44)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::flixel::math::FlxPoint tmp5 = this->startPosition;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::flixel::math::FlxPoint tmp6 = this->endPosition;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		Float tmp7 = tmp5->angleBetween(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		Dynamic value = tmp7;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp8 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(44)
			::flixel::util::LabelValuePair tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(44)
			::flixel::util::LabelValuePair _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(44)
			_this->label = HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22");
			HX_STACK_LINE(44)
			_this->value = value;
			HX_STACK_LINE(44)
			tmp4 = _this;
		}
	}
	HX_STACK_LINE(45)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		_this->label = HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14");
		HX_STACK_LINE(45)
		Float tmp8 = this->_endTimeInTicks;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		Float tmp9 = this->_startTimeInTicks;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		Float tmp11 = (Float(tmp10) / Float((int)1000));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(45)
		_this->value = tmp11;
		HX_STACK_LINE(45)
		tmp5 = _this;
	}
	HX_STACK_LINE(39)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,toString,return )

Float FlxSwipe_obj::get_distance( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_distance",0xd139c82e,"flixel.input.FlxSwipe.get_distance","flixel/input/FlxSwipe.hx",49,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::flixel::math::FlxPoint tmp1 = this->startPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::flixel::math::FlxPoint tmp3 = this->endPosition;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Float dx = tmp5;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(50)
		::flixel::math::FlxPoint tmp6 = this->startPosition;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		::flixel::math::FlxPoint tmp8 = this->endPosition;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		Float dy = tmp10;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(50)
		Float tmp11 = (dx * dx);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(50)
		Float tmp12 = (dy * dy);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(50)
		tmp = ::Math_obj::sqrt(tmp13);
	}
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_distance,return )

Float FlxSwipe_obj::get_angle( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_angle",0xc834293a,"flixel.input.FlxSwipe.get_angle","flixel/input/FlxSwipe.hx",54,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::flixel::math::FlxPoint tmp = this->startPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::flixel::math::FlxPoint tmp1 = this->endPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	Float tmp2 = tmp->angleBetween(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_angle,return )

Float FlxSwipe_obj::get_duration( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_duration",0x79ce444d,"flixel.input.FlxSwipe.get_duration","flixel/input/FlxSwipe.hx",59,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Float tmp = this->_endTimeInTicks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Float tmp1 = this->_startTimeInTicks;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_duration,return )


FlxSwipe_obj::FlxSwipe_obj()
{
}

void FlxSwipe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSwipe);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	HX_MARK_MEMBER_NAME(endPosition,"endPosition");
	HX_MARK_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_MARK_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxSwipe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	HX_VISIT_MEMBER_NAME(endPosition,"endPosition");
	HX_VISIT_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_VISIT_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
}

Dynamic FlxSwipe_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return get_distance(); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == hx::paccAlways) return get_duration(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { return endPosition; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return startPosition; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { return _endTimeInTicks; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { return _startTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSwipe_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { endPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { _endTimeInTicks=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { _startTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSwipe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"));
	outFields->push(HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36"));
	outFields->push(HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxSwipe_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,startPosition),HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,endPosition),HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_startTimeInTicks),HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_endTimeInTicks),HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"),
	HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82"),
	HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36"),
	HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSwipe_obj::__mClass;

void FlxSwipe_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxSwipe","\x7e","\xf5","\xe9","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSwipe_obj >;
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
} // end namespace input
