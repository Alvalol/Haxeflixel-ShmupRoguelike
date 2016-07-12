#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#define INCLUDED_flixel_system_debug_DebuggerUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,DebuggerUtil)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace flixel{
namespace _system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  DebuggerUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DebuggerUtil_obj OBJ_;
		DebuggerUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.debug.DebuggerUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DebuggerUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebuggerUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DebuggerUtil","\xe3","\x18","\x20","\x50"); }

		static ::openfl::_legacy::text::TextField createTextField( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< int >  Color,hx::Null< int >  Size);
		static Dynamic createTextField_dyn();

		static ::openfl::_legacy::display::BitmapData fixSize( ::openfl::_legacy::display::BitmapData bitmapData);
		static Dynamic fixSize_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_DebuggerUtil */ 
