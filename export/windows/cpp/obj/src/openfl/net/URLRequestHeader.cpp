#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
namespace openfl{
namespace net{

Void URLRequestHeader_obj::__construct(::String __o_name,::String __o_value)
{
HX_STACK_FRAME("openfl.net.URLRequestHeader","new",0xe794452e,"openfl.net.URLRequestHeader.new","openfl/net/URLRequestHeader.hx",11,0xf4ac7ec0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_name,"name")
HX_STACK_ARG(__o_value,"value")
::String name = __o_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String value = __o_value.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(13)
	this->name = name;
	HX_STACK_LINE(14)
	this->value = value;
}
;
	return null();
}

//URLRequestHeader_obj::~URLRequestHeader_obj() { }

Dynamic URLRequestHeader_obj::__CreateEmpty() { return  new URLRequestHeader_obj; }
hx::ObjectPtr< URLRequestHeader_obj > URLRequestHeader_obj::__new(::String __o_name,::String __o_value)
{  hx::ObjectPtr< URLRequestHeader_obj > _result_ = new URLRequestHeader_obj();
	_result_->__construct(__o_name,__o_value);
	return _result_;}

Dynamic URLRequestHeader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequestHeader_obj > _result_ = new URLRequestHeader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


URLRequestHeader_obj::URLRequestHeader_obj()
{
}

void URLRequestHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequestHeader);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void URLRequestHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic URLRequestHeader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLRequestHeader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequestHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(URLRequestHeader_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(URLRequestHeader_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequestHeader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequestHeader_obj::__mClass,"__mClass");
};

#endif

hx::Class URLRequestHeader_obj::__mClass;

void URLRequestHeader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLRequestHeader","\x3c","\xd6","\xaa","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLRequestHeader_obj >;
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
} // end namespace net
