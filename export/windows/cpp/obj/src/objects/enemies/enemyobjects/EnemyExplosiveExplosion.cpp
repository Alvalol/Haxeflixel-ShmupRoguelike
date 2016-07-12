#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_enemies_enemyobjects_EnemyExplosiveExplosion
#include <objects/enemies/enemyobjects/EnemyExplosiveExplosion.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace enemies{
namespace enemyobjects{

Void EnemyExplosiveExplosion_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.enemyobjects.EnemyExplosiveExplosion","new",0x2cb1482a,"objects.enemies.enemyobjects.EnemyExplosiveExplosion.new","objects/enemies/enemyobjects/EnemyExplosiveExplosion.hx",11,0x967d7b05)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(10)
	::objects::enemies::enemyobjects::EnemyExplosiveExplosion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(13)
	int tmp2 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	this->makeGraphic(tmp2,(int)20,(int)-1,null(),null());
	HX_STACK_LINE(14)
	this->set_immovable(true);
	HX_STACK_LINE(15)
	::flixel::util::FlxTimer tmp3 = ::flixel::util::FlxTimer_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::objects::enemies::enemyobjects::EnemyExplosiveExplosion,_g)
	int __ArgCount() const { return 1; }
	Void run(::flixel::util::FlxTimer _){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","objects/enemies/enemyobjects/EnemyExplosiveExplosion.hx",17,0x967d7b05)
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(17)
			_g->kill();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(15)
	tmp3->start(((Float)1.5), Dynamic(new _Function_1_1(_g)),(int)1);
}
;
	return null();
}

//EnemyExplosiveExplosion_obj::~EnemyExplosiveExplosion_obj() { }

Dynamic EnemyExplosiveExplosion_obj::__CreateEmpty() { return  new EnemyExplosiveExplosion_obj; }
hx::ObjectPtr< EnemyExplosiveExplosion_obj > EnemyExplosiveExplosion_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyExplosiveExplosion_obj > _result_ = new EnemyExplosiveExplosion_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyExplosiveExplosion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyExplosiveExplosion_obj > _result_ = new EnemyExplosiveExplosion_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyExplosiveExplosion_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.enemyobjects.EnemyExplosiveExplosion","update",0xe0b1887f,"objects.enemies.enemyobjects.EnemyExplosiveExplosion.update","objects/enemies/enemyobjects/EnemyExplosiveExplosion.hx",22,0x967d7b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(24)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::objects::Player tmp1 = tmp->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		bool tmp2 = ::flixel::FlxG_obj::overlap(tmp1,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(25)
			::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			::objects::Player tmp4 = tmp3->player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			this->interact(tmp4);
		}
		HX_STACK_LINE(28)
		bool tmp3 = ::Reg_obj::pause;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		if ((tmp4)){
			HX_STACK_LINE(29)
			Float tmp5 = elapsed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			this->super::update(tmp5);
		}
	}
return null();
}


Void EnemyExplosiveExplosion_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.enemies.enemyobjects.EnemyExplosiveExplosion","interact",0x46f697ac,"objects.enemies.enemyobjects.EnemyExplosiveExplosion.interact","objects/enemies/enemyobjects/EnemyExplosiveExplosion.hx",34,0x967d7b05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(34)
		player->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(EnemyExplosiveExplosion_obj,interact,(void))


EnemyExplosiveExplosion_obj::EnemyExplosiveExplosion_obj()
{
}

Dynamic EnemyExplosiveExplosion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyExplosiveExplosion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyExplosiveExplosion_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyExplosiveExplosion_obj::__mClass;

void EnemyExplosiveExplosion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.enemyobjects.EnemyExplosiveExplosion","\x38","\xab","\xd3","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyExplosiveExplosion_obj >;
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
} // end namespace enemyobjects
