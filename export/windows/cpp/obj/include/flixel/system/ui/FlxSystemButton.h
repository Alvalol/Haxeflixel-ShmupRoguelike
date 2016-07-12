#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#define INCLUDED_flixel_system_ui_FlxSystemButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
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
namespace flixel{
namespace _system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxSystemButton_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef FlxSystemButton_obj OBJ_;
		FlxSystemButton_obj();
		Void __construct(::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxSystemButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSystemButton_obj > __new(::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSystemButton_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxSystemButton","\xb3","\xc5","\x2f","\x15"); }

		Dynamic upHandler;
		Dynamic &upHandler_dyn() { return upHandler;}
		bool enabled;
		bool toggleMode;
		bool toggled;
		::openfl::_legacy::display::Bitmap _icon;
		bool _mouseDown;
		virtual Void changeIcon( ::openfl::_legacy::display::BitmapData Icon);
		Dynamic changeIcon_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void onMouseUp( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseDown( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseDown_dyn();

		virtual Void onMouseOver( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseOver_dyn();

		virtual Void onMouseOut( ::openfl::_legacy::events::MouseEvent E);
		Dynamic onMouseOut_dyn();

		virtual bool set_toggled( bool Value);
		Dynamic set_toggled_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxSystemButton */ 
