#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_ManagersThreadMessage
#include <openfl/_legacy/net/_URLLoader/ManagersThreadMessage.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager
#include <openfl/_legacy/net/_URLLoader/URLLoadersManager.h>
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
namespace openfl{
namespace _legacy{
namespace net{
namespace _URLLoader{

Void URLLoadersManager_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","new",0xbbd4e2d8,"openfl._legacy.net._URLLoader.URLLoadersManager.new","openfl/_legacy/net/URLLoader.hx",46,0xef414054)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(47)
	::List tmp = ::List_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	this->activeLoaders = tmp;
	HX_STACK_LINE(48)
	this->loadsQueue = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(49)
	::cpp::vm::Mutex tmp1 = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	this->loadsQueueMutex = tmp1;
	HX_STACK_LINE(50)
	Dynamic tmp2 = this->mainLoop_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	::cpp::vm::Thread tmp3 = ::cpp::vm::Thread_obj::create(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	this->managersThread = tmp3;
}
;
	return null();
}

//URLLoadersManager_obj::~URLLoadersManager_obj() { }

Dynamic URLLoadersManager_obj::__CreateEmpty() { return  new URLLoadersManager_obj; }
hx::ObjectPtr< URLLoadersManager_obj > URLLoadersManager_obj::__new()
{  hx::ObjectPtr< URLLoadersManager_obj > _result_ = new URLLoadersManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic URLLoadersManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoadersManager_obj > _result_ = new URLLoadersManager_obj();
	_result_->__construct();
	return _result_;}

Void URLLoadersManager_obj::mainLoop( ){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","mainLoop",0xf86b15c5,"openfl._legacy.net._URLLoader.URLLoadersManager.mainLoop","openfl/_legacy/net/URLLoader.hx",55,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(57)
			::cpp::vm::Mutex tmp = this->loadsQueueMutex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(57)
			tmp->acquire();
			HX_STACK_LINE(58)
			Dynamic tmp1 = this->loadsQueue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(58)
			Dynamic loadCall = tmp1;		HX_STACK_VAR(loadCall,"loadCall");
			HX_STACK_LINE(59)
			::cpp::vm::Mutex tmp2 = this->loadsQueueMutex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			tmp2->release();
			HX_STACK_LINE(60)
			bool tmp3 = (loadCall != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(61)
				::openfl::_legacy::net::URLRequest tmp4 = loadCall->__Field(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				loadCall->__Field(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"), hx::paccDynamic )->__Field(HX_HCSTRING("loadInCURLThread","\x41","\x8e","\xec","\x8e"), hx::paccDynamic )(tmp4);
			}
			HX_STACK_LINE(64)
			::List tmp4 = this->activeLoaders;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			bool tmp5 = tmp4->isEmpty();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			if ((tmp6)){
				HX_STACK_LINE(65)
				::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_process_loaders();
				HX_STACK_LINE(66)
				::List tmp7 = this->activeLoaders;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				::List oldLoaders = tmp7;		HX_STACK_VAR(oldLoaders,"oldLoaders");
				HX_STACK_LINE(67)
				::List tmp8 = ::List_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				this->activeLoaders = tmp8;
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					::_List::ListIterator tmp9 = ::_List::ListIterator_obj::__new(oldLoaders->h);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(68)
					::_List::ListIterator _g = tmp9;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(68)
					while((true)){
						HX_STACK_LINE(68)
						bool tmp10 = (_g->head != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(68)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(68)
						if ((tmp11)){
							HX_STACK_LINE(68)
							break;
						}
						HX_STACK_LINE(68)
						Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(68)
						{
							HX_STACK_LINE(68)
							Dynamic tmp13 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(68)
							_g->val = tmp13;
							HX_STACK_LINE(68)
							Dynamic tmp14 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(68)
							_g->head = tmp14;
							HX_STACK_LINE(68)
							tmp12 = _g->val;
						}
						HX_STACK_LINE(68)
						::openfl::_legacy::net::URLLoader loader = ((::openfl::_legacy::net::URLLoader)(tmp12));		HX_STACK_VAR(loader,"loader");
						HX_STACK_LINE(69)
						loader->update();
						HX_STACK_LINE(70)
						bool tmp13 = (loader->state == (int)2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(70)
						if ((tmp13)){
							HX_STACK_LINE(71)
							::List tmp14 = this->activeLoaders;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(71)
							::openfl::_legacy::net::URLLoader tmp15 = loader;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(71)
							tmp14->push(tmp15);
						}
					}
				}
			}
			HX_STACK_LINE(76)
			Dynamic tmp7 = ::cpp::vm::Thread_obj::readMessage(false);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::openfl::_legacy::net::_URLLoader::ManagersThreadMessage msg = tmp7;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(77)
			bool tmp8 = (msg != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			if ((tmp8)){
				HX_STACK_LINE(78)
				::openfl::_legacy::net::_URLLoader::ManagersThreadMessage tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				tmp9 = hx::TCast< ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage >::cast(msg);
				HX_STACK_LINE(78)
				msg = tmp9;
				HX_STACK_LINE(79)
				switch( (int)(msg->__Index())){
					case (int)0: {
						HX_STACK_LINE(79)
						Dynamic tmp10 = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						Dynamic handle = tmp10;		HX_STACK_VAR(handle,"handle");
						HX_STACK_LINE(79)
						::cpp::vm::Thread tmp11 = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(79)
						::cpp::vm::Thread callerThread = tmp11;		HX_STACK_VAR(callerThread,"callerThread");
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(81)
							Dynamic tmp12 = handle;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(81)
							Array< ::String > cookies = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_cookies(tmp12);		HX_STACK_VAR(cookies,"cookies");
							HX_STACK_LINE(82)
							::openfl::_legacy::net::_URLLoader::ManagersThreadMessage tmp13 = ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::GetCookiesResponse(cookies);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(82)
							callerThread->sendMessage(tmp13);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(79)
						::String tmp10 = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						::String caCertFilePath = tmp10;		HX_STACK_VAR(caCertFilePath,"caCertFilePath");
						HX_STACK_LINE(84)
						{
							HX_STACK_LINE(85)
							::String tmp11 = caCertFilePath;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(85)
							::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_initialize(tmp11);
						}
					}
					;break;
					default: {
					}
				}
			}
			HX_STACK_LINE(91)
			::Sys_obj::sleep(((Float)0.1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,mainLoop,(void))

Void URLLoadersManager_obj::enqueueLoad( ::openfl::_legacy::net::URLLoader loader,::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","enqueueLoad",0xc12c0d46,"openfl._legacy.net._URLLoader.URLLoadersManager.enqueueLoad","openfl/_legacy/net/URLLoader.hx",97,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loader,"loader")
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(98)
		::cpp::vm::Mutex tmp = this->loadsQueueMutex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		tmp->acquire();
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_legacy::net::URLRequest &request,::openfl::_legacy::net::URLLoader &loader){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/URLLoader.hx",99,0xef414054)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58") , loader,false);
					__result->Add(HX_HCSTRING("request","\x4f","\xdf","\x84","\x44") , request,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(99)
		Dynamic tmp1 = _Function_1_1::Block(request,loader);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		this->loadsQueue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(100)
		::cpp::vm::Mutex tmp2 = this->loadsQueueMutex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		tmp2->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoadersManager_obj,enqueueLoad,(void))

bool URLLoadersManager_obj::activeLoadersIsEmpty( ){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","activeLoadersIsEmpty",0xee882811,"openfl._legacy.net._URLLoader.URLLoadersManager.activeLoadersIsEmpty","openfl/_legacy/net/URLLoader.hx",103,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	::List tmp = this->activeLoaders;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,activeLoadersIsEmpty,return )

::List URLLoadersManager_obj::getActiveLoaders( ){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getActiveLoaders",0x03d47fec,"openfl._legacy.net._URLLoader.URLLoadersManager.getActiveLoaders","openfl/_legacy/net/URLLoader.hx",107,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	::List tmp = this->activeLoaders;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,getActiveLoaders,return )

Dynamic URLLoadersManager_obj::create( ::openfl::_legacy::net::URLRequest request){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","create",0x5c572f84,"openfl._legacy.net._URLLoader.URLLoadersManager.create","openfl/_legacy/net/URLLoader.hx",111,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(request,"request")
	HX_STACK_LINE(112)
	::openfl::_legacy::net::URLRequest tmp = request;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	Dynamic tmp1 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_create(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,create,return )

Void URLLoadersManager_obj::updateLoader( Dynamic handle,::openfl::_legacy::net::URLLoader loader){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","updateLoader",0x03e7cd84,"openfl._legacy.net._URLLoader.URLLoadersManager.updateLoader","openfl/_legacy/net/URLLoader.hx",115,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(loader,"loader")
		HX_STACK_LINE(116)
		Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::openfl::_legacy::net::URLLoader tmp1 = loader;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_update_loader(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLLoadersManager_obj,updateLoader,(void))

int URLLoadersManager_obj::getCode( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getCode",0x72cf0f5b,"openfl._legacy.net._URLLoader.URLLoadersManager.getCode","openfl/_legacy/net/URLLoader.hx",119,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(120)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	int tmp1 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_code(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getCode,return )

::String URLLoadersManager_obj::getErrorMessage( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getErrorMessage",0x223a570d,"openfl._legacy.net._URLLoader.URLLoadersManager.getErrorMessage","openfl/_legacy/net/URLLoader.hx",123,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(124)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::String tmp1 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_error_message(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getErrorMessage,return )

::openfl::_legacy::utils::ByteArray URLLoadersManager_obj::getData( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getData",0x736db458,"openfl._legacy.net._URLLoader.URLLoadersManager.getData","openfl/_legacy/net/URLLoader.hx",127,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(128)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	::openfl::_legacy::utils::ByteArray tmp1 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_data(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getData,return )

Array< ::String > URLLoadersManager_obj::getHeaders( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getHeaders",0x34b484d8,"openfl._legacy.net._URLLoader.URLLoadersManager.getHeaders","openfl/_legacy/net/URLLoader.hx",131,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(132)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::lime_curl_get_headers(tmp);
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getHeaders,return )

Void URLLoadersManager_obj::initialize( ::String caCertFilePath){
{
		HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","initialize",0x6f05ddd8,"openfl._legacy.net._URLLoader.URLLoadersManager.initialize","openfl/_legacy/net/URLLoader.hx",135,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(caCertFilePath,"caCertFilePath")
		HX_STACK_LINE(136)
		::cpp::vm::Thread tmp = this->managersThread;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::String tmp1 = caCertFilePath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		::openfl::_legacy::net::_URLLoader::ManagersThreadMessage tmp2 = ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::InitializeCall(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		tmp->sendMessage(tmp2);
		HX_STACK_LINE(137)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,initialize,(void))

Array< ::String > URLLoadersManager_obj::getCookies( Dynamic handle){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getCookies",0x789a69e1,"openfl._legacy.net._URLLoader.URLLoadersManager.getCookies","openfl/_legacy/net/URLLoader.hx",140,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(141)
	::cpp::vm::Thread tmp = this->managersThread;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	Dynamic tmp2 = handle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	::openfl::_legacy::net::_URLLoader::ManagersThreadMessage tmp3 = ::openfl::_legacy::net::_URLLoader::ManagersThreadMessage_obj::GetCookiesCall(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	tmp->sendMessage(tmp3);
	HX_STACK_LINE(142)
	Dynamic tmp4 = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(142)
	::openfl::_legacy::net::_URLLoader::ManagersThreadMessage msg = tmp4;		HX_STACK_VAR(msg,"msg");
	HX_STACK_LINE(143)
	switch( (int)(msg->__Index())){
		case (int)1: {
			HX_STACK_LINE(143)
			Array< ::String > result = (::openfl::_legacy::net::_URLLoader::ManagersThreadMessage(msg))->__Param(0);		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(145)
			return result;
		}
		;break;
		default: {
			HX_STACK_LINE(148)
			return Array_obj< ::String >::__new();
		}
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoadersManager_obj,getCookies,return )

::openfl::_legacy::net::_URLLoader::URLLoadersManager URLLoadersManager_obj::instance;

::openfl::_legacy::net::_URLLoader::URLLoadersManager URLLoadersManager_obj::getInstance( ){
	HX_STACK_FRAME("openfl._legacy.net._URLLoader.URLLoadersManager","getInstance",0xfee12cc3,"openfl._legacy.net._URLLoader.URLLoadersManager.getInstance","openfl/_legacy/net/URLLoader.hx",39,0xef414054)
	HX_STACK_LINE(40)
	::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(41)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp2 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance = tmp2;
	}
	HX_STACK_LINE(43)
	::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp2 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoadersManager_obj,getInstance,return )

Dynamic URLLoadersManager_obj::lime_curl_create;

Dynamic URLLoadersManager_obj::lime_curl_process_loaders;

Dynamic URLLoadersManager_obj::lime_curl_update_loader;

Dynamic URLLoadersManager_obj::lime_curl_get_code;

Dynamic URLLoadersManager_obj::lime_curl_get_error_message;

Dynamic URLLoadersManager_obj::lime_curl_get_data;

Dynamic URLLoadersManager_obj::lime_curl_get_cookies;

Dynamic URLLoadersManager_obj::lime_curl_get_headers;

Dynamic URLLoadersManager_obj::lime_curl_initialize;


URLLoadersManager_obj::URLLoadersManager_obj()
{
}

void URLLoadersManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoadersManager);
	HX_MARK_MEMBER_NAME(managersThread,"managersThread");
	HX_MARK_MEMBER_NAME(activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(loadsQueue,"loadsQueue");
	HX_MARK_MEMBER_NAME(loadsQueueMutex,"loadsQueueMutex");
	HX_MARK_END_CLASS();
}

void URLLoadersManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(managersThread,"managersThread");
	HX_VISIT_MEMBER_NAME(activeLoaders,"activeLoaders");
	HX_VISIT_MEMBER_NAME(loadsQueue,"loadsQueue");
	HX_VISIT_MEMBER_NAME(loadsQueueMutex,"loadsQueueMutex");
}

Dynamic URLLoadersManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getCode") ) { return getCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mainLoop") ) { return mainLoop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadsQueue") ) { return loadsQueue; }
		if (HX_FIELD_EQ(inName,"getHeaders") ) { return getHeaders_dyn(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enqueueLoad") ) { return enqueueLoad_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateLoader") ) { return updateLoader_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { return activeLoaders; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"managersThread") ) { return managersThread; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadsQueueMutex") ) { return loadsQueueMutex; }
		if (HX_FIELD_EQ(inName,"getErrorMessage") ) { return getErrorMessage_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getActiveLoaders") ) { return getActiveLoaders_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"activeLoadersIsEmpty") ) { return activeLoadersIsEmpty_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool URLLoadersManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { outValue = lime_curl_create; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { outValue = lime_curl_get_code; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { outValue = lime_curl_get_data; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { outValue = lime_curl_initialize; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { outValue = lime_curl_get_cookies; return true;  }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { outValue = lime_curl_get_headers; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { outValue = lime_curl_update_loader; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { outValue = lime_curl_process_loaders; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { outValue = lime_curl_get_error_message; return true;  }
	}
	return false;
}

Dynamic URLLoadersManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"loadsQueue") ) { loadsQueue=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=inValue.Cast< ::List >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"managersThread") ) { managersThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadsQueueMutex") ) { loadsQueueMutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool URLLoadersManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::openfl::_legacy::net::_URLLoader::URLLoadersManager >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { lime_curl_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { lime_curl_get_code=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { lime_curl_get_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { lime_curl_initialize=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { lime_curl_get_cookies=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { lime_curl_get_headers=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { lime_curl_update_loader=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { lime_curl_process_loaders=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { lime_curl_get_error_message=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void URLLoadersManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("managersThread","\xd0","\x8c","\x61","\xe7"));
	outFields->push(HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0"));
	outFields->push(HX_HCSTRING("loadsQueue","\xc4","\x36","\xb9","\x6c"));
	outFields->push(HX_HCSTRING("loadsQueueMutex","\x1b","\xc2","\x9e","\x1b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(URLLoadersManager_obj,managersThread),HX_HCSTRING("managersThread","\xd0","\x8c","\x61","\xe7")},
	{hx::fsObject /*::List*/ ,(int)offsetof(URLLoadersManager_obj,activeLoaders),HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(URLLoadersManager_obj,loadsQueue),HX_HCSTRING("loadsQueue","\xc4","\x36","\xb9","\x6c")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(URLLoadersManager_obj,loadsQueueMutex),HX_HCSTRING("loadsQueueMutex","\x1b","\xc2","\x9e","\x1b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::net::_URLLoader::URLLoadersManager*/ ,(void *) &URLLoadersManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_create,HX_HCSTRING("lime_curl_create","\xc5","\x33","\xa9","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_process_loaders,HX_HCSTRING("lime_curl_process_loaders","\x07","\x1e","\x56","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_update_loader,HX_HCSTRING("lime_curl_update_loader","\x20","\xe5","\x16","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_code,HX_HCSTRING("lime_curl_get_code","\xbf","\xbd","\xbc","\xde")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_error_message,HX_HCSTRING("lime_curl_get_error_message","\x3e","\x34","\xef","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_data,HX_HCSTRING("lime_curl_get_data","\xbc","\x62","\x5b","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_cookies,HX_HCSTRING("lime_curl_get_cookies","\xfd","\xd1","\x06","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_get_headers,HX_HCSTRING("lime_curl_get_headers","\xf4","\xec","\x20","\x80")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoadersManager_obj::lime_curl_initialize,HX_HCSTRING("lime_curl_initialize","\x99","\x96","\xb5","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("managersThread","\xd0","\x8c","\x61","\xe7"),
	HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0"),
	HX_HCSTRING("loadsQueue","\xc4","\x36","\xb9","\x6c"),
	HX_HCSTRING("loadsQueueMutex","\x1b","\xc2","\x9e","\x1b"),
	HX_HCSTRING("mainLoop","\x3d","\x1b","\x3a","\xa0"),
	HX_HCSTRING("enqueueLoad","\xce","\xc2","\x1f","\x42"),
	HX_HCSTRING("activeLoadersIsEmpty","\x89","\x81","\x85","\x05"),
	HX_HCSTRING("getActiveLoaders","\x64","\xbd","\xd9","\x2a"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("updateLoader","\xfc","\xee","\x32","\x58"),
	HX_HCSTRING("getCode","\xe3","\x60","\x47","\x14"),
	HX_HCSTRING("getErrorMessage","\x95","\x70","\x2b","\x6e"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("getHeaders","\x50","\xd8","\x69","\xb2"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("getCookies","\x59","\xbd","\x4f","\xf6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_create,"lime_curl_create");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_MARK_MEMBER_NAME(URLLoadersManager_obj::lime_curl_initialize,"lime_curl_initialize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_create,"lime_curl_create");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_VISIT_MEMBER_NAME(URLLoadersManager_obj::lime_curl_initialize,"lime_curl_initialize");
};

#endif

hx::Class URLLoadersManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("getInstance","\x4b","\xe2","\xd4","\x7f"),
	HX_HCSTRING("lime_curl_create","\xc5","\x33","\xa9","\xa5"),
	HX_HCSTRING("lime_curl_process_loaders","\x07","\x1e","\x56","\x76"),
	HX_HCSTRING("lime_curl_update_loader","\x20","\xe5","\x16","\x0c"),
	HX_HCSTRING("lime_curl_get_code","\xbf","\xbd","\xbc","\xde"),
	HX_HCSTRING("lime_curl_get_error_message","\x3e","\x34","\xef","\x7e"),
	HX_HCSTRING("lime_curl_get_data","\xbc","\x62","\x5b","\xdf"),
	HX_HCSTRING("lime_curl_get_cookies","\xfd","\xd1","\x06","\xc4"),
	HX_HCSTRING("lime_curl_get_headers","\xf4","\xec","\x20","\x80"),
	HX_HCSTRING("lime_curl_initialize","\x99","\x96","\xb5","\xd0"),
	::String(null()) };

void URLLoadersManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net._URLLoader.URLLoadersManager","\xe6","\xd6","\xcc","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoadersManager_obj::__GetStatic;
	__mClass->mSetStaticField = &URLLoadersManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoadersManager_obj >;
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

void URLLoadersManager_obj::__boot()
{
	lime_curl_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_create","\x23","\xe3","\x8d","\xe3"),(int)1);
	lime_curl_process_loaders= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_process_loaders","\xe9","\x92","\x3b","\xdf"),(int)0);
	lime_curl_update_loader= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_update_loader","\x82","\xfd","\x3b","\x8f"),(int)2);
	lime_curl_get_code= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_get_code","\x9d","\x80","\xb2","\xe2"),(int)1);
	lime_curl_get_error_message= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_get_error_message","\xa0","\x25","\xc5","\x03"),(int)1);
	lime_curl_get_data= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_get_data","\x9a","\x25","\x51","\xe3"),(int)1);
	lime_curl_get_cookies= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_get_cookies","\xdf","\xad","\x53","\xb5"),(int)1);
	lime_curl_get_headers= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_get_headers","\xd6","\xc8","\x6d","\x71"),(int)1);
	lime_curl_initialize= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_curl_initialize","\xf7","\x4c","\xc8","\x0f"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
} // end namespace _URLLoader
