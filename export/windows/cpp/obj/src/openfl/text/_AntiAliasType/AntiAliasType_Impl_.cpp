#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_
#include <openfl/text/_AntiAliasType/AntiAliasType_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _AntiAliasType{

Void AntiAliasType_Impl__obj::__construct()
{
	return null();
}

//AntiAliasType_Impl__obj::~AntiAliasType_Impl__obj() { }

Dynamic AntiAliasType_Impl__obj::__CreateEmpty() { return  new AntiAliasType_Impl__obj; }
hx::ObjectPtr< AntiAliasType_Impl__obj > AntiAliasType_Impl__obj::__new()
{  hx::ObjectPtr< AntiAliasType_Impl__obj > _result_ = new AntiAliasType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AntiAliasType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AntiAliasType_Impl__obj > _result_ = new AntiAliasType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AntiAliasType_Impl__obj::ADVANCED;

Dynamic AntiAliasType_Impl__obj::NORMAL;

Dynamic AntiAliasType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._AntiAliasType.AntiAliasType_Impl_","fromString",0x0b2fac83,"openfl.text._AntiAliasType.AntiAliasType_Impl_.fromString","openfl/text/AntiAliasType.hx",9,0x9da7f159)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("normal","\x27","\x72","\x69","\x30"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)1));
	}
	else  {
		HX_STACK_LINE(15)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(11)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AntiAliasType_Impl__obj,fromString,return )

::String AntiAliasType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._AntiAliasType.AntiAliasType_Impl_","toString",0xa8e1d554,"openfl.text._AntiAliasType.AntiAliasType_Impl_.toString","openfl/text/AntiAliasType.hx",21,0x9da7f159)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("advanced","\xa2","\x69","\x7b","\x3b");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
		}
		;break;
		default: {
			HX_STACK_LINE(27)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AntiAliasType_Impl__obj,toString,return )


AntiAliasType_Impl__obj::AntiAliasType_Impl__obj()
{
}

bool AntiAliasType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &AntiAliasType_Impl__obj::ADVANCED,HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95")},
	{hx::fsObject /*Dynamic*/ ,(void *) &AntiAliasType_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AntiAliasType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AntiAliasType_Impl__obj::ADVANCED,"ADVANCED");
	HX_MARK_MEMBER_NAME(AntiAliasType_Impl__obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AntiAliasType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AntiAliasType_Impl__obj::ADVANCED,"ADVANCED");
	HX_VISIT_MEMBER_NAME(AntiAliasType_Impl__obj::NORMAL,"NORMAL");
};

#endif

hx::Class AntiAliasType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ADVANCED","\xa2","\xf9","\x00","\x95"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void AntiAliasType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._AntiAliasType.AntiAliasType_Impl_","\xc6","\x90","\x74","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AntiAliasType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AntiAliasType_Impl__obj >;
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

void AntiAliasType_Impl__obj::__boot()
{
	ADVANCED= ((Dynamic)((int)0));
	NORMAL= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace text
} // end namespace _AntiAliasType
