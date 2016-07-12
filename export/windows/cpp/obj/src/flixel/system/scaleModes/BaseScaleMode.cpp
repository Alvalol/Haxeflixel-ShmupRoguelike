#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVerticalAlign
#include <flixel/util/FlxVerticalAlign.h>
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
namespace _system{
namespace scaleModes{

Void BaseScaleMode_obj::__construct()
{
HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","new",0xb84381b3,"flixel.system.scaleModes.BaseScaleMode.new","flixel/system/scaleModes/BaseScaleMode.hx",8,0x5a3188fe)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->verticalAlign = ::flixel::util::FlxVerticalAlign_obj::CENTER;
	HX_STACK_LINE(15)
	this->horizontalAlign = ::flixel::util::FlxHorizontalAlign_obj::CENTER;
	HX_STACK_LINE(20)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(20)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(20)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(20)
		point->_inPool = false;
		HX_STACK_LINE(20)
		tmp = point;
	}
	HX_STACK_LINE(20)
	this->deviceSize = tmp;
	HX_STACK_LINE(21)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(21)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(21)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(21)
		point->_inPool = false;
		HX_STACK_LINE(21)
		tmp1 = point;
	}
	HX_STACK_LINE(21)
	this->gameSize = tmp1;
	HX_STACK_LINE(22)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(22)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(22)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(22)
		point->_inPool = false;
		HX_STACK_LINE(22)
		tmp2 = point;
	}
	HX_STACK_LINE(22)
	this->scale = tmp2;
	HX_STACK_LINE(23)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(23)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(23)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(23)
		point->_inPool = false;
		HX_STACK_LINE(23)
		tmp3 = point;
	}
	HX_STACK_LINE(23)
	this->offset = tmp3;
}
;
	return null();
}

//BaseScaleMode_obj::~BaseScaleMode_obj() { }

Dynamic BaseScaleMode_obj::__CreateEmpty() { return  new BaseScaleMode_obj; }
hx::ObjectPtr< BaseScaleMode_obj > BaseScaleMode_obj::__new()
{  hx::ObjectPtr< BaseScaleMode_obj > _result_ = new BaseScaleMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic BaseScaleMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseScaleMode_obj > _result_ = new BaseScaleMode_obj();
	_result_->__construct();
	return _result_;}

Void BaseScaleMode_obj::onMeasure( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","onMeasure",0xbc54a592,"flixel.system.scaleModes.BaseScaleMode.onMeasure","flixel/system/scaleModes/BaseScaleMode.hx",27,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(28)
		int tmp = ::flixel::FlxG_obj::initialWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		::flixel::FlxG_obj::width = tmp;
		HX_STACK_LINE(29)
		int tmp1 = ::flixel::FlxG_obj::initialHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::flixel::FlxG_obj::height = tmp1;
		HX_STACK_LINE(31)
		int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		this->updateGameSize(tmp2,tmp3);
		HX_STACK_LINE(32)
		int tmp4 = Width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		int tmp5 = Height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(32)
		this->updateDeviceSize(tmp4,tmp5);
		HX_STACK_LINE(33)
		this->updateScaleOffset();
		HX_STACK_LINE(34)
		this->updateGamePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,onMeasure,(void))

Void BaseScaleMode_obj::updateGameSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGameSize",0x99f00e89,"flixel.system.scaleModes.BaseScaleMode.updateGameSize","flixel/system/scaleModes/BaseScaleMode.hx",38,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(39)
		::flixel::math::FlxPoint tmp = this->gameSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateGameSize,(void))

Void BaseScaleMode_obj::updateDeviceSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateDeviceSize",0xb35132ad,"flixel.system.scaleModes.BaseScaleMode.updateDeviceSize","flixel/system/scaleModes/BaseScaleMode.hx",43,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(44)
		::flixel::math::FlxPoint tmp = this->deviceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BaseScaleMode_obj,updateDeviceSize,(void))

