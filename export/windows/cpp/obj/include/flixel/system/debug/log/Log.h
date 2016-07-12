#ifndef INCLUDED_flixel_system_debug_log_Log
#define INCLUDED_flixel_system_debug_log_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,log,Log)
HX_DECLARE_CLASS4(flixel,_system,debug,log,LogStyle)
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
namespace log{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.log.Log")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Log","\x64","\x0c","\x3a","\x00"); }

		static void __boot();
		static int MAX_LOG_LINES;
		static ::String LINE_BREAK;
		::openfl::_legacy::text::TextField _text;
		Array< ::String > _lines;
		virtual Void destroy( );

		virtual bool add( cpp::ArrayBase Data,::flixel::_system::debug::log::LogStyle Style,hx::Null< bool >  FireOnce);
		Dynamic add_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void updateSize( );

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log

#endif /* INCLUDED_flixel_system_debug_log_Log */ 
