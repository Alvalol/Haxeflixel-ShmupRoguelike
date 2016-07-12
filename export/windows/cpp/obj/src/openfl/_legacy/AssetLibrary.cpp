#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
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

Void AssetLibrary_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.AssetLibrary","new",0xef7d4161,"openfl._legacy.AssetLibrary.new","openfl/_legacy/Assets.hx",1257,0x9276b055)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AssetLibrary_obj::~AssetLibrary_obj() { }

Dynamic AssetLibrary_obj::__CreateEmpty() { return  new AssetLibrary_obj; }
hx::ObjectPtr< AssetLibrary_obj > AssetLibrary_obj::__new()
{  hx::ObjectPtr< AssetLibrary_obj > _result_ = new AssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetLibrary_obj > _result_ = new AssetLibrary_obj();
	_result_->__construct();
	return _result_;}

bool AssetLibrary_obj::exists( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","exists",0xa21c837b,"openfl._legacy.AssetLibrary.exists","openfl/_legacy/Assets.hx",1266,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1266)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,exists,return )

::openfl::_legacy::display::BitmapData AssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getBitmapData",0x1ad22e30,"openfl._legacy.AssetLibrary.getBitmapData","openfl/_legacy/Assets.hx",1273,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1273)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getBitmapData,return )

::openfl::_legacy::utils::ByteArray AssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getBytes",0x53c76354,"openfl._legacy.AssetLibrary.getBytes","openfl/_legacy/Assets.hx",1280,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1280)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getBytes,return )

::openfl::_legacy::text::Font AssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getFont",0x28df9306,"openfl._legacy.AssetLibrary.getFont","openfl/_legacy/Assets.hx",1287,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1287)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getFont,return )

::openfl::_legacy::display::MovieClip AssetLibrary_obj::getMovieClip( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getMovieClip",0x2a5c8609,"openfl._legacy.AssetLibrary.getMovieClip","openfl/_legacy/Assets.hx",1294,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1294)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getMovieClip,return )

::openfl::_legacy::media::Sound AssetLibrary_obj::getMusic( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getMusic",0xa68a2b8e,"openfl._legacy.AssetLibrary.getMusic","openfl/_legacy/Assets.hx",1299,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1301)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1301)
	::openfl::_legacy::media::Sound tmp1 = this->getSound(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1301)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getMusic,return )

::String AssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getPath",0x2f711adc,"openfl._legacy.AssetLibrary.getPath","openfl/_legacy/Assets.hx",1308,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1308)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getPath,return )

::openfl::_legacy::media::Sound AssetLibrary_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getSound",0x16fbe7b8,"openfl._legacy.AssetLibrary.getSound","openfl/_legacy/Assets.hx",1315,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1315)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getSound,return )

::String AssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","getText",0x321901e4,"openfl._legacy.AssetLibrary.getText","openfl/_legacy/Assets.hx",1320,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1324)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1324)
	::openfl::_legacy::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1324)
	::openfl::_legacy::utils::ByteArray bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(1326)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1326)
	if ((tmp2)){
		HX_STACK_LINE(1328)
		return null();
	}
	else{
		HX_STACK_LINE(1332)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1332)
		::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1332)
		return tmp4;
	}
	HX_STACK_LINE(1326)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,getText,return )

