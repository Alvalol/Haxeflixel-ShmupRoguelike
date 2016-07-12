#ifndef INCLUDED_flixel_system_replay_FlxReplay
#define INCLUDED_flixel_system_replay_FlxReplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,replay,FlxReplay)
HX_DECLARE_CLASS3(flixel,_system,replay,FrameRecord)
namespace flixel{
namespace _system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES  FlxReplay_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxReplay_obj OBJ_;
		FlxReplay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.replay.FlxReplay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxReplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxReplay_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxReplay","\x19","\xe1","\x70","\x88"); }

		int seed;
		int frame;
		int frameCount;
		bool finished;
		Array< ::Dynamic > _frames;
		int _capacity;
		int _marker;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void create( int Seed);
		Dynamic create_dyn();

		virtual Void load( ::String FileContents);
		Dynamic load_dyn();

		virtual ::String save( );
		Dynamic save_dyn();

		virtual Void recordFrame( );
		Dynamic recordFrame_dyn();

		virtual Void playNextFrame( );
		Dynamic playNextFrame_dyn();

		virtual Void rewind( );
		Dynamic rewind_dyn();

		virtual Void init( );
		Dynamic init_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_FlxReplay */ 
