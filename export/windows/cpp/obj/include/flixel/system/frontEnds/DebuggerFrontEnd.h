#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#define INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,FlxDebuggerLayout)
HX_DECLARE_CLASS3(flixel,_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_system,debug,watch,TrackerProfile)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  DebuggerFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DebuggerFrontEnd_obj OBJ_;
		DebuggerFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.DebuggerFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DebuggerFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DebuggerFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DebuggerFrontEnd","\x13","\xf8","\xb4","\x5e"); }

		int precision;
		Array< int > toggleKeys;
		bool drawDebug;
		::flixel::util::_FlxSignal::FlxSignal0 drawDebugChanged;
		bool visible;
		virtual Void setLayout( ::flixel::_system::debug::FlxDebuggerLayout Layout);
		Dynamic setLayout_dyn();

		virtual Void resetLayout( );
		Dynamic resetLayout_dyn();

		virtual ::flixel::_system::ui::FlxSystemButton addButton( ::flixel::util::FlxHorizontalAlign Alignment,::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  ToggleMode,hx::Null< bool >  UpdateLayout);
		Dynamic addButton_dyn();

		virtual ::flixel::_system::debug::Window track( Dynamic ObjectOrClass,::String WindowTitle);
		Dynamic track_dyn();

		virtual Void addTrackerProfile( ::flixel::_system::debug::watch::TrackerProfile Profile);
		Dynamic addTrackerProfile_dyn();

		virtual Void removeButton( ::flixel::_system::ui::FlxSystemButton Button,hx::Null< bool >  UpdateLayout);
		Dynamic removeButton_dyn();

		virtual bool set_drawDebug( bool Value);
		Dynamic set_drawDebug_dyn();

		virtual bool set_visible( bool Value);
		Dynamic set_visible_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd */ 
