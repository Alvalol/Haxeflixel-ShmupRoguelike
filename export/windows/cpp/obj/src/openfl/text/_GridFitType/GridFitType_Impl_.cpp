#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__GridFitType_GridFitType_Impl_
#include <openfl/text/_GridFitType/GridFitType_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _GridFitType{

Void GridFitType_Impl__obj::__construct()
{
	return null();
}

//GridFitType_Impl__obj::~GridFitType_Impl__obj() { }

Dynamic GridFitType_Impl__obj::__CreateEmpty() { return  new GridFitType_Impl__obj; }
hx::ObjectPtr< GridFitType_Impl__obj > GridFitType_Impl__obj::__new()
{  hx::ObjectPtr< GridFitType_Impl__obj > _result_ = new GridFitType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GridFitType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GridFitType_Impl__obj > _result_ = new GridFitType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GridFitType_Impl__obj::NONE;

Dynamic GridFitType_Impl__obj::PIXEL;

Dynamic GridFitType_Impl__obj::SUBPIXEL;

Dynamic GridFitType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._GridFitType.GridFitType_Impl_","fromString",0xec7a2309,"openfl.text._GridFitType.GridFitType_Impl_.fromString","openfl/text/GridFitType.hx",10,0x99326c1c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("pixel","\x86","\xc6","\xa3","\xc2"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("subpixel","\x06","\xad","\x95","\xa4"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GridFitType_Impl__obj,fromString,return )

::String GridFitType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._GridFitType.GridFitType_Impl_","toString",0x85ab7e5a,"openfl.text._GridFitType.GridFitType_Impl_.toString","openfl/text/GridFitType.hx",23,0x99326c1c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("pixel","\x86","\xc6","\xa3","\xc2");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("subpixel","\x06","\xad","\x95","\xa4");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GridFitType_Impl__obj,toString,return )


GridFitType_Impl__obj::GridFitType_Impl__obj()
{
}

bool GridFitType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &GridFitType_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GridFitType_Impl__obj::PIXEL,HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GridFitType_Impl__obj::SUBPIXEL,HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::PIXEL,"PIXEL");
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::SUBPIXEL,"SUBPIXEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::PIXEL,"PIXEL");
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::SUBPIXEL,"SUBPIXEL");
};

#endif

hx::Class GridFitType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("PIXEL","\x66","\xfe","\x91","\x40"),
	HX_HCSTRING("SUBPIXEL","\x06","\x3d","\x1b","\xfe"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GridFitType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._GridFitType.GridFitType_Impl_","\x80","\x20","\xdc","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GridFitType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GridFitType_Impl__obj >;
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

void GridFitType_Impl__obj::__boot()
{
	NONE= ((Dynamic)((int)0));
	PIXEL= ((Dynamic)((int)1));
	SUBPIXEL= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace text
} // end namespace _GridFitType
