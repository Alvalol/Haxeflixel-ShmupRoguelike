#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
namespace openfl{
namespace _legacy{
namespace _system{

Void System_obj::__construct()
{
	return null();
}

//System_obj::~System_obj() { }

Dynamic System_obj::__CreateEmpty() { return  new System_obj; }
hx::ObjectPtr< System_obj > System_obj::__new()
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

Dynamic System_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< System_obj > _result_ = new System_obj();
	_result_->__construct();
	return _result_;}

::String System_obj::deviceID;

int System_obj::totalMemory;

Void System_obj::exit( hx::Null< int >  __o_code){
int code = __o_code.Default(0);
	HX_STACK_FRAME("openfl._legacy.system.System","exit",0xa066c9c2,"openfl._legacy.system.System.exit","openfl/_legacy/system/System.hx",16,0xbb880195)
	HX_STACK_ARG(code,"code")
{
		HX_STACK_LINE(16)
		::openfl::_legacy::Lib_obj::close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

Void System_obj::gc( ){
{
		HX_STACK_FRAME("openfl._legacy.system.System","gc",0x6f427bc0,"openfl._legacy.system.System.gc","openfl/_legacy/system/System.hx",26,0xbb880195)
		HX_STACK_LINE(26)
		::cpp::vm::Gc_obj::run(true);
		HX_STACK_LINE(26)
		return null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,gc,(void))

::String System_obj::get_deviceID( ){
	HX_STACK_FRAME("openfl._legacy.system.System","get_deviceID",0x69c4b89e,"openfl._legacy.system.System.get_deviceID","openfl/_legacy/system/System.hx",43,0xbb880195)
	HX_STACK_LINE(43)
	::String tmp = ::openfl::_legacy::_system::System_obj::lime_get_unique_device_identifier();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_deviceID,return )

int System_obj::get_totalMemory( ){
	HX_STACK_FRAME("openfl._legacy.system.System","get_totalMemory",0x4a1e1d58,"openfl._legacy.system.System.get_totalMemory","openfl/_legacy/system/System.hx",46,0xbb880195)
	HX_STACK_LINE(51)
	int tmp = ::__hxcpp_gc_used_bytes();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_totalMemory,return )

Dynamic System_obj::lime_get_unique_device_identifier;


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gc") ) { outValue = gc_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deviceID") ) { outValue = inCallProp == hx::paccAlways ? get_deviceID() : deviceID; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalMemory") ) { outValue = inCallProp == hx::paccAlways ? get_totalMemory() : totalMemory; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_deviceID") ) { outValue = get_deviceID_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalMemory") ) { outValue = get_totalMemory_dyn(); return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_get_unique_device_identifier") ) { outValue = lime_get_unique_device_identifier; return true;  }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"deviceID") ) { deviceID=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalMemory") ) { totalMemory=ioValue.Cast< int >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_get_unique_device_identifier") ) { lime_get_unique_device_identifier=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &System_obj::deviceID,HX_HCSTRING("deviceID","\xf1","\xed","\x98","\xa4")},
	{hx::fsInt,(void *) &System_obj::totalMemory,HX_HCSTRING("totalMemory","\xe5","\xbd","\xf5","\xca")},
	{hx::fsObject /*Dynamic*/ ,(void *) &System_obj::lime_get_unique_device_identifier,HX_HCSTRING("lime_get_unique_device_identifier","\x77","\x41","\xf8","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(System_obj::deviceID,"deviceID");
	HX_MARK_MEMBER_NAME(System_obj::totalMemory,"totalMemory");
	HX_MARK_MEMBER_NAME(System_obj::lime_get_unique_device_identifier,"lime_get_unique_device_identifier");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(System_obj::deviceID,"deviceID");
	HX_VISIT_MEMBER_NAME(System_obj::totalMemory,"totalMemory");
	HX_VISIT_MEMBER_NAME(System_obj::lime_get_unique_device_identifier,"lime_get_unique_device_identifier");
};

#endif

hx::Class System_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("deviceID","\xf1","\xed","\x98","\xa4"),
	HX_HCSTRING("totalMemory","\xe5","\xbd","\xf5","\xca"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("gc","\x1c","\x5a","\x00","\x00"),
	HX_HCSTRING("get_deviceID","\xfa","\xa1","\xb2","\x59"),
	HX_HCSTRING("get_totalMemory","\x7c","\x75","\xd7","\x8b"),
	HX_HCSTRING("lime_get_unique_device_identifier","\x77","\x41","\xf8","\x0d"),
	::String(null()) };

void System_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.system.System","\x4a","\x90","\x04","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< System_obj >;
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

void System_obj::__boot()
{
	lime_get_unique_device_identifier= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_get_unique_device_identifier","\x59","\x68","\x90","\x00"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace system
