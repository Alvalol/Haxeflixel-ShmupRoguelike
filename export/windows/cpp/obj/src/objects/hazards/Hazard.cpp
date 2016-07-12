#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_objects_hazards_Hazard
#include <objects/hazards/Hazard.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace hazards{

Void Hazard_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.hazards.Hazard","new",0x87d39fab,"objects.hazards.Hazard.new","objects/hazards/Hazard.hx",9,0x0135a4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(11)
	this->_appeared = false;
	HX_STACK_LINE(15)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,null());
}
;
	return null();
}

//Hazard_obj::~Hazard_obj() { }

Dynamic Hazard_obj::__CreateEmpty() { return  new Hazard_obj; }
hx::ObjectPtr< Hazard_obj > Hazard_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Hazard_obj > _result_ = new Hazard_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Hazard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hazard_obj > _result_ = new Hazard_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Hazard_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.hazards.Hazard","update",0x7da4179e,"objects.hazards.Hazard.update","objects/hazards/Hazard.hx",19,0x0135a4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(20)
		this->basicChecks();
		HX_STACK_LINE(21)
		this->collisions();
		HX_STACK_LINE(22)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->super::update(tmp);
	}
return null();
}


Void Hazard_obj::collisions( ){
{
		HX_STACK_FRAME("objects.hazards.Hazard","collisions",0x7a883bd6,"objects.hazards.Hazard.collisions","objects/hazards/Hazard.hx",26,0x0135a4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::objects::Player tmp1 = tmp->player;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		bool tmp2 = ::flixel::FlxG_obj::overlap(tmp1,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		if ((tmp2)){
			HX_STACK_LINE(29)
			::states::PlayState tmp3 = ::Reg_obj::PS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(29)
			::objects::Player tmp4 = tmp3->player;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			this->interact(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hazard_obj,collisions,(void))

Void Hazard_obj::basicChecks( ){
{
		HX_STACK_FRAME("objects.hazards.Hazard","basicChecks",0x0c107e44,"objects.hazards.Hazard.basicChecks","objects/hazards/Hazard.hx",34,0x0135a4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		if ((tmp6)){
			HX_STACK_LINE(35)
			Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(35)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(35)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp12 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				Float tmp15 = (_this->x + _this->width);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				tmp11 = tmp16;
			}
			HX_STACK_LINE(35)
			tmp7 = (tmp10 < tmp11);
		}
		else{
			HX_STACK_LINE(35)
			tmp7 = false;
		}
		HX_STACK_LINE(35)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		if ((tmp8)){
			HX_STACK_LINE(35)
			Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(35)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(35)
			Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(35)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(35)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(35)
			::flixel::math::FlxRect tmp19 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(35)
			::flixel::math::FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(35)
			::flixel::math::FlxRect tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(35)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(35)
			tmp9 = (tmp18 > tmp22);
		}
		else{
			HX_STACK_LINE(35)
			tmp9 = false;
		}
		HX_STACK_LINE(35)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		if ((tmp9)){
			HX_STACK_LINE(35)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(35)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(35)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp14 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect _this = tmp15;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(35)
				Float tmp16 = (_this->y + _this->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(35)
				tmp13 = tmp16;
			}
			HX_STACK_LINE(35)
			tmp10 = (tmp12 < tmp13);
		}
		else{
			HX_STACK_LINE(35)
			tmp10 = false;
		}
		HX_STACK_LINE(35)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		if ((tmp11)){
			HX_STACK_LINE(36)
			this->set_exists(false);
		}
		HX_STACK_LINE(38)
		bool tmp12 = this->isOnScreen(null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		if ((tmp12)){
			HX_STACK_LINE(40)
			bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(40)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(40)
			if ((tmp14)){
				HX_STACK_LINE(42)
				this->_appeared = true;
			}
		}
		else{
			HX_STACK_LINE(47)
			bool tmp13 = this->_appeared;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(47)
			if ((tmp13)){
				HX_STACK_LINE(48)
				this->kill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Hazard_obj,basicChecks,(void))

Void Hazard_obj::interact( ::objects::Player player){
{
		HX_STACK_FRAME("objects.hazards.Hazard","interact",0xf1026c8b,"objects.hazards.Hazard.interact","objects/hazards/Hazard.hx",54,0x0135a4e3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(54)
		player->damage();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hazard_obj,interact,(void))

Void Hazard_obj::kill( ){
{
		HX_STACK_FRAME("objects.hazards.Hazard","kill",0x4f5f71f3,"objects.hazards.Hazard.kill","objects/hazards/Hazard.hx",58,0x0135a4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		tmp->hazards->remove(hx::ObjectPtr<OBJ_>(this),true);
		HX_STACK_LINE(60)
		this->super::kill();
	}
return null();
}



Hazard_obj::Hazard_obj()
{
}

Dynamic Hazard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interact") ) { return interact_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_appeared") ) { return _appeared; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"basicChecks") ) { return basicChecks_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hazard_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_appeared") ) { _appeared=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hazard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Hazard_obj,_appeared),HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_appeared","\x93","\xb5","\xfc","\x54"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("basicChecks","\xf9","\xeb","\xef","\x6c"),
	HX_HCSTRING("interact","\xb6","\x8b","\x6c","\x28"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hazard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hazard_obj::__mClass,"__mClass");
};

#endif

hx::Class Hazard_obj::__mClass;

void Hazard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.hazards.Hazard","\x39","\xee","\xb1","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hazard_obj >;
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
