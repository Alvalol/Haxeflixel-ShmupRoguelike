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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
namespace flixel{

Void FlxObject_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{
HX_STACK_FRAME("flixel.FlxObject","new",0x2aa4ec91,"flixel.FlxObject.new","flixel/FlxObject.hx",21,0xf0fe0d80)
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
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",553,0xf0fe0d80)
			{
				HX_STACK_LINE(553)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(553)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(553)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(553)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(553)
				::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(553)
					::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(553)
					::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(553)
					_this->x = X;
					HX_STACK_LINE(553)
					_this->y = Y;
					HX_STACK_LINE(553)
					_this->width = Width;
					HX_STACK_LINE(553)
					_this->height = Height;
					HX_STACK_LINE(553)
					tmp = _this;
				}
				HX_STACK_LINE(553)
				::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(553)
				rect->_inPool = false;
				HX_STACK_LINE(553)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(553)
	this->_rect = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",552,0xf0fe0d80)
			{
				HX_STACK_LINE(552)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(552)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(552)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(552)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(552)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(552)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(552)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(552)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(552)
				point->_inPool = false;
				HX_STACK_LINE(552)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(552)
	this->_point = _Function_1_2::Block();
	HX_STACK_LINE(533)
	this->collisonXDrag = true;
	HX_STACK_LINE(528)
	this->allowCollisions = (int)4369;
	HX_STACK_LINE(523)
	this->wasTouching = (int)0;
	HX_STACK_LINE(518)
	this->touching = (int)0;
	HX_STACK_LINE(513)
	this->health = ((Float)1);
	HX_STACK_LINE(509)
	this->maxAngular = ((Float)10000);
	HX_STACK_LINE(505)
	this->angularDrag = ((Float)0);
	HX_STACK_LINE(501)
	this->angularAcceleration = ((Float)0);
	HX_STACK_LINE(497)
	this->angularVelocity = ((Float)0);
	HX_STACK_LINE(493)
	this->elasticity = ((Float)0);
	HX_STACK_LINE(489)
	this->mass = ((Float)1);
	HX_STACK_LINE(450)
	this->immovable = false;
	HX_STACK_LINE(446)
	this->moves = true;
	HX_STACK_LINE(441)
	this->angle = ((Float)0);
	HX_STACK_LINE(436)
	this->pixelPerfectPosition = true;
	HX_STACK_LINE(415)
	this->y = ((Float)0);
	HX_STACK_LINE(411)
	this->x = ((Float)0);
	HX_STACK_LINE(563)
	super::__construct();
	HX_STACK_LINE(565)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(565)
	this->set_x(tmp);
	HX_STACK_LINE(566)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(566)
	this->set_y(tmp1);
	HX_STACK_LINE(567)
	Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(567)
	this->set_width(tmp2);
	HX_STACK_LINE(568)
	Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(568)
	this->set_height(tmp3);
	HX_STACK_LINE(570)
	this->initVars();
}
;
	return null();
}

//FlxObject_obj::~FlxObject_obj() { }

Dynamic FlxObject_obj::__CreateEmpty() { return  new FlxObject_obj; }
hx::ObjectPtr< FlxObject_obj > FlxObject_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height);
	return _result_;}

Dynamic FlxObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxObject_obj > _result_ = new FlxObject_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxObject_obj::initVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initVars",0xb8a66d0b,"flixel.FlxObject.initVars","flixel/FlxObject.hx",577,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(578)
		this->flixelType = (int)1;
		HX_STACK_LINE(579)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(579)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(579)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(579)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(579)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(579)
			point->_inPool = false;
			HX_STACK_LINE(579)
			tmp = point;
		}
		HX_STACK_LINE(579)
		this->last = tmp;
		HX_STACK_LINE(580)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(580)
		{
			HX_STACK_LINE(580)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(580)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			::flixel::math::FlxPoint tmp4 = tmp3->set((int)1,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(580)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(580)
			point->_inPool = false;
			HX_STACK_LINE(580)
			tmp1 = point;
		}
		HX_STACK_LINE(580)
		this->scrollFactor = tmp1;
		HX_STACK_LINE(581)
		bool tmp2 = ::flixel::FlxObject_obj::defaultPixelPerfectPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(581)
		this->pixelPerfectPosition = tmp2;
		HX_STACK_LINE(583)
		{
			HX_STACK_LINE(583)
			::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(583)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(583)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(583)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(583)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(583)
				point->_inPool = false;
				HX_STACK_LINE(583)
				tmp3 = point;
			}
			HX_STACK_LINE(583)
			this->velocity = tmp3;
			HX_STACK_LINE(583)
			::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(583)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(583)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(583)
				Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(583)
				Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(583)
				point->_inPool = false;
				HX_STACK_LINE(583)
				tmp4 = point;
			}
			HX_STACK_LINE(583)
			this->acceleration = tmp4;
			HX_STACK_LINE(583)
			::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(583)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(583)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp6 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(583)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(583)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(583)
				point->_inPool = false;
				HX_STACK_LINE(583)
				tmp5 = point;
			}
			HX_STACK_LINE(583)
			this->drag = tmp5;
			HX_STACK_LINE(583)
			::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(583)
			{
				HX_STACK_LINE(583)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint tmp9 = tmp8->set((int)10000,(int)10000);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(583)
				::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(583)
				point->_inPool = false;
				HX_STACK_LINE(583)
				tmp6 = point;
			}
			HX_STACK_LINE(583)
			this->maxVelocity = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initVars,(void))

Void FlxObject_obj::initMotionVars( ){
{
		HX_STACK_FRAME("flixel.FlxObject","initMotionVars",0xb01943a1,"flixel.FlxObject.initMotionVars","flixel/FlxObject.hx",590,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(591)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(591)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(591)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(591)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(591)
			Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(591)
			Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(591)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(591)
			point->_inPool = false;
			HX_STACK_LINE(591)
			tmp = point;
		}
		HX_STACK_LINE(591)
		this->velocity = tmp;
		HX_STACK_LINE(592)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(592)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(592)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(592)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(592)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(592)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(592)
			point->_inPool = false;
			HX_STACK_LINE(592)
			tmp1 = point;
		}
		HX_STACK_LINE(592)
		this->acceleration = tmp1;
		HX_STACK_LINE(593)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(593)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(593)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(593)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(593)
			Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(593)
			Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(593)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(593)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(593)
			point->_inPool = false;
			HX_STACK_LINE(593)
			tmp2 = point;
		}
		HX_STACK_LINE(593)
		this->drag = tmp2;
		HX_STACK_LINE(594)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		{
			HX_STACK_LINE(594)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(594)
			::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(594)
			::flixel::math::FlxPoint tmp6 = tmp5->set((int)10000,(int)10000);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(594)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(594)
			point->_inPool = false;
			HX_STACK_LINE(594)
			tmp3 = point;
		}
		HX_STACK_LINE(594)
		this->maxVelocity = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,initMotionVars,(void))

Void FlxObject_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxObject","destroy",0xba37b5ab,"flixel.FlxObject.destroy","flixel/FlxObject.hx",602,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(603)
		this->super::destroy();
		HX_STACK_LINE(605)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(605)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(605)
		this->velocity = tmp1;
		HX_STACK_LINE(606)
		::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(606)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(606)
		this->acceleration = tmp3;
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(607)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(607)
		this->drag = tmp5;
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(608)
		::flixel::math::FlxPoint tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(608)
		this->maxVelocity = tmp7;
		HX_STACK_LINE(609)
		::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(609)
		::flixel::math::FlxPoint tmp9 = ::flixel::util::FlxDestroyUtil_obj::put(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(609)
		this->scrollFactor = tmp9;
		HX_STACK_LINE(610)
		::flixel::math::FlxPoint tmp10 = this->last;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(610)
		::flixel::math::FlxPoint tmp11 = ::flixel::util::FlxDestroyUtil_obj::put(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(610)
		this->last = tmp11;
		HX_STACK_LINE(611)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(611)
		::flixel::math::FlxPoint tmp13 = ::flixel::util::FlxDestroyUtil_obj::put(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(611)
		this->_point = tmp13;
		HX_STACK_LINE(612)
		::flixel::math::FlxRect tmp14 = this->_rect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(612)
		::flixel::math::FlxRect tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(612)
		this->_rect = tmp15;
	}
return null();
}


Void FlxObject_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","update",0x87b15e78,"flixel.FlxObject.update","flixel/FlxObject.hx",620,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(626)
		::flixel::math::FlxPoint tmp = this->last;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(626)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(626)
		tmp->set_x(tmp1);
		HX_STACK_LINE(627)
		::flixel::math::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		tmp2->set_y(tmp3);
		HX_STACK_LINE(629)
		::flixel::util::FlxPath tmp4 = this->path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(629)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(629)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		if ((tmp5)){
			HX_STACK_LINE(629)
			::flixel::util::FlxPath tmp7 = this->path;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(629)
			::flixel::util::FlxPath tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(629)
			tmp6 = tmp8->active;
		}
		else{
			HX_STACK_LINE(629)
			tmp6 = false;
		}
		HX_STACK_LINE(629)
		if ((tmp6)){
			HX_STACK_LINE(630)
			::flixel::util::FlxPath tmp7 = this->path;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(630)
			Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(630)
			tmp7->update(tmp8);
		}
		HX_STACK_LINE(632)
		bool tmp7 = this->moves;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(632)
		if ((tmp7)){
			HX_STACK_LINE(633)
			Float tmp8 = elapsed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(633)
			this->updateMotion(tmp8);
		}
		HX_STACK_LINE(635)
		int tmp8 = this->touching;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(635)
		this->wasTouching = tmp8;
		HX_STACK_LINE(636)
		this->touching = (int)0;
	}
return null();
}


Void FlxObject_obj::updateMotion( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxObject","updateMotion",0x420d82ce,"flixel.FlxObject.updateMotion","flixel/FlxObject.hx",644,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(645)
		Float tmp = this->angularVelocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		Float tmp1 = this->angularAcceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(645)
		Float tmp2 = this->angularDrag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(645)
		Float tmp3 = this->maxAngular;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(645)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(645)
		Float tmp5 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(645)
		Float tmp6 = this->angularVelocity;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(645)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(645)
		Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(645)
		Float velocityDelta = tmp8;		HX_STACK_VAR(velocityDelta,"velocityDelta");
		HX_STACK_LINE(646)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(647)
		{
			HX_STACK_LINE(647)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(647)
			Float tmp9 = _g->angle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(647)
			Float tmp10 = this->angularVelocity;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(647)
			Float tmp11 = elapsed;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(647)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(647)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(647)
			_g->set_angle(tmp13);
		}
		HX_STACK_LINE(648)
		hx::AddEq(this->angularVelocity,velocityDelta);
		HX_STACK_LINE(650)
		::flixel::math::FlxPoint tmp9 = this->velocity;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(650)
		Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(650)
		::flixel::math::FlxPoint tmp11 = this->acceleration;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(650)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(650)
		::flixel::math::FlxPoint tmp13 = this->drag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(650)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(650)
		::flixel::math::FlxPoint tmp15 = this->maxVelocity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(650)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(650)
		Float tmp17 = elapsed;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(650)
		Float tmp18 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp10,tmp12,tmp14,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(650)
		::flixel::math::FlxPoint tmp19 = this->velocity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(650)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(650)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(650)
		Float tmp22 = (((Float)0.5) * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(650)
		velocityDelta = tmp22;
		HX_STACK_LINE(651)
		{
			HX_STACK_LINE(651)
			::flixel::math::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(651)
			::flixel::math::FlxPoint _g = tmp23;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(651)
			Float tmp24 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(651)
			_g->set_x(tmp24);
		}
		HX_STACK_LINE(652)
		::flixel::math::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(652)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(652)
		Float tmp25 = elapsed;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(652)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(652)
		Float delta = tmp26;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(653)
			::flixel::math::FlxPoint _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(653)
			Float tmp28 = (_g->x + velocityDelta);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(653)
			_g->set_x(tmp28);
		}
		HX_STACK_LINE(654)
		{
			HX_STACK_LINE(654)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(654)
			Float tmp27 = (_g->x + delta);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(654)
			_g->set_x(tmp27);
		}
		HX_STACK_LINE(656)
		::flixel::math::FlxPoint tmp27 = this->velocity;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(656)
		Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(656)
		::flixel::math::FlxPoint tmp29 = this->acceleration;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(656)
		Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(656)
		::flixel::math::FlxPoint tmp31 = this->drag;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(656)
		Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(656)
		::flixel::math::FlxPoint tmp33 = this->maxVelocity;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(656)
		Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(656)
		Float tmp35 = elapsed;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(656)
		Float tmp36 = ::flixel::math::FlxVelocity_obj::computeVelocity(tmp28,tmp30,tmp32,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(656)
		::flixel::math::FlxPoint tmp37 = this->velocity;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(656)
		Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(656)
		Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(656)
		Float tmp40 = (((Float)0.5) * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(656)
		velocityDelta = tmp40;
		HX_STACK_LINE(657)
		{
			HX_STACK_LINE(657)
			::flixel::math::FlxPoint tmp41 = this->velocity;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(657)
			::flixel::math::FlxPoint _g = tmp41;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(657)
			Float tmp42 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(657)
			_g->set_y(tmp42);
		}
		HX_STACK_LINE(658)
		::flixel::math::FlxPoint tmp41 = this->velocity;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(658)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(658)
		Float tmp43 = elapsed;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(658)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(658)
		delta = tmp44;
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			::flixel::math::FlxPoint tmp45 = this->velocity;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(659)
			::flixel::math::FlxPoint _g = tmp45;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(659)
			Float tmp46 = (_g->y + velocityDelta);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(659)
			_g->set_y(tmp46);
		}
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			::flixel::FlxObject _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(660)
			Float tmp45 = (_g->y + delta);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(660)
			_g->set_y(tmp45);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,updateMotion,(void))

Void FlxObject_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxObject","draw",0x1f17bab3,"flixel.FlxObject.draw","flixel/FlxObject.hx",667,0xf0fe0d80)
		HX_STACK_THIS(this)
	}
