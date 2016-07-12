#ifndef INCLUDED___ASSET__flixel_sounds_beep_ogg
#define INCLUDED___ASSET__flixel_sounds_beep_ogg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
HX_DECLARE_CLASS0(__ASSET__flixel_sounds_beep_ogg)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,net,URLRequest)
HX_DECLARE_CLASS2(openfl,media,SoundLoaderContext)


class HXCPP_CLASS_ATTRIBUTES  __ASSET__flixel_sounds_beep_ogg_obj : public ::openfl::_legacy::media::Sound_obj{
	public:
		typedef ::openfl::_legacy::media::Sound_obj super;
		typedef __ASSET__flixel_sounds_beep_ogg_obj OBJ_;
		__ASSET__flixel_sounds_beep_ogg_obj();
		Void __construct(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="__ASSET__flixel_sounds_beep_ogg")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< __ASSET__flixel_sounds_beep_ogg_obj > __new(::openfl::_legacy::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~__ASSET__flixel_sounds_beep_ogg_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("__ASSET__flixel_sounds_beep_ogg","\x06","\x16","\x49","\x4e"); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__flixel_sounds_beep_ogg */ 
