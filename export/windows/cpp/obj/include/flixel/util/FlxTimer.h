#ifndef INCLUDED_flixel_util_FlxTimer
#define INCLUDED_flixel_util_FlxTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,FlxTimerManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FlxTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxTimer_obj OBJ_;
		FlxTimer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.FlxTimer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxTimer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTimer_obj();

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
		::String __ToString() const { return HX_HCSTRING("FlxTimer","\x13","\xca","\x0f","\xcd"); }

		static ::flixel::util::FlxTimerManager manager;
		Float time;
		int loops;
		bool active;
		bool finished;
		Dynamic onComplete;
		Dynamic &onComplete_dyn() { return onComplete;}
		Float _timeCounter;
		int _loopsCounter;
		bool _inManager;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual ::flixel::util::FlxTimer start( hx::Null< Float >  Time,Dynamic OnComplete,hx::Null< int >  Loops);
		Dynamic start_dyn();

		virtual ::flixel::util::FlxTimer reset( hx::Null< Float >  NewTime);
		Dynamic reset_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void update( Float elapsed);
		Dynamic update_dyn();

		virtual Float get_timeLeft( );
		Dynamic get_timeLeft_dyn();

		virtual Float get_elapsedTime( );
		Dynamic get_elapsedTime_dyn();

		virtual int get_loopsLeft( );
		Dynamic get_loopsLeft_dyn();

		virtual int get_elapsedLoops( );
		Dynamic get_elapsedLoops_dyn();

		virtual Float get_progress( );
		Dynamic get_progress_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxTimer */ 
