#ifndef INCLUDED_openfl__legacy_display_Shape
#define INCLUDED_openfl__legacy_display_Shape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Shape)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Shape_obj : public ::openfl::_legacy::display::DisplayObject_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObject_obj super;
		typedef Shape_obj OBJ_;
		Shape_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.Shape")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shape_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shape_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Shape","\x01","\x53","\x4a","\x0f"); }

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_Shape */ 