bool AssetLibrary_obj::isLocal( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","isLocal",0x2812f2a2,"openfl._legacy.AssetLibrary.isLocal","openfl/_legacy/Assets.hx",1347,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1347)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,isLocal,return )

Array< ::String > AssetLibrary_obj::list( ::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("openfl._legacy.AssetLibrary","list",0x9ccc8c3d,"openfl._legacy.AssetLibrary.list","openfl/_legacy/Assets.hx",1354,0x9276b055)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(1354)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,list,return )

Void AssetLibrary_obj::load( Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","load",0x9cd10a05,"openfl._legacy.AssetLibrary.load","openfl/_legacy/Assets.hx",1361,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1361)
		handler(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetLibrary_obj,load,(void))

Void AssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadBitmapData",0x8b0b5c1e,"openfl._legacy.AssetLibrary.loadBitmapData","openfl/_legacy/Assets.hx",1366,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1368)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1368)
		::openfl::_legacy::display::BitmapData tmp1 = this->getBitmapData(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1368)
		handler(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadBitmapData,(void))

Void AssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadBytes",0x2fb8fc26,"openfl._legacy.AssetLibrary.loadBytes","openfl/_legacy/Assets.hx",1373,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1375)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1375)
		::openfl::_legacy::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1375)
		handler(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadBytes,(void))

Void AssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadFont",0xeab87a74,"openfl._legacy.AssetLibrary.loadFont","openfl/_legacy/Assets.hx",1380,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1382)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1382)
		::openfl::_legacy::text::Font tmp1 = this->getFont(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1382)
		handler(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadFont,(void))

Void AssetLibrary_obj::loadMovieClip( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadMovieClip",0x251fefdb,"openfl._legacy.AssetLibrary.loadMovieClip","openfl/_legacy/Assets.hx",1387,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1389)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1389)
		::openfl::_legacy::display::MovieClip tmp1 = this->getMovieClip(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1389)
		handler(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadMovieClip,(void))

Void AssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadMusic",0x827bc460,"openfl._legacy.AssetLibrary.loadMusic","openfl/_legacy/Assets.hx",1394,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1396)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1396)
		::openfl::_legacy::media::Sound tmp1 = this->getMusic(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1396)
		handler(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadMusic,(void))

Void AssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadSound",0xf2ed808a,"openfl._legacy.AssetLibrary.loadSound","openfl/_legacy/Assets.hx",1401,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(1403)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1403)
		::openfl::_legacy::media::Sound tmp1 = this->getSound(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1403)
		handler(tmp1).Cast< Void >();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadSound,(void))

Void AssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","loadText",0xf3f1e952,"openfl._legacy.AssetLibrary.loadText","openfl/_legacy/Assets.hx",1408,0x9276b055)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_legacy/Assets.hx",1412,0x9276b055)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(1414)
				bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(1414)
				if ((tmp)){
					HX_STACK_LINE(1416)
					handler(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(1420)
					int tmp1 = bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(1420)
					::String tmp2 = bytes->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1420)
					handler(tmp2).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1412)
		Dynamic callback =  Dynamic(new _Function_1_1(handler));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(1426)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1426)
		Dynamic tmp1 = callback;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1426)
		this->loadBytes(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetLibrary_obj,loadText,(void))

Void AssetLibrary_obj::unload( ){
{
		HX_STACK_FRAME("openfl._legacy.AssetLibrary","unload",0x47c9069e,"openfl._legacy.AssetLibrary.unload","openfl/_legacy/Assets.hx",1437,0x9276b055)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetLibrary_obj,unload,(void))


AssetLibrary_obj::AssetLibrary_obj()
{
}

void AssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetLibrary);
	HX_MARK_MEMBER_NAME(eventCallback,"eventCallback");
	HX_MARK_END_CLASS();
}

void AssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(eventCallback,"eventCallback");
}

Dynamic AssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getMovieClip") ) { return getMovieClip_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"eventCallback") ) { return eventCallback; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMovieClip") ) { return loadMovieClip_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"eventCallback") ) { eventCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("eventCallback","\xff","\xc7","\x09","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AssetLibrary_obj,eventCallback),HX_HCSTRING("eventCallback","\xff","\xc7","\x09","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("eventCallback","\xff","\xc7","\x09","\x39"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getMovieClip","\x2a","\x9f","\x71","\x27"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadMovieClip","\x9a","\xd3","\x80","\x9a"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetLibrary_obj::__mClass;

void AssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.AssetLibrary","\xef","\xfc","\xce","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetLibrary_obj >;
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
