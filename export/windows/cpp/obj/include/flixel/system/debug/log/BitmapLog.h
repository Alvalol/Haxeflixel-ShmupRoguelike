#ifndef INCLUDED_flixel_system_debug_log_BitmapLog
#define INCLUDED_flixel_system_debug_log_BitmapLog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,log,BitmapLog)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace flixel{
namespace _system{
namespace debug{
namespace log{


class HXCPP_CLASS_ATTRIBUTES  BitmapLog_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef BitmapLog_obj OBJ_;
		BitmapLog_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.log.BitmapLog")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapLog_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapLog_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapLog","\xb5","\x3b","\xae","\x68"); }

		Float zoom;
		::openfl::_legacy::display::Bitmap _canvasBitmap;
		cpp::ArrayBase _entries;
		int _curIndex;
		::flixel::math::FlxPoint _point;
		::flixel::math::FlxPoint _lastMousePos;
		::flixel::math::FlxPoint _curMouseOffset;
		::openfl::_legacy::geom::Matrix _matrix;
		::flixel::_system::ui::FlxSystemButton _buttonLeft;
		::flixel::_system::ui::FlxSystemButton _buttonText;
		::flixel::_system::ui::FlxSystemButton _buttonRight;
		::openfl::_legacy::text::TextField _counterText;
		::openfl::_legacy::text::TextField _dimensionsText;
		::openfl::_legacy::display::Sprite _ui;
		bool _middleMouseDown;
		::openfl::_legacy::display::Bitmap _footer;
		::openfl::_legacy::text::TextField _footerText;
		virtual Void createHeaderUI( );
		Dynamic createHeaderUI_dyn();

		virtual Void createFooterUI( );
		Dynamic createFooterUI_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual Void updateSize( );

		virtual Void resize( Float Width,Float Height);

		virtual Void resizeTexts( );
		Dynamic resizeTexts_dyn();

		virtual Void next( );
		Dynamic next_dyn();

		virtual Void previous( );
		Dynamic previous_dyn();

		virtual Void resetSettings( );
		Dynamic resetSettings_dyn();

		virtual bool add( ::openfl::_legacy::display::BitmapData bmp,::String name);
		Dynamic add_dyn();

		virtual Void clearAt( hx::Null< int >  Index);
		Dynamic clearAt_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool refreshCanvas( Dynamic Index);
		Dynamic refreshCanvas_dyn();

		virtual Void refreshTexts( );
		Dynamic refreshTexts_dyn();

		virtual Void drawBoundingBox( ::openfl::_legacy::display::BitmapData bitmap);
		Dynamic drawBoundingBox_dyn();

		virtual Void onMouseWheel( ::openfl::_legacy::events::MouseEvent e);
		Dynamic onMouseWheel_dyn();

		virtual Void onMiddleDown( ::openfl::_legacy::events::MouseEvent e);
		Dynamic onMiddleDown_dyn();

		virtual Void onMiddleUp( ::openfl::_legacy::events::MouseEvent e);
		Dynamic onMiddleUp_dyn();

		virtual Float set_zoom( Float Value);
		Dynamic set_zoom_dyn();

		virtual ::openfl::_legacy::display::BitmapData get__canvas( );
		Dynamic get__canvas_dyn();

		virtual Dynamic get__curEntry( );
		Dynamic get__curEntry_dyn();

		virtual ::openfl::_legacy::display::BitmapData get__curBitmap( );
		Dynamic get__curBitmap_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log

#endif /* INCLUDED_flixel_system_debug_log_BitmapLog */ 
