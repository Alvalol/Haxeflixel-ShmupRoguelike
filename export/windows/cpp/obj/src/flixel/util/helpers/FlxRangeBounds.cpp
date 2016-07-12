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
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxRangeBounds_obj::__construct(Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax)
{
HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","new",0x191ab035,"flixel.util.helpers.FlxRangeBounds.new","flixel/util/helpers/FlxRangeBounds.hx",9,0xa540535a)
HX_STACK_THIS(this)
HX_STACK_ARG(startMin,"startMin")
HX_STACK_ARG(startMax,"startMax")
HX_STACK_ARG(endMin,"endMin")
HX_STACK_ARG(endMax,"endMax")
{
	HX_STACK_LINE(22)
	this->active = false;
	HX_STACK_LINE(35)
	Dynamic tmp = startMin;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = (startMax == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(35)
		tmp2 = startMin;
	}
	else{
		HX_STACK_LINE(35)
		tmp2 = startMax;
	}
	HX_STACK_LINE(35)
	::flixel::util::helpers::FlxBounds tmp3 = ::flixel::util::helpers::FlxBounds_obj::__new(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	this->start = tmp3;
	HX_STACK_LINE(36)
	bool tmp4 = (endMin == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	if ((tmp4)){
		HX_STACK_LINE(36)
		tmp5 = startMin;
	}
	else{
		HX_STACK_LINE(36)
		tmp5 = endMin;
	}
	HX_STACK_LINE(36)
	bool tmp6 = (endMax == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(36)
	Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(36)
	if ((tmp6)){
		HX_STACK_LINE(36)
		::flixel::util::helpers::FlxBounds tmp8 = this->start;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		tmp7 = tmp8->max;
	}
	else{
		HX_STACK_LINE(36)
		tmp7 = endMax;
	}
	HX_STACK_LINE(36)
	::flixel::util::helpers::FlxBounds tmp8 = ::flixel::util::helpers::FlxBounds_obj::__new(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	this->end = tmp8;
}
;
	return null();
}

//FlxRangeBounds_obj::~FlxRangeBounds_obj() { }

Dynamic FlxRangeBounds_obj::__CreateEmpty() { return  new FlxRangeBounds_obj; }
hx::ObjectPtr< FlxRangeBounds_obj > FlxRangeBounds_obj::__new(Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax)
{  hx::ObjectPtr< FlxRangeBounds_obj > _result_ = new FlxRangeBounds_obj();
	_result_->__construct(startMin,startMax,endMin,endMax);
	return _result_;}

Dynamic FlxRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRangeBounds_obj > _result_ = new FlxRangeBounds_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::flixel::util::helpers::FlxRangeBounds FlxRangeBounds_obj::set( Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax){
	HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","set",0x191e7b77,"flixel.util.helpers.FlxRangeBounds.set","flixel/util/helpers/FlxRangeBounds.hx",49,0xa540535a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startMin,"startMin")
	HX_STACK_ARG(startMax,"startMax")
	HX_STACK_ARG(endMin,"endMin")
	HX_STACK_ARG(endMax,"endMax")
	HX_STACK_LINE(50)
	::flixel::util::helpers::FlxBounds tmp = this->start;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	tmp->min = startMin;
	HX_STACK_LINE(51)
	bool tmp1 = (startMax == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(51)
		::flixel::util::helpers::FlxBounds tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		tmp2 = tmp3->min;
	}
	else{
		HX_STACK_LINE(51)
		tmp2 = startMax;
	}
	HX_STACK_LINE(51)
	::flixel::util::helpers::FlxBounds tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	tmp3->max = tmp2;
	HX_STACK_LINE(52)
	bool tmp4 = (endMin == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	if ((tmp4)){
		HX_STACK_LINE(52)
		::flixel::util::helpers::FlxBounds tmp6 = this->start;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		tmp5 = tmp6->min;
	}
	else{
		HX_STACK_LINE(52)
		tmp5 = endMin;
	}
	HX_STACK_LINE(52)
	::flixel::util::helpers::FlxBounds tmp6 = this->end;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	tmp6->min = tmp5;
	HX_STACK_LINE(53)
	bool tmp7 = (endMax == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	if ((tmp7)){
		HX_STACK_LINE(53)
		bool tmp9 = (endMin == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		if ((tmp9)){
			HX_STACK_LINE(53)
			::flixel::util::helpers::FlxBounds tmp10 = this->start;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			tmp8 = tmp10->max;
		}
		else{
			HX_STACK_LINE(53)
			::flixel::util::helpers::FlxBounds tmp10 = this->end;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			tmp8 = tmp10->min;
		}
	}
	else{
		HX_STACK_LINE(53)
		tmp8 = endMax;
	}
	HX_STACK_LINE(53)
	::flixel::util::helpers::FlxBounds tmp9 = this->end;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	tmp9->max = tmp8;
	HX_STACK_LINE(55)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRangeBounds_obj,set,return )

bool FlxRangeBounds_obj::equals( ::flixel::util::helpers::FlxRangeBounds OtherRangeBounds){
	HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","equals",0xda4be18a,"flixel.util.helpers.FlxRangeBounds.equals","flixel/util/helpers/FlxRangeBounds.hx",65,0xa540535a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherRangeBounds,"OtherRangeBounds")
	HX_STACK_LINE(66)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds tmp1 = this->start;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds OtherFlxBounds = OtherRangeBounds->start;		HX_STACK_VAR(OtherFlxBounds,"OtherFlxBounds");
		HX_STACK_LINE(66)
		bool tmp3 = (_this->min == OtherFlxBounds->min);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		if ((tmp5)){
			HX_STACK_LINE(66)
			tmp = (_this->max == OtherFlxBounds->max);
		}
		else{
			HX_STACK_LINE(66)
			tmp = false;
		}
	}
	HX_STACK_LINE(66)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	if ((tmp)){
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds tmp2 = this->end;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(66)
		::flixel::util::helpers::FlxBounds OtherFlxBounds = OtherRangeBounds->end;		HX_STACK_VAR(OtherFlxBounds,"OtherFlxBounds");
		HX_STACK_LINE(66)
		bool tmp4 = (_this->min == OtherFlxBounds->min);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		if ((tmp6)){
			HX_STACK_LINE(66)
			tmp1 = (_this->max == OtherFlxBounds->max);
		}
		else{
			HX_STACK_LINE(66)
			tmp1 = false;
		}
	}
	else{
		HX_STACK_LINE(66)
		tmp1 = false;
	}
	HX_STACK_LINE(66)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRangeBounds_obj,equals,return )

::String FlxRangeBounds_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","toString",0x51636cb7,"flixel.util.helpers.FlxRangeBounds.toString","flixel/util/helpers/FlxRangeBounds.hx",73,0xa540535a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(75)
		_this->label = HX_HCSTRING("start.min","\x86","\x2f","\xd5","\xec");
		HX_STACK_LINE(75)
		::flixel::util::helpers::FlxBounds tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		_this->value = tmp3->min;
		HX_STACK_LINE(75)
		tmp = _this;
	}
	HX_STACK_LINE(76)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(76)
		_this->label = HX_HCSTRING("start.max","\x98","\x28","\xd5","\xec");
		HX_STACK_LINE(76)
		::flixel::util::helpers::FlxBounds tmp4 = this->start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		_this->value = tmp4->min;
		HX_STACK_LINE(76)
		tmp1 = _this;
	}
	HX_STACK_LINE(77)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(77)
		_this->label = HX_HCSTRING("end.min","\x7f","\x6f","\x06","\x16");
		HX_STACK_LINE(77)
		::flixel::util::helpers::FlxBounds tmp5 = this->end;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		_this->value = tmp5->min;
		HX_STACK_LINE(77)
		tmp2 = _this;
	}
	HX_STACK_LINE(78)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(78)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(78)
		_this->label = HX_HCSTRING("end.max","\x91","\x68","\x06","\x16");
		HX_STACK_LINE(78)
		::flixel::util::helpers::FlxBounds tmp6 = this->end;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		_this->value = tmp6->max;
		HX_STACK_LINE(78)
		tmp3 = _this;
	}
	HX_STACK_LINE(74)
	::String tmp4 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRangeBounds_obj,toString,return )


FlxRangeBounds_obj::FlxRangeBounds_obj()
{
}

void FlxRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxRangeBounds_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic FlxRangeBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRangeBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxRangeBounds_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxRangeBounds_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(FlxRangeBounds_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
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
	HX_MARK_MEMBER_NAME(FlxRangeBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRangeBounds_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxRangeBounds_obj::__mClass;

void FlxRangeBounds_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.helpers.FlxRangeBounds","\xc3","\x71","\x2f","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRangeBounds_obj >;
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
