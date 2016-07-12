#include <hxcpp.h>

#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageAlign
#include <openfl/_legacy/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageDisplayState
#include <openfl/_legacy/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageQuality
#include <openfl/_legacy/display/StageQuality.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TouchInfo
#include <openfl/_legacy/display/TouchInfo.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#include <openfl/_legacy/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_SystemEvent
#include <openfl/_legacy/events/SystemEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_ScreenMode
#include <openfl/_legacy/system/ScreenMode.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Stage_obj::__construct(Dynamic handle,int width,int height)
{
HX_STACK_FRAME("openfl._legacy.display.Stage","new",0x8f657500,"openfl._legacy.display.Stage.new","openfl/_legacy/display/Stage.hx",119,0x8b30a073)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(125)
	Dynamic tmp = handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	super::__construct(tmp,HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17"));
	HX_STACK_LINE(127)
	this->__mouseOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(128)
	this->__focusOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(129)
	this->active = true;
	HX_STACK_LINE(130)
	this->allowsFullScreen = true;
	HX_STACK_LINE(131)
	this->pauseWhenDeactivated = true;
	HX_STACK_LINE(137)
	this->renderRequest = null();
	HX_STACK_LINE(144)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	Dynamic tmp2 = this->__processStageEvent_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(144)
	::openfl::_legacy::display::Stage_obj::lime_set_stage_handler(tmp1,tmp2,tmp3,tmp4);
	HX_STACK_LINE(145)
	this->__invalid = false;
	HX_STACK_LINE(146)
	this->__lastRender = (int)0;
	HX_STACK_LINE(147)
	this->__lastDown = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(148)
	this->__lastClickTime = (int)0;
	HX_STACK_LINE(149)
	this->__nextRender = (int)0;
	HX_STACK_LINE(150)
	this->set_frameRate((int)100);
	HX_STACK_LINE(151)
	::haxe::ds::IntMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		::haxe::ds::IntMap tmp6 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		::haxe::ds::IntMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(151)
	this->__touchInfo = tmp5;
	HX_STACK_LINE(152)
	::haxe::ds::IntMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(152)
	{
		HX_STACK_LINE(152)
		::haxe::ds::IntMap tmp7 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(152)
		::haxe::ds::IntMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(152)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(152)
	this->__joyAxisData = tmp6;
	HX_STACK_LINE(154)
	Array< ::Dynamic > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(154)
		this1 = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(154)
		this1->__SetSizeExact(null());
		HX_STACK_LINE(154)
		tmp7 = this1;
	}
	HX_STACK_LINE(154)
	this->stage3Ds = tmp7;
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		::openfl::display::Stage3D tmp8 = ::openfl::display::Stage3D_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		::openfl::display::Stage3D x = tmp8;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(155)
		Array< ::Dynamic > tmp9 = this->stage3Ds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		::openfl::display::Stage3D tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		tmp9->push(tmp10);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(Dynamic handle,int width,int height)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(handle,width,height);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Stage_obj::invalidate( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","invalidate",0x7cdc48db,"openfl._legacy.display.Stage.invalidate","openfl/_legacy/display/Stage.hx",179,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		this->__invalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

Void Stage_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","resize",0x4aca5954,"openfl._legacy.display.Stage.resize","openfl/_legacy/display/Stage.hx",184,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(186)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		::openfl::_legacy::display::Stage_obj::lime_stage_resize_window(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,resize,(void))

Void Stage_obj::setResolution( int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","setResolution",0x84cb200e,"openfl._legacy.display.Stage.setResolution","openfl/_legacy/display/Stage.hx",191,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(192)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Stage_obj::lime_stage_set_resolution(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,setResolution,(void))

Void Stage_obj::setScreenMode( ::openfl::_legacy::_system::ScreenMode mode){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","setScreenMode",0xd8194bd1,"openfl._legacy.display.Stage.setScreenMode","openfl/_legacy/display/Stage.hx",196,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(197)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		int tmp1 = mode->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		int tmp2 = mode->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		int tmp3 = mode->__Field(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		::openfl::_legacy::display::Stage_obj::lime_stage_set_screenmode(tmp,tmp1,tmp2,tmp3,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setScreenMode,(void))

Void Stage_obj::setFullscreen( bool full){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","setFullscreen",0x1136251d,"openfl._legacy.display.Stage.setFullscreen","openfl/_legacy/display/Stage.hx",201,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(full,"full")
		HX_STACK_LINE(202)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		bool tmp1 = full;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		::openfl::_legacy::display::Stage_obj::lime_stage_set_fullscreen(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setFullscreen,(void))

Void Stage_obj::showCursor( bool show){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","showCursor",0x9e0f6313,"openfl._legacy.display.Stage.showCursor","openfl/_legacy/display/Stage.hx",221,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(show,"show")
		HX_STACK_LINE(223)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		bool tmp1 = show;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		::openfl::_legacy::display::Stage_obj::lime_stage_show_cursor(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,showCursor,(void))

Void Stage_obj::__checkFocusInOuts( Dynamic event,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__checkFocusInOuts",0x5e1ac73a,"openfl._legacy.display.Stage.__checkFocusInOuts","openfl/_legacy/display/Stage.hx",228,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(230)
		int newLength = stack->length;		HX_STACK_VAR(newLength,"newLength");
		HX_STACK_LINE(231)
		bool tmp = (newLength > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		::openfl::_legacy::display::InteractiveObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp)){
			HX_STACK_LINE(231)
			int tmp2 = (newLength - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			tmp1 = stack->__get(tmp2).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(231)
			tmp1 = null();
		}
		HX_STACK_LINE(231)
		::openfl::_legacy::display::InteractiveObject newObject = tmp1;		HX_STACK_VAR(newObject,"newObject");
		HX_STACK_LINE(232)
		int tmp2 = this->__focusOverObjects->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		int oldLength = tmp2;		HX_STACK_VAR(oldLength,"oldLength");
		HX_STACK_LINE(233)
		bool tmp3 = (oldLength > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		::openfl::_legacy::display::InteractiveObject tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		if ((tmp3)){
			HX_STACK_LINE(233)
			int tmp5 = (oldLength - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			tmp4 = this->__focusOverObjects->__get(tmp5).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(233)
			tmp4 = null();
		}
		HX_STACK_LINE(233)
		::openfl::_legacy::display::InteractiveObject oldObject = tmp4;		HX_STACK_VAR(oldObject,"oldObject");
		HX_STACK_LINE(235)
		bool tmp5 = (newObject != oldObject);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		if ((tmp5)){
			HX_STACK_LINE(237)
			bool tmp6 = (oldObject != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(237)
			if ((tmp6)){
				HX_STACK_LINE(239)
				::openfl::_legacy::display::InteractiveObject tmp7 = newObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(239)
				bool tmp8 = (event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(239)
				::openfl::events::FocusEvent tmp9 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),true,false,tmp7,tmp8,event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(239)
				::openfl::events::FocusEvent focusOut = tmp9;		HX_STACK_VAR(focusOut,"focusOut");
				HX_STACK_LINE(240)
				::openfl::_legacy::display::InteractiveObject tmp10 = oldObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(240)
				focusOut->set_target(tmp10);
				HX_STACK_LINE(241)
				::openfl::events::FocusEvent tmp11 = focusOut;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(241)
				oldObject->__fireEvent(tmp11);
			}
			HX_STACK_LINE(245)
			bool tmp7 = (newObject != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			if ((tmp7)){
				HX_STACK_LINE(247)
				::openfl::_legacy::display::InteractiveObject tmp8 = oldObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(247)
				bool tmp9 = (event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				::openfl::events::FocusEvent tmp10 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),true,false,tmp8,tmp9,event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				::openfl::events::FocusEvent focusIn = tmp10;		HX_STACK_VAR(focusIn,"focusIn");
				HX_STACK_LINE(248)
				::openfl::_legacy::display::InteractiveObject tmp11 = newObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				focusIn->set_target(tmp11);
				HX_STACK_LINE(249)
				::openfl::events::FocusEvent tmp12 = focusIn;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(249)
				newObject->__fireEvent(tmp12);
			}
			HX_STACK_LINE(253)
			this->__focusOverObjects = stack;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__checkFocusInOuts,(void))

bool Stage_obj::__checkInOuts( ::openfl::_legacy::events::MouseEvent event,Array< ::Dynamic > stack,::openfl::_legacy::display::TouchInfo touchInfo){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__checkInOuts",0x26b17b12,"openfl._legacy.display.Stage.__checkInOuts","openfl/_legacy/display/Stage.hx",260,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(touchInfo,"touchInfo")
	HX_STACK_LINE(262)
	bool tmp = (touchInfo == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	Array< ::Dynamic > prev;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(262)
	if ((tmp)){
		HX_STACK_LINE(262)
		prev = this->__mouseOverObjects;
	}
	else{
		HX_STACK_LINE(262)
		prev = touchInfo->touchOverObjects;
	}
	HX_STACK_LINE(263)
	bool tmp1 = (touchInfo == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	Array< ::String > events;		HX_STACK_VAR(events,"events");
	HX_STACK_LINE(263)
	if ((tmp1)){
		HX_STACK_LINE(263)
		events = ::openfl::_legacy::display::Stage_obj::__mouseChanges;
	}
	else{
		HX_STACK_LINE(263)
		events = ::openfl::_legacy::display::Stage_obj::__touchChanges;
	}
	HX_STACK_LINE(265)
	int newLength = stack->length;		HX_STACK_VAR(newLength,"newLength");
	HX_STACK_LINE(266)
	bool tmp2 = (newLength > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	::openfl::_legacy::display::InteractiveObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	if ((tmp2)){
		HX_STACK_LINE(266)
		int tmp4 = (newLength - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		tmp3 = stack->__get(tmp4).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
	}
	else{
		HX_STACK_LINE(266)
		tmp3 = null();
	}
	HX_STACK_LINE(266)
	::openfl::_legacy::display::InteractiveObject newObject = tmp3;		HX_STACK_VAR(newObject,"newObject");
	HX_STACK_LINE(267)
	int oldLength = prev->length;		HX_STACK_VAR(oldLength,"oldLength");
	HX_STACK_LINE(268)
	bool tmp4 = (oldLength > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(268)
	::openfl::_legacy::display::InteractiveObject tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(268)
	if ((tmp4)){
		HX_STACK_LINE(268)
		int tmp6 = (oldLength - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		tmp5 = prev->__get(tmp6).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
	}
	else{
		HX_STACK_LINE(268)
		tmp5 = null();
	}
	HX_STACK_LINE(268)
	::openfl::_legacy::display::InteractiveObject oldObject = tmp5;		HX_STACK_VAR(oldObject,"oldObject");
	HX_STACK_LINE(270)
	bool tmp6 = (newObject != oldObject);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(270)
	if ((tmp6)){
		HX_STACK_LINE(272)
		bool tmp7 = (oldObject != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(272)
		if ((tmp7)){
			HX_STACK_LINE(274)
			::String tmp8 = events->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			::openfl::_legacy::display::InteractiveObject tmp9 = newObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(274)
			::openfl::_legacy::display::InteractiveObject tmp10 = oldObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(274)
			::openfl::_legacy::events::MouseEvent tmp11 = event->__createSimilar(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(274)
			oldObject->__fireEvent(tmp11);
		}
		HX_STACK_LINE(278)
		bool tmp8 = (newObject != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		if ((tmp8)){
			HX_STACK_LINE(280)
			::String tmp9 = events->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			::openfl::_legacy::display::InteractiveObject tmp10 = newObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(280)
			::openfl::_legacy::display::InteractiveObject tmp11 = newObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(280)
			::openfl::_legacy::events::MouseEvent tmp12 = event->__createSimilar(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(280)
			newObject->__fireEvent(tmp12);
		}
		HX_STACK_LINE(284)
		int common = (int)0;		HX_STACK_VAR(common,"common");
		HX_STACK_LINE(285)
		while((true)){
			HX_STACK_LINE(285)
			bool tmp9 = (common < newLength);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(285)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(285)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(285)
			if ((tmp10)){
				HX_STACK_LINE(285)
				tmp11 = (common < oldLength);
			}
			else{
				HX_STACK_LINE(285)
				tmp11 = false;
			}
			HX_STACK_LINE(285)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(285)
			if ((tmp11)){
				HX_STACK_LINE(285)
				::openfl::_legacy::display::InteractiveObject tmp13 = stack->__get(common).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(285)
				::openfl::_legacy::display::InteractiveObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(285)
				::openfl::_legacy::display::InteractiveObject tmp15 = prev->__get(common).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				::openfl::_legacy::display::InteractiveObject tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(285)
				tmp12 = (tmp14 == tmp16);
			}
			else{
				HX_STACK_LINE(285)
				tmp12 = false;
			}
			HX_STACK_LINE(285)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(285)
			if ((tmp13)){
				HX_STACK_LINE(285)
				break;
			}
			HX_STACK_LINE(287)
			(common)++;
		}
		HX_STACK_LINE(291)
		::String tmp9 = events->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		::openfl::_legacy::display::InteractiveObject tmp10 = newObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(291)
		::openfl::_legacy::display::InteractiveObject tmp11 = oldObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(291)
		::openfl::_legacy::events::MouseEvent tmp12 = event->__createSimilar(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(291)
		::openfl::_legacy::events::MouseEvent rollOut = tmp12;		HX_STACK_VAR(rollOut,"rollOut");
		HX_STACK_LINE(293)
		int tmp13 = (oldLength - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(293)
		int i = tmp13;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(294)
		while((true)){
			HX_STACK_LINE(294)
			bool tmp14 = (i >= common);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(294)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(294)
			if ((tmp15)){
				HX_STACK_LINE(294)
				break;
			}
			HX_STACK_LINE(296)
			::openfl::_legacy::display::InteractiveObject tmp16 = prev->__get(i).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(296)
			::openfl::_legacy::events::MouseEvent tmp17 = rollOut;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(296)
			tmp16->__dispatchEvent(tmp17);
			HX_STACK_LINE(297)
			(i)--;
		}
		HX_STACK_LINE(301)
		::String tmp14 = events->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		::openfl::_legacy::display::InteractiveObject tmp15 = oldObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(301)
		::openfl::_legacy::events::MouseEvent tmp16 = event->__createSimilar(tmp14,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		::openfl::_legacy::events::MouseEvent rollOver = tmp16;		HX_STACK_VAR(rollOver,"rollOver");
		HX_STACK_LINE(303)
		int tmp17 = (newLength - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(303)
		int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(304)
		while((true)){
			HX_STACK_LINE(304)
			bool tmp18 = (i1 >= common);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(304)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(304)
			if ((tmp19)){
				HX_STACK_LINE(304)
				break;
			}
			HX_STACK_LINE(306)
			::openfl::_legacy::display::InteractiveObject tmp20 = stack->__get(i1).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(306)
			::openfl::_legacy::events::MouseEvent tmp21 = rollOver;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(306)
			tmp20->__dispatchEvent(tmp21);
			HX_STACK_LINE(307)
			(i1)--;
		}
		HX_STACK_LINE(311)
		bool tmp18 = (touchInfo == null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(311)
		if ((tmp18)){
			HX_STACK_LINE(313)
			this->__mouseOverObjects = stack;
		}
		else{
			HX_STACK_LINE(317)
			touchInfo->touchOverObjects = stack;
		}
		HX_STACK_LINE(321)
		return false;
	}
	HX_STACK_LINE(325)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__checkInOuts,return )

Void Stage_obj::__checkRender( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__checkRender",0xa5bd2bbe,"openfl._legacy.display.Stage.__checkRender","openfl/_legacy/display/Stage.hx",330,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		Float tmp = this->frameRate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		if ((tmp1)){
			HX_STACK_LINE(334)
			Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(334)
			Float now = tmp2;		HX_STACK_VAR(now,"now");
			HX_STACK_LINE(335)
			Float tmp3 = now;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			Float tmp4 = this->__nextRender;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(335)
			if ((tmp5)){
				HX_STACK_LINE(337)
				this->__lastRender = now;
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(339)
					Float tmp6 = this->__nextRender;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(339)
					Float tmp7 = this->__lastRender;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(339)
					bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(339)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(339)
					if ((tmp9)){
						HX_STACK_LINE(339)
						break;
					}
					HX_STACK_LINE(341)
					Float tmp10 = this->__framePeriod;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(341)
					hx::AddEq(this->__nextRender,tmp10);
				}
				HX_STACK_LINE(345)
				Dynamic tmp6 = this->renderRequest_dyn();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				if ((tmp7)){
					HX_STACK_LINE(347)
					this->renderRequest();
				}
				else{
					HX_STACK_LINE(351)
					this->__render(true);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__checkRender,(void))

Float Stage_obj::__doProcessStageEvent( Dynamic event){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__doProcessStageEvent",0xc4416d40,"openfl._legacy.display.Stage.__doProcessStageEvent","openfl/_legacy/display/Stage.hx",377,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(383)
	Float result = ((Float)0.0);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(384)
	Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	Dynamic tmp1 = ::Reflect_obj::field(tmp,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(384)
	int type = tmp2;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(386)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(388)
		int tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		switch( (int)(tmp3)){
			case (int)2: {
				HX_STACK_LINE(392)
				Dynamic tmp4 = this->onKey_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(392)
				if ((tmp5)){
					HX_STACK_LINE(393)
					this->onKey(event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ),event->__Field(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"), hx::paccDynamic ),event->__Field(HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"), hx::paccDynamic ),event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic ));
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(397)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(397)
				::String tmp5 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(397)
				this->__onKey(tmp4,tmp5);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(401)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(401)
				::String tmp5 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(401)
				this->__onKey(tmp4,tmp5);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(405)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(405)
				::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(405)
				this->__onMouse(tmp4,tmp5,true);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(409)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(409)
				::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(409)
				this->__onMouse(tmp4,tmp5,true);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(413)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(413)
				::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(413)
				this->__onMouse(tmp4,tmp5,true);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(417)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				this->__onMouse(tmp4,tmp5,true);
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(421)
				this->__onResize(event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
				HX_STACK_LINE(422)
				Dynamic tmp4 = this->renderRequest_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				if ((tmp5)){
					HX_STACK_LINE(424)
					this->__render(false);
				}
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(430)
				this->__pollTimers();
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(434)
				Dynamic tmp4 = this->onQuit_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(434)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(434)
				if ((tmp5)){
					HX_STACK_LINE(435)
					this->onQuit();
				}
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(439)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(439)
				this->__onFocus(tmp4);
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(443)
				bool tmp4 = ::openfl::_legacy::display::Stage_obj::shouldRotateInterface(event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(443)
				if ((tmp4)){
					HX_STACK_LINE(444)
					event->__FieldRef(HX_HCSTRING("result","\xdd","\x68","\x84","\x08")) = (int)2;
				}
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(448)
				this->__render(true);
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(452)
				::openfl::_legacy::display::TouchInfo tmp4 = ::openfl::_legacy::display::TouchInfo_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(452)
				::openfl::_legacy::display::TouchInfo touchInfo = tmp4;		HX_STACK_VAR(touchInfo,"touchInfo");
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(453)
					int key = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(453)
					::haxe::ds::IntMap tmp5 = this->__touchInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(453)
					int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(453)
					::openfl::_legacy::display::TouchInfo tmp7 = touchInfo;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(453)
					tmp5->set(tmp6,tmp7);
				}
				HX_STACK_LINE(454)
				Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(454)
				::String tmp6 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_BEGIN;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(454)
				::openfl::_legacy::display::TouchInfo tmp7 = touchInfo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(454)
				this->__onTouch(tmp5,tmp6,tmp7);
				HX_STACK_LINE(456)
				int tmp8 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(456)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(456)
				if ((tmp9)){
					HX_STACK_LINE(458)
					Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(458)
					::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(458)
					this->__onMouse(tmp10,tmp11,false);
				}
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(464)
				::openfl::_legacy::display::TouchInfo tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(464)
				{
					HX_STACK_LINE(464)
					int key = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(464)
					::haxe::ds::IntMap tmp5 = this->__touchInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(464)
					int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(464)
					tmp4 = tmp5->get(tmp6);
				}
				HX_STACK_LINE(464)
				::openfl::_legacy::display::TouchInfo touchInfo = tmp4;		HX_STACK_VAR(touchInfo,"touchInfo");
				HX_STACK_LINE(465)
				Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(465)
				::String tmp6 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_MOVE;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(465)
				::openfl::_legacy::display::TouchInfo tmp7 = touchInfo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(465)
				this->__onTouch(tmp5,tmp6,tmp7);
				HX_STACK_LINE(467)
				int tmp8 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(467)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(467)
				if ((tmp9)){
					HX_STACK_LINE(469)
					Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(469)
					::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(469)
					this->__onMouse(tmp10,tmp11,false);
				}
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(475)
				::openfl::_legacy::display::TouchInfo tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					int key = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(475)
					::haxe::ds::IntMap tmp5 = this->__touchInfo;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(475)
					int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(475)
					tmp4 = tmp5->get(tmp6);
				}
				HX_STACK_LINE(475)
				::openfl::_legacy::display::TouchInfo touchInfo = tmp4;		HX_STACK_VAR(touchInfo,"touchInfo");
				HX_STACK_LINE(476)
				Dynamic tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				::String tmp6 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_END;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(476)
				::openfl::_legacy::display::TouchInfo tmp7 = touchInfo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(476)
				this->__onTouch(tmp5,tmp6,tmp7);
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					int key = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(477)
					::haxe::ds::IntMap tmp8 = this->__touchInfo;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(477)
					int tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(477)
					tmp8->remove(tmp9);
				}
				HX_STACK_LINE(479)
				int tmp8 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(479)
				bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(479)
				if ((tmp9)){
					HX_STACK_LINE(481)
					Dynamic tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(481)
					::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(481)
					this->__onMouse(tmp10,tmp11,false);
				}
			}
			;break;
			case (int)18: {
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(491)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(491)
				this->__onChange(tmp4);
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(495)
				this->__setActive(true);
			}
			;break;
			case (int)21: {
				HX_STACK_LINE(499)
				this->__setActive(false);
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(503)
				::openfl::_legacy::events::Event tmp4 = ::openfl::_legacy::events::Event_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(503)
				this->__dispatchEvent(tmp4);
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(507)
				::openfl::_legacy::events::Event tmp4 = ::openfl::_legacy::events::Event_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(507)
				this->__dispatchEvent(tmp4);
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(511)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(511)
				this->__onJoystick(tmp4,HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"));
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(515)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(515)
				this->__onJoystick(tmp4,HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"));
			}
			;break;
			case (int)26: {
				HX_STACK_LINE(519)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(519)
				this->__onJoystick(tmp4,HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"));
			}
			;break;
			case (int)27: {
				HX_STACK_LINE(523)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				this->__onJoystick(tmp4,HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"));
			}
			;break;
			case (int)28: {
				HX_STACK_LINE(527)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				this->__onJoystick(tmp4,HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"));
			}
			;break;
			case (int)29: {
				HX_STACK_LINE(531)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(531)
				this->__onJoystick(tmp4,HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b"));
			}
			;break;
			case (int)30: {
				HX_STACK_LINE(535)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(535)
				this->__onJoystick(tmp4,HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59"));
			}
			;break;
			case (int)31: {
				HX_STACK_LINE(539)
				Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(539)
				this->__onSysWM(tmp4);
			}
			;break;
			case (int)32: {
				HX_STACK_LINE(543)
				this->__onRenderContext(false);
			}
			;break;
			case (int)33: {
				HX_STACK_LINE(547)
				this->__onRenderContext(true);
			}
			;break;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic error = __e;{
				HX_STACK_LINE(555)
				Dynamic tmp3 = error;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(555)
				::openfl::_legacy::Lib_obj::rethrow(tmp3);
			}
		}
	}
	HX_STACK_LINE(563)
	Float tmp3 = this->__updateNextWake();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(563)
	result = tmp3;
	HX_STACK_LINE(564)
	Float tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(564)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__doProcessStageEvent,return )

Dynamic Stage_obj::__processStageEvent( Dynamic event){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__processStageEvent",0xd0ccd14b,"openfl._legacy.display.Stage.__processStageEvent","openfl/_legacy/display/Stage.hx",569,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(571)
	Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	this->__doProcessStageEvent(tmp);
	HX_STACK_LINE(572)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__processStageEvent,return )

Void Stage_obj::__drag( ::openfl::_legacy::geom::Point mouse){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__drag",0x33b78e74,"openfl._legacy.display.Stage.__drag","openfl/_legacy/display/Stage.hx",577,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mouse,"mouse")
		HX_STACK_LINE(579)
		::openfl::_legacy::display::Sprite tmp = this->__dragObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(579)
		::openfl::_legacy::display::DisplayObjectContainer tmp1 = tmp->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(579)
		::openfl::_legacy::display::DisplayObjectContainer parent = tmp1;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(580)
		bool tmp2 = (parent != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(580)
		if ((tmp2)){
			HX_STACK_LINE(582)
			::openfl::_legacy::geom::Point tmp3 = mouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(582)
			::openfl::_legacy::geom::Point tmp4 = parent->globalToLocal(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(582)
			mouse = tmp4;
		}
		HX_STACK_LINE(586)
		Float tmp3 = mouse->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(586)
		Float tmp4 = this->__dragOffsetX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(586)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(586)
		Float x = tmp5;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(587)
		Float tmp6 = mouse->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(587)
		Float tmp7 = this->__dragOffsetY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(587)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(587)
		Float y = tmp8;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(589)
		::openfl::_legacy::geom::Rectangle tmp9 = this->__dragBounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(589)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(589)
		if ((tmp10)){
			HX_STACK_LINE(591)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			::openfl::_legacy::geom::Rectangle tmp12 = this->__dragBounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(591)
			bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(591)
			if ((tmp14)){
				HX_STACK_LINE(593)
				::openfl::_legacy::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(593)
				x = tmp15->x;
			}
			else{
				HX_STACK_LINE(595)
				Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(595)
				::openfl::_legacy::geom::Rectangle tmp16 = this->__dragBounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(595)
				Float tmp17 = tmp16->get_right();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(595)
				bool tmp18 = (tmp15 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(595)
				if ((tmp18)){
					HX_STACK_LINE(597)
					::openfl::_legacy::geom::Rectangle tmp19 = this->__dragBounds;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(597)
					Float tmp20 = tmp19->get_right();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(597)
					x = tmp20;
				}
			}
			HX_STACK_LINE(601)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(601)
			::openfl::_legacy::geom::Rectangle tmp16 = this->__dragBounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(601)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(601)
			bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(601)
			if ((tmp18)){
				HX_STACK_LINE(603)
				::openfl::_legacy::geom::Rectangle tmp19 = this->__dragBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(603)
				y = tmp19->y;
			}
			else{
				HX_STACK_LINE(605)
				Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(605)
				::openfl::_legacy::geom::Rectangle tmp20 = this->__dragBounds;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(605)
				Float tmp21 = tmp20->get_bottom();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(605)
				bool tmp22 = (tmp19 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(605)
				if ((tmp22)){
					HX_STACK_LINE(607)
					::openfl::_legacy::geom::Rectangle tmp23 = this->__dragBounds;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(607)
					Float tmp24 = tmp23->get_bottom();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(607)
					y = tmp24;
				}
			}
		}
		HX_STACK_LINE(613)
		::openfl::_legacy::display::Sprite tmp11 = this->__dragObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(613)
		Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(613)
		tmp11->set_x(tmp12);
		HX_STACK_LINE(614)
		::openfl::_legacy::display::Sprite tmp13 = this->__dragObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(614)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(614)
		tmp13->set_y(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Float Stage_obj::__nextFrameDue( Float otherTimers){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__nextFrameDue",0xba16f01a,"openfl._legacy.display.Stage.__nextFrameDue","openfl/_legacy/display/Stage.hx",619,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherTimers,"otherTimers")
	HX_STACK_LINE(621)
	bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(621)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(621)
	if ((tmp2)){
		HX_STACK_LINE(621)
		tmp3 = this->pauseWhenDeactivated;
	}
	else{
		HX_STACK_LINE(621)
		tmp3 = false;
	}
	HX_STACK_LINE(621)
	if ((tmp3)){
		HX_STACK_LINE(623)
		Float tmp4 = otherTimers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(623)
		return tmp4;
	}
	HX_STACK_LINE(627)
	Float tmp4 = this->frameRate;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(627)
	bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(627)
	if ((tmp5)){
		HX_STACK_LINE(629)
		Float tmp6 = this->__nextRender;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		Float tmp7 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(629)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(629)
		Float tmp9 = ::openfl::_legacy::display::Stage_obj::__earlyWakeup;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(629)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(629)
		Float next = tmp10;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(630)
		bool tmp11 = (next < otherTimers);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(630)
		if ((tmp11)){
			HX_STACK_LINE(632)
			Float tmp12 = next;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(632)
			return tmp12;
		}
	}
	HX_STACK_LINE(638)
	Float tmp6 = otherTimers;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(638)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__nextFrameDue,return )

Void Stage_obj::__onChange( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onChange",0x300a2a6f,"openfl._legacy.display.Stage.__onChange","openfl/_legacy/display/Stage.hx",643,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(645)
		::openfl::_legacy::display::DisplayObject tmp = this->__findByID(event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		::openfl::_legacy::display::DisplayObject object = tmp;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(647)
		bool tmp1 = (object != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(647)
		if ((tmp1)){
			HX_STACK_LINE(649)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(649)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,true,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(649)
			object->__fireEvent(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onChange,(void))

Void Stage_obj::__onFocus( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onFocus",0x8b642bb9,"openfl._legacy.display.Stage.__onFocus","openfl/_legacy/display/Stage.hx",656,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(658)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(659)
		::openfl::_legacy::display::DisplayObject tmp = this->__findByID(event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(659)
		::openfl::_legacy::display::DisplayObject object = tmp;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(661)
		bool tmp1 = (object != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(661)
		if ((tmp1)){
			HX_STACK_LINE(663)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(667)
		bool tmp2 = (stack->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(667)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(667)
		if ((tmp2)){
			HX_STACK_LINE(667)
			bool tmp4 = (event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(667)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(667)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(667)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(667)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(667)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(667)
			if ((tmp9)){
				HX_STACK_LINE(667)
				tmp3 = (event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) == (int)2);
			}
			else{
				HX_STACK_LINE(667)
				tmp3 = true;
			}
		}
		else{
			HX_STACK_LINE(667)
			tmp3 = false;
		}
		HX_STACK_LINE(667)
		if ((tmp3)){
			HX_STACK_LINE(669)
			::openfl::_legacy::display::InteractiveObject tmp4 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(669)
			::openfl::_legacy::display::InteractiveObject object1 = tmp4;		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(670)
			bool tmp5 = (event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) == (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(670)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(670)
			if ((tmp5)){
				HX_STACK_LINE(670)
				tmp6 = HX_HCSTRING("mouseFocusChange","\x43","\xf1","\x81","\x96");
			}
			else{
				HX_STACK_LINE(670)
				tmp6 = HX_HCSTRING("keyFocusChange","\x09","\x9c","\x8e","\xe5");
			}
			HX_STACK_LINE(670)
			int tmp7 = this->__focusOverObjects->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(670)
			bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(670)
			::openfl::_legacy::display::InteractiveObject tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(670)
			if ((tmp8)){
				HX_STACK_LINE(670)
				tmp9 = null();
			}
			else{
				HX_STACK_LINE(670)
				tmp9 = this->__focusOverObjects->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
			}
			HX_STACK_LINE(670)
			bool tmp10 = (event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(670)
			::openfl::events::FocusEvent tmp11 = ::openfl::events::FocusEvent_obj::__new(tmp6,true,true,tmp9,tmp10,event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(670)
			::openfl::events::FocusEvent focusEvent = tmp11;		HX_STACK_VAR(focusEvent,"focusEvent");
			HX_STACK_LINE(671)
			::openfl::events::FocusEvent tmp12 = focusEvent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(671)
			object1->__fireEvent(tmp12);
			HX_STACK_LINE(673)
			bool tmp13 = focusEvent->__getIsCancelled();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(673)
			if ((tmp13)){
				HX_STACK_LINE(675)
				event->__FieldRef(HX_HCSTRING("result","\xdd","\x68","\x84","\x08")) = (int)1;
				HX_STACK_LINE(676)
				return null();
			}
		}
		HX_STACK_LINE(682)
		stack->reverse();
		HX_STACK_LINE(683)
		Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(683)
		this->__checkFocusInOuts(tmp4,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onFocus,(void))

Void Stage_obj::__onJoystick( Dynamic event,::String type){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onJoystick",0x1c60f77b,"openfl._legacy.display.Stage.__onJoystick","openfl/_legacy/display/Stage.hx",688,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(690)
		::openfl::_legacy::events::JoystickEvent joystickEvent = null();		HX_STACK_VAR(joystickEvent,"joystickEvent");
		HX_STACK_LINE(692)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"))){
			HX_STACK_LINE(696)
			Array< Float > data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(696)
			{
				HX_STACK_LINE(696)
				int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(696)
				::haxe::ds::IntMap tmp1 = this->__joyAxisData;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(696)
				int tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(696)
				data = tmp1->get(tmp2);
			}
			HX_STACK_LINE(697)
			bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(697)
			if ((tmp1)){
				HX_STACK_LINE(699)
				data = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0));
			}
			HX_STACK_LINE(703)
			Float tmp2 = (Float(event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )) / Float((int)32767));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			Float value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(704)
			bool tmp3 = (value < (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			if ((tmp3)){
				HX_STACK_LINE(704)
				value = (int)-1;
			}
			HX_STACK_LINE(706)
			while((true)){
				HX_STACK_LINE(706)
				bool tmp4 = (data->length < event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(706)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(706)
				if ((tmp5)){
					HX_STACK_LINE(706)
					break;
				}
				HX_STACK_LINE(708)
				data->push((int)0);
			}
			HX_STACK_LINE(712)
			::String cachedAxisData = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(cachedAxisData,"cachedAxisData");
			HX_STACK_LINE(713)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(713)
			{
				HX_STACK_LINE(713)
				int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(713)
				::haxe::ds::IntMap tmp5 = this->__joyAxisData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(713)
				int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(713)
				tmp4 = tmp5->exists(tmp6);
			}
			HX_STACK_LINE(713)
			if ((tmp4)){
				struct _Function_3_1{
					inline static Array< Float > Block( hx::ObjectPtr< ::openfl::_legacy::display::Stage_obj > __this,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",713,0x8b30a073)
						{
							HX_STACK_LINE(713)
							int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(713)
							::haxe::ds::IntMap tmp5 = __this->__joyAxisData;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(713)
							int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(713)
							return tmp5->get(tmp6);
						}
						return null();
					}
				};
				HX_STACK_LINE(713)
				::String tmp5 = (_Function_3_1::Block(this,event))->toString();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(713)
				cachedAxisData = tmp5;
			}
			HX_STACK_LINE(714)
			Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(714)
			data[event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic )] = tmp5;
			HX_STACK_LINE(715)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(715)
				::haxe::ds::IntMap tmp7 = this->__joyAxisData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(715)
				int tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(715)
				tmp6 = tmp7->exists(tmp8);
			}
			HX_STACK_LINE(715)
			if ((tmp6)){
				HX_STACK_LINE(717)
				{
					HX_STACK_LINE(717)
					int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(717)
					::haxe::ds::IntMap tmp7 = this->__joyAxisData;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(717)
					int tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(717)
					tmp7->set(tmp8,data);
				}
				struct _Function_3_1{
					inline static Array< Float > Block( hx::ObjectPtr< ::openfl::_legacy::display::Stage_obj > __this,Dynamic &event){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",719,0x8b30a073)
						{
							HX_STACK_LINE(719)
							int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(719)
							::haxe::ds::IntMap tmp7 = __this->__joyAxisData;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(719)
							int tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(719)
							return tmp7->get(tmp8);
						}
						return null();
					}
				};
				HX_STACK_LINE(719)
				::String tmp7 = (_Function_3_1::Block(this,event))->toString();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(719)
				::String tmp8 = cachedAxisData;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(719)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(719)
				if ((tmp9)){
					HX_STACK_LINE(721)
					return null();
				}
				else{
					HX_STACK_LINE(725)
					::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(725)
					Float tmp11 = data->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(725)
					Float tmp12 = data->__get((int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(725)
					Float tmp13 = data->__get((int)2);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(725)
					::openfl::_legacy::events::JoystickEvent tmp14 = ::openfl::_legacy::events::JoystickEvent_obj::__new(tmp10,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),(int)0,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(725)
					joystickEvent = tmp14;
					HX_STACK_LINE(726)
					joystickEvent->axis = data->copy();
				}
			}
			else{
				HX_STACK_LINE(731)
				{
					HX_STACK_LINE(731)
					int key = event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(731)
					::haxe::ds::IntMap tmp7 = this->__joyAxisData;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(731)
					int tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(731)
					tmp7->set(tmp8,data);
				}
				HX_STACK_LINE(732)
				::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(732)
				Float tmp8 = data->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(732)
				Float tmp9 = data->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(732)
				Float tmp10 = data->__get((int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(732)
				::openfl::_legacy::events::JoystickEvent tmp11 = ::openfl::_legacy::events::JoystickEvent_obj::__new(tmp7,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),(int)0,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(732)
				joystickEvent = tmp11;
				HX_STACK_LINE(733)
				joystickEvent->axis = data->copy();
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"))){
			HX_STACK_LINE(738)
			::openfl::_legacy::events::JoystickEvent tmp1 = ::openfl::_legacy::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ),event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(738)
			joystickEvent = tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b"))){
			HX_STACK_LINE(742)
			::openfl::_legacy::events::JoystickEvent tmp1 = ::openfl::_legacy::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),(int)0,event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(742)
			joystickEvent = tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59"))){
			HX_STACK_LINE(746)
			::openfl::_legacy::events::JoystickEvent tmp1 = ::openfl::_legacy::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(746)
			joystickEvent = tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"))){
			HX_STACK_LINE(750)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(751)
			int y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(753)
			int tmp1 = (int(event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )) & int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(753)
			bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(753)
			if ((tmp2)){
				HX_STACK_LINE(755)
				y = (int)-1;
			}
			else{
				HX_STACK_LINE(757)
				int tmp3 = (int(event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )) & int((int)4));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(757)
				bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(757)
				if ((tmp4)){
					HX_STACK_LINE(759)
					y = (int)1;
				}
			}
			HX_STACK_LINE(763)
			int tmp3 = (int(event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )) & int((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(763)
			bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(763)
			if ((tmp4)){
				HX_STACK_LINE(765)
				x = (int)1;
			}
			else{
				HX_STACK_LINE(767)
				int tmp5 = (int(event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic )) & int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(767)
				bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(767)
				if ((tmp6)){
					HX_STACK_LINE(769)
					x = (int)-1;
				}
			}
			HX_STACK_LINE(773)
			::openfl::_legacy::events::JoystickEvent tmp5 = ::openfl::_legacy::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ),x,y,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(773)
			joystickEvent = tmp5;
		}
		else  {
			HX_STACK_LINE(815)
			::openfl::_legacy::events::JoystickEvent tmp1 = ::openfl::_legacy::events::JoystickEvent_obj::__new(type,false,false,event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(815)
			joystickEvent = tmp1;
		}
;
;
		HX_STACK_LINE(819)
		::openfl::_legacy::events::JoystickEvent tmp1 = joystickEvent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(819)
		this->__dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onJoystick,(void))

Void Stage_obj::__onKey( Dynamic event,::String type){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onKey",0x5f97eb40,"openfl._legacy.display.Stage.__onKey","openfl/_legacy/display/Stage.hx",824,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(826)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(827)
		::openfl::_legacy::display::DisplayObject tmp = this->__findByID(event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(827)
		::openfl::_legacy::display::DisplayObject object = tmp;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(829)
		bool tmp1 = (object != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(829)
		if ((tmp1)){
			HX_STACK_LINE(831)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(835)
		bool tmp2 = (stack->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		if ((tmp2)){
			HX_STACK_LINE(837)
			Dynamic value = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(838)
			bool tmp3 = (event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) >= (int)96);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(838)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(838)
			if ((tmp3)){
				HX_STACK_LINE(838)
				tmp4 = (event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ) <= (int)122);
			}
			else{
				HX_STACK_LINE(838)
				tmp4 = false;
			}
			HX_STACK_LINE(838)
			if ((tmp4)){
				HX_STACK_LINE(838)
				hx::SubEq(event->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")),(int)32);
			}
			HX_STACK_LINE(840)
			::openfl::_legacy::display::InteractiveObject tmp5 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(840)
			::openfl::_legacy::display::InteractiveObject object1 = tmp5;		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(841)
			int flags = event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic );		HX_STACK_VAR(flags,"flags");
			HX_STACK_LINE(843)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(843)
			int tmp7 = flags;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(843)
			int tmp8 = ::openfl::_legacy::display::Stage_obj::efLocationRight;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(843)
			int tmp9 = (int(tmp7) & int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(843)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(843)
			int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(843)
			if ((tmp10)){
				HX_STACK_LINE(843)
				tmp11 = (int)1;
			}
			else{
				HX_STACK_LINE(843)
				tmp11 = (int)0;
			}
			HX_STACK_LINE(843)
			int tmp12 = flags;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(843)
			int tmp13 = ::openfl::_legacy::display::Stage_obj::efCtrlDown;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(843)
			int tmp14 = (int(tmp12) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(843)
			bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(843)
			int tmp16 = flags;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(843)
			int tmp17 = ::openfl::_legacy::display::Stage_obj::efAltDown;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(843)
			int tmp18 = (int(tmp16) & int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(843)
			bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(843)
			int tmp20 = flags;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(843)
			int tmp21 = ::openfl::_legacy::display::Stage_obj::efShiftDown;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(843)
			int tmp22 = (int(tmp20) & int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(843)
			bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(843)
			::openfl::_legacy::events::KeyboardEvent tmp24 = ::openfl::_legacy::events::KeyboardEvent_obj::__new(tmp6,true,true,event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ),event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ),tmp11,tmp15,tmp19,tmp23,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(843)
			::openfl::_legacy::events::KeyboardEvent keyboardEvent = tmp24;		HX_STACK_VAR(keyboardEvent,"keyboardEvent");
			HX_STACK_LINE(844)
			::openfl::_legacy::events::KeyboardEvent tmp25 = keyboardEvent;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(844)
			object1->__fireEvent(tmp25);
			HX_STACK_LINE(846)
			bool tmp26 = keyboardEvent->__getIsCancelled();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(846)
			if ((tmp26)){
				HX_STACK_LINE(848)
				event->__FieldRef(HX_HCSTRING("result","\xdd","\x68","\x84","\x08")) = (int)1;
			}
			else{
				HX_STACK_LINE(854)
				int tmp27 = flags;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(854)
				int tmp28 = ::openfl::_legacy::display::Stage_obj::efAltDown;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(854)
				int tmp29 = (int(tmp27) & int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(854)
				bool tmp30 = (tmp29 > (int)0);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(854)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(854)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(854)
				if ((tmp31)){
					HX_STACK_LINE(854)
					::String tmp33 = type;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(854)
					::String tmp34 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(854)
					::String tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(854)
					::String tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(854)
					tmp32 = (tmp33 == tmp36);
				}
				else{
					HX_STACK_LINE(854)
					tmp32 = false;
				}
				HX_STACK_LINE(854)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(854)
				if ((tmp32)){
					HX_STACK_LINE(854)
					tmp33 = (event->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic ) == (int)13);
				}
				else{
					HX_STACK_LINE(854)
					tmp33 = false;
				}
				HX_STACK_LINE(854)
				if ((tmp33)){
					HX_STACK_LINE(859)
					::openfl::_legacy::display::StageDisplayState tmp34 = this->get_displayState();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(859)
					bool tmp35 = (tmp34 == ::openfl::_legacy::display::StageDisplayState_obj::NORMAL);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(859)
					if ((tmp35)){
						HX_STACK_LINE(861)
						this->set_displayState(::openfl::_legacy::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
					}
					else{
						HX_STACK_LINE(865)
						this->set_displayState(::openfl::_legacy::display::StageDisplayState_obj::NORMAL);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onKey,(void))

Void Stage_obj::__onMouse( Dynamic event,::String type,bool fromMouse){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onMouse",0x933fe206,"openfl._legacy.display.Stage.__onMouse","openfl/_legacy/display/Stage.hx",879,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(fromMouse,"fromMouse")
		HX_STACK_LINE(881)
		int button = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(883)
		bool tmp = fromMouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(883)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(883)
		if ((tmp1)){
			HX_STACK_LINE(884)
			button = (int)0;
		}
		HX_STACK_LINE(886)
		int wheel = (int)0;		HX_STACK_VAR(wheel,"wheel");
		HX_STACK_LINE(888)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(888)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(888)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(888)
		if ((tmp4)){
			HX_STACK_LINE(890)
			bool tmp5 = (button > (int)2);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(890)
			if ((tmp5)){
				HX_STACK_LINE(892)
				return null();
			}
			HX_STACK_LINE(896)
			::String tmp6 = ::openfl::_legacy::display::Stage_obj::sDownEvents->__get(button);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(896)
			type = tmp6;
		}
		else{
			HX_STACK_LINE(898)
			::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(898)
			::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(898)
			bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(898)
			if ((tmp7)){
				HX_STACK_LINE(900)
				bool tmp8 = (button > (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(900)
				if ((tmp8)){
					HX_STACK_LINE(902)
					::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(902)
					type = tmp9;
					HX_STACK_LINE(903)
					bool tmp10 = (button == (int)3);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(903)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(903)
					if ((tmp10)){
						HX_STACK_LINE(903)
						tmp11 = (int)1;
					}
					else{
						HX_STACK_LINE(903)
						tmp11 = (int)-1;
					}
					HX_STACK_LINE(903)
					wheel = tmp11;
				}
				else{
					HX_STACK_LINE(907)
					::String tmp9 = ::openfl::_legacy::display::Stage_obj::sUpEvents->__get(button);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(907)
					type = tmp9;
				}
			}
		}
		HX_STACK_LINE(913)
		::openfl::_legacy::display::Sprite tmp5 = this->__dragObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(913)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(913)
		if ((tmp6)){
			HX_STACK_LINE(915)
			::openfl::_legacy::geom::Point tmp7 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(915)
			this->__drag(tmp7);
		}
		HX_STACK_LINE(919)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(920)
		::openfl::_legacy::display::DisplayObject tmp7 = this->__findByID(event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(920)
		::openfl::_legacy::display::DisplayObject object = tmp7;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(922)
		bool tmp8 = (object != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(922)
		if ((tmp8)){
			HX_STACK_LINE(924)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(928)
		::openfl::_legacy::geom::Point local = null();		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(930)
		bool tmp9 = (stack->length > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(930)
		if ((tmp9)){
			HX_STACK_LINE(932)
			::openfl::_legacy::display::InteractiveObject tmp10 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(932)
			::openfl::_legacy::display::InteractiveObject object1 = tmp10;		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(933)
			stack->reverse();
			HX_STACK_LINE(934)
			::openfl::_legacy::geom::Point tmp11 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(934)
			::openfl::_legacy::geom::Point tmp12 = object1->globalToLocal(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(934)
			local = tmp12;
			HX_STACK_LINE(935)
			::String tmp13 = type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(935)
			Dynamic tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(935)
			::openfl::_legacy::geom::Point tmp15 = local;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(935)
			::openfl::_legacy::display::InteractiveObject tmp16 = object1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(935)
			::openfl::_legacy::events::MouseEvent tmp17 = ::openfl::_legacy::events::MouseEvent_obj::__create(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(935)
			::openfl::_legacy::events::MouseEvent mouseEvent = tmp17;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(936)
			mouseEvent->delta = wheel;
			HX_STACK_LINE(938)
			bool tmp18 = fromMouse;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(938)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(938)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(938)
			if ((tmp19)){
				HX_STACK_LINE(938)
				int tmp21 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(938)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(938)
				tmp20 = (tmp22 > (int)0);
			}
			else{
				HX_STACK_LINE(938)
				tmp20 = true;
			}
			HX_STACK_LINE(938)
			if ((tmp20)){
				HX_STACK_LINE(940)
				::openfl::_legacy::events::MouseEvent tmp21 = mouseEvent;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(940)
				this->__checkInOuts(tmp21,stack,null());
			}
			HX_STACK_LINE(944)
			::openfl::_legacy::events::MouseEvent tmp21 = mouseEvent;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(944)
			object1->__fireEvent(tmp21);
		}
		else{
			HX_STACK_LINE(948)
			::openfl::_legacy::geom::Point tmp10 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(948)
			local = tmp10;
			HX_STACK_LINE(949)
			::String tmp11 = type;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(949)
			Dynamic tmp12 = event;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(949)
			::openfl::_legacy::geom::Point tmp13 = local;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(949)
			::openfl::_legacy::events::MouseEvent tmp14 = ::openfl::_legacy::events::MouseEvent_obj::__create(tmp11,tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(949)
			::openfl::_legacy::events::MouseEvent mouseEvent = tmp14;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(950)
			mouseEvent->delta = wheel;
			HX_STACK_LINE(952)
			bool tmp15 = fromMouse;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(952)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(952)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(952)
			if ((tmp16)){
				HX_STACK_LINE(952)
				int tmp18 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(952)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(952)
				tmp17 = (tmp19 > (int)0);
			}
			else{
				HX_STACK_LINE(952)
				tmp17 = true;
			}
			HX_STACK_LINE(952)
			if ((tmp17)){
				HX_STACK_LINE(954)
				::openfl::_legacy::events::MouseEvent tmp18 = mouseEvent;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(954)
				this->__checkInOuts(tmp18,stack,null());
			}
		}
		HX_STACK_LINE(960)
		bool tmp10 = (stack->length > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(960)
		::openfl::_legacy::display::InteractiveObject tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(960)
		if ((tmp10)){
			HX_STACK_LINE(960)
			int tmp12 = (stack->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(960)
			tmp11 = stack->__get(tmp12).StaticCast< ::openfl::_legacy::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(960)
			tmp11 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(960)
		::openfl::_legacy::display::InteractiveObject clickObject = tmp11;		HX_STACK_VAR(clickObject,"clickObject");
		HX_STACK_LINE(962)
		::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(962)
		::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(962)
		bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(962)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(962)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(962)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(962)
		if ((tmp16)){
			HX_STACK_LINE(962)
			::String tmp18 = type;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(962)
			::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(962)
			::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(962)
			::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(962)
			tmp17 = (tmp18 == tmp21);
		}
		else{
			HX_STACK_LINE(962)
			tmp17 = true;
		}
		HX_STACK_LINE(962)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(962)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(962)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(962)
		if ((tmp19)){
			HX_STACK_LINE(962)
			::String tmp21 = type;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(962)
			::String tmp22 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(962)
			::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(962)
			::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(962)
			tmp20 = (tmp21 == tmp24);
		}
		else{
			HX_STACK_LINE(962)
			tmp20 = true;
		}
		HX_STACK_LINE(962)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(962)
		if ((tmp20)){
			HX_STACK_LINE(962)
			tmp21 = (button < (int)3);
		}
		else{
			HX_STACK_LINE(962)
			tmp21 = false;
		}
		HX_STACK_LINE(962)
		if ((tmp21)){
			HX_STACK_LINE(964)
			::openfl::_legacy::display::InteractiveObject tmp22 = clickObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(964)
			this->__lastDown[button] = tmp22;
		}
		else{
			HX_STACK_LINE(966)
			::String tmp22 = type;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(966)
			::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(966)
			bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(966)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(966)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(966)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(966)
			if ((tmp26)){
				HX_STACK_LINE(966)
				::String tmp28 = type;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(966)
				::String tmp29 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(966)
				::String tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(966)
				::String tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(966)
				tmp27 = (tmp28 == tmp31);
			}
			else{
				HX_STACK_LINE(966)
				tmp27 = true;
			}
			HX_STACK_LINE(966)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(966)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(966)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(966)
			if ((tmp29)){
				HX_STACK_LINE(966)
				::String tmp31 = type;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(966)
				::String tmp32 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(966)
				::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(966)
				::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(966)
				tmp30 = (tmp31 == tmp34);
			}
			else{
				HX_STACK_LINE(966)
				tmp30 = true;
			}
			HX_STACK_LINE(966)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(966)
			if ((tmp30)){
				HX_STACK_LINE(966)
				tmp31 = (button < (int)3);
			}
			else{
				HX_STACK_LINE(966)
				tmp31 = false;
			}
			HX_STACK_LINE(966)
			if ((tmp31)){
				HX_STACK_LINE(968)
				::openfl::_legacy::display::InteractiveObject tmp32 = clickObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(968)
				::openfl::_legacy::display::InteractiveObject tmp33 = this->__lastDown->__get(button).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(968)
				bool tmp34 = (tmp32 == tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(968)
				if ((tmp34)){
					HX_STACK_LINE(970)
					::String tmp35 = ::openfl::_legacy::display::Stage_obj::sClickEvents->__get(button);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(970)
					Dynamic tmp36 = event;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(970)
					::openfl::_legacy::geom::Point tmp37 = local;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(970)
					::openfl::_legacy::display::InteractiveObject tmp38 = clickObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(970)
					::openfl::_legacy::events::MouseEvent tmp39 = ::openfl::_legacy::events::MouseEvent_obj::__create(tmp35,tmp36,tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(970)
					::openfl::_legacy::events::MouseEvent mouseEvent = tmp39;		HX_STACK_VAR(mouseEvent,"mouseEvent");
					HX_STACK_LINE(971)
					::openfl::_legacy::events::MouseEvent tmp40 = mouseEvent;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(971)
					clickObject->__fireEvent(tmp40);
					HX_STACK_LINE(973)
					bool tmp41 = (button == (int)0);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(973)
					bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(973)
					if ((tmp41)){
						HX_STACK_LINE(973)
						tmp42 = clickObject->doubleClickEnabled;
					}
					else{
						HX_STACK_LINE(973)
						tmp42 = false;
					}
					HX_STACK_LINE(973)
					if ((tmp42)){
						HX_STACK_LINE(975)
						int tmp43 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(975)
						int now = tmp43;		HX_STACK_VAR(now,"now");
						HX_STACK_LINE(976)
						int tmp44 = now;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(976)
						int tmp45 = this->__lastClickTime;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(976)
						int tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(976)
						bool tmp47 = (tmp46 < (int)500);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(976)
						if ((tmp47)){
							HX_STACK_LINE(978)
							::String tmp48 = ::openfl::_legacy::events::MouseEvent_obj::DOUBLE_CLICK;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(978)
							Dynamic tmp49 = event;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(978)
							::openfl::_legacy::geom::Point tmp50 = local;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(978)
							::openfl::_legacy::display::InteractiveObject tmp51 = clickObject;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(978)
							::openfl::_legacy::events::MouseEvent tmp52 = ::openfl::_legacy::events::MouseEvent_obj::__create(tmp48,tmp49,tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(978)
							::openfl::_legacy::events::MouseEvent mouseEvent1 = tmp52;		HX_STACK_VAR(mouseEvent1,"mouseEvent1");
							HX_STACK_LINE(979)
							::openfl::_legacy::events::MouseEvent tmp53 = mouseEvent1;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(979)
							clickObject->__fireEvent(tmp53);
							HX_STACK_LINE(980)
							this->__lastClickTime = (int)0;
						}
						else{
							HX_STACK_LINE(984)
							this->__lastClickTime = now;
						}
					}
				}
				HX_STACK_LINE(992)
				this->__lastDown[button] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onMouse,(void))

Void Stage_obj::__onRenderContext( bool active){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onRenderContext",0xdab01e1a,"openfl._legacy.display.Stage.__onRenderContext","openfl/_legacy/display/Stage.hx",999,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(active,"active")
		HX_STACK_LINE(1005)
		bool tmp = active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1005)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1005)
		::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1005)
		if ((tmp1)){
			HX_STACK_LINE(1005)
			tmp2 = HX_HCSTRING("glcontextlost","\x4e","\x21","\x17","\x07");
		}
		else{
			HX_STACK_LINE(1005)
			tmp2 = HX_HCSTRING("glcontextrestored","\xc0","\x71","\x0a","\x02");
		}
		HX_STACK_LINE(1005)
		::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1005)
		::openfl::_legacy::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1006)
		::openfl::_legacy::events::Event tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1006)
		this->__dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onRenderContext,(void))

Void Stage_obj::__onResize( Float width,Float height){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onResize",0x8112f2f3,"openfl._legacy.display.Stage.__onResize","openfl/_legacy/display/Stage.hx",1011,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1013)
		::String tmp = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1013)
		::openfl::_legacy::events::Event tmp1 = ::openfl::_legacy::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1013)
		::openfl::_legacy::events::Event event = tmp1;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1014)
		::openfl::_legacy::events::Event tmp2 = event;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1014)
		this->__dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onResize,(void))

Void Stage_obj::__onSysWM( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onSysWM",0x0e41e244,"openfl._legacy.display.Stage.__onSysWM","openfl/_legacy/display/Stage.hx",1019,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(1021)
		::String tmp = ::openfl::_legacy::events::SystemEvent_obj::SYSTEM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1021)
		::openfl::_legacy::events::SystemEvent tmp1 = ::openfl::_legacy::events::SystemEvent_obj::__new(tmp,false,false,event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1021)
		::openfl::_legacy::events::SystemEvent event1 = tmp1;		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(1022)
		::openfl::_legacy::events::SystemEvent tmp2 = event1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1022)
		this->__dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__onSysWM,(void))

Void Stage_obj::__onTouch( Dynamic event,::String type,::openfl::_legacy::display::TouchInfo touchInfo){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__onTouch",0x9b0de3a0,"openfl._legacy.display.Stage.__onTouch","openfl/_legacy/display/Stage.hx",1027,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(touchInfo,"touchInfo")
		HX_STACK_LINE(1029)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1030)
		::openfl::_legacy::display::DisplayObject tmp = this->__findByID(event->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1030)
		::openfl::_legacy::display::DisplayObject object = tmp;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(1032)
		bool tmp1 = (object != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1032)
		if ((tmp1)){
			HX_STACK_LINE(1034)
			object->__getInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(1038)
		bool tmp2 = (stack->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1038)
		if ((tmp2)){
			HX_STACK_LINE(1040)
			::openfl::_legacy::display::InteractiveObject tmp3 = stack->__get((int)0).StaticCast< ::openfl::_legacy::display::InteractiveObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1040)
			::openfl::_legacy::display::InteractiveObject object1 = tmp3;		HX_STACK_VAR(object1,"object1");
			HX_STACK_LINE(1041)
			stack->reverse();
			HX_STACK_LINE(1042)
			::openfl::_legacy::geom::Point tmp4 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1042)
			::openfl::_legacy::geom::Point tmp5 = object1->globalToLocal(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1042)
			::openfl::_legacy::geom::Point local = tmp5;		HX_STACK_VAR(local,"local");
			HX_STACK_LINE(1043)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1043)
			Dynamic tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1043)
			::openfl::_legacy::geom::Point tmp8 = local;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1043)
			::openfl::_legacy::display::InteractiveObject tmp9 = object1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1043)
			::openfl::_legacy::events::TouchEvent tmp10 = ::openfl::_legacy::events::TouchEvent_obj::__create(tmp6,tmp7,tmp8,tmp9,event->__Field(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"), hx::paccDynamic ),event->__Field(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1043)
			::openfl::_legacy::events::TouchEvent touchEvent = tmp10;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1044)
			touchEvent->touchPointID = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
			HX_STACK_LINE(1045)
			int tmp11 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1045)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1045)
			touchEvent->isPrimaryTouchPoint = tmp12;
			HX_STACK_LINE(1047)
			::openfl::_legacy::events::TouchEvent tmp13 = touchEvent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1047)
			::openfl::_legacy::display::TouchInfo tmp14 = touchInfo;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1047)
			this->__checkInOuts(tmp13,stack,tmp14);
			HX_STACK_LINE(1048)
			::openfl::_legacy::events::TouchEvent tmp15 = touchEvent;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1048)
			object1->__fireEvent(tmp15);
		}
		else{
			HX_STACK_LINE(1052)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1052)
			Dynamic tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1052)
			::openfl::_legacy::geom::Point tmp5 = ::openfl::_legacy::geom::Point_obj::__new(event->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),event->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1052)
			::openfl::_legacy::events::TouchEvent tmp6 = ::openfl::_legacy::events::TouchEvent_obj::__create(tmp3,tmp4,tmp5,null(),event->__Field(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"), hx::paccDynamic ),event->__Field(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1052)
			::openfl::_legacy::events::TouchEvent touchEvent = tmp6;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1053)
			touchEvent->touchPointID = event->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
			HX_STACK_LINE(1054)
			int tmp7 = (int(event->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic )) & int((int)32768));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1054)
			bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1054)
			touchEvent->isPrimaryTouchPoint = tmp8;
			HX_STACK_LINE(1055)
			::openfl::_legacy::events::TouchEvent tmp9 = touchEvent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1055)
			::openfl::_legacy::display::TouchInfo tmp10 = touchInfo;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1055)
			this->__checkInOuts(tmp9,stack,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onTouch,(void))

Void Stage_obj::__pollTimers( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__pollTimers",0x39b5fb2d,"openfl._legacy.display.Stage.__pollTimers","openfl/_legacy/display/Stage.hx",1062,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1064)
		bool tmp = ::openfl::_legacy::display::Stage_obj::__exiting;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1064)
		if ((tmp)){
			HX_STACK_LINE(1066)
			return null();
		}
		HX_STACK_LINE(1071)
		::haxe::Timer_obj::__checkTimers();
		HX_STACK_LINE(1074)
		::openfl::_legacy::media::SoundChannel_obj::__pollComplete();
		HX_STACK_LINE(1077)
		::openfl::_legacy::net::URLLoader_obj::__pollData();
		HX_STACK_LINE(1081)
		::DefaultAssetLibrary_obj::__poll();
		HX_STACK_LINE(1084)
		this->__checkRender();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__pollTimers,(void))

Void Stage_obj::__render( bool sendEnterFrame){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__render",0x60ee6dd6,"openfl._legacy.display.Stage.__render","openfl/_legacy/display/Stage.hx",1089,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sendEnterFrame,"sendEnterFrame")
		HX_STACK_LINE(1091)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1091)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1091)
		if ((tmp1)){
			HX_STACK_LINE(1093)
			return null();
		}
		HX_STACK_LINE(1097)
		bool tmp2 = sendEnterFrame;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1097)
		if ((tmp2)){
			HX_STACK_LINE(1103)
			::String tmp3 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1103)
			::openfl::_legacy::events::Event tmp4 = ::openfl::_legacy::events::Event_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1103)
			this->__broadcast(tmp4);
		}
		HX_STACK_LINE(1107)
		bool tmp3 = this->__invalid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1107)
		if ((tmp3)){
			HX_STACK_LINE(1109)
			this->__invalid = false;
			HX_STACK_LINE(1110)
			::String tmp4 = ::openfl::_legacy::events::Event_obj::RENDER;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1110)
			::openfl::_legacy::events::Event tmp5 = ::openfl::_legacy::events::Event_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1110)
			this->__broadcast(tmp5);
		}
		HX_STACK_LINE(1119)
		Dynamic tmp4 = this->__handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1119)
		::openfl::_legacy::display::Stage_obj::lime_render_stage(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__render,(void))

Void Stage_obj::__setActive( bool value){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__setActive",0xaa514488,"openfl._legacy.display.Stage.__setActive","openfl/_legacy/display/Stage.hx",1129,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(1131)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1131)
		bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1131)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1131)
		if ((tmp2)){
			HX_STACK_LINE(1133)
			this->active = value;
			HX_STACK_LINE(1135)
			bool tmp3 = this->active;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1135)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1135)
			if ((tmp4)){
				HX_STACK_LINE(1137)
				Float tmp5 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1137)
				this->__lastRender = tmp5;
				HX_STACK_LINE(1138)
				Float tmp6 = this->__lastRender;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1138)
				Float tmp7 = this->__framePeriod;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1138)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1138)
				this->__nextRender = tmp8;
			}
			HX_STACK_LINE(1142)
			bool tmp5 = this->active;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1142)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1142)
			if ((tmp5)){
				HX_STACK_LINE(1142)
				tmp6 = ::openfl::_legacy::events::Event_obj::ACTIVATE;
			}
			else{
				HX_STACK_LINE(1142)
				tmp6 = ::openfl::_legacy::events::Event_obj::DEACTIVATE;
			}
			HX_STACK_LINE(1142)
			::openfl::_legacy::events::Event tmp7 = ::openfl::_legacy::events::Event_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1142)
			::openfl::_legacy::events::Event event = tmp7;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1143)
			::openfl::_legacy::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1143)
			this->__broadcast(tmp8);
			HX_STACK_LINE(1145)
			bool tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1145)
			if ((tmp9)){
				HX_STACK_LINE(1147)
				this->__pollTimers();
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__setActive,(void))

Void Stage_obj::__startDrag( ::openfl::_legacy::display::Sprite sprite,bool lockCenter,::openfl::_legacy::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__startDrag",0x2fc732f6,"openfl._legacy.display.Stage.__startDrag","openfl/_legacy/display/Stage.hx",1179,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(lockCenter,"lockCenter")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1181)
		bool tmp = (bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1181)
		::openfl::_legacy::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1181)
		if ((tmp)){
			HX_STACK_LINE(1181)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1181)
			tmp1 = bounds->clone();
		}
		HX_STACK_LINE(1181)
		this->__dragBounds = tmp1;
		HX_STACK_LINE(1182)
		this->__dragObject = sprite;
		HX_STACK_LINE(1184)
		::openfl::_legacy::display::Sprite tmp2 = this->__dragObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1184)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1184)
		if ((tmp3)){
			HX_STACK_LINE(1186)
			bool tmp4 = lockCenter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1186)
			if ((tmp4)){
				HX_STACK_LINE(1188)
				::openfl::_legacy::display::Sprite tmp5 = this->__dragObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1188)
				Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1188)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1188)
				Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1188)
				this->__dragOffsetX = tmp8;
				HX_STACK_LINE(1189)
				::openfl::_legacy::display::Sprite tmp9 = this->__dragObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1189)
				Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1189)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1189)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1189)
				this->__dragOffsetY = tmp12;
			}
			else{
				HX_STACK_LINE(1193)
				Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1193)
				Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1193)
				::openfl::_legacy::geom::Point tmp7 = ::openfl::_legacy::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1193)
				::openfl::_legacy::geom::Point mouse = tmp7;		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(1194)
				::openfl::_legacy::display::Sprite tmp8 = this->__dragObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1194)
				::openfl::_legacy::display::DisplayObjectContainer tmp9 = tmp8->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1194)
				::openfl::_legacy::display::DisplayObjectContainer parent = tmp9;		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(1196)
				bool tmp10 = (parent != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1196)
				if ((tmp10)){
					HX_STACK_LINE(1198)
					::openfl::_legacy::geom::Point tmp11 = mouse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1198)
					::openfl::_legacy::geom::Point tmp12 = parent->globalToLocal(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1198)
					mouse = tmp12;
				}
				HX_STACK_LINE(1202)
				::openfl::_legacy::display::Sprite tmp11 = this->__dragObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1202)
				Float tmp12 = tmp11->get_x();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1202)
				Float tmp13 = mouse->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1202)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1202)
				this->__dragOffsetX = tmp14;
				HX_STACK_LINE(1203)
				::openfl::_legacy::display::Sprite tmp15 = this->__dragObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1203)
				Float tmp16 = tmp15->get_y();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1203)
				Float tmp17 = mouse->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1203)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1203)
				this->__dragOffsetY = tmp18;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__stopDrag( ::openfl::_legacy::display::Sprite sprite){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","__stopDrag",0x2e151396,"openfl._legacy.display.Stage.__stopDrag","openfl/_legacy/display/Stage.hx",1212,0x8b30a073)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(1214)
		this->__dragBounds = null();
		HX_STACK_LINE(1215)
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Float Stage_obj::__updateNextWake( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","__updateNextWake",0xb4347860,"openfl._legacy.display.Stage.__updateNextWake","openfl/_legacy/display/Stage.hx",1220,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1225)
	Float tmp = ::haxe::Timer_obj::__nextWake(((Float)315000000.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1225)
	Float nextWake = tmp;		HX_STACK_VAR(nextWake,"nextWake");
	HX_STACK_LINE(1228)
	bool tmp1 = (nextWake > ((Float)0.001));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1228)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1228)
	if ((tmp1)){
		HX_STACK_LINE(1228)
		int tmp3 = ::openfl::_legacy::media::SoundChannel_obj::__dynamicSoundCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1228)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1228)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(1228)
		tmp2 = false;
	}
	HX_STACK_LINE(1228)
	if ((tmp2)){
		HX_STACK_LINE(1230)
		nextWake = ((Float)0.001);
	}
	HX_STACK_LINE(1236)
	bool tmp3 = (nextWake > ((Float)0.02));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1236)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1236)
	if ((tmp3)){
		HX_STACK_LINE(1236)
		bool tmp5 = ::openfl::_legacy::media::SoundChannel_obj::__completePending();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1236)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1236)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1236)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1236)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1236)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1236)
		if ((tmp10)){
			HX_STACK_LINE(1236)
			tmp4 = ::openfl::_legacy::net::URLLoader_obj::__loadPending();
		}
		else{
			HX_STACK_LINE(1236)
			tmp4 = true;
		}
	}
	else{
		HX_STACK_LINE(1236)
		tmp4 = false;
	}
	HX_STACK_LINE(1236)
	if ((tmp4)){
		HX_STACK_LINE(1238)
		bool tmp5 = this->active;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1238)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1238)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1238)
		if ((tmp6)){
			HX_STACK_LINE(1238)
			bool tmp8 = this->pauseWhenDeactivated;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1238)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1238)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1238)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(1238)
			tmp7 = true;
		}
		HX_STACK_LINE(1238)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1238)
		if ((tmp7)){
			HX_STACK_LINE(1238)
			tmp8 = ((Float)0.020);
		}
		else{
			HX_STACK_LINE(1238)
			tmp8 = ((Float)0.500);
		}
		HX_STACK_LINE(1238)
		nextWake = tmp8;
	}
	HX_STACK_LINE(1243)
	Float tmp5 = nextWake;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1243)
	Float tmp6 = this->__nextFrameDue(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1243)
	nextWake = tmp6;
	HX_STACK_LINE(1244)
	Dynamic tmp7 = this->__handle;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1244)
	Float tmp8 = nextWake;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1244)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_next_wake(tmp7,tmp8);
	HX_STACK_LINE(1245)
	Float tmp9 = nextWake;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1245)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__updateNextWake,return )

