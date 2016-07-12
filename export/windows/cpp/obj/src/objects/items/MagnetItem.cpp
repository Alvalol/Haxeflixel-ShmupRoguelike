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
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_objects_items_MagnetItem
#include <objects/items/MagnetItem.h>
#endif
namespace objects{
namespace items{

Void MagnetItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.MagnetItem","new",0xb6737bf7,"objects.items.MagnetItem.new","objects/items/MagnetItem.hx",13,0x6ec46757)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(14)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(16)
	this->lifespan = (int)4;
	HX_STACK_LINE(17)
	this->loadGraphic(HX_HCSTRING("assets/images/items.png","\x30","\xc4","\x61","\x6a"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(18)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	tmp2->add(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),Array_obj< int >::__new().Add((int)3),null(),null(),null(),null());
	HX_STACK_LINE(19)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	tmp3->play(HX_HCSTRING("static","\xae","\xdc","\xfb","\x05"),null(),null(),null());
}
;
	return null();
}

//MagnetItem_obj::~MagnetItem_obj() { }

Dynamic MagnetItem_obj::__CreateEmpty() { return  new MagnetItem_obj; }
hx::ObjectPtr< MagnetItem_obj > MagnetItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< MagnetItem_obj > _result_ = new MagnetItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic MagnetItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MagnetItem_obj > _result_ = new MagnetItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void MagnetItem_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.items.MagnetItem","update",0x9991f2d2,"objects.items.MagnetItem.update","objects/items/MagnetItem.hx",23,0x6ec46757)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(24)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->super::update(tmp);
	}
return null();
}


Void MagnetItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.MagnetItem","interact",0x48847cbf,"objects.items.MagnetItem.interact","objects/items/MagnetItem.hx",28,0x6ec46757)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(29)
		bool tmp = (player->MAGNET < player->MAX_MAGNET);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		if ((tmp)){
			HX_STACK_LINE(31)
			hx::AddEq(player->MAGNET,(int)50);
		}
		HX_STACK_LINE(34)
		bool tmp1 = (player->MAGNET_FORCE < player->MAX_MAGNET_FORCE);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(36)
			hx::AddEq(player->MAGNET_FORCE,(int)50);
		}
		HX_STACK_LINE(39)
		::objects::Player tmp2 = player;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		this->super::interact(tmp2);
	}
return null();
}



MagnetItem_obj::MagnetItem_obj()
{
}

Dynamic MagnetItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(MagnetItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MagnetItem_obj::__mClass,"__mClass");
};

#endif

hx::Class MagnetItem_obj::__mClass;

void MagnetItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.MagnetItem","\x85","\xb4","\x02","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MagnetItem_obj >;
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
