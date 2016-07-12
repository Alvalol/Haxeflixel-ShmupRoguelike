#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyBullet
#include <objects/enemies/EnemyBullet.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyTurretA
#include <objects/enemies/EnemyTurretA.h>
#endif
#ifndef INCLUDED_objects_items_HealthItem
#include <objects/items/HealthItem.h>
#endif
#ifndef INCLUDED_objects_items_HealthMaxItem
#include <objects/items/HealthMaxItem.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_objects_items_MagnetItem
#include <objects/items/MagnetItem.h>
#endif
#ifndef INCLUDED_objects_items_SpeedItem
#include <objects/items/SpeedItem.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#include <utils/pcg/LevelLoaderProc.h>
#endif
namespace objects{
namespace enemies{

Void EnemyTurretA_obj::__construct(Float x,Float y,bool flip)
{
HX_STACK_FRAME("objects.enemies.EnemyTurretA","new",0xb5aa3fdd,"objects.enemies.EnemyTurretA.new","objects/enemies/EnemyTurretA.hx",20,0xa90c3371)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(flip,"flip")
{
	HX_STACK_LINE(28)
	this->shootDelay = ((Float)2);
	HX_STACK_LINE(36)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(37)
	this->HP = (int)1;
	HX_STACK_LINE(38)
	::flixel::math::FlxRandom tmp2 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	int tmp3 = tmp2->_int((int)0,(int)1,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	this->type = tmp3;
	HX_STACK_LINE(39)
	Float tmp4 = (Float(x) / Float((int)8));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	this->tx = tmp5;
	HX_STACK_LINE(40)
	Float tmp6 = (Float(y) / Float((int)8));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	this->ty = tmp7;
	HX_STACK_LINE(42)
	this->loadGraphic(HX_HCSTRING("assets/images/enemies.png","\x16","\x33","\xfe","\x81"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(43)
	::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(43)
	tmp8->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)0).Add((int)1),(int)6,true,null(),null());
	HX_STACK_LINE(44)
	::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	tmp9->add(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)7).Add((int)7).Add((int)8).Add((int)8),(int)8,false,null(),null());
	HX_STACK_LINE(45)
	::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(45)
	tmp10->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
	HX_STACK_LINE(47)
	this->set_immovable(true);
	HX_STACK_LINE(48)
	this->set_solid(true);
	HX_STACK_LINE(49)
	this->adjustFlip();
	HX_STACK_LINE(50)
	this->chooseType();
}
;
	return null();
}

//EnemyTurretA_obj::~EnemyTurretA_obj() { }

Dynamic EnemyTurretA_obj::__CreateEmpty() { return  new EnemyTurretA_obj; }
hx::ObjectPtr< EnemyTurretA_obj > EnemyTurretA_obj::__new(Float x,Float y,bool flip)
{  hx::ObjectPtr< EnemyTurretA_obj > _result_ = new EnemyTurretA_obj();
	_result_->__construct(x,y,flip);
	return _result_;}

Dynamic EnemyTurretA_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyTurretA_obj > _result_ = new EnemyTurretA_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void EnemyTurretA_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.EnemyTurretA","update",0xfcbe22ac,"objects.enemies.EnemyTurretA.update","objects/enemies/EnemyTurretA.hx",55,0xa90c3371)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(56)
		this->animateToShoot();
		HX_STACK_LINE(57)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		this->super::update(tmp);
	}
return null();
}