::openfl::_legacy::display::StageAlign Stage_obj::get_align( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_align",0xd4898fbc,"openfl._legacy.display.Stage.get_align","openfl/_legacy/display/Stage.hx",1258,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1260)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1260)
	int tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_align(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1260)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1261)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1261)
	::openfl::_legacy::display::StageAlign tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::StageAlign >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1261)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_align,return )

::openfl::_legacy::display::StageAlign Stage_obj::set_align( ::openfl::_legacy::display::StageAlign value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_align",0xb7da7bc8,"openfl._legacy.display.Stage.set_align","openfl/_legacy/display/Stage.hx",1266,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1268)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1268)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_align(tmp,value->__Index());
	HX_STACK_LINE(1269)
	::openfl::_legacy::display::StageAlign tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1269)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_align,return )

int Stage_obj::get_color( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_color",0xfd54aa5a,"openfl._legacy.display.Stage.get_color","openfl/_legacy/display/Stage.hx",1274,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1276)
	Dynamic tmp = this->get_opaqueBackground();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1276)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

int Stage_obj::set_color( int value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_color",0xe0a59666,"openfl._legacy.display.Stage.set_color","openfl/_legacy/display/Stage.hx",1281,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1283)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1283)
	Dynamic tmp1 = this->set_opaqueBackground(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1283)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

::openfl::_legacy::display::StageDisplayState Stage_obj::get_displayState( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_displayState",0xe50f3058,"openfl._legacy.display.Stage.get_displayState","openfl/_legacy/display/Stage.hx",1288,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1290)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1290)
	int tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_display_state(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1290)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1291)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1291)
	::openfl::_legacy::display::StageDisplayState tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::StageDisplayState >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1291)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