Void BaseScaleMode_obj::updateScaleOffset( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateScaleOffset",0x13e546c7,"flixel.system.scaleModes.BaseScaleMode.updateScaleOffset","flixel/system/scaleModes/BaseScaleMode.hx",48,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::flixel::math::FlxPoint tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		::flixel::math::FlxPoint tmp1 = this->gameSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		int tmp3 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		Float tmp4 = ::flixel::FlxG_obj::initialZoom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		Float tmp6 = (Float(tmp2) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		tmp->set_x(tmp6);
		HX_STACK_LINE(50)
		::flixel::math::FlxPoint tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		::flixel::math::FlxPoint tmp8 = this->gameSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		int tmp10 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		Float tmp11 = ::flixel::FlxG_obj::initialZoom;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(50)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		Float tmp13 = (Float(tmp9) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(50)
		tmp7->set_y(tmp13);
		HX_STACK_LINE(51)
		this->updateOffsetX();
		HX_STACK_LINE(52)
		this->updateOffsetY();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateScaleOffset,(void))

Void BaseScaleMode_obj::updateOffsetX( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateOffsetX",0xcbc7256f,"flixel.system.scaleModes.BaseScaleMode.updateOffsetX","flixel/system/scaleModes/BaseScaleMode.hx",56,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			::flixel::util::FlxHorizontalAlign tmp2 = this->horizontalAlign;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			::flixel::util::FlxHorizontalAlign _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(60)
					tmp1 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(62)
					::flixel::math::FlxPoint tmp3 = this->deviceSize;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(62)
					Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(62)
					::flixel::math::FlxPoint tmp5 = this->gameSize;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(62)
					Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(62)
					Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(62)
					tmp1 = ::Math_obj::ceil(tmp8);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(64)
					::flixel::math::FlxPoint tmp3 = this->deviceSize;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(64)
					Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(64)
					::flixel::math::FlxPoint tmp5 = this->gameSize;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(64)
					Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(64)
					tmp1 = (tmp4 - tmp6);
				}
				;break;
			}
		}
		HX_STACK_LINE(57)
		tmp->set_x(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateOffsetX,(void))

Void BaseScaleMode_obj::updateOffsetY( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateOffsetY",0xcbc72570,"flixel.system.scaleModes.BaseScaleMode.updateOffsetY","flixel/system/scaleModes/BaseScaleMode.hx",69,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::flixel::util::FlxVerticalAlign tmp2 = this->verticalAlign;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::flixel::util::FlxVerticalAlign _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(73)
					tmp1 = (int)0;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(75)
					::flixel::math::FlxPoint tmp3 = this->deviceSize;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(75)
					Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(75)
					::flixel::math::FlxPoint tmp5 = this->gameSize;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(75)
					Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(75)
					Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(75)
					Float tmp8 = (tmp7 * ((Float)0.5));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(75)
					tmp1 = ::Math_obj::ceil(tmp8);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(77)
					::flixel::math::FlxPoint tmp3 = this->deviceSize;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(77)
					Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					::flixel::math::FlxPoint tmp5 = this->gameSize;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					tmp1 = (tmp4 - tmp6);
				}
				;break;
			}
		}
		HX_STACK_LINE(70)
		tmp->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateOffsetY,(void))

