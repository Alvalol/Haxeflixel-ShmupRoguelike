#ifndef INCLUDED_flixel_system_debug__VCR_GraphicStop
#define INCLUDED_flixel_system_debug__VCR_GraphicStop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS4(flixel,_system,debug,_VCR,GraphicStop)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace _system{
namespace debug{
namespace _VCR{


class HXCPP_CLASS_ATTRIBUTES  GraphicStop_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicStop_obj OBJ_;
		GraphicStop_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug._VCR.GraphicStop")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicStop_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicStop_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicStop","\xaa","\x82","\x75","\x6a"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR

#endif /* INCLUDED_flixel_system_debug__VCR_GraphicStop */ 
