#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

Void Lambda_obj::__construct()
{
	return null();
}

//Lambda_obj::~Lambda_obj() { }

Dynamic Lambda_obj::__CreateEmpty() { return  new Lambda_obj; }
hx::ObjectPtr< Lambda_obj > Lambda_obj::__new()
{  hx::ObjectPtr< Lambda_obj > _result_ = new Lambda_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lambda_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lambda_obj > _result_ = new Lambda_obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase Lambda_obj::array( Dynamic it){
	HX_STACK_FRAME("Lambda","array",0x9c8b0512,"Lambda.array","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",42,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_LINE(43)
	cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(44)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic i = __it->next();
		{
			HX_STACK_LINE(45)
			Dynamic tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		}
;
	}
	HX_STACK_LINE(46)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

bool Lambda_obj::has( Dynamic it,Dynamic elt){
	HX_STACK_FRAME("Lambda","has",0x3d8bd693,"Lambda.has","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",98,0x9e372efe)
	HX_STACK_ARG(it,"it")
	HX_STACK_ARG(elt,"elt")
	HX_STACK_LINE(99)
	Dynamic tmp = it->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
		Dynamic x = __it->next();
		{
			HX_STACK_LINE(100)
			bool tmp1 = (x == elt);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			if ((tmp1)){
				HX_STACK_LINE(101)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(102)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,has,return )


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#endif

hx::Class Lambda_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	::String(null()) };

void Lambda_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Lambda","\x27","\xa7","\x54","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lambda_obj >;
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

