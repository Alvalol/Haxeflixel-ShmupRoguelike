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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
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
#ifndef INCLUDED_objects_PlayerBullet
#include <objects/PlayerBullet.h>
#endif
#ifndef INCLUDED_objects_effects_NoHit
#include <objects/effects/NoHit.h>
#endif
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardBlock
#include <objects/hazards/HazardBlock.h>
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
#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#include <utils/pcg/LevelLoaderProc.h>
#endif
namespace objects{

Void PlayerBullet_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.PlayerBullet","new",0x6bfbcfef,"objects.PlayerBullet.new","objects/PlayerBullet.hx",19,0xbfa2eb80)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(21)
	this->loadGraphic(HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(22)
	this->set_height((int)2);
	HX_STACK_LINE(23)
	this->set_width((int)8);
	HX_STACK_LINE(24)
	this->centerOffsets(null());
	HX_STACK_LINE(25)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	tmp2->add(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),Array_obj< int >::__new().Add((int)16),null(),null(),null(),null());
	HX_STACK_LINE(26)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	tmp3->play(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),null(),null(),null());
}
;
	return null();
}

//PlayerBullet_obj::~PlayerBullet_obj() { }

Dynamic PlayerBullet_obj::__CreateEmpty() { return  new PlayerBullet_obj; }
hx::ObjectPtr< PlayerBullet_obj > PlayerBullet_obj::__new(Float x,Float y)
{  hx::ObjectPtr< PlayerBullet_obj > _result_ = new PlayerBullet_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic PlayerBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerBullet_obj > _result_ = new PlayerBullet_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void PlayerBullet_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.PlayerBullet","update",0x89ac69da,"objects.PlayerBullet.update","objects/PlayerBullet.hx",30,0xbfa2eb80)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(31)
		this->collisions();
		HX_STACK_LINE(32)
		this->move();
		HX_STACK_LINE(34)
		bool tmp = ::Reg_obj::pause;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(35)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			this->super::update(tmp2);
		}
	}
return null();
}


