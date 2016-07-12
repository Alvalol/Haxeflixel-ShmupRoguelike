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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyLeft
#include <objects/enemies/EnemyLeft.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMover
#include <objects/enemies/EnemyMover.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMoverGroup
#include <objects/enemies/EnemyMoverGroup.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMultishotDeath
#include <objects/enemies/EnemyMultishotDeath.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyTurretA
#include <objects/enemies/EnemyTurretA.h>
#endif
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardBlock
#include <objects/hazards/HazardBlock.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardHorizontalBlock
#include <objects/hazards/HazardHorizontalBlock.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardLaser
#include <objects/hazards/HazardLaser.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelEnemies
#include <utils/pcg/LevelEnemies.h>
#endif
namespace utils{
namespace pcg{

Void LevelEnemies_obj::__construct()
{
HX_STACK_FRAME("utils.pcg.LevelEnemies","new",0xdca8c98b,"utils.pcg.LevelEnemies.new","utils/pcg/LevelEnemies.hx",23,0xed22be03)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LevelEnemies_obj::~LevelEnemies_obj() { }

Dynamic LevelEnemies_obj::__CreateEmpty() { return  new LevelEnemies_obj; }
hx::ObjectPtr< LevelEnemies_obj > LevelEnemies_obj::__new()
{  hx::ObjectPtr< LevelEnemies_obj > _result_ = new LevelEnemies_obj();
	_result_->__construct();
	return _result_;}

Dynamic LevelEnemies_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LevelEnemies_obj > _result_ = new LevelEnemies_obj();
	_result_->__construct();
	return _result_;}

Void LevelEnemies_obj::populateEnemies( ::flixel::tile::FlxTilemap currentLevel){
{
		HX_STACK_FRAME("utils.pcg.LevelEnemies","populateEnemies",0x24637087,"utils.pcg.LevelEnemies.populateEnemies","utils/pcg/LevelEnemies.hx",29,0xed22be03)
		HX_STACK_ARG(currentLevel,"currentLevel")
		HX_STACK_LINE(29)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		int _g = currentLevel->totalTiles;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		while((true)){
			HX_STACK_LINE(29)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(29)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(29)
			if ((tmp1)){
				HX_STACK_LINE(29)
				break;
			}
			HX_STACK_LINE(29)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(29)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(31)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			Float tmp4 = tmp3->scroll->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			Float tmp7 = (tmp6 + (int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(31)
			::flixel::math::FlxPoint tmp9 = currentLevel->getTileCoordsByIndex(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(31)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(31)
			bool tmp11 = (tmp7 >= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(31)
			if ((tmp11)){
				HX_STACK_LINE(35)
				int tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				int tmp13 = currentLevel->getTileByIndex(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				bool tmp14 = (tmp13 == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				if ((tmp14)){
					HX_STACK_LINE(37)
					int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(37)
					currentLevel->setTileByIndex(tmp15,(int)0,true);
					HX_STACK_LINE(38)
					int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(38)
					::flixel::math::FlxPoint tmp17 = currentLevel->getTileCoordsByIndex(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(38)
					::flixel::math::FlxPoint enPos = tmp17;		HX_STACK_VAR(enPos,"enPos");
					HX_STACK_LINE(39)
					Float tmp18 = (enPos->x - (int)4);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(39)
					Float tmp19 = (enPos->y - (int)4);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(39)
					::objects::hazards::HazardBlock tmp20 = ::objects::hazards::HazardBlock_obj::__new(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(39)
					::objects::hazards::HazardBlock destructible = tmp20;		HX_STACK_VAR(destructible,"destructible");
					HX_STACK_LINE(41)
					::states::PlayState tmp21 = ::Reg_obj::PS;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(41)
					::objects::hazards::HazardBlock tmp22 = destructible;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(41)
					tmp21->blocks->add(tmp22);
				}
				HX_STACK_LINE(45)
				int tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				int tmp16 = currentLevel->getTileByIndex(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				bool tmp17 = (tmp16 == (int)3);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(45)
				if ((tmp17)){
					HX_STACK_LINE(47)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(47)
					currentLevel->setTileByIndex(tmp18,(int)0,true);
					HX_STACK_LINE(48)
					int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(48)
					::flixel::math::FlxPoint tmp20 = currentLevel->getTileCoordsByIndex(tmp19,null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(48)
					::flixel::math::FlxPoint enPos = tmp20;		HX_STACK_VAR(enPos,"enPos");
					HX_STACK_LINE(49)
					Float tmp21 = (enPos->x - (int)4);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(49)
					Float tmp22 = (enPos->y - (int)4);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(49)
					::objects::enemies::EnemyTurretA tmp23 = ::objects::enemies::EnemyTurretA_obj::__new(tmp21,tmp22,false);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(49)
					::objects::enemies::EnemyTurretA en = tmp23;		HX_STACK_VAR(en,"en");
					HX_STACK_LINE(50)
					::states::PlayState tmp24 = ::Reg_obj::PS;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(50)
					::objects::enemies::EnemyTurretA tmp25 = en;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(50)
					tmp24->enemies->add(tmp25);
				}
				HX_STACK_LINE(53)
				int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(53)
				int tmp19 = currentLevel->getTileByIndex(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(53)
				bool tmp20 = (tmp19 == (int)4);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(53)
				if ((tmp20)){
					HX_STACK_LINE(55)
					int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(55)
					currentLevel->setTileByIndex(tmp21,(int)0,true);
					HX_STACK_LINE(56)
					int tmp22 = i;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(56)
					::flixel::math::FlxPoint tmp23 = currentLevel->getTileCoordsByIndex(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(56)
					::flixel::math::FlxPoint enPos = tmp23;		HX_STACK_VAR(enPos,"enPos");
					HX_STACK_LINE(57)
					::objects::enemies::EnemyMoverGroup tmp24 = ::objects::enemies::EnemyMoverGroup_obj::__new(enPos->x,enPos->y);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(57)
					::objects::enemies::EnemyMoverGroup enGroup = tmp24;		HX_STACK_VAR(enGroup,"enGroup");
					HX_STACK_LINE(58)
					::flixel::group::FlxTypedGroupIterator tmp25 = ::flixel::group::FlxTypedGroupIterator_obj::__new(enGroup->chainedGroup->members,null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(58)
					for(::cpp::FastIterator_obj< ::objects::enemies::EnemyMover > *__it = ::cpp::CreateFastIterator< ::objects::enemies::EnemyMover >(tmp25);  __it->hasNext(); ){
						::objects::enemies::EnemyMover enemy = __it->next();
						{
							HX_STACK_LINE(60)
							::states::PlayState tmp26 = ::Reg_obj::PS;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(60)
							::objects::enemies::EnemyMover tmp27 = enemy;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(60)
							tmp26->enemies->add(tmp27);
						}
;
					}
				}
				HX_STACK_LINE(64)
				int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(64)
				int tmp22 = currentLevel->getTileByIndex(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(64)
				bool tmp23 = (tmp22 == (int)5);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(64)
				if ((tmp23)){
					HX_STACK_LINE(66)
					int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(66)
					::flixel::math::FlxPoint tmp25 = currentLevel->getTileCoordsByIndex(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(66)
					::flixel::math::FlxPoint enPos = tmp25;		HX_STACK_VAR(enPos,"enPos");
					HX_STACK_LINE(67)
					int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(67)
					currentLevel->setTileByIndex(tmp26,(int)0,true);
					HX_STACK_LINE(69)
					::flixel::math::FlxRandom tmp27 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					int tmp28 = tmp27->_int((int)0,(int)100,null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(69)
					int roll = tmp28;		HX_STACK_VAR(roll,"roll");
					HX_STACK_LINE(70)
					bool tmp29 = (roll > (int)50);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(70)
					if ((tmp29)){
						HX_STACK_LINE(71)
						::objects::enemies::EnemyLeft tmp30 = ::objects::enemies::EnemyLeft_obj::__new(enPos->x,enPos->y);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(71)
						::objects::enemies::EnemyLeft enemy = tmp30;		HX_STACK_VAR(enemy,"enemy");
						HX_STACK_LINE(72)
						::states::PlayState tmp31 = ::Reg_obj::PS;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(72)
						::objects::enemies::EnemyLeft tmp32 = enemy;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(72)
						tmp31->enemies->add(tmp32);
					}
					else{
						HX_STACK_LINE(76)
						::objects::enemies::EnemyMultishotDeath tmp30 = ::objects::enemies::EnemyMultishotDeath_obj::__new(enPos->x,enPos->y);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(76)
						::objects::enemies::EnemyMultishotDeath enemy = tmp30;		HX_STACK_VAR(enemy,"enemy");
						HX_STACK_LINE(77)
						::states::PlayState tmp31 = ::Reg_obj::PS;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(77)
						::objects::enemies::EnemyMultishotDeath tmp32 = enemy;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(77)
						tmp31->enemies->add(tmp32);
					}
				}
				HX_STACK_LINE(81)
				int tmp24 = i;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(81)
				int tmp25 = currentLevel->getTileByIndex(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(81)
				bool tmp26 = (tmp25 == (int)6);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(81)
				if ((tmp26)){
					HX_STACK_LINE(83)
					int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(83)
					currentLevel->setTileByIndex(tmp27,(int)0,true);
					HX_STACK_LINE(84)
					int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(84)
					::flixel::math::FlxPoint tmp29 = currentLevel->getTileCoordsByIndex(tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(84)
					::flixel::math::FlxPoint enPos = tmp29;		HX_STACK_VAR(enPos,"enPos");
					HX_STACK_LINE(85)
					Float tmp30 = (enPos->x - (int)4);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(85)
					Float tmp31 = enPos->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(85)
					::objects::hazards::HazardHorizontalBlock tmp32 = ::objects::hazards::HazardHorizontalBlock_obj::__new(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(85)
					::objects::hazards::HazardHorizontalBlock haz = tmp32;		HX_STACK_VAR(haz,"haz");
					HX_STACK_LINE(86)
					::states::PlayState tmp33 = ::Reg_obj::PS;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(86)
					::objects::hazards::HazardHorizontalBlock tmp34 = haz;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(86)
					tmp33->hazards->add(tmp34);
				}
				HX_STACK_LINE(88)
				int tmp27 = i;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(88)
				int tmp28 = currentLevel->getTileByIndex(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(88)
				bool tmp29 = (tmp28 == (int)7);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(88)
				if ((tmp29)){
					HX_STACK_LINE(90)
					int tmp30 = i;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(90)
					currentLevel->setTileByIndex(tmp30,(int)0,true);
					HX_STACK_LINE(91)
					int tmp31 = i;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(91)
					::flixel::math::FlxPoint tmp32 = currentLevel->getTileCoordsByIndex(tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(91)
					::flixel::math::FlxPoint enPos = tmp32;		HX_STACK_VAR(enPos,"enPos");
					HX_STACK_LINE(92)
					::objects::hazards::HazardLaser tmp33 = ::objects::hazards::HazardLaser_obj::__new(enPos->x,(int)8);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(92)
					::objects::hazards::HazardLaser haz = tmp33;		HX_STACK_VAR(haz,"haz");
					HX_STACK_LINE(93)
					::states::PlayState tmp34 = ::Reg_obj::PS;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(93)
					::objects::hazards::HazardLaser tmp35 = haz;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(93)
					tmp34->hazards->add(tmp35);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LevelEnemies_obj,populateEnemies,(void))


LevelEnemies_obj::LevelEnemies_obj()
{
}

bool LevelEnemies_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"populateEnemies") ) { outValue = populateEnemies_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LevelEnemies_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LevelEnemies_obj::__mClass,"__mClass");
};

#endif

hx::Class LevelEnemies_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("populateEnemies","\xdc","\xe2","\xa7","\x28"),
	::String(null()) };

void LevelEnemies_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("utils.pcg.LevelEnemies","\x19","\xa8","\x74","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LevelEnemies_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LevelEnemies_obj >;
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

} // end namespace utils
} // end namespace pcg
