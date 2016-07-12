#ifndef INCLUDED_openfl__legacy_ui_Mouse
#define INCLUDED_openfl__legacy_ui_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_legacy,ui,Mouse)
namespace openfl{
namespace _legacy{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Mouse_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="openfl._legacy.ui.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static Void hide( );
		static Dynamic hide_dyn();

		static Void show( );
		static Dynamic show_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace ui

#endif /* INCLUDED_openfl__legacy_ui_Mouse */ 
