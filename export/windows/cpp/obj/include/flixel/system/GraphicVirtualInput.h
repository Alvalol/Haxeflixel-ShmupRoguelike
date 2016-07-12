#ifndef INCLUDED_flixel_system_GraphicVirtualInput
#define INCLUDED_flixel_system_GraphicVirtualInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS2(flixel,_system,GraphicVirtualInput)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  GraphicVirtualInput_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicVirtualInput_obj OBJ_;
		GraphicVirtualInput_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.GraphicVirtualInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicVirtualInput_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicVirtualInput_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicVirtualInput","\xa7","\x48","\xf2","\x40"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_GraphicVirtualInput */ 
