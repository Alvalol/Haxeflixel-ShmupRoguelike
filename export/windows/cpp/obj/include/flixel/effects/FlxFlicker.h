#ifndef INCLUDED_flixel_effects_FlxFlicker
#define INCLUDED_flixel_effects_FlxFlicker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,effects,FlxFlicker)
HX_DECLARE_CLASS2(flixel,util,FlxPool_flixel_effects_FlxFlicker)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace flixel{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES  FlxFlicker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxFlicker_obj OBJ_;
		FlxFlicker_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.effects.FlxFlicker")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxFlicker_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxFlicker_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxFlicker","\xc6","\x94","\x18","\xa6"); }

		static void __boot();
		static ::flixel::util::FlxPool_flixel_effects_FlxFlicker _pool;
		static ::haxe::ds::ObjectMap _boundObjects;
		static ::flixel::effects::FlxFlicker flicker( ::flixel::FlxObject Object,hx::Null< Float >  Duration,hx::Null< Float >  Interval,hx::Null< bool >  EndVisibility,hx::Null< bool >  ForceRestart,Dynamic CompletionCallback,Dynamic ProgressCallback);
		static Dynamic flicker_dyn();

		static bool isFlickering( ::flixel::FlxObject Object);
		static Dynamic isFlickering_dyn();

		static Void stopFlickering( ::flixel::FlxObject Object);
		static Dynamic stopFlickering_dyn();

		::flixel::FlxObject object;
		bool endVisibility;
		::flixel::util::FlxTimer timer;
		Dynamic completionCallback;
		Dynamic &completionCallback_dyn() { return completionCallback;}
		Dynamic progressCallback;
		Dynamic &progressCallback_dyn() { return progressCallback;}
		Float duration;
		Float interval;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void start( ::flixel::FlxObject Object,Float Duration,Float Interval,bool EndVisibility,Dynamic CompletionCallback,Dynamic ProgressCallback);
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Void flickerProgress( ::flixel::util::FlxTimer Timer);
		Dynamic flickerProgress_dyn();

};

} // end namespace flixel
} // end namespace effects

#endif /* INCLUDED_flixel_effects_FlxFlicker */ 
