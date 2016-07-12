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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_objects_items_SpreadItem
#include <objects/items/SpreadItem.h>
#endif
namespace objects{
namespace items{

Void SpreadItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.SpreadItem","new",0x77f24bc0,"objects.items.SpreadItem.new","objects/items/SpreadItem.hx",11,0xd38263ae)
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
	this->makeGraphic((int)8,(int)8,(int)-256,null(),null());
}
;
	return null();
}

//SpreadItem_obj::~SpreadItem_obj() { }

Dynamic SpreadItem_obj::__CreateEmpty() { return  new SpreadItem_obj; }
hx::ObjectPtr< SpreadItem_obj > SpreadItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< SpreadItem_obj > _result_ = new SpreadItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic SpreadItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpreadItem_obj > _result_ = new SpreadItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SpreadItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.SpreadItem","interact",0x9bb2d456,"objects.items.SpreadItem.interact","objects/items/SpreadItem.hx",17,0xd38263ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(18)
		bool tmp = (player->SHOT_MOD < player->MAX_SHOTMOD);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		if ((tmp)){
			HX_STACK_LINE(18)
			hx::AddEq(player->SHOT_MOD,(int)1);
		}
		HX_STACK_LINE(19)
		::objects::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		this->super::interact(tmp1);
	}
return null();
}



SpreadItem_obj::SpreadItem_obj()
{
}

Dynamic SpreadItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(SpreadItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpreadItem_obj::__mClass,"__mClass");
};

#endif

hx::Class SpreadItem_obj::__mClass;

void SpreadItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.SpreadItem","\xce","\xab","\xf9","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpreadItem_obj >;
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
