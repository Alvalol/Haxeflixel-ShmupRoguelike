#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_PlayerBullet
#include <objects/PlayerBullet.h>
#endif
#ifndef INCLUDED_objects_effects_Explosion
#include <objects/effects/Explosion.h>
#endif
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
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
namespace enemies{

Void Enemy_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.Enemy","new",0x2ea2ef38,"objects.enemies.Enemy.new","objects/enemies/Enemy.hx",11,0x978a1a3a)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	this->_appeared = false;
	HX_STACK_LINE(19)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1,null());
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Enemy_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.Enemy","update",0x57433e31,"objects.enemies.Enemy.update","objects/enemies/Enemy.hx",23,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		this->basicChecks();
		HX_STACK_LINE(26)
		this->collisions();
		HX_STACK_LINE(28)
		bool tmp = ::Reg_obj::pause;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		if ((tmp1)){
			HX_STACK_LINE(29)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			this->super::update(tmp2);
		}
	}
return null();
}


Void Enemy_obj::basicChecks( ){
{
		HX_STACK_FRAME("objects.enemies.Enemy","basicChecks",0x483da2d1,"objects.enemies.Enemy.basicChecks","objects/enemies/Enemy.hx",34,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		if ((tmp6)){
			HX_STACK_LINE(35)
			Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(35)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				tmp11 = tmp16;
			}
			HX_STACK_LINE(35)
			tmp7 = (tmp10 < tmp11);
		}
		else{
			HX_STACK_LINE(35)
			tmp7 = false;
		}
		HX_STACK_LINE(35)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		if ((tmp8)){
			HX_STACK_LINE(35)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(35)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(35)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(35)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(35)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(35)
			::flixel::math::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(35)
			::flixel::math::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(35)
			::flixel::math::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(35)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(35)
			tmp9 = (tmp18 > tmp22);
		}
		else{
			HX_STACK_LINE(35)
			tmp9 = false;
		}
		HX_STACK_LINE(35)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		if ((tmp9)){
			HX_STACK_LINE(35)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				tmp13 = tmp16;
			}
			HX_STACK_LINE(35)
			tmp10 = (tmp12 < tmp13);
		}
		else{
			HX_STACK_LINE(35)
			tmp10 = false;
		}
		HX_STACK_LINE(35)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		if ((tmp11)){
			HX_STACK_LINE(36)
			this->set_exists(false);
		}
		HX_STACK_LINE(38)
		bool tmp12 = this->isOnScreen(null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		if ((tmp12)){
			HX_STACK_LINE(39)
			bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			if ((tmp14)){
				HX_STACK_LINE(40)
				this->_appeared = true;
			}
		}
		else{
			HX_STACK_LINE(43)
			bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			if ((tmp13)){
				HX_STACK_LINE(44)
				this->kill();
			}
		}
		HX_STACK_LINE(48)
		int tmp13 = this->HP;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		bool tmp14 = (tmp13 <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(48)
		if ((tmp14)){
			HX_STACK_LINE(49)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,basicChecks,(void))

Void Enemy_obj::collisions( ){
{
		HX_STACK_FRAME("objects.enemies.Enemy","collisions",0xed99a7e9,"objects.enemies.Enemy.collisions","objects/enemies/Enemy.hx",55,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::objects::Player tmp1 = tmp->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		bool tmp2 = ::flixel::FlxG_obj::overlap(tmp1,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		if ((tmp2)){
			HX_STACK_LINE(58)
			::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			::objects::Player tmp4 = tmp3->player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			this->interact(tmp4);
		}
		HX_STACK_LINE(61)
		::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		::flixel::group::FlxTypedGroup tmp4 = tmp3->PBullets;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		bool tmp5 = ::flixel::FlxG_obj::overlap(tmp4,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		if ((tmp5)){
			HX_STACK_LINE(63)
			this->damage();
			HX_STACK_LINE(64)
			::states::PlayState tmp6 = ::Reg_obj::PS;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			::objects::PlayerBullet tmp7 = tmp6->PBullets->getFirstAlive();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			tmp7->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,collisions,(void))

Void Enemy_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.enemies.Enemy","interact",0xcda69dde,"objects.enemies.Enemy.interact","objects/enemies/Enemy.hx",69,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(70)
		this->damage();
		HX_STACK_LINE(71)
		player->damage();
		HX_STACK_LINE(72)
		::objects::Player tmp = player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::flixel::FlxObject_obj::separate(hx::ObjectPtr<OBJ_>(this),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,interact,(void))

Void Enemy_obj::damage( ){
{
		HX_STACK_FRAME("objects.enemies.Enemy","damage",0xee224897,"objects.enemies.Enemy.damage","objects/enemies/Enemy.hx",77,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		(this->HP)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,damage,(void))

Void Enemy_obj::dropItem( Array< ::Dynamic > list){
{
		HX_STACK_FRAME("objects.enemies.Enemy","dropItem",0x90947f0a,"objects.enemies.Enemy.dropItem","objects/enemies/Enemy.hx",82,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(85)
		::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		int tmp1 = tmp->_int((int)0,(int)100,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		int itemRoll = tmp1;		HX_STACK_VAR(itemRoll,"itemRoll");
		HX_STACK_LINE(87)
		bool tmp2 = (itemRoll < (int)15);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(87)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			::objects::items::Item tmp4 = tmp3->getObject_objects_items_Item(list,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::objects::items::Item tObject = tmp4;		HX_STACK_VAR(tObject,"tObject");
			HX_STACK_LINE(91)
			::states::PlayState tmp5 = ::Reg_obj::PS;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::objects::items::Item tmp6 = tObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			tmp5->items->add(tmp6);
		}
		else{
			HX_STACK_LINE(95)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			::objects::items::CoinItem tmp5 = ::objects::items::CoinItem_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			::objects::items::CoinItem newCoin = tmp5;		HX_STACK_VAR(newCoin,"newCoin");
			HX_STACK_LINE(96)
			::states::PlayState tmp6 = ::Reg_obj::PS;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			::objects::items::CoinItem tmp7 = newCoin;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			tmp6->coins->add(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,dropItem,(void))

Void Enemy_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.Enemy","kill",0x9df5bdc6,"objects.enemies.Enemy.kill","objects/enemies/Enemy.hx",101,0x978a1a3a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		tmp->enemies->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(105)
		bool tmp1 = this->isOnScreen(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		if ((tmp1)){
			HX_STACK_LINE(106)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			Float tmp3 = (tmp2 - (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			Float tmp5 = (tmp4 - (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			::objects::effects::Explosion tmp6 = ::objects::effects::Explosion_obj::__new(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			::objects::effects::Explosion e = tmp6;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(107)
			::states::PlayState tmp7 = ::Reg_obj::PS;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			::objects::effects::Explosion tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			tmp7->effects->add(tmp8);
		}
		HX_STACK_LINE(110)
		this->set_alive(false);
		HX_STACK_LINE(111)
		this->set_exists(false);
	}
return null();
}



Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(HP,"HP");
	HX_MARK_MEMBER_NAME(_appeared,"_appeared");
	HX_MARK_MEMBER_NAME(drops,"drops");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(HP,"HP");
	HX_VISIT_MEMBER_NAME(_appeared,"_appeared");
	HX_VISIT_MEMBER_NAME(drops,"drops");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"HP") ) { return HP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"drops") ) { return drops; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"damage") ) { return damage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
		if (HX_FIELD_EQ(inName,"dropItem") ) { return dropItem_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_appeared") ) { return _appeared; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"basicChecks") ) { return basicChecks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"HP") ) { HP=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"drops") ) { drops=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_appeared") ) { _appeared=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("HP","\x08","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54"));
	outFields->push(HX_HCSTRING("drops","\x64","\xf1","\xc0","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Enemy_obj,HP),HX_HCSTRING("HP","\x08","\x3f","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Enemy_obj,_appeared),HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Enemy_obj,drops),HX_HCSTRING("drops","\x64","\xf1","\xc0","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("HP","\x08","\x3f","\x00","\x00"),
	HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54"),
	HX_HCSTRING("drops","\x64","\xf1","\xc0","\xdf"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("basicChecks","\xf9","\xeb","\xef","\x6c"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	HX_HCSTRING("dropItem","\xe2","\x6c","\x5a","\xeb"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.Enemy","\x46","\x33","\xc5","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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
