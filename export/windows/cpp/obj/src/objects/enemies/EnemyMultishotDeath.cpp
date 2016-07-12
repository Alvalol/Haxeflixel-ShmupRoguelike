#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyBullet
#include <objects/enemies/EnemyBullet.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMultishotDeath
#include <objects/enemies/EnemyMultishotDeath.h>
#endif
#ifndef INCLUDED_objects_items_HealthItem
#include <objects/items/HealthItem.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace enemies{

Void EnemyMultishotDeath_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.EnemyMultishotDeath","new",0x6c6eb499,"objects.enemies.EnemyMultishotDeath.new","objects/enemies/EnemyMultishotDeath.hx",14,0x5e505b79)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(20)
	this->bulletSpeed = (int)80;
	HX_STACK_LINE(19)
	this->ang = (int)180;
	HX_STACK_LINE(18)
	this->shootDelay = ((Float)0.25);
	HX_STACK_LINE(24)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(25)
	this->HP = (int)1;
	HX_STACK_LINE(26)
	this->makeGraphic((int)8,(int)8,(int)-65536,null(),null());
}
;
	return null();
}

//EnemyMultishotDeath_obj::~EnemyMultishotDeath_obj() { }

Dynamic EnemyMultishotDeath_obj::__CreateEmpty() { return  new EnemyMultishotDeath_obj; }
hx::ObjectPtr< EnemyMultishotDeath_obj > EnemyMultishotDeath_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyMultishotDeath_obj > _result_ = new EnemyMultishotDeath_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyMultishotDeath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyMultishotDeath_obj > _result_ = new EnemyMultishotDeath_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyMultishotDeath_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.EnemyMultishotDeath","update",0x017e4b70,"objects.enemies.EnemyMultishotDeath.update","objects/enemies/EnemyMultishotDeath.hx",30,0x5e505b79)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(33)
		bool tmp = this->justShot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		if ((tmp2)){
			HX_STACK_LINE(33)
			tmp3 = this->isOnScreen(null());
		}
		else{
			HX_STACK_LINE(33)
			tmp3 = false;
		}
		HX_STACK_LINE(33)
		if ((tmp3)){
			HX_STACK_LINE(35)
			this->shoot();
		}
		HX_STACK_LINE(38)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		this->super::update(tmp4);
	}
return null();
}


Void EnemyMultishotDeath_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyMultishotDeath","kill",0x7276ad45,"objects.enemies.EnemyMultishotDeath.kill","objects/enemies/EnemyMultishotDeath.hx",42,0x5e505b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		::objects::items::HealthItem tmp2 = ::objects::items::HealthItem_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		this->drops = Array_obj< ::Dynamic >::__new().Add(tmp2);
		HX_STACK_LINE(44)
		this->dropItem(this->drops);
		HX_STACK_LINE(45)
		this->deathShot();
		HX_STACK_LINE(46)
		this->super::kill();
	}
return null();
}


