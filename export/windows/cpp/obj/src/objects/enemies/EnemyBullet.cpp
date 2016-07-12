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
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_effects_NoHit
#include <objects/effects/NoHit.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyBullet
#include <objects/enemies/EnemyBullet.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#include <utils/pcg/LevelLoaderProc.h>
#endif
namespace objects{
namespace enemies{

Void EnemyBullet_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.EnemyBullet","new",0x5354c71a,"objects.enemies.EnemyBullet.new","objects/enemies/EnemyBullet.hx",16,0x87348218)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(17)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(18)
	this->loadGraphic(HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(19)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	tmp2->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)14).Add((int)15),(int)8,true,null(),null());
	HX_STACK_LINE(20)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	tmp3->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
	HX_STACK_LINE(22)
	this->set_width((int)8);
	HX_STACK_LINE(23)
	this->set_height((int)8);
	HX_STACK_LINE(25)
	this->createTrail();
}
;
	return null();
}

//EnemyBullet_obj::~EnemyBullet_obj() { }

Dynamic EnemyBullet_obj::__CreateEmpty() { return  new EnemyBullet_obj; }
hx::ObjectPtr< EnemyBullet_obj > EnemyBullet_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyBullet_obj > _result_ = new EnemyBullet_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyBullet_obj > _result_ = new EnemyBullet_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyBullet_obj::createTrail( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyBullet","createTrail",0xd0e80be4,"objects.enemies.EnemyBullet.createTrail","objects/enemies/EnemyBullet.hx",29,0x87348218)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::flixel::addons::effects::FlxTrail tmp = ::flixel::addons::effects::FlxTrail_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),(int)10,(int)1,((Float)0.3),((Float)0.05));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		this->bTrail = tmp;
		HX_STACK_LINE(31)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		::flixel::addons::effects::FlxTrail tmp2 = this->bTrail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		tmp1->effects->add(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyBullet_obj,createTrail,(void))

Void EnemyBullet_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.EnemyBullet","update",0x2973ff8f,"objects.enemies.EnemyBullet.update","objects/enemies/EnemyBullet.hx",35,0x87348218)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(36)
		this->collisions();
		HX_STACK_LINE(38)
		bool tmp = ::Reg_obj::pause;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(39)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			this->super::update(tmp2);
		}
	}
return null();
}


Void EnemyBullet_obj::collisions( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyBullet","collisions",0x0d697047,"objects.enemies.EnemyBullet.collisions","objects/enemies/EnemyBullet.hx",44,0x87348218)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::flixel::group::FlxTypedGroup tmp1 = tmp->blocks;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		::flixel::group::FlxTypedGroup tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		bool tmp3 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		if ((tmp4)){
			HX_STACK_LINE(46)
			::states::PlayState tmp6 = ::Reg_obj::PS;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			::states::PlayState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			::flixel::group::FlxTypedGroup tmp8 = tmp7->hazards;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			::flixel::group::FlxTypedGroup tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			tmp5 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp9,null(),null());
		}
		else{
			HX_STACK_LINE(46)
			tmp5 = true;
		}
		HX_STACK_LINE(46)
		if ((tmp5)){
			HX_STACK_LINE(48)
			this->createNoHit();
			HX_STACK_LINE(49)
			this->kill();
		}
		HX_STACK_LINE(52)
		bool tmp6 = this->isOnScreen(null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(52)
		if ((tmp9)){
			HX_STACK_LINE(52)
			::states::PlayState tmp11 = ::Reg_obj::PS;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			::states::PlayState tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			::flixel::tile::FlxTilemap tmp13 = tmp12->map->loadedMap;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(52)
			::flixel::tile::FlxTilemap tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(52)
			Dynamic tmp15 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(52)
			::flixel::tile::FlxTilemap tmp17 = tmp14;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(52)
			Dynamic tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(52)
			tmp10 = ::flixel::FlxG_obj::overlap(tmp17,hx::ObjectPtr<OBJ_>(this),null(),tmp18);
		}
		else{
			HX_STACK_LINE(52)
			tmp10 = true;
		}
		HX_STACK_LINE(52)
		if ((tmp10)){
			HX_STACK_LINE(54)
			this->createNoHit();
			HX_STACK_LINE(55)
			this->kill();
		}
		HX_STACK_LINE(58)
		::states::PlayState tmp11 = ::Reg_obj::PS;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		::objects::Player tmp12 = tmp11->player;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		bool tmp13 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		if ((tmp13)){
			HX_STACK_LINE(60)
			::states::PlayState tmp14 = ::Reg_obj::PS;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(60)
			::objects::Player tmp15 = tmp14->player;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(60)
			this->interact(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyBullet_obj,collisions,(void))

Void EnemyBullet_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.enemies.EnemyBullet","interact",0x1e90f2bc,"objects.enemies.EnemyBullet.interact","objects/enemies/EnemyBullet.hx",66,0x87348218)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(67)
		this->kill();
		HX_STACK_LINE(68)
		player->damage();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnemyBullet_obj,interact,(void))

Void EnemyBullet_obj::createNoHit( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyBullet","createNoHit",0x5a71f4b0,"objects.enemies.EnemyBullet.createNoHit","objects/enemies/EnemyBullet.hx",72,0x87348218)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::objects::effects::NoHit tmp2 = ::objects::effects::NoHit_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::objects::effects::NoHit e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(74)
		::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		::objects::effects::NoHit tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		tmp3->effects->add(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyBullet_obj,createNoHit,(void))

Void EnemyBullet_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyBullet","kill",0x94e0cba4,"objects.enemies.EnemyBullet.kill","objects/enemies/EnemyBullet.hx",78,0x87348218)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		tmp->EBullets->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(80)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::flixel::addons::effects::FlxTrail tmp2 = this->bTrail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		tmp1->effects->remove(tmp2,true);
		HX_STACK_LINE(81)
		this->super::kill();
	}
return null();
}



EnemyBullet_obj::EnemyBullet_obj()
{
}

void EnemyBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnemyBullet);
	HX_MARK_MEMBER_NAME(bTrail,"bTrail");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnemyBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bTrail,"bTrail");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnemyBullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bTrail") ) { return bTrail; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createTrail") ) { return createTrail_dyn(); }
		if (HX_FIELD_EQ(inName,"createNoHit") ) { return createNoHit_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyBullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bTrail") ) { bTrail=inValue.Cast< ::flixel::addons::effects::FlxTrail >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::effects::FlxTrail*/ ,(int)offsetof(EnemyBullet_obj,bTrail),HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8"),
	HX_HCSTRING("createTrail","\x2a","\xcb","\x9a","\x3f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	HX_HCSTRING("createNoHit","\xf6","\xb3","\x24","\xc9"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyBullet_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyBullet_obj::__mClass;

void EnemyBullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyBullet","\x28","\xf2","\x30","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyBullet_obj >;
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
