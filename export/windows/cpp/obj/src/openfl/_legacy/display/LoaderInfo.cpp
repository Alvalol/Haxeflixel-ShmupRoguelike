#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LoaderInfo
#include <openfl/_legacy/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void LoaderInfo_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","new",0x87d2e343,"openfl._legacy.display.LoaderInfo.new","openfl/_legacy/display/LoaderInfo.hx",37,0xb6d254aa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	super::__construct(null());
	HX_STACK_LINE(41)
	::openfl::_system::ApplicationDomain tmp = ::openfl::_system::ApplicationDomain_obj::currentDomain;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	this->applicationDomain = tmp;
	HX_STACK_LINE(42)
	this->childAllowsParent = true;
	HX_STACK_LINE(43)
	this->frameRate = (int)0;
	HX_STACK_LINE(44)
	this->dataFormat = ((Dynamic)((int)0));
	HX_STACK_LINE(45)
	this->loaderURL = null();
}
;
	return null();
}

//LoaderInfo_obj::~LoaderInfo_obj() { }

Dynamic LoaderInfo_obj::__CreateEmpty() { return  new LoaderInfo_obj; }
hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new()
{  hx::ObjectPtr< LoaderInfo_obj > _result_ = new LoaderInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderInfo_obj > _result_ = new LoaderInfo_obj();
	_result_->__construct();
	return _result_;}

