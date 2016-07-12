#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
namespace openfl{
namespace media{

Void ID3Info_obj::__construct()
{
HX_STACK_FRAME("openfl.media.ID3Info","new",0xc3c5ad90,"openfl.media.ID3Info.new","openfl/media/ID3Info.hx",16,0xcebe7122)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ID3Info_obj::~ID3Info_obj() { }

Dynamic ID3Info_obj::__CreateEmpty() { return  new ID3Info_obj; }
hx::ObjectPtr< ID3Info_obj > ID3Info_obj::__new()
{  hx::ObjectPtr< ID3Info_obj > _result_ = new ID3Info_obj();
	_result_->__construct();
	return _result_;}

Dynamic ID3Info_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ID3Info_obj > _result_ = new ID3Info_obj();
	_result_->__construct();
	return _result_;}


ID3Info_obj::ID3Info_obj()
{
}

void ID3Info_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ID3Info);
	HX_MARK_MEMBER_NAME(album,"album");
	HX_MARK_MEMBER_NAME(artist,"artist");
	HX_MARK_MEMBER_NAME(comment,"comment");
	HX_MARK_MEMBER_NAME(genre,"genre");
	HX_MARK_MEMBER_NAME(songName,"songName");
	HX_MARK_MEMBER_NAME(track,"track");
	HX_MARK_MEMBER_NAME(year,"year");
	HX_MARK_END_CLASS();
}

void ID3Info_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(album,"album");
	HX_VISIT_MEMBER_NAME(artist,"artist");
	HX_VISIT_MEMBER_NAME(comment,"comment");
	HX_VISIT_MEMBER_NAME(genre,"genre");
	HX_VISIT_MEMBER_NAME(songName,"songName");
	HX_VISIT_MEMBER_NAME(track,"track");
	HX_VISIT_MEMBER_NAME(year,"year");
}

Dynamic ID3Info_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"year") ) { return year; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"album") ) { return album; }
		if (HX_FIELD_EQ(inName,"genre") ) { return genre; }
		if (HX_FIELD_EQ(inName,"track") ) { return track; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { return artist; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"comment") ) { return comment; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { return songName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ID3Info_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"year") ) { year=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"album") ) { album=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"genre") ) { genre=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"track") ) { track=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"artist") ) { artist=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"comment") ) { comment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songName") ) { songName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ID3Info_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("album","\x2f","\x13","\x8c","\x21"));
	outFields->push(HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"));
	outFields->push(HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"));
	outFields->push(HX_HCSTRING("genre","\x43","\x28","\x5c","\x91"));
	outFields->push(HX_HCSTRING("songName","\xc0","\xd0","\xd7","\x36"));
	outFields->push(HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"));
	outFields->push(HX_HCSTRING("year","\xbd","\xc9","\x47","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ID3Info_obj,album),HX_HCSTRING("album","\x2f","\x13","\x8c","\x21")},
	{hx::fsString,(int)offsetof(ID3Info_obj,artist),HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9")},
	{hx::fsString,(int)offsetof(ID3Info_obj,comment),HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81")},
	{hx::fsString,(int)offsetof(ID3Info_obj,genre),HX_HCSTRING("genre","\x43","\x28","\x5c","\x91")},
	{hx::fsString,(int)offsetof(ID3Info_obj,songName),HX_HCSTRING("songName","\xc0","\xd0","\xd7","\x36")},
	{hx::fsString,(int)offsetof(ID3Info_obj,track),HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16")},
	{hx::fsString,(int)offsetof(ID3Info_obj,year),HX_HCSTRING("year","\xbd","\xc9","\x47","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("album","\x2f","\x13","\x8c","\x21"),
	HX_HCSTRING("artist","\xc7","\xf2","\x48","\xb9"),
	HX_HCSTRING("comment","\x5f","\x7a","\x70","\x81"),
	HX_HCSTRING("genre","\x43","\x28","\x5c","\x91"),
	HX_HCSTRING("songName","\xc0","\xd0","\xd7","\x36"),
	HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),
	HX_HCSTRING("year","\xbd","\xc9","\x47","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ID3Info_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ID3Info_obj::__mClass,"__mClass");
};

#endif

hx::Class ID3Info_obj::__mClass;

void ID3Info_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.ID3Info","\x9e","\xe5","\x63","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ID3Info_obj >;
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
} // end namespace media
