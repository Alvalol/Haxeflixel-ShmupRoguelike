#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#define INCLUDED_openfl__legacy_display_InteractiveObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  InteractiveObject_obj : public ::openfl::_legacy::display::DisplayObject_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObject_obj super;
		typedef InteractiveObject_obj OBJ_;
		InteractiveObject_obj();
		Void __construct(Dynamic handle,::String type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.InteractiveObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InteractiveObject_obj > __new(Dynamic handle,::String type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InteractiveObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("InteractiveObject","\x21","\x86","\xb1","\xc3"); }

		static void __boot();
		static Dynamic lime_display_object_set_mouse_enabled;
		static Dynamic &lime_display_object_set_mouse_enabled_dyn() { return lime_display_object_set_mouse_enabled;}
		static Dynamic lime_display_object_set_needs_soft_keyboard;
		static Dynamic &lime_display_object_set_needs_soft_keyboard_dyn() { return lime_display_object_set_needs_soft_keyboard;}
		static Dynamic lime_display_object_get_needs_soft_keyboard;
		static Dynamic &lime_display_object_get_needs_soft_keyboard_dyn() { return lime_display_object_get_needs_soft_keyboard;}
		static Dynamic lime_display_object_set_moves_for_soft_keyboard;
		static Dynamic &lime_display_object_set_moves_for_soft_keyboard_dyn() { return lime_display_object_set_moves_for_soft_keyboard;}
		static Dynamic lime_display_object_get_moves_for_soft_keyboard;
		static Dynamic &lime_display_object_get_moves_for_soft_keyboard_dyn() { return lime_display_object_get_moves_for_soft_keyboard;}
		static Dynamic lime_display_object_dismiss_soft_keyboard;
		static Dynamic &lime_display_object_dismiss_soft_keyboard_dyn() { return lime_display_object_dismiss_soft_keyboard;}
		static Dynamic lime_display_object_request_soft_keyboard;
		static Dynamic &lime_display_object_request_soft_keyboard_dyn() { return lime_display_object_request_soft_keyboard;}
		bool doubleClickEnabled;
		bool __mouseEnabled;
		virtual bool __dismissSoftKeyboard( );
		Dynamic __dismissSoftKeyboard_dyn();

		virtual bool requestSoftKeyboard( );
		Dynamic requestSoftKeyboard_dyn();

		virtual ::openfl::_legacy::display::InteractiveObject __asInteractiveObject( );

		virtual bool get_mouseEnabled( );
		Dynamic get_mouseEnabled_dyn();

		virtual bool set_mouseEnabled( bool value);
		Dynamic set_mouseEnabled_dyn();

		virtual bool set_moveForSoftKeyboard( bool value);
		Dynamic set_moveForSoftKeyboard_dyn();

		virtual bool get_moveForSoftKeyboard( );
		Dynamic get_moveForSoftKeyboard_dyn();

		virtual bool set_needsSoftKeyboard( bool value);
		Dynamic set_needsSoftKeyboard_dyn();

		virtual bool get_needsSoftKeyboard( );
		Dynamic get_needsSoftKeyboard_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_InteractiveObject */ 
