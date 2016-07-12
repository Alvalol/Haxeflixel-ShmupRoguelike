#ifndef INCLUDED_flixel_system_FlxSound
#define INCLUDED_flixel_system_FlxSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,_system,FlxSound)
HX_DECLARE_CLASS2(flixel,_system,FlxSoundGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  FlxSound_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxSound_obj OBJ_;
		FlxSound_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxSound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSound","\x1d","\x97","\xa6","\x3d"); }

		Float x;
		Float y;
		bool persist;
		::String name;
		::String artist;
		Float amplitude;
		Float amplitudeLeft;
		Float amplitudeRight;
		bool autoDestroy;
		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		bool playing;
		Float time;
		::flixel::_system::FlxSoundGroup group;
		bool looped;
		::openfl::_legacy::media::Sound _sound;
		::openfl::_legacy::media::SoundChannel _channel;
		::openfl::media::SoundTransform _transform;
		bool _paused;
		Float _volume;
		Float _pitch;
		Float _volumeAdjust;
		::flixel::FlxObject _target;
		Float _radius;
		bool _proximityPan;
		bool _alreadyPaused;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void kill( );

		virtual ::flixel::_system::FlxSound loadEmbedded( Dynamic EmbeddedSound,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic loadEmbedded_dyn();

		virtual ::flixel::_system::FlxSound loadStream( ::String SoundURL,hx::Null< bool >  Looped,hx::Null< bool >  AutoDestroy,Dynamic OnComplete);
		Dynamic loadStream_dyn();

		virtual ::flixel::_system::FlxSound proximity( Float X,Float Y,::flixel::FlxObject TargetObject,Float Radius,hx::Null< bool >  Pan);
		Dynamic proximity_dyn();

		virtual ::flixel::_system::FlxSound play( hx::Null< bool >  ForceRestart);
		Dynamic play_dyn();

		virtual ::flixel::_system::FlxSound resume( );
		Dynamic resume_dyn();

		virtual ::flixel::_system::FlxSound pause( );
		Dynamic pause_dyn();

		virtual ::flixel::_system::FlxSound stop( );
		Dynamic stop_dyn();

		virtual ::flixel::_system::FlxSound fadeOut( hx::Null< Float >  Duration,Dynamic To,Dynamic onComplete);
		Dynamic fadeOut_dyn();

		virtual ::flixel::_system::FlxSound fadeIn( hx::Null< Float >  Duration,hx::Null< Float >  From,hx::Null< Float >  To,Dynamic onComplete);
		Dynamic fadeIn_dyn();

		virtual Void volumeTween( Float f);
		Dynamic volumeTween_dyn();

		virtual Float getActualVolume( );
		Dynamic getActualVolume_dyn();

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Void updateTransform( );
		Dynamic updateTransform_dyn();

		virtual Void startSound( Float Position);
		Dynamic startSound_dyn();

		virtual Void stopped( Dynamic _);
		Dynamic stopped_dyn();

		virtual Void cleanup( bool destroySound,hx::Null< bool >  resetPosition,hx::Null< bool >  resetFading);
		Dynamic cleanup_dyn();

		virtual Void gotID3( Dynamic _);
		Dynamic gotID3_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual ::flixel::_system::FlxSoundGroup set_group( ::flixel::_system::FlxSoundGroup group);
		Dynamic set_group_dyn();

		virtual bool get_playing( );
		Dynamic get_playing_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual Float set_volume( Float Volume);
		Dynamic set_volume_dyn();

		virtual Float get_pitch( );
		Dynamic get_pitch_dyn();

		virtual Float set_pitch( Float v);
		Dynamic set_pitch_dyn();

		virtual Float get_pan( );
		Dynamic get_pan_dyn();

		virtual Float set_pan( Float pan);
		Dynamic set_pan_dyn();

		virtual bool get_looped( );
		Dynamic get_looped_dyn();

		virtual bool set_looped( bool loop);
		Dynamic set_looped_dyn();

		virtual ::String toString( );

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxSound */ 
