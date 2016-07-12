#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton
#define INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS5(flixel,_system,debug,stats,_Stats,GraphicMaximizeButton)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace _system{
namespace debug{
namespace stats{
namespace _Stats{


class HXCPP_CLASS_ATTRIBUTES  GraphicMaximizeButton_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicMaximizeButton_obj OBJ_;
		GraphicMaximizeButton_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats._Stats.GraphicMaximizeButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicMaximizeButton_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicMaximizeButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicMaximizeButton","\x86","\x10","\x5c","\x9e"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
} // end namespace _Stats

#endif /* INCLUDED_flixel_system_debug_stats__Stats_GraphicMaximizeButton */ 
