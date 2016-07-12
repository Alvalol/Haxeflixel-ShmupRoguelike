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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_effects_Explosion
#include <objects/effects/Explosion.h>
#endif
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardBlock
#include <objects/hazards/HazardBlock.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace hazards{

Void HazardBlock_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.hazards.HazardBlock","new",0xbc792346,"objects.hazards.HazardBlock.new","objects/hazards/HazardBlock.hx",11,0x9573cf6c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(12)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(13)
	this->loadGraphic(HX_HCSTRING("assets/images/solid.png","\xdb","\xbd","\x79","\x70"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(14)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	tmp2->add(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),Array_obj< int >::__new().Add((int)1),null(),null(),null(),null());
	HX_STACK_LINE(15)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	tmp3->play(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),null(),null(),null());
	HX_STACK_LINE(16)
	this->set_immovable(true);
}
;
	return null();
}

//HazardBlock_obj::~HazardBlock_obj() { }

Dynamic HazardBlock_obj::__CreateEmpty() { return  new HazardBlock_obj; }
hx::ObjectPtr< HazardBlock_obj > HazardBlock_obj::__new(Float x,Float y)
{  hx::ObjectPtr< HazardBlock_obj > _result_ = new HazardBlock_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic HazardBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HazardBlock_obj > _result_ = new HazardBlock_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void HazardBlock_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.hazards.HazardBlock","interact",0x7fd2f710,"objects.hazards.HazardBlock.interact","objects/hazards/HazardBlock.hx",20,0x9573cf6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(21)
		::objects::Player tmp = player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->super::interact(tmp);
		HX_STACK_LINE(22)
		::objects::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		::flixel::FlxObject_obj::separate(hx::ObjectPtr<OBJ_>(this),tmp1);
	}
return null();
}


Void HazardBlock_obj::kill( ){
{
		HX_STACK_FRAME("objects.hazards.HazardBlock","kill",0x2b8d15f8,"objects.hazards.HazardBlock.kill","objects/hazards/HazardBlock.hx",26,0x9573cf6c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		tmp->blocks->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(28)
		this->set_alive(false);
		HX_STACK_LINE(29)
		this->set_exists(false);
		HX_STACK_LINE(31)
		bool tmp1 = this->isOnScreen(null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(33)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			Float tmp3 = (tmp2 - (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			Float tmp5 = (tmp4 - (int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			::objects::effects::Explosion tmp6 = ::objects::effects::Explosion_obj::__new(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			::objects::effects::Explosion e = tmp6;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(34)
			::states::PlayState tmp7 = ::Reg_obj::PS;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			::objects::effects::Explosion tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			tmp7->effects->add(tmp8);
		}
	}
return null();
}



HazardBlock_obj::HazardBlock_obj()
{
}

Dynamic HazardBlock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
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
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HazardBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HazardBlock_obj::__mClass,"__mClass");
};

#endif

hx::Class HazardBlock_obj::__mClass;

void HazardBlock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.hazards.HazardBlock","\x54","\xc8","\x10","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HazardBlock_obj >;
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
} // end namespace hazards