Void EnemyMultishotDeath_obj::shoot( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyMultishotDeath","shoot",0x4feea658,"objects.enemies.EnemyMultishotDeath.shoot","objects/enemies/EnemyMultishotDeath.hx",50,0x5e505b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::objects::enemies::EnemyMultishotDeath _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		this->justShot = true;
		HX_STACK_LINE(52)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::objects::enemies::EnemyBullet tmp2 = ::objects::enemies::EnemyBullet_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::objects::enemies::EnemyBullet eb = tmp2;		HX_STACK_VAR(eb,"eb");
		HX_STACK_LINE(54)
		hx::AddEq(this->ang,(int)30);
		HX_STACK_LINE(55)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int tmp4 = this->bulletSpeed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			Float Speed = tmp4;		HX_STACK_VAR(Speed,"Speed");
			HX_STACK_LINE(55)
			int tmp5 = this->ang;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			Float tmp6 = ::Math_obj::PI;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			Float tmp7 = (Float(tmp6) / Float((int)180));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			Float a = tmp8;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Float tmp9 = a;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				Float tmp11 = Speed;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(55)
				Float X = tmp12;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(55)
				Float tmp13 = a;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(55)
				Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(55)
				Float tmp15 = Speed;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(55)
				Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(55)
				Float Y = tmp16;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(55)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp17 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(55)
				::flixel::math::FlxPoint tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(55)
				Float tmp19 = X;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(55)
				Float tmp20 = Y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(55)
				::flixel::math::FlxPoint tmp21 = tmp18->set(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(55)
				::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(55)
				point->_inPool = false;
				HX_STACK_LINE(55)
				tmp3 = point;
			}
		}
		HX_STACK_LINE(55)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int tmp6 = this->bulletSpeed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			Float Speed = tmp6;		HX_STACK_VAR(Speed,"Speed");
			HX_STACK_LINE(55)
			int tmp7 = this->ang;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			Float tmp9 = (Float(tmp8) / Float((int)180));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			Float a = tmp10;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(55)
				Float tmp12 = ::Math_obj::cos(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(55)
				Float tmp13 = Speed;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(55)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(55)
				Float X = tmp14;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(55)
				Float tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(55)
				Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(55)
				Float tmp17 = Speed;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(55)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(55)
				Float Y = tmp18;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(55)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp19 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(55)
				::flixel::math::FlxPoint tmp20 = tmp19->get();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(55)
				Float tmp21 = X;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(55)
				Float tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(55)
				::flixel::math::FlxPoint tmp23 = tmp20->set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(55)
				::flixel::math::FlxPoint point = tmp23;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(55)
				point->_inPool = false;
				HX_STACK_LINE(55)
				tmp5 = point;
			}
		}
		HX_STACK_LINE(55)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		eb->velocity->set(tmp4,tmp6);
		HX_STACK_LINE(56)
		eb->scale->set(((Float)0.5),((Float)0.5));
		HX_STACK_LINE(57)
		::states::PlayState tmp7 = ::Reg_obj::PS;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		::objects::enemies::EnemyBullet tmp8 = eb;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		tmp7->EBullets->add(tmp8);
		HX_STACK_LINE(59)
		::flixel::util::FlxTimer tmp9 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		Float tmp10 = this->shootDelay;		HX_STACK_VAR(tmp10,"tmp10");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::objects::enemies::EnemyMultishotDeath,_g)
		int __ArgCount() const { return 1; }
		Void run(::flixel::util::FlxTimer _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","objects/enemies/EnemyMultishotDeath.hx",61,0x5e505b79)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(61)
				_g->justShot = false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(59)
		tmp9->start(tmp10, Dynamic(new _Function_1_1(_g)),(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyMultishotDeath_obj,shoot,(void))

Void EnemyMultishotDeath_obj::deathShot( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyMultishotDeath","deathShot",0x0eb98f47,"objects.enemies.EnemyMultishotDeath.deathShot","objects/enemies/EnemyMultishotDeath.hx",66,0x5e505b79)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		int tang = (int)-90;		HX_STACK_VAR(tang,"tang");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			while((true)){
				HX_STACK_LINE(68)
				bool tmp = (_g < (int)9);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(68)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(68)
				if ((tmp1)){
					HX_STACK_LINE(68)
					break;
				}
				HX_STACK_LINE(68)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(68)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(70)
				Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				::objects::enemies::EnemyBullet tmp5 = ::objects::enemies::EnemyBullet_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				::objects::enemies::EnemyBullet eb = tmp5;		HX_STACK_VAR(eb,"eb");
				HX_STACK_LINE(71)
				::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					int tmp7 = this->bulletSpeed;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(71)
					Float Speed = tmp7;		HX_STACK_VAR(Speed,"Speed");
					HX_STACK_LINE(71)
					int tmp8 = tang;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(71)
					Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(71)
					Float tmp10 = (Float(tmp9) / Float((int)180));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(71)
					Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(71)
					Float a = tmp11;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						Float tmp12 = a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(71)
						Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(71)
						Float tmp14 = Speed;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(71)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(71)
						Float X = tmp15;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(71)
						Float tmp16 = a;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(71)
						Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(71)
						Float tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(71)
						Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(71)
						Float Y = tmp19;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(71)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp20 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(71)
						::flixel::math::FlxPoint tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(71)
						Float tmp22 = X;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(71)
						Float tmp23 = Y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(71)
						::flixel::math::FlxPoint tmp24 = tmp21->set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(71)
						::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(71)
						point->_inPool = false;
						HX_STACK_LINE(71)
						tmp6 = point;
					}
				}
				HX_STACK_LINE(71)
				Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					int tmp9 = this->bulletSpeed;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(71)
					Float Speed = tmp9;		HX_STACK_VAR(Speed,"Speed");
					HX_STACK_LINE(71)
					int tmp10 = tang;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(71)
					Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(71)
					Float tmp12 = (Float(tmp11) / Float((int)180));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(71)
					Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(71)
					Float a = tmp13;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(71)
					{
						HX_STACK_LINE(71)
						Float tmp14 = a;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(71)
						Float tmp15 = ::Math_obj::cos(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(71)
						Float tmp16 = Speed;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(71)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(71)
						Float X = tmp17;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(71)
						Float tmp18 = a;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(71)
						Float tmp19 = ::Math_obj::sin(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(71)
						Float tmp20 = Speed;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(71)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(71)
						Float Y = tmp21;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(71)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp22 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(71)
						::flixel::math::FlxPoint tmp23 = tmp22->get();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(71)
						Float tmp24 = X;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(71)
						Float tmp25 = Y;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(71)
						::flixel::math::FlxPoint tmp26 = tmp23->set(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(71)
						::flixel::math::FlxPoint point = tmp26;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(71)
						point->_inPool = false;
						HX_STACK_LINE(71)
						tmp8 = point;
					}
				}
				HX_STACK_LINE(71)
				Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				eb->velocity->set(tmp7,tmp9);
				HX_STACK_LINE(72)
				hx::AddEq(tang,(int)45);
				HX_STACK_LINE(73)
				eb->scale->set(((Float)0.5),((Float)0.5));
				HX_STACK_LINE(74)
				::states::PlayState tmp10 = ::Reg_obj::PS;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(74)
				::objects::enemies::EnemyBullet tmp11 = eb;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(74)
				tmp10->EBullets->add(tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyMultishotDeath_obj,deathShot,(void))


EnemyMultishotDeath_obj::EnemyMultishotDeath_obj()
{
}

Dynamic EnemyMultishotDeath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ang") ) { return ang; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { return justShot; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"deathShot") ) { return deathShot_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootDelay") ) { return shootDelay; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { return bulletSpeed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyMultishotDeath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ang") ) { ang=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { justShot=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootDelay") ) { shootDelay=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { bulletSpeed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyMultishotDeath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("justShot","\x46","\x51","\xe4","\xac"));
	outFields->push(HX_HCSTRING("shootDelay","\x24","\x9d","\xee","\xb3"));
	outFields->push(HX_HCSTRING("ang","\xda","\xfa","\x49","\x00"));
	outFields->push(HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(EnemyMultishotDeath_obj,justShot),HX_HCSTRING("justShot","\x46","\x51","\xe4","\xac")},
	{hx::fsFloat,(int)offsetof(EnemyMultishotDeath_obj,shootDelay),HX_HCSTRING("shootDelay","\x24","\x9d","\xee","\xb3")},
	{hx::fsInt,(int)offsetof(EnemyMultishotDeath_obj,ang),HX_HCSTRING("ang","\xda","\xfa","\x49","\x00")},
	{hx::fsInt,(int)offsetof(EnemyMultishotDeath_obj,bulletSpeed),HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("justShot","\x46","\x51","\xe4","\xac"),
	HX_HCSTRING("shootDelay","\x24","\x9d","\xee","\xb3"),
	HX_HCSTRING("ang","\xda","\xfa","\x49","\x00"),
	HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("deathShot","\x4e","\x3a","\x14","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyMultishotDeath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyMultishotDeath_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyMultishotDeath_obj::__mClass;

void EnemyMultishotDeath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyMultishotDeath","\x27","\x74","\xc8","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyMultishotDeath_obj >;
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

} // end namespace objects
} // end namespace enemies
