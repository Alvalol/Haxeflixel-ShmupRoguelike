#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
namespace openfl{
namespace _legacy{
namespace filters{

Void BitmapFilter_obj::__construct(::String __o_type)
{
HX_STACK_FRAME("openfl._legacy.filters.BitmapFilter","new",0x2f0b3990,"openfl._legacy.filters.BitmapFilter.new","openfl/_legacy/filters/BitmapFilter.hx",12,0xbc61c83d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
::String type = __o_type.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(12)
	this->type = type;
}
;
	return null();
}

//BitmapFilter_obj::~BitmapFilter_obj() { }

Dynamic BitmapFilter_obj::__CreateEmpty() { return  new BitmapFilter_obj; }
hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__new(::String __o_type)
{  hx::ObjectPtr< BitmapFilter_obj > _result_ = new BitmapFilter_obj();
	_result_->__construct(__o_type);
	return _result_;}

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFilter_obj > _result_ = new BitmapFilter_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::filters::BitmapFilter BitmapFilter_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.filters.BitmapFilter","clone",0x22ab288d,"openfl._legacy.filters.BitmapFilter.clone","openfl/_legacy/filters/BitmapFilter.hx",17,0xbc61c83d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::String tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	::openfl::_legacy::filters::BitmapFilter tmp1 = ::openfl::_legacy::filters::BitmapFilter_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )


BitmapFilter_obj::BitmapFilter_obj()
{
}

void BitmapFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFilter);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void BitmapFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BitmapFilter_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

void BitmapFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filters.BitmapFilter","\x9e","\x71","\xf3","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
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
} // end namespace filters