Void LoaderInfo_obj::load( ::openfl::_legacy::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","load",0x4f690de3,"openfl._legacy.display.LoaderInfo.load","openfl/_legacy/display/LoaderInfo.hx",68,0xb6d254aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(70)
		this->__pendingURL = request->url;
		HX_STACK_LINE(71)
		::String tmp = this->__pendingURL;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		int tmp1 = tmp.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		int dot = tmp1;		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(72)
		bool tmp2 = (dot > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			::String tmp4 = this->__pendingURL;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			int tmp5 = (dot + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			::String tmp6 = tmp4.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			tmp3 = tmp6.toLowerCase();
		}
		else{
			HX_STACK_LINE(72)
			tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(72)
		::String extension = tmp3;		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(74)
		int tmp4 = extension.indexOf(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		bool tmp5 = (tmp4 != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		if ((tmp5)){
			HX_STACK_LINE(75)
			::String tmp6 = extension.split(HX_HCSTRING("?","\x3f","\x00","\x00","\x00"))->__get((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			extension = tmp6;
		}
		HX_STACK_LINE(77)
		::String tmp6 = extension;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("swf","\x42","\xab","\x57","\x00"))){
			HX_STACK_LINE(79)
			tmp7 = HX_HCSTRING("application/x-shockwave-flash","\xea","\xf3","\x47","\x4a");
		}
		else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
			HX_STACK_LINE(80)
			tmp7 = HX_HCSTRING("image/jpeg","\x1c","\x8d","\xdb","\xce");
		}
		else if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
			HX_STACK_LINE(81)
			tmp7 = HX_HCSTRING("image/png","\xb5","\xcc","\xc1","\x16");
		}
		else if (  ( _switch_1==HX_HCSTRING("gif","\x04","\x84","\x4e","\x00"))){
			HX_STACK_LINE(82)
			tmp7 = HX_HCSTRING("image/gif","\x10","\xf4","\xba","\x16");
		}
		else  {
			HX_STACK_LINE(83)
			tmp7 = HX_HCSTRING("application/octet-stream","\x5d","\xf8","\x82","\x30");
		}
;
;
		HX_STACK_LINE(77)
		this->contentType = tmp7;
		HX_STACK_LINE(87)
		this->url = null();
		HX_STACK_LINE(89)
		::openfl::_legacy::net::URLRequest tmp8 = request;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		this->super::load(tmp8);
	}
return null();
}


Void LoaderInfo_obj::this_onComplete( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","this_onComplete",0x99e9f7dc,"openfl._legacy.display.LoaderInfo.this_onComplete","openfl/_legacy/display/LoaderInfo.hx",101,0xb6d254aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(103)
		::String tmp = this->__pendingURL;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		this->url = tmp;
		HX_STACK_LINE(104)
		::String tmp1 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		Dynamic tmp2 = this->this_onComplete_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		this->removeEventListener(tmp1,tmp2,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,this_onComplete,(void))

::openfl::_legacy::utils::ByteArray LoaderInfo_obj::get_bytes( ){
	HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","get_bytes",0x13e243e5,"openfl._legacy.display.LoaderInfo.get_bytes","openfl/_legacy/display/LoaderInfo.hx",116,0xb6d254aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	Dynamic tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(LoaderInfo_obj,get_bytes,return )

::openfl::_legacy::display::LoaderInfo LoaderInfo_obj::create( ::openfl::_legacy::display::Loader loader){
	HX_STACK_FRAME("openfl._legacy.display.LoaderInfo","create",0xe9d303f9,"openfl._legacy.display.LoaderInfo.create","openfl/_legacy/display/LoaderInfo.hx",50,0xb6d254aa)
	HX_STACK_ARG(loader,"loader")
	HX_STACK_LINE(52)
	::openfl::_legacy::display::LoaderInfo tmp = ::openfl::_legacy::display::LoaderInfo_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	::openfl::_legacy::display::LoaderInfo loaderInfo = tmp;		HX_STACK_VAR(loaderInfo,"loaderInfo");
	HX_STACK_LINE(53)
	loaderInfo->loader = loader;
	HX_STACK_LINE(54)
	::openfl::events::UncaughtErrorEvents tmp1 = ::openfl::events::UncaughtErrorEvents_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	loaderInfo->uncaughtErrorEvents = tmp1;
	HX_STACK_LINE(55)
	::String tmp2 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Dynamic tmp3 = loaderInfo->this_onComplete_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	loaderInfo->addEventListener(tmp2,tmp3,null(),null(),null());
	HX_STACK_LINE(57)
	bool tmp4 = (loader == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	if ((tmp4)){
		HX_STACK_LINE(59)
		loaderInfo->url = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(63)
	::openfl::_legacy::display::LoaderInfo tmp5 = loaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_MARK_MEMBER_NAME(sameDomain,"sameDomain");
	HX_MARK_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(__pendingURL,"__pendingURL");
	::openfl::_legacy::net::URLLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_VISIT_MEMBER_NAME(sameDomain,"sameDomain");
	HX_VISIT_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(__pendingURL,"__pendingURL");
	::openfl::_legacy::net::URLLoader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return inCallProp == hx::paccAlways ? get_bytes() : bytes; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return loaderURL; }
		if (HX_FIELD_EQ(inName,"get_bytes") ) { return get_bytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { return sameDomain; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { return sharedEvents; }
		if (HX_FIELD_EQ(inName,"__pendingURL") ) { return __pendingURL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return this_onComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return applicationDomain; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return childAllowsParent; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { return parentAllowsChild; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return uncaughtErrorEvents; }
	}
	return super::__Field(inName,inCallProp);
}

bool LoaderInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

Dynamic LoaderInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::openfl::_legacy::display::Loader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { sameDomain=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { sharedEvents=inValue.Cast< ::openfl::_legacy::events::EventDispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__pendingURL") ) { __pendingURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast< ::openfl::_system::ApplicationDomain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { parentAllowsChild=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast< ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"));
	outFields->push(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"));
	outFields->push(HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"));
	outFields->push(HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"));
	outFields->push(HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"));
	outFields->push(HX_HCSTRING("__pendingURL","\x78","\x3a","\x58","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_system::ApplicationDomain*/ ,(int)offsetof(LoaderInfo_obj,applicationDomain),HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3")},
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(LoaderInfo_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,childAllowsParent),HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(LoaderInfo_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsFloat,(int)offsetof(LoaderInfo_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::openfl::_legacy::display::Loader*/ ,(int)offsetof(LoaderInfo_obj,loader),HX_HCSTRING("loader","\x13","\x48","\x6f","\x58")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,loaderURL),HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LoaderInfo_obj,parameters),HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,parentAllowsChild),HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,sameDomain),HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73")},
	{hx::fsObject /*::openfl::_legacy::events::EventDispatcher*/ ,(int)offsetof(LoaderInfo_obj,sharedEvents),HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::events::UncaughtErrorEvents*/ ,(int)offsetof(LoaderInfo_obj,uncaughtErrorEvents),HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,__pendingURL),HX_HCSTRING("__pendingURL","\x78","\x3a","\x58","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"),
	HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"),
	HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"),
	HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"),
	HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"),
	HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"),
	HX_HCSTRING("__pendingURL","\x78","\x3a","\x58","\xfa"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("this_onComplete","\x79","\x9c","\x68","\xed"),
	HX_HCSTRING("get_bytes","\xc2","\x64","\x41","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class LoaderInfo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void LoaderInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.LoaderInfo","\xd1","\x85","\xb1","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoaderInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoaderInfo_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
