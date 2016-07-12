#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_HTTPStatusEvent
#include <openfl/_legacy/events/HTTPStatusEvent.h>
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
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace _legacy{
namespace net{

Void URLLoader_obj::__construct(::openfl::_legacy::net::URLRequest request)
{
HX_STACK_FRAME("openfl._legacy.net.URLLoader","new",0xb77dde7f,"openfl._legacy.net.URLLoader.new","openfl/_legacy/net/URLLoader.hx",192,0xef414054)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(194)
	super::__construct(null());
	HX_STACK_LINE(196)
	this->__handle = (int)0;
	HX_STACK_LINE(197)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(198)
	this->bytesTotal = (int)-1;
	HX_STACK_LINE(199)
	this->state = (int)0;
	HX_STACK_LINE(200)
	this->dataFormat = ((Dynamic)((int)1));
	HX_STACK_LINE(202)
	bool tmp = (request != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(204)
		::openfl::_legacy::net::URLRequest tmp1 = request;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		this->load(tmp1);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::openfl::_legacy::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(request);
	return _result_;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","close",0xa8c42b97,"openfl._legacy.net.URLLoader.close","openfl/_legacy/net/URLLoader.hx",211,0xef414054)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

Void URLLoader_obj::dispatchHTTPStatus( int code){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","dispatchHTTPStatus",0xa730fcd5,"openfl._legacy.net.URLLoader.dispatchHTTPStatus","openfl/_legacy/net/URLLoader.hx",218,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(220)
		::String tmp = ::openfl::_legacy::events::HTTPStatusEvent_obj::HTTP_STATUS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		int tmp1 = code;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		::openfl::_legacy::events::HTTPStatusEvent tmp2 = ::openfl::_legacy::events::HTTPStatusEvent_obj::__new(tmp,false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::openfl::_legacy::events::HTTPStatusEvent event = tmp2;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(221)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp3 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		Dynamic tmp4 = this->__handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Array< ::String > headers = tmp3->getHeaders(tmp4);		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			while((true)){
				HX_STACK_LINE(223)
				bool tmp5 = (_g < headers->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(223)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(223)
				if ((tmp6)){
					HX_STACK_LINE(223)
					break;
				}
				HX_STACK_LINE(223)
				::String tmp7 = headers->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(223)
				::String header = tmp7;		HX_STACK_VAR(header,"header");
				HX_STACK_LINE(223)
				++(_g);
				HX_STACK_LINE(225)
				int tmp8 = header.indexOf(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(225)
				int index = tmp8;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(226)
				bool tmp9 = (index > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				if ((tmp9)){
					HX_STACK_LINE(228)
					int tmp10 = index;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(228)
					::String tmp11 = header.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(228)
					int tmp12 = (index + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(228)
					int tmp13 = (header.length - index);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(228)
					int tmp14 = (tmp13 - (int)4);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(228)
					::String tmp15 = header.substr(tmp12,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(228)
					::openfl::net::URLRequestHeader tmp16 = ::openfl::net::URLRequestHeader_obj::__new(tmp11,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(228)
					event->responseHeaders->push(tmp16);
				}
			}
		}
		HX_STACK_LINE(234)
		::openfl::_legacy::events::HTTPStatusEvent tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

Array< ::String > URLLoader_obj::getCookies( ){
	HX_STACK_FRAME("openfl._legacy.net.URLLoader","getCookies",0x87bf411a,"openfl._legacy.net.URLLoader.getCookies","openfl/_legacy/net/URLLoader.hx",239,0xef414054)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	return tmp->getCookies(tmp1);
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

Void URLLoader_obj::load( ::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","load",0xd559e727,"openfl._legacy.net.URLLoader.load","openfl/_legacy/net/URLLoader.hx",258,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(260)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		::openfl::_legacy::net::URLRequest tmp1 = request;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		tmp->enqueueLoad(hx::ObjectPtr<OBJ_>(this),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Void URLLoader_obj::loadInCURLThread( ::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","loadInCURLThread",0x330ed8c2,"openfl._legacy.net.URLLoader.loadInCURLThread","openfl/_legacy/net/URLLoader.hx",265,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(267)
		this->state = (int)1;
		HX_STACK_LINE(269)
		::String tmp = request->url.substr((int)0,(int)7);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		::String pref = tmp;		HX_STACK_VAR(pref,"pref");
		HX_STACK_LINE(270)
		bool tmp1 = (pref != HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		if ((tmp1)){
			HX_STACK_LINE(270)
			tmp2 = (pref != HX_HCSTRING("https:/","\x60","\xbf","\xf8","\x5a"));
		}
		else{
			HX_STACK_LINE(270)
			tmp2 = false;
		}
		HX_STACK_LINE(270)
		if ((tmp2)){
			HX_STACK_LINE(272)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(274)
				::String tmp3 = request->url;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(274)
				::openfl::_legacy::utils::ByteArray tmp4 = ::openfl::_legacy::utils::ByteArray_obj::readFile(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				::openfl::_legacy::utils::ByteArray bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(276)
				bool tmp5 = (bytes == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				if ((tmp5)){
					HX_STACK_LINE(278)
					::String tmp6 = (HX_HCSTRING("Could not open file \"","\x48","\x89","\x1a","\x4a") + request->url);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(278)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(278)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(282)
				{
					HX_STACK_LINE(282)
					Dynamic tmp6 = this->dataFormat;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(282)
					Dynamic _g = tmp6;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(282)
					Dynamic tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(282)
					switch( (int)(tmp7)){
						case (int)1: {
							HX_STACK_LINE(284)
							::String tmp8 = bytes->asString();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(284)
							this->data = tmp8;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(285)
							::String tmp8 = bytes->asString();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(285)
							::openfl::net::URLVariables tmp9 = ::openfl::net::URLVariables_obj::__new(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(285)
							this->data = tmp9;
						}
						;break;
						default: {
							HX_STACK_LINE(286)
							this->data = bytes;
						}
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(292)
						Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(292)
						this->onError(tmp3);
						HX_STACK_LINE(293)
						return null();
					}
				}
			}
			HX_STACK_LINE(297)
			this->__dataComplete();
		}
		else{
			HX_STACK_LINE(301)
			request->__prepare();
			HX_STACK_LINE(303)
			::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp3 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			::openfl::_legacy::net::URLRequest tmp4 = request;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			Dynamic tmp5 = tmp3->create(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			this->__handle = tmp5;
			HX_STACK_LINE(305)
			Dynamic tmp6 = this->__handle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			if ((tmp7)){
				HX_STACK_LINE(307)
				this->onError(HX_HCSTRING("Could not open URL","\x45","\x5d","\x35","\xab"));
			}
			else{
				HX_STACK_LINE(311)
				::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp8 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(311)
				::List tmp9 = tmp8->getActiveLoaders();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(311)
				tmp9->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,loadInCURLThread,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","onError",0x131c73c8,"openfl._legacy.net.URLLoader.onError","openfl/_legacy/net/URLLoader.hx",320,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(322)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		::List tmp1 = tmp->getActiveLoaders();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		tmp1->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(323)
		::openfl::events::IOErrorEvent tmp2 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),true,false,msg,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::update( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","update",0x7b95d54a,"openfl._legacy.net.URLLoader.update","openfl/_legacy/net/URLLoader.hx",328,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		if ((tmp1)){
			HX_STACK_LINE(332)
			int tmp2 = this->bytesLoaded;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(332)
			int old_loaded = tmp2;		HX_STACK_VAR(old_loaded,"old_loaded");
			HX_STACK_LINE(333)
			int tmp3 = this->bytesTotal;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			int old_total = tmp3;		HX_STACK_VAR(old_total,"old_total");
			HX_STACK_LINE(334)
			::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp4 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			Dynamic tmp5 = this->__handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			tmp4->updateLoader(tmp5,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(336)
			bool tmp6 = (old_total < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(336)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(336)
			if ((tmp6)){
				HX_STACK_LINE(336)
				int tmp8 = this->bytesTotal;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(336)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(336)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(336)
				tmp7 = false;
			}
			HX_STACK_LINE(336)
			if ((tmp7)){
				HX_STACK_LINE(337)
				::String tmp8 = ::openfl::_legacy::events::Event_obj::OPEN;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(337)
				::openfl::_legacy::events::Event tmp9 = ::openfl::_legacy::events::Event_obj::__new(tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(337)
				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp9);
			}
			HX_STACK_LINE(340)
			int tmp8 = this->bytesTotal;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(340)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(340)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(340)
			if ((tmp9)){
				HX_STACK_LINE(340)
				int tmp11 = this->bytesLoaded;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(340)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(340)
				int tmp13 = old_loaded;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(340)
				tmp10 = (tmp12 != tmp13);
			}
			else{
				HX_STACK_LINE(340)
				tmp10 = false;
			}
			HX_STACK_LINE(340)
			if ((tmp10)){
				HX_STACK_LINE(341)
				int tmp11 = this->bytesLoaded;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				int tmp12 = this->bytesTotal;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(341)
				::openfl::events::ProgressEvent tmp13 = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),false,false,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(341)
				::openfl::events::ProgressEvent evt = tmp13;		HX_STACK_VAR(evt,"evt");
				HX_STACK_LINE(342)
				::openfl::events::ProgressEvent tmp14 = evt;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(342)
				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp14);
			}
			HX_STACK_LINE(345)
			::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp11 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(345)
			Dynamic tmp12 = this->__handle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(345)
			int tmp13 = tmp11->getCode(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(345)
			int code = tmp13;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(347)
			int tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(347)
			bool tmp15 = (tmp14 == (int)3);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(347)
			if ((tmp15)){
				HX_STACK_LINE(349)
				int tmp16 = code;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(349)
				this->dispatchHTTPStatus(tmp16);
				HX_STACK_LINE(350)
				::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp17 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(350)
				Dynamic tmp18 = this->__handle;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(350)
				::openfl::_legacy::utils::ByteArray tmp19 = tmp17->getData(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(350)
				::openfl::_legacy::utils::ByteArray bytes = tmp19;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					Dynamic tmp20 = this->dataFormat;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(351)
					Dynamic _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(351)
					Dynamic tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(351)
					switch( (int)(tmp21)){
						case (int)1: case (int)2: {
							HX_STACK_LINE(353)
							bool tmp22 = (bytes == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(353)
							Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(353)
							if ((tmp22)){
								HX_STACK_LINE(353)
								tmp23 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							}
							else{
								HX_STACK_LINE(353)
								tmp23 = bytes->asString();
							}
							HX_STACK_LINE(353)
							this->data = tmp23;
						}
						;break;
						default: {
							HX_STACK_LINE(355)
							this->data = bytes;
						}
					}
				}
				HX_STACK_LINE(358)
				bool tmp20 = (code < (int)400);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(358)
				if ((tmp20)){
					HX_STACK_LINE(359)
					this->__dataComplete();
				}
				else{
					HX_STACK_LINE(361)
					Dynamic tmp21 = this->data;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(361)
					int tmp22 = code;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(361)
					::openfl::events::IOErrorEvent tmp23 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),true,false,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(361)
					::openfl::events::IOErrorEvent event = tmp23;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(362)
					this->__handle = null();
					HX_STACK_LINE(363)
					::openfl::events::IOErrorEvent tmp24 = event;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(363)
					::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp24);
				}
			}
			else{
				HX_STACK_LINE(366)
				int tmp16 = this->state;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(366)
				bool tmp17 = (tmp16 == (int)4);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(366)
				if ((tmp17)){
					HX_STACK_LINE(367)
					int tmp18 = code;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(367)
					this->dispatchHTTPStatus(tmp18);
					HX_STACK_LINE(368)
					::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp19 = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(368)
					Dynamic tmp20 = this->__handle;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(368)
					::String tmp21 = tmp19->getErrorMessage(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(368)
					::String errorMessage = tmp21;		HX_STACK_VAR(errorMessage,"errorMessage");
					HX_STACK_LINE(369)
					::openfl::events::IOErrorEvent tmp22 = ::openfl::events::IOErrorEvent_obj::__new(HX_HCSTRING("ioError","\x02","\xfe","\x41","\x76"),true,false,errorMessage,code);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(369)
					::openfl::events::IOErrorEvent event = tmp22;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(370)
					this->__handle = null();
					HX_STACK_LINE(371)
					::openfl::events::IOErrorEvent tmp23 = event;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(371)
					::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp23);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

Void URLLoader_obj::__dataComplete( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","__dataComplete",0x1fc1c864,"openfl._legacy.net.URLLoader.__dataComplete","openfl/_legacy/net/URLLoader.hx",379,0xef414054)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		::List tmp1 = tmp->getActiveLoaders();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		tmp1->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(383)
		Dynamic tmp2 = this->__onComplete_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(383)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(383)
		if ((tmp3)){
			HX_STACK_LINE(385)
			Dynamic tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(385)
			bool tmp5 = this->__onComplete(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(385)
			if ((tmp5)){
				HX_STACK_LINE(387)
				::String tmp6 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(387)
				::openfl::_legacy::events::Event tmp7 = ::openfl::_legacy::events::Event_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(387)
				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp7);
			}
			else{
				HX_STACK_LINE(391)
				this->__dispatchIOErrorEvent();
			}
		}
		else{
			HX_STACK_LINE(397)
			::String tmp4 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(397)
			::openfl::_legacy::events::Event tmp5 = ::openfl::_legacy::events::Event_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__dataComplete,(void))

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

cpp::ArrayBase URLLoader_obj::eventsQueue;

bool URLLoader_obj::hasActive( ){
	HX_STACK_FRAME("openfl._legacy.net.URLLoader","hasActive",0xff70e41f,"openfl._legacy.net.URLLoader.hasActive","openfl/_legacy/net/URLLoader.hx",244,0xef414054)
	HX_STACK_LINE(246)
	::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	bool tmp1 = tmp->activeLoadersIsEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

Void URLLoader_obj::initialize( ::String caCertFilePath){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","initialize",0x7e2ab511,"openfl._legacy.net.URLLoader.initialize","openfl/_legacy/net/URLLoader.hx",251,0xef414054)
		HX_STACK_ARG(caCertFilePath,"caCertFilePath")
		HX_STACK_LINE(253)
		::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		::String tmp1 = caCertFilePath;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		tmp->initialize(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::__loadPending( ){
	HX_STACK_FRAME("openfl._legacy.net.URLLoader","__loadPending",0x19792290,"openfl._legacy.net.URLLoader.__loadPending","openfl/_legacy/net/URLLoader.hx",404,0xef414054)
	HX_STACK_LINE(406)
	::openfl::_legacy::net::_URLLoader::URLLoadersManager tmp = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	bool tmp1 = tmp->activeLoadersIsEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__loadPending,return )

Void URLLoader_obj::enqueueEvent( ::openfl::_legacy::net::URLLoader loader,::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","enqueueEvent",0x05a8e873,"openfl._legacy.net.URLLoader.enqueueEvent","openfl/_legacy/net/URLLoader.hx",410,0xef414054)
		HX_STACK_ARG(loader,"loader")
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static Dynamic Block( ::openfl::_legacy::events::Event &event,::openfl::_legacy::net::URLLoader &loader){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/net/URLLoader.hx",411,0xef414054)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58") , loader,false);
					__result->Add(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75") , event,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		Dynamic tmp = _Function_1_1::Block(event,loader);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		::openfl::_legacy::net::URLLoader_obj::eventsQueue->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,enqueueEvent,(void))

Void URLLoader_obj::__pollData( ){
{
		HX_STACK_FRAME("openfl._legacy.net.URLLoader","__pollData",0xcd9682ea,"openfl._legacy.net.URLLoader.__pollData","openfl/_legacy/net/URLLoader.hx",414,0xef414054)
		HX_STACK_LINE(415)
		int tmp = ::openfl::_legacy::net::URLLoader_obj::eventsQueue->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		if ((tmp1)){
			HX_STACK_LINE(415)
			return null();
		}
		HX_STACK_LINE(416)
		Dynamic tmp2 = ::openfl::_legacy::net::URLLoader_obj::eventsQueue->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(416)
		Dynamic evt = tmp2;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(417)
		bool tmp3 = (evt != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		if ((tmp3)){
			HX_STACK_LINE(418)
			::openfl::_legacy::events::Event tmp4 = evt->__Field(HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(418)
			evt->__Field(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"), hx::paccDynamic )(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__pollData,(void))


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__onComplete,"__onComplete");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__onComplete,"__onComplete");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dataComplete") ) { return __dataComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadInCURLThread") ) { return loadInCURLThread_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return dispatchHTTPStatus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool URLLoader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { outValue = hasActive_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__pollData") ) { outValue = __pollData_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventsQueue") ) { outValue = eventsQueue; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enqueueEvent") ) { outValue = enqueueEvent_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__loadPending") ) { outValue = __loadPending_dyn(); return true;  }
	}
	return false;
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { __onComplete=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool URLLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"eventsQueue") ) { eventsQueue=ioValue.Cast< cpp::ArrayBase >(); return true; }
	}
	return false;
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,__onComplete),HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &URLLoader_obj::urlInvalid,HX_HCSTRING("urlInvalid","\x48","\xb3","\x6a","\xfb")},
	{hx::fsInt,(void *) &URLLoader_obj::urlInit,HX_HCSTRING("urlInit","\x1f","\x76","\xd9","\xf5")},
	{hx::fsInt,(void *) &URLLoader_obj::urlLoading,HX_HCSTRING("urlLoading","\xcd","\xa6","\x15","\xc9")},
	{hx::fsInt,(void *) &URLLoader_obj::urlComplete,HX_HCSTRING("urlComplete","\x48","\x6f","\x22","\xde")},
	{hx::fsInt,(void *) &URLLoader_obj::urlError,HX_HCSTRING("urlError","\xd9","\x3d","\x7f","\xdd")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &URLLoader_obj::eventsQueue,HX_HCSTRING("eventsQueue","\xb8","\x53","\xdb","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("dispatchHTTPStatus","\x14","\x50","\x06","\xfe"),
	HX_HCSTRING("getCookies","\x59","\xbd","\x4f","\xf6"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadInCURLThread","\x41","\x8e","\xec","\x8e"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__dataComplete","\x23","\xd0","\x7e","\x0c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::eventsQueue,"eventsQueue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::eventsQueue,"eventsQueue");
};

#endif

hx::Class URLLoader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("urlInvalid","\x48","\xb3","\x6a","\xfb"),
	HX_HCSTRING("urlInit","\x1f","\x76","\xd9","\xf5"),
	HX_HCSTRING("urlLoading","\xcd","\xa6","\x15","\xc9"),
	HX_HCSTRING("urlComplete","\x48","\x6f","\x22","\xde"),
	HX_HCSTRING("urlError","\xd9","\x3d","\x7f","\xdd"),
	HX_HCSTRING("eventsQueue","\xb8","\x53","\xdb","\x0a"),
	HX_HCSTRING("hasActive","\xc0","\xf4","\x2e","\x57"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("__loadPending","\xb1","\x97","\x02","\x45"),
	HX_HCSTRING("enqueueEvent","\x72","\x32","\x80","\x96"),
	HX_HCSTRING("__pollData","\x29","\xff","\x26","\x3c"),
	::String(null()) };

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net.URLLoader","\x0d","\x33","\x77","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoader_obj::__GetStatic;
	__mClass->mSetStaticField = &URLLoader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
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

void URLLoader_obj::__boot()
{
	urlInvalid= (int)0;
	urlInit= (int)1;
	urlLoading= (int)2;
	urlComplete= (int)3;
	urlError= (int)4;
	eventsQueue= cpp::ArrayBase_obj::__new();
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
