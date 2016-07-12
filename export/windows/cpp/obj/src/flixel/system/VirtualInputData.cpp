#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_VirtualInputData
#include <flixel/system/VirtualInputData.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace _system{

Void VirtualInputData_obj::__construct(Dynamic __o_size)
{
HX_STACK_FRAME("flixel.system.VirtualInputData","new",0x4566b028,"flixel.system.VirtualInputData.new","openfl/_legacy/Assets.hx",2181,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
Dynamic size = __o_size.Default(0);
{
	HX_STACK_LINE(2183)
	super::__construct(null());
	HX_STACK_LINE(2188)
	{
		HX_STACK_LINE(2188)
		::String tmp = ::flixel::_system::VirtualInputData_obj::resourceName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2188)
		::haxe::io::Bytes tmp1 = ::haxe::Resource_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2188)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(2188)
		this->b = bytes->b;
		HX_STACK_LINE(2188)
		this->length = bytes->length;
	}
}
;
	return null();
}

//VirtualInputData_obj::~VirtualInputData_obj() { }

Dynamic VirtualInputData_obj::__CreateEmpty() { return  new VirtualInputData_obj; }
hx::ObjectPtr< VirtualInputData_obj > VirtualInputData_obj::__new(Dynamic __o_size)
{  hx::ObjectPtr< VirtualInputData_obj > _result_ = new VirtualInputData_obj();
	_result_->__construct(__o_size);
	return _result_;}

Dynamic VirtualInputData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VirtualInputData_obj > _result_ = new VirtualInputData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String VirtualInputData_obj::resourceName;


VirtualInputData_obj::VirtualInputData_obj()
{
}

bool VirtualInputData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true;  }
	}
	return false;
}

bool VirtualInputData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &VirtualInputData_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VirtualInputData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VirtualInputData_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VirtualInputData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VirtualInputData_obj::resourceName,"resourceName");
};

#endif

hx::Class VirtualInputData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null()) };

void VirtualInputData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.VirtualInputData","\x36","\xbc","\x79","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VirtualInputData_obj::__GetStatic;
	__mClass->mSetStaticField = &VirtualInputData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VirtualInputData_obj >;
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

void VirtualInputData_obj::__boot()
{
	resourceName= HX_HCSTRING("__ASSET__:file_flixel_system_VirtualInputData","\xcf","\xa9","\xc1","\x46");
}

} // end namespace flixel
} // end namespace system
