#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVelocity
#include <flixel/math/FlxVelocity.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_items_CoinItem
#include <objects/items/CoinItem.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace items{

Void CoinItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.CoinItem","new",0x071312de,"objects.items.CoinItem.new","objects/items/CoinItem.hx",12,0x0bd8ced0)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(16)
	this->rotspeed = (int)5;
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(21)
	::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	int tmp3 = tmp2->_int((int)2,(int)5,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	int t = tmp3;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(22)
	int tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	int tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(22)
	this->makeGraphic(tmp4,tmp5,(int)-1,null(),null());
	HX_STACK_LINE(23)
	::flixel::math::FlxPoint tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	tmp6->set((int)-4,(int)-4);
	HX_STACK_LINE(24)
	this->centerOffsets(null());
	HX_STACK_LINE(26)
	::flixel::addons::effects::FlxTrail tmp7 = ::flixel::addons::effects::FlxTrail_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),(int)10,(int)1,((Float)0.3),((Float)0.05));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	this->bTrail = tmp7;
	HX_STACK_LINE(27)
	::states::PlayState tmp8 = ::Reg_obj::PS;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	::flixel::addons::effects::FlxTrail tmp9 = this->bTrail;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	tmp8->effects->add(tmp9);
}
;
	return null();
}

//CoinItem_obj::~CoinItem_obj() { }

Dynamic CoinItem_obj::__CreateEmpty() { return  new CoinItem_obj; }
hx::ObjectPtr< CoinItem_obj > CoinItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< CoinItem_obj > _result_ = new CoinItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic CoinItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CoinItem_obj > _result_ = new CoinItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void CoinItem_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.items.CoinItem","update",0xf504664b,"objects.items.CoinItem.update","objects/items/CoinItem.hx",31,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(32)
		this->collisions();
		HX_STACK_LINE(33)
		this->magnetize();
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::objects::items::CoinItem _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			Float tmp = _g->angle;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(34)
			int tmp1 = this->rotspeed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(34)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			_g->set_angle(tmp2);
		}
		HX_STACK_LINE(36)
		bool tmp = this->magnetized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(37)
			this->move();
		}
		else{
			HX_STACK_LINE(40)
			::flixel::math::FlxPoint tmp1 = this->velocity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(40)
			tmp1->set((int)0,(int)0);
			HX_STACK_LINE(41)
			::flixel::math::FlxPoint tmp2 = this->acceleration;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			tmp2->set((int)0,(int)0);
		}
		HX_STACK_LINE(44)
		this->noOverlapping();
		HX_STACK_LINE(46)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		this->super::update(tmp1);
	}
return null();
}