return null();
}


bool FlxObject_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlaps",0xaad0e53b,"flixel.FlxObject.overlaps","flixel/FlxObject.hx",685,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(686)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		{
			HX_STACK_LINE(686)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(686)
			bool tmp1 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(686)
			if ((tmp1)){
				HX_STACK_LINE(686)
				bool tmp2 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(686)
				if ((tmp2)){
					HX_STACK_LINE(686)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(686)
					bool tmp3 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(686)
					if ((tmp3)){
						HX_STACK_LINE(686)
						::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
						HX_STACK_LINE(686)
						group = spriteGroup->group;
					}
				}
			}
			HX_STACK_LINE(686)
			tmp = group;
		}
		HX_STACK_LINE(686)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(687)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(687)
		if ((tmp1)){
			HX_STACK_LINE(689)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(689)
			{
				HX_STACK_LINE(689)
				Dynamic tmp3 = this->overlapsCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(689)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(689)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(689)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(689)
				if ((tmp4)){
					HX_STACK_LINE(689)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(689)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(689)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(689)
					while((true)){
						HX_STACK_LINE(689)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(689)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(689)
						if ((tmp6)){
							HX_STACK_LINE(689)
							break;
						}
						HX_STACK_LINE(689)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(689)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(689)
						basic = tmp8;
						HX_STACK_LINE(689)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(689)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(689)
						if ((tmp9)){
							HX_STACK_LINE(689)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(689)
							bool tmp12 = InScreenSpace;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(689)
							::flixel::FlxCamera tmp13 = Camera;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(689)
							::flixel::FlxBasic tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(689)
							bool tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(689)
							::flixel::FlxCamera tmp16 = tmp13;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(689)
							tmp10 = Callback(tmp14,(int)0,(int)0,tmp15,tmp16).Cast< bool >();
						}
						else{
							HX_STACK_LINE(689)
							tmp10 = false;
						}
						HX_STACK_LINE(689)
						if ((tmp10)){
							HX_STACK_LINE(689)
							result = true;
							HX_STACK_LINE(689)
							break;
						}
					}
				}
				HX_STACK_LINE(689)
				tmp2 = result;
			}
			HX_STACK_LINE(689)
			return tmp2;
		}
		HX_STACK_LINE(692)
		bool tmp2 = (ObjectOrGroup->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		if ((tmp2)){
			HX_STACK_LINE(696)
			::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(ObjectOrGroup));		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(697)
			bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(697)
			::flixel::FlxCamera tmp4 = Camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(697)
			bool tmp5 = tilemap->overlaps(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(697)
			return tmp5;
		}
		HX_STACK_LINE(700)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(701)
		bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(701)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(701)
		if ((tmp4)){
			HX_STACK_LINE(703)
			Float tmp5 = object->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			Float tmp6 = object->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(703)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(703)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(703)
			if ((tmp10)){
				HX_STACK_LINE(703)
				Float tmp12 = object->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(703)
				Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(703)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(703)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(703)
				Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(703)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(703)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(703)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(703)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(703)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(703)
				tmp11 = (tmp12 < tmp21);
			}
			else{
				HX_STACK_LINE(703)
				tmp11 = false;
			}
			HX_STACK_LINE(703)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(703)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(703)
			if ((tmp12)){
				HX_STACK_LINE(704)
				Float tmp14 = object->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(704)
				Float tmp15 = object->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(704)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(704)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(704)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(704)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(704)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(704)
				Float tmp21 = this->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(704)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(704)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(704)
				tmp13 = (tmp20 > tmp23);
			}
			else{
				HX_STACK_LINE(703)
				tmp13 = false;
			}
			HX_STACK_LINE(703)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(703)
			if ((tmp13)){
				HX_STACK_LINE(704)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(704)
				Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(704)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(704)
				Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(704)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(704)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(704)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(704)
				tmp14 = (tmp15 < tmp21);
			}
			else{
				HX_STACK_LINE(703)
				tmp14 = false;
			}
			HX_STACK_LINE(703)
			return tmp14;
		}
		HX_STACK_LINE(707)
		bool tmp5 = (Camera == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(707)
		if ((tmp5)){
			HX_STACK_LINE(709)
			::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(709)
			Camera = tmp6;
		}
		HX_STACK_LINE(711)
		::flixel::FlxCamera tmp6 = Camera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(711)
		::flixel::math::FlxPoint tmp7 = object->getScreenPosition(null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(711)
		::flixel::math::FlxPoint objectScreenPos = tmp7;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(712)
		::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(712)
		::flixel::FlxCamera tmp9 = Camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(712)
		this->getScreenPosition(tmp8,tmp9);
		HX_STACK_LINE(713)
		Float tmp10 = objectScreenPos->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(713)
		Float tmp11 = object->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(713)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(713)
		::flixel::math::FlxPoint tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(713)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(713)
		bool tmp15 = (tmp12 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(713)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(713)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(713)
		if ((tmp16)){
			HX_STACK_LINE(713)
			Float tmp18 = objectScreenPos->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(713)
			::flixel::math::FlxPoint tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(713)
			::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(713)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(713)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(713)
			Float tmp23 = this->get_width();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(713)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(713)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(713)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(713)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(713)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(713)
			tmp17 = (tmp18 < tmp28);
		}
		else{
			HX_STACK_LINE(713)
			tmp17 = false;
		}
		HX_STACK_LINE(713)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(713)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(713)
		if ((tmp18)){
			HX_STACK_LINE(714)
			Float tmp20 = objectScreenPos->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(714)
			Float tmp21 = object->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(714)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(714)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(714)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(714)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(714)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp27 = this->_point;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(714)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(714)
			tmp19 = (tmp26 > tmp30);
		}
		else{
			HX_STACK_LINE(713)
			tmp19 = false;
		}
		HX_STACK_LINE(713)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(713)
		if ((tmp19)){
			HX_STACK_LINE(714)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp22 = this->_point;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(714)
			::flixel::math::FlxPoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(714)
			Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(714)
			Float tmp25 = this->get_height();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(714)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(714)
			Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(714)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(714)
			tmp20 = (tmp21 < tmp28);
		}
		else{
			HX_STACK_LINE(713)
			tmp20 = false;
		}
		HX_STACK_LINE(713)
		return tmp20;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlaps,return )

bool FlxObject_obj::overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsCallback",0xe4196e20,"flixel.FlxObject.overlapsCallback","flixel/FlxObject.hx",718,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(719)
	::flixel::FlxBasic tmp = ObjectOrGroup;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1 = InScreenSpace;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	bool tmp3 = this->overlaps(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(719)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsCallback,return )

bool FlxObject_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsAt",0xacc1230e,"flixel.FlxObject.overlapsAt","flixel/FlxObject.hx",734,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(735)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(735)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(735)
			bool tmp1 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(735)
			if ((tmp1)){
				HX_STACK_LINE(735)
				bool tmp2 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(735)
				if ((tmp2)){
					HX_STACK_LINE(735)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(735)
					bool tmp3 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(735)
					if ((tmp3)){
						HX_STACK_LINE(735)
						::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
						HX_STACK_LINE(735)
						group = spriteGroup->group;
					}
				}
			}
			HX_STACK_LINE(735)
			tmp = group;
		}
		HX_STACK_LINE(735)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(736)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(736)
		if ((tmp1)){
			HX_STACK_LINE(738)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(738)
			{
				HX_STACK_LINE(738)
				Dynamic tmp3 = this->overlapsAtCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(738)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(738)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(738)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(738)
				if ((tmp4)){
					HX_STACK_LINE(738)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(738)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(738)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(738)
					while((true)){
						HX_STACK_LINE(738)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(738)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(738)
						if ((tmp6)){
							HX_STACK_LINE(738)
							break;
						}
						HX_STACK_LINE(738)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(738)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(738)
						basic = tmp8;
						HX_STACK_LINE(738)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(738)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(738)
						if ((tmp9)){
							HX_STACK_LINE(738)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(738)
							Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(738)
							Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(738)
							bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(738)
							::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(738)
							::flixel::FlxBasic tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(738)
							Float tmp17 = tmp12;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(738)
							Float tmp18 = tmp13;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(738)
							bool tmp19 = tmp14;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(738)
							::flixel::FlxCamera tmp20 = tmp15;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(738)
							tmp10 = Callback(tmp16,tmp17,tmp18,tmp19,tmp20).Cast< bool >();
						}
						else{
							HX_STACK_LINE(738)
							tmp10 = false;
						}
						HX_STACK_LINE(738)
						if ((tmp10)){
							HX_STACK_LINE(738)
							result = true;
							HX_STACK_LINE(738)
							break;
						}
					}
				}
				HX_STACK_LINE(738)
				tmp2 = result;
			}
			HX_STACK_LINE(738)
			return tmp2;
		}
		HX_STACK_LINE(741)
		bool tmp2 = (ObjectOrGroup->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		if ((tmp2)){
			HX_STACK_LINE(747)
			::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(ObjectOrGroup));		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(748)
			Float tmp3 = tilemap->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(748)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(748)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(748)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(748)
			Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(748)
			Float tmp8 = tilemap->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(748)
			Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(748)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(748)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(748)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(748)
			bool tmp13 = InScreenSpace;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(748)
			::flixel::FlxCamera tmp14 = Camera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(748)
			bool tmp15 = tilemap->overlapsAt(tmp7,tmp12,hx::ObjectPtr<OBJ_>(this),tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(748)
			return tmp15;
		}
		HX_STACK_LINE(751)
		::flixel::FlxObject object = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(752)
		bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(752)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(752)
		if ((tmp4)){
			HX_STACK_LINE(754)
			Float tmp5 = object->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(754)
			Float tmp6 = object->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(754)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(754)
			Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(754)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(754)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(754)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(754)
			if ((tmp10)){
				HX_STACK_LINE(754)
				Float tmp12 = object->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(754)
				Float tmp13 = X;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(754)
				Float tmp14 = this->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(754)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(754)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(754)
				Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(754)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(754)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(754)
				tmp11 = (tmp12 < tmp19);
			}
			else{
				HX_STACK_LINE(754)
				tmp11 = false;
			}
			HX_STACK_LINE(754)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(754)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(754)
			if ((tmp12)){
				HX_STACK_LINE(755)
				Float tmp14 = object->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(755)
				Float tmp15 = object->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(755)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(755)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(755)
				Float tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(755)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(755)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(755)
				Float tmp21 = Y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(755)
				tmp13 = (tmp20 > tmp21);
			}
			else{
				HX_STACK_LINE(754)
				tmp13 = false;
			}
			HX_STACK_LINE(754)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(754)
			if ((tmp13)){
				HX_STACK_LINE(755)
				Float tmp15 = object->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(755)
				Float tmp16 = Y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(755)
				Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(755)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(755)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(755)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(755)
				tmp14 = (tmp15 < tmp20);
			}
			else{
				HX_STACK_LINE(754)
				tmp14 = false;
			}
			HX_STACK_LINE(754)
			return tmp14;
		}
		HX_STACK_LINE(758)
		bool tmp5 = (Camera == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(758)
		if ((tmp5)){
			HX_STACK_LINE(760)
			::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(760)
			Camera = tmp6;
		}
		HX_STACK_LINE(762)
		::flixel::FlxCamera tmp6 = Camera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(762)
		::flixel::math::FlxPoint tmp7 = object->getScreenPosition(null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(762)
		::flixel::math::FlxPoint objectScreenPos = tmp7;		HX_STACK_VAR(objectScreenPos,"objectScreenPos");
		HX_STACK_LINE(763)
		::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(763)
		::flixel::FlxCamera tmp9 = Camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(763)
		this->getScreenPosition(tmp8,tmp9);
		HX_STACK_LINE(764)
		Float tmp10 = objectScreenPos->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(764)
		Float tmp11 = object->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(764)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(764)
		::flixel::math::FlxPoint tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(764)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(764)
		bool tmp15 = (tmp12 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(764)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(764)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(764)
		if ((tmp16)){
			HX_STACK_LINE(764)
			Float tmp18 = objectScreenPos->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(764)
			::flixel::math::FlxPoint tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(764)
			::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(764)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(764)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(764)
			Float tmp23 = this->get_width();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(764)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(764)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(764)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(764)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(764)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(764)
			tmp17 = (tmp18 < tmp28);
		}
		else{
			HX_STACK_LINE(764)
			tmp17 = false;
		}
		HX_STACK_LINE(764)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(764)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(764)
		if ((tmp18)){
			HX_STACK_LINE(765)
			Float tmp20 = objectScreenPos->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(765)
			Float tmp21 = object->get_height();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(765)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(765)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(765)
			Float tmp24 = (tmp20 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(765)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(765)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp27 = this->_point;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(765)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(765)
			tmp19 = (tmp26 > tmp30);
		}
		else{
			HX_STACK_LINE(764)
			tmp19 = false;
		}
		HX_STACK_LINE(764)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(764)
		if ((tmp19)){
			HX_STACK_LINE(765)
			Float tmp21 = objectScreenPos->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp22 = this->_point;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(765)
			::flixel::math::FlxPoint tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(765)
			Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(765)
			Float tmp25 = this->get_height();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(765)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(765)
			Float tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(765)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(765)
			tmp20 = (tmp21 < tmp28);
		}
		else{
			HX_STACK_LINE(764)
			tmp20 = false;
		}
		HX_STACK_LINE(764)
		return tmp20;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAt,return )

bool FlxObject_obj::overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","overlapsAtCallback",0xb90836f3,"flixel.FlxObject.overlapsAtCallback","flixel/FlxObject.hx",769,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(770)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(770)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(770)
	::flixel::FlxBasic tmp2 = ObjectOrGroup;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(770)
	bool tmp3 = InScreenSpace;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(770)
	::flixel::FlxCamera tmp4 = Camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(770)
	bool tmp5 = this->overlapsAt(tmp,tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(770)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxObject_obj,overlapsAtCallback,return )

bool FlxObject_obj::overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.FlxObject","overlapsPoint",0xcd9c6915,"flixel.FlxObject.overlapsPoint","flixel/FlxObject.hx",782,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(783)
		bool tmp = InScreenSpace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(783)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(783)
		if ((tmp1)){
			HX_STACK_LINE(785)
			Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(785)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(785)
			bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(785)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(785)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(785)
			if ((tmp5)){
				HX_STACK_LINE(785)
				Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(785)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(785)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(785)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(785)
				Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(785)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(785)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(785)
				Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(785)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(785)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(785)
				tmp6 = (tmp7 < tmp16);
			}
			else{
				HX_STACK_LINE(785)
				tmp6 = false;
			}
			HX_STACK_LINE(785)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(785)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(785)
			if ((tmp7)){
				HX_STACK_LINE(785)
				Float tmp9 = point->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(785)
				Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(785)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(785)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(785)
				tmp8 = (tmp9 > tmp12);
			}
			else{
				HX_STACK_LINE(785)
				tmp8 = false;
			}
			HX_STACK_LINE(785)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(785)
			if ((tmp8)){
				HX_STACK_LINE(785)
				Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(785)
				Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(785)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(785)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(785)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(785)
				Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(785)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(785)
				tmp9 = (tmp10 < tmp16);
			}
			else{
				HX_STACK_LINE(785)
				tmp9 = false;
			}
			HX_STACK_LINE(785)
			return tmp9;
		}
		HX_STACK_LINE(788)
		bool tmp2 = (Camera == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		if ((tmp2)){
			HX_STACK_LINE(790)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(790)
			Camera = tmp3;
		}
		HX_STACK_LINE(792)
		Float tmp3 = point->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(792)
		Float tmp4 = Camera->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(792)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(792)
		Float X = tmp5;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(793)
		Float tmp6 = point->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(793)
		Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(793)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(793)
		Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(794)
		::flixel::math::FlxPoint tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(794)
		::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(794)
		this->getScreenPosition(tmp9,tmp10);
		HX_STACK_LINE(795)
		{
			HX_STACK_LINE(795)
			bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(795)
			if ((tmp11)){
				HX_STACK_LINE(795)
				point->put();
			}
		}
		HX_STACK_LINE(796)
		Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(796)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(796)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(796)
		bool tmp14 = (tmp11 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(796)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(796)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(796)
		if ((tmp15)){
			HX_STACK_LINE(796)
			Float tmp17 = X;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(796)
			Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(796)
			Float tmp22 = this->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(796)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(796)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(796)
			Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(796)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(796)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(796)
			tmp16 = (tmp17 < tmp27);
		}
		else{
			HX_STACK_LINE(796)
			tmp16 = false;
		}
		HX_STACK_LINE(796)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(796)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(796)
		if ((tmp17)){
			HX_STACK_LINE(796)
			Float tmp19 = Y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(796)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(796)
			tmp18 = (tmp19 > tmp23);
		}
		else{
			HX_STACK_LINE(796)
			tmp18 = false;
		}
		HX_STACK_LINE(796)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(796)
		if ((tmp18)){
			HX_STACK_LINE(796)
			Float tmp20 = Y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(796)
			::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(796)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(796)
			Float tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(796)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(796)
			Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(796)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(796)
			tmp19 = (tmp20 < tmp27);
		}
		else{
			HX_STACK_LINE(796)
			tmp19 = false;
		}
		HX_STACK_LINE(796)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,overlapsPoint,return )

bool FlxObject_obj::inWorldBounds( ){
	HX_STACK_FRAME("flixel.FlxObject","inWorldBounds",0x89d0e9f3,"flixel.FlxObject.inWorldBounds","flixel/FlxObject.hx",805,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(806)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(806)
	Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(806)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(806)
	::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(806)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(806)
	bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(806)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(806)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(806)
	if ((tmp6)){
		HX_STACK_LINE(806)
		Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(806)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(806)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(806)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(806)
		{
			HX_STACK_LINE(806)
			::flixel::math::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(806)
			::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(806)
			::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(806)
			::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(806)
			Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(806)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(806)
			tmp11 = tmp16;
		}
		HX_STACK_LINE(806)
		tmp7 = (tmp10 < tmp11);
	}
	else{
		HX_STACK_LINE(806)
		tmp7 = false;
	}
	HX_STACK_LINE(806)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(806)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(806)
	if ((tmp8)){
		HX_STACK_LINE(806)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(806)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(806)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(806)
		Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(806)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(806)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(806)
		Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(806)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(806)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(806)
		::flixel::math::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(806)
		::flixel::math::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(806)
		::flixel::math::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(806)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(806)
		tmp9 = (tmp18 > tmp22);
	}
	else{
		HX_STACK_LINE(806)
		tmp9 = false;
	}
	HX_STACK_LINE(806)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(806)
	if ((tmp9)){
		HX_STACK_LINE(806)
		Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(806)
		Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(806)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(806)
		{
			HX_STACK_LINE(806)
			::flixel::math::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(806)
			::flixel::math::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(806)
			::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(806)
			Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(806)
			tmp13 = tmp16;
		}
		HX_STACK_LINE(806)
		tmp10 = (tmp12 < tmp13);
	}
	else{
		HX_STACK_LINE(806)
		tmp10 = false;
	}
	HX_STACK_LINE(806)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,inWorldBounds,return )

::flixel::math::FlxPoint FlxObject_obj::getScreenPosition( ::flixel::math::FlxPoint point,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","getScreenPosition",0x643c435c,"flixel.FlxObject.getScreenPosition","flixel/FlxObject.hx",817,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(818)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	if ((tmp)){
		HX_STACK_LINE(820)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(820)
		{
			HX_STACK_LINE(820)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(820)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(820)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(820)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(820)
			point1->_inPool = false;
			HX_STACK_LINE(820)
			tmp1 = point1;
		}
		HX_STACK_LINE(820)
		point = tmp1;
	}
	HX_STACK_LINE(822)
	bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(822)
	if ((tmp1)){
		HX_STACK_LINE(824)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(824)
		Camera = tmp2;
	}
	HX_STACK_LINE(827)
	Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(827)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(827)
	point->set(tmp2,tmp3);
	HX_STACK_LINE(828)
	bool tmp4 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(828)
	if ((tmp4)){
		HX_STACK_LINE(830)
		Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(830)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(830)
		point->set_x(tmp6);
		HX_STACK_LINE(830)
		Float tmp7 = point->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(830)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(830)
		point->set_y(tmp8);
		HX_STACK_LINE(830)
		point;
	}
	HX_STACK_LINE(833)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(833)
	{
		HX_STACK_LINE(833)
		{
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(833)
			Float tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(833)
			Float tmp7 = Camera->scroll->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(833)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(833)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(833)
			Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(833)
			_g->set_x(tmp11);
		}
		HX_STACK_LINE(833)
		{
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(833)
			Float tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(833)
			Float tmp7 = Camera->scroll->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(833)
			::flixel::math::FlxPoint tmp8 = this->scrollFactor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(833)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(833)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(833)
			Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(833)
			_g->set_y(tmp11);
		}
		HX_STACK_LINE(833)
		tmp5 = point;
	}
	HX_STACK_LINE(833)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,getScreenPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getPosition( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getPosition",0x1bf09890,"flixel.FlxObject.getPosition","flixel/FlxObject.hx",837,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(838)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(838)
	if ((tmp)){
		HX_STACK_LINE(839)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(839)
		{
			HX_STACK_LINE(839)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(839)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(839)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(839)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(839)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(839)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(839)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(839)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(839)
			point1->_inPool = false;
			HX_STACK_LINE(839)
			tmp1 = point1;
		}
		HX_STACK_LINE(839)
		point = tmp1;
	}
	HX_STACK_LINE(840)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(840)
	Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(840)
	::flixel::math::FlxPoint tmp3 = point->set(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(840)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getPosition,return )

::flixel::math::FlxPoint FlxObject_obj::getMidpoint( ::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.FlxObject","getMidpoint",0x7bfe0daf,"flixel.FlxObject.getMidpoint","flixel/FlxObject.hx",850,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(851)
	bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(851)
	if ((tmp)){
		HX_STACK_LINE(853)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(853)
		{
			HX_STACK_LINE(853)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(853)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(853)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(853)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(853)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(853)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(853)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(853)
			::flixel::math::FlxPoint point1 = tmp6;		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(853)
			point1->_inPool = false;
			HX_STACK_LINE(853)
			tmp1 = point1;
		}
		HX_STACK_LINE(853)
		point = tmp1;
	}
	HX_STACK_LINE(855)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(855)
	Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(855)
	Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(855)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(855)
	Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(855)
	Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(855)
	Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(855)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(855)
	::flixel::math::FlxPoint tmp9 = point->set(tmp4,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(855)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getMidpoint,return )

::flixel::math::FlxRect FlxObject_obj::getHitbox( ::flixel::math::FlxRect rect){
	HX_STACK_FRAME("flixel.FlxObject","getHitbox",0x5f284dbf,"flixel.FlxObject.getHitbox","flixel/FlxObject.hx",859,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(860)
	bool tmp = (rect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(860)
	if ((tmp)){
		HX_STACK_LINE(861)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		{
			HX_STACK_LINE(861)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(861)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(861)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(861)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(861)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(861)
			{
				HX_STACK_LINE(861)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(861)
				::flixel::math::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(861)
				::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(861)
				_this->x = X;
				HX_STACK_LINE(861)
				_this->y = Y;
				HX_STACK_LINE(861)
				_this->width = Width;
				HX_STACK_LINE(861)
				_this->height = Height;
				HX_STACK_LINE(861)
				tmp2 = _this;
			}
			HX_STACK_LINE(861)
			::flixel::math::FlxRect rect1 = tmp2;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(861)
			rect1->_inPool = false;
			HX_STACK_LINE(861)
			tmp1 = rect1;
		}
		HX_STACK_LINE(861)
		rect = tmp1;
	}
	HX_STACK_LINE(862)
	::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(862)
	{
		HX_STACK_LINE(862)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(862)
		Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(862)
		Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(862)
		Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(862)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		rect->x = tmp4;
		HX_STACK_LINE(862)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(862)
		rect->y = tmp5;
		HX_STACK_LINE(862)
		rect->width = Width;
		HX_STACK_LINE(862)
		rect->height = Height;
		HX_STACK_LINE(862)
		tmp1 = rect;
	}
	HX_STACK_LINE(862)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getHitbox,return )

Void FlxObject_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxObject","reset",0x1cbd9440,"flixel.FlxObject.reset","flixel/FlxObject.hx",873,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(874)
		this->touching = (int)0;
		HX_STACK_LINE(875)
		this->wasTouching = (int)0;
		HX_STACK_LINE(876)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(876)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(876)
		this->setPosition(tmp,tmp1);
		HX_STACK_LINE(877)
		::flixel::math::FlxPoint tmp2 = this->last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(877)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(877)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(877)
		tmp2->set(tmp3,tmp4);
		HX_STACK_LINE(878)
		::flixel::math::FlxPoint tmp5 = this->velocity;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(878)
		tmp5->set(null(),null());
		HX_STACK_LINE(879)
		this->revive();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,reset,(void))

bool FlxObject_obj::isOnScreen( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isOnScreen",0x4aab7fe4,"flixel.FlxObject.isOnScreen","flixel/FlxObject.hx",889,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(890)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	if ((tmp)){
		HX_STACK_LINE(892)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(892)
		Camera = tmp1;
	}
	HX_STACK_LINE(894)
	::flixel::math::FlxPoint tmp1 = this->_point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(894)
	::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(894)
	this->getScreenPosition(tmp1,tmp2);
	HX_STACK_LINE(895)
	::flixel::math::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(895)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(895)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(895)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(895)
	bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(895)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(895)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(895)
	if ((tmp8)){
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(895)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(895)
		int tmp14 = Camera->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(895)
		tmp9 = (tmp13 < tmp14);
	}
	else{
		HX_STACK_LINE(895)
		tmp9 = false;
	}
	HX_STACK_LINE(895)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(895)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(895)
	if ((tmp10)){
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(895)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(895)
		Float tmp16 = this->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(895)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(895)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(895)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(895)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(895)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(895)
		tmp11 = (tmp21 > (int)0);
	}
	else{
		HX_STACK_LINE(895)
		tmp11 = false;
	}
	HX_STACK_LINE(895)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(895)
	if ((tmp11)){
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp13 = this->_point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(895)
		::flixel::math::FlxPoint tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(895)
		Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(895)
		int tmp16 = Camera->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(895)
		tmp12 = (tmp15 < tmp16);
	}
	else{
		HX_STACK_LINE(895)
		tmp12 = false;
	}
	HX_STACK_LINE(895)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isOnScreen,return )

bool FlxObject_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxObject","isPixelPerfectRender",0xc4c93916,"flixel.FlxObject.isPixelPerfectRender","flixel/FlxObject.hx",902,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(903)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(903)
	if ((tmp)){
		HX_STACK_LINE(905)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		Camera = tmp1;
	}
	HX_STACK_LINE(908)
	Dynamic tmp1 = this->pixelPerfectRender;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(908)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(908)
	if ((tmp2)){
		HX_STACK_LINE(908)
		tmp3 = Camera->pixelPerfectRender;
	}
	else{
		HX_STACK_LINE(908)
		tmp3 = this->pixelPerfectRender;
	}
	HX_STACK_LINE(908)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isPixelPerfectRender,return )

bool FlxObject_obj::isTouching( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","isTouching",0x23c6647c,"flixel.FlxObject.isTouching","flixel/FlxObject.hx",919,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(920)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(920)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(920)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(920)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,isTouching,return )

bool FlxObject_obj::justTouched( int Direction){
	HX_STACK_FRAME("flixel.FlxObject","justTouched",0xbcba8e43,"flixel.FlxObject.justTouched","flixel/FlxObject.hx",931,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Direction,"Direction")
	HX_STACK_LINE(932)
	int tmp = this->touching;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(932)
	int tmp1 = Direction;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(932)
	int tmp2 = (int(tmp) & int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(932)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(932)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(932)
	if ((tmp3)){
		HX_STACK_LINE(932)
		int tmp5 = this->wasTouching;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(932)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(932)
		int tmp7 = Direction;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(932)
		int tmp8 = (int(tmp6) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(932)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(932)
		tmp4 = (tmp9 <= (int)0);
	}
	else{
		HX_STACK_LINE(932)
		tmp4 = false;
	}
	HX_STACK_LINE(932)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,justTouched,return )

Void FlxObject_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("flixel.FlxObject","hurt",0x21beeabe,"flixel.FlxObject.hurt","flixel/FlxObject.hx",942,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(943)
		Float tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		Float tmp1 = Damage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(943)
		this->health = tmp2;
		HX_STACK_LINE(944)
		Float tmp3 = this->health;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(944)
		bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(944)
		if ((tmp4)){
			HX_STACK_LINE(946)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,hurt,(void))

::flixel::FlxObject FlxObject_obj::screenCenter( ::flixel::util::FlxAxes axes){
	HX_STACK_FRAME("flixel.FlxObject","screenCenter",0x59e58410,"flixel.FlxObject.screenCenter","flixel/FlxObject.hx",957,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axes,"axes")
	HX_STACK_LINE(958)
	bool tmp = (axes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(958)
	if ((tmp)){
		HX_STACK_LINE(959)
		axes = ::flixel::util::FlxAxes_obj::XY;
	}
	HX_STACK_LINE(961)
	bool tmp1 = (axes != ::flixel::util::FlxAxes_obj::Y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(961)
	if ((tmp1)){
		HX_STACK_LINE(962)
		int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(962)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(962)
		Float tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(962)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(962)
		Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(962)
		this->set_x(tmp6);
	}
	HX_STACK_LINE(963)
	bool tmp2 = (axes != ::flixel::util::FlxAxes_obj::X);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(963)
	if ((tmp2)){
		HX_STACK_LINE(964)
		int tmp3 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(964)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(964)
		Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(964)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(964)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(964)
		this->set_y(tmp7);
	}
	HX_STACK_LINE(966)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,screenCenter,return )

Void FlxObject_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxObject","setPosition",0x265d9f9c,"flixel.FlxObject.setPosition","flixel/FlxObject.hx",977,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(978)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(978)
		this->set_x(tmp);
		HX_STACK_LINE(979)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(979)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setPosition,(void))

Void FlxObject_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.FlxObject","setSize",0xa7896a34,"flixel.FlxObject.setSize","flixel/FlxObject.hx",989,0xf0fe0d80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(990)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(990)
		this->set_width(tmp);
		HX_STACK_LINE(991)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(991)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,setSize,(void))

::flixel::math::FlxRect FlxObject_obj::getBoundingBox( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.FlxObject","getBoundingBox",0x58364780,"flixel.FlxObject.getBoundingBox","flixel/FlxObject.hx",1070,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1071)
	::flixel::math::FlxPoint tmp = this->_point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1071)
	::flixel::FlxCamera tmp1 = camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1071)
	this->getScreenPosition(tmp,tmp1);
	HX_STACK_LINE(1072)
	{
		HX_STACK_LINE(1072)
		::flixel::math::FlxRect tmp2 = this->_rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1072)
		::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1072)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1072)
		Float Width = tmp3;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(1072)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1072)
		Float Height = tmp4;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1072)
		::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1072)
		_this->x = tmp5->x;
		HX_STACK_LINE(1072)
		::flixel::math::FlxPoint tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1072)
		_this->y = tmp6->y;
		HX_STACK_LINE(1072)
		_this->width = Width;
		HX_STACK_LINE(1072)
		_this->height = Height;
		HX_STACK_LINE(1072)
		_this;
	}
	HX_STACK_LINE(1074)
	::flixel::FlxCamera tmp2 = camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1074)
	bool tmp3 = this->isPixelPerfectRender(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1074)
	if ((tmp3)){
		HX_STACK_LINE(1076)
		::flixel::math::FlxRect tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1076)
		::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1076)
		Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1076)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1076)
		_this->x = tmp6;
		HX_STACK_LINE(1076)
		Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1076)
		int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1076)
		_this->y = tmp8;
		HX_STACK_LINE(1076)
		Float tmp9 = _this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1076)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1076)
		_this->width = tmp10;
		HX_STACK_LINE(1076)
		Float tmp11 = _this->height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1076)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1076)
		_this->height = tmp12;
		HX_STACK_LINE(1076)
		_this;
	}
	HX_STACK_LINE(1079)
	::flixel::math::FlxRect tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1079)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,getBoundingBox,return )

