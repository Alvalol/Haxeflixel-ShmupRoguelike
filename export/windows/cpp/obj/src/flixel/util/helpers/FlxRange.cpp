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
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxRange_obj::__construct(Dynamic start,Dynamic end)
{
HX_STACK_FRAME("flixel.util.helpers.FlxRange","new",0x6d2b50a0,"flixel.util.helpers.FlxRange.new","flixel/util/helpers/FlxRange.hx",8,0x9ab2f00f)
HX_STACK_THIS(this)
HX_STACK_ARG(start,"start")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(21)
	this->active = false;
	HX_STACK_LINE(31)
	this->start = start;
	HX_STACK_LINE(32)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(32)
		tmp1 = start;
	}
	else{
		HX_STACK_LINE(32)
		tmp1 = end;
	}
	HX_STACK_LINE(32)
	this->end = tmp1;
}
;
	return null();
}

//FlxRange_obj::~FlxRange_obj() { }

Dynamic FlxRange_obj::__CreateEmpty() { return  new FlxRange_obj; }
hx::ObjectPtr< FlxRange_obj > FlxRange_obj::__new(Dynamic start,Dynamic end)
{  hx::ObjectPtr< FlxRange_obj > _result_ = new FlxRange_obj();
	_result_->__construct(start,end);
	return _result_;}

Dynamic FlxRange_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRange_obj > _result_ = new FlxRange_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::util::helpers::FlxRange FlxRange_obj::set( Dynamic start,Dynamic end){
	HX_STACK_FRAME("flixel.util.helpers.FlxRange","set",0x6d2f1be2,"flixel.util.helpers.FlxRange.set","flixel/util/helpers/FlxRange.hx",43,0x9ab2f00f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(44)
	this->start = start;
	HX_STACK_LINE(45)
	bool tmp = (end == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	if ((tmp)){
		HX_STACK_LINE(45)
		tmp1 = start;
	}
	else{
		HX_STACK_LINE(45)
		tmp1 = end;
	}
	HX_STACK_LINE(45)
	this->end = tmp1;
	HX_STACK_LINE(47)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRange_obj,set,return )

bool FlxRange_obj::equals( ::flixel::util::helpers::FlxRange OtherFlxRange){
	HX_STACK_FRAME("flixel.util.helpers.FlxRange","equals",0x791915ff,"flixel.util.helpers.FlxRange.equals","flixel/util/helpers/FlxRange.hx",57,0x9ab2f00f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherFlxRange,"OtherFlxRange")
	HX_STACK_LINE(58)
	Dynamic tmp = this->start;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	Dynamic tmp1 = OtherFlxRange->start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	if ((tmp2)){
		HX_STACK_LINE(58)
		Dynamic tmp4 = this->end;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		Dynamic tmp6 = OtherFlxRange->end;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		tmp3 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(58)
		tmp3 = false;
	}
	HX_STACK_LINE(58)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRange_obj,equals,return )

::String FlxRange_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxRange","toString",0x253e686c,"flixel.util.helpers.FlxRange.toString","flixel/util/helpers/FlxRange.hx",65,0x9ab2f00f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(67)
		_this->label = HX_HCSTRING("start","\x62","\x74","\x0b","\x84");
		HX_STACK_LINE(67)
		Dynamic tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		_this->value = tmp3;
		HX_STACK_LINE(67)
		tmp = _this;
	}
	HX_STACK_LINE(68)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		_this->label = HX_HCSTRING("end","\xdb","\x03","\x4d","\x00");
		HX_STACK_LINE(68)
		Dynamic tmp4 = this->end;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		_this->value = tmp4;
		HX_STACK_LINE(68)
		tmp1 = _this;
	}
	HX_STACK_LINE(66)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRange_obj,toString,return )


FlxRange_obj::FlxRange_obj()
{
}

void FlxRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRange);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxRange_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
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

Dynamic FlxRange_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxRange_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxRange_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(FlxRange_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRange_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxRange_obj::__mClass;

void FlxRange_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxRange","\xae","\xc0","\x56","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRange_obj >;
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
