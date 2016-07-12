#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetCache
#include <openfl/_legacy/AssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Future
#include <openfl/_legacy/Future.h>
#endif
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_Promise
#include <openfl/_legacy/Promise.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
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
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
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

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::IAssetCache Assets_obj::cache;

::haxe::ds::StringMap Assets_obj::libraries;

::openfl::_legacy::events::EventDispatcher Assets_obj::dispatcher;

bool Assets_obj::initialized;

Void Assets_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl._legacy.Assets","addEventListener",0x9ea1b894,"openfl._legacy.Assets.addEventListener","openfl/_legacy/Assets.hx",49,0x9276b055)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(51)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(53)
		::openfl::_legacy::events::EventDispatcher tmp = ::openfl::_legacy::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		bool tmp3 = useCapture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		int tmp4 = priority;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		bool tmp5 = useWeakReference;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		tmp->addEventListener(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

bool Assets_obj::dispatchEvent( ::openfl::_legacy::events::Event event){
	HX_STACK_FRAME("openfl._legacy.Assets","dispatchEvent",0x41da67d9,"openfl._legacy.Assets.dispatchEvent","openfl/_legacy/Assets.hx",58,0x9276b055)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(60)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(62)
	::openfl::_legacy::events::EventDispatcher tmp = ::openfl::_legacy::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::openfl::_legacy::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	bool tmp2 = tmp->dispatchEvent(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,dispatchEvent,return )

bool Assets_obj::exists( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("openfl._legacy.Assets","exists",0x884f5be3,"openfl._legacy.Assets.exists","openfl/_legacy/Assets.hx",67,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(69)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(73)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	if ((tmp)){
		HX_STACK_LINE(75)
		type = ::openfl::_legacy::AssetType_obj::BINARY;
	}
	HX_STACK_LINE(79)
	int tmp1 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	::String tmp2 = id.substring((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	::String libraryName = tmp2;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(80)
	int tmp3 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	::String tmp5 = id.substr(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	::String symbolName = tmp5;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(81)
	::String tmp6 = libraryName;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	::openfl::_legacy::AssetLibrary tmp7 = ::openfl::_legacy::Assets_obj::getLibrary(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(81)
	::openfl::_legacy::AssetLibrary library = tmp7;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(83)
	bool tmp8 = (library != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	if ((tmp8)){
		HX_STACK_LINE(85)
		::String tmp9 = symbolName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		::openfl::_legacy::AssetType tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		bool tmp11 = library->exists(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		return tmp11;
	}
	HX_STACK_LINE(91)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::openfl::_legacy::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","getBitmapData",0x0ba8b2c8,"openfl._legacy.Assets.getBitmapData","openfl/_legacy/Assets.hx",103,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(105)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(109)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		if ((tmp1)){
			HX_STACK_LINE(109)
			::openfl::_legacy::IAssetCache tmp3 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			::openfl::_legacy::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(109)
			tmp2 = false;
		}
		HX_STACK_LINE(109)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		if ((tmp2)){
			HX_STACK_LINE(109)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(109)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(109)
			tmp3 = tmp5->hasBitmapData(tmp7);
		}
		else{
			HX_STACK_LINE(109)
			tmp3 = false;
		}
		HX_STACK_LINE(109)
		if ((tmp3)){
			HX_STACK_LINE(111)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			::openfl::_legacy::display::BitmapData tmp6 = tmp4->getBitmapData(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			::openfl::_legacy::display::BitmapData bitmapData = tmp6;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(113)
			::openfl::_legacy::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = ::openfl::_legacy::Assets_obj::isValidBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			if ((tmp8)){
				HX_STACK_LINE(115)
				::openfl::_legacy::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(115)
				return tmp9;
			}
		}
		HX_STACK_LINE(121)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(122)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(123)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		::openfl::_legacy::AssetLibrary tmp10 = ::openfl::_legacy::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		::openfl::_legacy::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(125)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		if ((tmp11)){
			HX_STACK_LINE(127)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			bool tmp13 = library->exists(tmp12,::openfl::_legacy::AssetType_obj::IMAGE);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			if ((tmp13)){
				HX_STACK_LINE(129)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(129)
				bool tmp15 = library->isLocal(tmp14,::openfl::_legacy::AssetType_obj::IMAGE);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(129)
				if ((tmp15)){
					HX_STACK_LINE(131)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(131)
					::openfl::_legacy::display::BitmapData tmp17 = library->getBitmapData(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(131)
					::openfl::_legacy::display::BitmapData bitmapData = tmp17;		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(133)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(133)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(133)
					if ((tmp18)){
						HX_STACK_LINE(133)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(133)
						::openfl::_legacy::IAssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(133)
						tmp19 = tmp21->get_enabled();
					}
					else{
						HX_STACK_LINE(133)
						tmp19 = false;
					}
					HX_STACK_LINE(133)
					if ((tmp19)){
						HX_STACK_LINE(135)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(135)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(135)
						::openfl::_legacy::display::BitmapData tmp22 = bitmapData;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(135)
						tmp20->setBitmapData(tmp21,tmp22);
					}
					HX_STACK_LINE(139)
					::openfl::_legacy::display::BitmapData tmp20 = bitmapData;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(139)
					return tmp20;
				}
				else{
					HX_STACK_LINE(143)
					::String tmp16 = (HX_HCSTRING("[openfl.Assets] BitmapData asset \"","\x14","\xc2","\x50","\x80") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(143)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(143)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),143,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(143)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(149)
				::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"","\xbc","\xc7","\x8d","\x70") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(149)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(149)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),149,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(149)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(155)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(155)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(155)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),155,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(155)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(161)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::openfl::_legacy::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl._legacy.Assets","getBytes",0x4eaf25bc,"openfl._legacy.Assets.getBytes","openfl/_legacy/Assets.hx",172,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(174)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(178)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(179)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(179)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(180)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	::openfl::_legacy::AssetLibrary tmp6 = ::openfl::_legacy::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	::openfl::_legacy::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(182)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	if ((tmp7)){
		HX_STACK_LINE(184)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(184)
		bool tmp9 = library->exists(tmp8,::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(184)
		if ((tmp9)){
			HX_STACK_LINE(186)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(186)
			bool tmp11 = library->isLocal(tmp10,::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(186)
			if ((tmp11)){
				HX_STACK_LINE(188)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				::openfl::_legacy::utils::ByteArray tmp13 = library->getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(188)
				return tmp13;
			}
			else{
				HX_STACK_LINE(192)
				::String tmp12 = (HX_HCSTRING("[openfl.Assets] String or ByteArray asset \"","\xec","\xa2","\x64","\xa4") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(192)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(192)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),192,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(192)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(198)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"","\x2a","\x8b","\x28","\xa6") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(198)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(198)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),198,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(204)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(204)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),204,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(204)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(210)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::openfl::_legacy::text::Font Assets_obj::getFont( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","getFont",0xaf2a159e,"openfl._legacy.Assets.getFont","openfl/_legacy/Assets.hx",221,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(223)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(227)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(227)
			::openfl::_legacy::IAssetCache tmp3 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			::openfl::_legacy::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(227)
			tmp2 = false;
		}
		HX_STACK_LINE(227)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		if ((tmp2)){
			HX_STACK_LINE(227)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(227)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(227)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(227)
			tmp3 = tmp5->hasFont(tmp7);
		}
		else{
			HX_STACK_LINE(227)
			tmp3 = false;
		}
		HX_STACK_LINE(227)
		if ((tmp3)){
			HX_STACK_LINE(229)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			::openfl::_legacy::text::Font tmp6 = tmp4->getFont(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			return tmp6;
		}
		HX_STACK_LINE(233)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(234)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(235)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(235)
		::openfl::_legacy::AssetLibrary tmp10 = ::openfl::_legacy::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(235)
		::openfl::_legacy::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(237)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(237)
		if ((tmp11)){
			HX_STACK_LINE(239)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(239)
			bool tmp13 = library->exists(tmp12,::openfl::_legacy::AssetType_obj::FONT);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(239)
			if ((tmp13)){
				HX_STACK_LINE(241)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(241)
				bool tmp15 = library->isLocal(tmp14,::openfl::_legacy::AssetType_obj::FONT);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(241)
				if ((tmp15)){
					HX_STACK_LINE(243)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(243)
					::openfl::_legacy::text::Font tmp17 = library->getFont(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(243)
					::openfl::_legacy::text::Font font = tmp17;		HX_STACK_VAR(font,"font");
					HX_STACK_LINE(245)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(245)
					if ((tmp18)){
						HX_STACK_LINE(245)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(245)
						::openfl::_legacy::IAssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(245)
						tmp19 = tmp21->get_enabled();
					}
					else{
						HX_STACK_LINE(245)
						tmp19 = false;
					}
					HX_STACK_LINE(245)
					if ((tmp19)){
						HX_STACK_LINE(247)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(247)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(247)
						::openfl::_legacy::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						tmp20->setFont(tmp21,tmp22);
					}
					HX_STACK_LINE(251)
					::openfl::_legacy::text::Font tmp20 = font;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(251)
					return tmp20;
				}
				else{
					HX_STACK_LINE(255)
					::String tmp16 = (HX_HCSTRING("[openfl.Assets] Font asset \"","\x6a","\x33","\x97","\xc9") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(255)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(255)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),255,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(255)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(261)
				::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no Font asset with an ID of \"","\xd2","\xd9","\x10","\x87") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),261,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(261)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(267)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(267)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(267)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),267,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(267)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(273)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

::openfl::_legacy::AssetLibrary Assets_obj::getLibrary( ::String name){
	HX_STACK_FRAME("openfl._legacy.Assets","getLibrary",0x9a85fa8c,"openfl._legacy.Assets.getLibrary","openfl/_legacy/Assets.hx",278,0x9276b055)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(280)
	bool tmp = (name == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	if ((tmp1)){
		HX_STACK_LINE(280)
		tmp2 = (name == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(280)
		tmp2 = true;
	}
	HX_STACK_LINE(280)
	if ((tmp2)){
		HX_STACK_LINE(282)
		name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
	}
	HX_STACK_LINE(286)
	::haxe::ds::StringMap tmp3 = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(286)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	::openfl::_legacy::AssetLibrary tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(286)
	::openfl::_legacy::AssetLibrary tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(286)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::openfl::_legacy::display::MovieClip Assets_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl._legacy.Assets","getMovieClip",0xc2f99c71,"openfl._legacy.Assets.getMovieClip","openfl/_legacy/Assets.hx",297,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(299)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(303)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(304)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(304)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(304)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(304)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(305)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(305)
	::openfl::_legacy::AssetLibrary tmp6 = ::openfl::_legacy::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(305)
	::openfl::_legacy::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(307)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(307)
	if ((tmp7)){
		HX_STACK_LINE(309)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(309)
		bool tmp9 = library->exists(tmp8,::openfl::_legacy::AssetType_obj::MOVIE_CLIP);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(309)
		if ((tmp9)){
			HX_STACK_LINE(311)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(311)
			bool tmp11 = library->isLocal(tmp10,::openfl::_legacy::AssetType_obj::MOVIE_CLIP);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(311)
			if ((tmp11)){
				HX_STACK_LINE(313)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(313)
				::openfl::_legacy::display::MovieClip tmp13 = library->getMovieClip(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(313)
				return tmp13;
			}
			else{
				HX_STACK_LINE(317)
				::String tmp12 = (HX_HCSTRING("[openfl.Assets] MovieClip asset \"","\x09","\x87","\xab","\x4e") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(317)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(317)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),317,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(317)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(323)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"","\x47","\x50","\x6c","\x1a") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(323)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(323)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),323,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(323)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(329)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(329)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(329)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),329,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(329)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(335)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getMovieClip,return )

::openfl::_legacy::media::Sound Assets_obj::getMusic( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","getMusic",0xa171edf6,"openfl._legacy.Assets.getMusic","openfl/_legacy/Assets.hx",346,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(348)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(352)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(352)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(352)
		if ((tmp1)){
			HX_STACK_LINE(352)
			::openfl::_legacy::IAssetCache tmp3 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			::openfl::_legacy::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(352)
			tmp2 = false;
		}
		HX_STACK_LINE(352)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(352)
		if ((tmp2)){
			HX_STACK_LINE(352)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(352)
			tmp3 = tmp5->hasSound(tmp7);
		}
		else{
			HX_STACK_LINE(352)
			tmp3 = false;
		}
		HX_STACK_LINE(352)
		if ((tmp3)){
			HX_STACK_LINE(354)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			::openfl::_legacy::media::Sound tmp6 = tmp4->getSound(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(354)
			::openfl::_legacy::media::Sound sound = tmp6;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(356)
			::openfl::_legacy::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(356)
			bool tmp8 = ::openfl::_legacy::Assets_obj::isValidSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(356)
			if ((tmp8)){
				HX_STACK_LINE(358)
				::openfl::_legacy::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				return tmp9;
			}
		}
		HX_STACK_LINE(364)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(364)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(365)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(365)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(365)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(365)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(366)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(366)
		::openfl::_legacy::AssetLibrary tmp10 = ::openfl::_legacy::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(366)
		::openfl::_legacy::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(368)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(368)
		if ((tmp11)){
			HX_STACK_LINE(370)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(370)
			bool tmp13 = library->exists(tmp12,::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(370)
			if ((tmp13)){
				HX_STACK_LINE(372)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(372)
				bool tmp15 = library->isLocal(tmp14,::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(372)
				if ((tmp15)){
					HX_STACK_LINE(374)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					::openfl::_legacy::media::Sound tmp17 = library->getMusic(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(374)
					::openfl::_legacy::media::Sound sound = tmp17;		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(376)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(376)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(376)
					if ((tmp18)){
						HX_STACK_LINE(376)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(376)
						::openfl::_legacy::IAssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(376)
						tmp19 = tmp21->get_enabled();
					}
					else{
						HX_STACK_LINE(376)
						tmp19 = false;
					}
					HX_STACK_LINE(376)
					if ((tmp19)){
						HX_STACK_LINE(378)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(378)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(378)
						::openfl::_legacy::media::Sound tmp22 = sound;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(378)
						tmp20->setSound(tmp21,tmp22);
					}
					HX_STACK_LINE(382)
					::openfl::_legacy::media::Sound tmp20 = sound;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(382)
					return tmp20;
				}
				else{
					HX_STACK_LINE(386)
					::String tmp16 = (HX_HCSTRING("[openfl.Assets] Sound asset \"","\xb8","\x80","\x92","\xc5") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(386)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(386)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),386,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(386)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(392)
				::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no Sound asset with an ID of \"","\xb6","\xc4","\x50","\x80") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(392)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(392)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),392,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(392)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(398)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(398)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),398,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(398)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(404)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

::String Assets_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl._legacy.Assets","getPath",0xb5bb9d74,"openfl._legacy.Assets.getPath","openfl/_legacy/Assets.hx",415,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(417)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(421)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(422)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(422)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(422)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(422)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(423)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(423)
	::openfl::_legacy::AssetLibrary tmp6 = ::openfl::_legacy::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(423)
	::openfl::_legacy::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(425)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(425)
	if ((tmp7)){
		HX_STACK_LINE(427)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(427)
		bool tmp9 = library->exists(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(427)
		if ((tmp9)){
			HX_STACK_LINE(429)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			::String tmp11 = library->getPath(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(429)
			return tmp11;
		}
		else{
			HX_STACK_LINE(433)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no asset with an ID of \"","\x67","\xaf","\x16","\xa0") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(433)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(433)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),433,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(433)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(439)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(439)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(439)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),439,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(439)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(445)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::openfl::_legacy::media::Sound Assets_obj::getSound( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","getSound",0x11e3aa20,"openfl._legacy.Assets.getSound","openfl/_legacy/Assets.hx",456,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(458)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(462)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		if ((tmp1)){
			HX_STACK_LINE(462)
			::openfl::_legacy::IAssetCache tmp3 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(462)
			::openfl::_legacy::IAssetCache tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			tmp2 = tmp5->get_enabled();
		}
		else{
			HX_STACK_LINE(462)
			tmp2 = false;
		}
		HX_STACK_LINE(462)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		if ((tmp2)){
			HX_STACK_LINE(462)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			::openfl::_legacy::IAssetCache tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(462)
			::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(462)
			tmp3 = tmp5->hasSound(tmp7);
		}
		else{
			HX_STACK_LINE(462)
			tmp3 = false;
		}
		HX_STACK_LINE(462)
		if ((tmp3)){
			HX_STACK_LINE(464)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(464)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(464)
			::openfl::_legacy::media::Sound tmp6 = tmp4->getSound(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			::openfl::_legacy::media::Sound sound = tmp6;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(466)
			::openfl::_legacy::media::Sound tmp7 = sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(466)
			bool tmp8 = ::openfl::_legacy::Assets_obj::isValidSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(466)
			if ((tmp8)){
				HX_STACK_LINE(468)
				::openfl::_legacy::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(468)
				return tmp9;
			}
		}
		HX_STACK_LINE(474)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(474)
		::String tmp5 = id.substring((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(474)
		::String libraryName = tmp5;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(475)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(475)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(475)
		::String tmp8 = id.substr(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(475)
		::String symbolName = tmp8;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(476)
		::String tmp9 = libraryName;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(476)
		::openfl::_legacy::AssetLibrary tmp10 = ::openfl::_legacy::Assets_obj::getLibrary(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(476)
		::openfl::_legacy::AssetLibrary library = tmp10;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(478)
		bool tmp11 = (library != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(478)
		if ((tmp11)){
			HX_STACK_LINE(480)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(480)
			bool tmp13 = library->exists(tmp12,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(480)
			if ((tmp13)){
				HX_STACK_LINE(482)
				::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(482)
				bool tmp15 = library->isLocal(tmp14,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(482)
				if ((tmp15)){
					HX_STACK_LINE(484)
					::String tmp16 = symbolName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(484)
					::openfl::_legacy::media::Sound tmp17 = library->getSound(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(484)
					::openfl::_legacy::media::Sound sound = tmp17;		HX_STACK_VAR(sound,"sound");
					HX_STACK_LINE(486)
					bool tmp18 = useCache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(486)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(486)
					if ((tmp18)){
						HX_STACK_LINE(486)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(486)
						::openfl::_legacy::IAssetCache tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(486)
						tmp19 = tmp21->get_enabled();
					}
					else{
						HX_STACK_LINE(486)
						tmp19 = false;
					}
					HX_STACK_LINE(486)
					if ((tmp19)){
						HX_STACK_LINE(488)
						::openfl::_legacy::IAssetCache tmp20 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(488)
						::String tmp21 = id;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(488)
						::openfl::_legacy::media::Sound tmp22 = sound;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(488)
						tmp20->setSound(tmp21,tmp22);
					}
					HX_STACK_LINE(492)
					::openfl::_legacy::media::Sound tmp20 = sound;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(492)
					return tmp20;
				}
				else{
					HX_STACK_LINE(496)
					::String tmp16 = (HX_HCSTRING("[openfl.Assets] Sound asset \"","\xb8","\x80","\x92","\xc5") + id);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(496)
					::String tmp17 = (tmp16 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(496)
					Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),496,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(496)
					::haxe::Log_obj::trace(tmp17,tmp18);
				}
			}
			else{
				HX_STACK_LINE(502)
				::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no Sound asset with an ID of \"","\xb6","\xc4","\x50","\x80") + id);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(502)
				::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(502)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),502,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(502)
				::haxe::Log_obj::trace(tmp15,tmp16);
			}
		}
		else{
			HX_STACK_LINE(508)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(508)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(508)
			Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),508,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(508)
			::haxe::Log_obj::trace(tmp13,tmp14);
		}
		HX_STACK_LINE(514)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_FRAME("openfl._legacy.Assets","getText",0xb863847c,"openfl._legacy.Assets.getText","openfl/_legacy/Assets.hx",525,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(527)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(531)
	int tmp = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(531)
	::String tmp1 = id.substring((int)0,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	::String libraryName = tmp1;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(532)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	::String tmp4 = id.substr(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(532)
	::String symbolName = tmp4;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(533)
	::String tmp5 = libraryName;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(533)
	::openfl::_legacy::AssetLibrary tmp6 = ::openfl::_legacy::Assets_obj::getLibrary(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(533)
	::openfl::_legacy::AssetLibrary library = tmp6;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(535)
	bool tmp7 = (library != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(535)
	if ((tmp7)){
		HX_STACK_LINE(537)
		::String tmp8 = symbolName;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(537)
		bool tmp9 = library->exists(tmp8,::openfl::_legacy::AssetType_obj::TEXT);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(537)
		if ((tmp9)){
			HX_STACK_LINE(539)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(539)
			bool tmp11 = library->isLocal(tmp10,::openfl::_legacy::AssetType_obj::TEXT);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(539)
			if ((tmp11)){
				HX_STACK_LINE(541)
				::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(541)
				::String tmp13 = library->getText(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(541)
				return tmp13;
			}
			else{
				HX_STACK_LINE(545)
				::String tmp12 = (HX_HCSTRING("[openfl.Assets] String asset \"","\xac","\x54","\x47","\xc5") + id);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(545)
				::String tmp13 = (tmp12 + HX_HCSTRING("\" exists, but only asynchronously","\xdc","\xca","\xf2","\xdd"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(545)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),545,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(545)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
		}
		else{
			HX_STACK_LINE(551)
			::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no String asset with an ID of \"","\xd4","\xdd","\xc2","\xb2") + id);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(551)
			::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(551)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),551,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(551)
			::haxe::Log_obj::trace(tmp11,tmp12);
		}
	}
	else{
		HX_STACK_LINE(557)
		::String tmp8 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(557)
		::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(557)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),557,HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c"),HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
	HX_STACK_LINE(563)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl._legacy.Assets","hasEventListener",0xba27dbbb,"openfl._legacy.Assets.hasEventListener","openfl/_legacy/Assets.hx",568,0x9276b055)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(570)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(572)
	::openfl::_legacy::events::EventDispatcher tmp = ::openfl::_legacy::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(572)
	bool tmp2 = tmp->hasEventListener(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(572)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasEventListener,return )

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("openfl._legacy.Assets","initialize",0xf86f7ed7,"openfl._legacy.Assets.initialize","openfl/_legacy/Assets.hx",577,0x9276b055)
		HX_STACK_LINE(579)
		bool tmp = ::openfl::_legacy::Assets_obj::initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		if ((tmp1)){
			HX_STACK_LINE(583)
			::DefaultAssetLibrary tmp2 = ::DefaultAssetLibrary_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(583)
			::openfl::_legacy::Assets_obj::registerLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"),tmp2);
			HX_STACK_LINE(587)
			::openfl::_legacy::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

bool Assets_obj::isLocal( ::String id,::openfl::_legacy::AssetType type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","isLocal",0xae5d753a,"openfl._legacy.Assets.isLocal","openfl/_legacy/Assets.hx",594,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(useCache,"useCache")
{
		HX_STACK_LINE(596)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(600)
		bool tmp = useCache;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(600)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		if ((tmp)){
			HX_STACK_LINE(600)
			::openfl::_legacy::IAssetCache tmp2 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(600)
			::openfl::_legacy::IAssetCache tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(600)
			tmp1 = tmp3->get_enabled();
		}
		else{
			HX_STACK_LINE(600)
			tmp1 = false;
		}
		HX_STACK_LINE(600)
		if ((tmp1)){
			HX_STACK_LINE(602)
			bool tmp2 = (type == ::openfl::_legacy::AssetType_obj::IMAGE);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(602)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(602)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(602)
			if ((tmp3)){
				HX_STACK_LINE(602)
				tmp4 = (type == null());
			}
			else{
				HX_STACK_LINE(602)
				tmp4 = true;
			}
			HX_STACK_LINE(602)
			if ((tmp4)){
				HX_STACK_LINE(604)
				::openfl::_legacy::IAssetCache tmp5 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(604)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(604)
				bool tmp7 = tmp5->hasBitmapData(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(604)
				if ((tmp7)){
					HX_STACK_LINE(604)
					return true;
				}
			}
			HX_STACK_LINE(608)
			bool tmp5 = (type == ::openfl::_legacy::AssetType_obj::FONT);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(608)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(608)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(608)
			if ((tmp6)){
				HX_STACK_LINE(608)
				tmp7 = (type == null());
			}
			else{
				HX_STACK_LINE(608)
				tmp7 = true;
			}
			HX_STACK_LINE(608)
			if ((tmp7)){
				HX_STACK_LINE(610)
				::openfl::_legacy::IAssetCache tmp8 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(610)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(610)
				bool tmp10 = tmp8->hasFont(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(610)
				if ((tmp10)){
					HX_STACK_LINE(610)
					return true;
				}
			}
			HX_STACK_LINE(614)
			bool tmp8 = (type == ::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(614)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(614)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(614)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(614)
			if ((tmp10)){
				HX_STACK_LINE(614)
				tmp11 = (type == ::openfl::_legacy::AssetType_obj::MUSIC);
			}
			else{
				HX_STACK_LINE(614)
				tmp11 = true;
			}
			HX_STACK_LINE(614)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(614)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(614)
			if ((tmp12)){
				HX_STACK_LINE(614)
				tmp13 = (type == null());
			}
			else{
				HX_STACK_LINE(614)
				tmp13 = true;
			}
			HX_STACK_LINE(614)
			if ((tmp13)){
				HX_STACK_LINE(616)
				::openfl::_legacy::IAssetCache tmp14 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(616)
				::String tmp15 = id;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(616)
				bool tmp16 = tmp14->hasSound(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(616)
				if ((tmp16)){
					HX_STACK_LINE(616)
					return true;
				}
			}
		}
		HX_STACK_LINE(622)
		int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(622)
		::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(622)
		::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(623)
		int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(623)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(623)
		::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(623)
		::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(624)
		::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(624)
		::openfl::_legacy::AssetLibrary tmp8 = ::openfl::_legacy::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(624)
		::openfl::_legacy::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(626)
		bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(626)
		if ((tmp9)){
			HX_STACK_LINE(628)
			::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(628)
			::openfl::_legacy::AssetType tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(628)
			bool tmp12 = library->isLocal(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(628)
			return tmp12;
		}
		HX_STACK_LINE(634)
		return false;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidBitmapData( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("openfl._legacy.Assets","isValidBitmapData",0xcf9de664,"openfl._legacy.Assets.isValidBitmapData","openfl/_legacy/Assets.hx",639,0x9276b055)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(644)
	bool tmp = (bitmapData->__handle != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(644)
	return tmp;
	HX_STACK_LINE(665)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidBitmapData,return )

bool Assets_obj::isValidSound( ::openfl::_legacy::media::Sound sound){
	HX_STACK_FRAME("openfl._legacy.Assets","isValidSound",0x3cb31c04,"openfl._legacy.Assets.isValidSound","openfl/_legacy/Assets.hx",670,0x9276b055)
	HX_STACK_ARG(sound,"sound")
	HX_STACK_LINE(675)
	bool tmp = (sound->__handle != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(675)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(675)
	if ((tmp)){
		HX_STACK_LINE(675)
		tmp1 = (sound->__handle != (int)0);
	}
	else{
		HX_STACK_LINE(675)
		tmp1 = false;
	}
	HX_STACK_LINE(675)
	return tmp1;
	HX_STACK_LINE(680)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidSound,return )

Array< ::String > Assets_obj::list( ::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("openfl._legacy.Assets","list",0x7c38faa5,"openfl._legacy.Assets.list","openfl/_legacy/Assets.hx",685,0x9276b055)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(687)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(689)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(691)
	::haxe::ds::StringMap tmp = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(691)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(691)
	for(::cpp::FastIterator_obj< ::openfl::_legacy::AssetLibrary > *__it = ::cpp::CreateFastIterator< ::openfl::_legacy::AssetLibrary >(tmp1);  __it->hasNext(); ){
		::openfl::_legacy::AssetLibrary library = __it->next();
		{
			HX_STACK_LINE(693)
			::openfl::_legacy::AssetType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(693)
			Array< ::String > libraryItems = library->list(tmp2);		HX_STACK_VAR(libraryItems,"libraryItems");
			HX_STACK_LINE(695)
			bool tmp3 = (libraryItems != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(695)
			if ((tmp3)){
				HX_STACK_LINE(697)
				items = items->concat(libraryItems);
			}
		}
;
	}
	HX_STACK_LINE(703)
	return items;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

::openfl::_legacy::Future Assets_obj::loadBitmapData( ::String id,hx::Null< bool >  __o_useCache,Dynamic handler){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","loadBitmapData",0x55e8dc86,"openfl._legacy.Assets.loadBitmapData","openfl/_legacy/Assets.hx",708,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(710)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(712)
		::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(714)
		bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(714)
		if ((tmp1)){
			HX_STACK_LINE(716)
			Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(716)
			promise->future->onComplete(tmp2);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",717,0x9276b055)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(717)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(717)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(723)
		bool tmp2 = useCache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(723)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(723)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(723)
		if ((tmp3)){
			HX_STACK_LINE(723)
			::openfl::_legacy::IAssetCache tmp5 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			::openfl::_legacy::IAssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			tmp4 = tmp7->get_enabled();
		}
		else{
			HX_STACK_LINE(723)
			tmp4 = false;
		}
		HX_STACK_LINE(723)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(723)
		if ((tmp4)){
			HX_STACK_LINE(723)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(723)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(723)
			tmp5 = tmp7->hasBitmapData(tmp9);
		}
		else{
			HX_STACK_LINE(723)
			tmp5 = false;
		}
		HX_STACK_LINE(723)
		if ((tmp5)){
			HX_STACK_LINE(725)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(725)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(725)
			::openfl::_legacy::display::BitmapData tmp8 = tmp6->getBitmapData(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(725)
			::openfl::_legacy::display::BitmapData bitmapData = tmp8;		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(727)
			::openfl::_legacy::display::BitmapData tmp9 = bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(727)
			bool tmp10 = ::openfl::_legacy::Assets_obj::isValidBitmapData(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(727)
			if ((tmp10)){
				HX_STACK_LINE(729)
				::openfl::_legacy::display::BitmapData tmp11 = bitmapData;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(729)
				promise->complete(tmp11);
				HX_STACK_LINE(730)
				::openfl::_legacy::Future tmp12 = promise->future;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(730)
				return tmp12;
			}
		}
		HX_STACK_LINE(736)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(736)
		::String tmp7 = id.substring((int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(736)
		::String libraryName = tmp7;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(737)
		int tmp8 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(737)
		int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(737)
		::String tmp10 = id.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(737)
		::String symbolName = tmp10;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(738)
		::String tmp11 = libraryName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(738)
		::openfl::_legacy::AssetLibrary tmp12 = ::openfl::_legacy::Assets_obj::getLibrary(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(738)
		::openfl::_legacy::AssetLibrary library = tmp12;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(740)
		bool tmp13 = (library != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(740)
		if ((tmp13)){
			HX_STACK_LINE(742)
			::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(742)
			bool tmp15 = library->exists(tmp14,::openfl::_legacy::AssetType_obj::IMAGE);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(742)
			if ((tmp15)){
				HX_STACK_LINE(744)
				bool tmp16 = useCache;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(744)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(744)
				if ((tmp16)){
					HX_STACK_LINE(744)
					::openfl::_legacy::IAssetCache tmp18 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(744)
					::openfl::_legacy::IAssetCache tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(744)
					tmp17 = tmp19->get_enabled();
				}
				else{
					HX_STACK_LINE(744)
					tmp17 = false;
				}
				HX_STACK_LINE(744)
				if ((tmp17)){
					HX_STACK_LINE(746)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,::openfl::_legacy::Promise,promise,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::openfl::_legacy::display::BitmapData bitmapData){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/_legacy/Assets.hx",746,0x9276b055)
						HX_STACK_ARG(bitmapData,"bitmapData")
						{
							HX_STACK_LINE(748)
							::openfl::_legacy::IAssetCache tmp19 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(748)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(748)
							::openfl::_legacy::display::BitmapData tmp21 = bitmapData;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(748)
							tmp19->setBitmapData(tmp20,tmp21);
							HX_STACK_LINE(749)
							::openfl::_legacy::display::BitmapData tmp22 = bitmapData;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(749)
							promise->complete(tmp22);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(746)
					library->loadBitmapData(tmp18, Dynamic(new _Function_4_1(promise,id)));
				}
				else{
					HX_STACK_LINE(755)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(755)
					Dynamic tmp19 = promise->complete_dyn();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(755)
					library->loadBitmapData(tmp18,tmp19);
				}
			}
			else{
				HX_STACK_LINE(761)
				::String tmp16 = (HX_HCSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"","\xbc","\xc7","\x8d","\x70") + id);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(761)
				::String tmp17 = (tmp16 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(761)
				promise->error(tmp17);
			}
		}
		else{
			HX_STACK_LINE(767)
			::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(767)
			::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(767)
			promise->error(tmp15);
		}
		HX_STACK_LINE(773)
		::openfl::_legacy::Future tmp14 = promise->future;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(773)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadBitmapData,return )

::openfl::_legacy::Future Assets_obj::loadBytes( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl._legacy.Assets","loadBytes",0xbf9b54be,"openfl._legacy.Assets.loadBytes","openfl/_legacy/Assets.hx",778,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(780)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(782)
	::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(782)
	::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(784)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(784)
	if ((tmp1)){
		HX_STACK_LINE(786)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(786)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",787,0x9276b055)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(787)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(787)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(793)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(793)
	::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(793)
	::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(794)
	int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(794)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(794)
	::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(794)
	::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(795)
	::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(795)
	::openfl::_legacy::AssetLibrary tmp8 = ::openfl::_legacy::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(795)
	::openfl::_legacy::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(797)
	bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(797)
	if ((tmp9)){
		HX_STACK_LINE(799)
		::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(799)
		bool tmp11 = library->exists(tmp10,::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(799)
		if ((tmp11)){
			HX_STACK_LINE(801)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(801)
			Dynamic tmp13 = promise->complete_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(801)
			library->loadBytes(tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(805)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"","\x2a","\x8b","\x28","\xa6") + id);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(805)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(805)
			promise->error(tmp13);
		}
	}
	else{
		HX_STACK_LINE(811)
		::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(811)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(811)
		promise->error(tmp11);
	}
	HX_STACK_LINE(817)
	::openfl::_legacy::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(817)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadBytes,return )

::openfl::_legacy::Future Assets_obj::loadFont( ::String id,hx::Null< bool >  __o_useCache,Dynamic handler){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","loadFont",0xe5a03cdc,"openfl._legacy.Assets.loadFont","openfl/_legacy/Assets.hx",822,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(824)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(826)
		::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(826)
		::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(828)
		bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(828)
		if ((tmp1)){
			HX_STACK_LINE(830)
			Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(830)
			promise->future->onComplete(tmp2);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",831,0x9276b055)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(831)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(831)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(837)
		bool tmp2 = useCache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(837)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(837)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(837)
		if ((tmp3)){
			HX_STACK_LINE(837)
			::openfl::_legacy::IAssetCache tmp5 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(837)
			::openfl::_legacy::IAssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(837)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(837)
			tmp4 = tmp7->get_enabled();
		}
		else{
			HX_STACK_LINE(837)
			tmp4 = false;
		}
		HX_STACK_LINE(837)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(837)
		if ((tmp4)){
			HX_STACK_LINE(837)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(837)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(837)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(837)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(837)
			tmp5 = tmp7->hasFont(tmp9);
		}
		else{
			HX_STACK_LINE(837)
			tmp5 = false;
		}
		HX_STACK_LINE(837)
		if ((tmp5)){
			HX_STACK_LINE(839)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(839)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(839)
			::openfl::_legacy::text::Font tmp8 = tmp6->getFont(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(839)
			promise->complete(tmp8);
			HX_STACK_LINE(840)
			::openfl::_legacy::Future tmp9 = promise->future;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(840)
			return tmp9;
		}
		HX_STACK_LINE(844)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(844)
		::String tmp7 = id.substring((int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(844)
		::String libraryName = tmp7;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(845)
		int tmp8 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(845)
		int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(845)
		::String tmp10 = id.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(845)
		::String symbolName = tmp10;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(846)
		::String tmp11 = libraryName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(846)
		::openfl::_legacy::AssetLibrary tmp12 = ::openfl::_legacy::Assets_obj::getLibrary(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(846)
		::openfl::_legacy::AssetLibrary library = tmp12;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(848)
		bool tmp13 = (library != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(848)
		if ((tmp13)){
			HX_STACK_LINE(850)
			::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(850)
			bool tmp15 = library->exists(tmp14,::openfl::_legacy::AssetType_obj::FONT);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(850)
			if ((tmp15)){
				HX_STACK_LINE(852)
				bool tmp16 = useCache;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(852)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(852)
				if ((tmp16)){
					HX_STACK_LINE(852)
					::openfl::_legacy::IAssetCache tmp18 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(852)
					::openfl::_legacy::IAssetCache tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(852)
					tmp17 = tmp19->get_enabled();
				}
				else{
					HX_STACK_LINE(852)
					tmp17 = false;
				}
				HX_STACK_LINE(852)
				if ((tmp17)){
					HX_STACK_LINE(854)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,::openfl::_legacy::Promise,promise,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::openfl::_legacy::text::Font font){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/_legacy/Assets.hx",854,0x9276b055)
						HX_STACK_ARG(font,"font")
						{
							HX_STACK_LINE(856)
							::openfl::_legacy::IAssetCache tmp19 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(856)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(856)
							::openfl::_legacy::text::Font tmp21 = font;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(856)
							tmp19->setFont(tmp20,tmp21);
							HX_STACK_LINE(857)
							::openfl::_legacy::text::Font tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(857)
							promise->complete(tmp22);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(854)
					library->loadFont(tmp18, Dynamic(new _Function_4_1(promise,id)));
				}
				else{
					HX_STACK_LINE(863)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(863)
					Dynamic tmp19 = promise->complete_dyn();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(863)
					library->loadFont(tmp18,tmp19);
				}
			}
			else{
				HX_STACK_LINE(869)
				::String tmp16 = (HX_HCSTRING("[openfl.Assets] There is no Font asset with an ID of \"","\xd2","\xd9","\x10","\x87") + id);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(869)
				::String tmp17 = (tmp16 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(869)
				promise->error(tmp17);
			}
		}
		else{
			HX_STACK_LINE(875)
			::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(875)
			::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(875)
			promise->error(tmp15);
		}
		HX_STACK_LINE(881)
		::openfl::_legacy::Future tmp14 = promise->future;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(881)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadFont,return )

::openfl::_legacy::Future Assets_obj::loadLibrary( ::String name,Dynamic handler){
	HX_STACK_FRAME("openfl._legacy.Assets","loadLibrary",0x421d6e0e,"openfl._legacy.Assets.loadLibrary","openfl/_legacy/Assets.hx",886,0x9276b055)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(888)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(890)
	::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(892)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(892)
	if ((tmp1)){
		HX_STACK_LINE(894)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(894)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",895,0x9276b055)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(895)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(895)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(901)
	::String tmp2 = (HX_HCSTRING("libraries/","\xf6","\xc5","\x4d","\xc0") + name);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(901)
	::String tmp3 = (tmp2 + HX_HCSTRING(".json","\x56","\xf1","\xd6","\xc2"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(901)
	::String tmp4 = ::openfl::_legacy::Assets_obj::getText(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(901)
	::String data = tmp4;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(903)
	bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(903)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(903)
	if ((tmp5)){
		HX_STACK_LINE(903)
		tmp6 = (data != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(903)
		tmp6 = false;
	}
	HX_STACK_LINE(903)
	if ((tmp6)){
		HX_STACK_LINE(905)
		::haxe::format::JsonParser tmp7 = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(905)
		Dynamic tmp8 = tmp7->parseRec();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(905)
		Dynamic info = tmp8;		HX_STACK_VAR(info,"info");
		HX_STACK_LINE(906)
		::String tmp9 = info->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(906)
		::hx::Class tmp10 = ::Type_obj::resolveClass(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(906)
		::openfl::_legacy::AssetLibrary tmp11 = ::Type_obj::createInstance(tmp10,info->__Field(HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(906)
		::openfl::_legacy::AssetLibrary library = tmp11;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(907)
		::haxe::ds::StringMap tmp12 = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(907)
		::String tmp13 = name;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(907)
		::openfl::_legacy::AssetLibrary tmp14 = library;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(907)
		tmp12->set(tmp13,tmp14);
		HX_STACK_LINE(908)
		Dynamic tmp15 = ::openfl::_legacy::Assets_obj::library_onEvent_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(908)
		library->eventCallback = tmp15;
		HX_STACK_LINE(909)
		Dynamic tmp16 = promise->complete_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(909)
		library->load(tmp16);
	}
	else{
		HX_STACK_LINE(913)
		::String tmp7 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + name);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(913)
		::String tmp8 = (tmp7 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(913)
		promise->error(tmp8);
	}
	HX_STACK_LINE(919)
	::openfl::_legacy::Future tmp7 = promise->future;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(919)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadLibrary,return )

::openfl::_legacy::Future Assets_obj::loadMusic( ::String id,hx::Null< bool >  __o_useCache,Dynamic handler){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","loadMusic",0x125e1cf8,"openfl._legacy.Assets.loadMusic","openfl/_legacy/Assets.hx",924,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(926)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(928)
		::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(928)
		::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(930)
		bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(930)
		if ((tmp1)){
			HX_STACK_LINE(932)
			Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(932)
			promise->future->onComplete(tmp2);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",933,0x9276b055)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(933)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(933)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(939)
		bool tmp2 = useCache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(939)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(939)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(939)
		if ((tmp3)){
			HX_STACK_LINE(939)
			::openfl::_legacy::IAssetCache tmp5 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(939)
			::openfl::_legacy::IAssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(939)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(939)
			tmp4 = tmp7->get_enabled();
		}
		else{
			HX_STACK_LINE(939)
			tmp4 = false;
		}
		HX_STACK_LINE(939)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(939)
		if ((tmp4)){
			HX_STACK_LINE(939)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(939)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(939)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(939)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(939)
			tmp5 = tmp7->hasSound(tmp9);
		}
		else{
			HX_STACK_LINE(939)
			tmp5 = false;
		}
		HX_STACK_LINE(939)
		if ((tmp5)){
			HX_STACK_LINE(941)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(941)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(941)
			::openfl::_legacy::media::Sound tmp8 = tmp6->getSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(941)
			::openfl::_legacy::media::Sound sound = tmp8;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(943)
			::openfl::_legacy::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(943)
			bool tmp10 = ::openfl::_legacy::Assets_obj::isValidSound(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(943)
			if ((tmp10)){
				HX_STACK_LINE(945)
				::openfl::_legacy::media::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(945)
				promise->complete(tmp11);
				HX_STACK_LINE(946)
				::openfl::_legacy::Future tmp12 = promise->future;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(946)
				return tmp12;
			}
		}
		HX_STACK_LINE(952)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(952)
		::String tmp7 = id.substring((int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(952)
		::String libraryName = tmp7;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(953)
		int tmp8 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(953)
		int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(953)
		::String tmp10 = id.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(953)
		::String symbolName = tmp10;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(954)
		::String tmp11 = libraryName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(954)
		::openfl::_legacy::AssetLibrary tmp12 = ::openfl::_legacy::Assets_obj::getLibrary(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(954)
		::openfl::_legacy::AssetLibrary library = tmp12;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(956)
		bool tmp13 = (library != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(956)
		if ((tmp13)){
			HX_STACK_LINE(958)
			::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(958)
			bool tmp15 = library->exists(tmp14,::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(958)
			if ((tmp15)){
				HX_STACK_LINE(960)
				bool tmp16 = useCache;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(960)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(960)
				if ((tmp16)){
					HX_STACK_LINE(960)
					::openfl::_legacy::IAssetCache tmp18 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(960)
					::openfl::_legacy::IAssetCache tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(960)
					tmp17 = tmp19->get_enabled();
				}
				else{
					HX_STACK_LINE(960)
					tmp17 = false;
				}
				HX_STACK_LINE(960)
				if ((tmp17)){
					HX_STACK_LINE(962)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,::openfl::_legacy::Promise,promise,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::openfl::_legacy::media::Sound sound){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/_legacy/Assets.hx",962,0x9276b055)
						HX_STACK_ARG(sound,"sound")
						{
							HX_STACK_LINE(964)
							::openfl::_legacy::IAssetCache tmp19 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(964)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(964)
							::openfl::_legacy::media::Sound tmp21 = sound;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(964)
							tmp19->setSound(tmp20,tmp21);
							HX_STACK_LINE(965)
							::openfl::_legacy::media::Sound tmp22 = sound;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(965)
							promise->complete(tmp22);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(962)
					library->loadMusic(tmp18, Dynamic(new _Function_4_1(promise,id)));
				}
				else{
					HX_STACK_LINE(971)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(971)
					Dynamic tmp19 = promise->complete_dyn();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(971)
					library->loadMusic(tmp18,tmp19);
				}
			}
			else{
				HX_STACK_LINE(977)
				::String tmp16 = (HX_HCSTRING("[openfl.Assets] There is no Sound asset with an ID of \"","\xb6","\xc4","\x50","\x80") + id);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(977)
				::String tmp17 = (tmp16 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(977)
				promise->error(tmp17);
			}
		}
		else{
			HX_STACK_LINE(983)
			::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(983)
			::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(983)
			promise->error(tmp15);
		}
		HX_STACK_LINE(989)
		::openfl::_legacy::Future tmp14 = promise->future;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(989)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadMusic,return )

::openfl::_legacy::Future Assets_obj::loadMovieClip( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl._legacy.Assets","loadMovieClip",0x15f67473,"openfl._legacy.Assets.loadMovieClip","openfl/_legacy/Assets.hx",994,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(996)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(998)
	::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(998)
	::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(1000)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1000)
	if ((tmp1)){
		HX_STACK_LINE(1002)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1002)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",1003,0x9276b055)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(1003)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1003)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(1009)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1009)
	::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1009)
	::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(1010)
	int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1010)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1010)
	::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1010)
	::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(1011)
	::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1011)
	::openfl::_legacy::AssetLibrary tmp8 = ::openfl::_legacy::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1011)
	::openfl::_legacy::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(1013)
	bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1013)
	if ((tmp9)){
		HX_STACK_LINE(1015)
		::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1015)
		bool tmp11 = library->exists(tmp10,::openfl::_legacy::AssetType_obj::MOVIE_CLIP);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1015)
		if ((tmp11)){
			HX_STACK_LINE(1017)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1017)
			Dynamic tmp13 = promise->complete_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1017)
			library->loadMovieClip(tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(1021)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no MovieClip asset with an ID of \"","\x47","\x50","\x6c","\x1a") + id);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1021)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1021)
			promise->error(tmp13);
		}
	}
	else{
		HX_STACK_LINE(1027)
		::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1027)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1027)
		promise->error(tmp11);
	}
	HX_STACK_LINE(1033)
	::openfl::_legacy::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1033)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadMovieClip,return )

::openfl::_legacy::Future Assets_obj::loadSound( ::String id,hx::Null< bool >  __o_useCache,Dynamic handler){
bool useCache = __o_useCache.Default(true);
	HX_STACK_FRAME("openfl._legacy.Assets","loadSound",0x82cfd922,"openfl._legacy.Assets.loadSound","openfl/_legacy/Assets.hx",1038,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(handler,"handler")
{
		HX_STACK_LINE(1040)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(1042)
		::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1042)
		::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
		HX_STACK_LINE(1044)
		bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		if ((tmp1)){
			HX_STACK_LINE(1046)
			Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1046)
			promise->future->onComplete(tmp2);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",1047,0x9276b055)
				HX_STACK_ARG(_,"_")
				{
					HX_STACK_LINE(1047)
					handler(null()).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(1047)
			promise->future->onError( Dynamic(new _Function_2_1(handler)));
		}
		HX_STACK_LINE(1053)
		bool tmp2 = useCache;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1053)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1053)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1053)
		if ((tmp3)){
			HX_STACK_LINE(1053)
			::openfl::_legacy::IAssetCache tmp5 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1053)
			::openfl::_legacy::IAssetCache tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1053)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1053)
			tmp4 = tmp7->get_enabled();
		}
		else{
			HX_STACK_LINE(1053)
			tmp4 = false;
		}
		HX_STACK_LINE(1053)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1053)
		if ((tmp4)){
			HX_STACK_LINE(1053)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1053)
			::openfl::_legacy::IAssetCache tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1053)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1053)
			::String tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1053)
			tmp5 = tmp7->hasSound(tmp9);
		}
		else{
			HX_STACK_LINE(1053)
			tmp5 = false;
		}
		HX_STACK_LINE(1053)
		if ((tmp5)){
			HX_STACK_LINE(1055)
			::openfl::_legacy::IAssetCache tmp6 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1055)
			::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1055)
			::openfl::_legacy::media::Sound tmp8 = tmp6->getSound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1055)
			::openfl::_legacy::media::Sound sound = tmp8;		HX_STACK_VAR(sound,"sound");
			HX_STACK_LINE(1057)
			::openfl::_legacy::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1057)
			bool tmp10 = ::openfl::_legacy::Assets_obj::isValidSound(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1057)
			if ((tmp10)){
				HX_STACK_LINE(1059)
				::openfl::_legacy::media::Sound tmp11 = sound;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1059)
				promise->complete(tmp11);
				HX_STACK_LINE(1060)
				::openfl::_legacy::Future tmp12 = promise->future;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1060)
				return tmp12;
			}
		}
		HX_STACK_LINE(1066)
		int tmp6 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1066)
		::String tmp7 = id.substring((int)0,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1066)
		::String libraryName = tmp7;		HX_STACK_VAR(libraryName,"libraryName");
		HX_STACK_LINE(1067)
		int tmp8 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1067)
		int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1067)
		::String tmp10 = id.substr(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1067)
		::String symbolName = tmp10;		HX_STACK_VAR(symbolName,"symbolName");
		HX_STACK_LINE(1068)
		::String tmp11 = libraryName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1068)
		::openfl::_legacy::AssetLibrary tmp12 = ::openfl::_legacy::Assets_obj::getLibrary(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1068)
		::openfl::_legacy::AssetLibrary library = tmp12;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(1070)
		bool tmp13 = (library != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1070)
		if ((tmp13)){
			HX_STACK_LINE(1072)
			::String tmp14 = symbolName;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1072)
			bool tmp15 = library->exists(tmp14,::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1072)
			if ((tmp15)){
				HX_STACK_LINE(1074)
				bool tmp16 = useCache;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1074)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1074)
				if ((tmp16)){
					HX_STACK_LINE(1074)
					::openfl::_legacy::IAssetCache tmp18 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1074)
					::openfl::_legacy::IAssetCache tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1074)
					tmp17 = tmp19->get_enabled();
				}
				else{
					HX_STACK_LINE(1074)
					tmp17 = false;
				}
				HX_STACK_LINE(1074)
				if ((tmp17)){
					HX_STACK_LINE(1076)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,::openfl::_legacy::Promise,promise,::String,id)
					int __ArgCount() const { return 1; }
					Void run(::openfl::_legacy::media::Sound sound){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","openfl/_legacy/Assets.hx",1076,0x9276b055)
						HX_STACK_ARG(sound,"sound")
						{
							HX_STACK_LINE(1078)
							::openfl::_legacy::IAssetCache tmp19 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1078)
							::String tmp20 = id;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1078)
							::openfl::_legacy::media::Sound tmp21 = sound;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1078)
							tmp19->setSound(tmp20,tmp21);
							HX_STACK_LINE(1079)
							::openfl::_legacy::media::Sound tmp22 = sound;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1079)
							promise->complete(tmp22);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(1076)
					library->loadSound(tmp18, Dynamic(new _Function_4_1(promise,id)));
				}
				else{
					HX_STACK_LINE(1085)
					::String tmp18 = symbolName;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1085)
					Dynamic tmp19 = promise->complete_dyn();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1085)
					library->loadSound(tmp18,tmp19);
				}
			}
			else{
				HX_STACK_LINE(1091)
				::String tmp16 = (HX_HCSTRING("[openfl.Assets] There is no Sound asset with an ID of \"","\xb6","\xc4","\x50","\x80") + id);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1091)
				::String tmp17 = (tmp16 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1091)
				promise->error(tmp17);
			}
		}
		else{
			HX_STACK_LINE(1097)
			::String tmp14 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1097)
			::String tmp15 = (tmp14 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1097)
			promise->error(tmp15);
		}
		HX_STACK_LINE(1103)
		::openfl::_legacy::Future tmp14 = promise->future;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1103)
		return tmp14;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadSound,return )

::openfl::_legacy::Future Assets_obj::loadText( ::String id,Dynamic handler){
	HX_STACK_FRAME("openfl._legacy.Assets","loadText",0xeed9abba,"openfl._legacy.Assets.loadText","openfl/_legacy/Assets.hx",1108,0x9276b055)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(1110)
	::openfl::_legacy::Assets_obj::initialize();
	HX_STACK_LINE(1112)
	::openfl::_legacy::Promise tmp = ::openfl::_legacy::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1112)
	::openfl::_legacy::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(1114)
	bool tmp1 = (handler != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1114)
	if ((tmp1)){
		HX_STACK_LINE(1116)
		Dynamic tmp2 = handler;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1116)
		promise->future->onComplete(tmp2);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/_legacy/Assets.hx",1117,0x9276b055)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(1117)
				handler(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1117)
		promise->future->onError( Dynamic(new _Function_2_1(handler)));
	}
	HX_STACK_LINE(1123)
	int tmp2 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1123)
	::String tmp3 = id.substring((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1123)
	::String libraryName = tmp3;		HX_STACK_VAR(libraryName,"libraryName");
	HX_STACK_LINE(1124)
	int tmp4 = id.indexOf(HX_HCSTRING(":","\x3a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1124)
	int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1124)
	::String tmp6 = id.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1124)
	::String symbolName = tmp6;		HX_STACK_VAR(symbolName,"symbolName");
	HX_STACK_LINE(1125)
	::String tmp7 = libraryName;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1125)
	::openfl::_legacy::AssetLibrary tmp8 = ::openfl::_legacy::Assets_obj::getLibrary(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1125)
	::openfl::_legacy::AssetLibrary library = tmp8;		HX_STACK_VAR(library,"library");
	HX_STACK_LINE(1127)
	bool tmp9 = (library != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1127)
	if ((tmp9)){
		HX_STACK_LINE(1129)
		::String tmp10 = symbolName;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1129)
		bool tmp11 = library->exists(tmp10,::openfl::_legacy::AssetType_obj::TEXT);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1129)
		if ((tmp11)){
			HX_STACK_LINE(1131)
			::String tmp12 = symbolName;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1131)
			Dynamic tmp13 = promise->complete_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1131)
			library->loadText(tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(1135)
			::String tmp12 = (HX_HCSTRING("[openfl.Assets] There is no String asset with an ID of \"","\xd4","\xdd","\xc2","\xb2") + id);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1135)
			::String tmp13 = (tmp12 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1135)
			promise->error(tmp13);
		}
	}
	else{
		HX_STACK_LINE(1141)
		::String tmp10 = (HX_HCSTRING("[openfl.Assets] There is no asset library named \"","\x58","\xa0","\x33","\x5b") + libraryName);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1141)
		::String tmp11 = (tmp10 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1141)
		promise->error(tmp11);
	}
	HX_STACK_LINE(1147)
	::openfl::_legacy::Future tmp10 = promise->future;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1147)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadText,return )

Void Assets_obj::registerLibrary( ::String name,::openfl::_legacy::AssetLibrary library){
{
		HX_STACK_FRAME("openfl._legacy.Assets","registerLibrary",0x6f46d3f1,"openfl._legacy.Assets.registerLibrary","openfl/_legacy/Assets.hx",1152,0x9276b055)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(library,"library")
		HX_STACK_LINE(1154)
		::haxe::ds::StringMap tmp = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1154)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1154)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1154)
		if ((tmp2)){
			HX_STACK_LINE(1156)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1156)
			::openfl::_legacy::Assets_obj::unloadLibrary(tmp3);
		}
		HX_STACK_LINE(1160)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1160)
		if ((tmp3)){
			HX_STACK_LINE(1162)
			Dynamic tmp4 = ::openfl::_legacy::Assets_obj::library_onEvent_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1162)
			library->eventCallback = tmp4;
		}
		HX_STACK_LINE(1166)
		::haxe::ds::StringMap tmp4 = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1166)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1166)
		::openfl::_legacy::AssetLibrary tmp6 = library;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1166)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

Void Assets_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl._legacy.Assets","removeEventListener",0x0094d163,"openfl._legacy.Assets.removeEventListener","openfl/_legacy/Assets.hx",1171,0x9276b055)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(1173)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(1175)
		::openfl::_legacy::events::EventDispatcher tmp = ::openfl::_legacy::Assets_obj::dispatcher;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1175)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1175)
		Dynamic tmp2 = listener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1175)
		bool tmp3 = capture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1175)
		tmp->removeEventListener(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,removeEventListener,(void))

::hx::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl._legacy.Assets","resolveClass",0x1c65baf3,"openfl._legacy.Assets.resolveClass","openfl/_legacy/Assets.hx",1180,0x9276b055)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1182)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1182)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1182)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_FRAME("openfl._legacy.Assets","resolveEnum",0x106118a6,"openfl._legacy.Assets.resolveEnum","openfl/_legacy/Assets.hx",1187,0x9276b055)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1189)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1189)
	::Enum tmp1 = ::Type_obj::resolveEnum(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1189)
	::Enum value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1201)
	::Enum tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1201)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Void Assets_obj::unloadLibrary( ::String name){
{
		HX_STACK_FRAME("openfl._legacy.Assets","unloadLibrary",0xacbdfc95,"openfl._legacy.Assets.unloadLibrary","openfl/_legacy/Assets.hx",1206,0x9276b055)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(1208)
		::openfl::_legacy::Assets_obj::initialize();
		HX_STACK_LINE(1212)
		::haxe::ds::StringMap tmp = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1212)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1212)
		::openfl::_legacy::AssetLibrary tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1212)
		::openfl::_legacy::AssetLibrary library = tmp2;		HX_STACK_VAR(library,"library");
		HX_STACK_LINE(1214)
		bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1214)
		if ((tmp3)){
			HX_STACK_LINE(1216)
			::openfl::_legacy::IAssetCache tmp4 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1216)
			::String tmp5 = (name + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1216)
			tmp4->clear(tmp5);
			HX_STACK_LINE(1217)
			library->unload();
			HX_STACK_LINE(1218)
			library->eventCallback = null();
		}
		HX_STACK_LINE(1222)
		::haxe::ds::StringMap tmp4 = ::openfl::_legacy::Assets_obj::libraries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1222)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1222)
		tmp4->remove(tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

Void Assets_obj::library_onEvent( ::openfl::_legacy::AssetLibrary library,::String type){
{
		HX_STACK_FRAME("openfl._legacy.Assets","library_onEvent",0x9a352310,"openfl._legacy.Assets.library_onEvent","openfl/_legacy/Assets.hx",1236,0x9276b055)
		HX_STACK_ARG(library,"library")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(1238)
		bool tmp = (type == HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1238)
		if ((tmp)){
			HX_STACK_LINE(1240)
			::openfl::_legacy::IAssetCache tmp1 = ::openfl::_legacy::Assets_obj::cache;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1240)
			tmp1->clear(null());
			HX_STACK_LINE(1241)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1241)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1241)
			::openfl::_legacy::Assets_obj::dispatchEvent(tmp3);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,library_onEvent,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true;  }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { outValue = loadMusic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadSound") ) { outValue = loadSound_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true;  }
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = initialized; return true;  }
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { outValue = getMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isValidSound") ) { outValue = isValidSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { outValue = dispatchEvent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { outValue = loadMovieClip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { outValue = loadBitmapData_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"library_onEvent") ) { outValue = library_onEvent_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { outValue = hasEventListener_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"isValidBitmapData") ) { outValue = isValidBitmapData_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { outValue = removeEventListener_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::openfl::_legacy::IAssetCache >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast< ::openfl::_legacy::events::EventDispatcher >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::IAssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*::openfl::_legacy::events::EventDispatcher*/ ,(void *) &Assets_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{hx::fsBool,(void *) &Assets_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::dispatcher,"dispatcher");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidBitmapData","\x0b","\x65","\xe4","\xe6"),
	HX_HCSTRING("isValidSound","\xbd","\x1e","\x2b","\xa1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("library_onEvent","\xf7","\xd9","\x72","\x1d"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Assets","\x87","\x27","\x89","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
struct _Function_0_1{
	inline static ::openfl::_legacy::IAssetCache Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/Assets.hx",42,0x9276b055)
		{
			HX_STACK_LINE(42)
			::openfl::_legacy::AssetCache tmp = ::openfl::_legacy::AssetCache_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(42)
			return ((::openfl::_legacy::IAssetCache)(tmp));
		}
		return null();
	}
};
	cache= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/Assets.hx",43,0x9276b055)
		{
			HX_STACK_LINE(43)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(43)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			return tmp1;
		}
		return null();
	}
};
	libraries= _Function_0_2::Block();
	dispatcher= ::openfl::_legacy::events::EventDispatcher_obj::__new(null());
	initialized= false;
}

} // end namespace openfl
} // end namespace _legacy
