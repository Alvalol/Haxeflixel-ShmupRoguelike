#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_media_InternalAudioType
#include <openfl/_legacy/media/InternalAudioType.h>
#endif
namespace openfl{
namespace _legacy{
namespace media{

::openfl::_legacy::media::InternalAudioType InternalAudioType_obj::MUSIC;

::openfl::_legacy::media::InternalAudioType InternalAudioType_obj::SOUND;

::openfl::_legacy::media::InternalAudioType InternalAudioType_obj::UNKNOWN;

HX_DEFINE_CREATE_ENUM(InternalAudioType_obj)

int InternalAudioType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) return 0;
	if (inName==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) return 1;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 2;
	return super::__FindIndex(inName);
}

int InternalAudioType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) return 0;
	if (inName==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) return 0;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic InternalAudioType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) return MUSIC;
	if (inName==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) return SOUND;
	if (inName==HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61")) return UNKNOWN;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"),
	HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),
	HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalAudioType_obj::MUSIC,"MUSIC");
	HX_MARK_MEMBER_NAME(InternalAudioType_obj::SOUND,"SOUND");
	HX_MARK_MEMBER_NAME(InternalAudioType_obj::UNKNOWN,"UNKNOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalAudioType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InternalAudioType_obj::MUSIC,"MUSIC");
	HX_VISIT_MEMBER_NAME(InternalAudioType_obj::SOUND,"SOUND");
	HX_VISIT_MEMBER_NAME(InternalAudioType_obj::UNKNOWN,"UNKNOWN");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class InternalAudioType_obj::__mClass;

Dynamic __Create_InternalAudioType_obj() { return new InternalAudioType_obj; }

void InternalAudioType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl._legacy.media.InternalAudioType","\x25","\xb2","\x5a","\x5e"), hx::TCanCast< InternalAudioType_obj >,sStaticFields,sMemberFields,
	&__Create_InternalAudioType_obj, &__Create,
	&super::__SGetClass(), &CreateInternalAudioType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void InternalAudioType_obj::__boot()
{
hx::Static(MUSIC) = hx::CreateEnum< InternalAudioType_obj >(HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"),0);
hx::Static(SOUND) = hx::CreateEnum< InternalAudioType_obj >(HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),1);
hx::Static(UNKNOWN) = hx::CreateEnum< InternalAudioType_obj >(HX_HCSTRING("UNKNOWN","\x6a","\xf7","\x4e","\x61"),2);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace media
