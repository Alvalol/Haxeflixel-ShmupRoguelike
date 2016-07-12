#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__SharedObjectFlushStatus_SharedObjectFlushStatus_Impl_
#include <openfl/net/_SharedObjectFlushStatus/SharedObjectFlushStatus_Impl_.h>
#endif
namespace openfl{
namespace net{
namespace _SharedObjectFlushStatus{

Void SharedObjectFlushStatus_Impl__obj::__construct()
{
	return null();
}

//SharedObjectFlushStatus_Impl__obj::~SharedObjectFlushStatus_Impl__obj() { }

Dynamic SharedObjectFlushStatus_Impl__obj::__CreateEmpty() { return  new SharedObjectFlushStatus_Impl__obj; }
hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > SharedObjectFlushStatus_Impl__obj::__new()
{  hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > _result_ = new SharedObjectFlushStatus_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SharedObjectFlushStatus_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SharedObjectFlushStatus_Impl__obj > _result_ = new SharedObjectFlushStatus_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SharedObjectFlushStatus_Impl__obj::FLUSHED;

Dynamic SharedObjectFlushStatus_Impl__obj::PENDING;

Dynamic SharedObjectFlushStatus_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","fromString",0x2501bd23,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.fromString","openfl/net/SharedObjectFlushStatus.hx",9,0x3756667d)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("flushed","\x23","\xf4","\x4c","\x6a"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("pending","\x57","\x98","\xec","\x2b"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObjectFlushStatus_Impl__obj,fromString,return )

::String SharedObjectFlushStatus_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","toString",0x6f407df4,"openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_.toString","openfl/net/SharedObjectFlushStatus.hx",21,0x3756667d)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("flushed","\x23","\xf4","\x4c","\x6a");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("pending","\x57","\x98","\xec","\x2b");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObjectFlushStatus_Impl__obj,toString,return )


SharedObjectFlushStatus_Impl__obj::SharedObjectFlushStatus_Impl__obj()
{
}

bool SharedObjectFlushStatus_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &SharedObjectFlushStatus_Impl__obj::FLUSHED,HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SharedObjectFlushStatus_Impl__obj::PENDING,HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::FLUSHED,"FLUSHED");
	HX_MARK_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::PENDING,"PENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::FLUSHED,"FLUSHED");
	HX_VISIT_MEMBER_NAME(SharedObjectFlushStatus_Impl__obj::PENDING,"PENDING");
};

#endif

hx::Class SharedObjectFlushStatus_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FLUSHED","\x03","\xc8","\x20","\xea"),
	HX_HCSTRING("PENDING","\x37","\x6c","\xc0","\xab"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void SharedObjectFlushStatus_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net._SharedObjectFlushStatus.SharedObjectFlushStatus_Impl_","\x26","\x7c","\x0d","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SharedObjectFlushStatus_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SharedObjectFlushStatus_Impl__obj >;
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

void SharedObjectFlushStatus_Impl__obj::__boot()
{
	FLUSHED= ((Dynamic)((int)0));
	PENDING= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace net
} // end namespace _SharedObjectFlushStatus
