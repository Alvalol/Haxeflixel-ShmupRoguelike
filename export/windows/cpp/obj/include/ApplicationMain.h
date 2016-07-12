#ifndef INCLUDED_ApplicationMain
#define INCLUDED_ApplicationMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ApplicationMain)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  ApplicationMain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ApplicationMain_obj OBJ_;
		ApplicationMain_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ApplicationMain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ApplicationMain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationMain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a"); }

		static ::openfl::_legacy::display::Sprite barA;
		static ::openfl::_legacy::display::Sprite barB;
		static ::openfl::_legacy::display::Sprite container;
		static int forceHeight;
		static int forceWidth;
		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_ApplicationMain */ 