::String FlxObject_obj::toString( ){
	HX_STACK_FRAME("flixel.FlxObject","toString",0x9e14e2db,"flixel.FlxObject.toString","flixel/FlxObject.hx",1086,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1088)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1088)
	{
		HX_STACK_LINE(1088)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1088)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1088)
		_this->label = HX_HCSTRING("x","\x78","\x00","\x00","\x00");
		HX_STACK_LINE(1088)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1088)
		_this->value = tmp3;
		HX_STACK_LINE(1088)
		tmp = _this;
	}
	HX_STACK_LINE(1089)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1089)
	{
		HX_STACK_LINE(1089)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1089)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1089)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1089)
		_this->label = HX_HCSTRING("y","\x79","\x00","\x00","\x00");
		HX_STACK_LINE(1089)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1089)
		_this->value = tmp4;
		HX_STACK_LINE(1089)
		tmp1 = _this;
	}
	HX_STACK_LINE(1090)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1090)
	{
		HX_STACK_LINE(1090)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1090)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1090)
		{
			HX_STACK_LINE(1090)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1090)
			::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1090)
			::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1090)
			_this->label = HX_HCSTRING("w","\x77","\x00","\x00","\x00");
			HX_STACK_LINE(1090)
			_this->value = value;
			HX_STACK_LINE(1090)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(1091)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1091)
	{
		HX_STACK_LINE(1091)
		Float tmp4 = this->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1091)
		Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1091)
		{
			HX_STACK_LINE(1091)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1091)
			::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1091)
			::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1091)
			_this->label = HX_HCSTRING("h","\x68","\x00","\x00","\x00");
			HX_STACK_LINE(1091)
			_this->value = value;
			HX_STACK_LINE(1091)
			tmp3 = _this;
		}
	}
	HX_STACK_LINE(1092)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1092)
	{
		HX_STACK_LINE(1092)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1092)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1092)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1092)
		_this->label = HX_HCSTRING("visible","\x72","\x78","\x24","\xa3");
		HX_STACK_LINE(1092)
		bool tmp7 = this->visible;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1092)
		_this->value = tmp7;
		HX_STACK_LINE(1092)
		tmp4 = _this;
	}
	HX_STACK_LINE(1093)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1093)
	{
		HX_STACK_LINE(1093)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp6 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1093)
		::flixel::util::LabelValuePair tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1093)
		::flixel::util::LabelValuePair _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1093)
		_this->label = HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e");
		HX_STACK_LINE(1093)
		::flixel::math::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1093)
		_this->value = tmp8;
		HX_STACK_LINE(1093)
		tmp5 = _this;
	}
	HX_STACK_LINE(1087)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1087)
	return tmp6;
}


