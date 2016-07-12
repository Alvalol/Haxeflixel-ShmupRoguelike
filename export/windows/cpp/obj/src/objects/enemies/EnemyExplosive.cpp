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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_objects_enemies_EnemyExplosive
#include <objects/enemies/EnemyExplosive.h>
#endif
#ifndef INCLUDED_objects_enemies_enemyobjects_EnemyExplosiveExplosion
#include <objects/enemies/enemyobjects/EnemyExplosiveExplosion.h>
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

Void EnemyExplosive_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.EnemyExplosive","new",0x4a66b9f1,"objects.enemies.EnemyExplosive.new","objects/enemies/EnemyExplosive.hx",12,0xe48ae35d)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(15)
	this->MOVE_SPEED = ((Float)0.5);
	HX_STACK_LINE(19)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(20)
	this->HP = (int)1;
	HX_STACK_LINE(21)
	this->makeGraphic((int)8,(int)8,(int)-256,null(),null());
	HX_STACK_LINE(22)
	this->set_immovable(true);
	HX_STACK_LINE(23)
	this->loadGraphic(HX_HCSTRING("assets/images/enemies.png","\x16","\x33","\xfe","\x81"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(24)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	tmp2->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)12,true,null(),null());
	HX_STACK_LINE(25)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	tmp3->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
}
;
	return null();
}

//EnemyExplosive_obj::~EnemyExplosive_obj() { }

Dynamic EnemyExplosive_obj::__CreateEmpty() { return  new EnemyExplosive_obj; }
hx::ObjectPtr< EnemyExplosive_obj > EnemyExplosive_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyExplosive_obj > _result_ = new EnemyExplosive_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyExplosive_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyExplosive_obj > _result_ = new EnemyExplosive_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyExplosive_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.EnemyExplosive","update",0xb6c22d18,"objects.enemies.EnemyExplosive.update","objects/enemies/EnemyExplosive.hx",30,0xe48ae35d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(31)
		bool tmp = this->_appeared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(33)
			this->move();
			HX_STACK_LINE(34)
			this->reachedScrollX();
		}
		HX_STACK_LINE(37)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		this->super::update(tmp1);
	}
return null();
}


Void EnemyExplosive_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyExplosive","kill",0xcd8354ed,"objects.enemies.EnemyExplosive.kill","objects/enemies/EnemyExplosive.hx",42,0xe48ae35d)
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
		this->super::kill();
	}
return null();
}


Void EnemyExplosive_obj::move( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyExplosive","move",0xceda5860,"objects.enemies.EnemyExplosive.move","objects/enemies/EnemyExplosive.hx",51,0xe48ae35d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::objects::enemies::EnemyExplosive _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		Float tmp = _g->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		Float tmp1 = this->MOVE_SPEED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		_g->set_x(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyExplosive_obj,move,(void))

Void EnemyExplosive_obj::reachedScrollX( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyExplosive","reachedScrollX",0xc66a8548,"objects.enemies.EnemyExplosive.reachedScrollX","objects/enemies/EnemyExplosive.hx",56,0xe48ae35d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = tmp1->scroll->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Float tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		bool tmp5 = (tmp < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		if ((tmp5)){
			HX_STACK_LINE(60)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::objects::enemies::enemyobjects::EnemyExplosiveExplosion tmp8 = ::objects::enemies::enemyobjects::EnemyExplosiveExplosion_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			::objects::enemies::enemyobjects::EnemyExplosiveExplosion bomb = tmp8;		HX_STACK_VAR(bomb,"bomb");
			HX_STACK_LINE(61)
			::states::PlayState tmp9 = ::Reg_obj::PS;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			::objects::enemies::enemyobjects::EnemyExplosiveExplosion tmp10 = bomb;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			tmp9->EExplosions->add(tmp10);
			HX_STACK_LINE(62)
			this->kill();
			HX_STACK_LINE(63)
			::flixel::FlxCamera tmp11 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			tmp11->shake(((Float)0.009),((Float)1.5),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyExplosive_obj,reachedScrollX,(void))


EnemyExplosive_obj::EnemyExplosive_obj()
{
}

Dynamic EnemyExplosive_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { return MOVE_SPEED; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"reachedScrollX") ) { return reachedScrollX_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyExplosive_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { MOVE_SPEED=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyExplosive_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(EnemyExplosive_obj,MOVE_SPEED),HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("reachedScrollX","\x39","\xb7","\x09","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyExplosive_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyExplosive_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyExplosive_obj::__mClass;

void EnemyExplosive_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyExplosive","\x7f","\xed","\x4c","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyExplosive_obj >;
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
