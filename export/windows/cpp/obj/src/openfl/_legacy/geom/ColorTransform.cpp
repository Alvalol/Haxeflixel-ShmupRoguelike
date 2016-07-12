#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
namespace openfl{
namespace _legacy{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
HX_STACK_FRAME("openfl._legacy.geom.ColorTransform","new",0xcc49f429,"openfl._legacy.geom.ColorTransform.new","openfl/_legacy/geom/ColorTransform.hx",18,0x065f2cc8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_redMultiplier,"redMultiplier")
HX_STACK_ARG(__o_greenMultiplier,"greenMultiplier")
HX_STACK_ARG(__o_blueMultiplier,"blueMultiplier")
HX_STACK_ARG(__o_alphaMultiplier,"alphaMultiplier")
HX_STACK_ARG(__o_redOffset,"redOffset")
HX_STACK_ARG(__o_greenOffset,"greenOffset")
HX_STACK_ARG(__o_blueOffset,"blueOffset")
HX_STACK_ARG(__o_alphaOffset,"alphaOffset")
Float redMultiplier = __o_redMultiplier.Default(((Float)1.0));
Float greenMultiplier = __o_greenMultiplier.Default(((Float)1.0));
Float blueMultiplier = __o_blueMultiplier.Default(((Float)1.0));
Float alphaMultiplier = __o_alphaMultiplier.Default(((Float)1.0));
Float redOffset = __o_redOffset.Default(((Float)0.0));
Float greenOffset = __o_greenOffset.Default(((Float)0.0));
Float blueOffset = __o_blueOffset.Default(((Float)0.0));
Float alphaOffset = __o_alphaOffset.Default(((Float)0.0));
{
	HX_STACK_LINE(20)
	this->redMultiplier = redMultiplier;
	HX_STACK_LINE(21)
	this->greenMultiplier = greenMultiplier;
	HX_STACK_LINE(22)
	this->blueMultiplier = blueMultiplier;
	HX_STACK_LINE(23)
	this->alphaMultiplier = alphaMultiplier;
	HX_STACK_LINE(24)
	this->redOffset = redOffset;
	HX_STACK_LINE(25)
	this->greenOffset = greenOffset;
	HX_STACK_LINE(26)
	this->blueOffset = blueOffset;
	HX_STACK_LINE(27)
	this->alphaOffset = alphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return _result_;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void ColorTransform_obj::concat( ::openfl::_legacy::geom::ColorTransform second){
{
		HX_STACK_FRAME("openfl._legacy.geom.ColorTransform","concat",0x00eda8eb,"openfl._legacy.geom.ColorTransform.concat","openfl/_legacy/geom/ColorTransform.hx",32,0x065f2cc8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(34)
		hx::AddEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(35)
		hx::AddEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(36)
		hx::AddEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(37)
		hx::AddEq(this->alphaMultiplier,second->alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("openfl._legacy.geom.ColorTransform","get_color",0xcc126e43,"openfl._legacy.geom.ColorTransform.get_color","openfl/_legacy/geom/ColorTransform.hx",49,0x065f2cc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	Float tmp = this->redOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	Float tmp3 = this->greenOffset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	Float tmp7 = this->blueOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	int tmp9 = (int(tmp6) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(51)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("openfl._legacy.geom.ColorTransform","set_color",0xaf635a4f,"openfl._legacy.geom.ColorTransform.set_color","openfl/_legacy/geom/ColorTransform.hx",56,0x065f2cc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	this->redOffset = tmp1;
	HX_STACK_LINE(59)
	int tmp2 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	this->greenOffset = tmp3;
	HX_STACK_LINE(60)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	this->blueOffset = tmp4;
	HX_STACK_LINE(62)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(63)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(64)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(66)
	int tmp5 = this->get_color();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.geom.ColorTransform","\xb7","\xab","\x08","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace geom
