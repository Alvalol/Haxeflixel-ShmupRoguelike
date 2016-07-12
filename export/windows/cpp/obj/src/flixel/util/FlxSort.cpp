#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSort
#include <flixel/util/FlxSort.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace util{

Void FlxSort_obj::__construct()
{
	return null();
}

//FlxSort_obj::~FlxSort_obj() { }

Dynamic FlxSort_obj::__CreateEmpty() { return  new FlxSort_obj; }
hx::ObjectPtr< FlxSort_obj > FlxSort_obj::__new()
{  hx::ObjectPtr< FlxSort_obj > _result_ = new FlxSort_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxSort_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSort_obj > _result_ = new FlxSort_obj();
	_result_->__construct();
	return _result_;}

int FlxSort_obj::ASCENDING;

int FlxSort_obj::DESCENDING;

int FlxSort_obj::byY( int Order,::flixel::FlxObject Obj1,::flixel::FlxObject Obj2){
	HX_STACK_FRAME("flixel.util.FlxSort","byY",0x7c03b7ea,"flixel.util.FlxSort.byY","flixel/util/FlxSort.hx",17,0x198bbf28)
	HX_STACK_ARG(Order,"Order")
	HX_STACK_ARG(Obj1,"Obj1")
	HX_STACK_ARG(Obj2,"Obj2")
	HX_STACK_LINE(18)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		Float Value1 = Obj1->y;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(18)
		Float Value2 = Obj2->y;		HX_STACK_VAR(Value2,"Value2");
		HX_STACK_LINE(18)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(18)
		bool tmp1 = (Value1 < Value2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		if ((tmp1)){
			HX_STACK_LINE(18)
			result = Order;
		}
		else{
			HX_STACK_LINE(18)
			bool tmp2 = (Value1 > Value2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(18)
			if ((tmp2)){
				HX_STACK_LINE(18)
				int tmp3 = Order;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(18)
				int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(18)
				result = tmp4;
			}
		}
		HX_STACK_LINE(18)
		tmp = result;
	}
	HX_STACK_LINE(18)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSort_obj,byY,return )

int FlxSort_obj::byValues( int Order,Float Value1,Float Value2){
	HX_STACK_FRAME("flixel.util.FlxSort","byValues",0xe62fb2d1,"flixel.util.FlxSort.byValues","flixel/util/FlxSort.hx",25,0x198bbf28)
	HX_STACK_ARG(Order,"Order")
	HX_STACK_ARG(Value1,"Value1")
	HX_STACK_ARG(Value2,"Value2")
	HX_STACK_LINE(26)
	int result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(28)
	bool tmp = (Value1 < Value2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	if ((tmp)){
		HX_STACK_LINE(30)
		result = Order;
	}
	else{
		HX_STACK_LINE(32)
		bool tmp1 = (Value1 > Value2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		if ((tmp1)){
			HX_STACK_LINE(34)
			int tmp2 = Order;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			int tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			result = tmp3;
		}
	}
	HX_STACK_LINE(37)
	int tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxSort_obj,byValues,return )


FlxSort_obj::FlxSort_obj()
{
}

bool FlxSort_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"byY") ) { outValue = byY_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"byValues") ) { outValue = byValues_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxSort_obj::ASCENDING,HX_HCSTRING("ASCENDING","\xb8","\x0d","\xd0","\xa9")},
	{hx::fsInt,(void *) &FlxSort_obj::DESCENDING,HX_HCSTRING("DESCENDING","\xf8","\x88","\x5d","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSort_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxSort_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxSort_obj::DESCENDING,"DESCENDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSort_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxSort_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxSort_obj::DESCENDING,"DESCENDING");
};

#endif

hx::Class FlxSort_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ASCENDING","\xb8","\x0d","\xd0","\xa9"),
	HX_HCSTRING("DESCENDING","\xf8","\x88","\x5d","\x09"),
	HX_HCSTRING("byY","\xa2","\xc6","\x4a","\x00"),
	HX_HCSTRING("byValues","\x19","\x49","\x40","\x11"),
	::String(null()) };

void FlxSort_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxSort","\xb6","\x0d","\x59","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSort_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxSort_obj >;
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

void FlxSort_obj::__boot()
{
	ASCENDING= (int)-1;
	DESCENDING= (int)1;
}

} // end namespace flixel
} // end namespace util
