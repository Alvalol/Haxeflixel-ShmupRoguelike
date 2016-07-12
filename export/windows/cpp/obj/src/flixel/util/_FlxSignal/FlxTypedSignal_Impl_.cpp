#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal4
#include <flixel/util/_FlxSignal/FlxSignal4.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxTypedSignal_Impl_
#include <flixel/util/_FlxSignal/FlxTypedSignal_Impl_.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxTypedSignal_Impl__obj::__construct()
{
	return null();
}

//FlxTypedSignal_Impl__obj::~FlxTypedSignal_Impl__obj() { }

Dynamic FlxTypedSignal_Impl__obj::__CreateEmpty() { return  new FlxTypedSignal_Impl__obj; }
hx::ObjectPtr< FlxTypedSignal_Impl__obj > FlxTypedSignal_Impl__obj::__new()
{  hx::ObjectPtr< FlxTypedSignal_Impl__obj > _result_ = new FlxTypedSignal_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTypedSignal_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedSignal_Impl__obj > _result_ = new FlxTypedSignal_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTypedSignal_Impl__obj::_new;

Void FlxTypedSignal_Impl__obj::add( ::flixel::util::IFlxSignal this1,Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","add",0x0a4ba52c,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.add","flixel/util/FlxSignal.hx",18,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(19)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		this1->add(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,add,(void))

Void FlxTypedSignal_Impl__obj::addOnce( ::flixel::util::IFlxSignal this1,Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","addOnce",0x33af54cd,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.addOnce","flixel/util/FlxSignal.hx",23,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(24)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this1->addOnce(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,addOnce,(void))

Void FlxTypedSignal_Impl__obj::remove( ::flixel::util::IFlxSignal this1,Dynamic listener){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","remove",0xc99e2219,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.remove","flixel/util/FlxSignal.hx",28,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(29)
		Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this1->remove(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,remove,(void))

bool FlxTypedSignal_Impl__obj::has( ::flixel::util::IFlxSignal this1,Dynamic listener){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","has",0x0a50f265,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.has","flixel/util/FlxSignal.hx",33,0x3c758c5e)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(34)
	Dynamic tmp = listener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = this1->has(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTypedSignal_Impl__obj,has,return )

Void FlxTypedSignal_Impl__obj::removeAll( ::flixel::util::IFlxSignal this1){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","removeAll",0x171b2488,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.removeAll","flixel/util/FlxSignal.hx",39,0x3c758c5e)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(39)
		this1->removeAll();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,removeAll,(void))

Dynamic FlxTypedSignal_Impl__obj::get_dispatch( ::flixel::util::IFlxSignal this1){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","get_dispatch",0x56609658,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.get_dispatch","flixel/util/FlxSignal.hx",43,0x3c758c5e)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(44)
	Dynamic tmp = this1->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,get_dispatch,return )

::flixel::util::_FlxSignal::FlxSignal0 FlxTypedSignal_Impl__obj::toSignal0( ::flixel::util::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal0",0xbcacb1d8,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal0","flixel/util/FlxSignal.hx",49,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(50)
	::flixel::util::_FlxSignal::FlxSignal0 tmp = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal0,return )

::flixel::util::_FlxSignal::FlxSignal1 FlxTypedSignal_Impl__obj::toSignal1( ::flixel::util::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal1",0xbcacb1d9,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal1","flixel/util/FlxSignal.hx",55,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(56)
	::flixel::util::_FlxSignal::FlxSignal1 tmp = ::flixel::util::_FlxSignal::FlxSignal1_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal1,return )

::flixel::util::_FlxSignal::FlxSignal2 FlxTypedSignal_Impl__obj::toSignal2( ::flixel::util::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal2",0xbcacb1da,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal2","flixel/util/FlxSignal.hx",61,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(62)
	::flixel::util::_FlxSignal::FlxSignal2 tmp = ::flixel::util::_FlxSignal::FlxSignal2_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal2,return )

::flixel::util::_FlxSignal::FlxSignal3 FlxTypedSignal_Impl__obj::toSignal3( ::flixel::util::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal3",0xbcacb1db,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal3","flixel/util/FlxSignal.hx",67,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(68)
	::flixel::util::_FlxSignal::FlxSignal3 tmp = ::flixel::util::_FlxSignal::FlxSignal3_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal3,return )

::flixel::util::_FlxSignal::FlxSignal4 FlxTypedSignal_Impl__obj::toSignal4( ::flixel::util::IFlxSignal signal){
	HX_STACK_FRAME("flixel.util._FlxSignal.FlxTypedSignal_Impl_","toSignal4",0xbcacb1dc,"flixel.util._FlxSignal.FlxTypedSignal_Impl_.toSignal4","flixel/util/FlxSignal.hx",73,0x3c758c5e)
	HX_STACK_ARG(signal,"signal")
	HX_STACK_LINE(74)
	::flixel::util::_FlxSignal::FlxSignal4 tmp = ::flixel::util::_FlxSignal::FlxSignal4_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedSignal_Impl__obj,toSignal4,return )


FlxTypedSignal_Impl__obj::FlxTypedSignal_Impl__obj()
{
}

bool FlxTypedSignal_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { outValue = addOnce_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { outValue = removeAll_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toSignal0") ) { outValue = toSignal0_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toSignal1") ) { outValue = toSignal1_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toSignal2") ) { outValue = toSignal2_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toSignal3") ) { outValue = toSignal3_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toSignal4") ) { outValue = toSignal4_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_dispatch") ) { outValue = get_dispatch_dyn(); return true;  }
	}
	return false;
}

bool FlxTypedSignal_Impl__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { _new=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FlxTypedSignal_Impl__obj::_new,HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedSignal_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTypedSignal_Impl__obj::_new,"_new");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedSignal_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTypedSignal_Impl__obj::_new,"_new");
};

#endif

hx::Class FlxTypedSignal_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addOnce","\x42","\xc0","\xef","\x85"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("get_dispatch","\xc3","\x82","\x7d","\xd3"),
	HX_HCSTRING("toSignal0","\x8d","\xa4","\x76","\x70"),
	HX_HCSTRING("toSignal1","\x8e","\xa4","\x76","\x70"),
	HX_HCSTRING("toSignal2","\x8f","\xa4","\x76","\x70"),
	HX_HCSTRING("toSignal3","\x90","\xa4","\x76","\x70"),
	HX_HCSTRING("toSignal4","\x91","\xa4","\x76","\x70"),
	::String(null()) };

void FlxTypedSignal_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxTypedSignal_Impl_","\xf9","\xf1","\x06","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedSignal_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTypedSignal_Impl__obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxTypedSignal_Impl__obj >;
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

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