Void BaseScaleMode_obj::updateGamePosition( ){
{
		HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","updateGamePosition",0xebf59271,"flixel.system.scaleModes.BaseScaleMode.updateGamePosition","flixel/system/scaleModes/BaseScaleMode.hx",82,0x5a3188fe)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(86)
		::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		tmp2->set_x(tmp4);
		HX_STACK_LINE(87)
		::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::flixel::math::FlxPoint tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		tmp5->set_y(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseScaleMode_obj,updateGamePosition,(void))

::flixel::util::FlxHorizontalAlign BaseScaleMode_obj::set_horizontalAlign( ::flixel::util::FlxHorizontalAlign value){
	HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","set_horizontalAlign",0x8b3e18b7,"flixel.system.scaleModes.BaseScaleMode.set_horizontalAlign","flixel/system/scaleModes/BaseScaleMode.hx",91,0x5a3188fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	this->horizontalAlign = value;
	HX_STACK_LINE(93)
	::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	if ((tmp1)){
		HX_STACK_LINE(95)
		this->updateOffsetX();
		HX_STACK_LINE(96)
		this->updateGamePosition();
	}
	HX_STACK_LINE(98)
	::flixel::util::FlxHorizontalAlign tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseScaleMode_obj,set_horizontalAlign,return )

::flixel::util::FlxVerticalAlign BaseScaleMode_obj::set_verticalAlign( ::flixel::util::FlxVerticalAlign value){
	HX_STACK_FRAME("flixel.system.scaleModes.BaseScaleMode","set_verticalAlign",0x71923e65,"flixel.system.scaleModes.BaseScaleMode.set_verticalAlign","flixel/system/scaleModes/BaseScaleMode.hx",102,0x5a3188fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(103)
	this->verticalAlign = value;
	HX_STACK_LINE(104)
	::flixel::math::FlxPoint tmp = this->offset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	if ((tmp1)){
		HX_STACK_LINE(106)
		this->updateOffsetY();
		HX_STACK_LINE(107)
		this->updateGamePosition();
	}
	HX_STACK_LINE(109)
	::flixel::util::FlxVerticalAlign tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BaseScaleMode_obj,set_verticalAlign,return )


BaseScaleMode_obj::BaseScaleMode_obj()
{
}

void BaseScaleMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScaleMode);
	HX_MARK_MEMBER_NAME(deviceSize,"deviceSize");
	HX_MARK_MEMBER_NAME(gameSize,"gameSize");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_MARK_MEMBER_NAME(verticalAlign,"verticalAlign");
	HX_MARK_END_CLASS();
}

void BaseScaleMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(deviceSize,"deviceSize");
	HX_VISIT_MEMBER_NAME(gameSize,"gameSize");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(horizontalAlign,"horizontalAlign");
	HX_VISIT_MEMBER_NAME(verticalAlign,"verticalAlign");
}

Dynamic BaseScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { return gameSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMeasure") ) { return onMeasure_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { return deviceSize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return verticalAlign; }
		if (HX_FIELD_EQ(inName,"updateOffsetX") ) { return updateOffsetX_dyn(); }
		if (HX_FIELD_EQ(inName,"updateOffsetY") ) { return updateOffsetY_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateGameSize") ) { return updateGameSize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return horizontalAlign; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateDeviceSize") ) { return updateDeviceSize_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateScaleOffset") ) { return updateScaleOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return set_verticalAlign_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateGamePosition") ) { return updateGamePosition_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return set_horizontalAlign_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseScaleMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSize") ) { gameSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deviceSize") ) { deviceSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == hx::paccAlways) return set_verticalAlign(inValue);verticalAlign=inValue.Cast< ::flixel::util::FlxVerticalAlign >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == hx::paccAlways) return set_horizontalAlign(inValue);horizontalAlign=inValue.Cast< ::flixel::util::FlxHorizontalAlign >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseScaleMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5"));
	outFields->push(HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"));
	outFields->push(HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,deviceSize),HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,gameSize),HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BaseScaleMode_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::util::FlxHorizontalAlign*/ ,(int)offsetof(BaseScaleMode_obj,horizontalAlign),HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4")},
	{hx::fsObject /*::flixel::util::FlxVerticalAlign*/ ,(int)offsetof(BaseScaleMode_obj,verticalAlign),HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("deviceSize","\x77","\xac","\xdd","\xb5"),
	HX_HCSTRING("gameSize","\xd3","\xa1","\x79","\xb8"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"),
	HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"),
	HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"),
	HX_HCSTRING("updateGameSize","\xfc","\x94","\xa3","\xed"),
	HX_HCSTRING("updateDeviceSize","\xe0","\x7b","\xc9","\xff"),
	HX_HCSTRING("updateScaleOffset","\x34","\x0a","\xad","\xb0"),
	HX_HCSTRING("updateOffsetX","\x5c","\x6e","\xd3","\xa2"),
	HX_HCSTRING("updateOffsetY","\x5d","\x6e","\xd3","\xa2"),
	HX_HCSTRING("updateGamePosition","\x64","\xce","\xf8","\x7d"),
	HX_HCSTRING("set_horizontalAlign","\x64","\x51","\x0f","\xbc"),
	HX_HCSTRING("set_verticalAlign","\xd2","\x01","\x5a","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseScaleMode_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseScaleMode_obj::__mClass;

void BaseScaleMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.scaleModes.BaseScaleMode","\x41","\x2c","\xf6","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseScaleMode_obj >;
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
} // end namespace system
} // end namespace scaleModes
