#ifndef INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage
#define INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS4(openfl,_legacy,net,_URLLoader,ManagersThreadMessage)
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{


class ManagersThreadMessage_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ManagersThreadMessage_obj OBJ_;

	public:
		ManagersThreadMessage_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._legacy.net._URLLoader.ManagersThreadMessage","\xa1","\x55","\x54","\x4b"); }
		::String __ToString() const { return HX_HCSTRING("ManagersThreadMessage.","\x97","\x25","\xd9","\x9e") + tag; }

		static ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage GetCookiesCall(::cpp::vm::Thread callerThread,Dynamic handle);
		static Dynamic GetCookiesCall_dyn();
		static ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage GetCookiesResponse(Array< ::String > ret);
		static Dynamic GetCookiesResponse_dyn();
		static ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage InitializeCall(::String caCertFilePath);
		static Dynamic InitializeCall_dyn();
};

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader

#endif /* INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage */ 
