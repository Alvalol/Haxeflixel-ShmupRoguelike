#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_IGraphicsData
#include <openfl/_legacy/display/IGraphicsData.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void IGraphicsData_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("openfl._legacy.display.IGraphicsData","new",0x66044ce0,"openfl._legacy.display.IGraphicsData.new","openfl/_legacy/display/IGraphicsData.hx",12,0x3af79f93)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(12)
	this->__handle = handle;
}
;
	return null();
}

//IGraphicsData_obj::~IGraphicsData_obj() { }

Dynamic IGraphicsData_obj::__CreateEmpty() { return  new IGraphicsData_obj; }
hx::ObjectPtr< IGraphicsData_obj > IGraphicsData_obj::__new(Dynamic handle)
{  hx::ObjectPtr< IGraphicsData_obj > _result_ = new IGraphicsData_obj();
	_result_->__construct(handle);
	return _result_;}

Dynamic IGraphicsData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IGraphicsData_obj > _result_ = new IGraphicsData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


IGraphicsData_obj::IGraphicsData_obj()
{
}

void IGraphicsData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IGraphicsData);
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

void IGraphicsData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
}

Dynamic IGraphicsData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IGraphicsData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IGraphicsData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(IGraphicsData_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsData_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsData_obj::__mClass;

void IGraphicsData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.IGraphicsData","\xee","\x9c","\x6c","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IGraphicsData_obj >;
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
} // end namespace display
