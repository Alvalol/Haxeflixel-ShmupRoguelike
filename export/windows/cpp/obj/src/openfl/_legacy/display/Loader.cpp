#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.Loader","new",0x08d8c235,"openfl._legacy.display.Loader.new","openfl/_legacy/display/Loader.hx",26,0x567a0778)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	::openfl::_legacy::display::LoaderInfo tmp = ::openfl::_legacy::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->contentLoaderInfo = tmp;
	HX_STACK_LINE(32)
	Dynamic tmp1 = this->__onComplete_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::openfl::_legacy::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	tmp2->__onComplete = tmp1;
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Void Loader_obj::load( ::openfl::_legacy::net::URLRequest request,::openfl::_system::LoaderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","load",0xb38642b1,"openfl._legacy.display.Loader.load","openfl/_legacy/display/Loader.hx",38,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(40)
		::openfl::_legacy::display::LoaderInfo tmp = this->contentLoaderInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::openfl::_legacy::net::URLRequest tmp1 = request;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		tmp->load(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::openfl::_legacy::utils::ByteArray bytes,::openfl::_system::LoaderContext context){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","loadBytes",0x6a7ad3fa,"openfl._legacy.display.Loader.loadBytes","openfl/_legacy/display/Loader.hx",45,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(47)
		::openfl::_legacy::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = this->__onComplete(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			::openfl::_legacy::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(50)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(51)
			::openfl::_legacy::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			::openfl::_legacy::events::Event tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			tmp4->dispatchEvent(tmp5);
		}
		else{
			HX_STACK_LINE(55)
			::openfl::_legacy::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			tmp2->__dispatchIOErrorEvent();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","unload",0x60bec24a,"openfl._legacy.display.Loader.unload","openfl/_legacy/display/Loader.hx",62,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(66)
			while((true)){
				HX_STACK_LINE(66)
				int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(66)
				if ((tmp4)){
					HX_STACK_LINE(66)
					break;
				}
				HX_STACK_LINE(68)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(74)
				::openfl::_legacy::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(74)
				tmp2->url = null();
				HX_STACK_LINE(75)
				::openfl::_legacy::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				tmp3->contentType = null();
				HX_STACK_LINE(76)
				::openfl::_legacy::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				tmp4->content = null();
				HX_STACK_LINE(77)
				::openfl::_legacy::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				int tmp6 = tmp5->bytesTotal = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				::openfl::_legacy::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				tmp7->bytesLoaded = tmp6;
				HX_STACK_LINE(78)
				::openfl::_legacy::display::LoaderInfo tmp8 = this->contentLoaderInfo;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				tmp8->width = (int)0;
				HX_STACK_LINE(79)
				::openfl::_legacy::display::LoaderInfo tmp9 = this->contentLoaderInfo;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(79)
				tmp9->height = (int)0;
			}
			HX_STACK_LINE(83)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::UNLOAD;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			::openfl::_legacy::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(84)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(85)
			::openfl::_legacy::events::Event tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

bool Loader_obj::__onComplete( ::openfl::_legacy::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._legacy.display.Loader","__onComplete",0x75dcfba3,"openfl._legacy.display.Loader.__onComplete","openfl/_legacy/display/Loader.hx",92,0x567a0778)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(94)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	if ((tmp)){
		HX_STACK_LINE(96)
		return false;
	}
	HX_STACK_LINE(100)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(102)
		::openfl::_legacy::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::loadFromBytes(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		this->__image = tmp2;
		HX_STACK_LINE(103)
		::openfl::_legacy::display::BitmapData tmp3 = this->__image;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Bitmap tmp4 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Bitmap bitmap = tmp4;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(104)
		this->content = bitmap;
		HX_STACK_LINE(105)
		::openfl::_legacy::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		tmp5->content = bitmap;
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			int tmp6 = this->get_numChildren();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			if ((tmp8)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(109)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(113)
		::openfl::_legacy::display::Bitmap tmp6 = bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		this->addChild(tmp6);
		HX_STACK_LINE(114)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(118)
				return false;
			}
		}
	}
	HX_STACK_LINE(100)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,__onComplete,return )

Void Loader_obj::contentLoaderInfo_onData( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.Loader","contentLoaderInfo_onData",0xe2fdc719,"openfl._legacy.display.Loader.contentLoaderInfo_onData","openfl/_legacy/display/Loader.hx",132,0x567a0778)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(134)
		event->stopImmediatePropagation();
		HX_STACK_LINE(135)
		::openfl::_legacy::display::LoaderInfo tmp = this->contentLoaderInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		::openfl::_legacy::utils::ByteArray tmp1 = tmp->get_bytes();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		this->__onComplete(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,contentLoaderInfo_onData,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(__image,"__image");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo_onData") ) { return contentLoaderInfo_onData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::_legacy::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::_legacy::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Loader_obj,__image),HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96"),
	HX_HCSTRING("contentLoaderInfo_onData","\x0e","\x77","\xda","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Loader","\xc3","\x83","\xfc","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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
