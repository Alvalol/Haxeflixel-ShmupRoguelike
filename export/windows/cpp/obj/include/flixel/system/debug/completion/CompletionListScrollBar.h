#ifndef INCLUDED_flixel_system_debug_completion_CompletionListScrollBar
#define INCLUDED_flixel_system_debug_completion_CompletionListScrollBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS4(flixel,_system,debug,completion,CompletionListScrollBar)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
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
namespace completion{


class HXCPP_CLASS_ATTRIBUTES  CompletionListScrollBar_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef CompletionListScrollBar_obj OBJ_;
		CompletionListScrollBar_obj();
		Void __construct(int x,int y,int width,int height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.completion.CompletionListScrollBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CompletionListScrollBar_obj > __new(int x,int y,int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CompletionListScrollBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CompletionListScrollBar","\xac","\x4a","\x22","\x5b"); }

		static void __boot();
		static int BG_COLOR;
		static int HANDLE_COLOR;
		::openfl::_legacy::display::Bitmap handle;
		virtual Void updateHandle( int lower,int items,int entries);
		Dynamic updateHandle_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion

#endif /* INCLUDED_flixel_system_debug_completion_CompletionListScrollBar */ 
