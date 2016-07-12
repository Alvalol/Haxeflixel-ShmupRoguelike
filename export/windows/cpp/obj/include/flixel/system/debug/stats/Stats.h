#ifndef INCLUDED_flixel_system_debug_stats_Stats
#define INCLUDED_flixel_system_debug_stats_Stats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,stats,Stats)
HX_DECLARE_CLASS4(flixel,_system,debug,stats,StatsGraph)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace flixel{
namespace _system{
namespace debug{
namespace stats{


class HXCPP_CLASS_ATTRIBUTES  Stats_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Stats_obj OBJ_;
		Stats_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats.Stats")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stats_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stats","\xff","\xe5","\x38","\x17"); }

		static void __boot();
		static int UPDATE_DELAY;
		static int INITIAL_WIDTH;
		static int MIN_HEIGHT;
		static int FPS_COLOR;
		static int MEMORY_COLOR;
		static int DRAW_TIME_COLOR;
		static int UPDATE_TIME_COLOR;
		static int LABEL_COLOR;
		static int TEXT_SIZE;
		static int DECIMALS;
		::openfl::_legacy::text::TextField _leftTextField;
		::openfl::_legacy::text::TextField _rightTextField;
		int _itvTime;
		int _initTime;
		int _frameCount;
		int _totalCount;
		int _currentTime;
		::flixel::_system::debug::stats::StatsGraph fpsGraph;
		::flixel::_system::debug::stats::StatsGraph memoryGraph;
		::flixel::_system::debug::stats::StatsGraph drawTimeGraph;
		::flixel::_system::debug::stats::StatsGraph updateTimeGraph;
		Float flashPlayerFramerate;
		int visibleCount;
		int activeCount;
		int updateTime;
		int drawTime;
		int _lastTime;
		int _updateTimer;
		Array< int > _update;
		int _updateMarker;
		Array< int > _draw;
		int _drawMarker;
		Array< int > _visibleObject;
		int _visibleObjectMarker;
		Array< int > _activeObject;
		int _activeObjectMarker;
		bool _paused;
		::flixel::_system::ui::FlxSystemButton _toggleSizeButton;
		int drawCallsCount;
		Array< int > _drawCalls;
		int _drawCallsMarker;
		virtual Void start( );
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual Void updateTexts( );
		Dynamic updateTexts_dyn();

		virtual Float currentFps( );
		Dynamic currentFps_dyn();

		virtual Float averageFps( );
		Dynamic averageFps_dyn();

		virtual Float runningTime( );
		Dynamic runningTime_dyn();

		virtual Float intervalTime( );
		Dynamic intervalTime_dyn();

		virtual Float currentMem( );
		Dynamic currentMem_dyn();

		virtual Void flixelUpdate( int Time);
		Dynamic flixelUpdate_dyn();

		virtual Void flixelDraw( int Time);
		Dynamic flixelDraw_dyn();

		virtual Void activeObjects( int Count);
		Dynamic activeObjects_dyn();

		virtual Void visibleObjects( int Count);
		Dynamic visibleObjects_dyn();

		virtual Void drawCalls( int Drawcalls);
		Dynamic drawCalls_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void toggleSize( );
		Dynamic toggleSize_dyn();

		virtual Void updateSize( );

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats

#endif /* INCLUDED_flixel_system_debug_stats_Stats */ 
