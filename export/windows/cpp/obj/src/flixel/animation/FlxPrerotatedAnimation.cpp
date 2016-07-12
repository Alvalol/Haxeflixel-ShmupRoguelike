#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxPrerotatedAnimation
#include <flixel/animation/FlxPrerotatedAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace animation{

Void FlxPrerotatedAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,Float Baked)
{
HX_STACK_FRAME("flixel.animation.FlxPrerotatedAnimation","new",0x6966b47a,"flixel.animation.FlxPrerotatedAnimation.new","flixel/animation/FlxPrerotatedAnimation.hx",9,0x4a5f70b4)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Baked,"Baked")
{
	HX_STACK_LINE(24)
	this->angle = ((Float)0);
	HX_STACK_LINE(19)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	super::__construct(tmp,HX_HCSTRING("prerotated_animation","\x2b","\x0a","\xe7","\xca"));
	HX_STACK_LINE(20)
	this->baked = Baked;
	HX_STACK_LINE(21)
	Float tmp1 = (Float((int)360) / Float(Baked));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	this->rotations = tmp2;
}
;
	return null();
}

//FlxPrerotatedAnimation_obj::~FlxPrerotatedAnimation_obj() { }

Dynamic FlxPrerotatedAnimation_obj::__CreateEmpty() { return  new FlxPrerotatedAnimation_obj; }
hx::ObjectPtr< FlxPrerotatedAnimation_obj > FlxPrerotatedAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,Float Baked)
{  hx::ObjectPtr< FlxPrerotatedAnimation_obj > _result_ = new FlxPrerotatedAnimation_obj();
	_result_->__construct(Parent,Baked);
	return _result_;}

Dynamic FlxPrerotatedAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPrerotatedAnimation_obj > _result_ = new FlxPrerotatedAnimation_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Float FlxPrerotatedAnimation_obj::set_angle( Float Value){
	HX_STACK_FRAME("flixel.animation.FlxPrerotatedAnimation","set_angle",0x23607fd0,"flixel.animation.FlxPrerotatedAnimation.set_angle","flixel/animation/FlxPrerotatedAnimation.hx",27,0x4a5f70b4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(28)
	int tmp = this->curIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int oldIndex = tmp;		HX_STACK_VAR(oldIndex,"oldIndex");
	HX_STACK_LINE(29)
	Float tmp1 = hx::Mod(Value,(int)360);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	int angleHelper = tmp2;		HX_STACK_VAR(angleHelper,"angleHelper");
	HX_STACK_LINE(31)
	while((true)){
		HX_STACK_LINE(31)
		bool tmp3 = (angleHelper < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		if ((tmp4)){
			HX_STACK_LINE(31)
			break;
		}
		HX_STACK_LINE(33)
		hx::AddEq(angleHelper,(int)360);
	}
	HX_STACK_LINE(36)
	int tmp3 = angleHelper;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	Float tmp4 = this->baked;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	Float tmp6 = (tmp5 + ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	int newIndex = tmp7;		HX_STACK_VAR(newIndex,"newIndex");
	HX_STACK_LINE(37)
	int tmp8 = newIndex;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	int tmp9 = this->rotations;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(37)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(37)
	newIndex = tmp11;
	HX_STACK_LINE(38)
	bool tmp12 = (oldIndex != newIndex);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(38)
	if ((tmp12)){
		HX_STACK_LINE(40)
		int tmp13 = newIndex;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(40)
		this->set_curIndex(tmp13);
	}
	HX_STACK_LINE(43)
	Float tmp13 = this->angle = Value;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(43)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPrerotatedAnimation_obj,set_angle,return )

int FlxPrerotatedAnimation_obj::set_curIndex( int Value){
	HX_STACK_FRAME("flixel.animation.FlxPrerotatedAnimation","set_curIndex",0x8ed63595,"flixel.animation.FlxPrerotatedAnimation.set_curIndex","flixel/animation/FlxPrerotatedAnimation.hx",47,0x4a5f70b4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(48)
	this->curIndex = Value;
	HX_STACK_LINE(50)
	::flixel::animation::FlxAnimationController tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	if ((tmp1)){
		HX_STACK_LINE(52)
		::flixel::animation::FlxAnimationController tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		int tmp3 = Value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp2->set_frameIndex(tmp3);
	}
	HX_STACK_LINE(55)
	int tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	return tmp2;
}


::flixel::animation::FlxBaseAnimation FlxPrerotatedAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxPrerotatedAnimation","clone",0x470ab1f7,"flixel.animation.FlxPrerotatedAnimation.clone","flixel/animation/FlxPrerotatedAnimation.hx",59,0x4a5f70b4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(60)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	Float tmp1 = this->baked;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	::flixel::animation::FlxPrerotatedAnimation tmp2 = ::flixel::animation::FlxPrerotatedAnimation_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


::String FlxPrerotatedAnimation_obj::PREROTATED;


FlxPrerotatedAnimation_obj::FlxPrerotatedAnimation_obj()
{
}

Dynamic FlxPrerotatedAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"baked") ) { return baked; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { return rotations; }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curIndex") ) { return set_curIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPrerotatedAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"baked") ) { baked=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { rotations=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPrerotatedAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rotations","\x75","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("baked","\x2b","\x15","\xb4","\xad"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxPrerotatedAnimation_obj,rotations),HX_HCSTRING("rotations","\x75","\x59","\xef","\x6c")},
	{hx::fsFloat,(int)offsetof(FlxPrerotatedAnimation_obj,baked),HX_HCSTRING("baked","\x2b","\x15","\xb4","\xad")},
	{hx::fsFloat,(int)offsetof(FlxPrerotatedAnimation_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxPrerotatedAnimation_obj::PREROTATED,HX_HCSTRING("PREROTATED","\xe6","\xf7","\x22","\x84")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rotations","\x75","\x59","\xef","\x6c"),
	HX_HCSTRING("baked","\x2b","\x15","\xb4","\xad"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_curIndex","\xef","\x6c","\xd5","\xcf"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPrerotatedAnimation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPrerotatedAnimation_obj::PREROTATED,"PREROTATED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPrerotatedAnimation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPrerotatedAnimation_obj::PREROTATED,"PREROTATED");
};

#endif

hx::Class FlxPrerotatedAnimation_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PREROTATED","\xe6","\xf7","\x22","\x84"),
	::String(null()) };

void FlxPrerotatedAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxPrerotatedAnimation","\x88","\xaf","\xa8","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxPrerotatedAnimation_obj >;
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

void FlxPrerotatedAnimation_obj::__boot()
{
	PREROTATED= HX_HCSTRING("prerotated_animation","\x2b","\x0a","\xe7","\xca");
}

} // end namespace flixel
} // end namespace animation
