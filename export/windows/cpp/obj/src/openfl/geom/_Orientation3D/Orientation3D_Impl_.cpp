#include <hxcpp.h>

#ifndef INCLUDED_openfl_geom__Orientation3D_Orientation3D_Impl_
#include <openfl/geom/_Orientation3D/Orientation3D_Impl_.h>
#endif
namespace openfl{
namespace geom{
namespace _Orientation3D{

Void Orientation3D_Impl__obj::__construct()
{
	return null();
}

//Orientation3D_Impl__obj::~Orientation3D_Impl__obj() { }

Dynamic Orientation3D_Impl__obj::__CreateEmpty() { return  new Orientation3D_Impl__obj; }
hx::ObjectPtr< Orientation3D_Impl__obj > Orientation3D_Impl__obj::__new()
{  hx::ObjectPtr< Orientation3D_Impl__obj > _result_ = new Orientation3D_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Orientation3D_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Orientation3D_Impl__obj > _result_ = new Orientation3D_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Orientation3D_Impl__obj::AXIS_ANGLE;

Dynamic Orientation3D_Impl__obj::EULER_ANGLES;

Dynamic Orientation3D_Impl__obj::QUATERNION;

Dynamic Orientation3D_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.geom._Orientation3D.Orientation3D_Impl_","fromString",0xa47116a0,"openfl.geom._Orientation3D.Orientation3D_Impl_.fromString","openfl/geom/Orientation3D.hx",10,0xf4ac08f1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(12)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("axisAngle","\x72","\x2f","\x86","\x7c"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("eulerAngles","\x89","\xd7","\xc4","\x64"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("quaternion","\x1e","\x0d","\xca","\x1b"))){
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Orientation3D_Impl__obj,fromString,return )

::String Orientation3D_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.geom._Orientation3D.Orientation3D_Impl_","toString",0xf11d8e31,"openfl.geom._Orientation3D.Orientation3D_Impl_.toString","openfl/geom/Orientation3D.hx",23,0xf4ac08f1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(25)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(27)
			tmp1 = HX_HCSTRING("axisAngle","\x72","\x2f","\x86","\x7c");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("eulerAngles","\x89","\xd7","\xc4","\x64");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("quaternion","\x1e","\x0d","\xca","\x1b");
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


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Orientation3D_Impl__obj,toString,return )


Orientation3D_Impl__obj::Orientation3D_Impl__obj()
{
}

bool Orientation3D_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Orientation3D_Impl__obj::AXIS_ANGLE,HX_HCSTRING("AXIS_ANGLE","\x55","\x56","\x74","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Orientation3D_Impl__obj::EULER_ANGLES,HX_HCSTRING("EULER_ANGLES","\xb6","\x6c","\xda","\x49")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Orientation3D_Impl__obj::QUATERNION,HX_HCSTRING("QUATERNION","\x1e","\x81","\xd3","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::AXIS_ANGLE,"AXIS_ANGLE");
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::EULER_ANGLES,"EULER_ANGLES");
	HX_MARK_MEMBER_NAME(Orientation3D_Impl__obj::QUATERNION,"QUATERNION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::AXIS_ANGLE,"AXIS_ANGLE");
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::EULER_ANGLES,"EULER_ANGLES");
	HX_VISIT_MEMBER_NAME(Orientation3D_Impl__obj::QUATERNION,"QUATERNION");
};

#endif

hx::Class Orientation3D_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AXIS_ANGLE","\x55","\x56","\x74","\xbd"),
	HX_HCSTRING("EULER_ANGLES","\xb6","\x6c","\xda","\x49"),
	HX_HCSTRING("QUATERNION","\x1e","\x81","\xd3","\x0d"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Orientation3D_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom._Orientation3D.Orientation3D_Impl_","\x89","\x67","\xe7","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Orientation3D_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Orientation3D_Impl__obj >;
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

void Orientation3D_Impl__obj::__boot()
{
	AXIS_ANGLE= ((Dynamic)((int)0));
	EULER_ANGLES= ((Dynamic)((int)1));
	QUATERNION= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace geom
} // end namespace _Orientation3D
