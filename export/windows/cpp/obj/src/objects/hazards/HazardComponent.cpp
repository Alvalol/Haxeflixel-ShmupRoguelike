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
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardComponent
#include <objects/hazards/HazardComponent.h>
#endif
namespace objects{
namespace hazards{

Void HazardComponent_obj::__construct(Float x,Float y,int w,int h)
{
HX_STACK_FRAME("objects.hazards.HazardComponent","new",0x2e3c6636,"objects.hazards.HazardComponent.new","objects/hazards/HazardComponent.hx",6,0x8839a37c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
{
	HX_STACK_LINE(7)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(8)
	int tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8)
	int tmp3 = h;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8)
	this->makeGraphic(tmp2,tmp3,null(),null(),null());
}
;
	return null();
}

//HazardComponent_obj::~HazardComponent_obj() { }

Dynamic HazardComponent_obj::__CreateEmpty() { return  new HazardComponent_obj; }
hx::ObjectPtr< HazardComponent_obj > HazardComponent_obj::__new(Float x,Float y,int w,int h)
{  hx::ObjectPtr< HazardComponent_obj > _result_ = new HazardComponent_obj();
	_result_->__construct(x,y,w,h);
	return _result_;}

Dynamic HazardComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HazardComponent_obj > _result_ = new HazardComponent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void HazardComponent_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.hazards.HazardComponent","update",0x045bb9f3,"objects.hazards.HazardComponent.update","objects/hazards/HazardComponent.hx",12,0x8839a37c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(13)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		this->super::update(tmp);
	}
return null();
}



HazardComponent_obj::HazardComponent_obj()
{
}

Dynamic HazardComponent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(HazardComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HazardComponent_obj::__mClass,"__mClass");
};

#endif

hx::Class HazardComponent_obj::__mClass;

void HazardComponent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.hazards.HazardComponent","\x44","\xd3","\x5b","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HazardComponent_obj >;
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
