#ifndef INCLUDED_openfl__legacy_display_Sprite
#define INCLUDED_openfl__legacy_display_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Sprite_obj : public ::openfl::_legacy::display::DisplayObjectContainer_obj{
	public:
		typedef ::openfl::_legacy::display::DisplayObjectContainer_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.Sprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Sprite","\x25","\x50","\x2a","\xf8"); }

		bool buttonMode;
		bool useHandCursor;
		virtual Void startDrag( hx::Null< bool >  lockCenter,::openfl::_legacy::geom::Rectangle bounds);
		Dynamic startDrag_dyn();

		virtual Void stopDrag( );
		Dynamic stopDrag_dyn();

		virtual ::String __getType( );
		Dynamic __getType_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_Sprite */ 
