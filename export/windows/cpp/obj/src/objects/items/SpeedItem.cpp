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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_objects_items_SpeedItem
#include <objects/items/SpeedItem.h>
#endif
namespace objects{
namespace items{

Void SpeedItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.SpeedItem","new",0xfe287484,"objects.items.SpeedItem.new","objects/items/SpeedItem.hx",11,0x1ce0192e)
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
	tmp2->add(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),Array_obj< int >::__new().Add((int)4),null(),null(),null(),null());
	HX_STACK_LINE(16)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	tmp3->play(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),null(),null(),null());
}
;
	return null();
}

//SpeedItem_obj::~SpeedItem_obj() { }

Dynamic SpeedItem_obj::__CreateEmpty() { return  new SpeedItem_obj; }
hx::ObjectPtr< SpeedItem_obj > SpeedItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< SpeedItem_obj > _result_ = new SpeedItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic SpeedItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpeedItem_obj > _result_ = new SpeedItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SpeedItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.SpeedItem","interact",0x761e6512,"objects.items.SpeedItem.interact","objects/items/SpeedItem.hx",20,0x1ce0192e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(21)
		bool tmp = (player->HOR_MOVE_SPEED < player->MAX_HOR_MOVE_SPEED);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(22)
			tmp1 = (player->VERT_MOVE_SPEED < player->MAX_VERT_MOVE_SPEED);
		}
		else{
			HX_STACK_LINE(21)
			tmp1 = false;
		}
		HX_STACK_LINE(21)
		if ((tmp1)){
			HX_STACK_LINE(24)
			hx::AddEq(player->HOR_MOVE_SPEED,(int)10);
			HX_STACK_LINE(25)
			hx::AddEq(player->VERT_MOVE_SPEED,(int)10);
			HX_STACK_LINE(26)
			int tmp2 = player->HOR_MOVE_SPEED;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			int tmp3 = player->VERT_MOVE_SPEED;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			player->maxVelocity->set(tmp2,tmp3);
		}
		HX_STACK_LINE(28)
		::objects::Player tmp2 = player;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		this->super::interact(tmp2);
	}
return null();
}



SpeedItem_obj::SpeedItem_obj()
{
}

Dynamic SpeedItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(SpeedItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpeedItem_obj::__mClass,"__mClass");
};

#endif

hx::Class SpeedItem_obj::__mClass;

void SpeedItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.SpeedItem","\x92","\x22","\xb3","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpeedItem_obj >;
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