Void EnemyTurretA_obj::animateToShoot( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyTurretA","animateToShoot",0x04839966,"objects.enemies.EnemyTurretA.animateToShoot","objects/enemies/EnemyTurretA.hx",61,0xa90c3371)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		bool tmp = this->justShot;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp2)){
			HX_STACK_LINE(62)
			tmp3 = this->isOnScreen(null());
		}
		else{
			HX_STACK_LINE(62)
			tmp3 = false;
		}
		HX_STACK_LINE(62)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			tmp4->play(HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),null(),null(),null());
			HX_STACK_LINE(65)
			this->justShot = true;
		}
		HX_STACK_LINE(68)
		::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::String tmp5 = tmp4->_curAnim->name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		bool tmp6 = (tmp5 == HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		if ((tmp6)){
			HX_STACK_LINE(68)
			::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			::flixel::animation::FlxAnimationController tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			int tmp10 = tmp9->_curAnim->curFrame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			tmp7 = (tmp11 == (int)6);
		}
		else{
			HX_STACK_LINE(68)
			tmp7 = false;
		}
		HX_STACK_LINE(68)
		if ((tmp7)){
			HX_STACK_LINE(70)
			::states::PlayState tmp8 = ::Reg_obj::PS;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(70)
			::objects::enemies::EnemyBullet tmp9 = this->shoot();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			tmp8->EBullets->add(tmp9);
			HX_STACK_LINE(71)
			::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(71)
			tmp10->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyTurretA_obj,animateToShoot,(void))

::objects::enemies::EnemyBullet EnemyTurretA_obj::shoot( ){
	HX_STACK_FRAME("objects.enemies.EnemyTurretA","shoot",0x07968a9c,"objects.enemies.EnemyTurretA.shoot","objects/enemies/EnemyTurretA.hx",76,0xa90c3371)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::objects::enemies::EnemyTurretA _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::objects::enemies::EnemyBullet tmp1 = tmp->EBullets->recycle(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	::objects::enemies::EnemyBullet eb = tmp1;		HX_STACK_VAR(eb,"eb");
	HX_STACK_LINE(78)
	bool tmp2 = (eb == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	if ((tmp2)){
		HX_STACK_LINE(79)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		::objects::enemies::EnemyBullet tmp5 = ::objects::enemies::EnemyBullet_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		eb = tmp5;
	}
	HX_STACK_LINE(81)
	bool tmp3 = this->flipY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	if ((tmp4)){
		HX_STACK_LINE(83)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		Float tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		eb->reset(tmp5,tmp7);
		HX_STACK_LINE(84)
		int tmp8 = (int)-150;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		eb->velocity->set_y(tmp8);
	}
	else{
		HX_STACK_LINE(88)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		Float tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		eb->reset(tmp5,tmp7);
		HX_STACK_LINE(89)
		eb->velocity->set_y((int)150);
	}
	HX_STACK_LINE(92)
	::flixel::util::FlxTimer tmp5 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	Float tmp6 = this->shootDelay;		HX_STACK_VAR(tmp6,"tmp6");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::objects::enemies::EnemyTurretA,_g)
	int __ArgCount() const { return 1; }
	Void run(::flixel::util::FlxTimer _){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","objects/enemies/EnemyTurretA.hx",94,0xa90c3371)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(94)
			_g->justShot = false;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(92)
	tmp5->start(tmp6, Dynamic(new _Function_1_1(_g)),(int)1);
	HX_STACK_LINE(97)
	int tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	bool tmp8 = (tmp7 == (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	if ((tmp8)){
		HX_STACK_LINE(99)
		::states::PlayState tmp9 = ::Reg_obj::PS;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		Float tmp10 = tmp9->player->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		::states::PlayState tmp11 = ::Reg_obj::PS;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(99)
		Float tmp12 = tmp11->player->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(99)
		::flixel::math::FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::__new(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(99)
		::flixel::math::FlxPoint aim = tmp13;		HX_STACK_VAR(aim,"aim");
		HX_STACK_LINE(100)
		::objects::enemies::EnemyBullet tmp14 = eb;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(100)
		::flixel::math::FlxPoint tmp15 = aim;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(100)
		::flixel::math::FlxVelocity_obj::moveTowardsPoint(tmp14,tmp15,(int)150,(int)0);
	}
	HX_STACK_LINE(103)
	::objects::enemies::EnemyBullet tmp9 = eb;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(103)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyTurretA_obj,shoot,return )

Void EnemyTurretA_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyTurretA","kill",0x3d54fd81,"objects.enemies.EnemyTurretA.kill","objects/enemies/EnemyTurretA.hx",108,0xa90c3371)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::objects::items::HealthItem tmp2 = ::objects::items::HealthItem_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		::objects::items::SpeedItem tmp5 = ::objects::items::SpeedItem_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		::objects::items::HealthMaxItem tmp8 = ::objects::items::HealthMaxItem_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(109)
		::objects::items::MagnetItem tmp11 = ::objects::items::MagnetItem_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(109)
		Array< ::Dynamic > drops = Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp5).Add(tmp8).Add(tmp11);		HX_STACK_VAR(drops,"drops");
		HX_STACK_LINE(110)
		this->dropItem(drops);
		HX_STACK_LINE(111)
		this->super::kill();
	}
return null();
}


Void EnemyTurretA_obj::adjustFlip( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyTurretA","adjustFlip",0xf55b28ff,"objects.enemies.EnemyTurretA.adjustFlip","objects/enemies/EnemyTurretA.hx",115,0xa90c3371)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::flixel::tile::FlxTilemap tmp1 = tmp->map->loadedMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		int tmp2 = this->tx;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		int tmp3 = this->ty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		int tmp5 = tmp1->getTile(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		if ((tmp6)){
			HX_STACK_LINE(118)
			this->set_flipY(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyTurretA_obj,adjustFlip,(void))

Void EnemyTurretA_obj::chooseType( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyTurretA","chooseType",0x4c795b54,"objects.enemies.EnemyTurretA.chooseType","objects/enemies/EnemyTurretA.hx",124,0xa90c3371)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(127)
			this->set_color((int)-256);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyTurretA_obj,chooseType,(void))

int EnemyTurretA_obj::SCORE_AMOUNT;

int EnemyTurretA_obj::SHOOT_SPEED;


EnemyTurretA_obj::EnemyTurretA_obj()
{
}

void EnemyTurretA_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnemyTurretA);
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(justShot,"justShot");
	HX_MARK_MEMBER_NAME(shootDelay,"shootDelay");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(type,"type");
	::objects::enemies::Enemy_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnemyTurretA_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(justShot,"justShot");
	HX_VISIT_MEMBER_NAME(shootDelay,"shootDelay");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(type,"type");
	::objects::enemies::Enemy_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnemyTurretA_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { return justShot; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootDelay") ) { return shootDelay; }
		if (HX_FIELD_EQ(inName,"adjustFlip") ) { return adjustFlip_dyn(); }
		if (HX_FIELD_EQ(inName,"chooseType") ) { return chooseType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"animateToShoot") ) { return animateToShoot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyTurretA_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< ::objects::enemies::EnemyBullet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"justShot") ) { justShot=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shootDelay") ) { shootDelay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyTurretA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"));
	outFields->push(HX_HCSTRING("justShot","\x46","\x51","\xe4","\xac"));
	outFields->push(HX_HCSTRING("shootDelay","\x24","\x9d","\xee","\xb3"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::objects::enemies::EnemyBullet*/ ,(int)offsetof(EnemyTurretA_obj,bullet),HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4")},
	{hx::fsBool,(int)offsetof(EnemyTurretA_obj,justShot),HX_HCSTRING("justShot","\x46","\x51","\xe4","\xac")},
	{hx::fsFloat,(int)offsetof(EnemyTurretA_obj,shootDelay),HX_HCSTRING("shootDelay","\x24","\x9d","\xee","\xb3")},
	{hx::fsInt,(int)offsetof(EnemyTurretA_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsInt,(int)offsetof(EnemyTurretA_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{hx::fsInt,(int)offsetof(EnemyTurretA_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &EnemyTurretA_obj::SCORE_AMOUNT,HX_HCSTRING("SCORE_AMOUNT","\x85","\xce","\x2a","\x54")},
	{hx::fsInt,(void *) &EnemyTurretA_obj::SHOOT_SPEED,HX_HCSTRING("SHOOT_SPEED","\xa7","\x29","\x69","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),
	HX_HCSTRING("justShot","\x46","\x51","\xe4","\xac"),
	HX_HCSTRING("shootDelay","\x24","\x9d","\xee","\xb3"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("animateToShoot","\xc3","\x21","\x19","\xab"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("adjustFlip","\xdc","\xfe","\xd3","\xe6"),
	HX_HCSTRING("chooseType","\x31","\x31","\xf2","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyTurretA_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnemyTurretA_obj::SCORE_AMOUNT,"SCORE_AMOUNT");
	HX_MARK_MEMBER_NAME(EnemyTurretA_obj::SHOOT_SPEED,"SHOOT_SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyTurretA_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnemyTurretA_obj::SCORE_AMOUNT,"SCORE_AMOUNT");
	HX_VISIT_MEMBER_NAME(EnemyTurretA_obj::SHOOT_SPEED,"SHOOT_SPEED");
};

#endif

hx::Class EnemyTurretA_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SCORE_AMOUNT","\x85","\xce","\x2a","\x54"),
	HX_HCSTRING("SHOOT_SPEED","\xa7","\x29","\x69","\x3c"),
	::String(null()) };

void EnemyTurretA_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyTurretA","\x6b","\x0d","\x84","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyTurretA_obj >;
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

void EnemyTurretA_obj::__boot()
{
	SCORE_AMOUNT= (int)100;
	SHOOT_SPEED= (int)150;
}

} // end namespace objects
} // end namespace enemies