Float FlxObject_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.FlxObject","set_x",0xb024e5cc,"flixel.FlxObject.set_x","flixel/FlxObject.hx",1097,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(1098)
	Float tmp = this->x = NewX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1098)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_x,return )

Float FlxObject_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.FlxObject","set_y",0xb024e5cd,"flixel.FlxObject.set_y","flixel/FlxObject.hx",1102,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(1103)
	Float tmp = this->y = NewY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_y,return )

Float FlxObject_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.FlxObject","set_width",0x7d06d55a,"flixel.FlxObject.set_width","flixel/FlxObject.hx",1107,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(1116)
	Float tmp = this->width = Width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_width,return )

Float FlxObject_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.FlxObject","set_height",0x9f435213,"flixel.FlxObject.set_height","flixel/FlxObject.hx",1120,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(1129)
	Float tmp = this->height = Height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1129)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_height,return )

Float FlxObject_obj::get_width( ){
	HX_STACK_FRAME("flixel.FlxObject","get_width",0x99b5e94e,"flixel.FlxObject.get_width","flixel/FlxObject.hx",1133,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1134)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1134)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_width,return )

Float FlxObject_obj::get_height( ){
	HX_STACK_FRAME("flixel.FlxObject","get_height",0x9bc5b39f,"flixel.FlxObject.get_height","flixel/FlxObject.hx",1138,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1139)
	Float tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_height,return )

bool FlxObject_obj::get_solid( ){
	HX_STACK_FRAME("flixel.FlxObject","get_solid",0x5018e773,"flixel.FlxObject.get_solid","flixel/FlxObject.hx",1143,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1144)
	int tmp = this->allowCollisions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	int tmp1 = (int(tmp) & int((int)4369));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1144)
	bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1144)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxObject_obj,get_solid,return )

bool FlxObject_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.FlxObject","set_solid",0x3369d37f,"flixel.FlxObject.set_solid","flixel/FlxObject.hx",1148,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(1149)
	bool tmp = Solid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1149)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1149)
	if ((tmp)){
		HX_STACK_LINE(1149)
		tmp1 = (int)4369;
	}
	else{
		HX_STACK_LINE(1149)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(1149)
	this->set_allowCollisions(tmp1);
	HX_STACK_LINE(1150)
	bool tmp2 = Solid;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1150)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_solid,return )

Float FlxObject_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.FlxObject","set_angle",0xd5866327,"flixel.FlxObject.set_angle","flixel/FlxObject.hx",1154,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1155)
	Float tmp = this->angle = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1155)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_angle,return )

bool FlxObject_obj::set_moves( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_moves",0xbf09eb96,"flixel.FlxObject.set_moves","flixel/FlxObject.hx",1159,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1160)
	bool tmp = this->moves = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1160)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_moves,return )

bool FlxObject_obj::set_immovable( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_immovable",0xc5b8805e,"flixel.FlxObject.set_immovable","flixel/FlxObject.hx",1164,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1165)
	bool tmp = this->immovable = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1165)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_immovable,return )

bool FlxObject_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.FlxObject","set_pixelPerfectRender",0x84233609,"flixel.FlxObject.set_pixelPerfectRender","flixel/FlxObject.hx",1169,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1170)
	Dynamic tmp = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1170)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_pixelPerfectRender,return )