::openfl::_legacy::display::StageDisplayState Stage_obj::set_displayState( ::openfl::_legacy::display::StageDisplayState value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_displayState",0x3b511dcc,"openfl._legacy.display.Stage.set_displayState","openfl/_legacy/display/Stage.hx",1296,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1298)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1298)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_display_state(tmp,value->__Index());
	HX_STACK_LINE(1299)
	::openfl::_legacy::display::StageDisplayState tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1299)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

Float Stage_obj::get_dpiScale( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_dpiScale",0xafcc2556,"openfl._legacy.display.Stage.get_dpiScale","openfl/_legacy/display/Stage.hx",1304,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1306)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1306)
	Float tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_dpi_scale(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1306)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_dpiScale,return )

::openfl::_legacy::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_focus",0xb78198cf,"openfl._legacy.display.Stage.get_focus","openfl/_legacy/display/Stage.hx",1311,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1313)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1313)
	int tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_focus_id(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1313)
	int id = tmp1;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(1314)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1314)
	::openfl::_legacy::display::DisplayObject tmp3 = this->__findByID(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1314)
	::openfl::_legacy::display::DisplayObject object = tmp3;		HX_STACK_VAR(object,"object");
	HX_STACK_LINE(1315)
	::openfl::_legacy::display::InteractiveObject tmp4 = ((::openfl::_legacy::display::InteractiveObject)(object));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1315)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::openfl::_legacy::display::InteractiveObject Stage_obj::set_focus( ::openfl::_legacy::display::InteractiveObject value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_focus",0x9ad284db,"openfl._legacy.display.Stage.set_focus","openfl/_legacy/display/Stage.hx",1320,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1322)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1322)
	if ((tmp)){
		HX_STACK_LINE(1324)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1324)
		::openfl::_legacy::display::Stage_obj::lime_stage_set_focus(tmp1,null(),(int)0);
	}
	else{
		HX_STACK_LINE(1328)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1328)
		Dynamic tmp2 = value->__handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1328)
		::openfl::_legacy::display::Stage_obj::lime_stage_set_focus(tmp1,tmp2,(int)0);
	}
	HX_STACK_LINE(1332)
	::openfl::_legacy::display::InteractiveObject tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1332)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

