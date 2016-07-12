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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_effects_NoHit
#include <objects/effects/NoHit.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace effects{

Void NoHit_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.effects.NoHit","new",0x1fb97d9e,"objects.effects.NoHit.new","objects/effects/NoHit.hx",10,0xc9fbda94)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(11)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(12)
	this->loadGraphic(HX_HCSTRING("assets/images/nohit.png","\xe2","\x1d","\xd6","\xe1"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(13)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	tmp2->add(HX_HCSTRING("nohit","\xb2","\xc4","\xc1","\x9f"),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)1).Add((int)1),null(),null(),null(),null());
	HX_STACK_LINE(14)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(14)
	tmp3->play(HX_HCSTRING("nohit","\xb2","\xc4","\xc1","\x9f"),null(),null(),null());
}
;
	return null();
}

//NoHit_obj::~NoHit_obj() { }

Dynamic NoHit_obj::__CreateEmpty() { return  new NoHit_obj; }
hx::ObjectPtr< NoHit_obj > NoHit_obj::__new(Float x,Float y)
{  hx::ObjectPtr< NoHit_obj > _result_ = new NoHit_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic NoHit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NoHit_obj > _result_ = new NoHit_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void NoHit_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.effects.NoHit","update",0xd7a5338b,"objects.effects.NoHit.update","objects/effects/NoHit.hx",18,0xc9fbda94)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(19)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		int tmp1 = tmp->_curAnim->curFrame;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		bool tmp2 = (tmp1 == (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		if ((tmp2)){
			HX_STACK_LINE(19)
			tmp3 = this->isOnScreen(null());
		}
		else{
			HX_STACK_LINE(19)
			tmp3 = false;
		}
		HX_STACK_LINE(19)
		if ((tmp3)){
			HX_STACK_LINE(21)
			this->kill();
			HX_STACK_LINE(22)
			::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(22)
			tmp4->effects->remove(hx::ObjectPtr<OBJ_>(this),true);
		}
		HX_STACK_LINE(25)
		bool tmp4 = ::Reg_obj::pause;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		if ((tmp5)){
			HX_STACK_LINE(26)
			Float tmp6 = elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			this->super::update(tmp6);
		}
	}
return null();
}



NoHit_obj::NoHit_obj()
{
}

Dynamic NoHit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NoHit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NoHit_obj::__mClass,"__mClass");
};

#endif

hx::Class NoHit_obj::__mClass;

void NoHit_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.effects.NoHit","\xac","\x16","\xcf","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NoHit_obj >;
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
} // end namespace effects
