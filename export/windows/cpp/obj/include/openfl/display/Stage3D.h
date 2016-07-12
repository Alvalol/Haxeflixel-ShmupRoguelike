#ifndef INCLUDED_openfl_display_Stage3D
#define INCLUDED_openfl_display_Stage3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage3D_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef Stage3D_obj OBJ_;
		Stage3D_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.Stage3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stage3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stage3D","\xcf","\x6a","\x1b","\xfb"); }

		::openfl::display3D::Context3D context3D;
		bool visible;
		Float x;
		Float y;
		virtual Void requestContext3D( ::String context3DRenderMode);
		Dynamic requestContext3D_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage3D */ 
