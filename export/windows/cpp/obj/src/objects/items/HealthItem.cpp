#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_items_HealthItem
#include <objects/items/HealthItem.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
namespace objects{
namespace items{

Void HealthItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.HealthItem","new",0xd4e582e9,"objects.items.HealthItem.new","objects/items/HealthItem.hx",11,0x40fc04a5)
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
	this->lifespan = (int)4;
	HX_STACK_LINE(14)
	this->loadGraphic(HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(15)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	tmp2->add(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),Array_obj< int >::__new().Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)12,null(),null(),null());
	HX_STACK_LINE(16)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	tmp3->play(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),null(),null(),null());
}
;
	return null();
}

//HealthItem_obj::~HealthItem_obj() { }

Dynamic HealthItem_obj::__CreateEmpty() { return  new HealthItem_obj; }
hx::ObjectPtr< HealthItem_obj > HealthItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< HealthItem_obj > _result_ = new HealthItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic HealthItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HealthItem_obj > _result_ = new HealthItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void HealthItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.HealthItem","interact",0x735a088d,"objects.items.HealthItem.interact","objects/items/HealthItem.hx",20,0x40fc04a5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(21)
		bool tmp = (player->HP < player->MAX_HP);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(22)
			(player->HP)++;
		}
		HX_STACK_LINE(24)
		::objects::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		this->super::interact(tmp1);
	}
return null();
}



HealthItem_obj::HealthItem_obj()
{
}

Dynamic HealthItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HealthItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HealthItem_obj::__mClass,"__mClass");
};

#endif

hx::Class HealthItem_obj::__mClass;

void HealthItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.HealthItem","\x77","\xda","\x85","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HealthItem_obj >;
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
} // end namespace items
