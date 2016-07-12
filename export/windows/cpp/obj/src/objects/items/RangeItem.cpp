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
#ifndef INCLUDED_objects_items_RangeItem
#include <objects/items/RangeItem.h>
#endif
namespace objects{
namespace items{

Void RangeItem_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.items.RangeItem","new",0xb988a8ba,"objects.items.RangeItem.new","objects/items/RangeItem.hx",12,0xefcbddb8)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(13)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(14)
	this->makeGraphic((int)8,(int)8,(int)-16744448,null(),null());
	HX_STACK_LINE(15)
	this->lifespan = (int)4;
}
;
	return null();
}

//RangeItem_obj::~RangeItem_obj() { }

Dynamic RangeItem_obj::__CreateEmpty() { return  new RangeItem_obj; }
hx::ObjectPtr< RangeItem_obj > RangeItem_obj::__new(Float x,Float y)
{  hx::ObjectPtr< RangeItem_obj > _result_ = new RangeItem_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic RangeItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RangeItem_obj > _result_ = new RangeItem_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void RangeItem_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.items.RangeItem","interact",0xa4c72d1c,"objects.items.RangeItem.interact","objects/items/RangeItem.hx",19,0xefcbddb8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(20)
		bool tmp = (player->RANGE < player->MAX_RANGE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		if ((tmp)){
			HX_STACK_LINE(22)
			hx::AddEq(player->RANGE,((Float)0.1));
		}
		HX_STACK_LINE(25)
		::objects::Player tmp1 = player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		this->super::interact(tmp1);
	}
return null();
}



RangeItem_obj::RangeItem_obj()
{
}

Dynamic RangeItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(RangeItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RangeItem_obj::__mClass,"__mClass");
};

#endif

hx::Class RangeItem_obj::__mClass;

void RangeItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.items.RangeItem","\xc8","\x83","\x2b","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RangeItem_obj >;
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
