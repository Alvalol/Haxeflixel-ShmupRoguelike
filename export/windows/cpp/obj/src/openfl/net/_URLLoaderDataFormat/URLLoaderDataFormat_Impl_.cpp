#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_
#include <openfl/net/_URLLoaderDataFormat/URLLoaderDataFormat_Impl_.h>
#endif
namespace openfl{
namespace net{
namespace _URLLoaderDataFormat{

Void URLLoaderDataFormat_Impl__obj::__construct()
{
	return null();
}

//URLLoaderDataFormat_Impl__obj::~URLLoaderDataFormat_Impl__obj() { }

Dynamic URLLoaderDataFormat_Impl__obj::__CreateEmpty() { return  new URLLoaderDataFormat_Impl__obj; }
hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > URLLoaderDataFormat_Impl__obj::__new()
{  hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > _result_ = new URLLoaderDataFormat_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic URLLoaderDataFormat_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > _result_ = new URLLoaderDataFormat_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic URLLoaderDataFormat_Impl__obj::BINARY;

Dynamic URLLoaderDataFormat_Impl__obj::TEXT;

Dynamic URLLoaderDataFormat_Impl__obj::VARIABLES;

Dynamic URLLoaderDataFormat_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","fromString",0xfc3261c1,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.fromString","openfl/net/URLLoaderDataFormat.hx",10,0x0297964c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)2));
	}
	else  {
		HX_STACK_LINE(17)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(12)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoaderDataFormat_Impl__obj,fromString,return )

::String URLLoaderDataFormat_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","toString",0x62701f12,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.toString","openfl/net/URLLoaderDataFormat.hx",23,0x0297964c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("binary","\x01","\xbc","\x0b","\xed");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82");
		}
		;break;
		default: {
			HX_STACK_LINE(30)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoaderDataFormat_Impl__obj,toString,return )


URLLoaderDataFormat_Impl__obj::URLLoaderDataFormat_Impl__obj()
{
}

bool URLLoaderDataFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoaderDataFormat_Impl__obj::BINARY,HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoaderDataFormat_Impl__obj::TEXT,HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoaderDataFormat_Impl__obj::VARIABLES,HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::VARIABLES,"VARIABLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::VARIABLES,"VARIABLES");
};

#endif

hx::Class URLLoaderDataFormat_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),
	HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),
	HX_HCSTRING("VARIABLES","\x97","\x52","\xbb","\x7d"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void URLLoaderDataFormat_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","\xc8","\x76","\x0e","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoaderDataFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< URLLoaderDataFormat_Impl__obj >;
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

void URLLoaderDataFormat_Impl__obj::__boot()
{
	BINARY= ((Dynamic)((int)0));
	TEXT= ((Dynamic)((int)1));
	VARIABLES= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLLoaderDataFormat
