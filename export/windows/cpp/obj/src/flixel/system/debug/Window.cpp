#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicCloseButton
#include <flixel/system/debug/_Window/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void Window_obj::__construct(::String Title,::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable)
{
HX_STACK_FRAME("flixel.system.debug.Window","new",0x5aefd38a,"flixel.system.debug.Window.new","flixel/system/debug/Window.hx",98,0xb8dfd4e5)
HX_STACK_THIS(this)
HX_STACK_ARG(Title,"Title")
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Resizable,"Resizable")
HX_STACK_ARG(Bounds,"Bounds")
HX_STACK_ARG(__o_Closable,"Closable")
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool Resizable = __o_Resizable.Default(true);
bool Closable = __o_Closable.Default(false);
{
	HX_STACK_LINE(99)
	super::__construct();
	HX_STACK_LINE(101)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new((int)50,(int)30);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	this->minSize = tmp;
	HX_STACK_LINE(103)
	Float tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	Float tmp2 = ::Math_obj::abs(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	this->_width = tmp3;
	HX_STACK_LINE(104)
	Float tmp4 = Height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	this->_height = tmp6;
	HX_STACK_LINE(105)
	::openfl::_legacy::geom::Rectangle tmp7 = Bounds;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	this->updateBounds(tmp7);
	HX_STACK_LINE(106)
	::openfl::_legacy::geom::Point tmp8 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(106)
	this->_drag = tmp8;
	HX_STACK_LINE(107)
	this->_resizable = Resizable;
	HX_STACK_LINE(109)
	::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)2,true,(int)-16777216,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(109)
	::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(109)
	this->_shadow = tmp10;
	HX_STACK_LINE(110)
	::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)1,true,(int)-580952225,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(110)
	::openfl::_legacy::display::Bitmap tmp12 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(110)
	this->_background = tmp12;
	HX_STACK_LINE(111)
	::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1157627904,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(111)
	::openfl::_legacy::display::Bitmap tmp14 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(111)
	this->_header = tmp14;
	HX_STACK_LINE(112)
	::openfl::_legacy::display::Bitmap tmp15 = this->_background;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(112)
	::openfl::_legacy::display::Bitmap tmp16 = this->_header;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(112)
	Float tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(112)
	tmp15->set_y(tmp17);
	HX_STACK_LINE(114)
	::openfl::_legacy::text::TextField tmp18 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)2,(int)-1,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(114)
	this->_title = tmp18;
	HX_STACK_LINE(115)
	::openfl::_legacy::text::TextField tmp19 = this->_title;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(115)
	tmp19->set_alpha(((Float)0.8));
	HX_STACK_LINE(116)
	::openfl::_legacy::text::TextField tmp20 = this->_title;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(116)
	::String tmp21 = Title;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(116)
	tmp20->set_text(tmp21);
	HX_STACK_LINE(118)
	::openfl::_legacy::display::Bitmap tmp22 = this->_shadow;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(118)
	this->addChild(tmp22);
	HX_STACK_LINE(119)
	::openfl::_legacy::display::Bitmap tmp23 = this->_background;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(119)
	this->addChild(tmp23);
	HX_STACK_LINE(120)
	::openfl::_legacy::display::Bitmap tmp24 = this->_header;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(120)
	this->addChild(tmp24);
	HX_STACK_LINE(121)
	::openfl::_legacy::text::TextField tmp25 = this->_title;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(121)
	this->addChild(tmp25);
	HX_STACK_LINE(123)
	bool tmp26 = (Icon != null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(123)
	if ((tmp26)){
		HX_STACK_LINE(125)
		::openfl::_legacy::display::BitmapData tmp27 = Icon;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(125)
		::flixel::_system::debug::DebuggerUtil_obj::fixSize(tmp27);
		HX_STACK_LINE(126)
		::openfl::_legacy::display::Bitmap tmp28 = ::openfl::_legacy::display::Bitmap_obj::__new(Icon,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(126)
		::openfl::_legacy::display::Bitmap _icon = tmp28;		HX_STACK_VAR(_icon,"_icon");
		HX_STACK_LINE(127)
		_icon->set_x((int)5);
		HX_STACK_LINE(128)
		_icon->set_y((int)2);
		HX_STACK_LINE(129)
		_icon->set_alpha(((Float)0.8));
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tmp29 = this->_title;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(130)
		Float tmp30 = _icon->get_x();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(130)
		Float tmp31 = _icon->get_width();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(130)
		Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(130)
		Float tmp33 = (tmp32 + (int)2);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(130)
		tmp29->set_x(tmp33);
		HX_STACK_LINE(131)
		::openfl::_legacy::display::Bitmap tmp34 = _icon;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(131)
		this->addChild(tmp34);
	}
	HX_STACK_LINE(134)
	bool tmp27 = this->_resizable;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(134)
	if ((tmp27)){
		HX_STACK_LINE(136)
		::flixel::_system::debug::_Window::GraphicWindowHandle tmp28 = ::flixel::_system::debug::_Window::GraphicWindowHandle_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(136)
		::openfl::_legacy::display::BitmapData tmp29 = ::flixel::_system::debug::DebuggerUtil_obj::fixSize(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(136)
		::openfl::_legacy::display::Bitmap tmp30 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp29,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(136)
		this->_handle = tmp30;
		HX_STACK_LINE(137)
		::openfl::_legacy::display::Bitmap tmp31 = this->_handle;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(137)
		this->addChild(tmp31);
	}
	HX_STACK_LINE(140)
	bool tmp28 = Closable;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(140)
	if ((tmp28)){
		HX_STACK_LINE(142)
		::flixel::_system::debug::_Window::GraphicCloseButton tmp29 = ::flixel::_system::debug::_Window::GraphicCloseButton_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(142)
		Dynamic tmp30 = this->close_dyn();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(142)
		::flixel::_system::ui::FlxSystemButton tmp31 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(142)
		this->_closeButton = tmp31;
		HX_STACK_LINE(143)
		::flixel::_system::ui::FlxSystemButton tmp32 = this->_closeButton;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(143)
		tmp32->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(((Float)0.8));
		HX_STACK_LINE(144)
		::flixel::_system::ui::FlxSystemButton tmp33 = this->_closeButton;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(144)
		this->addChild(tmp33);
	}
	else{
		HX_STACK_LINE(148)
		int tmp29 = ::flixel::_system::debug::Window_obj::WINDOW_AMOUNT;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(148)
		this->_id = tmp29;
		HX_STACK_LINE(149)
		this->loadSaveData();
		HX_STACK_LINE(150)
		(::flixel::_system::debug::Window_obj::WINDOW_AMOUNT)++;
	}
	HX_STACK_LINE(153)
	int tmp29 = this->_width;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(153)
	bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(153)
	bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(153)
	bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(153)
	if ((tmp31)){
		HX_STACK_LINE(153)
		int tmp33 = this->_height;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(153)
		int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(153)
		tmp32 = (tmp34 != (int)0);
	}
	else{
		HX_STACK_LINE(153)
		tmp32 = true;
	}
	HX_STACK_LINE(153)
	if ((tmp32)){
		HX_STACK_LINE(155)
		this->updateSize();
	}
	HX_STACK_LINE(157)
	this->bound();
	HX_STACK_LINE(159)
	::String tmp33 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(159)
	Dynamic tmp34 = this->init_dyn();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(159)
	this->addEventListener(tmp33,tmp34,null(),null(),null());
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::String Title,::openfl::_legacy::display::BitmapData Icon,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_Resizable,::openfl::_legacy::geom::Rectangle Bounds,hx::Null< bool >  __o_Closable)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(Title,Icon,__o_Width,__o_Height,__o_Resizable,Bounds,__o_Closable);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Window_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","destroy",0x5fb40d24,"flixel.system.debug.Window.destroy","flixel/system/debug/Window.hx",166,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		this->minSize = null();
		HX_STACK_LINE(168)
		this->maxSize = null();
		HX_STACK_LINE(169)
		this->_bounds = null();
		HX_STACK_LINE(170)
		::openfl::_legacy::display::Bitmap tmp = this->_shadow;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(170)
		if ((tmp1)){
			HX_STACK_LINE(172)
			::openfl::_legacy::display::Bitmap tmp2 = this->_shadow;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			this->removeChild(tmp2);
		}
		HX_STACK_LINE(174)
		this->_shadow = null();
		HX_STACK_LINE(175)
		::openfl::_legacy::display::Bitmap tmp2 = this->_background;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		if ((tmp3)){
			HX_STACK_LINE(177)
			::openfl::_legacy::display::Bitmap tmp4 = this->_background;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			this->removeChild(tmp4);
		}
		HX_STACK_LINE(179)
		this->_background = null();
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Bitmap tmp4 = this->_header;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		if ((tmp5)){
			HX_STACK_LINE(182)
			::openfl::_legacy::display::Bitmap tmp6 = this->_header;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			this->removeChild(tmp6);
		}
		HX_STACK_LINE(184)
		this->_header = null();
		HX_STACK_LINE(185)
		::openfl::_legacy::text::TextField tmp6 = this->_title;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		if ((tmp7)){
			HX_STACK_LINE(187)
			::openfl::_legacy::text::TextField tmp8 = this->_title;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(187)
			this->removeChild(tmp8);
		}
		HX_STACK_LINE(189)
		this->_title = null();
		HX_STACK_LINE(190)
		::openfl::_legacy::display::Bitmap tmp8 = this->_handle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(190)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		if ((tmp9)){
			HX_STACK_LINE(192)
			::openfl::_legacy::display::Bitmap tmp10 = this->_handle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			this->removeChild(tmp10);
		}
		HX_STACK_LINE(194)
		this->_handle = null();
		HX_STACK_LINE(195)
		this->_drag = null();
		HX_STACK_LINE(196)
		::flixel::_system::ui::FlxSystemButton tmp10 = this->_closeButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		::flixel::_system::ui::FlxSystemButton tmp11 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		this->_closeButton = tmp11;
		HX_STACK_LINE(198)
		::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(198)
		::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(198)
		::openfl::_legacy::display::Stage stage = tmp13;		HX_STACK_VAR(stage,"stage");
		HX_STACK_LINE(199)
		::String tmp14 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(199)
		bool tmp15 = stage->hasEventListener(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(199)
		if ((tmp15)){
			HX_STACK_LINE(201)
			::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(201)
			Dynamic tmp17 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(201)
			stage->removeEventListener(tmp16,tmp17,null());
		}
		HX_STACK_LINE(203)
		::String tmp16 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(203)
		bool tmp17 = this->hasEventListener(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(203)
		if ((tmp17)){
			HX_STACK_LINE(205)
			::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(205)
			Dynamic tmp19 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(205)
			this->removeEventListener(tmp18,tmp19,null());
		}
		HX_STACK_LINE(207)
		::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(207)
		bool tmp19 = stage->hasEventListener(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(207)
		if ((tmp19)){
			HX_STACK_LINE(209)
			::String tmp20 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(209)
			Dynamic tmp21 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(209)
			stage->removeEventListener(tmp20,tmp21,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,destroy,(void))

Void Window_obj::resize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.Window","resize",0x4ec62d0a,"flixel.system.debug.Window.resize","flixel/system/debug/Window.hx",220,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(221)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		this->_width = tmp2;
		HX_STACK_LINE(222)
		Float tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		this->_height = tmp5;
		HX_STACK_LINE(223)
		this->updateSize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::reposition( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.system.debug.Window","reposition",0x0fe38572,"flixel.system.debug.Window.reposition","flixel/system/debug/Window.hx",233,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(234)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		this->set_x(tmp);
		HX_STACK_LINE(235)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(235)
		this->set_y(tmp1);
		HX_STACK_LINE(236)
		this->bound();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,reposition,(void))

Void Window_obj::updateBounds( ::openfl::_legacy::geom::Rectangle Bounds){
{
		HX_STACK_FRAME("flixel.system.debug.Window","updateBounds",0x436474f4,"flixel.system.debug.Window.updateBounds","flixel/system/debug/Window.hx",240,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_LINE(241)
		this->_bounds = Bounds;
		HX_STACK_LINE(242)
		::openfl::_legacy::geom::Rectangle tmp = this->_bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		if ((tmp1)){
			HX_STACK_LINE(244)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_bounds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			::openfl::_legacy::geom::Rectangle tmp4 = this->_bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			Float tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			this->maxSize = tmp6;
		}
		else{
			HX_STACK_LINE(248)
			::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new(((Float)1.79e+308),((Float)1.79e+308));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(248)
			this->maxSize = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,updateBounds,(void))

Void Window_obj::setVisible( bool Value){
{
		HX_STACK_FRAME("flixel.system.debug.Window","setVisible",0x6084b306,"flixel.system.debug.Window.setVisible","flixel/system/debug/Window.hx",253,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(254)
		bool tmp = Value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		this->set_visible(tmp);
		HX_STACK_LINE(255)
		::flixel::util::FlxSave tmp1 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		int tmp2 = this->_id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		bool tmp3 = this->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		hx::IndexRef((tmp1->data->__Field(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85"), hx::paccDynamic )).mPtr,tmp2) = tmp3;
		HX_STACK_LINE(256)
		::flixel::util::FlxSave tmp4 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		tmp4->flush(null(),null());
		HX_STACK_LINE(258)
		::flixel::_system::ui::FlxSystemButton tmp5 = this->toggleButton;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		if ((tmp6)){
			HX_STACK_LINE(260)
			::flixel::_system::ui::FlxSystemButton tmp7 = this->toggleButton;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(260)
			bool tmp8 = this->get_visible();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			tmp7->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp9);
		}
		HX_STACK_LINE(262)
		bool tmp7 = this->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		if ((tmp7)){
			HX_STACK_LINE(264)
			::openfl::_legacy::display::DisplayObjectContainer tmp8 = this->get_parent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(264)
			tmp8->addChild(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setVisible,(void))

Void Window_obj::toggleVisible( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","toggleVisible",0x493d16e8,"flixel.system.debug.Window.toggleVisible","flixel/system/debug/Window.hx",269,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		this->setVisible(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,toggleVisible,(void))

Void Window_obj::putOnTop( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","putOnTop",0xbb5abdfd,"flixel.system.debug.Window.putOnTop","flixel/system/debug/Window.hx",274,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(275)
		::openfl::_legacy::display::DisplayObjectContainer tmp = this->get_parent();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		tmp->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,putOnTop,(void))

Void Window_obj::loadSaveData( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","loadSaveData",0x8d0923e3,"flixel.system.debug.Window.loadSaveData","flixel/system/debug/Window.hx",279,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		bool tmp1 = (tmp->data->__Field(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		if ((tmp1)){
			HX_STACK_LINE(282)
			::flixel::util::FlxSave tmp2 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(282)
			int tmp3 = this->_id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(282)
			bool tmp4 = tmp2->data->__Field(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85"), hx::paccDynamic )->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(282)
			this->set_visible(tmp4);
		}
		else{
			HX_STACK_LINE(286)
			this->initSaveData();
			HX_STACK_LINE(287)
			this->loadSaveData();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,loadSaveData,(void))

Void Window_obj::initSaveData( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","initSaveData",0x7856becd,"flixel.system.debug.Window.initSaveData","flixel/system/debug/Window.hx",292,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(293)
		Array< bool > settings = Array_obj< bool >::__new();		HX_STACK_VAR(settings,"settings");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(294)
			while((true)){
				HX_STACK_LINE(294)
				bool tmp = (_g < (int)10);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(294)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(294)
				if ((tmp1)){
					HX_STACK_LINE(294)
					break;
				}
				HX_STACK_LINE(294)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(294)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(296)
				settings[i] = true;
			}
		}
		HX_STACK_LINE(298)
		::flixel::util::FlxSave tmp = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		tmp->data->__FieldRef(HX_HCSTRING("windowSettings","\xf3","\x3c","\x19","\x85")) = settings;
		HX_STACK_LINE(299)
		::flixel::util::FlxSave tmp1 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		tmp1->flush(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,initSaveData,(void))

Void Window_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","update",0xcd50591f,"flixel.system.debug.Window.update","flixel/system/debug/Window.hx",302,0xb8dfd4e5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,update,(void))

Void Window_obj::init( ::openfl::_legacy::events::Event E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","init",0x33a1fca6,"flixel.system.debug.Window.init","flixel/system/debug/Window.hx",310,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(314)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		if ((tmp1)){
			HX_STACK_LINE(317)
			return null();
		}
		HX_STACK_LINE(319)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		Dynamic tmp3 = this->init_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		this->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(321)
		::openfl::_legacy::display::Stage tmp4 = this->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		Dynamic tmp6 = this->onMouseMove_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
		HX_STACK_LINE(322)
		::openfl::_legacy::display::Stage tmp7 = this->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(322)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(322)
		Dynamic tmp9 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(322)
		tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
		HX_STACK_LINE(325)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(325)
		Dynamic tmp11 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(325)
		this->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,init,(void))

Void Window_obj::onMouseMove( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseMove",0xdd6abbe1,"flixel.system.debug.Window.onMouseMove","flixel/system/debug/Window.hx",332,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(334)
		Float tmp = this->get_mouseX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		if ((tmp1)){
			HX_STACK_LINE(334)
			tmp2 = (int)0;
		}
		else{
			HX_STACK_LINE(334)
			tmp2 = this->get_mouseX();
		}
		HX_STACK_LINE(334)
		Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
		HX_STACK_LINE(335)
		Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(335)
		bool tmp4 = (tmp3 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		if ((tmp4)){
			HX_STACK_LINE(335)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(335)
			tmp5 = this->get_mouseY();
		}
		HX_STACK_LINE(335)
		Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
		HX_STACK_LINE(337)
		::openfl::_legacy::display::DisplayObjectContainer tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(337)
		bool tmp7 = tmp6->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(337)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(337)
		if ((tmp8)){
			HX_STACK_LINE(339)
			bool tmp9 = this->_overHeader = false;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(339)
			this->_overHandle = tmp9;
			HX_STACK_LINE(340)
			return null();
		}
		HX_STACK_LINE(343)
		bool tmp9 = this->_dragging;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(343)
		if ((tmp9)){
			HX_STACK_LINE(345)
			this->_overHeader = true;
			HX_STACK_LINE(346)
			::openfl::_legacy::display::DisplayObjectContainer tmp10 = this->get_parent();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(346)
			Float tmp11 = tmp10->get_mouseX();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(346)
			::openfl::_legacy::geom::Point tmp12 = this->_drag;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(346)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(346)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(346)
			::openfl::_legacy::display::DisplayObjectContainer tmp15 = this->get_parent();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(346)
			Float tmp16 = tmp15->get_mouseY();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(346)
			::openfl::_legacy::geom::Point tmp17 = this->_drag;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(346)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(346)
			Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(346)
			this->reposition(tmp14,tmp19);
		}
		else{
			HX_STACK_LINE(348)
			bool tmp10 = this->_resizing;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(348)
			if ((tmp10)){
				HX_STACK_LINE(350)
				this->_overHandle = true;
				HX_STACK_LINE(351)
				Float tmp11 = mouseX;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(351)
				::openfl::_legacy::geom::Point tmp12 = this->_drag;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(351)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(351)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(351)
				Float tmp15 = mouseY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(351)
				::openfl::_legacy::geom::Point tmp16 = this->_drag;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(351)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(351)
				Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(351)
				this->resize(tmp14,tmp18);
			}
			else{
				HX_STACK_LINE(353)
				bool tmp11 = (mouseX >= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(353)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(353)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(353)
				if ((tmp12)){
					HX_STACK_LINE(353)
					Float tmp14 = mouseX;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(353)
					int tmp15 = this->_width;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(353)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(353)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(353)
					tmp13 = (tmp14 <= tmp17);
				}
				else{
					HX_STACK_LINE(353)
					tmp13 = false;
				}
				HX_STACK_LINE(353)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(353)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(353)
				if ((tmp14)){
					HX_STACK_LINE(353)
					tmp15 = (mouseY >= (int)0);
				}
				else{
					HX_STACK_LINE(353)
					tmp15 = false;
				}
				HX_STACK_LINE(353)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(353)
				if ((tmp15)){
					HX_STACK_LINE(353)
					Float tmp17 = mouseY;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(353)
					int tmp18 = this->_height;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(353)
					int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(353)
					tmp16 = (tmp17 <= tmp19);
				}
				else{
					HX_STACK_LINE(353)
					tmp16 = false;
				}
				HX_STACK_LINE(353)
				if ((tmp16)){
					HX_STACK_LINE(355)
					Float tmp17 = mouseX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(355)
					::openfl::_legacy::display::Bitmap tmp18 = this->_header;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(355)
					Float tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(355)
					bool tmp20 = (tmp17 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(355)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(355)
					if ((tmp20)){
						HX_STACK_LINE(355)
						Float tmp22 = mouseY;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(355)
						::openfl::_legacy::display::Bitmap tmp23 = this->_header;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(355)
						::openfl::_legacy::display::Bitmap tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(355)
						Float tmp25 = tmp24->get_height();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(355)
						Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(355)
						tmp21 = (tmp22 <= tmp26);
					}
					else{
						HX_STACK_LINE(355)
						tmp21 = false;
					}
					HX_STACK_LINE(355)
					this->_overHeader = tmp21;
					HX_STACK_LINE(356)
					bool tmp22 = this->_resizable;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(356)
					if ((tmp22)){
						HX_STACK_LINE(358)
						Float tmp23 = mouseX;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(358)
						int tmp24 = this->_width;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(358)
						::openfl::_legacy::display::Bitmap tmp25 = this->_handle;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(358)
						Float tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(358)
						Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(358)
						bool tmp28 = (tmp23 >= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(358)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(358)
						if ((tmp28)){
							HX_STACK_LINE(358)
							Float tmp30 = mouseY;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(358)
							int tmp31 = this->_height;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(358)
							int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(358)
							::openfl::_legacy::display::Bitmap tmp33 = this->_handle;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(358)
							::openfl::_legacy::display::Bitmap tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(358)
							Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(358)
							Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(358)
							Float tmp37 = (tmp32 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(358)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(358)
							tmp29 = (tmp30 >= tmp38);
						}
						else{
							HX_STACK_LINE(358)
							tmp29 = false;
						}
						HX_STACK_LINE(358)
						this->_overHandle = tmp29;
					}
				}
				else{
					HX_STACK_LINE(363)
					bool tmp17 = this->_overHeader = false;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(363)
					this->_overHandle = tmp17;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseMove,(void))

Void Window_obj::onMouseDown( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseDown",0xd777d132,"flixel.system.debug.Window.onMouseDown","flixel/system/debug/Window.hx",371,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(372)
		bool tmp = this->_overHeader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		if ((tmp)){
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				::openfl::_legacy::display::DisplayObjectContainer tmp1 = this->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(374)
				tmp1->addChild(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(375)
			this->_dragging = true;
			HX_STACK_LINE(376)
			Float tmp1 = this->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(376)
			::openfl::_legacy::geom::Point tmp2 = this->_drag;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			tmp2->x = tmp1;
			HX_STACK_LINE(377)
			Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(377)
			::openfl::_legacy::geom::Point tmp4 = this->_drag;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			tmp4->y = tmp3;
		}
		else{
			HX_STACK_LINE(379)
			bool tmp1 = this->_overHandle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(379)
			if ((tmp1)){
				HX_STACK_LINE(381)
				{
					HX_STACK_LINE(381)
					::openfl::_legacy::display::DisplayObjectContainer tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(381)
					tmp2->addChild(hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(382)
				this->_resizing = true;
				HX_STACK_LINE(383)
				int tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(383)
				Float tmp3 = this->get_mouseX();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(383)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(383)
				::openfl::_legacy::geom::Point tmp5 = this->_drag;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				tmp5->x = tmp4;
				HX_STACK_LINE(384)
				int tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(384)
				Float tmp7 = this->get_mouseY();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(384)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(384)
				::openfl::_legacy::geom::Point tmp9 = this->_drag;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(384)
				tmp9->y = tmp8;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseDown,(void))

Void Window_obj::onMouseUp( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.debug.Window","onMouseUp",0x62a36b2b,"flixel.system.debug.Window.onMouseUp","flixel/system/debug/Window.hx",392,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(393)
		this->_dragging = false;
		HX_STACK_LINE(394)
		this->_resizing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,onMouseUp,(void))

Void Window_obj::bound( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","bound",0xf2ff51e8,"flixel.system.debug.Window.bound","flixel/system/debug/Window.hx",403,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(404)
		::openfl::_legacy::geom::Rectangle tmp = this->_bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		if ((tmp1)){
			HX_STACK_LINE(406)
			Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(406)
			{
				HX_STACK_LINE(406)
				Float tmp3 = this->get_x();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(406)
				Float Value = tmp3;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(406)
				::openfl::_legacy::geom::Rectangle tmp4 = this->_bounds;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(406)
				Float tmp5 = tmp4->get_left();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(406)
				Dynamic Min = tmp5;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(406)
				::openfl::_legacy::geom::Rectangle tmp6 = this->_bounds;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				Float tmp7 = tmp6->get_right();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(406)
				int tmp8 = this->_width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(406)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(406)
				Dynamic Max = tmp9;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(406)
				bool tmp10 = (Min != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(406)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(406)
				if ((tmp10)){
					HX_STACK_LINE(406)
					tmp11 = (Value < Min);
				}
				else{
					HX_STACK_LINE(406)
					tmp11 = false;
				}
				HX_STACK_LINE(406)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(406)
				if ((tmp11)){
					HX_STACK_LINE(406)
					tmp12 = Min;
				}
				else{
					HX_STACK_LINE(406)
					tmp12 = Value;
				}
				HX_STACK_LINE(406)
				Float lowerBound = tmp12;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(406)
				bool tmp13 = (Max != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(406)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(406)
				if ((tmp13)){
					HX_STACK_LINE(406)
					tmp14 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(406)
					tmp14 = false;
				}
				HX_STACK_LINE(406)
				if ((tmp14)){
					HX_STACK_LINE(406)
					tmp2 = Max;
				}
				else{
					HX_STACK_LINE(406)
					tmp2 = lowerBound;
				}
			}
			HX_STACK_LINE(406)
			this->set_x(tmp2);
			HX_STACK_LINE(407)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			{
				HX_STACK_LINE(407)
				Float tmp4 = this->get_y();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(407)
				Float Value = tmp4;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(407)
				::openfl::_legacy::geom::Rectangle tmp5 = this->_bounds;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(407)
				Float tmp6 = tmp5->get_top();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(407)
				Dynamic Min = tmp6;		HX_STACK_VAR(Min,"Min");
				HX_STACK_LINE(407)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_bounds;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(407)
				Float tmp8 = tmp7->get_bottom();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(407)
				int tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(407)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(407)
				Dynamic Max = tmp10;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(407)
				bool tmp11 = (Min != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(407)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(407)
				if ((tmp11)){
					HX_STACK_LINE(407)
					tmp12 = (Value < Min);
				}
				else{
					HX_STACK_LINE(407)
					tmp12 = false;
				}
				HX_STACK_LINE(407)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(407)
				if ((tmp12)){
					HX_STACK_LINE(407)
					tmp13 = Min;
				}
				else{
					HX_STACK_LINE(407)
					tmp13 = Value;
				}
				HX_STACK_LINE(407)
				Float lowerBound = tmp13;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(407)
				bool tmp14 = (Max != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(407)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(407)
				if ((tmp14)){
					HX_STACK_LINE(407)
					tmp15 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(407)
					tmp15 = false;
				}
				HX_STACK_LINE(407)
				if ((tmp15)){
					HX_STACK_LINE(407)
					tmp3 = Max;
				}
				else{
					HX_STACK_LINE(407)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(407)
			this->set_y(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,bound,(void))

Void Window_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","updateSize",0x6f89a180,"flixel.system.debug.Window.updateSize","flixel/system/debug/Window.hx",415,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(416)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(416)
			Float Value = tmp1;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(416)
			::openfl::_legacy::geom::Point tmp2 = this->minSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(416)
			Dynamic Min = tmp2->x;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(416)
			::openfl::_legacy::geom::Point tmp3 = this->maxSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(416)
			Dynamic Max = tmp3->x;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(416)
			bool tmp4 = (Min != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(416)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(416)
			if ((tmp4)){
				HX_STACK_LINE(416)
				tmp5 = (Value < Min);
			}
			else{
				HX_STACK_LINE(416)
				tmp5 = false;
			}
			HX_STACK_LINE(416)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			if ((tmp5)){
				HX_STACK_LINE(416)
				tmp6 = Min;
			}
			else{
				HX_STACK_LINE(416)
				tmp6 = Value;
			}
			HX_STACK_LINE(416)
			Float lowerBound = tmp6;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(416)
			bool tmp7 = (Max != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			if ((tmp7)){
				HX_STACK_LINE(416)
				tmp8 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(416)
				tmp8 = false;
			}
			HX_STACK_LINE(416)
			if ((tmp8)){
				HX_STACK_LINE(416)
				tmp = Max;
			}
			else{
				HX_STACK_LINE(416)
				tmp = lowerBound;
			}
		}
		HX_STACK_LINE(416)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		this->_width = tmp1;
		HX_STACK_LINE(417)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			int tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			Float Value = tmp3;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(417)
			::openfl::_legacy::geom::Point tmp4 = this->minSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(417)
			Dynamic Min = tmp4->y;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(417)
			::openfl::_legacy::geom::Point tmp5 = this->maxSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			Dynamic Max = tmp5->y;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(417)
			bool tmp6 = (Min != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(417)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(417)
			if ((tmp6)){
				HX_STACK_LINE(417)
				tmp7 = (Value < Min);
			}
			else{
				HX_STACK_LINE(417)
				tmp7 = false;
			}
			HX_STACK_LINE(417)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(417)
			if ((tmp7)){
				HX_STACK_LINE(417)
				tmp8 = Min;
			}
			else{
				HX_STACK_LINE(417)
				tmp8 = Value;
			}
			HX_STACK_LINE(417)
			Float lowerBound = tmp8;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(417)
			bool tmp9 = (Max != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(417)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(417)
			if ((tmp9)){
				HX_STACK_LINE(417)
				tmp10 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(417)
				tmp10 = false;
			}
			HX_STACK_LINE(417)
			if ((tmp10)){
				HX_STACK_LINE(417)
				tmp2 = Max;
			}
			else{
				HX_STACK_LINE(417)
				tmp2 = lowerBound;
			}
		}
		HX_STACK_LINE(417)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		this->_height = tmp3;
		HX_STACK_LINE(419)
		::openfl::_legacy::display::Bitmap tmp4 = this->_header;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(419)
		int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(419)
		tmp4->set_scaleX(tmp5);
		HX_STACK_LINE(420)
		::openfl::_legacy::display::Bitmap tmp6 = this->_background;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		int tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		tmp6->set_scaleX(tmp7);
		HX_STACK_LINE(421)
		::openfl::_legacy::display::Bitmap tmp8 = this->_background;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(421)
		int tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(421)
		::openfl::_legacy::display::Bitmap tmp10 = this->_header;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(421)
		Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(421)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(421)
		tmp8->set_scaleY(tmp12);
		HX_STACK_LINE(422)
		::openfl::_legacy::display::Bitmap tmp13 = this->_shadow;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(422)
		int tmp14 = this->_width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(422)
		tmp13->set_scaleX(tmp14);
		HX_STACK_LINE(423)
		::openfl::_legacy::display::Bitmap tmp15 = this->_shadow;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(423)
		int tmp16 = this->_height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(423)
		tmp15->set_y(tmp16);
		HX_STACK_LINE(424)
		::openfl::_legacy::text::TextField tmp17 = this->_title;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(424)
		int tmp18 = this->_width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(424)
		int tmp19 = (tmp18 - (int)4);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(424)
		tmp17->set_width(tmp19);
		HX_STACK_LINE(425)
		bool tmp20 = this->_resizable;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(425)
		if ((tmp20)){
			HX_STACK_LINE(427)
			::openfl::_legacy::display::Bitmap tmp21 = this->_handle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(427)
			int tmp22 = this->_width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(427)
			::openfl::_legacy::display::Bitmap tmp23 = this->_handle;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(427)
			Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(427)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(427)
			tmp21->set_x(tmp25);
			HX_STACK_LINE(428)
			::openfl::_legacy::display::Bitmap tmp26 = this->_handle;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(428)
			int tmp27 = this->_height;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(428)
			::openfl::_legacy::display::Bitmap tmp28 = this->_handle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(428)
			Float tmp29 = tmp28->get_height();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(428)
			Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(428)
			tmp26->set_y(tmp30);
		}
		HX_STACK_LINE(430)
		::flixel::_system::ui::FlxSystemButton tmp21 = this->_closeButton;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(430)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(430)
		if ((tmp22)){
			HX_STACK_LINE(432)
			::flixel::_system::ui::FlxSystemButton tmp23 = this->_closeButton;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(432)
			int tmp24 = this->_width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(432)
			::flixel::_system::ui::FlxSystemButton tmp25 = this->_closeButton;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(432)
			Float tmp26 = tmp25->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(432)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(432)
			Float tmp28 = (tmp27 - (int)3);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(432)
			tmp23->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp28);
			HX_STACK_LINE(433)
			::flixel::_system::ui::FlxSystemButton tmp29 = this->_closeButton;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(433)
			tmp29->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,updateSize,(void))

Void Window_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.Window","close",0x8465b962,"flixel.system.debug.Window.close","flixel/system/debug/Window.hx",439,0xb8dfd4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(439)
		this->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,close,(void))

int Window_obj::BG_COLOR;

int Window_obj::HEADER_COLOR;

Float Window_obj::HEADER_ALPHA;

int Window_obj::HEADER_HEIGHT;

int Window_obj::WINDOW_AMOUNT;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(minSize,"minSize");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(toggleButton,"toggleButton");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_header,"_header");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_handle,"_handle");
	HX_MARK_MEMBER_NAME(_closeButton,"_closeButton");
	HX_MARK_MEMBER_NAME(_overHeader,"_overHeader");
	HX_MARK_MEMBER_NAME(_overHandle,"_overHandle");
	HX_MARK_MEMBER_NAME(_drag,"_drag");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(_resizable,"_resizable");
	HX_MARK_MEMBER_NAME(_id,"_id");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minSize,"minSize");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(toggleButton,"toggleButton");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_header,"_header");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_handle,"_handle");
	HX_VISIT_MEMBER_NAME(_closeButton,"_closeButton");
	HX_VISIT_MEMBER_NAME(_overHeader,"_overHeader");
	HX_VISIT_MEMBER_NAME(_overHandle,"_overHandle");
	HX_VISIT_MEMBER_NAME(_drag,"_drag");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(_resizable,"_resizable");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { return _drag; }
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { return minSize; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return maxSize; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"_header") ) { return _header; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return _shadow; }
		if (HX_FIELD_EQ(inName,"_handle") ) { return _handle; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return putOnTop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return _resizing; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { return _resizable; }
		if (HX_FIELD_EQ(inName,"reposition") ) { return reposition_dyn(); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return _background; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { return _overHeader; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { return _overHandle; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { return toggleButton; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { return _closeButton; }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSaveData") ) { return loadSaveData_dyn(); }
		if (HX_FIELD_EQ(inName,"initSaveData") ) { return initSaveData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Window_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { outValue = WINDOW_AMOUNT; return true;  }
	}
	return false;
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_drag") ) { _drag=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minSize") ) { minSize=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_header") ) { _header=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_handle") ) { _handle=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_resizable") ) { _resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHeader") ) { _overHeader=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overHandle") ) { _overHandle=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toggleButton") ) { toggleButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_closeButton") ) { _closeButton=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"WINDOW_AMOUNT") ) { WINDOW_AMOUNT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minSize","\x73","\x0f","\x5d","\x3d"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	outFields->push(HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"));
	outFields->push(HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"));
	outFields->push(HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b"));
	outFields->push(HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"));
	outFields->push(HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"));
	outFields->push(HX_HCSTRING("_handle","\x47","\x95","\x74","\x26"));
	outFields->push(HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa"));
	outFields->push(HX_HCSTRING("_overHeader","\x20","\x93","\x24","\xb5"));
	outFields->push(HX_HCSTRING("_overHandle","\x3b","\x0d","\x22","\x70"));
	outFields->push(HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5"));
	outFields->push(HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"));
	outFields->push(HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9"));
	outFields->push(HX_HCSTRING("_resizable","\x2c","\xb3","\xf2","\x04"));
	outFields->push(HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Window_obj,minSize),HX_HCSTRING("minSize","\x73","\x0f","\x5d","\x3d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Window_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Window_obj,toggleButton),HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f")},
	{hx::fsInt,(int)offsetof(Window_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Window_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Window_obj,_bounds),HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_background),HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_header),HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_shadow),HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Window_obj,_title),HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Window_obj,_handle),HX_HCSTRING("_handle","\x47","\x95","\x74","\x26")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(Window_obj,_closeButton),HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa")},
	{hx::fsBool,(int)offsetof(Window_obj,_overHeader),HX_HCSTRING("_overHeader","\x20","\x93","\x24","\xb5")},
	{hx::fsBool,(int)offsetof(Window_obj,_overHandle),HX_HCSTRING("_overHandle","\x3b","\x0d","\x22","\x70")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Window_obj,_drag),HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5")},
	{hx::fsBool,(int)offsetof(Window_obj,_dragging),HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f")},
	{hx::fsBool,(int)offsetof(Window_obj,_resizing),HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9")},
	{hx::fsBool,(int)offsetof(Window_obj,_resizable),HX_HCSTRING("_resizable","\x2c","\xb3","\xf2","\x04")},
	{hx::fsInt,(int)offsetof(Window_obj,_id),HX_HCSTRING("_id","\xfa","\x71","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Window_obj::BG_COLOR,HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b")},
	{hx::fsInt,(void *) &Window_obj::HEADER_COLOR,HX_HCSTRING("HEADER_COLOR","\xd1","\xcd","\x7c","\x95")},
	{hx::fsFloat,(void *) &Window_obj::HEADER_ALPHA,HX_HCSTRING("HEADER_ALPHA","\xcc","\x03","\xb7","\x6c")},
	{hx::fsInt,(void *) &Window_obj::HEADER_HEIGHT,HX_HCSTRING("HEADER_HEIGHT","\x99","\x8b","\x7c","\x73")},
	{hx::fsInt,(void *) &Window_obj::WINDOW_AMOUNT,HX_HCSTRING("WINDOW_AMOUNT","\x87","\x6d","\x2e","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("minSize","\x73","\x0f","\x5d","\x3d"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"),
	HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"),
	HX_HCSTRING("_header","\x2c","\x1b","\x77","\x6b"),
	HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"),
	HX_HCSTRING("_title","\xd9","\x5c","\x22","\x0c"),
	HX_HCSTRING("_handle","\x47","\x95","\x74","\x26"),
	HX_HCSTRING("_closeButton","\xcb","\x35","\x3a","\xfa"),
	HX_HCSTRING("_overHeader","\x20","\x93","\x24","\xb5"),
	HX_HCSTRING("_overHandle","\x3b","\x0d","\x22","\x70"),
	HX_HCSTRING("_drag","\xd3","\x47","\x81","\xf5"),
	HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"),
	HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9"),
	HX_HCSTRING("_resizable","\x2c","\xb3","\xf2","\x04"),
	HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"),
	HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"),
	HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("putOnTop","\x67","\x79","\x64","\x2e"),
	HX_HCSTRING("loadSaveData","\x4d","\xdc","\x85","\xaf"),
	HX_HCSTRING("initSaveData","\x37","\x77","\xd3","\x9a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_MARK_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_MARK_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_COLOR,"HEADER_COLOR");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_ALPHA,"HEADER_ALPHA");
	HX_VISIT_MEMBER_NAME(Window_obj::HEADER_HEIGHT,"HEADER_HEIGHT");
	HX_VISIT_MEMBER_NAME(Window_obj::WINDOW_AMOUNT,"WINDOW_AMOUNT");
};

#endif

hx::Class Window_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b"),
	HX_HCSTRING("HEADER_COLOR","\xd1","\xcd","\x7c","\x95"),
	HX_HCSTRING("HEADER_ALPHA","\xcc","\x03","\xb7","\x6c"),
	HX_HCSTRING("HEADER_HEIGHT","\x99","\x8b","\x7c","\x73"),
	HX_HCSTRING("WINDOW_AMOUNT","\x87","\x6d","\x2e","\x4a"),
	::String(null()) };

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.Window","\x98","\x06","\x51","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Window_obj::__GetStatic;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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

void Window_obj::__boot()
{
	BG_COLOR= (int)-580952225;
	HEADER_COLOR= (int)-1157627904;
	HEADER_ALPHA= ((Float)0.8);
	HEADER_HEIGHT= (int)15;
	WINDOW_AMOUNT= (int)0;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