int FlxObject_obj::set_allowCollisions( int Value){
	HX_STACK_FRAME("flixel.FlxObject","set_allowCollisions",0x7975d9fe,"flixel.FlxObject.set_allowCollisions","flixel/FlxObject.hx",1174,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1175)
	int tmp = this->allowCollisions = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1175)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_allowCollisions,return )

::flixel::util::FlxPath FlxObject_obj::set_path( ::flixel::util::FlxPath path){
	HX_STACK_FRAME("flixel.FlxObject","set_path",0xde100cd1,"flixel.FlxObject.set_path","flixel/FlxObject.hx",1179,0xf0fe0d80)
	HX_STACK_THIS(this)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(1180)
	::flixel::util::FlxPath tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1180)
	::flixel::util::FlxPath tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1180)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1180)
	if ((tmp2)){
		HX_STACK_LINE(1181)
		::flixel::util::FlxPath tmp3 = path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1181)
		return tmp3;
	}
	HX_STACK_LINE(1183)
	::flixel::util::FlxPath tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1183)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1183)
	if ((tmp4)){
		HX_STACK_LINE(1184)
		::flixel::util::FlxPath tmp5 = this->path;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1184)
		tmp5->object = null();
	}
	HX_STACK_LINE(1186)
	bool tmp5 = (path != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1186)
	if ((tmp5)){
		HX_STACK_LINE(1187)
		path->object = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(1188)
	::flixel::util::FlxPath tmp6 = this->path = path;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1188)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxObject_obj,set_path,return )

bool FlxObject_obj::defaultPixelPerfectPosition;

Float FlxObject_obj::SEPARATE_BIAS;

int FlxObject_obj::LEFT;

int FlxObject_obj::RIGHT;

int FlxObject_obj::UP;

int FlxObject_obj::DOWN;

int FlxObject_obj::NONE;

int FlxObject_obj::CEILING;

int FlxObject_obj::FLOOR;

int FlxObject_obj::WALL;

int FlxObject_obj::ANY;

::flixel::math::FlxRect FlxObject_obj::_firstSeparateFlxRect;

::flixel::math::FlxRect FlxObject_obj::_secondSeparateFlxRect;

bool FlxObject_obj::separate( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separate",0x6cc23192,"flixel.FlxObject.separate","flixel/FlxObject.hx",81,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(82)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	bool tmp2 = ::flixel::FlxObject_obj::separateX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	bool separatedX = tmp2;		HX_STACK_VAR(separatedX,"separatedX");
	HX_STACK_LINE(83)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	bool tmp5 = ::flixel::FlxObject_obj::separateY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	bool separatedY = tmp5;		HX_STACK_VAR(separatedY,"separatedY");
	HX_STACK_LINE(84)
	bool tmp6 = separatedX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(84)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(84)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(84)
	if ((tmp7)){
		HX_STACK_LINE(84)
		tmp8 = separatedY;
	}
	else{
		HX_STACK_LINE(84)
		tmp8 = true;
	}
	HX_STACK_LINE(84)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separate,return )

