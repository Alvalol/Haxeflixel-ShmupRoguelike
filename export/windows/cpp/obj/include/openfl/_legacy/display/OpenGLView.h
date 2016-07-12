#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#define INCLUDED_openfl__legacy_display_OpenGLView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DirectRenderer)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,OpenGLView)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  OpenGLView_obj : public ::openfl::_legacy::display::DirectRenderer_obj{
	public:
		typedef ::openfl::_legacy::display::DirectRenderer_obj super;
		typedef OpenGLView_obj OBJ_;
		OpenGLView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.OpenGLView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OpenGLView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OpenGLView_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OpenGLView","\x94","\x0e","\xac","\x6e"); }

		static void __boot();
		static ::String CONTEXT_LOST;
		static ::String CONTEXT_RESTORED;
		static bool isSupported;
		static bool get_isSupported( );
		static Dynamic get_isSupported_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_OpenGLView */ 