Void CoinItem_obj::magnetize( ){
{
		HX_STACK_FRAME("objects.items.CoinItem","magnetize",0xc7ee0ee8,"objects.items.CoinItem.magnetize","objects/items/CoinItem.hx",50,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			::flixel::FlxSprite SpriteB = tmp1->player;		HX_STACK_VAR(SpriteB,"SpriteB");
			HX_STACK_LINE(51)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::flixel::math::FlxPoint tmp3 = this->origin;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			Float tmp6 = SpriteB->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			Float tmp7 = SpriteB->origin->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(51)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			::flixel::math::FlxPoint tmp11 = this->origin;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			Float tmp14 = SpriteB->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(51)
			Float tmp15 = SpriteB->origin->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(51)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(51)
			Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(51)
			Float dy = tmp17;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(51)
			Float tmp18 = (dx * dx);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(51)
			Float tmp19 = (dy * dy);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(51)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(51)
			Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(51)
			tmp = ::Std_obj::_int(tmp21);
		}
		HX_STACK_LINE(51)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int tmp2 = tmp1->player->MAGNET;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(51)
			bool tmp5 = this->magnetized;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp4 = (tmp6 == false);
		}
		else{
			HX_STACK_LINE(51)
			tmp4 = false;
		}
		HX_STACK_LINE(51)
		if ((tmp4)){
			HX_STACK_LINE(52)
			this->magnetized = true;
		}
		else{
			HX_STACK_LINE(54)
			this->magnetized = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CoinItem_obj,magnetize,(void))

Void CoinItem_obj::collisions( ){
{
		HX_STACK_FRAME("objects.items.CoinItem","collisions",0xff79e503,"objects.items.CoinItem.collisions","objects/items/CoinItem.hx",58,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		::objects::Player tmp1 = tmp->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		bool tmp2 = ::flixel::FlxG_obj::overlap(tmp1,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		if ((tmp2)){
			HX_STACK_LINE(61)
			::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			::objects::Player tmp4 = tmp3->player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			this->interact(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CoinItem_obj,collisions,(void))

Void CoinItem_obj::move( ){
{
		HX_STACK_FRAME("objects.items.CoinItem","move",0x28fbced3,"objects.items.CoinItem.move","objects/items/CoinItem.hx",65,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::objects::items::CoinItem _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			Float tmp = _g->angle;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			::flixel::math::FlxPoint tmp1 = this->velocity;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			Float tmp3 = (Float(tmp2) / Float((int)10));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			_g->set_angle(tmp4);
		}
		HX_STACK_LINE(67)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			::flixel::FlxSprite SpriteA = tmp1->player;		HX_STACK_VAR(SpriteA,"SpriteA");
			HX_STACK_LINE(67)
			Float tmp2 = SpriteA->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			Float tmp3 = SpriteA->origin->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::flixel::math::FlxPoint tmp6 = this->origin;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			Float tmp9 = (tmp4 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			Float dx = tmp9;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(67)
			Float tmp10 = SpriteA->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			Float tmp11 = SpriteA->origin->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			::flixel::math::FlxPoint tmp14 = this->origin;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(67)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(67)
			Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(67)
			Float tmp17 = (tmp12 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(67)
			Float dy = tmp17;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(67)
			Float tmp18 = (dx * dx);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(67)
			Float tmp19 = (dy * dy);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(67)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			tmp = ::Std_obj::_int(tmp21);
		}
		HX_STACK_LINE(67)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		int tmp2 = tmp1->player->MAGNET;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(70)
			::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			::objects::Player tmp5 = tmp4->player;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(70)
			::states::PlayState tmp6 = ::Reg_obj::PS;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(70)
			int tmp7 = tmp6->player->MAGNET_FORCE;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(70)
			::states::PlayState tmp8 = ::Reg_obj::PS;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			int tmp9 = tmp8->player->MAGNET_FORCE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			int tmp10 = (tmp9 * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			::flixel::math::FlxVelocity_obj::accelerateTowardsObject(hx::ObjectPtr<OBJ_>(this),tmp5,tmp7,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CoinItem_obj,move,(void))

Void CoinItem_obj::noOverlapping( ){
{
		HX_STACK_FRAME("objects.items.CoinItem","noOverlapping",0xfee59eb6,"objects.items.CoinItem.noOverlapping","objects/items/CoinItem.hx",75,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		::flixel::group::FlxTypedGroupIterator tmp1 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp->coins->members,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		for(::cpp::FastIterator_obj< ::objects::items::CoinItem > *__it = ::cpp::CreateFastIterator< ::objects::items::CoinItem >(tmp1);  __it->hasNext(); ){
			::objects::items::CoinItem coin = __it->next();
			{
				HX_STACK_LINE(78)
				::objects::items::CoinItem tmp2 = coin;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				bool tmp3 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				if ((tmp3)){
					HX_STACK_LINE(80)
					::objects::items::CoinItem tmp4 = coin;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(80)
					::flixel::FlxObject_obj::separate(hx::ObjectPtr<OBJ_>(this),tmp4);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CoinItem_obj,noOverlapping,(void))

Void CoinItem_obj::kill( ){
{
		HX_STACK_FRAME("objects.items.CoinItem","kill",0x27a4cb60,"objects.items.CoinItem.kill","objects/items/CoinItem.hx",86,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->lifespan = (int)4;
		HX_STACK_LINE(88)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		tmp->coins->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(89)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		::flixel::addons::effects::FlxTrail tmp2 = this->bTrail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		tmp1->effects->remove(tmp2,true);
		HX_STACK_LINE(90)
		this->super::kill();
	}
return null();
}


Void CoinItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.CoinItem","interact",0x3c158078,"objects.items.CoinItem.interact","objects/items/CoinItem.hx",94,0x0bd8ced0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(95)
		this->kill();
		HX_STACK_LINE(96)
		hx::AddEq(::Reg_obj::score,(int)5);
	}
return null();
}



CoinItem_obj::CoinItem_obj()
{
}

void CoinItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CoinItem);
	HX_MARK_MEMBER_NAME(magnetized,"magnetized");
	HX_MARK_MEMBER_NAME(bTrail,"bTrail");
	HX_MARK_MEMBER_NAME(rotspeed,"rotspeed");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CoinItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(magnetized,"magnetized");
	HX_VISIT_MEMBER_NAME(bTrail,"bTrail");
	HX_VISIT_MEMBER_NAME(rotspeed,"rotspeed");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CoinItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bTrail") ) { return bTrail; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotspeed") ) { return rotspeed; }
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnetize") ) { return magnetize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"magnetized") ) { return magnetized; }
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"noOverlapping") ) { return noOverlapping_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CoinItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bTrail") ) { bTrail=inValue.Cast< ::flixel::addons::effects::FlxTrail >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotspeed") ) { rotspeed=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"magnetized") ) { magnetized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CoinItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("magnetized","\x3a","\xd3","\xfd","\x20"));
	outFields->push(HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8"));
	outFields->push(HX_HCSTRING("rotspeed","\x10","\xc2","\x14","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(CoinItem_obj,magnetized),HX_HCSTRING("magnetized","\x3a","\xd3","\xfd","\x20")},
	{hx::fsObject /*::flixel::addons::effects::FlxTrail*/ ,(int)offsetof(CoinItem_obj,bTrail),HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8")},
	{hx::fsInt,(int)offsetof(CoinItem_obj,rotspeed),HX_HCSTRING("rotspeed","\x10","\xc2","\x14","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("magnetized","\x3a","\xd3","\xfd","\x20"),
	HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8"),
	HX_HCSTRING("rotspeed","\x10","\xc2","\x14","\x63"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("magnetize","\xea","\xd9","\xc0","\xa7"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("noOverlapping","\xb8","\x12","\x47","\xae"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoinItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoinItem_obj::__mClass,"__mClass");
};

#endif

hx::Class CoinItem_obj::__mClass;

void CoinItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.CoinItem","\xec","\x0b","\xe5","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CoinItem_obj >;
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
} // end namespace items
