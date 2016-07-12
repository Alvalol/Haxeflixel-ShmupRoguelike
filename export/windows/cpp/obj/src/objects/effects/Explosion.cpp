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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_effects_Explosion
#include <objects/effects/Explosion.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace effects{

Void Explosion_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.effects.Explosion","new",0xab4aa721,"objects.effects.Explosion.new","objects/effects/Explosion.hx",7,0xc9b23b71)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","objects/effects/Explosion.hx",10,0xc9b23b71)
			{
				HX_STACK_LINE(10)
				::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(10)
				return tmp->_float((int)1,((Float)2.5),null());
			}
			return null();
		}
	};
	HX_STACK_LINE(10)
	this->escale = _Function_1_1::Block();
	HX_STACK_LINE(14)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(15)
	this->loadGraphic(HX_HCSTRING("assets/images/explosion.png","\xc5","\xf8","\xb2","\x1d"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(16)
	::flixel::math::FlxPoint tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	Float tmp3 = this->escale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	Float tmp4 = this->escale;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(16)
	tmp2->set(tmp3,tmp4);
	HX_STACK_LINE(17)
	::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	tmp5->add(HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2),null(),null(),null(),null());
	HX_STACK_LINE(18)
	::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(18)
	tmp6->play(HX_HCSTRING("explosion","\x95","\xd3","\xa0","\x9e"),null(),null(),null());
}
;
	return null();
}

//Explosion_obj::~Explosion_obj() { }

Dynamic Explosion_obj::__CreateEmpty() { return  new Explosion_obj; }
hx::ObjectPtr< Explosion_obj > Explosion_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Explosion_obj > _result_ = new Explosion_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Explosion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Explosion_obj > _result_ = new Explosion_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Explosion_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.effects.Explosion","update",0x8d0a9de8,"objects.effects.Explosion.update","objects/effects/Explosion.hx",22,0xc9b23b71)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		int tmp1 = tmp->_curAnim->curFrame;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		bool tmp2 = (tmp1 == (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		if ((tmp2)){
			HX_STACK_LINE(25)
			tmp3 = this->isOnScreen(null());
		}
		else{
			HX_STACK_LINE(25)
			tmp3 = false;
		}
		HX_STACK_LINE(25)
		if ((tmp3)){
			HX_STACK_LINE(27)
			this->kill();
			HX_STACK_LINE(28)
			::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			tmp4->effects->remove(hx::ObjectPtr<OBJ_>(this),true);
		}
		HX_STACK_LINE(31)
		bool tmp4 = ::Reg_obj::pause;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		if ((tmp5)){
			HX_STACK_LINE(32)
			Float tmp6 = elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			this->super::update(tmp6);
		}
	}
return null();
}



Explosion_obj::Explosion_obj()
{
}

Dynamic Explosion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escale") ) { return escale; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Explosion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"escale") ) { escale=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Explosion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("escale","\x05","\x40","\xda","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Explosion_obj,escale),HX_HCSTRING("escale","\x05","\x40","\xda","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("escale","\x05","\x40","\xda","\xda"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#endif

hx::Class Explosion_obj::__mClass;

void Explosion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.effects.Explosion","\xaf","\x82","\x06","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Explosion_obj >;
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
