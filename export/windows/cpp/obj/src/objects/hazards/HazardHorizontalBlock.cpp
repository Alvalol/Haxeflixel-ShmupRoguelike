#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_objects_hazards_HazardHorizontalBlock
#include <objects/hazards/HazardHorizontalBlock.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#include <utils/pcg/LevelLoaderProc.h>
#endif
namespace objects{
namespace hazards{

Void HazardHorizontalBlock_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.hazards.HazardHorizontalBlock","new",0x87345882,"objects.hazards.HazardHorizontalBlock.new","objects/hazards/HazardHorizontalBlock.hx",6,0x76ba8c30)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(10)
	this->MOVE_SPEED = ((Float)0.5);
	HX_STACK_LINE(9)
	this->direction = (int)0;
	HX_STACK_LINE(14)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(15)
	this->makeGraphic((int)8,(int)8,(int)-1,null(),null());
	HX_STACK_LINE(16)
	this->centerOffsets(null());
}
;
	return null();
}

//HazardHorizontalBlock_obj::~HazardHorizontalBlock_obj() { }

Dynamic HazardHorizontalBlock_obj::__CreateEmpty() { return  new HazardHorizontalBlock_obj; }
hx::ObjectPtr< HazardHorizontalBlock_obj > HazardHorizontalBlock_obj::__new(Float x,Float y)
{  hx::ObjectPtr< HazardHorizontalBlock_obj > _result_ = new HazardHorizontalBlock_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic HazardHorizontalBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HazardHorizontalBlock_obj > _result_ = new HazardHorizontalBlock_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void HazardHorizontalBlock_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.hazards.HazardHorizontalBlock","update",0x87a33f27,"objects.hazards.HazardHorizontalBlock.update","objects/hazards/HazardHorizontalBlock.hx",20,0x76ba8c30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(21)
		bool tmp = this->_appeared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		if ((tmp)){
			HX_STACK_LINE(22)
			this->move();
		}
		HX_STACK_LINE(24)
		int tmp1 = this->direction;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		if ((tmp2)){
			HX_STACK_LINE(25)
			::flixel::math::FlxRandom tmp3 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(25)
			int tmp4 = tmp3->_int((int)-1,(int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			this->direction = tmp4;
		}
		HX_STACK_LINE(27)
		Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		this->super::update(tmp3);
	}
return null();
}


Void HazardHorizontalBlock_obj::collisions( ){
{
		HX_STACK_FRAME("objects.hazards.HazardHorizontalBlock","collisions",0x728c5bdf,"objects.hazards.HazardHorizontalBlock.collisions","objects/hazards/HazardHorizontalBlock.hx",31,0x76ba8c30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::flixel::tile::FlxTilemap tmp1 = tmp->map->loadedMap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		Dynamic tmp2 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		bool tmp3 = ::flixel::FlxG_obj::overlap(hx::ObjectPtr<OBJ_>(this),tmp1,null(),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		if ((tmp3)){
			HX_STACK_LINE(33)
			hx::MultEq(this->direction,(int)-1);
		}
		HX_STACK_LINE(35)
		this->super::collisions();
	}
return null();
}


Void HazardHorizontalBlock_obj::move( ){
{
		HX_STACK_FRAME("objects.hazards.HazardHorizontalBlock","move",0xc5f778af,"objects.hazards.HazardHorizontalBlock.move","objects/hazards/HazardHorizontalBlock.hx",40,0x76ba8c30)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::objects::hazards::HazardHorizontalBlock _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		Float tmp = _g->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		Float tmp1 = this->MOVE_SPEED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		int tmp2 = this->direction;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		_g->set_y(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HazardHorizontalBlock_obj,move,(void))


HazardHorizontalBlock_obj::HazardHorizontalBlock_obj()
{
}

Dynamic HazardHorizontalBlock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { return MOVE_SPEED; }
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HazardHorizontalBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { MOVE_SPEED=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HazardHorizontalBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HazardHorizontalBlock_obj,direction),HX_HCSTRING("direction","\x3f","\x62","\x40","\x10")},
	{hx::fsFloat,(int)offsetof(HazardHorizontalBlock_obj,MOVE_SPEED),HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"),
	HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HazardHorizontalBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HazardHorizontalBlock_obj::__mClass,"__mClass");
};

#endif

hx::Class HazardHorizontalBlock_obj::__mClass;

void HazardHorizontalBlock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.hazards.HazardHorizontalBlock","\x90","\xaf","\xc1","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HazardHorizontalBlock_obj >;
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
