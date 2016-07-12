#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetCache
#include <openfl/_legacy/AssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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
namespace openfl{
namespace _legacy{

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.AssetCache","new",0x60cebf28,"openfl._legacy.AssetCache.new","openfl/_legacy/Assets.hx",1447,0x9276b055)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1455)
	this->__enabled = true;
	HX_STACK_LINE(1460)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1460)
	{
		HX_STACK_LINE(1460)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1460)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1460)
		tmp = tmp2;
	}
	HX_STACK_LINE(1460)
	this->bitmapData = tmp;
	HX_STACK_LINE(1461)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1461)
	{
		HX_STACK_LINE(1461)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1461)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1461)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(1461)
	this->font = tmp1;
	HX_STACK_LINE(1462)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1462)
	{
		HX_STACK_LINE(1462)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1462)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1462)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(1462)
	this->sound = tmp2;
}
;
	return null();
}

//AssetCache_obj::~AssetCache_obj() { }

Dynamic AssetCache_obj::__CreateEmpty() { return  new AssetCache_obj; }
hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{  hx::ObjectPtr< AssetCache_obj > _result_ = new AssetCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetCache_obj > _result_ = new AssetCache_obj();
	_result_->__construct();
	return _result_;}

hx::Object *AssetCache_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::IAssetCache_obj)) return operator ::openfl::_legacy::IAssetCache_obj *();
	return super::__ToInterface(inType);
}

AssetCache_obj::operator ::openfl::_legacy::IAssetCache_obj *()
	{ return new ::openfl::_legacy::IAssetCache_delegate_< AssetCache_obj >(this); }
Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","clear",0xf085a255,"openfl._legacy.AssetCache.clear","openfl/_legacy/Assets.hx",1467,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(1469)
		bool tmp = (prefix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1469)
		if ((tmp)){
			HX_STACK_LINE(1471)
			::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1471)
			{
				HX_STACK_LINE(1471)
				::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1471)
				::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1471)
				tmp1 = tmp3;
			}
			HX_STACK_LINE(1471)
			this->bitmapData = tmp1;
			HX_STACK_LINE(1472)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1472)
			{
				HX_STACK_LINE(1472)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1472)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1472)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(1472)
			this->font = tmp2;
			HX_STACK_LINE(1473)
			::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1473)
			{
				HX_STACK_LINE(1473)
				::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1473)
				::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1473)
				tmp3 = tmp5;
			}
			HX_STACK_LINE(1473)
			this->sound = tmp3;
		}
		else{
			HX_STACK_LINE(1477)
			::haxe::ds::StringMap tmp1 = this->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1477)
			Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1477)
			Dynamic keys = tmp2;		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(1479)
			Dynamic tmp3 = keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1479)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1481)
					::String tmp4 = key;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1481)
					::String tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1481)
					bool tmp6 = ::StringTools_obj::startsWith(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1481)
					if ((tmp6)){
						HX_STACK_LINE(1483)
						::haxe::ds::StringMap tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1483)
						::String tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1483)
						tmp7->remove(tmp8);
					}
				}
;
			}
			HX_STACK_LINE(1489)
			::haxe::ds::StringMap tmp4 = this->font;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1489)
			Dynamic tmp5 = tmp4->keys();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1489)
			Dynamic keys1 = tmp5;		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(1491)
			Dynamic tmp6 = keys1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1491)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1493)
					::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1493)
					::String tmp8 = prefix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1493)
					bool tmp9 = ::StringTools_obj::startsWith(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1493)
					if ((tmp9)){
						HX_STACK_LINE(1495)
						::haxe::ds::StringMap tmp10 = this->font;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1495)
						::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1495)
						tmp10->remove(tmp11);
					}
				}
;
			}
			HX_STACK_LINE(1501)
			::haxe::ds::StringMap tmp7 = this->sound;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1501)
			Dynamic tmp8 = tmp7->keys();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1501)
			Dynamic keys2 = tmp8;		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(1503)
			Dynamic tmp9 = keys2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1503)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp9);  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(1505)
					::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1505)
					::String tmp11 = prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1505)
					bool tmp12 = ::StringTools_obj::startsWith(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1505)
					if ((tmp12)){
						HX_STACK_LINE(1507)
						::haxe::ds::StringMap tmp13 = this->sound;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1507)
						::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1507)
						tmp13->remove(tmp14);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