Void PlayerBullet_obj::collisions( ){
{
		HX_STACK_FRAME("objects.PlayerBullet","collisions",0x922c5c12,"objects.PlayerBullet.collisions","objects/PlayerBullet.hx",39,0xbfa2eb80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::flixel::group::FlxTypedGroupIterator tmp1 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp->blocks->members,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		for(::cpp::FastIterator_obj< ::objects::hazards::HazardBlock > *__it = ::cpp::CreateFastIterator< ::objects::hazards::HazardBlock >(tmp1);  __it->hasNext(); ){
			::objects::hazards::HazardBlock block = __it->next();
			{
				HX_STACK_LINE(42)
				::objects::hazards::HazardBlock tmp2 = block;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(42)
				bool tmp3 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(42)
				if ((tmp3)){
					HX_STACK_LINE(44)
					::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(44)
					::objects::items::CoinItem tmp5 = tmp4->coins->recycle(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(44)
					::objects::items::CoinItem newCoin = tmp5;		HX_STACK_VAR(newCoin,"newCoin");
					HX_STACK_LINE(45)
					bool tmp6 = (newCoin == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					if ((tmp6)){
						HX_STACK_LINE(46)
						Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(46)
						Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(46)
						::objects::items::CoinItem tmp9 = ::objects::items::CoinItem_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(46)
						newCoin = tmp9;
					}
					HX_STACK_LINE(48)
					Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(48)
					Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					newCoin->reset(tmp7,tmp8);
					HX_STACK_LINE(49)
					::states::PlayState tmp9 = ::Reg_obj::PS;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(49)
					::objects::items::CoinItem tmp10 = newCoin;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(49)
					tmp9->coins->add(tmp10);
					HX_STACK_LINE(50)
					this->kill();
					HX_STACK_LINE(51)
					block->kill();
				}
			}
;
		}
		HX_STACK_LINE(55)
		::states::PlayState tmp2 = ::Reg_obj::PS;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::flixel::group::FlxTypedGroupIterator tmp3 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp2->hazards->members,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		for(::cpp::FastIterator_obj< ::objects::hazards::Hazard > *__it = ::cpp::CreateFastIterator< ::objects::hazards::Hazard >(tmp3);  __it->hasNext(); ){
			::objects::hazards::Hazard hazard = __it->next();
			{
				HX_STACK_LINE(57)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
					HX_STACK_LINE(57)
					::objects::hazards::Hazard tmp5 = hazard;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					int tmp6 = AlphaTolerance;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					tmp4 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp5,hx::ObjectPtr<OBJ_>(this),tmp6,null());
				}
				HX_STACK_LINE(57)
				if ((tmp4)){
					HX_STACK_LINE(59)
					this->kill();
					HX_STACK_LINE(60)
					this->createNoHit();
				}
			}
;
		}
		HX_STACK_LINE(64)
		::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::flixel::tile::FlxTilemap tmp5 = tmp4->map->loadedMap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		Dynamic tmp6 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		bool tmp7 = ::flixel::FlxG_obj::overlap(tmp5,hx::ObjectPtr<OBJ_>(this),null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		if ((tmp7)){
			HX_STACK_LINE(66)
			this->kill();
			HX_STACK_LINE(67)
			this->createNoHit();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerBullet_obj,collisions,(void))

Void PlayerBullet_obj::move( ){
{
		HX_STACK_FRAME("objects.PlayerBullet","move",0x0fb880a2,"objects.PlayerBullet.move","objects/PlayerBullet.hx",74,0xbfa2eb80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::flixel::math::FlxPoint tmp = this->velocity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		tmp->set_x((int)250);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerBullet_obj,move,(void))

Void PlayerBullet_obj::revive( ){
{
		HX_STACK_FRAME("objects.PlayerBullet","revive",0x0d1dde26,"objects.PlayerBullet.revive","objects/PlayerBullet.hx",79,0xbfa2eb80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		::objects::PlayerBullet _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		::flixel::util::FlxTimer tmp = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		Float tmp2 = tmp1->player->RANGE;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::objects::PlayerBullet,_g)
		int __ArgCount() const { return 1; }
		Void run(::flixel::util::FlxTimer _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","objects/PlayerBullet.hx",82,0xbfa2eb80)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(82)
				_g->kill();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		tmp->start(tmp2, Dynamic(new _Function_1_1(_g)),(int)1);
		HX_STACK_LINE(84)
		this->super::revive();
	}
return null();
}


Void PlayerBullet_obj::createNoHit( ){
{
		HX_STACK_FRAME("objects.PlayerBullet","createNoHit",0x003d5a85,"objects.PlayerBullet.createNoHit","objects/PlayerBullet.hx",88,0xbfa2eb80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		Float tmp2 = (tmp1 - (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		::objects::effects::NoHit tmp3 = ::objects::effects::NoHit_obj::__new(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		::objects::effects::NoHit e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(90)
		::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		::objects::effects::NoHit tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		tmp4->effects->add(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerBullet_obj,createNoHit,(void))

Void PlayerBullet_obj::kill( ){
{
		HX_STACK_FRAME("objects.PlayerBullet","kill",0x0e617d2f,"objects.PlayerBullet.kill","objects/PlayerBullet.hx",96,0xbfa2eb80)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->super::kill();
	}
return null();
}


int PlayerBullet_obj::MOVE_SPEED;


PlayerBullet_obj::PlayerBullet_obj()
{
}

Dynamic PlayerBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"revive") ) { return revive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createNoHit") ) { return createNoHit_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PlayerBullet_obj::MOVE_SPEED,HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("revive","\x55","\xfa","\x76","\x0a"),
	HX_HCSTRING("createNoHit","\xf6","\xb3","\x24","\xc9"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerBullet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayerBullet_obj::MOVE_SPEED,"MOVE_SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerBullet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayerBullet_obj::MOVE_SPEED,"MOVE_SPEED");
};

#endif

hx::Class PlayerBullet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"),
	::String(null()) };

void PlayerBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.PlayerBullet","\x7d","\xac","\xe3","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerBullet_obj >;
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

void PlayerBullet_obj::__boot()
{
	MOVE_SPEED= (int)250;
}

} // end namespace objects
