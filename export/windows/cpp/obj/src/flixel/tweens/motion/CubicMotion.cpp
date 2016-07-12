#include <hxcpp.h>

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_CubicMotion
#include <flixel/tweens/motion/CubicMotion.h>
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

Void CubicMotion_obj::__construct(Dynamic Options)
{
HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","new",0x5990902e,"flixel.tweens.motion.CubicMotion.new","flixel/tweens/motion/CubicMotion.hx",6,0x44d248a3)
HX_STACK_THIS(this)
HX_STACK_ARG(Options,"Options")
{
	HX_STACK_LINE(18)
	this->_tt = ((Float)0);
	HX_STACK_LINE(17)
	this->_ttt = ((Float)0);
	HX_STACK_LINE(16)
	this->_bY = ((Float)0);
	HX_STACK_LINE(15)
	this->_bX = ((Float)0);
	HX_STACK_LINE(14)
	this->_aY = ((Float)0);
	HX_STACK_LINE(13)
	this->_aX = ((Float)0);
	HX_STACK_LINE(12)
	this->_toY = ((Float)0);
	HX_STACK_LINE(11)
	this->_toX = ((Float)0);
	HX_STACK_LINE(10)
	this->_fromY = ((Float)0);
	HX_STACK_LINE(9)
	this->_fromX = ((Float)0);
	HX_STACK_LINE(6)
	Dynamic tmp = Options;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	super::__construct(tmp);
}
;
	return null();
}

//CubicMotion_obj::~CubicMotion_obj() { }

Dynamic CubicMotion_obj::__CreateEmpty() { return  new CubicMotion_obj; }
hx::ObjectPtr< CubicMotion_obj > CubicMotion_obj::__new(Dynamic Options)
{  hx::ObjectPtr< CubicMotion_obj > _result_ = new CubicMotion_obj();
	_result_->__construct(Options);
	return _result_;}

