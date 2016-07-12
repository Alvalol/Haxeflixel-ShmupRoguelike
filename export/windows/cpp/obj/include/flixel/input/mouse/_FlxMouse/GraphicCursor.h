#ifndef INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor
#define INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS4(flixel,input,mouse,_FlxMouse,GraphicCursor)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace input{
namespace mouse{
namespace _FlxMouse{


class HXCPP_CLASS_ATTRIBUTES  GraphicCursor_obj : public ::openfl::_legacy::display::BitmapData_obj{
	public:
		typedef ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicCursor_obj OBJ_;
		GraphicCursor_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse._FlxMouse.GraphicCursor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicCursor_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicCursor_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicCursor","\x7e","\x1b","\x8a","\x44"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace input
} // end namespace mouse
} // end namespace _FlxMouse

#endif /* INCLUDED_flixel_input_mouse__FlxMouse_GraphicCursor */ 