::openfl::_legacy::display::BitmapData AssetCache_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","getBitmapData",0x82a74ab7,"openfl._legacy.AssetCache.getBitmapData","openfl/_legacy/Assets.hx",1518,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1520)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1520)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1520)
	::openfl::_legacy::display::BitmapData tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1520)
	::openfl::_legacy::display::BitmapData tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1520)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

::openfl::_legacy::text::Font AssetCache_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","getFont",0xc1f1004d,"openfl._legacy.AssetCache.getFont","openfl/_legacy/Assets.hx",1525,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1527)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1527)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1527)
	::openfl::_legacy::text::Font tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1527)
	::openfl::_legacy::text::Font tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1527)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

::openfl::_legacy::media::Sound AssetCache_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","getSound",0x6d2a1891,"openfl._legacy.AssetCache.getSound","openfl/_legacy/Assets.hx",1532,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1534)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1534)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1534)
	::openfl::_legacy::media::Sound tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1534)
	::openfl::_legacy::media::Sound tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1534)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","hasBitmapData",0x408ba67b,"openfl._legacy.AssetCache.hasBitmapData","openfl/_legacy/Assets.hx",1539,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1541)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1541)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1541)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1541)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","hasFont",0xbeb27111,"openfl._legacy.AssetCache.hasFont","openfl/_legacy/Assets.hx",1546,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1548)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1548)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1548)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1548)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","hasSound",0x99ab534d,"openfl._legacy.AssetCache.hasSound","openfl/_legacy/Assets.hx",1553,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1555)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1555)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1555)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1555)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","removeBitmapData",0x839b4755,"openfl._legacy.AssetCache.removeBitmapData","openfl/_legacy/Assets.hx",1560,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1562)
	::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1562)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1562)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1562)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","removeFont",0x5927926b,"openfl._legacy.AssetCache.removeFont","openfl/_legacy/Assets.hx",1567,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1569)
	::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1569)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1569)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1569)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetCache","removeSound",0x25b360b3,"openfl._legacy.AssetCache.removeSound","openfl/_legacy/Assets.hx",1574,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1576)
	::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1576)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1576)
	bool tmp2 = tmp->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1576)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

Void AssetCache_obj::setBitmapData( ::String id,::openfl::_legacy::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","setBitmapData",0xc7ad2cc3,"openfl._legacy.AssetCache.setBitmapData","openfl/_legacy/Assets.hx",1581,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(1583)
		::haxe::ds::StringMap tmp = this->bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1583)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1583)
		::openfl::_legacy::display::BitmapData tmp2 = bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1583)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

Void AssetCache_obj::setFont( ::String id,::openfl::_legacy::text::Font font){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","setFont",0xb4f29159,"openfl._legacy.AssetCache.setFont","openfl/_legacy/Assets.hx",1588,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(1590)
		::haxe::ds::StringMap tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1590)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1590)
		::openfl::_legacy::text::Font tmp2 = font;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1590)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

Void AssetCache_obj::setSound( ::String id,::openfl::_legacy::media::Sound sound){
{
		HX_STACK_FRAME("openfl._legacy.AssetCache","setSound",0x1b877205,"openfl._legacy.AssetCache.setSound","openfl/_legacy/Assets.hx",1595,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(1597)
		::haxe::ds::StringMap tmp = this->sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1597)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1597)
		::openfl::_legacy::media::Sound tmp2 = sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1597)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled( ){
	HX_STACK_FRAME("openfl._legacy.AssetCache","get_enabled",0xaade5b60,"openfl._legacy.AssetCache.get_enabled","openfl/_legacy/Assets.hx",1609,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1611)
	bool tmp = this->__enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1611)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled( bool value){
	HX_STACK_FRAME("openfl._legacy.AssetCache","set_enabled",0xb54b626c,"openfl._legacy.AssetCache.set_enabled","openfl/_legacy/Assets.hx",1616,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1618)
	bool tmp = this->__enabled = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1618)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(__enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(__enabled,"__enabled");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return get_enabled(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hasFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hasSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return __enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return removeFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hasBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { __enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	outFields->push(HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,__enabled),HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("removeFont","\x33","\x98","\xdf","\xc0"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("setSound","\xcd","\xf5","\x00","\x8f"),
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.AssetCache","\x36","\x4b","\xee","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
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
