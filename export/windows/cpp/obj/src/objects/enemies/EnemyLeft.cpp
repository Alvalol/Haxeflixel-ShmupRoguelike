#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_objects_enemies_Enemy
#include <objects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_objects_enemies_EnemyLeft
#include <objects/enemies/EnemyLeft.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
#ifndef INCLUDED_objects_items_SpeedItem
#include <objects/items/SpeedItem.h>
#endif
namespace objects{
namespace enemies{

Void EnemyLeft_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.enemies.EnemyLeft","new",0x33425ddf,"objects.enemies.EnemyLeft.new","objects/enemies/EnemyLeft.hx",9,0x90e82673)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(15)
	this->updatedPosition = false;
	HX_STACK_LINE(14)
	this->factor = (int)0;
	HX_STACK_LINE(13)
	this->sinfact = ((Float)1);
	HX_STACK_LINE(12)
	this->MOVE_SPEED = (int)1;
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(21)
	this->HP = (int)1;
	HX_STACK_LINE(22)
	this->loadGraphic(HX_HCSTRING("assets/images/enemies.png","\x16","\x33","\xfe","\x81"),true,(int)8,(int)8,null(),null());
	HX_STACK_LINE(23)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	tmp2->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)12,true,null(),null());
	HX_STACK_LINE(24)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	tmp3->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null(),null());
	HX_STACK_LINE(25)
	this->set_flipX(true);
}
;
	return null();
}

//EnemyLeft_obj::~EnemyLeft_obj() { }

Dynamic EnemyLeft_obj::__CreateEmpty() { return  new EnemyLeft_obj; }
hx::ObjectPtr< EnemyLeft_obj > EnemyLeft_obj::__new(Float x,Float y)
{  hx::ObjectPtr< EnemyLeft_obj > _result_ = new EnemyLeft_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic EnemyLeft_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnemyLeft_obj > _result_ = new EnemyLeft_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void EnemyLeft_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.enemies.EnemyLeft","update",0xe3df31ea,"objects.enemies.EnemyLeft.update","objects/enemies/EnemyLeft.hx",30,0x90e82673)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(31)
		this->reposition();
		HX_STACK_LINE(33)
		bool tmp = this->_appeared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(35)
			this->move();
		}
		HX_STACK_LINE(38)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		this->super::update(tmp1);
	}
return null();
}


Void EnemyLeft_obj::reposition( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyLeft","reposition",0xf5161fbd,"objects.enemies.EnemyLeft.reposition","objects/enemies/EnemyLeft.hx",42,0x90e82673)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		Float tmp2 = tmp1->scroll->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(43)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		if ((tmp5)){
			HX_STACK_LINE(43)
			bool tmp7 = this->updatedPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(43)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(43)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(43)
			tmp6 = false;
		}
		HX_STACK_LINE(43)
		if ((tmp6)){
			HX_STACK_LINE(45)
			::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			Float tmp8 = tmp7->scroll->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Float tmp9 = (tmp8 - (int)50);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			this->reset(tmp9,tmp10);
			HX_STACK_LINE(46)
			this->updatedPosition = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyLeft_obj,reposition,(void))

Void EnemyLeft_obj::kill( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyLeft","kill",0xa4d7213f,"objects.enemies.EnemyLeft.kill","objects/enemies/EnemyLeft.hx",51,0x90e82673)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		::objects::items::SpeedItem tmp2 = ::objects::items::SpeedItem_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		this->drops = Array_obj< ::Dynamic >::__new().Add(tmp2);
		HX_STACK_LINE(53)
		this->dropItem(this->drops);
		HX_STACK_LINE(54)
		this->super::kill();
	}
return null();
}


Void EnemyLeft_obj::move( ){
{
		HX_STACK_FRAME("objects.enemies.EnemyLeft","move",0xa62e24b2,"objects.enemies.EnemyLeft.move","objects/enemies/EnemyLeft.hx",59,0x90e82673)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::objects::enemies::EnemyLeft _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		Float tmp = _g->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		int tmp1 = this->MOVE_SPEED;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		_g->set_x(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EnemyLeft_obj,move,(void))


EnemyLeft_obj::EnemyLeft_obj()
{
}

Dynamic EnemyLeft_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"factor") ) { return factor; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sinfact") ) { return sinfact; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { return MOVE_SPEED; }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatedPosition") ) { return updatedPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnemyLeft_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"factor") ) { factor=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sinfact") ) { sinfact=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { MOVE_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updatedPosition") ) { updatedPosition=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnemyLeft_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"));
	outFields->push(HX_HCSTRING("sinfact","\xc4","\xbf","\x66","\x43"));
	outFields->push(HX_HCSTRING("factor","\xcf","\x98","\x0d","\xe4"));
	outFields->push(HX_HCSTRING("updatedPosition","\x04","\x52","\xb1","\xb8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EnemyLeft_obj,MOVE_SPEED),HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56")},
	{hx::fsFloat,(int)offsetof(EnemyLeft_obj,sinfact),HX_HCSTRING("sinfact","\xc4","\xbf","\x66","\x43")},
	{hx::fsInt,(int)offsetof(EnemyLeft_obj,factor),HX_HCSTRING("factor","\xcf","\x98","\x0d","\xe4")},
	{hx::fsBool,(int)offsetof(EnemyLeft_obj,updatedPosition),HX_HCSTRING("updatedPosition","\x04","\x52","\xb1","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"),
	HX_HCSTRING("sinfact","\xc4","\xbf","\x66","\x43"),
	HX_HCSTRING("factor","\xcf","\x98","\x0d","\xe4"),
	HX_HCSTRING("updatedPosition","\x04","\x52","\xb1","\xb8"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyLeft_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyLeft_obj::__mClass,"__mClass");
};

#endif

hx::Class EnemyLeft_obj::__mClass;

void EnemyLeft_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.enemies.EnemyLeft","\x6d","\x82","\x70","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EnemyLeft_obj >;
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
} // end namespace enemies
