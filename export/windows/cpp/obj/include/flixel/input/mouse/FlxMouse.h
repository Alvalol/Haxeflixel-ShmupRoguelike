#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#define INCLUDED_flixel_input_mouse_FlxMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseButton)
HX_DECLARE_CLASS3(flixel,_system,replay,MouseRecord)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES  FlxMouse_obj : public ::flixel::input::FlxPointer_obj{
	public:
		typedef ::flixel::input::FlxPointer_obj super;
		typedef FlxMouse_obj OBJ_;
		FlxMouse_obj();
		Void __construct(::openfl::_legacy::display::Sprite CursorContainer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxMouse_obj > __new(::openfl::_legacy::display::Sprite CursorContainer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouse_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		operator ::flixel::input::IFlxInputManager_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxMouse","\x73","\x20","\x3f","\xc9"); }

		int wheel;
		::openfl::_legacy::display::Sprite cursorContainer;
		bool visible;
		bool useSystemCursor;
		::flixel::input::mouse::FlxMouseButton _leftButton;
		::flixel::input::mouse::FlxMouseButton _middleButton;
		::flixel::input::mouse::FlxMouseButton _rightButton;
		::openfl::_legacy::display::Bitmap _cursor;
		::openfl::_legacy::display::BitmapData _cursorBitmapData;
		bool _wheelUsed;
		bool _visibleWhenFocusLost;
		int _lastX;
		int _lastY;
		int _lastWheel;
		::openfl::_legacy::display::Stage _stage;
		virtual Void load( Dynamic Graphic,hx::Null< Float >  Scale,hx::Null< int >  XOffset,hx::Null< int >  YOffset);
		Dynamic load_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onGameStart( );
		Dynamic onGameStart_dyn();

		virtual Void onMouseWheel( ::openfl::_legacy::events::MouseEvent FlashEvent);
		Dynamic onMouseWheel_dyn();

		virtual Void onMouseLeave( Dynamic _);
		Dynamic onMouseLeave_dyn();

		virtual bool get_pressed( );
		Dynamic get_pressed_dyn();

		virtual bool get_justPressed( );
		Dynamic get_justPressed_dyn();

		virtual bool get_justReleased( );
		Dynamic get_justReleased_dyn();

		virtual bool get_pressedRight( );
		Dynamic get_pressedRight_dyn();

		virtual bool get_justPressedRight( );
		Dynamic get_justPressedRight_dyn();

		virtual bool get_justReleasedRight( );
		Dynamic get_justReleasedRight_dyn();

		virtual bool get_pressedMiddle( );
		Dynamic get_pressedMiddle_dyn();

		virtual bool get_justPressedMiddle( );
		Dynamic get_justPressedMiddle_dyn();

		virtual bool get_justReleasedMiddle( );
		Dynamic get_justReleasedMiddle_dyn();

		virtual Void showSystemCursor( );
		Dynamic showSystemCursor_dyn();

		virtual Void hideSystemCursor( );
		Dynamic hideSystemCursor_dyn();

		virtual bool set_useSystemCursor( bool Value);
		Dynamic set_useSystemCursor_dyn();

		virtual Void showCursor( );
		Dynamic showCursor_dyn();

		virtual Void hideCursor( );
		Dynamic hideCursor_dyn();

		virtual bool set_visible( bool Value);
		Dynamic set_visible_dyn();

		virtual ::flixel::_system::replay::MouseRecord record( );
		Dynamic record_dyn();

		virtual Void playback( ::flixel::_system::replay::MouseRecord Record);
		Dynamic playback_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouse */ 
