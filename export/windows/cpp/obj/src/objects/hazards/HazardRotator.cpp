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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardComponent
#include <objects/hazards/HazardComponent.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardRotator
#include <objects/hazards/HazardRotator.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace hazards{

Void HazardRotator_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.hazards.HazardRotator","new",0x3f420026,"objects.hazards.HazardRotator.new","objects/hazards/HazardRotator.hx",6,0x0a8ad30c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(9)
	this->rotspeed = (int)10;
	HX_STACK_LINE(17)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(18)
	::objects::hazards::HazardComponent tmp2 = ::objects::hazards::HazardComponent_obj::__new(x,y,(int)200,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	this->comp1 = tmp2;
	HX_STACK_LINE(19)
	Float tmp3 = (x + (int)100);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	Float tmp4 = (y - (int)100);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	::objects::hazards::HazardComponent tmp5 = ::objects::hazards::HazardComponent_obj::__new(tmp3,tmp4,(int)2,(int)200);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	this->comp2 = tmp5;
	HX_STACK_LINE(20)
	::flixel::group::FlxTypedGroup tmp6 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	this->compGroup = tmp6;
	HX_STACK_LINE(22)
	::flixel::group::FlxTypedGroup tmp7 = this->compGroup;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	::objects::hazards::HazardComponent tmp8 = this->comp1;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	tmp7->add(tmp8);
	HX_STACK_LINE(23)
	::flixel::group::FlxTypedGroup tmp9 = this->compGroup;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(23)
	::objects::hazards::HazardComponent tmp10 = this->comp2;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(23)
	tmp9->add(tmp10);
	HX_STACK_LINE(25)
	::flixel::group::FlxTypedGroup tmp11 = this->compGroup;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(25)
	::flixel::group::FlxTypedGroupIterator tmp12 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp11->members,null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(25)
	for(::cpp::FastIterator_obj< ::objects::hazards::Hazard > *__it = ::cpp::CreateFastIterator< ::objects::hazards::Hazard >(tmp12);  __it->hasNext(); ){
		::objects::hazards::Hazard i = __it->next();
		i->angularVelocity = (int)20;
	}
}
;
	return null();
}

//HazardRotator_obj::~HazardRotator_obj() { }

Dynamic HazardRotator_obj::__CreateEmpty() { return  new HazardRotator_obj; }
hx::ObjectPtr< HazardRotator_obj > HazardRotator_obj::__new(Float x,Float y)
{  hx::ObjectPtr< HazardRotator_obj > _result_ = new HazardRotator_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic HazardRotator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HazardRotator_obj > _result_ = new HazardRotator_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void HazardRotator_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.hazards.HazardRotator","update",0x64bef603,"objects.hazards.HazardRotator.update","objects/hazards/HazardRotator.hx",32,0x0a8ad30c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(34)
		::flixel::group::FlxTypedGroup tmp = this->compGroup;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::flixel::group::FlxTypedGroupIterator tmp1 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp->members,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		for(::cpp::FastIterator_obj< ::objects::hazards::Hazard > *__it = ::cpp::CreateFastIterator< ::objects::hazards::Hazard >(tmp1);  __it->hasNext(); ){
			::objects::hazards::Hazard i = __it->next();
			{
				HX_STACK_LINE(36)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					int AlphaTolerance = (int)255;		HX_STACK_VAR(AlphaTolerance,"AlphaTolerance");
					HX_STACK_LINE(36)
					::objects::hazards::Hazard tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(36)
					::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(36)
					::objects::Player tmp5 = tmp4->player;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(36)
					int tmp6 = AlphaTolerance;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(36)
					tmp2 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp3,tmp5,tmp6,null());
				}
				HX_STACK_LINE(36)
				if ((tmp2)){
					HX_STACK_LINE(38)
					::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(38)
					tmp3->player->damage();
				}
			}
;
		}
	}
return null();
}



HazardRotator_obj::HazardRotator_obj()
{
}

void HazardRotator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HazardRotator);
	HX_MARK_MEMBER_NAME(rotspeed,"rotspeed");
	HX_MARK_MEMBER_NAME(comp1,"comp1");
	HX_MARK_MEMBER_NAME(comp2,"comp2");
	HX_MARK_MEMBER_NAME(compGroup,"compGroup");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HazardRotator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotspeed,"rotspeed");
	HX_VISIT_MEMBER_NAME(comp1,"comp1");
	HX_VISIT_MEMBER_NAME(comp2,"comp2");
	HX_VISIT_MEMBER_NAME(compGroup,"compGroup");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HazardRotator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"comp1") ) { return comp1; }
		if (HX_FIELD_EQ(inName,"comp2") ) { return comp2; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotspeed") ) { return rotspeed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compGroup") ) { return compGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HazardRotator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"comp1") ) { comp1=inValue.Cast< ::objects::hazards::HazardComponent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comp2") ) { comp2=inValue.Cast< ::objects::hazards::HazardComponent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotspeed") ) { rotspeed=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"compGroup") ) { compGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HazardRotator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rotspeed","\x10","\xc2","\x14","\x63"));
	outFields->push(HX_HCSTRING("comp1","\x42","\x34","\x5d","\x4a"));
	outFields->push(HX_HCSTRING("comp2","\x43","\x34","\x5d","\x4a"));
	outFields->push(HX_HCSTRING("compGroup","\xb0","\x33","\xf9","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HazardRotator_obj,rotspeed),HX_HCSTRING("rotspeed","\x10","\xc2","\x14","\x63")},
	{hx::fsObject /*::objects::hazards::HazardComponent*/ ,(int)offsetof(HazardRotator_obj,comp1),HX_HCSTRING("comp1","\x42","\x34","\x5d","\x4a")},
	{hx::fsObject /*::objects::hazards::HazardComponent*/ ,(int)offsetof(HazardRotator_obj,comp2),HX_HCSTRING("comp2","\x43","\x34","\x5d","\x4a")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(HazardRotator_obj,compGroup),HX_HCSTRING("compGroup","\xb0","\x33","\xf9","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rotspeed","\x10","\xc2","\x14","\x63"),
	HX_HCSTRING("comp1","\x42","\x34","\x5d","\x4a"),
	HX_HCSTRING("comp2","\x43","\x34","\x5d","\x4a"),
	HX_HCSTRING("compGroup","\xb0","\x33","\xf9","\x09"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HazardRotator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HazardRotator_obj::__mClass,"__mClass");
};

#endif

hx::Class HazardRotator_obj::__mClass;

void HazardRotator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.hazards.HazardRotator","\x34","\xb5","\x31","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HazardRotator_obj >;
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
