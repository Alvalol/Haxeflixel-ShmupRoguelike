#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_
#include <openfl/display3D/_Context3DCompareMode/Context3DCompareMode_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DCompareMode{

Void Context3DCompareMode_Impl__obj::__construct()
{
	return null();
}

//Context3DCompareMode_Impl__obj::~Context3DCompareMode_Impl__obj() { }

Dynamic Context3DCompareMode_Impl__obj::__CreateEmpty() { return  new Context3DCompareMode_Impl__obj; }
hx::ObjectPtr< Context3DCompareMode_Impl__obj > Context3DCompareMode_Impl__obj::__new()
{  hx::ObjectPtr< Context3DCompareMode_Impl__obj > _result_ = new Context3DCompareMode_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DCompareMode_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DCompareMode_Impl__obj > _result_ = new Context3DCompareMode_Impl__obj();
	_result_->__construct();
	return _result_;}

int Context3DCompareMode_Impl__obj::ALWAYS;

int Context3DCompareMode_Impl__obj::EQUAL;

int Context3DCompareMode_Impl__obj::GREATER;

int Context3DCompareMode_Impl__obj::GREATER_EQUAL;

int Context3DCompareMode_Impl__obj::LESS;

int Context3DCompareMode_Impl__obj::LESS_EQUAL;

int Context3DCompareMode_Impl__obj::NEVER;

int Context3DCompareMode_Impl__obj::NOT_EQUAL;

int Context3DCompareMode_Impl__obj::_new( int a){
	HX_STACK_FRAME("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","_new",0xaeee8447,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_._new","openfl/display3D/Context3DCompareMode.hx",22,0x9103941b)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(22)
	int tmp = a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,_new,return )

int Context3DCompareMode_Impl__obj::fromInt( int s){
	HX_STACK_FRAME("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","fromInt",0xc10b427f,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.fromInt","openfl/display3D/Context3DCompareMode.hx",27,0x9103941b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(29)
	int tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,fromInt,return )

int Context3DCompareMode_Impl__obj::toInt( int this1){
	HX_STACK_FRAME("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","toInt",0x79c3588e,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_.toInt","openfl/display3D/Context3DCompareMode.hx",34,0x9103941b)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(36)
	int tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DCompareMode_Impl__obj,toInt,return )


Context3DCompareMode_Impl__obj::Context3DCompareMode_Impl__obj()
{
}

bool Context3DCompareMode_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::GREATER_EQUAL,HX_HCSTRING("GREATER_EQUAL","\x2f","\xd3","\x96","\xd6")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::LESS_EQUAL,HX_HCSTRING("LESS_EQUAL","\xee","\xb2","\x55","\xe4")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(void *) &Context3DCompareMode_Impl__obj::NOT_EQUAL,HX_HCSTRING("NOT_EQUAL","\x08","\x7c","\x82","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::GREATER_EQUAL,"GREATER_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::LESS_EQUAL,"LESS_EQUAL");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(Context3DCompareMode_Impl__obj::NOT_EQUAL,"NOT_EQUAL");
};

#endif

hx::Class Context3DCompareMode_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("GREATER_EQUAL","\x2f","\xd3","\x96","\xd6"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("LESS_EQUAL","\xee","\xb2","\x55","\xe4"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("NOT_EQUAL","\x08","\x7c","\x82","\x7d"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	::String(null()) };

void Context3DCompareMode_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_","\x48","\x5b","\xc7","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DCompareMode_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DCompareMode_Impl__obj >;
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

void Context3DCompareMode_Impl__obj::__boot()
{
	ALWAYS= (int)519;
	EQUAL= (int)514;
	GREATER= (int)516;
	GREATER_EQUAL= (int)518;
	LESS= (int)513;
	LESS_EQUAL= (int)515;
	NEVER= (int)512;
	NOT_EQUAL= (int)517;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DCompareMode