Dynamic CubicMotion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicMotion_obj > _result_ = new CubicMotion_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::flixel::tweens::motion::CubicMotion CubicMotion_obj::setMotion( Float fromX,Float fromY,Float aX,Float aY,Float bX,Float bY,Float toX,Float toY,Float duration){
	HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","setMotion",0x132089c6,"flixel.tweens.motion.CubicMotion.setMotion","flixel/tweens/motion/CubicMotion.hx",34,0x44d248a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(aX,"aX")
	HX_STACK_ARG(aY,"aY")
	HX_STACK_ARG(bX,"bX")
	HX_STACK_ARG(bY,"bY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(35)
	Float tmp = this->_fromX = fromX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	this->x = tmp;
	HX_STACK_LINE(36)
	Float tmp1 = this->_fromY = fromY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	this->y = tmp1;
	HX_STACK_LINE(37)
	this->_aX = aX;
	HX_STACK_LINE(38)
	this->_aY = aY;
	HX_STACK_LINE(39)
	this->_bX = bX;
	HX_STACK_LINE(40)
	this->_bY = bY;
	HX_STACK_LINE(41)
	this->_toX = toX;
	HX_STACK_LINE(42)
	this->_toY = toY;
	HX_STACK_LINE(43)
	this->duration = duration;
	HX_STACK_LINE(44)
	this->start();
	HX_STACK_LINE(45)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC9(CubicMotion_obj,setMotion,return )

Void CubicMotion_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.tweens.motion.CubicMotion","update",0x63341afb,"flixel.tweens.motion.CubicMotion.update","flixel/tweens/motion/CubicMotion.hx",49,0x44d248a3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(50)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		this->super::update(tmp);
		HX_STACK_LINE(51)
		Float tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		Float tmp2 = this->scale;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		Float tmp6 = this->_toX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		Float tmp7 = this->_aX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		Float tmp8 = this->_bX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		Float tmp10 = ((int)3 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		Float tmp11 = (tmp6 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		Float tmp12 = this->_fromX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		Float tmp14 = (tmp5 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		Float tmp15 = this->scale;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		Float tmp16 = ((int)3 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		Float tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(51)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(51)
		Float tmp19 = this->_fromX;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(51)
		Float tmp20 = this->_aX;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(51)
		Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(51)
		Float tmp23 = this->_bX;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(51)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(51)
		Float tmp25 = (tmp18 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(51)
		Float tmp26 = (tmp14 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(51)
		Float tmp27 = this->scale;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(51)
		Float tmp28 = ((int)3 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(51)
		Float tmp29 = this->_aX;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(51)
		Float tmp30 = this->_fromX;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(51)
		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(51)
		Float tmp32 = (tmp28 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(51)
		Float tmp33 = (tmp26 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(51)
		Float tmp34 = this->_fromX;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(51)
		Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(51)
		this->x = tmp35;
		HX_STACK_LINE(52)
		Float tmp36 = this->scale;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(52)
		Float tmp37 = this->scale;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(52)
		Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(52)
		Float tmp39 = this->scale;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(52)
		Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(52)
		Float tmp41 = this->_toY;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(52)
		Float tmp42 = this->_aY;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(52)
		Float tmp43 = this->_bY;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(52)
		Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(52)
		Float tmp45 = ((int)3 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(52)
		Float tmp46 = (tmp41 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(52)
		Float tmp47 = this->_fromY;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(52)
		Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(52)
		Float tmp49 = (tmp40 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(52)
		Float tmp50 = this->scale;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(52)
		Float tmp51 = ((int)3 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(52)
		Float tmp52 = this->scale;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(52)
		Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(52)
		Float tmp54 = this->_fromY;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(52)
		Float tmp55 = this->_aY;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(52)
		Float tmp56 = ((int)2 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(52)
		Float tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(52)
		Float tmp58 = this->_bY;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(52)
		Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(52)
		Float tmp60 = (tmp53 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(52)
		Float tmp61 = (tmp49 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(52)
		Float tmp62 = this->scale;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(52)
		Float tmp63 = ((int)3 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(52)
		Float tmp64 = this->_aY;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(52)
		Float tmp65 = this->_fromY;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(52)
		Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(52)
		Float tmp67 = (tmp63 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(52)
		Float tmp68 = (tmp61 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(52)
		Float tmp69 = this->_fromY;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(52)
		Float tmp70 = (tmp68 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(52)
		this->y = tmp70;
		HX_STACK_LINE(53)
		bool tmp71 = this->finished;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(53)
		if ((tmp71)){
			HX_STACK_LINE(55)
			this->postUpdate();
		}
	}
return null();
}



CubicMotion_obj::CubicMotion_obj()
{
}

Dynamic CubicMotion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { return _aX; }
		if (HX_FIELD_EQ(inName,"_aY") ) { return _aY; }
		if (HX_FIELD_EQ(inName,"_bX") ) { return _bX; }
		if (HX_FIELD_EQ(inName,"_bY") ) { return _bY; }
		if (HX_FIELD_EQ(inName,"_tt") ) { return _tt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { return _toX; }
		if (HX_FIELD_EQ(inName,"_toY") ) { return _toY; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { return _ttt; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { return _fromX; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { return _fromY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubicMotion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_aX") ) { _aX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aY") ) { _aY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bX") ) { _bX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bY") ) { _bY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tt") ) { _tt=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_toX") ) { _toX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toY") ) { _toY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ttt") ) { _ttt=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_fromX") ) { _fromX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fromY") ) { _fromY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubicMotion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"));
	outFields->push(HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00"));
	outFields->push(HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00"));
	outFields->push(HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromX),HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_fromY),HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toX),HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_toY),HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aX),HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_aY),HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bX),HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_bY),HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_ttt),HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(CubicMotion_obj,_tt),HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_fromX","\xef","\x5e","\x75","\x02"),
	HX_HCSTRING("_fromY","\xf0","\x5e","\x75","\x02"),
	HX_HCSTRING("_toX","\x7e","\xab","\x23","\x3f"),
	HX_HCSTRING("_toY","\x7f","\xab","\x23","\x3f"),
	HX_HCSTRING("_aX","\xf6","\x6a","\x48","\x00"),
	HX_HCSTRING("_aY","\xf7","\x6a","\x48","\x00"),
	HX_HCSTRING("_bX","\xd5","\x6b","\x48","\x00"),
	HX_HCSTRING("_bY","\xd6","\x6b","\x48","\x00"),
	HX_HCSTRING("_ttt","\xf5","\xaf","\x23","\x3f"),
	HX_HCSTRING("_tt","\x9f","\x7b","\x48","\x00"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicMotion_obj::__mClass,"__mClass");
};

#endif

hx::Class CubicMotion_obj::__mClass;

void CubicMotion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tweens.motion.CubicMotion","\x3c","\xa1","\xe5","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubicMotion_obj >;
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
