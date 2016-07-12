#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#include <flixel/tweens/motion/CircularMotion.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace tweens{
namespace motion{

Void CircularMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","new",0xf11036cb,"flixel.tweens.motion.CircularMotion.new","flixel/tweens/motion/CircularMotion.hx",6,0x4765ac04)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(23)
	this->_angleFinish = ((Float)0);
	HX_STACK_LINE(22)
	this->_angleStart = ((Float)0);
	HX_STACK_LINE(21)
	this->_radius = ((Float)0);
	HX_STACK_LINE(20)
	this->_centerY = ((Float)0);
	HX_STACK_LINE(19)
	this->_centerX = ((Float)0);
	HX_STACK_LINE(11)
	this->angle = ((Float)0);
	HX_STACK_LINE(6)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	super::__construct(tmp);
}
;
	return null();
}

//CircularMotion_obj::~CircularMotion_obj() { }

Dynamic CircularMotion_obj::__CreateEmpty() { return  new CircularMotion_obj; }
hx::ObjectPtr< CircularMotion_obj > CircularMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< CircularMotion_obj > _result_ = new CircularMotion_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic CircularMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CircularMotion_obj > _result_ = new CircularMotion_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::tweens::motion::CircularMotion CircularMotion_obj::setMotion( Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,hx::Null< bool >  __o_UseDuration){
bool UseDuration = __o_UseDuration.Default(true);
	HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","setMotion",0x3f8a8423,"flixel.tweens.motion.CircularMotion.setMotion","flixel/tweens/motion/CircularMotion.hx",37,0x4765ac04)
	HX_STACK_THIS(this)
	HX_STACK_ARG(CenterX,"CenterX")
	HX_STACK_ARG(CenterY,"CenterY")
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Clockwise,"Clockwise")
	HX_STACK_ARG(DurationOrSpeed,"DurationOrSpeed")
	HX_STACK_ARG(UseDuration,"UseDuration")
{
		HX_STACK_LINE(38)
		this->_centerX = CenterX;
		HX_STACK_LINE(39)
		this->_centerY = CenterY;
		HX_STACK_LINE(40)
		this->_radius = Radius;
		HX_STACK_LINE(41)
		Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Float tmp3 = (Float(tmp2) / Float((int)-180));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = this->_angleStart = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		this->angle = tmp4;
		HX_STACK_LINE(42)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		Float tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		bool tmp7 = Clockwise;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		if ((tmp7)){
			HX_STACK_LINE(42)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(42)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(42)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		this->_angleFinish = tmp9;
		HX_STACK_LINE(44)
		bool tmp10 = UseDuration;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(44)
		if ((tmp10)){
			HX_STACK_LINE(46)
			this->duration = DurationOrSpeed;
		}
		else{
			HX_STACK_LINE(50)
			Float tmp11 = this->_radius;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(50)
			Float tmp13 = (tmp12 * (int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(50)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(50)
			Float tmp15 = DurationOrSpeed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(50)
			Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(50)
			this->duration = tmp16;
		}
		HX_STACK_LINE(53)
		this->start();
		HX_STACK_LINE(54)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(CircularMotion_obj,setMotion,return )

Void CircularMotion_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","update",0x6646b47e,"flixel.tweens.motion.CircularMotion.update","flixel/tweens/motion/CircularMotion.hx",58,0x4765ac04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(59)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->super::update(tmp);
		HX_STACK_LINE(60)
		Float tmp1 = this->_angleStart;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		Float tmp2 = this->_angleFinish;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		Float tmp3 = this->scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		this->angle = tmp5;
		HX_STACK_LINE(61)
		Float tmp6 = this->_centerX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Float tmp7 = this->angle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		Float tmp9 = this->_radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(61)
		Float tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(61)
		this->x = tmp11;
		HX_STACK_LINE(62)
		Float tmp12 = this->_centerY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		Float tmp13 = this->angle;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		Float tmp14 = ::Math_obj::sin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(62)
		Float tmp15 = this->_radius;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(62)
		Float tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(62)
		this->y = tmp17;
		HX_STACK_LINE(63)
		bool tmp18 = this->finished;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(63)
		if ((tmp18)){
			HX_STACK_LINE(65)
			this->postUpdate();
		}
	}
return null();
}


Float CircularMotion_obj::get_circumference( ){
	HX_STACK_FRAME("flixel.tweens.motion.CircularMotion","get_circumference",0x1cf82811,"flixel.tweens.motion.CircularMotion.get_circumference","flixel/tweens/motion/CircularMotion.hx",70,0x4765ac04)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	Float tmp = this->_radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Float tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(CircularMotion_obj,get_circumference,return )


CircularMotion_obj::CircularMotion_obj()
{
}

Dynamic CircularMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { return _centerX; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { return _centerY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { return _angleStart; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { return _angleFinish; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"circumference") ) { if (inCallProp == hx::paccAlways) return get_circumference(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_circumference") ) { return get_circumference_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CircularMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_centerX") ) { _centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_centerY") ) { _centerY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_angleStart") ) { _angleStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_angleFinish") ) { _angleFinish=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CircularMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("circumference","\x0f","\x71","\xf9","\x4d"));
	outFields->push(HX_HCSTRING("_centerX","\x64","\x4e","\x9e","\x53"));
	outFields->push(HX_HCSTRING("_centerY","\x65","\x4e","\x9e","\x53"));
	outFields->push(HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"));
	outFields->push(HX_HCSTRING("_angleStart","\xae","\xb0","\x1a","\x5a"));
	outFields->push(HX_HCSTRING("_angleFinish","\x87","\xc6","\xc4","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_centerX),HX_HCSTRING("_centerX","\x64","\x4e","\x9e","\x53")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_centerY),HX_HCSTRING("_centerY","\x65","\x4e","\x9e","\x53")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_radius),HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_angleStart),HX_HCSTRING("_angleStart","\xae","\xb0","\x1a","\x5a")},
	{hx::fsFloat,(int)offsetof(CircularMotion_obj,_angleFinish),HX_HCSTRING("_angleFinish","\x87","\xc6","\xc4","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("_centerX","\x64","\x4e","\x9e","\x53"),
	HX_HCSTRING("_centerY","\x65","\x4e","\x9e","\x53"),
	HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"),
	HX_HCSTRING("_angleStart","\xae","\xb0","\x1a","\x5a"),
	HX_HCSTRING("_angleFinish","\x87","\xc6","\xc4","\xfd"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_circumference","\x66","\x7c","\x69","\x54"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CircularMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class CircularMotion_obj::__mClass;

void CircularMotion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.CircularMotion","\x59","\x75","\xcc","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CircularMotion_obj >;
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

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
