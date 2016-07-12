#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_sounds_flixel_ogg
#include <__ASSET__flixel_sounds_flixel_ogg.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif

Void __ASSET__flixel_sounds_flixel_ogg_obj::__construct(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{
HX_STACK_FRAME("__ASSET__flixel_sounds_flixel_ogg","new",0xa56e6f66,"__ASSET__flixel_sounds_flixel_ogg.new","openfl/_legacy/Assets.hx",2283,0x9276b055)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
HX_STACK_ARG(__o_forcePlayAsMusic,"forcePlayAsMusic")
Dynamic forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(2285)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(2287)
	::String tmp = ::__ASSET__flixel_sounds_flixel_ogg_obj::resourceName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2287)
	::haxe::io::Bytes tmp1 = ::haxe::Resource_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(2287)
	::openfl::_legacy::utils::ByteArray tmp2 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(2287)
	::openfl::_legacy::utils::ByteArray byteArray = tmp2;		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(2288)
	::openfl::_legacy::utils::ByteArray tmp3 = byteArray;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(2288)
	int tmp4 = byteArray->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(2288)
	Dynamic tmp5 = forcePlayAsMusic;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(2288)
	this->loadCompressedDataFromByteArray(tmp3,tmp4,tmp5);
}
;
	return null();
}

//__ASSET__flixel_sounds_flixel_ogg_obj::~__ASSET__flixel_sounds_flixel_ogg_obj() { }

Dynamic __ASSET__flixel_sounds_flixel_ogg_obj::__CreateEmpty() { return  new __ASSET__flixel_sounds_flixel_ogg_obj; }
hx::ObjectPtr< __ASSET__flixel_sounds_flixel_ogg_obj > __ASSET__flixel_sounds_flixel_ogg_obj::__new(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{  hx::ObjectPtr< __ASSET__flixel_sounds_flixel_ogg_obj > _result_ = new __ASSET__flixel_sounds_flixel_ogg_obj();
	_result_->__construct(stream,context,__o_forcePlayAsMusic);
	return _result_;}

Dynamic __ASSET__flixel_sounds_flixel_ogg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__flixel_sounds_flixel_ogg_obj > _result_ = new __ASSET__flixel_sounds_flixel_ogg_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String __ASSET__flixel_sounds_flixel_ogg_obj::resourceName;


__ASSET__flixel_sounds_flixel_ogg_obj::__ASSET__flixel_sounds_flixel_ogg_obj()
{
}

bool __ASSET__flixel_sounds_flixel_ogg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = resourceName; return true;  }
	}
	return false;
}

bool __ASSET__flixel_sounds_flixel_ogg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &__ASSET__flixel_sounds_flixel_ogg_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_sounds_flixel_ogg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__flixel_sounds_flixel_ogg_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_sounds_flixel_ogg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_sounds_flixel_ogg_obj::resourceName,"resourceName");
};

#endif

hx::Class __ASSET__flixel_sounds_flixel_ogg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null()) };

void __ASSET__flixel_sounds_flixel_ogg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__flixel_sounds_flixel_ogg","\x74","\x84","\x25","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__flixel_sounds_flixel_ogg_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__flixel_sounds_flixel_ogg_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__flixel_sounds_flixel_ogg_obj >;
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

void __ASSET__flixel_sounds_flixel_ogg_obj::__boot()
{
	resourceName= HX_HCSTRING("__ASSET__:sound___ASSET__flixel_sounds_flixel_ogg","\x9a","\x52","\xef","\x98");
}

