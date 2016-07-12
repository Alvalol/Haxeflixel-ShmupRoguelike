#ifndef INCLUDED_openfl__legacy_display_ManagedStage
#define INCLUDED_openfl__legacy_display_ManagedStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,ManagedStage)
HX_DECLARE_CLASS3(openfl,_legacy,display,Stage)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace openfl{
namespace _legacy{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  ManagedStage_obj : public ::openfl::_legacy::display::Stage_obj{
	public:
		typedef ::openfl::_legacy::display::Stage_obj super;
		typedef ManagedStage_obj OBJ_;
		ManagedStage_obj();
		Void __construct(int width,int height,hx::Null< int >  __o_flags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.display.ManagedStage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ManagedStage_obj > __new(int width,int height,hx::Null< int >  __o_flags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ManagedStage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ManagedStage","\xff","\x9b","\x7f","\xa6"); }

		static void __boot();
		static int efLeftDown;
		static int efShiftDown;
		static int efCtrlDown;
		static int efAltDown;
		static int efCommandDown;
		static int efMiddleDown;
		static int efRightDown;
		static int efLocationRight;
		static int efPrimaryTouch;
		static int etUnknown;
		static int etKeyDown;
		static int etChar;
		static int etKeyUp;
		static int etMouseMove;
		static int etMouseDown;
		static int etMouseClick;
		static int etMouseUp;
		static int etResize;
		static int etPoll;
		static int etQuit;
		static int etFocus;
		static int etShouldRotate;
		static int etDestroyHandler;
		static int etRedraw;
		static int etTouchBegin;
		static int etTouchMove;
		static int etTouchEnd;
		static int etTouchTap;
		static int etChange;
		static int etActivate;
		static int etDeactivate;
		static int etGotInputFocus;
		static int etLostInputFocus;
		static int etJoyAxisMove;
		static int etJoyBallMove;
		static int etJoyHatMove;
		static int etJoyButtonDown;
		static int etJoyButtonUp;
		static int etJoyDeviceAdded;
		static int etJoyDeviceRemoved;
		static int etSysWM;
		static int etRenderContextLost;
		static int etRenderContextRestored;
		static Dynamic lime_managed_stage_create;
		static Dynamic &lime_managed_stage_create_dyn() { return lime_managed_stage_create;}
		static Dynamic lime_managed_stage_pump_event;
		static Dynamic &lime_managed_stage_pump_event_dyn() { return lime_managed_stage_pump_event;}
		Dynamic beginRender;
		inline Dynamic &beginRender_dyn() {return beginRender; }

		Dynamic endRender;
		inline Dynamic &endRender_dyn() {return endRender; }

		virtual Void pumpEvent( Dynamic event);
		Dynamic pumpEvent_dyn();

		virtual Void resize( int width,int height);

		virtual Void sendQuit( );
		Dynamic sendQuit_dyn();

		Dynamic setNextWake;
		inline Dynamic &setNextWake_dyn() {return setNextWake; }

		virtual Float __doProcessStageEvent( Dynamic event);

		virtual Void __render( bool sendEnterFrame);

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace display

#endif /* INCLUDED_openfl__legacy_display_ManagedStage */ 