Float Stage_obj::set_frameRate( Float value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_frameRate",0xb5987430,"openfl._legacy.display.Stage.set_frameRate","openfl/_legacy/display/Stage.hx",1337,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1339)
	this->frameRate = value;
	HX_STACK_LINE(1340)
	Float tmp = this->frameRate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1340)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1340)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1340)
	if ((tmp1)){
		HX_STACK_LINE(1340)
		tmp2 = this->frameRate;
	}
	else{
		HX_STACK_LINE(1340)
		Float tmp3 = this->frameRate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1340)
		tmp2 = (Float(((Float)1.0)) / Float(tmp3));
	}
	HX_STACK_LINE(1340)
	this->__framePeriod = tmp2;
	HX_STACK_LINE(1341)
	Float tmp3 = this->__lastRender;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1341)
	Float tmp4 = this->__framePeriod;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1341)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1341)
	this->__nextRender = tmp5;
	HX_STACK_LINE(1342)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1342)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

bool Stage_obj::get_isOpenGL( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_isOpenGL",0x993c5f62,"openfl._legacy.display.Stage.get_isOpenGL","openfl/_legacy/display/Stage.hx",1347,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1349)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1349)
	bool tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_is_opengl(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1349)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_isOpenGL,return )

::openfl::_legacy::display::StageQuality Stage_obj::get_quality( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_quality",0xd07da976,"openfl._legacy.display.Stage.get_quality","openfl/_legacy/display/Stage.hx",1354,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1356)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1356)
	int tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_quality(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1356)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1357)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1357)
	::openfl::_legacy::display::StageQuality tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::StageQuality >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1357)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_quality,return )

::openfl::_legacy::display::StageQuality Stage_obj::set_quality( ::openfl::_legacy::display::StageQuality value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_quality",0xdaeab082,"openfl._legacy.display.Stage.set_quality","openfl/_legacy/display/Stage.hx",1362,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1364)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1364)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_quality(tmp,value->__Index());
	HX_STACK_LINE(1365)
	::openfl::_legacy::display::StageQuality tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1365)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_quality,return )

::openfl::_legacy::display::StageScaleMode Stage_obj::get_scaleMode( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_scaleMode",0x63415b84,"openfl._legacy.display.Stage.get_scaleMode","openfl/_legacy/display/Stage.hx",1370,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1372)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1372)
	int tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_scale_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1372)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1373)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1373)
	::openfl::_legacy::display::StageScaleMode tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::display::StageScaleMode >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1373)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_scaleMode,return )

::openfl::_legacy::display::StageScaleMode Stage_obj::set_scaleMode( ::openfl::_legacy::display::StageScaleMode value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_scaleMode",0xa8473d90,"openfl._legacy.display.Stage.set_scaleMode","openfl/_legacy/display/Stage.hx",1378,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1380)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1380)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_scale_mode(tmp,value->__Index());
	HX_STACK_LINE(1381)
	::openfl::_legacy::display::StageScaleMode tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1381)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_scaleMode,return )

::openfl::_legacy::geom::Rectangle Stage_obj::get_softKeyboardRect( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_softKeyboardRect",0xfbefc1de,"openfl._legacy.display.Stage.get_softKeyboardRect","openfl/_legacy/display/Stage.hx",1386,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1388)
	::openfl::_legacy::geom::Rectangle tmp = this->__softKeyboardRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1388)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1388)
	if ((tmp1)){
		HX_STACK_LINE(1390)
		::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1390)
		this->__softKeyboardRect = tmp2;
	}
	HX_STACK_LINE(1414)
	::openfl::_legacy::geom::Rectangle tmp2 = this->__softKeyboardRect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1414)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_softKeyboardRect,return )

::openfl::_legacy::display::Stage Stage_obj::get_stage( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_stage",0x3703a3b5,"openfl._legacy.display.Stage.get_stage","openfl/_legacy/display/Stage.hx",1421,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1421)
	return hx::ObjectPtr<OBJ_>(this);
}


bool Stage_obj::get_stageFocusRect( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_stageFocusRect",0x749c42a7,"openfl._legacy.display.Stage.get_stageFocusRect","openfl/_legacy/display/Stage.hx",1426,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1426)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1426)
	bool tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_focus_rect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1426)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageFocusRect,return )

bool Stage_obj::set_stageFocusRect( bool value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_stageFocusRect",0x514b751b,"openfl._legacy.display.Stage.set_stageFocusRect","openfl/_legacy/display/Stage.hx",1427,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1429)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1429)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1429)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_focus_rect(tmp,tmp1);
	HX_STACK_LINE(1430)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1430)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_stageFocusRect,return )

bool Stage_obj::get_autos3d( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_autos3d",0x29c644ac,"openfl._legacy.display.Stage.get_autos3d","openfl/_legacy/display/Stage.hx",1435,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1435)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1435)
	bool tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_autos3d(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1435)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_autos3d,return )

bool Stage_obj::set_autos3d( bool value){
	HX_STACK_FRAME("openfl._legacy.display.Stage","set_autos3d",0x34334bb8,"openfl._legacy.display.Stage.set_autos3d","openfl/_legacy/display/Stage.hx",1436,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1438)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1438)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1438)
	::openfl::_legacy::display::Stage_obj::lime_stage_set_autos3d(tmp,tmp1);
	HX_STACK_LINE(1439)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1439)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_autos3d,return )

int Stage_obj::get_stageHeight( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_stageHeight",0xa36d557c,"openfl._legacy.display.Stage.get_stageHeight","openfl/_legacy/display/Stage.hx",1444,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1446)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1446)
	Dynamic tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_stage_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1446)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1446)
	tmp2 = hx::TCast< ::Float >::cast(tmp1);
	HX_STACK_LINE(1446)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1446)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageHeight,return )

int Stage_obj::get_stageWidth( ){
	HX_STACK_FRAME("openfl._legacy.display.Stage","get_stageWidth",0x6615f211,"openfl._legacy.display.Stage.get_stageWidth","openfl/_legacy/display/Stage.hx",1451,0x8b30a073)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1453)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1453)
	Dynamic tmp1 = ::openfl::_legacy::display::Stage_obj::lime_stage_get_stage_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1453)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1453)
	tmp2 = hx::TCast< ::Float >::cast(tmp1);
	HX_STACK_LINE(1453)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1453)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageWidth,return )

Float Stage_obj::__earlyWakeup;

bool Stage_obj::__exiting;

int Stage_obj::OrientationPortrait;

int Stage_obj::OrientationPortraitUpsideDown;

int Stage_obj::OrientationLandscapeRight;

int Stage_obj::OrientationLandscapeLeft;

int Stage_obj::OrientationFaceUp;

int Stage_obj::OrientationFaceDown;

int Stage_obj::OrientationPortraitAny;

int Stage_obj::OrientationLandscapeAny;

int Stage_obj::OrientationAny;

int Stage_obj::efLeftDown;

int Stage_obj::efShiftDown;

int Stage_obj::efCtrlDown;

int Stage_obj::efAltDown;

int Stage_obj::efCommandDown;

int Stage_obj::efLocationRight;

int Stage_obj::efNoNativeClick;

Array< ::String > Stage_obj::sClickEvents;

Array< ::String > Stage_obj::sDownEvents;

Array< ::String > Stage_obj::sUpEvents;

Array< ::String > Stage_obj::__mouseChanges;

Array< ::String > Stage_obj::__touchChanges;

