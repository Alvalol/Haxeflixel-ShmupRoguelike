#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyMover
#include <objects/enemies/EnemyMover.h>
#endif
#ifndef INCLUDED_objects_items_HealthItem
#include <objects/items/HealthItem.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_objects_items_RangeItem
#include <objects/items/RangeItem.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace enemies{

Void EnemyMover_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.EnemyMover","new",0x4caf358d,"objects.enemies.EnemyMover.new","objects/enemies/EnemyMover.hx",14,0x02bc1841)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(18)
	this->MOVE_SPEED = ((Float)0.5);
	HX_STACK_LINE(17)
	this->factor = (int)0;
	HX_STACK_LINE(16)
	this->sinfact = ((Float)0);
	HX_STACK_LINE(24)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(25)
	this->HP = (int)1;
	HX_STACK_LINE(26)
	this->loadGraphic(HX_HCSTRING("assets/images/enemies.png","\x16","\x33","\xfe","\x81"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(27)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	tmp2->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)16),null(),null(),null(),null());
	HX_STACK_LINE(28)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	tmp3->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
	HX_STACK_LINE(30)
	this->createTrail();
}
;
	return null();
}

//EnemyMover_obj::~EnemyMover_obj() { }

Dynamic EnemyMover_obj::__CreateEmpty() { return  new EnemyMover_obj; }
hx::ObjectPtr< EnemyMover_obj > EnemyMover_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyMover_obj > _result_ = new EnemyMover_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyMover_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyMover_obj > _result_ = new EnemyMover_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyMover_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.EnemyMover","update",0x05d5dafc,"objects.enemies.EnemyMover.update","objects/enemies/EnemyMover.hx",34,0x02bc1841)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(35)
		bool tmp = this->_appeared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		if ((tmp)){
			HX_STACK_LINE(37)
			this->move();
		}
		HX_STACK_LINE(39)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		this->super::update(tmp1);
	}
return null();
}


Void EnemyMover_obj::createTrail( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyMover","createTrail",0x31d2a557,"objects.enemies.EnemyMover.createTrail","objects/enemies/EnemyMover.hx",43,0x02bc1841)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::flixel::addons::effects::FlxTrail tmp = ::flixel::addons::effects::FlxTrail_obj::__new(hx::ObjectPtr<OBJ_>(this),null(),(int)4,(int)1,((Float)0.4),((Float)0.05));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		this->bTrail = tmp;
		HX_STACK_LINE(45)
		::states::PlayState tmp1 = ::Reg_obj::PS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::flixel::addons::effects::FlxTrail tmp2 = this->bTrail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		tmp1->effects->add(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyMover_obj,createTrail,(void))

Void EnemyMover_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyMover","kill",0xcaa701d1,"objects.enemies.EnemyMover.kill","objects/enemies/EnemyMover.hx",49,0x02bc1841)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::objects::items::HealthItem tmp2 = ::objects::items::HealthItem_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::objects::items::RangeItem tmp5 = ::objects::items::RangeItem_obj::__new(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		this->drops = Array_obj< ::Dynamic >::__new().Add(tmp2).Add(tmp5);
		HX_STACK_LINE(51)
		this->dropItem(this->drops);
		HX_STACK_LINE(52)
		::states::PlayState tmp6 = ::Reg_obj::PS;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		::flixel::addons::effects::FlxTrail tmp7 = this->bTrail;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		tmp6->effects->remove(tmp7,null());
		HX_STACK_LINE(53)
		this->super::kill();
	}
return null();
}


Void EnemyMover_obj::move( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyMover","move",0xcbfe0544,"objects.enemies.EnemyMover.move","objects/enemies/EnemyMover.hx",58,0x02bc1841)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		int tmp = this->factor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		Float tmp1 = (tmp * ((Float).02));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		hx::AddEq(this->sinfact,tmp3);
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::objects::enemies::EnemyMover _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			Float tmp4 = _g->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			Float tmp5 = this->sinfact;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			Float tmp6 = ::Math_obj::sin(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			_g->set_y(tmp7);
		}
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::objects::enemies::EnemyMover _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			Float tmp4 = _g->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			Float tmp5 = this->MOVE_SPEED;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			_g->set_x(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyMover_obj,move,(void))


EnemyMover_obj::EnemyMover_obj()
{
}

void EnemyMover_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnemyMover);
	HX_MARK_MEMBER_NAME(sinfact,"sinfact");
	HX_MARK_MEMBER_NAME(factor,"factor");
	HX_MARK_MEMBER_NAME(MOVE_SPEED,"MOVE_SPEED");
	HX_MARK_MEMBER_NAME(bTrail,"bTrail");
	::objects::enemies::Enemy_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EnemyMover_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sinfact,"sinfact");
	HX_VISIT_MEMBER_NAME(factor,"factor");
	HX_VISIT_MEMBER_NAME(MOVE_SPEED,"MOVE_SPEED");
	HX_VISIT_MEMBER_NAME(bTrail,"bTrail");
	::objects::enemies::Enemy_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EnemyMover_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"factor") ) { return factor; }
		if (HX_FIELD_EQ(inName,"bTrail") ) { return bTrail; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sinfact") ) { return sinfact; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { return MOVE_SPEED; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createTrail") ) { return createTrail_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyMover_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"factor") ) { factor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bTrail") ) { bTrail=inValue.Cast< ::flixel::addons::effects::FlxTrail >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sinfact") ) { sinfact=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { MOVE_SPEED=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyMover_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sinfact","\xc4","\xbf","\x66","\x43"));
	outFields->push(HX_HCSTRING("factor","\xcf","\x98","\x0d","\xe4"));
	outFields->push(HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"));
	outFields->push(HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(EnemyMover_obj,sinfact),HX_HCSTRING("sinfact","\xc4","\xbf","\x66","\x43")},
	{hx::fsInt,(int)offsetof(EnemyMover_obj,factor),HX_HCSTRING("factor","\xcf","\x98","\x0d","\xe4")},
	{hx::fsFloat,(int)offsetof(EnemyMover_obj,MOVE_SPEED),HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56")},
	{hx::fsObject /*::flixel::addons::effects::FlxTrail*/ ,(int)offsetof(EnemyMover_obj,bTrail),HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sinfact","\xc4","\xbf","\x66","\x43"),
	HX_HCSTRING("factor","\xcf","\x98","\x0d","\xe4"),
	HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"),
	HX_HCSTRING("bTrail","\x04","\x60","\x46","\xd8"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("createTrail","\x2a","\xcb","\x9a","\x3f"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyMover_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyMover_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyMover_obj::__mClass;

void EnemyMover_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyMover","\x1b","\x6b","\x10","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyMover_obj >;
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
