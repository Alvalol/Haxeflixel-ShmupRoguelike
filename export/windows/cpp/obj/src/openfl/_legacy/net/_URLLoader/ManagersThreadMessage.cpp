#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{

::openfl::_legacy::net::_URLLoader::ManagersThreadMessage  ManagersThreadMessage_obj::GetCookiesCall(::cpp::vm::Thread callerThread,Dynamic handle)
	{ return hx::CreateEnum< ManagersThreadMessage_obj >(HX_HCSTRING("GetCookiesCall","\xb7","\xb6","\x04","\x9b"),0,hx::DynamicArray(0,2).Add(callerThread).Add(handle)); }

::openfl::_legacy::net::_URLLoader::ManagersThreadMessage  ManagersThreadMessage_obj::GetCookiesResponse(Array< ::String > ret)
	{ return hx::CreateEnum< ManagersThreadMessage_obj >(HX_HCSTRING("GetCookiesResponse","\x1a","\xcd","\x02","\x1d"),1,hx::DynamicArray(0,1).Add(ret)); }

::openfl::_legacy::net::_URLLoader::ManagersThreadMessage  ManagersThreadMessage_obj::InitializeCall(::String caCertFilePath)
	{ return hx::CreateEnum< ManagersThreadMessage_obj >(HX_HCSTRING("InitializeCall","\x2e","\xf2","\x9e","\xef"),2,hx::DynamicArray(0,1).Add(caCertFilePath)); }

HX_DEFINE_CREATE_ENUM(ManagersThreadMessage_obj)

int ManagersThreadMessage_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("GetCookiesCall","\xb7","\xb6","\x04","\x9b")) return 0;
	if (inName==HX_HCSTRING("GetCookiesResponse","\x1a","\xcd","\x02","\x1d")) return 1;
	if (inName==HX_HCSTRING("InitializeCall","\x2e","\xf2","\x9e","\xef")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ManagersThreadMessage_obj,GetCookiesCall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManagersThreadMessage_obj,GetCookiesResponse,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManagersThreadMessage_obj,InitializeCall,return)

int ManagersThreadMessage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("GetCookiesCall","\xb7","\xb6","\x04","\x9b")) return 2;
	if (inName==HX_HCSTRING("GetCookiesResponse","\x1a","\xcd","\x02","\x1d")) return 1;
	if (inName==HX_HCSTRING("InitializeCall","\x2e","\xf2","\x9e","\xef")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic ManagersThreadMessage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("GetCookiesCall","\xb7","\xb6","\x04","\x9b")) return GetCookiesCall_dyn();
	if (inName==HX_HCSTRING("GetCookiesResponse","\x1a","\xcd","\x02","\x1d")) return GetCookiesResponse_dyn();
	if (inName==HX_HCSTRING("InitializeCall","\x2e","\xf2","\x9e","\xef")) return InitializeCall_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("GetCookiesCall","\xb7","\xb6","\x04","\x9b"),
	HX_HCSTRING("GetCookiesResponse","\x1a","\xcd","\x02","\x1d"),
	HX_HCSTRING("InitializeCall","\x2e","\xf2","\x9e","\xef"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManagersThreadMessage_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ManagersThreadMessage_obj::__mClass;

Dynamic __Create_ManagersThreadMessage_obj() { return new ManagersThreadMessage_obj; }

void ManagersThreadMessage_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.net._URLLoader.ManagersThreadMessage","\xa1","\x55","\x54","\x4b"), hx::TCanCast< ManagersThreadMessage_obj >,sStaticFields,sMemberFields,
	&__Create_ManagersThreadMessage_obj, &__Create,
	&super::__SGetClass(), &CreateManagersThreadMessage_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ManagersThreadMessage_obj::__boot()
{
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader
