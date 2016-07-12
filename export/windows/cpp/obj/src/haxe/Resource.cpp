#include <hxcpp.h>

#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
namespace haxe{

Void Resource_obj::__construct()
{
	return null();
}

//Resource_obj::~Resource_obj() { }

Dynamic Resource_obj::__CreateEmpty() { return  new Resource_obj; }
hx::ObjectPtr< Resource_obj > Resource_obj::__new()
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct();
	return _result_;}

Dynamic Resource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Resource_obj > _result_ = new Resource_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes Resource_obj::getBytes( ::String name){
	HX_STACK_FRAME("haxe.Resource","getBytes",0x9bc1712d,"haxe.Resource.getBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/Resource.hx",33,0x060ae9cd)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(34)
	Array< unsigned char > array = ::__hxcpp_resource_bytes(name);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(35)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	if ((tmp)){
		HX_STACK_LINE(35)
		return null();
	}
	HX_STACK_LINE(36)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(array);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Resource_obj,getBytes,return )


Resource_obj::Resource_obj()
{
}

bool Resource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Resource_obj::__mClass,"__mClass");
};

#endif

hx::Class Resource_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	::String(null()) };

void Resource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Resource","\x36","\x0e","\x12","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Resource_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Resource_obj >;
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

} // end namespace haxe
