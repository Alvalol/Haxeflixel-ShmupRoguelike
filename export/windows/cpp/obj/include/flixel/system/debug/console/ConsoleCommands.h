#ifndef INCLUDED_flixel_system_debug_console_ConsoleCommands
#define INCLUDED_flixel_system_debug_console_ConsoleCommands

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_system,debug,console,ConsoleCommands)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{
namespace _system{
namespace debug{
namespace console{


class HXCPP_CLASS_ATTRIBUTES  ConsoleCommands_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConsoleCommands_obj OBJ_;
		ConsoleCommands_obj();
		Void __construct(::flixel::_system::debug::console::Console console);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.ConsoleCommands")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ConsoleCommands_obj > __new(::flixel::_system::debug::console::Console console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleCommands_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ConsoleCommands","\x1f","\x0f","\xd7","\xb9"); }

		::flixel::_system::debug::console::Console _console;
		bool _watchingMouse;
		virtual ::String help( ::String Alias);
		Dynamic help_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void clearHistory( );
		Dynamic clearHistory_dyn();

		virtual Void resetState( );
		Dynamic resetState_dyn();

		virtual Void switchState( ::flixel::FlxState State);
		Dynamic switchState_dyn();

		virtual Void resetGame( );
		Dynamic resetGame_dyn();

		virtual Void create( ::hx::Class ObjClass,hx::Null< bool >  MousePos,cpp::ArrayBase Params);
		Dynamic create_dyn();

		virtual ::String fields( Dynamic Object);
		Dynamic fields_dyn();

		virtual Void listObjects( );
		Dynamic listObjects_dyn();

		virtual Void listFunctions( );
		Dynamic listFunctions_dyn();

		virtual Void watchMouse( );
		Dynamic watchMouse_dyn();

		virtual Void track( Dynamic Object);
		Dynamic track_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_ConsoleCommands */ 
