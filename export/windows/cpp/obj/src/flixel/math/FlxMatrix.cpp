#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
namespace flixel{
namespace math{

Void FlxMatrix_obj::__construct(Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic tx,Dynamic ty)
{
HX_STACK_FRAME("flixel.math.FlxMatrix","new",0x62dffc51,"flixel.math.FlxMatrix.new","flixel/math/FlxMatrix.hx",10,0x564a249f)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
HX_STACK_ARG(b,"b")
HX_STACK_ARG(c,"c")
HX_STACK_ARG(d,"d")
HX_STACK_ARG(tx,"tx")
HX_STACK_ARG(ty,"ty")
{
	HX_STACK_LINE(10)
	Dynamic tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	Dynamic tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	Dynamic tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	Dynamic tmp3 = d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10)
	Dynamic tmp4 = tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(10)
	Dynamic tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
}
;
	return null();
}

//FlxMatrix_obj::~FlxMatrix_obj() { }

Dynamic FlxMatrix_obj::__CreateEmpty() { return  new FlxMatrix_obj; }
hx::ObjectPtr< FlxMatrix_obj > FlxMatrix_obj::__new(Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic tx,Dynamic ty)
{  hx::ObjectPtr< FlxMatrix_obj > _result_ = new FlxMatrix_obj();
	_result_->__construct(a,b,c,d,tx,ty);
	return _result_;}

Dynamic FlxMatrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMatrix_obj > _result_ = new FlxMatrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::flixel::math::FlxMatrix FlxMatrix_obj::rotateWithTrig( Float cos,Float sin){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateWithTrig",0xc09bf72c,"flixel.math.FlxMatrix.rotateWithTrig","flixel/math/FlxMatrix.hx",20,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cos,"cos")
	HX_STACK_ARG(sin,"sin")
	HX_STACK_LINE(21)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Float tmp1 = cos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	Float tmp4 = sin;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(21)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(21)
	Float a1 = tmp6;		HX_STACK_VAR(a1,"a1");
	HX_STACK_LINE(22)
	Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(22)
	Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(22)
	Float tmp11 = cos;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(22)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(22)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(22)
	this->b = tmp13;
	HX_STACK_LINE(23)
	this->a = a1;
	HX_STACK_LINE(25)
	Float tmp14 = this->c;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(25)
	Float tmp15 = cos;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(25)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(25)
	Float tmp17 = this->d;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(25)
	Float tmp18 = sin;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(25)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(25)
	Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(25)
	Float c1 = tmp20;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(26)
	Float tmp21 = this->c;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(26)
	Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(26)
	Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(26)
	Float tmp24 = this->d;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(26)
	Float tmp25 = cos;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(26)
	Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(26)
	Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(26)
	this->d = tmp27;
	HX_STACK_LINE(27)
	this->c = c1;
	HX_STACK_LINE(29)
	Float tmp28 = this->tx;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(29)
	Float tmp29 = cos;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(29)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(29)
	Float tmp31 = this->ty;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(29)
	Float tmp32 = sin;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(29)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(29)
	Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(29)
	Float tx1 = tmp34;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(30)
	Float tmp35 = this->tx;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(30)
	Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(30)
	Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(30)
	Float tmp38 = this->ty;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(30)
	Float tmp39 = cos;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(30)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(30)
	Float tmp41 = (tmp37 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(30)
	this->ty = tmp41;
	HX_STACK_LINE(31)
	this->tx = tx1;
	HX_STACK_LINE(33)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMatrix_obj,rotateWithTrig,return )

::flixel::math::FlxMatrix FlxMatrix_obj::rotateBy180( ){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateBy180",0x7fa14e88,"flixel.math.FlxMatrix.rotateBy180","flixel/math/FlxMatrix.hx",41,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float tmp2 = this->b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	Float tmp6 = this->d;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	Float tmp8 = this->tx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	Float tmp10 = this->ty;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(42)
	Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(42)
	this->setTo(tmp1,tmp3,tmp5,tmp7,tmp9,tmp11);
	HX_STACK_LINE(43)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateBy180,return )

::flixel::math::FlxMatrix FlxMatrix_obj::rotateByPositive90( ){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateByPositive90",0xae397fb1,"flixel.math.FlxMatrix.rotateByPositive90","flixel/math/FlxMatrix.hx",51,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	Float tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	Float tmp5 = this->c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	Float tmp6 = this->ty;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(52)
	Float tmp8 = this->tx;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(52)
	this->setTo(tmp1,tmp2,tmp4,tmp5,tmp7,tmp8);
	HX_STACK_LINE(53)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateByPositive90,return )

::flixel::math::FlxMatrix FlxMatrix_obj::rotateByNegative90( ){
	HX_STACK_FRAME("flixel.math.FlxMatrix","rotateByNegative90",0xf52d666d,"flixel.math.FlxMatrix.rotateByNegative90","flixel/math/FlxMatrix.hx",61,0x564a249f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	Float tmp6 = this->ty;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	this->setTo(tmp,tmp2,tmp3,tmp5,tmp6,tmp8);
	HX_STACK_LINE(63)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateByNegative90,return )


FlxMatrix_obj::FlxMatrix_obj()
{
}

Dynamic FlxMatrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"rotateBy180") ) { return rotateBy180_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { return rotateWithTrig_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rotateByPositive90") ) { return rotateByPositive90_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByNegative90") ) { return rotateByNegative90_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rotateWithTrig","\x7d","\x0f","\x08","\xe3"),
	HX_HCSTRING("rotateBy180","\x97","\x49","\x2e","\x8f"),
	HX_HCSTRING("rotateByPositive90","\x82","\x94","\x06","\xb8"),
	HX_HCSTRING("rotateByNegative90","\x3e","\x7b","\xfa","\xfe"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMatrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMatrix_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMatrix_obj::__mClass;

void FlxMatrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxMatrix","\xdf","\x7f","\x9d","\x67");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxMatrix_obj >;
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
} // end namespace math