HX_BEGIN_DEFAULT_FUNC(__default_getOrientation,Stage_obj)
int run(){
	HX_STACK_FRAME("openfl._legacy.display.Stage","getOrientation",0x580aa13a,"openfl._legacy.display.Stage.getOrientation","openfl/_legacy/display/Stage.hx",163,0x8b30a073)
	HX_STACK_LINE(165)
	int tmp = ::openfl::_legacy::display::Stage_obj::lime_stage_get_orientation();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::getOrientation;

HX_BEGIN_DEFAULT_FUNC(__default_getNormalOrientation,Stage_obj)
int run(){
	HX_STACK_FRAME("openfl._legacy.display.Stage","getNormalOrientation",0x042365d3,"openfl._legacy.display.Stage.getNormalOrientation","openfl/_legacy/display/Stage.hx",170,0x8b30a073)
	HX_STACK_LINE(172)
	int tmp = ::openfl::_legacy::display::Stage_obj::lime_stage_get_normal_orientation();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::getNormalOrientation;

Void Stage_obj::setFixedOrientation( int orientation){
{
		HX_STACK_FRAME("openfl._legacy.display.Stage","setFixedOrientation",0x524e1a1e,"openfl._legacy.display.Stage.setFixedOrientation","openfl/_legacy/display/Stage.hx",206,0x8b30a073)
		HX_STACK_ARG(orientation,"orientation")
		HX_STACK_LINE(209)
		int tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::openfl::_legacy::display::Stage_obj::lime_stage_set_fixed_orientation(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setFixedOrientation,(void))

HX_BEGIN_DEFAULT_FUNC(__default_shouldRotateInterface,Stage_obj)
bool run(int orientation){
	HX_STACK_FRAME("openfl._legacy.display.Stage","shouldRotateInterface",0x83b6858b,"openfl._legacy.display.Stage.shouldRotateInterface","openfl/_legacy/display/Stage.hx",214,0x8b30a073)
	HX_STACK_ARG(orientation,"orientation")
	HX_STACK_LINE(216)
	int tmp = orientation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	int tmp1 = ::openfl::_legacy::display::Stage_obj::OrientationPortrait;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	return tmp2;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::shouldRotateInterface;

Dynamic Stage_obj::lime_set_stage_handler;

Dynamic Stage_obj::lime_render_stage;

Dynamic Stage_obj::lime_stage_get_autos3d;

Dynamic Stage_obj::lime_stage_set_autos3d;

Dynamic Stage_obj::lime_stage_get_focus_id;

Dynamic Stage_obj::lime_stage_set_focus;

Dynamic Stage_obj::lime_stage_get_focus_rect;

Dynamic Stage_obj::lime_stage_set_focus_rect;

Dynamic Stage_obj::lime_stage_is_opengl;

Dynamic Stage_obj::lime_stage_get_stage_width;

Dynamic Stage_obj::lime_stage_get_stage_height;

Dynamic Stage_obj::lime_stage_get_dpi_scale;

Dynamic Stage_obj::lime_stage_get_scale_mode;

Dynamic Stage_obj::lime_stage_set_scale_mode;

Dynamic Stage_obj::lime_stage_get_align;

Dynamic Stage_obj::lime_stage_set_align;

Dynamic Stage_obj::lime_stage_get_quality;

Dynamic Stage_obj::lime_stage_set_quality;

Dynamic Stage_obj::lime_stage_get_display_state;

Dynamic Stage_obj::lime_stage_set_display_state;

Dynamic Stage_obj::lime_stage_set_next_wake;

Dynamic Stage_obj::lime_stage_request_render;

Dynamic Stage_obj::lime_stage_resize_window;

Dynamic Stage_obj::lime_stage_set_resolution;

Dynamic Stage_obj::lime_stage_set_screenmode;

Dynamic Stage_obj::lime_stage_set_fullscreen;

Dynamic Stage_obj::lime_stage_show_cursor;

Dynamic Stage_obj::lime_stage_set_fixed_orientation;

Dynamic Stage_obj::lime_stage_get_orientation;

Dynamic Stage_obj::lime_stage_get_normal_orientation;


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(dpiScale,"dpiScale");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_MARK_MEMBER_NAME(onKey,"onKey");
	HX_MARK_MEMBER_NAME(onQuit,"onQuit");
	HX_MARK_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_MARK_MEMBER_NAME(renderRequest,"renderRequest");
	HX_MARK_MEMBER_NAME(softKeyboardRect,"softKeyboardRect");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(__joyAxisData,"__joyAxisData");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focusOverObjects,"__focusOverObjects");
	HX_MARK_MEMBER_NAME(__framePeriod,"__framePeriod");
	HX_MARK_MEMBER_NAME(__invalid,"__invalid");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__lastDown,"__lastDown");
	HX_MARK_MEMBER_NAME(__lastRender,"__lastRender");
	HX_MARK_MEMBER_NAME(__mouseOverObjects,"__mouseOverObjects");
	HX_MARK_MEMBER_NAME(__nextRender,"__nextRender");
	HX_MARK_MEMBER_NAME(__softKeyboardRect,"__softKeyboardRect");
	HX_MARK_MEMBER_NAME(__touchInfo,"__touchInfo");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(dpiScale,"dpiScale");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_VISIT_MEMBER_NAME(onKey,"onKey");
	HX_VISIT_MEMBER_NAME(onQuit,"onQuit");
	HX_VISIT_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_VISIT_MEMBER_NAME(renderRequest,"renderRequest");
	HX_VISIT_MEMBER_NAME(softKeyboardRect,"softKeyboardRect");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(__joyAxisData,"__joyAxisData");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focusOverObjects,"__focusOverObjects");
	HX_VISIT_MEMBER_NAME(__framePeriod,"__framePeriod");
	HX_VISIT_MEMBER_NAME(__invalid,"__invalid");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__lastDown,"__lastDown");
	HX_VISIT_MEMBER_NAME(__lastRender,"__lastRender");
	HX_VISIT_MEMBER_NAME(__mouseOverObjects,"__mouseOverObjects");
	HX_VISIT_MEMBER_NAME(__nextRender,"__nextRender");
	HX_VISIT_MEMBER_NAME(__softKeyboardRect,"__softKeyboardRect");
	HX_VISIT_MEMBER_NAME(__touchInfo,"__touchInfo");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return get_align(); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return get_focus(); }
		if (HX_FIELD_EQ(inName,"onKey") ) { return onKey; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { return onQuit; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"autos3d") ) { if (inCallProp == hx::paccAlways) return get_autos3d(); }
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return get_quality(); }
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dpiScale") ) { return inCallProp == hx::paccAlways ? get_dpiScale() : dpiScale; }
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { return inCallProp == hx::paccAlways ? get_isOpenGL() : isOpenGL; }
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__render") ) { return __render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp == hx::paccAlways) return get_scaleMode(); }
		if (HX_FIELD_EQ(inName,"__invalid") ) { return __invalid; }
		if (HX_FIELD_EQ(inName,"__onFocus") ) { return __onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onSysWM") ) { return __onSysWM_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_align") ) { return get_align_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return inCallProp == hx::paccAlways ? get_stageWidth() : stageWidth; }
		if (HX_FIELD_EQ(inName,"__lastDown") ) { return __lastDown; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__onChange") ) { return __onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"__onResize") ) { return __onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return inCallProp == hx::paccAlways ? get_stageHeight() : stageHeight; }
		if (HX_FIELD_EQ(inName,"__touchInfo") ) { return __touchInfo; }
		if (HX_FIELD_EQ(inName,"__setActive") ) { return __setActive_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_quality") ) { return get_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autos3d") ) { return get_autos3d_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autos3d") ) { return set_autos3d_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__lastRender") ) { return __lastRender; }
		if (HX_FIELD_EQ(inName,"__nextRender") ) { return __nextRender; }
		if (HX_FIELD_EQ(inName,"__onJoystick") ) { return __onJoystick_dyn(); }
		if (HX_FIELD_EQ(inName,"__pollTimers") ) { return __pollTimers_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpiScale") ) { return get_dpiScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isOpenGL") ) { return get_isOpenGL_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderRequest") ) { return renderRequest; }
		if (HX_FIELD_EQ(inName,"__joyAxisData") ) { return __joyAxisData; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__framePeriod") ) { return __framePeriod; }
		if (HX_FIELD_EQ(inName,"setResolution") ) { return setResolution_dyn(); }
		if (HX_FIELD_EQ(inName,"setScreenMode") ) { return setScreenMode_dyn(); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		if (HX_FIELD_EQ(inName,"__checkInOuts") ) { return __checkInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"__checkRender") ) { return __checkRender_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { return get_scaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { if (inCallProp == hx::paccAlways) return get_stageFocusRect(); }
		if (HX_FIELD_EQ(inName,"__nextFrameDue") ) { return __nextFrameDue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageWidth") ) { return get_stageWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		if (HX_FIELD_EQ(inName,"get_stageHeight") ) { return get_stageHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"softKeyboardRect") ) { return inCallProp == hx::paccAlways ? get_softKeyboardRect() : softKeyboardRect; }
		if (HX_FIELD_EQ(inName,"__updateNextWake") ) { return __updateNextWake_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__onRenderContext") ) { return __onRenderContext_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__focusOverObjects") ) { return __focusOverObjects; }
		if (HX_FIELD_EQ(inName,"__mouseOverObjects") ) { return __mouseOverObjects; }
		if (HX_FIELD_EQ(inName,"__softKeyboardRect") ) { return __softKeyboardRect; }
		if (HX_FIELD_EQ(inName,"__checkFocusInOuts") ) { return __checkFocusInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageFocusRect") ) { return get_stageFocusRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stageFocusRect") ) { return set_stageFocusRect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__processStageEvent") ) { return __processStageEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { return pauseWhenDeactivated; }
		if (HX_FIELD_EQ(inName,"get_softKeyboardRect") ) { return get_softKeyboardRect_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__doProcessStageEvent") ) { return __doProcessStageEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__exiting") ) { outValue = __exiting; return true;  }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { outValue = efAltDown; return true;  }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { outValue = sUpEvents; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { outValue = efLeftDown; return true;  }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { outValue = efCtrlDown; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { outValue = efShiftDown; return true;  }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { outValue = sDownEvents; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { outValue = sClickEvents; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__earlyWakeup") ) { outValue = __earlyWakeup; return true;  }
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { outValue = efCommandDown; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OrientationAny") ) { outValue = OrientationAny; return true;  }
		if (HX_FIELD_EQ(inName,"__mouseChanges") ) { outValue = __mouseChanges; return true;  }
		if (HX_FIELD_EQ(inName,"__touchChanges") ) { outValue = __touchChanges; return true;  }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { outValue = getOrientation; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { outValue = efLocationRight; return true;  }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { outValue = efNoNativeClick; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OrientationFaceUp") ) { outValue = OrientationFaceUp; return true;  }
		if (HX_FIELD_EQ(inName,"lime_render_stage") ) { outValue = lime_render_stage; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { outValue = OrientationPortrait; return true;  }
		if (HX_FIELD_EQ(inName,"OrientationFaceDown") ) { outValue = OrientationFaceDown; return true;  }
		if (HX_FIELD_EQ(inName,"setFixedOrientation") ) { outValue = setFixedOrientation_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getNormalOrientation") ) { outValue = getNormalOrientation; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_focus") ) { outValue = lime_stage_set_focus; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_is_opengl") ) { outValue = lime_stage_is_opengl; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_align") ) { outValue = lime_stage_get_align; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_align") ) { outValue = lime_stage_set_align; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { outValue = shouldRotateInterface; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"OrientationPortraitAny") ) { outValue = OrientationPortraitAny; return true;  }
		if (HX_FIELD_EQ(inName,"lime_set_stage_handler") ) { outValue = lime_set_stage_handler; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_autos3d") ) { outValue = lime_stage_get_autos3d; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_autos3d") ) { outValue = lime_stage_set_autos3d; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_quality") ) { outValue = lime_stage_get_quality; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_quality") ) { outValue = lime_stage_set_quality; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_show_cursor") ) { outValue = lime_stage_show_cursor; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeAny") ) { outValue = OrientationLandscapeAny; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_focus_id") ) { outValue = lime_stage_get_focus_id; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeLeft") ) { outValue = OrientationLandscapeLeft; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_dpi_scale") ) { outValue = lime_stage_get_dpi_scale; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_next_wake") ) { outValue = lime_stage_set_next_wake; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_resize_window") ) { outValue = lime_stage_resize_window; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeRight") ) { outValue = OrientationLandscapeRight; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_focus_rect") ) { outValue = lime_stage_get_focus_rect; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_focus_rect") ) { outValue = lime_stage_set_focus_rect; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_scale_mode") ) { outValue = lime_stage_get_scale_mode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_scale_mode") ) { outValue = lime_stage_set_scale_mode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_request_render") ) { outValue = lime_stage_request_render; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_resolution") ) { outValue = lime_stage_set_resolution; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_screenmode") ) { outValue = lime_stage_set_screenmode; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_fullscreen") ) { outValue = lime_stage_set_fullscreen; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_stage_get_stage_width") ) { outValue = lime_stage_get_stage_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_get_orientation") ) { outValue = lime_stage_get_orientation; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_stage_get_stage_height") ) { outValue = lime_stage_get_stage_height; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_stage_get_display_state") ) { outValue = lime_stage_get_display_state; return true;  }
		if (HX_FIELD_EQ(inName,"lime_stage_set_display_state") ) { outValue = lime_stage_set_display_state; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"OrientationPortraitUpsideDown") ) { outValue = OrientationPortraitUpsideDown; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_stage_set_fixed_orientation") ) { outValue = lime_stage_set_fixed_orientation; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_stage_get_normal_orientation") ) { outValue = lime_stage_get_normal_orientation; return true;  }
	}
	return false;
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return set_align(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return set_focus(inValue); }
		if (HX_FIELD_EQ(inName,"onKey") ) { onKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { onQuit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"autos3d") ) { if (inCallProp == hx::paccAlways) return set_autos3d(inValue); }
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return set_quality(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dpiScale") ) { dpiScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { isOpenGL=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue);frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp == hx::paccAlways) return set_scaleMode(inValue); }
		if (HX_FIELD_EQ(inName,"__invalid") ) { __invalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastDown") ) { __lastDown=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__touchInfo") ) { __touchInfo=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__lastRender") ) { __lastRender=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__nextRender") ) { __nextRender=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderRequest") ) { renderRequest=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__joyAxisData") ) { __joyAxisData=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__framePeriod") ) { __framePeriod=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { if (inCallProp == hx::paccAlways) return set_stageFocusRect(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"softKeyboardRect") ) { softKeyboardRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__focusOverObjects") ) { __focusOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOverObjects") ) { __mouseOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__softKeyboardRect") ) { __softKeyboardRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { pauseWhenDeactivated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__exiting") ) { __exiting=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { sUpEvents=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { efLeftDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { sDownEvents=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { sClickEvents=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__earlyWakeup") ) { __earlyWakeup=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { efCommandDown=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"OrientationAny") ) { OrientationAny=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"__mouseChanges") ) { __mouseChanges=ioValue.Cast< Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"__touchChanges") ) { __touchChanges=ioValue.Cast< Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { getOrientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { efLocationRight=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { efNoNativeClick=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"OrientationFaceUp") ) { OrientationFaceUp=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_render_stage") ) { lime_render_stage=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"OrientationPortrait") ) { OrientationPortrait=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"OrientationFaceDown") ) { OrientationFaceDown=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getNormalOrientation") ) { getNormalOrientation=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_focus") ) { lime_stage_set_focus=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_is_opengl") ) { lime_stage_is_opengl=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_align") ) { lime_stage_get_align=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_align") ) { lime_stage_set_align=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { shouldRotateInterface=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"OrientationPortraitAny") ) { OrientationPortraitAny=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_set_stage_handler") ) { lime_set_stage_handler=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_autos3d") ) { lime_stage_get_autos3d=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_autos3d") ) { lime_stage_set_autos3d=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_quality") ) { lime_stage_get_quality=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_quality") ) { lime_stage_set_quality=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_show_cursor") ) { lime_stage_show_cursor=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeAny") ) { OrientationLandscapeAny=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_focus_id") ) { lime_stage_get_focus_id=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeLeft") ) { OrientationLandscapeLeft=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_dpi_scale") ) { lime_stage_get_dpi_scale=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_next_wake") ) { lime_stage_set_next_wake=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_resize_window") ) { lime_stage_resize_window=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"OrientationLandscapeRight") ) { OrientationLandscapeRight=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_focus_rect") ) { lime_stage_get_focus_rect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_focus_rect") ) { lime_stage_set_focus_rect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_scale_mode") ) { lime_stage_get_scale_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_scale_mode") ) { lime_stage_set_scale_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_request_render") ) { lime_stage_request_render=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_resolution") ) { lime_stage_set_resolution=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_screenmode") ) { lime_stage_set_screenmode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_fullscreen") ) { lime_stage_set_fullscreen=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_stage_get_stage_width") ) { lime_stage_get_stage_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_get_orientation") ) { lime_stage_get_orientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_stage_get_stage_height") ) { lime_stage_get_stage_height=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_stage_get_display_state") ) { lime_stage_get_display_state=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_stage_set_display_state") ) { lime_stage_set_display_state=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"OrientationPortraitUpsideDown") ) { OrientationPortraitUpsideDown=ioValue.Cast< int >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_stage_set_fixed_orientation") ) { lime_stage_set_fixed_orientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_stage_get_normal_orientation") ) { lime_stage_get_normal_orientation=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"));
	outFields->push(HX_HCSTRING("autos3d","\xf5","\x9f","\x94","\x9d"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79"));
	outFields->push(HX_HCSTRING("pauseWhenDeactivated","\xc0","\x1e","\xb2","\x2d"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("softKeyboardRect","\x75","\x35","\x3a","\xec"));
	outFields->push(HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"));
	outFields->push(HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"));
	outFields->push(HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"));
	outFields->push(HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"));
	outFields->push(HX_HCSTRING("__joyAxisData","\x7f","\x04","\x9e","\x1c"));
	outFields->push(HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"));
	outFields->push(HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"));
	outFields->push(HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__focusOverObjects","\x08","\x3c","\x26","\x7d"));
	outFields->push(HX_HCSTRING("__framePeriod","\xee","\x6d","\xdb","\x61"));
	outFields->push(HX_HCSTRING("__invalid","\xd7","\x2b","\x96","\xbc"));
	outFields->push(HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"));
	outFields->push(HX_HCSTRING("__lastDown","\xf8","\x84","\xef","\x78"));
	outFields->push(HX_HCSTRING("__lastRender","\x6c","\xc9","\x97","\x08"));
	outFields->push(HX_HCSTRING("__mouseOverObjects","\xdb","\x3e","\xae","\x7b"));
	outFields->push(HX_HCSTRING("__nextRender","\xc9","\x97","\xee","\xf2"));
	outFields->push(HX_HCSTRING("__softKeyboardRect","\x95","\xc8","\xca","\x57"));
	outFields->push(HX_HCSTRING("__touchInfo","\xad","\x10","\x54","\x39"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b")},
	{hx::fsBool,(int)offsetof(Stage_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(Stage_obj,dpiScale),HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90")},
	{hx::fsFloat,(int)offsetof(Stage_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsBool,(int)offsetof(Stage_obj,isOpenGL),HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,onKey),HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,onQuit),HX_HCSTRING("onQuit","\x8e","\x48","\x94","\xed")},
	{hx::fsBool,(int)offsetof(Stage_obj,pauseWhenDeactivated),HX_HCSTRING("pauseWhenDeactivated","\xc0","\x1e","\xb2","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,renderRequest),HX_HCSTRING("renderRequest","\x99","\x52","\x72","\x40")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Stage_obj,softKeyboardRect),HX_HCSTRING("softKeyboardRect","\x75","\x35","\x3a","\xec")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageHeight),HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageWidth),HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Stage_obj,__joyAxisData),HX_HCSTRING("__joyAxisData","\x7f","\x04","\x9e","\x1c")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__focusOverObjects),HX_HCSTRING("__focusOverObjects","\x08","\x3c","\x26","\x7d")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__framePeriod),HX_HCSTRING("__framePeriod","\xee","\x6d","\xdb","\x61")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalid),HX_HCSTRING("__invalid","\xd7","\x2b","\x96","\xbc")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__lastDown),HX_HCSTRING("__lastDown","\xf8","\x84","\xef","\x78")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__lastRender),HX_HCSTRING("__lastRender","\x6c","\xc9","\x97","\x08")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__mouseOverObjects),HX_HCSTRING("__mouseOverObjects","\xdb","\x3e","\xae","\x7b")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__nextRender),HX_HCSTRING("__nextRender","\xc9","\x97","\xee","\xf2")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__softKeyboardRect),HX_HCSTRING("__softKeyboardRect","\x95","\xc8","\xca","\x57")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Stage_obj,__touchInfo),HX_HCSTRING("__touchInfo","\xad","\x10","\x54","\x39")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Stage_obj::__earlyWakeup,HX_HCSTRING("__earlyWakeup","\x62","\x8d","\xcf","\x9e")},
	{hx::fsBool,(void *) &Stage_obj::__exiting,HX_HCSTRING("__exiting","\x64","\x2d","\x29","\xa6")},
	{hx::fsInt,(void *) &Stage_obj::OrientationPortrait,HX_HCSTRING("OrientationPortrait","\x2b","\x94","\x80","\xf0")},
	{hx::fsInt,(void *) &Stage_obj::OrientationPortraitUpsideDown,HX_HCSTRING("OrientationPortraitUpsideDown","\xff","\x1e","\x9c","\xfe")},
	{hx::fsInt,(void *) &Stage_obj::OrientationLandscapeRight,HX_HCSTRING("OrientationLandscapeRight","\x71","\xbc","\x02","\x9a")},
	{hx::fsInt,(void *) &Stage_obj::OrientationLandscapeLeft,HX_HCSTRING("OrientationLandscapeLeft","\x12","\x41","\xe3","\x43")},
	{hx::fsInt,(void *) &Stage_obj::OrientationFaceUp,HX_HCSTRING("OrientationFaceUp","\x28","\x3f","\x72","\x08")},
	{hx::fsInt,(void *) &Stage_obj::OrientationFaceDown,HX_HCSTRING("OrientationFaceDown","\x6f","\x5e","\xa1","\xad")},
	{hx::fsInt,(void *) &Stage_obj::OrientationPortraitAny,HX_HCSTRING("OrientationPortraitAny","\x81","\xcb","\xb1","\x4f")},
	{hx::fsInt,(void *) &Stage_obj::OrientationLandscapeAny,HX_HCSTRING("OrientationLandscapeAny","\x41","\xec","\x09","\x4c")},
	{hx::fsInt,(void *) &Stage_obj::OrientationAny,HX_HCSTRING("OrientationAny","\x1c","\x7a","\x8d","\xd9")},
	{hx::fsInt,(void *) &Stage_obj::efLeftDown,HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c")},
	{hx::fsInt,(void *) &Stage_obj::efShiftDown,HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4")},
	{hx::fsInt,(void *) &Stage_obj::efCtrlDown,HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa")},
	{hx::fsInt,(void *) &Stage_obj::efAltDown,HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8")},
	{hx::fsInt,(void *) &Stage_obj::efCommandDown,HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b")},
	{hx::fsInt,(void *) &Stage_obj::efLocationRight,HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc")},
	{hx::fsInt,(void *) &Stage_obj::efNoNativeClick,HX_HCSTRING("efNoNativeClick","\x4f","\x9b","\x88","\xae")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::sClickEvents,HX_HCSTRING("sClickEvents","\xce","\x7b","\x9c","\x32")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::sDownEvents,HX_HCSTRING("sDownEvents","\x6e","\x63","\x09","\xae")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::sUpEvents,HX_HCSTRING("sUpEvents","\x67","\xc7","\x94","\xbc")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::__mouseChanges,HX_HCSTRING("__mouseChanges","\x7e","\x84","\x32","\xcf")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::__touchChanges,HX_HCSTRING("__touchChanges","\x24","\x4a","\xef","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::getOrientation,HX_HCSTRING("getOrientation","\xda","\x41","\x9d","\x85")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::getNormalOrientation,HX_HCSTRING("getNormalOrientation","\x73","\x3e","\xd8","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::shouldRotateInterface,HX_HCSTRING("shouldRotateInterface","\xeb","\x38","\x3f","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_set_stage_handler,HX_HCSTRING("lime_set_stage_handler","\x82","\x6a","\x8a","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_render_stage,HX_HCSTRING("lime_render_stage","\x7f","\x34","\x45","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_autos3d,HX_HCSTRING("lime_stage_get_autos3d","\xe1","\x62","\x65","\x85")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_autos3d,HX_HCSTRING("lime_stage_set_autos3d","\xed","\x69","\xd2","\x8f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_focus_id,HX_HCSTRING("lime_stage_get_focus_id","\xb6","\x54","\x44","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_focus,HX_HCSTRING("lime_stage_set_focus","\xd0","\x3b","\xde","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_focus_rect,HX_HCSTRING("lime_stage_get_focus_rect","\xbf","\x72","\x7f","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_focus_rect,HX_HCSTRING("lime_stage_set_focus_rect","\x33","\x5b","\x9f","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_is_opengl,HX_HCSTRING("lime_stage_is_opengl","\xf9","\x5e","\x13","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_stage_width,HX_HCSTRING("lime_stage_get_stage_width","\x71","\xb3","\x99","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_stage_height,HX_HCSTRING("lime_stage_get_stage_height","\x1c","\xc8","\x32","\x09")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_dpi_scale,HX_HCSTRING("lime_stage_get_dpi_scale","\xd4","\x12","\x1b","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_scale_mode,HX_HCSTRING("lime_stage_get_scale_mode","\x0c","\x05","\x0b","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_scale_mode,HX_HCSTRING("lime_stage_set_scale_mode","\x80","\xed","\x2a","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_align,HX_HCSTRING("lime_stage_get_align","\xb1","\x46","\x95","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_align,HX_HCSTRING("lime_stage_set_align","\xbd","\x32","\xe6","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_quality,HX_HCSTRING("lime_stage_get_quality","\xab","\xc7","\x1c","\x2c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_quality,HX_HCSTRING("lime_stage_set_quality","\xb7","\xce","\x89","\x36")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_display_state,HX_HCSTRING("lime_stage_get_display_state","\x00","\xc1","\x58","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_display_state,HX_HCSTRING("lime_stage_set_display_state","\x0c","\x99","\xc6","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_next_wake,HX_HCSTRING("lime_stage_set_next_wake","\x28","\x5a","\xd9","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_request_render,HX_HCSTRING("lime_stage_request_render","\xd1","\x05","\x34","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_resize_window,HX_HCSTRING("lime_stage_resize_window","\x30","\xb4","\xfe","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_resolution,HX_HCSTRING("lime_stage_set_resolution","\x34","\xf6","\xfb","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_screenmode,HX_HCSTRING("lime_stage_set_screenmode","\xd7","\xf5","\x70","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_fullscreen,HX_HCSTRING("lime_stage_set_fullscreen","\x43","\xfb","\x66","\xcb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_show_cursor,HX_HCSTRING("lime_stage_show_cursor","\xed","\x77","\x80","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_set_fixed_orientation,HX_HCSTRING("lime_stage_set_fixed_orientation","\x3d","\xe4","\x9f","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_orientation,HX_HCSTRING("lime_stage_get_orientation","\xbc","\x97","\xe9","\xac")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::lime_stage_get_normal_orientation,HX_HCSTRING("lime_stage_get_normal_orientation","\x0c","\xba","\xe3","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79"),
	HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32"),
	HX_HCSTRING("onQuit","\x8e","\x48","\x94","\xed"),
	HX_HCSTRING("pauseWhenDeactivated","\xc0","\x1e","\xb2","\x2d"),
	HX_HCSTRING("renderRequest","\x99","\x52","\x72","\x40"),
	HX_HCSTRING("softKeyboardRect","\x75","\x35","\x3a","\xec"),
	HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"),
	HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"),
	HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"),
	HX_HCSTRING("__joyAxisData","\x7f","\x04","\x9e","\x1c"),
	HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"),
	HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"),
	HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__focusOverObjects","\x08","\x3c","\x26","\x7d"),
	HX_HCSTRING("__framePeriod","\xee","\x6d","\xdb","\x61"),
	HX_HCSTRING("__invalid","\xd7","\x2b","\x96","\xbc"),
	HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"),
	HX_HCSTRING("__lastDown","\xf8","\x84","\xef","\x78"),
	HX_HCSTRING("__lastRender","\x6c","\xc9","\x97","\x08"),
	HX_HCSTRING("__mouseOverObjects","\xdb","\x3e","\xae","\x7b"),
	HX_HCSTRING("__nextRender","\xc9","\x97","\xee","\xf2"),
	HX_HCSTRING("__softKeyboardRect","\x95","\xc8","\xca","\x57"),
	HX_HCSTRING("__touchInfo","\xad","\x10","\x54","\x39"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setResolution","\x6e","\x73","\xc1","\x0e"),
	HX_HCSTRING("setScreenMode","\x31","\x9f","\x0f","\x62"),
	HX_HCSTRING("setFullscreen","\x7d","\x78","\x2c","\x9b"),
	HX_HCSTRING("showCursor","\xb3","\x33","\x5d","\xa8"),
	HX_HCSTRING("__checkFocusInOuts","\xda","\x37","\x9a","\xf9"),
	HX_HCSTRING("__checkInOuts","\x72","\xce","\xa7","\xb0"),
	HX_HCSTRING("__checkRender","\x1e","\x7f","\xb3","\x2f"),
	HX_HCSTRING("__doProcessStageEvent","\xa0","\x20","\xca","\x93"),
	HX_HCSTRING("__processStageEvent","\xab","\xec","\xcf","\x44"),
	HX_HCSTRING("__drag","\x14","\x8f","\x68","\xf1"),
	HX_HCSTRING("__nextFrameDue","\xba","\x90","\xa9","\xe7"),
	HX_HCSTRING("__onChange","\x0f","\xfb","\x57","\x3a"),
	HX_HCSTRING("__onFocus","\x19","\x4f","\x15","\x1c"),
	HX_HCSTRING("__onJoystick","\x1b","\x30","\x3c","\xb2"),
	HX_HCSTRING("__onKey","\xa0","\x76","\xc7","\x9c"),
	HX_HCSTRING("__onMouse","\x66","\x05","\xf1","\x23"),
	HX_HCSTRING("__onRenderContext","\x7a","\xa1","\x43","\x20"),
	HX_HCSTRING("__onResize","\x93","\xc3","\x60","\x8b"),
	HX_HCSTRING("__onSysWM","\xa4","\x05","\xf3","\x9e"),
	HX_HCSTRING("__onTouch","\x00","\x07","\xbf","\x2b"),
	HX_HCSTRING("__pollTimers","\xcd","\x33","\x91","\xcf"),
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	HX_HCSTRING("__setActive","\xe8","\xff","\x19","\xa4"),
	HX_HCSTRING("__startDrag","\x56","\xee","\x8f","\x29"),
	HX_HCSTRING("__stopDrag","\x36","\xe4","\x62","\x38"),
	HX_HCSTRING("__updateNextWake","\x00","\x81","\x28","\x64"),
	HX_HCSTRING("get_align","\x1c","\xb3","\x3a","\x65"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_dpiScale","\xf6","\x5d","\xa7","\x45"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_isOpenGL","\x02","\x98","\x17","\x2f"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("get_scaleMode","\xe4","\xae","\x37","\xed"),
	HX_HCSTRING("set_scaleMode","\xf0","\x90","\x3d","\x32"),
	HX_HCSTRING("get_softKeyboardRect","\x7e","\x9a","\xa4","\x0a"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("get_stageFocusRect","\x47","\xb3","\x1b","\x10"),
	HX_HCSTRING("set_stageFocusRect","\xbb","\xe5","\xca","\xec"),
	HX_HCSTRING("get_autos3d","\x0c","\x00","\x8f","\x23"),
	HX_HCSTRING("set_autos3d","\x18","\x07","\xfc","\x2d"),
	HX_HCSTRING("get_stageHeight","\xdc","\x40","\x27","\x56"),
	HX_HCSTRING("get_stageWidth","\xb1","\x92","\xa8","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage_obj::__earlyWakeup,"__earlyWakeup");
	HX_MARK_MEMBER_NAME(Stage_obj::__exiting,"__exiting");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortraitAny,"OrientationPortraitAny");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeAny,"OrientationLandscapeAny");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationAny,"OrientationAny");
	HX_MARK_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_MARK_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::__mouseChanges,"__mouseChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::__touchChanges,"__touchChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::getOrientation,"getOrientation");
	HX_MARK_MEMBER_NAME(Stage_obj::getNormalOrientation,"getNormalOrientation");
	HX_MARK_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_set_stage_handler,"lime_set_stage_handler");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_render_stage,"lime_render_stage");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_autos3d,"lime_stage_get_autos3d");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_autos3d,"lime_stage_set_autos3d");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_focus_id,"lime_stage_get_focus_id");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_focus,"lime_stage_set_focus");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_focus_rect,"lime_stage_get_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_focus_rect,"lime_stage_set_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_is_opengl,"lime_stage_is_opengl");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_stage_width,"lime_stage_get_stage_width");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_stage_height,"lime_stage_get_stage_height");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_dpi_scale,"lime_stage_get_dpi_scale");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_scale_mode,"lime_stage_get_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_scale_mode,"lime_stage_set_scale_mode");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_align,"lime_stage_get_align");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_align,"lime_stage_set_align");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_quality,"lime_stage_get_quality");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_quality,"lime_stage_set_quality");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_display_state,"lime_stage_get_display_state");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_display_state,"lime_stage_set_display_state");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_next_wake,"lime_stage_set_next_wake");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_request_render,"lime_stage_request_render");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_resize_window,"lime_stage_resize_window");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_resolution,"lime_stage_set_resolution");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_screenmode,"lime_stage_set_screenmode");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_fullscreen,"lime_stage_set_fullscreen");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_show_cursor,"lime_stage_show_cursor");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_set_fixed_orientation,"lime_stage_set_fixed_orientation");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_orientation,"lime_stage_get_orientation");
	HX_MARK_MEMBER_NAME(Stage_obj::lime_stage_get_normal_orientation,"lime_stage_get_normal_orientation");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage_obj::__earlyWakeup,"__earlyWakeup");
	HX_VISIT_MEMBER_NAME(Stage_obj::__exiting,"__exiting");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortraitAny,"OrientationPortraitAny");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeAny,"OrientationLandscapeAny");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationAny,"OrientationAny");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_VISIT_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::__mouseChanges,"__mouseChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::__touchChanges,"__touchChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::getOrientation,"getOrientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::getNormalOrientation,"getNormalOrientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_set_stage_handler,"lime_set_stage_handler");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_render_stage,"lime_render_stage");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_autos3d,"lime_stage_get_autos3d");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_autos3d,"lime_stage_set_autos3d");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_focus_id,"lime_stage_get_focus_id");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_focus,"lime_stage_set_focus");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_focus_rect,"lime_stage_get_focus_rect");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_focus_rect,"lime_stage_set_focus_rect");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_is_opengl,"lime_stage_is_opengl");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_stage_width,"lime_stage_get_stage_width");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_stage_height,"lime_stage_get_stage_height");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_dpi_scale,"lime_stage_get_dpi_scale");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_scale_mode,"lime_stage_get_scale_mode");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_scale_mode,"lime_stage_set_scale_mode");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_align,"lime_stage_get_align");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_align,"lime_stage_set_align");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_quality,"lime_stage_get_quality");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_quality,"lime_stage_set_quality");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_display_state,"lime_stage_get_display_state");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_display_state,"lime_stage_set_display_state");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_next_wake,"lime_stage_set_next_wake");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_request_render,"lime_stage_request_render");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_resize_window,"lime_stage_resize_window");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_resolution,"lime_stage_set_resolution");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_screenmode,"lime_stage_set_screenmode");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_fullscreen,"lime_stage_set_fullscreen");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_show_cursor,"lime_stage_show_cursor");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_set_fixed_orientation,"lime_stage_set_fixed_orientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_orientation,"lime_stage_get_orientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::lime_stage_get_normal_orientation,"lime_stage_get_normal_orientation");
};

