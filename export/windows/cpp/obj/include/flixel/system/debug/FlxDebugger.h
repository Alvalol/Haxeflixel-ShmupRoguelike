#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#define INCLUDED_flixel_system_debug_FlxDebugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,debug,FlxDebugger)
HX_DECLARE_CLASS3(flixel,_system,debug,FlxDebuggerLayout)
HX_DECLARE_CLASS3(flixel,_system,debug,VCR)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionList)
HX_DECLARE_CLASS4(flixel,_system,debug,console,Console)
HX_DECLARE_CLASS4(flixel,_system,debug,log,BitmapLog)
HX_DECLARE_CLASS4(flixel,_system,debug,log,Log)
HX_DECLARE_CLASS4(flixel,_system,debug,stats,Stats)
HX_DECLARE_CLASS4(flixel,_system,debug,watch,Watch)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace _system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  FlxDebugger_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef FlxDebugger_obj OBJ_;
		FlxDebugger_obj();
		Void __construct(Float Width,Float Height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.FlxDebugger")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxDebugger_obj > __new(Float Width,Float Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxDebugger_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxDebugger","\x93","\xfe","\x01","\xa8"); }

		static void __boot();
		static int GUTTER;
		static int TOP_HEIGHT;
		::flixel::_system::debug::stats::Stats stats;
		::flixel::_system::debug::log::Log log;
		::flixel::_system::debug::watch::Watch watch;
		::flixel::_system::debug::log::BitmapLog bitmapLog;
		::flixel::_system::debug::VCR vcr;
		::flixel::_system::debug::console::Console console;
		::flixel::_system::debug::completion::CompletionList completionList;
		bool hasMouse;
		::flixel::_system::debug::FlxDebuggerLayout _layout;
		::openfl::_legacy::geom::Point _screen;
		::openfl::_legacy::geom::Rectangle _screenBounds;
		::haxe::ds::EnumValueMap _buttons;
		::openfl::_legacy::display::Sprite _topBar;
		Array< ::Dynamic > _windows;
		bool _usingSystemCursor;
		bool _wasMouseVisible;
		bool _wasUsingSystemCursor;
		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setLayout( ::flixel::_system::debug::FlxDebuggerLayout Layout);
		Dynamic setLayout_dyn();

		virtual Void resetLayout( );
		Dynamic resetLayout_dyn();

		virtual Void onResize( Float Width,Float Height);
		Dynamic onResize_dyn();

		virtual Void updateBounds( );
		Dynamic updateBounds_dyn();

		virtual Float hAlignButtons( Array< ::Dynamic > Sprites,hx::Null< Float >  Padding,hx::Null< bool >  Set,hx::Null< Float >  LeftOffset);
		Dynamic hAlignButtons_dyn();

		virtual Void resetButtonLayout( );
		Dynamic resetButtonLayout_dyn();

		virtual ::flixel::_system::ui::FlxSystemButton addButton( ::flixel::util::FlxHorizontalAlign Position,::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  ToggleMode,hx::Null< bool >  UpdateLayout);
		Dynamic addButton_dyn();

		virtual Void removeButton( ::flixel::_system::ui::FlxSystemButton Button,hx::Null< bool >  UpdateLayout);
		Dynamic removeButton_dyn();

		virtual Void addWindowToggleButton( ::flixel::_system::debug::Window window,::hx::Class icon);
		Dynamic addWindowToggleButton_dyn();

		virtual ::flixel::_system::debug::Window addWindow( ::flixel::_system::debug::Window window);
		Dynamic addWindow_dyn();

		virtual Void removeWindow( ::flixel::_system::debug::Window window);
		Dynamic removeWindow_dyn();

		virtual ::openfl::_legacy::display::DisplayObject addChild( ::openfl::_legacy::display::DisplayObject child);

		virtual Void onMouseOver( Dynamic _);
		Dynamic onMouseOver_dyn();

		virtual Void onMouseOut( Dynamic _);
		Dynamic onMouseOut_dyn();

		virtual Void showCursor( );
		Dynamic showCursor_dyn();

		virtual Void restoreCursor( );
		Dynamic restoreCursor_dyn();

		virtual Void toggleDrawDebug( );
		Dynamic toggleDrawDebug_dyn();

		virtual Void openHomepage( );
		Dynamic openHomepage_dyn();

		virtual Void openGitHub( );
		Dynamic openGitHub_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_FlxDebugger */ 
