#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_objects_hazards_HazardLaser
#include <objects/hazards/HazardLaser.h>
#endif
namespace objects{
namespace hazards{

Void HazardLaser_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.hazards.HazardLaser","new",0xff96f944,"objects.hazards.HazardLaser.new","objects/hazards/HazardLaser.hx",8,0xccdb432e)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(12)
	this->tactive = false;
	HX_STACK_LINE(11)
	this->maxCounter = (int)300;
	struct _Function_1_1{
		inline static int Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","objects/hazards/HazardLaser.hx",10,0xccdb432e)
			{
				HX_STACK_LINE(10)
				::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(10)
				return tmp->_int((int)0,(int)20,null());
			}
			return null();
		}
	};
	HX_STACK_LINE(10)
	this->counter = _Function_1_1::Block();
	HX_STACK_LINE(16)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(17)
	int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	this->makeGraphic((int)2,tmp2,(int)-256,null(),null());
}
;
	return null();
}

//HazardLaser_obj::~HazardLaser_obj() { }

Dynamic HazardLaser_obj::__CreateEmpty() { return  new HazardLaser_obj; }
hx::ObjectPtr< HazardLaser_obj > HazardLaser_obj::__new(Float x,Float y)
{  hx::ObjectPtr< HazardLaser_obj > _result_ = new HazardLaser_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic HazardLaser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HazardLaser_obj > _result_ = new HazardLaser_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void HazardLaser_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.hazards.HazardLaser","update",0x3ae003a5,"objects.hazards.HazardLaser.update","objects/hazards/HazardLaser.hx",21,0xccdb432e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(22)
		this->switchingStates();
		HX_STACK_LINE(23)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		this->super::update(tmp);
	}
return null();
}


Void HazardLaser_obj::switchingStates( ){
{
		HX_STACK_FRAME("objects.hazards.HazardLaser","switchingStates",0x5fc2f634,"objects.hazards.HazardLaser.switchingStates","objects/hazards/HazardLaser.hx",27,0xccdb432e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		bool tmp = this->_appeared;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(28)
			int tmp2 = this->counter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			int tmp4 = this->maxCounter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(28)
			tmp1 = (tmp3 < tmp5);
		}
		else{
			HX_STACK_LINE(28)
			tmp1 = false;
		}
		HX_STACK_LINE(28)
		if ((tmp1)){
			HX_STACK_LINE(30)
			this->appear();
		}
		else{
			HX_STACK_LINE(34)
			bool tmp2 = this->tactive;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			this->tactive = tmp3;
			HX_STACK_LINE(35)
			this->counter = (int)0;
		}
		HX_STACK_LINE(38)
		bool tmp2 = this->tactive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		if ((tmp2)){
			HX_STACK_LINE(39)
			this->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(41)
			this->set_alpha(((Float)0.1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HazardLaser_obj,switchingStates,(void))

Void HazardLaser_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.hazards.HazardLaser","interact",0x6616a852,"objects.hazards.HazardLaser.interact","objects/hazards/HazardLaser.hx",46,0xccdb432e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(47)
		bool tmp = this->tactive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		if ((tmp)){
			HX_STACK_LINE(49)
			player->damage();
		}
	}
return null();
}


Void HazardLaser_obj::appear( ){
{
		HX_STACK_FRAME("objects.hazards.HazardLaser","appear",0x43ae5431,"objects.hazards.HazardLaser.appear","objects/hazards/HazardLaser.hx",57,0xccdb432e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		hx::AddEq(this->counter,(int)2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HazardLaser_obj,appear,(void))


HazardLaser_obj::HazardLaser_obj()
{
}

Dynamic HazardLaser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"appear") ) { return appear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { return counter; }
		if (HX_FIELD_EQ(inName,"tactive") ) { return tactive; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxCounter") ) { return maxCounter; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"switchingStates") ) { return switchingStates_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HazardLaser_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"counter") ) { counter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tactive") ) { tactive=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxCounter") ) { maxCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HazardLaser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"));
	outFields->push(HX_HCSTRING("maxCounter","\xb8","\x28","\x7e","\x87"));
	outFields->push(HX_HCSTRING("tactive","\x3a","\x11","\x00","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(HazardLaser_obj,counter),HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d")},
	{hx::fsInt,(int)offsetof(HazardLaser_obj,maxCounter),HX_HCSTRING("maxCounter","\xb8","\x28","\x7e","\x87")},
	{hx::fsBool,(int)offsetof(HazardLaser_obj,tactive),HX_HCSTRING("tactive","\x3a","\x11","\x00","\xee")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("counter","\xfc","\xae","\x59","\x1d"),
	HX_HCSTRING("maxCounter","\xb8","\x28","\x7e","\x87"),
	HX_HCSTRING("tactive","\x3a","\x11","\x00","\xee"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("switchingStates","\x50","\x07","\xf4","\xd4"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	HX_HCSTRING("appear","\x95","\xd6","\xd3","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HazardLaser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HazardLaser_obj::__mClass,"__mClass");
};

#endif

hx::Class HazardLaser_obj::__mClass;

void HazardLaser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.hazards.HazardLaser","\x52","\x47","\xd0","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HazardLaser_obj >;
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
