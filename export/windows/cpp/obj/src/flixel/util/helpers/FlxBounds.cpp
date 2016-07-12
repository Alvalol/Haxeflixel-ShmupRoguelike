#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxBounds_obj::__construct(Dynamic min,Dynamic max)
{
HX_STACK_FRAME("flixel.util.helpers.FlxBounds","new",0x7ac2a156,"flixel.util.helpers.FlxBounds.new","flixel/util/helpers/FlxBounds.hx",8,0x3d29a4bb)
HX_STACK_THIS(this)
HX_STACK_ARG(min,"min")
HX_STACK_ARG(max,"max")
{
	HX_STACK_LINE(21)
	this->active = false;
	HX_STACK_LINE(31)
	this->min = min;
	HX_STACK_LINE(32)
	bool tmp = (max == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(32)
		tmp1 = min;
	}
	else{
		HX_STACK_LINE(32)
		tmp1 = max;
	}
	HX_STACK_LINE(32)
	this->max = tmp1;
}
;
	return null();
}

//FlxBounds_obj::~FlxBounds_obj() { }

Dynamic FlxBounds_obj::__CreateEmpty() { return  new FlxBounds_obj; }
hx::ObjectPtr< FlxBounds_obj > FlxBounds_obj::__new(Dynamic min,Dynamic max)
{  hx::ObjectPtr< FlxBounds_obj > _result_ = new FlxBounds_obj();
	_result_->__construct(min,max);
	return _result_;}

Dynamic FlxBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBounds_obj > _result_ = new FlxBounds_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::util::helpers::FlxBounds FlxBounds_obj::set( Dynamic min,Dynamic max){
	HX_STACK_FRAME("flixel.util.helpers.FlxBounds","set",0x7ac66c98,"flixel.util.helpers.FlxBounds.set","flixel/util/helpers/FlxBounds.hx",43,0x3d29a4bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(44)
	this->min = min;
	HX_STACK_LINE(45)
	bool tmp = (max == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(45)
		tmp1 = min;
	}
	else{
		HX_STACK_LINE(45)
		tmp1 = max;
	}
	HX_STACK_LINE(45)
	this->max = tmp1;
	HX_STACK_LINE(46)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBounds_obj,set,return )

bool FlxBounds_obj::equals( ::flixel::util::helpers::FlxBounds OtherFlxBounds){
	HX_STACK_FRAME("flixel.util.helpers.FlxBounds","equals",0x1d409b09,"flixel.util.helpers.FlxBounds.equals","flixel/util/helpers/FlxBounds.hx",56,0x3d29a4bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherFlxBounds,"OtherFlxBounds")
	HX_STACK_LINE(57)
	Dynamic tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	Dynamic tmp1 = OtherFlxBounds->min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	if ((tmp2)){
		HX_STACK_LINE(57)
		Dynamic tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		Dynamic tmp6 = OtherFlxBounds->max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		tmp3 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(57)
		tmp3 = false;
	}
	HX_STACK_LINE(57)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBounds_obj,equals,return )

::String FlxBounds_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxBounds","toString",0xc618c3f6,"flixel.util.helpers.FlxBounds.toString","flixel/util/helpers/FlxBounds.hx",64,0x3d29a4bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(66)
		_this->label = HX_HCSTRING("min","\x92","\x11","\x53","\x00");
		HX_STACK_LINE(66)
		Dynamic tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		_this->value = tmp3;
		HX_STACK_LINE(66)
		tmp = _this;
	}
	HX_STACK_LINE(67)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(67)
		_this->label = HX_HCSTRING("max","\xa4","\x0a","\x53","\x00");
		HX_STACK_LINE(67)
		Dynamic tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		_this->value = tmp4;
		HX_STACK_LINE(67)
		tmp1 = _this;
	}
	HX_STACK_LINE(65)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBounds_obj,toString,return )


FlxBounds_obj::FlxBounds_obj()
{
}

void FlxBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBounds);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxBounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBounds_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBounds_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsBool,(int)offsetof(FlxBounds_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBounds_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBounds_obj::__mClass;

void FlxBounds_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxBounds","\x64","\xfe","\x1d","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBounds_obj >;
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
} // end namespace util
} // end namespace helpers
