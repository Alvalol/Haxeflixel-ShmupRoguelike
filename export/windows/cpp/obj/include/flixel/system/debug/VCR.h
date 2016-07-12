#ifndef INCLUDED_flixel_system_debug_VCR
#define INCLUDED_flixel_system_debug_VCR

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,debug,FlxDebugger)
HX_DECLARE_CLASS3(flixel,_system,debug,VCR)
HX_DECLARE_CLASS3(flixel,_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace flixel{
namespace _system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  VCR_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VCR_obj OBJ_;
		VCR_obj();
		Void __construct(::flixel::_system::debug::FlxDebugger Debugger);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.VCR")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VCR_obj > __new(::flixel::_system::debug::FlxDebugger Debugger);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VCR_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VCR","\x85","\x7c","\x41","\x00"); }

		::openfl::_legacy::text::TextField runtimeDisplay;
		Float runtime;
		::flixel::_system::ui::FlxSystemButton playbackToggleBtn;
		::flixel::_system::ui::FlxSystemButton stepBtn;
		::flixel::_system::ui::FlxSystemButton restartBtn;
		::flixel::_system::ui::FlxSystemButton recordBtn;
		::flixel::_system::ui::FlxSystemButton openBtn;
		virtual Void onPause( );
		Dynamic onPause_dyn();

		virtual Void onResume( );
		Dynamic onResume_dyn();

		virtual Void onStep( );
		Dynamic onStep_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_VCR */ 
