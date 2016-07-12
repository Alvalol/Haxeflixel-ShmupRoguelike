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
#ifndef INCLUDED_objects_items_HealthMaxItem
#include <objects/items/HealthMaxItem.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
namespace objects{
namespace items{

Void HealthMaxItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.HealthMaxItem","new",0x9bb01565,"objects.items.HealthMaxItem.new","objects/items/HealthMaxItem.hx",11,0x910cf86d)
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
	HX_STACK_LINE(14)
	this->lifespan = (int)4;
	HX_STACK_LINE(15)
	this->loadGraphic(HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(16)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	tmp2->add(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),Array_obj< int >::__new().Add((int)2),null(),null(),null(),null());
	HX_STACK_LINE(17)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	tmp3->play(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),null(),null(),null());
}
;
	return null();
}

//HealthMaxItem_obj::~HealthMaxItem_obj() { }

Dynamic HealthMaxItem_obj::__CreateEmpty() { return  new HealthMaxItem_obj; }
hx::ObjectPtr< HealthMaxItem_obj > HealthMaxItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< HealthMaxItem_obj > _result_ = new HealthMaxItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic HealthMaxItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HealthMaxItem_obj > _result_ = new HealthMaxItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void HealthMaxItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.HealthMaxItem","interact",0x7f3ef491,"objects.items.HealthMaxItem.interact","objects/items/HealthMaxItem.hx",21,0x910cf86d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(22)
		bool tmp = (player->MAX_HP < player->MAX_POSSIBLE_HP);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		if ((tmp)){
			HX_STACK_LINE(24)
			(player->MAX_HP)++;
			HX_STACK_LINE(25)
			player->HP = player->MAX_HP;
		}
		HX_STACK_LINE(28)
		::objects::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		this->super::interact(tmp1);
	}
return null();
}



HealthMaxItem_obj::HealthMaxItem_obj()
{
}

Dynamic HealthMaxItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(HealthMaxItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HealthMaxItem_obj::__mClass,"__mClass");
};

#endif

hx::Class HealthMaxItem_obj::__mClass;

void HealthMaxItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.HealthMaxItem","\xf3","\x7e","\x7e","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HealthMaxItem_obj >;
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
