#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_objects_gamesys_Scroller
#include <objects/gamesys/Scroller.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace objects{
namespace gamesys{

Void Scroller_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.gamesys.Scroller","new",0x0a146d99,"objects.gamesys.Scroller.new","objects/gamesys/Scroller.hx",5,0x723b1a35)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(9)
	this->MOVE_SPEED = (int)15;
	HX_STACK_LINE(13)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(14)
	this->makeGraphic((int)1,(int)1,(int)-65536,null(),null());
	HX_STACK_LINE(15)
	this->set_alpha(((Float)0.5));
	HX_STACK_LINE(16)
	this->set_visible(false);
	HX_STACK_LINE(17)
	::flixel::math::FlxPoint tmp2 = this->maxVelocity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	int tmp3 = this->MOVE_SPEED;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	int tmp4 = this->MOVE_SPEED;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	tmp2->set(tmp3,tmp4);
}
;
	return null();
}

//Scroller_obj::~Scroller_obj() { }

Dynamic Scroller_obj::__CreateEmpty() { return  new Scroller_obj; }
hx::ObjectPtr< Scroller_obj > Scroller_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Scroller_obj > _result_ = new Scroller_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Scroller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scroller_obj > _result_ = new Scroller_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Scroller_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.gamesys.Scroller","update",0x01723270,"objects.gamesys.Scroller.update","objects/gamesys/Scroller.hx",21,0x723b1a35)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(23)
			::flixel::math::FlxPoint _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			Float tmp1 = (_g->x + (int)2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			_g->set_x(tmp1);
		}
		HX_STACK_LINE(24)
		::states::PlayState tmp = ::Reg_obj::PS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		Float tmp1 = tmp->player->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		this->set_y(tmp1);
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::states::PlayState tmp2 = ::Reg_obj::PS;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			int tmp3 = tmp2->player->HP;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(26)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			switch( (int)(tmp4)){
				case (int)2: {
					HX_STACK_LINE(29)
					this->MOVE_SPEED = (int)20;
					HX_STACK_LINE(29)
					::flixel::math::FlxPoint tmp5 = this->maxVelocity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(29)
					int tmp6 = this->MOVE_SPEED;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(29)
					int tmp7 = this->MOVE_SPEED;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(29)
					tmp5->set(tmp6,tmp7);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(30)
					this->MOVE_SPEED = (int)40;
					HX_STACK_LINE(30)
					::flixel::math::FlxPoint tmp5 = this->maxVelocity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(30)
					int tmp6 = this->MOVE_SPEED;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(30)
					int tmp7 = this->MOVE_SPEED;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(30)
					tmp5->set(tmp6,tmp7);
				}
				;break;
				default: {
					HX_STACK_LINE(28)
					this->MOVE_SPEED = (int)15;
					HX_STACK_LINE(28)
					::flixel::math::FlxPoint tmp5 = this->maxVelocity;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(28)
					int tmp6 = this->MOVE_SPEED;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(28)
					int tmp7 = this->MOVE_SPEED;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(28)
					tmp5->set(tmp6,tmp7);
				}
			}
		}
		HX_STACK_LINE(33)
		bool tmp2 = ::Reg_obj::pause;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		if ((tmp3)){
			HX_STACK_LINE(34)
			Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			this->super::update(tmp4);
		}
	}
return null();
}


int Scroller_obj::ACCELERATION;


Scroller_obj::Scroller_obj()
{
}

Dynamic Scroller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { return MOVE_SPEED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scroller_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"MOVE_SPEED") ) { MOVE_SPEED=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scroller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Scroller_obj,MOVE_SPEED),HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Scroller_obj::ACCELERATION,HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("MOVE_SPEED","\x79","\xe4","\x5f","\x56"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scroller_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scroller_obj::ACCELERATION,"ACCELERATION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scroller_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scroller_obj::ACCELERATION,"ACCELERATION");
};

#endif

hx::Class Scroller_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38"),
	::String(null()) };

void Scroller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.gamesys.Scroller","\x27","\xad","\xdd","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scroller_obj >;
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

void Scroller_obj::__boot()
{
	ACCELERATION= (int)2;
}

} // end namespace objects
} // end namespace gamesys
