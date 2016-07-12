#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif
namespace openfl{
namespace utils{
namespace _Endian{

Void Endian_Impl__obj::__construct()
{
	return null();
}

//Endian_Impl__obj::~Endian_Impl__obj() { }

Dynamic Endian_Impl__obj::__CreateEmpty() { return  new Endian_Impl__obj; }
hx::ObjectPtr< Endian_Impl__obj > Endian_Impl__obj::__new()
{  hx::ObjectPtr< Endian_Impl__obj > _result_ = new Endian_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Endian_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Endian_Impl__obj > _result_ = new Endian_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Endian_Impl__obj::_BIG_ENDIAN;

Dynamic Endian_Impl__obj::_LITTLE_ENDIAN;

Dynamic Endian_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.utils._Endian.Endian_Impl_","fromString",0x910e541f,"openfl.utils._Endian.Endian_Impl_.fromString","openfl/utils/Endian.hx",9,0xb1ee6086)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,fromString,return )

::String Endian_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.utils._Endian.Endian_Impl_","toString",0x9a281df0,"openfl.utils._Endian.Endian_Impl_.toString","openfl/utils/Endian.hx",21,0xb1ee6086)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Endian_Impl__obj,toString,return )


Endian_Impl__obj::Endian_Impl__obj()
{
}

bool Endian_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Endian_Impl__obj::_BIG_ENDIAN,HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Endian_Impl__obj::_LITTLE_ENDIAN,HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::_BIG_ENDIAN,"BIG_ENDIAN");
	HX_MARK_MEMBER_NAME(Endian_Impl__obj::_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::_BIG_ENDIAN,"BIG_ENDIAN");
	HX_VISIT_MEMBER_NAME(Endian_Impl__obj::_LITTLE_ENDIAN,"LITTLE_ENDIAN");
};

#endif

hx::Class Endian_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BIG_ENDIAN","\x9a","\xd5","\x89","\xb2"),
	HX_HCSTRING("LITTLE_ENDIAN","\x04","\x50","\xec","\xfb"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Endian_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._Endian.Endian_Impl_","\xaa","\xcb","\x09","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Endian_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Endian_Impl__obj >;
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

void Endian_Impl__obj::__boot()
{
	_BIG_ENDIAN= ((Dynamic)((int)0));
	_LITTLE_ENDIAN= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Endian