bool FlxObject_obj::updateTouchingFlags( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlags",0x15a0502c,"flixel.FlxObject.updateTouchingFlags","flixel/FlxObject.hx",96,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(97)
	::flixel::FlxObject tmp = Object1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	bool tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsX(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	bool touchingX = tmp2;		HX_STACK_VAR(touchingX,"touchingX");
	HX_STACK_LINE(98)
	::flixel::FlxObject tmp3 = Object1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	::flixel::FlxObject tmp4 = Object2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	bool tmp5 = ::flixel::FlxObject_obj::updateTouchingFlagsY(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	bool touchingY = tmp5;		HX_STACK_VAR(touchingY,"touchingY");
	HX_STACK_LINE(99)
	bool tmp6 = touchingX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(99)
	if ((tmp7)){
		HX_STACK_LINE(99)
		tmp8 = touchingY;
	}
	else{
		HX_STACK_LINE(99)
		tmp8 = true;
	}
	HX_STACK_LINE(99)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlags,return )

Float FlxObject_obj::computeOverlapX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  __o_checkMaxOverlap){
bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
	HX_STACK_FRAME("flixel.FlxObject","computeOverlapX",0x240ec739,"flixel.FlxObject.computeOverlapX","flixel/FlxObject.hx",108,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_ARG(checkMaxOverlap,"checkMaxOverlap")
{
		HX_STACK_LINE(109)
		Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(111)
		Float tmp = Object1->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		Float tmp1 = Object1->last->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		Float obj1delta = tmp2;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(112)
		Float tmp3 = Object2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		Float tmp4 = Object2->last->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		Float obj2delta = tmp5;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(114)
		bool tmp6 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		if ((tmp6)){
			HX_STACK_LINE(117)
			bool tmp7 = (obj1delta > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(117)
			if ((tmp7)){
				HX_STACK_LINE(117)
				tmp8 = obj1delta;
			}
			else{
				HX_STACK_LINE(117)
				Float tmp9 = obj1delta;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(117)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(117)
			Float obj1deltaAbs = tmp8;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
			HX_STACK_LINE(118)
			bool tmp9 = (obj2delta > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			if ((tmp9)){
				HX_STACK_LINE(118)
				tmp10 = obj2delta;
			}
			else{
				HX_STACK_LINE(118)
				Float tmp11 = obj2delta;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				tmp10 = -(tmp11);
			}
			HX_STACK_LINE(118)
			Float obj2deltaAbs = tmp10;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
			HX_STACK_LINE(120)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(120)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(120)
				Float tmp13 = Object1->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(120)
				Float tmp14 = obj1deltaAbs;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(120)
				Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(120)
				Float Width = tmp15;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(120)
				Float tmp16 = Object1->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(120)
				Float Height = tmp16;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(120)
				Float tmp17 = Object1->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(120)
				bool tmp18 = (obj1delta > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(120)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(120)
				if ((tmp18)){
					HX_STACK_LINE(120)
					tmp19 = obj1delta;
				}
				else{
					HX_STACK_LINE(120)
					tmp19 = (int)0;
				}
				HX_STACK_LINE(120)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(120)
				_this->x = tmp20;
				HX_STACK_LINE(120)
				Float tmp21 = Object1->last->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(120)
				_this->y = tmp21;
				HX_STACK_LINE(120)
				_this->width = Width;
				HX_STACK_LINE(120)
				_this->height = Height;
				HX_STACK_LINE(120)
				tmp11 = _this;
			}
			HX_STACK_LINE(120)
			::flixel::math::FlxRect obj1rect = tmp11;		HX_STACK_VAR(obj1rect,"obj1rect");
			HX_STACK_LINE(121)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::flixel::math::FlxRect tmp13 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(121)
				Float tmp14 = Object2->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				Float tmp15 = obj2deltaAbs;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				Float Width = tmp16;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(121)
				Float tmp17 = Object2->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(121)
				Float Height = tmp17;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(121)
				Float tmp18 = Object2->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				bool tmp19 = (obj2delta > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(121)
				if ((tmp19)){
					HX_STACK_LINE(121)
					tmp20 = obj2delta;
				}
				else{
					HX_STACK_LINE(121)
					tmp20 = (int)0;
				}
				HX_STACK_LINE(121)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(121)
				_this->x = tmp21;
				HX_STACK_LINE(121)
				Float tmp22 = Object2->last->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(121)
				_this->y = tmp22;
				HX_STACK_LINE(121)
				_this->width = Width;
				HX_STACK_LINE(121)
				_this->height = Height;
				HX_STACK_LINE(121)
				tmp12 = _this;
			}
			HX_STACK_LINE(121)
			::flixel::math::FlxRect obj2rect = tmp12;		HX_STACK_VAR(obj2rect,"obj2rect");
			HX_STACK_LINE(123)
			Float tmp13 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(123)
			Float tmp14 = obj2rect->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(123)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(123)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(123)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(123)
			if ((tmp16)){
				HX_STACK_LINE(123)
				Float tmp18 = obj1rect->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(123)
				Float tmp19 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(123)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(123)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(123)
				tmp17 = (tmp18 < tmp21);
			}
			else{
				HX_STACK_LINE(123)
				tmp17 = false;
			}
			HX_STACK_LINE(123)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(123)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(123)
			if ((tmp18)){
				HX_STACK_LINE(123)
				Float tmp20 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(123)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(123)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(123)
				Float tmp23 = obj2rect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(123)
				tmp19 = (tmp22 > tmp23);
			}
			else{
				HX_STACK_LINE(123)
				tmp19 = false;
			}
			HX_STACK_LINE(123)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(123)
			if ((tmp19)){
				HX_STACK_LINE(123)
				Float tmp21 = obj1rect->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(123)
				Float tmp22 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(123)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(123)
				tmp20 = (tmp21 < tmp23);
			}
			else{
				HX_STACK_LINE(123)
				tmp20 = false;
			}
			HX_STACK_LINE(123)
			if ((tmp20)){
				HX_STACK_LINE(125)
				bool tmp21 = checkMaxOverlap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(125)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(125)
				if ((tmp21)){
					HX_STACK_LINE(125)
					Float tmp23 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(125)
					Float tmp24 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(125)
					tmp22 = (tmp23 + tmp24);
				}
				else{
					HX_STACK_LINE(125)
					tmp22 = (int)0;
				}
				HX_STACK_LINE(125)
				Float maxOverlap = tmp22;		HX_STACK_VAR(maxOverlap,"maxOverlap");
				HX_STACK_LINE(128)
				bool tmp23 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(128)
				if ((tmp23)){
					HX_STACK_LINE(130)
					Float tmp24 = Object1->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(130)
					Float tmp25 = Object1->get_width();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(130)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(130)
					Float tmp27 = Object2->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(130)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(130)
					overlap = tmp28;
					HX_STACK_LINE(131)
					bool tmp29 = checkMaxOverlap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(131)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(131)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(131)
					if ((tmp30)){
						HX_STACK_LINE(131)
						tmp31 = (overlap > maxOverlap);
					}
					else{
						HX_STACK_LINE(131)
						tmp31 = false;
					}
					HX_STACK_LINE(131)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(131)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(131)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					if ((tmp33)){
						HX_STACK_LINE(131)
						int tmp35 = (int(Object1->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(131)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(131)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(131)
						tmp34 = (tmp37 == (int)0);
					}
					else{
						HX_STACK_LINE(131)
						tmp34 = true;
					}
					HX_STACK_LINE(131)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(131)
					if ((tmp35)){
						HX_STACK_LINE(131)
						int tmp37 = (int(Object2->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(131)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(131)
						tmp36 = (tmp38 == (int)0);
					}
					else{
						HX_STACK_LINE(131)
						tmp36 = true;
					}
					HX_STACK_LINE(131)
					if ((tmp36)){
						HX_STACK_LINE(133)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(137)
						hx::OrEq(Object1->touching,(int)16);
						HX_STACK_LINE(138)
						hx::OrEq(Object2->touching,(int)1);
					}
				}
				else{
					HX_STACK_LINE(141)
					bool tmp24 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(141)
					if ((tmp24)){
						HX_STACK_LINE(143)
						Float tmp25 = Object1->x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(143)
						Float tmp26 = Object2->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(143)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(143)
						Float tmp28 = Object2->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(143)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(143)
						overlap = tmp29;
						HX_STACK_LINE(144)
						bool tmp30 = checkMaxOverlap;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(144)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(144)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(144)
						if ((tmp31)){
							HX_STACK_LINE(144)
							Float tmp33 = overlap;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(144)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(144)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(144)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(144)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(144)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(144)
							Float tmp39 = maxOverlap;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(144)
							tmp32 = (tmp38 > tmp39);
						}
						else{
							HX_STACK_LINE(144)
							tmp32 = false;
						}
						HX_STACK_LINE(144)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(144)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(144)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(144)
						if ((tmp34)){
							HX_STACK_LINE(144)
							int tmp36 = (int(Object1->allowCollisions) & int((int)1));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(144)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(144)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(144)
							tmp35 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(144)
							tmp35 = true;
						}
						HX_STACK_LINE(144)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(144)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(144)
						if ((tmp36)){
							HX_STACK_LINE(144)
							int tmp38 = (int(Object2->allowCollisions) & int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(144)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(144)
							tmp37 = (tmp39 == (int)0);
						}
						else{
							HX_STACK_LINE(144)
							tmp37 = true;
						}
						HX_STACK_LINE(144)
						if ((tmp37)){
							HX_STACK_LINE(146)
							overlap = (int)0;
						}
						else{
							HX_STACK_LINE(150)
							hx::OrEq(Object1->touching,(int)1);
							HX_STACK_LINE(151)
							hx::OrEq(Object2->touching,(int)16);
						}
					}
				}
			}
		}
		HX_STACK_LINE(156)
		Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapX,return )

bool FlxObject_obj::separateX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateX",0xbd292e86,"flixel.FlxObject.separateX","flixel/FlxObject.hx",167,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(169)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(170)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(171)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	if ((tmp)){
		HX_STACK_LINE(171)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(171)
		tmp1 = false;
	}
	HX_STACK_LINE(171)
	if ((tmp1)){
		HX_STACK_LINE(173)
		return false;
	}
	HX_STACK_LINE(177)
	bool tmp2 = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	if ((tmp2)){
		HX_STACK_LINE(179)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(180)
		::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		bool tmp5 = tilemap->overlapsWithCallback(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		return tmp5;
	}
	HX_STACK_LINE(182)
	bool tmp3 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(182)
	if ((tmp3)){
		HX_STACK_LINE(184)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(185)
		::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateX_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		bool tmp6 = tilemap->overlapsWithCallback(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		return tmp6;
	}
	HX_STACK_LINE(188)
	::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(188)
	::flixel::FlxObject tmp5 = Object2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(188)
	Float tmp6 = ::flixel::FlxObject_obj::computeOverlapX(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(188)
	Float overlap = tmp6;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(190)
	bool tmp7 = (overlap != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(190)
	if ((tmp7)){
		HX_STACK_LINE(192)
		Float tmp8 = Object1->velocity->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(192)
		Float obj1v = tmp8;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(193)
		Float tmp9 = Object2->velocity->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		Float obj2v = tmp9;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(195)
		bool tmp10 = obj1immovable;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(195)
		if ((tmp12)){
			HX_STACK_LINE(195)
			bool tmp14 = obj2immovable;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(195)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(195)
			tmp13 = !(tmp15);
		}
		else{
			HX_STACK_LINE(195)
			tmp13 = false;
		}
		HX_STACK_LINE(195)
		if ((tmp13)){
			HX_STACK_LINE(197)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(198)
			Float tmp14 = (Object1->x - overlap);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(198)
			Object1->set_x(tmp14);
			HX_STACK_LINE(199)
			{
				HX_STACK_LINE(199)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(199)
				Float tmp15 = (_g->x + overlap);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(199)
				_g->set_x(tmp15);
			}
			HX_STACK_LINE(201)
			Float tmp15 = (obj2v * obj2v);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(201)
			Float tmp16 = Object2->mass;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(201)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(201)
			Float tmp18 = Object1->mass;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(201)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(201)
			Float tmp20 = ::Math_obj::sqrt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(201)
			bool tmp21 = (obj2v > (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(201)
			int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(201)
			if ((tmp21)){
				HX_STACK_LINE(201)
				tmp22 = (int)1;
			}
			else{
				HX_STACK_LINE(201)
				tmp22 = (int)-1;
			}
			HX_STACK_LINE(201)
			Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(201)
			Float obj1velocity = tmp23;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(202)
			Float tmp24 = (obj1v * obj1v);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(202)
			Float tmp25 = Object1->mass;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(202)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(202)
			Float tmp27 = Object2->mass;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(202)
			Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(202)
			Float tmp29 = ::Math_obj::sqrt(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(202)
			bool tmp30 = (obj1v > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(202)
			int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(202)
			if ((tmp30)){
				HX_STACK_LINE(202)
				tmp31 = (int)1;
			}
			else{
				HX_STACK_LINE(202)
				tmp31 = (int)-1;
			}
			HX_STACK_LINE(202)
			Float tmp32 = (tmp29 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(202)
			Float obj2velocity = tmp32;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(203)
			Float tmp33 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(203)
			Float tmp34 = (tmp33 * ((Float)0.5));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(203)
			Float average = tmp34;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(204)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(205)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(206)
			Float tmp35 = average;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(206)
			Float tmp36 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(206)
			Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(206)
			Object1->velocity->set_x(tmp37);
			HX_STACK_LINE(207)
			Float tmp38 = average;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(207)
			Float tmp39 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(207)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(207)
			Object2->velocity->set_x(tmp40);
		}
		else{
			HX_STACK_LINE(209)
			bool tmp14 = obj1immovable;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(209)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(209)
			if ((tmp15)){
				HX_STACK_LINE(211)
				Float tmp16 = (Object1->x - overlap);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(211)
				Object1->set_x(tmp16);
				HX_STACK_LINE(212)
				Float tmp17 = obj2v;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(212)
				Float tmp18 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(212)
				Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(212)
				Object1->velocity->set_x(tmp19);
			}
			else{
				HX_STACK_LINE(214)
				bool tmp16 = obj2immovable;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(214)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(214)
				if ((tmp17)){
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(216)
						Float tmp18 = (_g->x + overlap);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(216)
						_g->set_x(tmp18);
					}
					HX_STACK_LINE(217)
					Float tmp18 = obj1v;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(217)
					Float tmp19 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(217)
					Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(217)
					Object2->velocity->set_x(tmp20);
				}
			}
		}
		HX_STACK_LINE(219)
		return true;
	}
	HX_STACK_LINE(222)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateX,return )

bool FlxObject_obj::updateTouchingFlagsX( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlagsX",0xd6a5d6ac,"flixel.FlxObject.updateTouchingFlagsX","flixel/FlxObject.hx",233,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(235)
	bool tmp = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	if ((tmp)){
		HX_STACK_LINE(237)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(238)
		::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		Dynamic tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsX_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		bool tmp3 = tilemap->overlapsWithCallback(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		return tmp3;
	}
	HX_STACK_LINE(240)
	bool tmp1 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	if ((tmp1)){
		HX_STACK_LINE(242)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(243)
		::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		Dynamic tmp3 = ::flixel::FlxObject_obj::updateTouchingFlagsX_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(243)
		bool tmp4 = tilemap->overlapsWithCallback(tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(243)
		return tmp4;
	}
	HX_STACK_LINE(246)
	::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(246)
	Float tmp4 = ::flixel::FlxObject_obj::computeOverlapX(tmp2,tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(246)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(246)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsX,return )

Float FlxObject_obj::computeOverlapY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2,hx::Null< bool >  __o_checkMaxOverlap){
bool checkMaxOverlap = __o_checkMaxOverlap.Default(true);
	HX_STACK_FRAME("flixel.FlxObject","computeOverlapY",0x240ec73a,"flixel.FlxObject.computeOverlapY","flixel/FlxObject.hx",255,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_ARG(checkMaxOverlap,"checkMaxOverlap")
{
		HX_STACK_LINE(256)
		Float overlap = (int)0;		HX_STACK_VAR(overlap,"overlap");
		HX_STACK_LINE(258)
		Float tmp = Object1->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		Float tmp1 = Object1->last->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		Float obj1delta = tmp2;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(259)
		Float tmp3 = Object2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		Float tmp4 = Object2->last->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		Float obj2delta = tmp5;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(261)
		bool tmp6 = (obj1delta != obj2delta);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		if ((tmp6)){
			HX_STACK_LINE(264)
			bool tmp7 = (obj1delta > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(264)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(264)
			if ((tmp7)){
				HX_STACK_LINE(264)
				tmp8 = obj1delta;
			}
			else{
				HX_STACK_LINE(264)
				Float tmp9 = obj1delta;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(264)
				tmp8 = -(tmp9);
			}
			HX_STACK_LINE(264)
			Float obj1deltaAbs = tmp8;		HX_STACK_VAR(obj1deltaAbs,"obj1deltaAbs");
			HX_STACK_LINE(265)
			bool tmp9 = (obj2delta > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(265)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(265)
			if ((tmp9)){
				HX_STACK_LINE(265)
				tmp10 = obj2delta;
			}
			else{
				HX_STACK_LINE(265)
				Float tmp11 = obj2delta;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(265)
				tmp10 = -(tmp11);
			}
			HX_STACK_LINE(265)
			Float obj2deltaAbs = tmp10;		HX_STACK_VAR(obj2deltaAbs,"obj2deltaAbs");
			HX_STACK_LINE(267)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxObject_obj::_firstSeparateFlxRect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(267)
				::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(267)
				Float tmp13 = Object1->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(267)
				Float Width = tmp13;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(267)
				Float tmp14 = Object1->get_height();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(267)
				Float tmp15 = obj1deltaAbs;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(267)
				Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(267)
				Float Height = tmp16;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(267)
				_this->x = Object1->x;
				HX_STACK_LINE(267)
				Float tmp17 = Object1->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(267)
				bool tmp18 = (obj1delta > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(267)
				Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(267)
				if ((tmp18)){
					HX_STACK_LINE(267)
					tmp19 = obj1delta;
				}
				else{
					HX_STACK_LINE(267)
					tmp19 = (int)0;
				}
				HX_STACK_LINE(267)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(267)
				_this->y = tmp20;
				HX_STACK_LINE(267)
				_this->width = Width;
				HX_STACK_LINE(267)
				_this->height = Height;
				HX_STACK_LINE(267)
				tmp11 = _this;
			}
			HX_STACK_LINE(267)
			::flixel::math::FlxRect obj1rect = tmp11;		HX_STACK_VAR(obj1rect,"obj1rect");
			HX_STACK_LINE(268)
			::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(268)
				::flixel::math::FlxRect tmp13 = ::flixel::FlxObject_obj::_secondSeparateFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(268)
				::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(268)
				Float tmp14 = Object2->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(268)
				Float Width = tmp14;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(268)
				Float tmp15 = Object2->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(268)
				Float tmp16 = obj2deltaAbs;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(268)
				Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(268)
				Float Height = tmp17;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(268)
				_this->x = Object2->x;
				HX_STACK_LINE(268)
				Float tmp18 = Object2->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(268)
				bool tmp19 = (obj2delta > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(268)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(268)
				if ((tmp19)){
					HX_STACK_LINE(268)
					tmp20 = obj2delta;
				}
				else{
					HX_STACK_LINE(268)
					tmp20 = (int)0;
				}
				HX_STACK_LINE(268)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(268)
				_this->y = tmp21;
				HX_STACK_LINE(268)
				_this->width = Width;
				HX_STACK_LINE(268)
				_this->height = Height;
				HX_STACK_LINE(268)
				tmp12 = _this;
			}
			HX_STACK_LINE(268)
			::flixel::math::FlxRect obj2rect = tmp12;		HX_STACK_VAR(obj2rect,"obj2rect");
			HX_STACK_LINE(270)
			Float tmp13 = (obj1rect->x + obj1rect->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(270)
			Float tmp14 = obj2rect->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(270)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(270)
			if ((tmp16)){
				HX_STACK_LINE(270)
				Float tmp18 = obj1rect->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(270)
				Float tmp19 = (obj2rect->x + obj2rect->width);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(270)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				tmp17 = (tmp18 < tmp21);
			}
			else{
				HX_STACK_LINE(270)
				tmp17 = false;
			}
			HX_STACK_LINE(270)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(270)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(270)
			if ((tmp18)){
				HX_STACK_LINE(270)
				Float tmp20 = (obj1rect->y + obj1rect->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(270)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(270)
				Float tmp23 = obj2rect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(270)
				tmp19 = (tmp22 > tmp23);
			}
			else{
				HX_STACK_LINE(270)
				tmp19 = false;
			}
			HX_STACK_LINE(270)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(270)
			if ((tmp19)){
				HX_STACK_LINE(270)
				Float tmp21 = obj1rect->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(270)
				Float tmp22 = (obj2rect->y + obj2rect->height);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(270)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(270)
				tmp20 = (tmp21 < tmp23);
			}
			else{
				HX_STACK_LINE(270)
				tmp20 = false;
			}
			HX_STACK_LINE(270)
			if ((tmp20)){
				HX_STACK_LINE(272)
				bool tmp21 = checkMaxOverlap;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(272)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(272)
				if ((tmp21)){
					HX_STACK_LINE(272)
					Float tmp23 = (obj1deltaAbs + obj2deltaAbs);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(272)
					Float tmp24 = ::flixel::FlxObject_obj::SEPARATE_BIAS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(272)
					tmp22 = (tmp23 + tmp24);
				}
				else{
					HX_STACK_LINE(272)
					tmp22 = (int)0;
				}
				HX_STACK_LINE(272)
				Float maxOverlap = tmp22;		HX_STACK_VAR(maxOverlap,"maxOverlap");
				HX_STACK_LINE(275)
				bool tmp23 = (obj1delta > obj2delta);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(275)
				if ((tmp23)){
					HX_STACK_LINE(277)
					Float tmp24 = Object1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(277)
					Float tmp25 = Object1->get_height();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(277)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(277)
					Float tmp27 = Object2->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(277)
					Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(277)
					overlap = tmp28;
					HX_STACK_LINE(278)
					bool tmp29 = checkMaxOverlap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(278)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(278)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(278)
					if ((tmp30)){
						HX_STACK_LINE(278)
						tmp31 = (overlap > maxOverlap);
					}
					else{
						HX_STACK_LINE(278)
						tmp31 = false;
					}
					HX_STACK_LINE(278)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(278)
					bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(278)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(278)
					if ((tmp33)){
						HX_STACK_LINE(278)
						int tmp35 = (int(Object1->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(278)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(278)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(278)
						tmp34 = (tmp37 == (int)0);
					}
					else{
						HX_STACK_LINE(278)
						tmp34 = true;
					}
					HX_STACK_LINE(278)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(278)
					bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(278)
					if ((tmp35)){
						HX_STACK_LINE(278)
						int tmp37 = (int(Object2->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(278)
						int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(278)
						tmp36 = (tmp38 == (int)0);
					}
					else{
						HX_STACK_LINE(278)
						tmp36 = true;
					}
					HX_STACK_LINE(278)
					if ((tmp36)){
						HX_STACK_LINE(280)
						overlap = (int)0;
					}
					else{
						HX_STACK_LINE(284)
						hx::OrEq(Object1->touching,(int)4096);
						HX_STACK_LINE(285)
						hx::OrEq(Object2->touching,(int)256);
					}
				}
				else{
					HX_STACK_LINE(288)
					bool tmp24 = (obj1delta < obj2delta);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(288)
					if ((tmp24)){
						HX_STACK_LINE(290)
						Float tmp25 = Object1->y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(290)
						Float tmp26 = Object2->get_height();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(290)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(290)
						Float tmp28 = Object2->y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(290)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(290)
						overlap = tmp29;
						HX_STACK_LINE(291)
						bool tmp30 = checkMaxOverlap;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(291)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(291)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(291)
						if ((tmp31)){
							HX_STACK_LINE(291)
							Float tmp33 = overlap;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(291)
							Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(291)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(291)
							Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(291)
							Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(291)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(291)
							Float tmp39 = maxOverlap;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(291)
							tmp32 = (tmp38 > tmp39);
						}
						else{
							HX_STACK_LINE(291)
							tmp32 = false;
						}
						HX_STACK_LINE(291)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(291)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(291)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(291)
						if ((tmp34)){
							HX_STACK_LINE(291)
							int tmp36 = (int(Object1->allowCollisions) & int((int)256));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(291)
							int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(291)
							int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(291)
							tmp35 = (tmp38 == (int)0);
						}
						else{
							HX_STACK_LINE(291)
							tmp35 = true;
						}
						HX_STACK_LINE(291)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(291)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(291)
						if ((tmp36)){
							HX_STACK_LINE(291)
							int tmp38 = (int(Object2->allowCollisions) & int((int)4096));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(291)
							int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(291)
							tmp37 = (tmp39 == (int)0);
						}
						else{
							HX_STACK_LINE(291)
							tmp37 = true;
						}
						HX_STACK_LINE(291)
						if ((tmp37)){
							HX_STACK_LINE(293)
							overlap = (int)0;
						}
						else{
							HX_STACK_LINE(297)
							hx::OrEq(Object1->touching,(int)256);
							HX_STACK_LINE(298)
							hx::OrEq(Object2->touching,(int)4096);
						}
					}
				}
			}
		}
		HX_STACK_LINE(303)
		Float tmp7 = overlap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxObject_obj,computeOverlapY,return )

bool FlxObject_obj::separateY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","separateY",0xbd292e87,"flixel.FlxObject.separateY","flixel/FlxObject.hx",314,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(316)
	bool obj1immovable = Object1->immovable;		HX_STACK_VAR(obj1immovable,"obj1immovable");
	HX_STACK_LINE(317)
	bool obj2immovable = Object2->immovable;		HX_STACK_VAR(obj2immovable,"obj2immovable");
	HX_STACK_LINE(318)
	bool tmp = obj1immovable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	if ((tmp)){
		HX_STACK_LINE(318)
		tmp1 = obj2immovable;
	}
	else{
		HX_STACK_LINE(318)
		tmp1 = false;
	}
	HX_STACK_LINE(318)
	if ((tmp1)){
		HX_STACK_LINE(320)
		return false;
	}
	HX_STACK_LINE(324)
	bool tmp2 = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	if ((tmp2)){
		HX_STACK_LINE(326)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(327)
		::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(327)
		Dynamic tmp4 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		bool tmp5 = tilemap->overlapsWithCallback(tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(327)
		return tmp5;
	}
	HX_STACK_LINE(329)
	bool tmp3 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(329)
	if ((tmp3)){
		HX_STACK_LINE(331)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(332)
		::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		Dynamic tmp5 = ::flixel::FlxObject_obj::separateY_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		bool tmp6 = tilemap->overlapsWithCallback(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(332)
		return tmp6;
	}
	HX_STACK_LINE(335)
	::flixel::FlxObject tmp4 = Object1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	::flixel::FlxObject tmp5 = Object2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	Float tmp6 = ::flixel::FlxObject_obj::computeOverlapY(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(335)
	Float overlap = tmp6;		HX_STACK_VAR(overlap,"overlap");
	HX_STACK_LINE(337)
	bool tmp7 = (overlap != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(337)
	if ((tmp7)){
		HX_STACK_LINE(339)
		Float tmp8 = Object1->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(339)
		Float tmp9 = Object1->last->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(339)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(339)
		Float obj1delta = tmp10;		HX_STACK_VAR(obj1delta,"obj1delta");
		HX_STACK_LINE(340)
		Float tmp11 = Object2->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(340)
		Float tmp12 = Object2->last->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(340)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(340)
		Float obj2delta = tmp13;		HX_STACK_VAR(obj2delta,"obj2delta");
		HX_STACK_LINE(341)
		Float tmp14 = Object1->velocity->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(341)
		Float obj1v = tmp14;		HX_STACK_VAR(obj1v,"obj1v");
		HX_STACK_LINE(342)
		Float tmp15 = Object2->velocity->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(342)
		Float obj2v = tmp15;		HX_STACK_VAR(obj2v,"obj2v");
		HX_STACK_LINE(344)
		bool tmp16 = obj1immovable;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(344)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(344)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(344)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(344)
		if ((tmp18)){
			HX_STACK_LINE(344)
			bool tmp20 = obj2immovable;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(344)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(344)
			tmp19 = !(tmp21);
		}
		else{
			HX_STACK_LINE(344)
			tmp19 = false;
		}
		HX_STACK_LINE(344)
		if ((tmp19)){
			HX_STACK_LINE(346)
			hx::MultEq(overlap,((Float)0.5));
			HX_STACK_LINE(347)
			Float tmp20 = (Object1->y - overlap);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(347)
			Object1->set_y(tmp20);
			HX_STACK_LINE(348)
			{
				HX_STACK_LINE(348)
				::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(348)
				Float tmp21 = (_g->y + overlap);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(348)
				_g->set_y(tmp21);
			}
			HX_STACK_LINE(350)
			Float tmp21 = (obj2v * obj2v);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(350)
			Float tmp22 = Object2->mass;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(350)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(350)
			Float tmp24 = Object1->mass;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(350)
			Float tmp25 = (Float(tmp23) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(350)
			Float tmp26 = ::Math_obj::sqrt(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(350)
			bool tmp27 = (obj2v > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(350)
			int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(350)
			if ((tmp27)){
				HX_STACK_LINE(350)
				tmp28 = (int)1;
			}
			else{
				HX_STACK_LINE(350)
				tmp28 = (int)-1;
			}
			HX_STACK_LINE(350)
			Float tmp29 = (tmp26 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(350)
			Float obj1velocity = tmp29;		HX_STACK_VAR(obj1velocity,"obj1velocity");
			HX_STACK_LINE(351)
			Float tmp30 = (obj1v * obj1v);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(351)
			Float tmp31 = Object1->mass;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(351)
			Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(351)
			Float tmp33 = Object2->mass;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(351)
			Float tmp34 = (Float(tmp32) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(351)
			Float tmp35 = ::Math_obj::sqrt(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(351)
			bool tmp36 = (obj1v > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(351)
			int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(351)
			if ((tmp36)){
				HX_STACK_LINE(351)
				tmp37 = (int)1;
			}
			else{
				HX_STACK_LINE(351)
				tmp37 = (int)-1;
			}
			HX_STACK_LINE(351)
			Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(351)
			Float obj2velocity = tmp38;		HX_STACK_VAR(obj2velocity,"obj2velocity");
			HX_STACK_LINE(352)
			Float tmp39 = (obj1velocity + obj2velocity);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(352)
			Float tmp40 = (tmp39 * ((Float)0.5));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(352)
			Float average = tmp40;		HX_STACK_VAR(average,"average");
			HX_STACK_LINE(353)
			hx::SubEq(obj1velocity,average);
			HX_STACK_LINE(354)
			hx::SubEq(obj2velocity,average);
			HX_STACK_LINE(355)
			Float tmp41 = average;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(355)
			Float tmp42 = (obj1velocity * Object1->elasticity);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(355)
			Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(355)
			Object1->velocity->set_y(tmp43);
			HX_STACK_LINE(356)
			Float tmp44 = average;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(356)
			Float tmp45 = (obj2velocity * Object2->elasticity);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(356)
			Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(356)
			Object2->velocity->set_y(tmp46);
		}
		else{
			HX_STACK_LINE(358)
			bool tmp20 = obj1immovable;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(358)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(358)
			if ((tmp21)){
				HX_STACK_LINE(360)
				Float tmp22 = (Object1->y - overlap);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(360)
				Object1->set_y(tmp22);
				HX_STACK_LINE(361)
				Float tmp23 = obj2v;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(361)
				Float tmp24 = (obj1v * Object1->elasticity);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(361)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(361)
				Object1->velocity->set_y(tmp25);
				HX_STACK_LINE(363)
				bool tmp26 = Object1->collisonXDrag;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(363)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(363)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(363)
				if ((tmp27)){
					HX_STACK_LINE(363)
					tmp28 = Object2->active;
				}
				else{
					HX_STACK_LINE(363)
					tmp28 = false;
				}
				HX_STACK_LINE(363)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(363)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(363)
				if ((tmp29)){
					HX_STACK_LINE(363)
					tmp30 = Object2->moves;
				}
				else{
					HX_STACK_LINE(363)
					tmp30 = false;
				}
				HX_STACK_LINE(363)
				bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(363)
				if ((tmp30)){
					HX_STACK_LINE(363)
					tmp31 = (obj1delta > obj2delta);
				}
				else{
					HX_STACK_LINE(363)
					tmp31 = false;
				}
				HX_STACK_LINE(363)
				if ((tmp31)){
					HX_STACK_LINE(365)
					::flixel::FlxObject _g = Object1;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(365)
					Float tmp32 = _g->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(365)
					Float tmp33 = Object2->x;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(365)
					Float tmp34 = Object2->last->x;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(365)
					Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(365)
					Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(365)
					_g->set_x(tmp36);
				}
			}
			else{
				HX_STACK_LINE(368)
				bool tmp22 = obj2immovable;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(368)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(368)
				if ((tmp23)){
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(370)
						Float tmp24 = (_g->y + overlap);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(370)
						_g->set_y(tmp24);
					}
					HX_STACK_LINE(371)
					Float tmp24 = obj1v;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(371)
					Float tmp25 = (obj2v * Object2->elasticity);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(371)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(371)
					Object2->velocity->set_y(tmp26);
					HX_STACK_LINE(373)
					bool tmp27 = Object2->collisonXDrag;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(373)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(373)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					if ((tmp28)){
						HX_STACK_LINE(373)
						tmp29 = Object1->active;
					}
					else{
						HX_STACK_LINE(373)
						tmp29 = false;
					}
					HX_STACK_LINE(373)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(373)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(373)
					if ((tmp30)){
						HX_STACK_LINE(373)
						tmp31 = Object1->moves;
					}
					else{
						HX_STACK_LINE(373)
						tmp31 = false;
					}
					HX_STACK_LINE(373)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(373)
					if ((tmp31)){
						HX_STACK_LINE(373)
						tmp32 = (obj1delta < obj2delta);
					}
					else{
						HX_STACK_LINE(373)
						tmp32 = false;
					}
					HX_STACK_LINE(373)
					if ((tmp32)){
						HX_STACK_LINE(375)
						::flixel::FlxObject _g = Object2;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(375)
						Float tmp33 = _g->x;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(375)
						Float tmp34 = Object1->x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(375)
						Float tmp35 = Object1->last->x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(375)
						Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(375)
						Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(375)
						_g->set_x(tmp37);
					}
				}
			}
		}
		HX_STACK_LINE(378)
		return true;
	}
	HX_STACK_LINE(381)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,separateY,return )

bool FlxObject_obj::updateTouchingFlagsY( ::flixel::FlxObject Object1,::flixel::FlxObject Object2){
	HX_STACK_FRAME("flixel.FlxObject","updateTouchingFlagsY",0xd6a5d6ad,"flixel.FlxObject.updateTouchingFlagsY","flixel/FlxObject.hx",392,0xf0fe0d80)
	HX_STACK_ARG(Object1,"Object1")
	HX_STACK_ARG(Object2,"Object2")
	HX_STACK_LINE(394)
	bool tmp = (Object1->flixelType == (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	if ((tmp)){
		HX_STACK_LINE(396)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object1));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(397)
		::flixel::FlxObject tmp1 = Object2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		Dynamic tmp2 = ::flixel::FlxObject_obj::updateTouchingFlagsY_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		bool tmp3 = tilemap->overlapsWithCallback(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		return tmp3;
	}
	HX_STACK_LINE(399)
	bool tmp1 = (Object2->flixelType == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	if ((tmp1)){
		HX_STACK_LINE(401)
		::flixel::tile::FlxBaseTilemap tilemap = ((::flixel::tile::FlxBaseTilemap)(Object2));		HX_STACK_VAR(tilemap,"tilemap");
		HX_STACK_LINE(402)
		::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		Dynamic tmp3 = ::flixel::FlxObject_obj::updateTouchingFlagsY_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		bool tmp4 = tilemap->overlapsWithCallback(tmp2,tmp3,true,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		return tmp4;
	}
	HX_STACK_LINE(405)
	::flixel::FlxObject tmp2 = Object1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	::flixel::FlxObject tmp3 = Object2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(405)
	Float tmp4 = ::flixel::FlxObject_obj::computeOverlapY(tmp2,tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(405)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(405)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxObject_obj,updateTouchingFlagsY,return )


FlxObject_obj::FlxObject_obj()
{
}

void FlxObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(maxAngular,"maxAngular");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(touching,"touching");
	HX_MARK_MEMBER_NAME(wasTouching,"wasTouching");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixelPerfectPosition,"pixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(scrollFactor,"scrollFactor");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(maxVelocity,"maxVelocity");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(maxAngular,"maxAngular");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(touching,"touching");
	HX_VISIT_MEMBER_NAME(wasTouching,"wasTouching");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(collisonXDrag,"collisonXDrag");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"last") ) { return last; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp == hx::paccAlways ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return get_solid(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp == hx::paccAlways ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"touching") ) { return touching; }
		if (HX_FIELD_EQ(inName,"initVars") ) { return initVars_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return set_path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"getHitbox") ) { return getHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_moves") ) { return set_moves_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { return maxAngular; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return isOnScreen_dyn(); }
		if (HX_FIELD_EQ(inName,"isTouching") ) { return isTouching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { return maxVelocity; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { return wasTouching; }
		if (HX_FIELD_EQ(inName,"getPosition") ) { return getPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"getMidpoint") ) { return getMidpoint_dyn(); }
		if (HX_FIELD_EQ(inName,"justTouched") ) { return justTouched_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { return scrollFactor; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"updateMotion") ) { return updateMotion_dyn(); }
		if (HX_FIELD_EQ(inName,"screenCenter") ) { return screenCenter_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { return collisonXDrag; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"inWorldBounds") ) { return inWorldBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_immovable") ) { return set_immovable_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initMotionVars") ) { return initMotionVars_dyn(); }
		if (HX_FIELD_EQ(inName,"getBoundingBox") ) { return getBoundingBox_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"overlapsCallback") ) { return overlapsCallback_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getScreenPosition") ) { return getScreenPosition_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		if (HX_FIELD_EQ(inName,"overlapsAtCallback") ) { return overlapsAtCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return set_allowCollisions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { return pixelPerfectPosition; }
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return isPixelPerfectRender_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"separate") ) { outValue = separate_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"separateX") ) { outValue = separateX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"separateY") ) { outValue = separateY_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { outValue = SEPARATE_BIAS; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"computeOverlapX") ) { outValue = computeOverlapX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"computeOverlapY") ) { outValue = computeOverlapY_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateTouchingFlags") ) { outValue = updateTouchingFlags_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsX") ) { outValue = updateTouchingFlagsX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updateTouchingFlagsY") ) { outValue = updateTouchingFlagsY_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { outValue = _firstSeparateFlxRect; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { outValue = _secondSeparateFlxRect; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { outValue = defaultPixelPerfectPosition; return true;  }
	}
	return false;
}

Dynamic FlxObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == hx::paccAlways) return set_path(inValue);path=inValue.Cast< ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moves") ) { if (inCallProp == hx::paccAlways) return set_moves(inValue);moves=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { if (inCallProp == hx::paccAlways) return set_solid(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touching") ) { touching=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immovable") ) { if (inCallProp == hx::paccAlways) return set_immovable(inValue);immovable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxAngular") ) { maxAngular=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"maxVelocity") ) { maxVelocity=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wasTouching") ) { wasTouching=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollFactor") ) { scrollFactor=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisonXDrag") ) { collisonXDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { if (inCallProp == hx::paccAlways) return set_allowCollisions(inValue);allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { if (inCallProp == hx::paccAlways) return set_pixelPerfectRender(inValue);pixelPerfectRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pixelPerfectPosition") ) { pixelPerfectPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"SEPARATE_BIAS") ) { SEPARATE_BIAS=ioValue.Cast< Float >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_firstSeparateFlxRect") ) { _firstSeparateFlxRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_secondSeparateFlxRect") ) { _secondSeparateFlxRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"defaultPixelPerfectPosition") ) { defaultPixelPerfectPosition=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"));
	outFields->push(HX_HCSTRING("solid","\x2b","\xb4","\xc5","\x80"));
	outFields->push(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"));
	outFields->push(HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"));
	outFields->push(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"));
	outFields->push(HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"));
	outFields->push(HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"));
	outFields->push(HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("touching","\x83","\x16","\x25","\x00"));
	outFields->push(HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"));
	outFields->push(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"));
	outFields->push(HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxObject_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxObject_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,pixelPerfectPosition),HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,moves),HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,immovable),HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,scrollFactor),HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,drag),HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,maxVelocity),HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,mass),HX_HCSTRING("mass","\xf4","\x40","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,elasticity),HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularVelocity),HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularAcceleration),HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,angularDrag),HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,maxAngular),HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2")},
	{hx::fsFloat,(int)offsetof(FlxObject_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,touching),HX_HCSTRING("touching","\x83","\x16","\x25","\x00")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,wasTouching),HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f")},
	{hx::fsInt,(int)offsetof(FlxObject_obj,allowCollisions),HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59")},
	{hx::fsBool,(int)offsetof(FlxObject_obj,collisonXDrag),HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a")},
	{hx::fsObject /*::flixel::util::FlxPath*/ ,(int)offsetof(FlxObject_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxObject_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxObject_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &FlxObject_obj::defaultPixelPerfectPosition,HX_HCSTRING("defaultPixelPerfectPosition","\x51","\x0a","\xc2","\xb0")},
	{hx::fsFloat,(void *) &FlxObject_obj::SEPARATE_BIAS,HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0")},
	{hx::fsInt,(void *) &FlxObject_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &FlxObject_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &FlxObject_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &FlxObject_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &FlxObject_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &FlxObject_obj::CEILING,HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3")},
	{hx::fsInt,(void *) &FlxObject_obj::FLOOR,HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80")},
	{hx::fsInt,(void *) &FlxObject_obj::WALL,HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39")},
	{hx::fsInt,(void *) &FlxObject_obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxObject_obj::_firstSeparateFlxRect,HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxObject_obj::_secondSeparateFlxRect,HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("pixelPerfectPosition","\xf0","\x7e","\x5e","\x3d"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("moves","\x42","\xcc","\x65","\x0c"),
	HX_HCSTRING("immovable","\x0a","\x27","\x70","\x27"),
	HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"),
	HX_HCSTRING("maxVelocity","\xe1","\x0c","\xc4","\x94"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("mass","\xf4","\x40","\x56","\x48"),
	HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d"),
	HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"),
	HX_HCSTRING("angularAcceleration","\x42","\xc6","\x00","\x9a"),
	HX_HCSTRING("angularDrag","\xf6","\x1f","\x19","\x9c"),
	HX_HCSTRING("maxAngular","\x9e","\x28","\xf6","\xc2"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("touching","\x83","\x16","\x25","\x00"),
	HX_HCSTRING("wasTouching","\xcc","\x44","\xe4","\x5f"),
	HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"),
	HX_HCSTRING("collisonXDrag","\x97","\xca","\xfa","\x0a"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("initVars","\xdc","\x5a","\x00","\x53"),
	HX_HCSTRING("initMotionVars","\x32","\xe4","\x28","\x65"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateMotion","\x1f","\x2d","\x21","\xcb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("overlapsCallback","\xf1","\x14","\xbf","\xb4"),
	HX_HCSTRING("overlapsAt","\x1f","\xe7","\xce","\x03"),
	HX_HCSTRING("overlapsAtCallback","\x04","\xf4","\x81","\x3b"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("inWorldBounds","\x82","\x46","\xf2","\xf1"),
	HX_HCSTRING("getScreenPosition","\x6b","\x93","\x88","\x24"),
	HX_HCSTRING("getPosition","\x5f","\x63","\xee","\xf0"),
	HX_HCSTRING("getMidpoint","\x7e","\xd8","\xfb","\x50"),
	HX_HCSTRING("getHitbox","\xce","\x76","\x7e","\xd3"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("isOnScreen","\xf5","\x43","\xb9","\xa1"),
	HX_HCSTRING("isPixelPerfectRender","\x67","\x1c","\xf9","\x26"),
	HX_HCSTRING("isTouching","\x8d","\x28","\xd4","\x7a"),
	HX_HCSTRING("justTouched","\x12","\x59","\xb8","\x91"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("getBoundingBox","\x11","\xe8","\x45","\x0d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_solid","\x82","\x10","\x6f","\xc4"),
	HX_HCSTRING("set_solid","\x8e","\xfc","\xbf","\xa7"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_moves","\xa5","\x14","\x60","\x33"),
	HX_HCSTRING("set_immovable","\xed","\xdc","\xd9","\x2d"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"),
	HX_HCSTRING("set_path","\xa2","\xfa","\x69","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_MARK_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_MARK_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_MARK_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_MARK_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_MARK_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_MARK_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::defaultPixelPerfectPosition,"defaultPixelPerfectPosition");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::SEPARATE_BIAS,"SEPARATE_BIAS");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::CEILING,"CEILING");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::FLOOR,"FLOOR");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::WALL,"WALL");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_firstSeparateFlxRect,"_firstSeparateFlxRect");
	HX_VISIT_MEMBER_NAME(FlxObject_obj::_secondSeparateFlxRect,"_secondSeparateFlxRect");
};

#endif

hx::Class FlxObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultPixelPerfectPosition","\x51","\x0a","\xc2","\xb0"),
	HX_HCSTRING("SEPARATE_BIAS","\x15","\x78","\x21","\xa0"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("CEILING","\xdd","\x32","\x72","\xb3"),
	HX_HCSTRING("FLOOR","\xac","\x09","\x85","\x80"),
	HX_HCSTRING("WALL","\x0a","\x25","\xb3","\x39"),
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("_firstSeparateFlxRect","\x22","\xb9","\x2f","\x5e"),
	HX_HCSTRING("_secondSeparateFlxRect","\xc0","\xbd","\xfc","\xda"),
	HX_HCSTRING("separate","\x63","\x1f","\x1c","\x07"),
	HX_HCSTRING("updateTouchingFlags","\xfb","\x01","\xac","\xbd"),
	HX_HCSTRING("computeOverlapX","\x88","\xa5","\xab","\xdc"),
	HX_HCSTRING("separateX","\x95","\x57","\x7f","\x31"),
	HX_HCSTRING("updateTouchingFlagsX","\xfd","\xb9","\xd5","\x38"),
	HX_HCSTRING("computeOverlapY","\x89","\xa5","\xab","\xdc"),
	HX_HCSTRING("separateY","\x96","\x57","\x7f","\x31"),
	HX_HCSTRING("updateTouchingFlagsY","\xfe","\xb9","\xd5","\x38"),
	::String(null()) };

void FlxObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxObject","\x1f","\x50","\x95","\x35");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxObject_obj >;
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

void FlxObject_obj::__boot()
{
	defaultPixelPerfectPosition= false;
	SEPARATE_BIAS= ((Float)4);
	LEFT= (int)1;
	RIGHT= (int)16;
	UP= (int)256;
	DOWN= (int)4096;
	NONE= (int)0;
	CEILING= (int)256;
	FLOOR= (int)4096;
	WALL= (int)17;
	ANY= (int)4369;
struct _Function_0_1{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",70,0xf0fe0d80)
		{
			HX_STACK_LINE(70)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(70)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(70)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(70)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(70)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(70)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(70)
				_this->x = X;
				HX_STACK_LINE(70)
				_this->y = Y;
				HX_STACK_LINE(70)
				_this->width = Width;
				HX_STACK_LINE(70)
				_this->height = Height;
				HX_STACK_LINE(70)
				tmp = _this;
			}
			HX_STACK_LINE(70)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(70)
			rect->_inPool = false;
			HX_STACK_LINE(70)
			return rect;
		}
		return null();
	}
};
	_firstSeparateFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxObject.hx",71,0xf0fe0d80)
		{
			HX_STACK_LINE(71)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(71)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(71)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(71)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(71)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(71)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(71)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(71)
				_this->x = X;
				HX_STACK_LINE(71)
				_this->y = Y;
				HX_STACK_LINE(71)
				_this->width = Width;
				HX_STACK_LINE(71)
				_this->height = Height;
				HX_STACK_LINE(71)
				tmp = _this;
			}
			HX_STACK_LINE(71)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(71)
			rect->_inPool = false;
			HX_STACK_LINE(71)
			return rect;
		}
		return null();
	}
};
	_secondSeparateFlxRect= _Function_0_2::Block();
}

} // end namespace flixel
