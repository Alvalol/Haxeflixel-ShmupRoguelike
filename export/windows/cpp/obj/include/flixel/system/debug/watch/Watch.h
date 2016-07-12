#ifndef INCLUDED_flixel_system_debug_watch_Watch
#define INCLUDED_flixel_system_debug_watch_Watch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,watch,Watch)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace _system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES  Watch_obj : public ::flixel::_system::debug::Window_obj{
	public:
		typedef ::flixel::_system::debug::Window_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();
		Void __construct(::String Title,::openfl::_legacy::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::_legacy::geom::Rectangle Bounds,Dynamic Closable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.Watch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Watch_obj > __new(::String Title,::openfl::_legacy::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::_legacy::geom::Rectangle Bounds,Dynamic Closable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Watch_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Watch","\x2f","\x86","\x52","\x58"); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_Watch */ 
