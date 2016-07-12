#ifndef INCLUDED_openfl__legacy_media_AudioThreadState
#define INCLUDED_openfl__legacy_media_AudioThreadState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,AudioThreadState)
HX_DECLARE_CLASS3(openfl,_legacy,media,SoundChannel)
namespace openfl{
namespace _legacy{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  AudioThreadState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AudioThreadState_obj OBJ_;
		AudioThreadState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.media.AudioThreadState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AudioThreadState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioThreadState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AudioThreadState","\xd1","\xad","\x11","\x90"); }

		::cpp::vm::Thread audioThread;
		Array< ::Dynamic > channelList;
		::cpp::vm::Thread mainThread;
		::cpp::vm::Mutex mutex;
		virtual Void add( ::openfl::_legacy::media::SoundChannel channel);
		Dynamic add_dyn();

		virtual Void remove( ::openfl::_legacy::media::SoundChannel channel);
		Dynamic remove_dyn();

		virtual Void updateComplete( );
		Dynamic updateComplete_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace media

#endif /* INCLUDED_openfl__legacy_media_AudioThreadState */ 