#endif

hx::Class Stage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__earlyWakeup","\x62","\x8d","\xcf","\x9e"),
	HX_HCSTRING("__exiting","\x64","\x2d","\x29","\xa6"),
	HX_HCSTRING("OrientationPortrait","\x2b","\x94","\x80","\xf0"),
	HX_HCSTRING("OrientationPortraitUpsideDown","\xff","\x1e","\x9c","\xfe"),
	HX_HCSTRING("OrientationLandscapeRight","\x71","\xbc","\x02","\x9a"),
	HX_HCSTRING("OrientationLandscapeLeft","\x12","\x41","\xe3","\x43"),
	HX_HCSTRING("OrientationFaceUp","\x28","\x3f","\x72","\x08"),
	HX_HCSTRING("OrientationFaceDown","\x6f","\x5e","\xa1","\xad"),
	HX_HCSTRING("OrientationPortraitAny","\x81","\xcb","\xb1","\x4f"),
	HX_HCSTRING("OrientationLandscapeAny","\x41","\xec","\x09","\x4c"),
	HX_HCSTRING("OrientationAny","\x1c","\x7a","\x8d","\xd9"),
	HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c"),
	HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4"),
	HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa"),
	HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8"),
	HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b"),
	HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc"),
	HX_HCSTRING("efNoNativeClick","\x4f","\x9b","\x88","\xae"),
	HX_HCSTRING("sClickEvents","\xce","\x7b","\x9c","\x32"),
	HX_HCSTRING("sDownEvents","\x6e","\x63","\x09","\xae"),
	HX_HCSTRING("sUpEvents","\x67","\xc7","\x94","\xbc"),
	HX_HCSTRING("__mouseChanges","\x7e","\x84","\x32","\xcf"),
	HX_HCSTRING("__touchChanges","\x24","\x4a","\xef","\x17"),
	HX_HCSTRING("getOrientation","\xda","\x41","\x9d","\x85"),
	HX_HCSTRING("getNormalOrientation","\x73","\x3e","\xd8","\x12"),
	HX_HCSTRING("setFixedOrientation","\x7e","\x35","\x51","\xc6"),
	HX_HCSTRING("shouldRotateInterface","\xeb","\x38","\x3f","\x53"),
	HX_HCSTRING("lime_set_stage_handler","\x82","\x6a","\x8a","\xcf"),
	HX_HCSTRING("lime_render_stage","\x7f","\x34","\x45","\xcc"),
	HX_HCSTRING("lime_stage_get_autos3d","\xe1","\x62","\x65","\x85"),
	HX_HCSTRING("lime_stage_set_autos3d","\xed","\x69","\xd2","\x8f"),
	HX_HCSTRING("lime_stage_get_focus_id","\xb6","\x54","\x44","\x00"),
	HX_HCSTRING("lime_stage_set_focus","\xd0","\x3b","\xde","\x12"),
	HX_HCSTRING("lime_stage_get_focus_rect","\xbf","\x72","\x7f","\xdf"),
	HX_HCSTRING("lime_stage_set_focus_rect","\x33","\x5b","\x9f","\xff"),
	HX_HCSTRING("lime_stage_is_opengl","\xf9","\x5e","\x13","\xae"),
	HX_HCSTRING("lime_stage_get_stage_width","\x71","\xb3","\x99","\xd3"),
	HX_HCSTRING("lime_stage_get_stage_height","\x1c","\xc8","\x32","\x09"),
	HX_HCSTRING("lime_stage_get_dpi_scale","\xd4","\x12","\x1b","\xff"),
	HX_HCSTRING("lime_stage_get_scale_mode","\x0c","\x05","\x0b","\x3b"),
	HX_HCSTRING("lime_stage_set_scale_mode","\x80","\xed","\x2a","\x5b"),
	HX_HCSTRING("lime_stage_get_align","\xb1","\x46","\x95","\x4c"),
	HX_HCSTRING("lime_stage_set_align","\xbd","\x32","\xe6","\x2f"),
	HX_HCSTRING("lime_stage_get_quality","\xab","\xc7","\x1c","\x2c"),
	HX_HCSTRING("lime_stage_set_quality","\xb7","\xce","\x89","\x36"),
	HX_HCSTRING("lime_stage_get_display_state","\x00","\xc1","\x58","\x4a"),
	HX_HCSTRING("lime_stage_set_display_state","\x0c","\x99","\xc6","\x6d"),
	HX_HCSTRING("lime_stage_set_next_wake","\x28","\x5a","\xd9","\x6a"),
	HX_HCSTRING("lime_stage_request_render","\xd1","\x05","\x34","\x5b"),
	HX_HCSTRING("lime_stage_resize_window","\x30","\xb4","\xfe","\xe9"),
	HX_HCSTRING("lime_stage_set_resolution","\x34","\xf6","\xfb","\x3e"),
	HX_HCSTRING("lime_stage_set_screenmode","\xd7","\xf5","\x70","\xa7"),
	HX_HCSTRING("lime_stage_set_fullscreen","\x43","\xfb","\x66","\xcb"),
	HX_HCSTRING("lime_stage_show_cursor","\xed","\x77","\x80","\x1e"),
	HX_HCSTRING("lime_stage_set_fixed_orientation","\x3d","\xe4","\x9f","\xa1"),
	HX_HCSTRING("lime_stage_get_orientation","\xbc","\x97","\xe9","\xac"),
	HX_HCSTRING("lime_stage_get_normal_orientation","\x0c","\xba","\xe3","\x9d"),
	::String(null()) };

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Stage","\x0e","\x35","\xcf","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Stage_obj::__boot()
{
	__earlyWakeup= ((Float)0.005);
	__exiting= false;
	OrientationPortrait= (int)1;
	OrientationPortraitUpsideDown= (int)2;
	OrientationLandscapeRight= (int)3;
	OrientationLandscapeLeft= (int)4;
	OrientationFaceUp= (int)5;
	OrientationFaceDown= (int)6;
	OrientationPortraitAny= (int)7;
	OrientationLandscapeAny= (int)8;
	OrientationAny= (int)9;
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
	efLocationRight= (int)16384;
	efNoNativeClick= (int)65536;
	sClickEvents= Array_obj< ::String >::__new().Add(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48")).Add(HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43")).Add(HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b"));
	sDownEvents= Array_obj< ::String >::__new().Add(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee")).Add(HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01")).Add(HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"));
	sUpEvents= Array_obj< ::String >::__new().Add(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0")).Add(HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a")).Add(HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"));
struct _Function_0_1{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",96,0x8b30a073)
		{
			HX_STACK_LINE(96)
			::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(96)
			::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::ROLL_OUT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::ROLL_OVER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			return Array_obj< ::String >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
		}
		return null();
	}
};
	__mouseChanges= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/Stage.hx",97,0x8b30a073)
		{
			HX_STACK_LINE(97)
			::String tmp = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_OUT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			::String tmp1 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_OVER;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			::String tmp2 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_ROLL_OUT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::String tmp3 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_ROLL_OVER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			return Array_obj< ::String >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
		}
		return null();
	}
};
	__touchChanges= _Function_0_2::Block();
	getOrientation = new __default_getOrientation;

	getNormalOrientation = new __default_getNormalOrientation;

	shouldRotateInterface = new __default_shouldRotateInterface;

	lime_set_stage_handler= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_set_stage_handler","\x60","\xf4","\x7d","\x01"),(int)4);
	lime_render_stage= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_render_stage","\x61","\xf7","\x79","\xb6"),(int)1);
	lime_stage_get_autos3d= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_autos3d","\xbf","\xec","\x58","\xb7"),(int)1);
	lime_stage_set_autos3d= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_autos3d","\xcb","\xf3","\xc5","\xc1"),(int)2);
	lime_stage_get_focus_id= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_focus_id","\x18","\x6d","\x69","\x83"),(int)1);
	lime_stage_set_focus= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_focus","\x2e","\xf2","\xf0","\x51"),(int)3);
	lime_stage_get_focus_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_focus_rect","\xa1","\xe7","\x64","\x48"),(int)1);
	lime_stage_set_focus_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_focus_rect","\x15","\xd0","\x84","\x68"),(int)2);
	lime_stage_is_opengl= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_is_opengl","\x57","\x15","\x26","\xed"),(int)1);
	lime_stage_get_stage_width= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_stage_width","\x4f","\x84","\x7a","\x33"),(int)1);
	lime_stage_get_stage_height= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_stage_height","\x7e","\xb9","\x08","\x8e"),(int)1);
	lime_stage_get_dpi_scale= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_dpi_scale","\x32","\x50","\x6b","\x3c"),(int)1);
	lime_stage_get_scale_mode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_scale_mode","\xee","\x79","\xf0","\xa3"),(int)1);
	lime_stage_set_scale_mode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_scale_mode","\x62","\x62","\x10","\xc4"),(int)2);
	lime_stage_get_align= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_align","\x0f","\xfd","\xa7","\x8b"),(int)1);
	lime_stage_set_align= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_align","\x1b","\xe9","\xf8","\x6e"),(int)2);
	lime_stage_get_quality= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_quality","\x89","\x51","\x10","\x5e"),(int)1);
	lime_stage_set_quality= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_quality","\x95","\x58","\x7d","\x68"),(int)2);
	lime_stage_get_display_state= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_display_state","\x5e","\x05","\xb6","\x00"),(int)1);
	lime_stage_set_display_state= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_display_state","\x6a","\xdd","\x23","\x24"),(int)2);
	lime_stage_set_next_wake= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_next_wake","\x86","\x97","\x29","\xa8"),(int)2);
	lime_stage_request_render= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_request_render","\xb3","\x7a","\x19","\xc4"),(int)0);
	lime_stage_resize_window= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_resize_window","\x8e","\xf1","\x4e","\x27"),(int)3);
	lime_stage_set_resolution= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_resolution","\x16","\x6b","\xe1","\xa7"),(int)3);
	lime_stage_set_screenmode= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_screenmode","\xb9","\x6a","\x56","\x10"),(int)5);
	lime_stage_set_fullscreen= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_fullscreen","\x25","\x70","\x4c","\x34"),(int)2);
	lime_stage_show_cursor= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_show_cursor","\xcb","\x01","\x74","\x50"),(int)2);
	lime_stage_set_fixed_orientation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_set_fixed_orientation","\x9b","\xaf","\x99","\xa9"),(int)1);
	lime_stage_get_orientation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_orientation","\x9a","\x68","\xca","\x0c"),(int)0);
	lime_stage_get_normal_orientation= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_stage_get_normal_orientation","\xee","\xe0","\x7b","\x90"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
