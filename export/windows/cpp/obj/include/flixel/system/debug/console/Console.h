#ifndef INCLUDED_flixel_system_debug_console_Console
#define INCLUDED_flixel_system_debug_console_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_system,debug,console,ConsoleHistory)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
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
namespace console{


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct(::flixel::_system::debug::completion::CompletionList completionList);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.console.Console")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Console_obj > __new(::flixel::_system::debug::completion::CompletionList completionList);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Console","\x37","\x13","\x27","\xe6"); }

		static void __boot();
		static ::String DEFAULT_TEXT;
		::haxe::ds::StringMap registeredObjects;
		::haxe::ds::StringMap registeredFunctions;
		::haxe::ds::StringMap registeredHelp;
		Array< ::Dynamic > objectStack;
		::openfl::_legacy::text::TextField input;
		bool inputMouseDown;
		bool stageMouseDown;
		::flixel::_system::debug::console::ConsoleHistory history;
		::flixel::_system::debug::completion::CompletionList completionList;
		virtual Void createInputTextField( );
		Dynamic createInputTextField_dyn();

		virtual Void registerEventListeners( );
		Dynamic registerEventListeners_dyn();

		virtual Void update( );

		virtual Void onFocus( Dynamic _);
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( Dynamic _);
		Dynamic onFocusLost_dyn();

		virtual Void registerFunction( ::String functionAlias,Dynamic func,::String helpText);
		Dynamic registerFunction_dyn();

		virtual Void registerObject( ::String objectAlias,Dynamic anyObject);
		Dynamic registerObject_dyn();

		virtual Void registerClass( ::hx::Class cl);
		Dynamic registerClass_dyn();

		virtual Void destroy( );

		virtual Void updateSize( );

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace console

#endif /* INCLUDED_flixel_system_debug_console_Console */ 
