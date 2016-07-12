#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowLeft
#include <flixel/system/debug/GraphicArrowLeft.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_BitmapLog
#include <flixel/system/debug/log/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
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
namespace log{

Void BitmapLog_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","new",0x0bf20835,"flixel.system.debug.log.BitmapLog.new","flixel/system/debug/log/BitmapLog.hx",25,0x69d60e7d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(45)
	this->_middleMouseDown = false;
	HX_STACK_LINE(38)
	this->_matrix = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/log/BitmapLog.hx",37,0x69d60e7d)
			{
				HX_STACK_LINE(37)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(37)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(37)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(37)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(37)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(37)
				point->_inPool = false;
				HX_STACK_LINE(37)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	this->_curMouseOffset = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/log/BitmapLog.hx",36,0x69d60e7d)
			{
				HX_STACK_LINE(36)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(36)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(36)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(36)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(36)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(36)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(36)
				point->_inPool = false;
				HX_STACK_LINE(36)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(36)
	this->_lastMousePos = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/log/BitmapLog.hx",35,0x69d60e7d)
			{
				HX_STACK_LINE(35)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(35)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(35)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(35)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(35)
				point->_inPool = false;
				HX_STACK_LINE(35)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(35)
	this->_point = _Function_1_3::Block();
	HX_STACK_LINE(32)
	this->_curIndex = (int)0;
	HX_STACK_LINE(31)
	this->_entries = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(27)
	this->zoom = ((Float)1);
	HX_STACK_LINE(51)
	::flixel::_system::debug::GraphicBitmapLog tmp = ::flixel::_system::debug::GraphicBitmapLog_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	super::__construct(HX_HCSTRING("BitmapLog","\xb5","\x3b","\xae","\x68"),tmp,null(),null(),null(),null(),null());
	HX_STACK_LINE(53)
	::openfl::_legacy::geom::Point tmp1 = this->minSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	tmp1->x = (int)165;
	HX_STACK_LINE(54)
	int tmp2 = (int)30;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	::openfl::_legacy::geom::Point tmp4 = this->minSize;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	tmp4->y = tmp3;
	HX_STACK_LINE(56)
	Float tmp5 = this->get_width();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	Float tmp8 = (tmp7 - (int)15);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::BitmapData tmp10 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp6,tmp9,true,(int)0,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(56)
	::openfl::_legacy::display::Bitmap tmp11 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	this->_canvasBitmap = tmp11;
	HX_STACK_LINE(57)
	::openfl::_legacy::display::Bitmap tmp12 = this->_canvasBitmap;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(57)
	tmp12->set_x((int)0);
	HX_STACK_LINE(58)
	::openfl::_legacy::display::Bitmap tmp13 = this->_canvasBitmap;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(58)
	tmp13->set_y((int)15);
	HX_STACK_LINE(59)
	::openfl::_legacy::display::Bitmap tmp14 = this->_canvasBitmap;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(59)
	this->addChild(tmp14);
	HX_STACK_LINE(61)
	this->createHeaderUI();
	HX_STACK_LINE(62)
	this->createFooterUI();
	HX_STACK_LINE(64)
	this->setVisible(false);
	HX_STACK_LINE(67)
	::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(67)
	Dynamic tmp16 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(67)
	this->addEventListener(tmp15,tmp16,null(),null(),null());
	HX_STACK_LINE(69)
	::String tmp17 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(69)
	Dynamic tmp18 = this->onMiddleDown_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(69)
	this->addEventListener(tmp17,tmp18,null(),null(),null());
	HX_STACK_LINE(70)
	::String tmp19 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(70)
	Dynamic tmp20 = this->onMiddleUp_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(70)
	this->addEventListener(tmp19,tmp20,null(),null(),null());
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		::flixel::_system::frontEnds::SignalFrontEnd tmp21 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(74)
		Dynamic tmp22 = this->clear_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(74)
		tmp21->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp22);
	}
	HX_STACK_LINE(77)
	::openfl::_legacy::display::Bitmap tmp21 = this->_handle;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(77)
	this->removeChild(tmp21);
	HX_STACK_LINE(78)
	::openfl::_legacy::display::Bitmap tmp22 = this->_handle;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(78)
	this->addChild(tmp22);
	HX_STACK_LINE(80)
	::openfl::_legacy::display::Bitmap tmp23 = this->_shadow;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(80)
	this->removeChild(tmp23);
}
;
	return null();
}

//BitmapLog_obj::~BitmapLog_obj() { }

Dynamic BitmapLog_obj::__CreateEmpty() { return  new BitmapLog_obj; }
hx::ObjectPtr< BitmapLog_obj > BitmapLog_obj::__new()
{  hx::ObjectPtr< BitmapLog_obj > _result_ = new BitmapLog_obj();
	_result_->__construct();
	return _result_;}

Dynamic BitmapLog_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapLog_obj > _result_ = new BitmapLog_obj();
	_result_->__construct();
	return _result_;}

Void BitmapLog_obj::createHeaderUI( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","createHeaderUI",0xe86f6e88,"flixel.system.debug.log.BitmapLog.createHeaderUI","flixel/system/debug/log/BitmapLog.hx",84,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::flixel::_system::debug::log::BitmapLog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		this->_ui = tmp;
		HX_STACK_LINE(86)
		::openfl::_legacy::display::Sprite tmp1 = this->_ui;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		tmp1->set_y((int)2);
		HX_STACK_LINE(88)
		::flixel::_system::debug::GraphicArrowLeft tmp2 = ::flixel::_system::debug::GraphicArrowLeft_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		Dynamic tmp3 = this->previous_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		::flixel::_system::ui::FlxSystemButton tmp4 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		this->_buttonLeft = tmp4;
		HX_STACK_LINE(90)
		::openfl::_legacy::text::TextField tmp5 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		this->_dimensionsText = tmp5;
		HX_STACK_LINE(92)
		::openfl::_legacy::text::TextField tmp6 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField((int)0,(int)-3,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		this->_counterText = tmp6;
		HX_STACK_LINE(93)
		::openfl::_legacy::text::TextField tmp7 = this->_counterText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		tmp7->set_text(HX_HCSTRING("0/0","\x51","\x95","\x24","\x00"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::flixel::_system::debug::log::BitmapLog,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/log/BitmapLog.hx",96,0x69d60e7d)
			{
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					_g->__Field(HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"), hx::paccDynamic )((int)1);
					HX_STACK_LINE(97)
					_g->__Field(HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(null(),null());
				}
				HX_STACK_LINE(98)
				_g->__Field(HX_HCSTRING("refreshCanvas","\x13","\xf9","\x7c","\xb6"), hx::paccDynamic )(null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(96)
		::flixel::_system::ui::FlxSystemButton tmp8 = ::flixel::_system::ui::FlxSystemButton_obj::__new(null(), Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		this->_buttonText = tmp8;
		HX_STACK_LINE(100)
		::flixel::_system::ui::FlxSystemButton tmp9 = this->_buttonText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		::openfl::_legacy::text::TextField tmp10 = this->_counterText;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		tmp9->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp10);
		HX_STACK_LINE(102)
		::flixel::_system::debug::GraphicArrowRight tmp11 = ::flixel::_system::debug::GraphicArrowRight_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(102)
		Dynamic tmp12 = this->next_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(102)
		::flixel::_system::ui::FlxSystemButton tmp13 = ::flixel::_system::ui::FlxSystemButton_obj::__new(tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		this->_buttonRight = tmp13;
		HX_STACK_LINE(103)
		::flixel::_system::ui::FlxSystemButton tmp14 = this->_buttonRight;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		tmp14->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )((int)60);
		HX_STACK_LINE(105)
		::openfl::_legacy::display::Sprite tmp15 = this->_ui;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(105)
		::flixel::_system::ui::FlxSystemButton tmp16 = this->_buttonLeft;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(105)
		tmp15->addChild(tmp16);
		HX_STACK_LINE(106)
		::openfl::_legacy::display::Sprite tmp17 = this->_ui;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(106)
		::flixel::_system::ui::FlxSystemButton tmp18 = this->_buttonText;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(106)
		tmp17->addChild(tmp18);
		HX_STACK_LINE(107)
		::openfl::_legacy::display::Sprite tmp19 = this->_ui;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(107)
		::flixel::_system::ui::FlxSystemButton tmp20 = this->_buttonRight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(107)
		tmp19->addChild(tmp20);
		HX_STACK_LINE(109)
		::openfl::_legacy::display::Sprite tmp21 = this->_ui;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(109)
		this->addChild(tmp21);
		HX_STACK_LINE(110)
		::openfl::_legacy::text::TextField tmp22 = this->_dimensionsText;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(110)
		this->addChild(tmp22);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createHeaderUI,(void))

Void BitmapLog_obj::createFooterUI( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","createFooterUI",0xe5498316,"flixel.system.debug.log.BitmapLog.createFooterUI","flixel/system/debug/log/BitmapLog.hx",114,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		::openfl::_legacy::display::BitmapData tmp = ::openfl::_legacy::display::BitmapData_obj::__new((int)1,(int)15,true,(int)-1157627904,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		::openfl::_legacy::display::Bitmap tmp1 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		this->_footer = tmp1;
		HX_STACK_LINE(116)
		::openfl::_legacy::display::Bitmap tmp2 = this->_footer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		tmp2->set_alpha(((Float)0.8));
		HX_STACK_LINE(117)
		::openfl::_legacy::display::Bitmap tmp3 = this->_footer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		this->addChild(tmp3);
		HX_STACK_LINE(119)
		::openfl::_legacy::text::TextField tmp4 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		this->_footerText = tmp4;
		HX_STACK_LINE(120)
		::openfl::_legacy::text::TextField tmp5 = this->_footerText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		this->addChild(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,createFooterUI,(void))

Void BitmapLog_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","destroy",0x0565734f,"flixel.system.debug.log.BitmapLog.destroy","flixel/system/debug/log/BitmapLog.hx",127,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		this->super::destroy();
		HX_STACK_LINE(130)
		this->clear();
		HX_STACK_LINE(132)
		::openfl::_legacy::display::Bitmap tmp = this->_canvasBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		this->removeChild(tmp);
		HX_STACK_LINE(133)
		::openfl::_legacy::display::Bitmap tmp1 = this->_canvasBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->bitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);
		HX_STACK_LINE(134)
		::openfl::_legacy::display::Bitmap tmp3 = this->_canvasBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		tmp3->set_bitmapData(null());
		HX_STACK_LINE(135)
		this->_canvasBitmap = null();
		HX_STACK_LINE(136)
		this->_entries = null();
		HX_STACK_LINE(138)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		Dynamic tmp5 = this->onMouseWheel_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		this->removeEventListener(tmp4,tmp5,null());
		HX_STACK_LINE(140)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		Dynamic tmp7 = this->onMiddleDown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		this->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(141)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		Dynamic tmp9 = this->onMiddleUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		this->removeEventListener(tmp8,tmp9,null());
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			Dynamic tmp11 = this->clear_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			tmp10->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
		}
	}
return null();
}


Void BitmapLog_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","update",0xf9ae2154,"flixel.system.debug.log.BitmapLog.update","flixel/system/debug/log/BitmapLog.hx",148,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		bool tmp = this->_middleMouseDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		if ((tmp)){
			HX_STACK_LINE(151)
			::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			{
				HX_STACK_LINE(151)
				Float tmp2 = this->get_mouseX();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(151)
				Float X = tmp2;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(151)
				Float tmp3 = this->get_mouseY();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(151)
				Float Y = tmp3;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(151)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(151)
				::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(151)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(151)
				::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(151)
				point->_inPool = false;
				HX_STACK_LINE(151)
				tmp1 = point;
			}
			HX_STACK_LINE(151)
			::flixel::math::FlxPoint delta = tmp1;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(152)
			::flixel::math::FlxPoint tmp2 = this->_curMouseOffset;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			::flixel::math::FlxPoint tmp3 = this->_lastMousePos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			::flixel::math::FlxPoint tmp4 = delta->subtractPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			tmp2->addPoint(tmp4);
			HX_STACK_LINE(153)
			this->refreshCanvas(null());
			HX_STACK_LINE(154)
			::flixel::math::FlxPoint tmp5 = this->_lastMousePos;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			Float tmp6 = this->get_mouseX();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			Float tmp7 = this->get_mouseY();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


Void BitmapLog_obj::updateSize( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","updateSize",0x36a82835,"flixel.system.debug.log.BitmapLog.updateSize","flixel/system/debug/log/BitmapLog.hx",159,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->super::updateSize();
		HX_STACK_LINE(162)
		::openfl::_legacy::display::Bitmap tmp = this->_background;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		int tmp1 = this->_height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		::openfl::_legacy::display::Bitmap tmp2 = this->_header;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		Float tmp4 = (tmp3 * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(162)
		tmp->set_scaleY(tmp5);
	}
return null();
}


Void BitmapLog_obj::resize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","resize",0x7b23f53f,"flixel.system.debug.log.BitmapLog.resize","flixel/system/debug/log/BitmapLog.hx",166,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(167)
		Float tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		this->super::resize(tmp,tmp1);
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Bitmap tmp2 = this->_canvasBitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::Bitmap tmp3 = this->_canvasBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp4 = tmp3->bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		tmp2->set_bitmapData(tmp5);
		HX_STACK_LINE(171)
		int tmp6 = this->_width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		::openfl::_legacy::display::Bitmap tmp7 = this->_canvasBitmap;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		Float tmp8 = tmp7->get_x();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(171)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(171)
		int newWidth = tmp10;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(172)
		int tmp11 = this->_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		::openfl::_legacy::display::Bitmap tmp12 = this->_canvasBitmap;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(172)
		Float tmp13 = tmp12->get_y();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(172)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(172)
		::openfl::_legacy::display::Bitmap tmp15 = this->_footer;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(172)
		Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(172)
		Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(172)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(172)
		int newHeight = tmp18;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(174)
		bool tmp19 = (newWidth > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(174)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(174)
		if ((tmp19)){
			HX_STACK_LINE(174)
			tmp20 = (newHeight > (int)0);
		}
		else{
			HX_STACK_LINE(174)
			tmp20 = false;
		}
		HX_STACK_LINE(174)
		if ((tmp20)){
			HX_STACK_LINE(176)
			::openfl::_legacy::display::Bitmap tmp21 = this->_canvasBitmap;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(176)
			::openfl::_legacy::display::BitmapData tmp22 = ::openfl::_legacy::display::BitmapData_obj::__new(newWidth,newHeight,true,(int)0,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(176)
			tmp21->set_bitmapData(tmp22);
			HX_STACK_LINE(177)
			int tmp23 = this->_curIndex;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(177)
			this->refreshCanvas(tmp23);
		}
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Sprite tmp21 = this->_ui;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Bitmap tmp22 = this->_header;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(180)
		Float tmp23 = tmp22->get_width();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Sprite tmp24 = this->_ui;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(180)
		Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(180)
		Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(180)
		Float tmp27 = (tmp26 - (int)5);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(180)
		tmp21->set_x(tmp27);
		HX_STACK_LINE(182)
		::openfl::_legacy::display::Bitmap tmp28 = this->_footer;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(182)
		int tmp29 = this->_width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(182)
		tmp28->set_width(tmp29);
		HX_STACK_LINE(183)
		::openfl::_legacy::display::Bitmap tmp30 = this->_footer;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(183)
		int tmp31 = this->_height;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(183)
		::openfl::_legacy::display::Bitmap tmp32 = this->_footer;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(183)
		Float tmp33 = tmp32->get_height();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(183)
		Float tmp34 = (tmp31 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(183)
		tmp30->set_y(tmp34);
		HX_STACK_LINE(185)
		this->resizeTexts();
	}
return null();
}


Void BitmapLog_obj::resizeTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","resizeTexts",0x86a66167,"flixel.system.debug.log.BitmapLog.resizeTexts","flixel/system/debug/log/BitmapLog.hx",189,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		::openfl::_legacy::text::TextField tmp = this->_dimensionsText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::openfl::_legacy::display::Bitmap tmp1 = this->_header;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		Float tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::openfl::_legacy::text::TextField tmp4 = this->_dimensionsText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		Float tmp5 = tmp4->get_textWidth();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(190)
		Float tmp7 = (tmp3 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(190)
		tmp->set_x(tmp7);
		HX_STACK_LINE(191)
		::openfl::_legacy::text::TextField tmp8 = this->_dimensionsText;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		int tmp9 = this->_width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(191)
		bool tmp10 = (tmp9 > (int)200);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(191)
		tmp8->set_visible(tmp10);
		HX_STACK_LINE(193)
		::openfl::_legacy::text::TextField tmp11 = this->_footerText;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(193)
		int tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(193)
		::openfl::_legacy::display::Bitmap tmp13 = this->_footer;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(193)
		Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(193)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(193)
		tmp11->set_y(tmp15);
		HX_STACK_LINE(194)
		::openfl::_legacy::text::TextField tmp16 = this->_footerText;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(194)
		int tmp17 = this->_width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(194)
		Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(194)
		::openfl::_legacy::text::TextField tmp19 = this->_footerText;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(194)
		Float tmp20 = tmp19->get_textWidth();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(194)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(194)
		Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(194)
		tmp16->set_x(tmp22);
		HX_STACK_LINE(195)
		::openfl::_legacy::text::TextField tmp23 = this->_footerText;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(195)
		::openfl::_legacy::display::Bitmap tmp24 = this->_footer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(195)
		Float tmp25 = tmp24->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(195)
		tmp23->set_width(tmp25);
		HX_STACK_LINE(196)
		::openfl::_legacy::text::TextField tmp26 = this->_footerText;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(196)
		Float tmp27 = tmp26->get_x();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(196)
		bool tmp28 = (tmp27 < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(196)
		if ((tmp28)){
			HX_STACK_LINE(198)
			::openfl::_legacy::text::TextField tmp29 = this->_footerText;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(198)
			tmp29->set_x((int)0);
		}
		HX_STACK_LINE(201)
		::flixel::_system::ui::FlxSystemButton tmp29 = this->_buttonLeft;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(201)
		Float tmp30 = tmp29->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(201)
		::flixel::_system::ui::FlxSystemButton tmp31 = this->_buttonLeft;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(201)
		Float tmp32 = tmp31->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(201)
		Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(201)
		Float start = tmp33;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(202)
		::flixel::_system::ui::FlxSystemButton tmp34 = this->_buttonRight;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(202)
		Float tmp35 = tmp34->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(202)
		Float tmp36 = start;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(202)
		Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(202)
		Float range = tmp37;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(203)
		::flixel::_system::ui::FlxSystemButton tmp38 = this->_buttonText;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(203)
		::openfl::_legacy::text::TextField tmp39 = this->_counterText;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(203)
		Float tmp40 = tmp39->get_textWidth();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(203)
		Float tmp41 = (Float(tmp40) / Float((int)2));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(203)
		Float tmp42 = ((int)33 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(203)
		tmp38->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp42);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resizeTexts,(void))

Void BitmapLog_obj::next( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","next",0x67d5277e,"flixel.system.debug.log.BitmapLog.next","flixel/system/debug/log/BitmapLog.hx",210,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			this->set_zoom((int)1);
			HX_STACK_LINE(211)
			::flixel::math::FlxPoint tmp = this->_curMouseOffset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(211)
			tmp->set(null(),null());
		}
		HX_STACK_LINE(212)
		int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		this->refreshCanvas(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,next,(void))

Void BitmapLog_obj::previous( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","previous",0x062f0042,"flixel.system.debug.log.BitmapLog.previous","flixel/system/debug/log/BitmapLog.hx",219,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			this->set_zoom((int)1);
			HX_STACK_LINE(220)
			::flixel::math::FlxPoint tmp = this->_curMouseOffset;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(220)
			tmp->set(null(),null());
		}
		HX_STACK_LINE(221)
		int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		this->refreshCanvas(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,previous,(void))

Void BitmapLog_obj::resetSettings( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","resetSettings",0xbb149de7,"flixel.system.debug.log.BitmapLog.resetSettings","flixel/system/debug/log/BitmapLog.hx",225,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		this->set_zoom((int)1);
		HX_STACK_LINE(227)
		::flixel::math::FlxPoint tmp = this->_curMouseOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		tmp->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,resetSettings,(void))

bool BitmapLog_obj::add( ::openfl::_legacy::display::BitmapData bmp,::String __o_name){
::String name = __o_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","add",0x0be829f6,"flixel.system.debug.log.BitmapLog.add","flixel/system/debug/log/BitmapLog.hx",234,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmp,"bmp")
	HX_STACK_ARG(name,"name")
{
		HX_STACK_LINE(235)
		bool tmp = (bmp == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		if ((tmp)){
			HX_STACK_LINE(237)
			return false;
		}
		HX_STACK_LINE(239)
		this->setVisible(true);
		HX_STACK_LINE(240)
		::openfl::_legacy::display::BitmapData tmp1 = bmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &tmp2,::openfl::_legacy::display::BitmapData &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/log/BitmapLog.hx",240,0x69d60e7d)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1") , tmp1,false);
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(240)
		Dynamic tmp3 = _Function_1_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		this->_entries->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(241)
		bool tmp4 = this->refreshCanvas(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapLog_obj,add,return )

Void BitmapLog_obj::clearAt( hx::Null< int >  __o_Index){
int Index = __o_Index.Default(-1);
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","clearAt",0x8c242e35,"flixel.system.debug.log.BitmapLog.clearAt","flixel/system/debug/log/BitmapLog.hx",249,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
{
		HX_STACK_LINE(250)
		bool tmp = (Index == (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		if ((tmp)){
			HX_STACK_LINE(252)
			int tmp1 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(252)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			Index = tmp2;
		}
		HX_STACK_LINE(254)
		Dynamic tmp1 = this->_entries->__GetItem(Index);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		::flixel::util::FlxDestroyUtil_obj::dispose(tmp2);
		HX_STACK_LINE(255)
		hx::IndexRef((this->_entries).mPtr,Index) = null();
		HX_STACK_LINE(256)
		int tmp3 = Index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		this->_entries->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp3,(int)1);
		HX_STACK_LINE(258)
		int tmp4 = this->_curIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		int tmp5 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(258)
		if ((tmp7)){
			HX_STACK_LINE(260)
			int tmp8 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			this->_curIndex = tmp9;
		}
		HX_STACK_LINE(263)
		int tmp8 = this->_curIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		this->refreshCanvas(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,clearAt,(void))

Void BitmapLog_obj::clear( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","clear",0x21d708a2,"flixel.system.debug.log.BitmapLog.clear","flixel/system/debug/log/BitmapLog.hx",267,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(268)
			int tmp = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(268)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			while((true)){
				HX_STACK_LINE(268)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(268)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(268)
				if ((tmp2)){
					HX_STACK_LINE(268)
					break;
				}
				HX_STACK_LINE(268)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(268)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(270)
				Dynamic tmp4 = this->_entries->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(270)
				::openfl::_legacy::display::BitmapData tmp5 = tmp4->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(270)
				::flixel::util::FlxDestroyUtil_obj::dispose(tmp5);
				HX_STACK_LINE(271)
				hx::IndexRef((this->_entries).mPtr,i) = null();
			}
		}
		HX_STACK_LINE(273)
		this->_entries = cpp::ArrayBase_obj::__new();
		HX_STACK_LINE(274)
		::openfl::_legacy::display::Bitmap tmp = this->_canvasBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		if ((tmp2)){
			HX_STACK_LINE(275)
			::openfl::_legacy::display::Bitmap tmp3 = this->_canvasBitmap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(275)
			::openfl::_legacy::display::Bitmap tmp4 = this->_canvasBitmap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			::openfl::_legacy::geom::Rectangle tmp5 = tmp4->bitmapData->get_rect();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			tmp3->bitmapData->fillRect(tmp5,(int)0);
		}
		HX_STACK_LINE(276)
		::openfl::_legacy::text::TextField tmp3 = this->_dimensionsText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(276)
		tmp3->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(277)
		::openfl::_legacy::text::TextField tmp4 = this->_counterText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		tmp4->set_text(HX_HCSTRING("0/0","\x51","\x95","\x24","\x00"));
		HX_STACK_LINE(278)
		::openfl::_legacy::text::TextField tmp5 = this->_footerText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		tmp5->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,clear,(void))

bool BitmapLog_obj::refreshCanvas( Dynamic Index){
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","refreshCanvas",0xb5b52d28,"flixel.system.debug.log.BitmapLog.refreshCanvas","flixel/system/debug/log/BitmapLog.hx",282,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(283)
	bool tmp = (this->_entries == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	if ((tmp1)){
		HX_STACK_LINE(283)
		int tmp3 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		tmp2 = (tmp4 <= (int)0);
	}
	else{
		HX_STACK_LINE(283)
		tmp2 = true;
	}
	HX_STACK_LINE(283)
	if ((tmp2)){
		HX_STACK_LINE(285)
		this->_curIndex = (int)0;
		HX_STACK_LINE(286)
		return false;
	}
	HX_STACK_LINE(289)
	bool tmp3 = (Index == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	if ((tmp3)){
		HX_STACK_LINE(291)
		int tmp4 = this->_curIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		Index = tmp4;
	}
	HX_STACK_LINE(294)
	::openfl::_legacy::display::Bitmap tmp4 = this->_canvasBitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(294)
	::openfl::_legacy::display::Bitmap tmp5 = this->_canvasBitmap;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(294)
	::openfl::_legacy::geom::Rectangle tmp6 = tmp5->bitmapData->get_rect();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(294)
	tmp4->bitmapData->fillRect(tmp6,(int)0);
	HX_STACK_LINE(296)
	bool tmp7 = (Index < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(296)
	if ((tmp7)){
		HX_STACK_LINE(298)
		int tmp8 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		Index = tmp9;
	}
	else{
		HX_STACK_LINE(300)
		Dynamic tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(300)
		int tmp9 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(300)
		bool tmp10 = (tmp8 >= tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		if ((tmp10)){
			HX_STACK_LINE(302)
			Index = (int)0;
		}
	}
	HX_STACK_LINE(305)
	this->_curIndex = Index;
	HX_STACK_LINE(308)
	::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(308)
	::openfl::_legacy::display::Bitmap tmp9 = this->_canvasBitmap;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(308)
	int tmp10 = tmp9->bitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(308)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(308)
	int tmp12 = this->_curIndex;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(308)
	Dynamic tmp13 = this->_entries->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(308)
	int tmp14 = tmp13->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(308)
	Float tmp15 = this->zoom;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(308)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(308)
	Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(308)
	Float tmp18 = (tmp11 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(308)
	tmp8->set_x(tmp18);
	HX_STACK_LINE(309)
	::flixel::math::FlxPoint tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(309)
	::openfl::_legacy::display::Bitmap tmp20 = this->_canvasBitmap;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(309)
	int tmp21 = tmp20->bitmapData->get_height();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(309)
	Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(309)
	int tmp23 = this->_curIndex;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(309)
	Dynamic tmp24 = this->_entries->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(309)
	int tmp25 = tmp24->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(309)
	Float tmp26 = this->zoom;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(309)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(309)
	Float tmp28 = (Float(tmp27) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(309)
	Float tmp29 = (tmp22 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(309)
	tmp19->set_y(tmp29);
	HX_STACK_LINE(311)
	::flixel::math::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(311)
	::flixel::math::FlxPoint tmp31 = this->_curMouseOffset;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(311)
	tmp30->addPoint(tmp31);
	HX_STACK_LINE(313)
	::openfl::_legacy::geom::Matrix tmp32 = this->_matrix;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(313)
	tmp32->identity();
	HX_STACK_LINE(314)
	::openfl::_legacy::geom::Matrix tmp33 = this->_matrix;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(314)
	Float tmp34 = this->zoom;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(314)
	Float tmp35 = this->zoom;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(314)
	tmp33->scale(tmp34,tmp35);
	HX_STACK_LINE(315)
	::openfl::_legacy::geom::Matrix tmp36 = this->_matrix;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(315)
	::flixel::math::FlxPoint tmp37 = this->_point;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(315)
	Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(315)
	::flixel::math::FlxPoint tmp39 = this->_point;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(315)
	Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(315)
	tmp36->translate(tmp38,tmp40);
	HX_STACK_LINE(317)
	::openfl::_legacy::display::Bitmap tmp41 = this->_canvasBitmap;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(317)
	int tmp42 = this->_curIndex;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(317)
	Dynamic tmp43 = this->_entries->__GetItem(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(317)
	::openfl::_legacy::display::BitmapData tmp44 = tmp43->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(317)
	::openfl::_legacy::geom::Matrix tmp45 = this->_matrix;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(317)
	::openfl::_legacy::display::Bitmap tmp46 = this->_canvasBitmap;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(317)
	::openfl::_legacy::geom::Rectangle tmp47 = tmp46->bitmapData->get_rect();		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(317)
	tmp41->bitmapData->draw(tmp44,tmp45,null(),null(),tmp47,false);
	HX_STACK_LINE(319)
	int tmp48 = this->_curIndex;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(319)
	Dynamic tmp49 = this->_entries->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(319)
	::openfl::_legacy::display::BitmapData tmp50 = tmp49->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(319)
	this->drawBoundingBox(tmp50);
	HX_STACK_LINE(320)
	::openfl::_legacy::display::Bitmap tmp51 = this->_canvasBitmap;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(320)
	::openfl::_legacy::display::Sprite tmp52 = ::flixel::util::FlxSpriteUtil_obj::flashGfxSprite;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(320)
	::openfl::_legacy::geom::Matrix tmp53 = this->_matrix;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(320)
	::openfl::_legacy::display::Bitmap tmp54 = this->_canvasBitmap;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(320)
	::openfl::_legacy::geom::Rectangle tmp55 = tmp54->bitmapData->get_rect();		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(320)
	tmp51->bitmapData->draw(tmp52,tmp53,null(),null(),tmp55,false);
	HX_STACK_LINE(322)
	this->refreshTexts();
	HX_STACK_LINE(324)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,refreshCanvas,return )

Void BitmapLog_obj::refreshTexts( ){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","refreshTexts",0xaf73ecd6,"flixel.system.debug.log.BitmapLog.refreshTexts","flixel/system/debug/log/BitmapLog.hx",328,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		::openfl::_legacy::text::TextField tmp = this->_dimensionsText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		int tmp1 = this->_curIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		Dynamic tmp2 = this->_entries->__GetItem(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		int tmp3 = tmp2->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		::String tmp4 = (tmp3 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(329)
		int tmp5 = this->_curIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(329)
		Dynamic tmp6 = this->_entries->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(329)
		int tmp7 = tmp6->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic )->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(329)
		::String tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(329)
		tmp->set_text(tmp8);
		HX_STACK_LINE(330)
		::openfl::_legacy::text::TextField tmp9 = this->_counterText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(330)
		int tmp10 = this->_curIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(330)
		int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(330)
		::String tmp12 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(330)
		::String tmp13 = (tmp12 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(330)
		int tmp14 = this->_entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(330)
		::String tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(330)
		tmp9->set_text(tmp15);
		HX_STACK_LINE(332)
		int tmp16 = this->_curIndex;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(332)
		Dynamic tmp17 = this->_entries->__GetItem(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(332)
		::String entryName = tmp17->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(entryName,"entryName");
		HX_STACK_LINE(333)
		bool tmp18 = (entryName == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(333)
		::String tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(333)
		if ((tmp18)){
			HX_STACK_LINE(333)
			tmp19 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(333)
			::String tmp20 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + entryName);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(333)
			tmp19 = (tmp20 + HX_HCSTRING("\" | ","\x62","\xf5","\x91","\x16"));
		}
		HX_STACK_LINE(333)
		::String name = tmp19;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(334)
		::openfl::_legacy::text::TextField tmp20 = this->_footerText;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(334)
		::String tmp21 = name;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(334)
		Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			int tmp23 = this->_curIndex;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(334)
			Dynamic tmp24 = this->_entries->__GetItem(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(334)
			::openfl::_legacy::display::BitmapData bitmapData = tmp24->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(bitmapData,"bitmapData");
			HX_STACK_LINE(334)
			int tmp25 = bitmapData->get_width();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(334)
			int tmp26 = bitmapData->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(334)
			int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(334)
			tmp22 = (tmp27 * (int)4);
		}
		HX_STACK_LINE(334)
		::String tmp23 = ::flixel::util::FlxStringUtil_obj::formatBytes(tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(334)
		::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(334)
		tmp20->set_text(tmp24);
		HX_STACK_LINE(336)
		this->resizeTexts();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,refreshTexts,(void))

Void BitmapLog_obj::drawBoundingBox( ::openfl::_legacy::display::BitmapData bitmap){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","drawBoundingBox",0xaffc5ab8,"flixel.system.debug.log.BitmapLog.drawBoundingBox","flixel/system/debug/log/BitmapLog.hx",340,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bitmap,"bitmap")
		HX_STACK_LINE(341)
		::openfl::_legacy::display::Graphics tmp = ::flixel::util::FlxSpriteUtil_obj::flashGfx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(341)
		::openfl::_legacy::display::Graphics gfx = tmp;		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(342)
		gfx->clear();
		HX_STACK_LINE(343)
		gfx->lineStyle((int)1,(int)-65536,((Float)0.75),false,::openfl::_legacy::display::LineScaleMode_obj::NONE,null(),null(),null());
		HX_STACK_LINE(344)
		Float tmp1 = this->zoom;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		Float tmp2 = (Float((int)1) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(344)
		Float offset = tmp2;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(345)
		Float tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(345)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(345)
		Float tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		int tmp7 = bitmap->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(345)
		Float tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(345)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(345)
		int tmp10 = bitmap->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		Float tmp11 = offset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(345)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(345)
		gfx->drawRect(tmp4,tmp6,tmp9,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,drawBoundingBox,(void))

Void BitmapLog_obj::onMouseWheel( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","onMouseWheel",0x4e236fc0,"flixel.system.debug.log.BitmapLog.onMouseWheel","flixel/system/debug/log/BitmapLog.hx",349,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			::flixel::_system::debug::log::BitmapLog _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(350)
			Float tmp = _g->__Field(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(350)
			bool tmp1 = (e->delta < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			if ((tmp1)){
				HX_STACK_LINE(350)
				tmp2 = (int)-1;
			}
			else{
				HX_STACK_LINE(350)
				tmp2 = (int)1;
			}
			HX_STACK_LINE(350)
			Float tmp3 = (tmp2 * ((Float)0.25));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			Float tmp4 = this->zoom;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(350)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(350)
			_g->__Field(HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(351)
		this->refreshCanvas(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMouseWheel,(void))

Void BitmapLog_obj::onMiddleDown( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","onMiddleDown",0xe4b70de1,"flixel.system.debug.log.BitmapLog.onMiddleDown","flixel/system/debug/log/BitmapLog.hx",355,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(356)
		this->_middleMouseDown = true;
		HX_STACK_LINE(357)
		::flixel::math::FlxPoint tmp = this->_lastMousePos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		Float tmp1 = this->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		Float tmp2 = this->get_mouseY();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(357)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleDown,(void))

Void BitmapLog_obj::onMiddleUp( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","onMiddleUp",0x4f90ce1a,"flixel.system.debug.log.BitmapLog.onMiddleUp","flixel/system/debug/log/BitmapLog.hx",362,0x69d60e7d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(362)
		this->_middleMouseDown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,onMiddleUp,(void))

Float BitmapLog_obj::set_zoom( Float Value){
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","set_zoom",0x618efc1b,"flixel.system.debug.log.BitmapLog.set_zoom","flixel/system/debug/log/BitmapLog.hx",366,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(367)
	bool tmp = (Value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	if ((tmp)){
		HX_STACK_LINE(369)
		Value = (int)0;
	}
	HX_STACK_LINE(371)
	Float tmp1 = this->zoom = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapLog_obj,set_zoom,return )

::openfl::_legacy::display::BitmapData BitmapLog_obj::get__canvas( ){
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","get__canvas",0xe6bd5b63,"flixel.system.debug.log.BitmapLog.get__canvas","flixel/system/debug/log/BitmapLog.hx",375,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	::openfl::_legacy::display::Bitmap tmp = this->_canvasBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__canvas,return )

Dynamic BitmapLog_obj::get__curEntry( ){
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","get__curEntry",0xc066721d,"flixel.system.debug.log.BitmapLog.get__curEntry","flixel/system/debug/log/BitmapLog.hx",380,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(381)
	int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(381)
	Dynamic tmp1 = this->_entries->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curEntry,return )

::openfl::_legacy::display::BitmapData BitmapLog_obj::get__curBitmap( ){
	HX_STACK_FRAME("flixel.system.debug.log.BitmapLog","get__curBitmap",0x85268be4,"flixel.system.debug.log.BitmapLog.get__curBitmap","flixel/system/debug/log/BitmapLog.hx",385,0x69d60e7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(386)
	int tmp = this->_curIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	Dynamic tmp1 = this->_entries->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	::openfl::_legacy::display::BitmapData tmp2 = tmp1->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(386)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapLog_obj,get__curBitmap,return )


BitmapLog_obj::BitmapLog_obj()
{
}

void BitmapLog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapLog);
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_MARK_MEMBER_NAME(_entries,"_entries");
	HX_MARK_MEMBER_NAME(_curIndex,"_curIndex");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_MARK_MEMBER_NAME(_buttonText,"_buttonText");
	HX_MARK_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_MARK_MEMBER_NAME(_counterText,"_counterText");
	HX_MARK_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_MARK_MEMBER_NAME(_footer,"_footer");
	HX_MARK_MEMBER_NAME(_footerText,"_footerText");
	::flixel::_system::debug::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapLog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(_canvasBitmap,"_canvasBitmap");
	HX_VISIT_MEMBER_NAME(_entries,"_entries");
	HX_VISIT_MEMBER_NAME(_curIndex,"_curIndex");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_curMouseOffset,"_curMouseOffset");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_buttonLeft,"_buttonLeft");
	HX_VISIT_MEMBER_NAME(_buttonText,"_buttonText");
	HX_VISIT_MEMBER_NAME(_buttonRight,"_buttonRight");
	HX_VISIT_MEMBER_NAME(_counterText,"_counterText");
	HX_VISIT_MEMBER_NAME(_dimensionsText,"_dimensionsText");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_middleMouseDown,"_middleMouseDown");
	HX_VISIT_MEMBER_NAME(_footer,"_footer");
	HX_VISIT_MEMBER_NAME(_footerText,"_footerText");
	::flixel::_system::debug::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BitmapLog_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return _ui; }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { if (inCallProp == hx::paccAlways) return get__canvas(); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_footer") ) { return _footer; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"clearAt") ) { return clearAt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { return _entries; }
		if (HX_FIELD_EQ(inName,"previous") ) { return previous_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { return _curIndex; }
		if (HX_FIELD_EQ(inName,"_curEntry") ) { if (inCallProp == hx::paccAlways) return get__curEntry(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curBitmap") ) { if (inCallProp == hx::paccAlways) return get__curBitmap(); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return updateSize_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleUp") ) { return onMiddleUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { return _buttonLeft; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { return _buttonText; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { return _footerText; }
		if (HX_FIELD_EQ(inName,"resizeTexts") ) { return resizeTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"get__canvas") ) { return get__canvas_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { return _buttonRight; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { return _counterText; }
		if (HX_FIELD_EQ(inName,"refreshTexts") ) { return refreshTexts_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onMiddleDown") ) { return onMiddleDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { return _canvasBitmap; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return _lastMousePos; }
		if (HX_FIELD_EQ(inName,"resetSettings") ) { return resetSettings_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshCanvas") ) { return refreshCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"get__curEntry") ) { return get__curEntry_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createHeaderUI") ) { return createHeaderUI_dyn(); }
		if (HX_FIELD_EQ(inName,"createFooterUI") ) { return createFooterUI_dyn(); }
		if (HX_FIELD_EQ(inName,"get__curBitmap") ) { return get__curBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { return _curMouseOffset; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { return _dimensionsText; }
		if (HX_FIELD_EQ(inName,"drawBoundingBox") ) { return drawBoundingBox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { return _middleMouseDown; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapLog_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footer") ) { _footer=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_entries") ) { _entries=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_curIndex") ) { _curIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_buttonLeft") ) { _buttonLeft=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttonText") ) { _buttonText=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_footerText") ) { _footerText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_buttonRight") ) { _buttonRight=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counterText") ) { _counterText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_canvasBitmap") ) { _canvasBitmap=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_curMouseOffset") ) { _curMouseOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dimensionsText") ) { _dimensionsText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_middleMouseDown") ) { _middleMouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapLog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("_canvas","\x77","\x66","\xb9","\x26"));
	outFields->push(HX_HCSTRING("_canvasBitmap","\xc6","\x9d","\xe4","\x7e"));
	outFields->push(HX_HCSTRING("_entries","\xd1","\x86","\x17","\xb3"));
	outFields->push(HX_HCSTRING("_curIndex","\xd1","\x8c","\x58","\x4d"));
	outFields->push(HX_HCSTRING("_curEntry","\x31","\x6a","\xca","\xff"));
	outFields->push(HX_HCSTRING("_curBitmap","\x50","\xa5","\x3b","\xbd"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_lastMousePos","\xc4","\x43","\x1f","\xe8"));
	outFields->push(HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_buttonLeft","\x38","\x44","\x30","\x84"));
	outFields->push(HX_HCSTRING("_buttonText","\xde","\x08","\x7a","\x89"));
	outFields->push(HX_HCSTRING("_buttonRight","\x8b","\x7a","\x18","\x9d"));
	outFields->push(HX_HCSTRING("_counterText","\xca","\x83","\x9f","\xad"));
	outFields->push(HX_HCSTRING("_dimensionsText","\x39","\xaa","\x64","\x11"));
	outFields->push(HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00"));
	outFields->push(HX_HCSTRING("_middleMouseDown","\x93","\x6d","\xdd","\xec"));
	outFields->push(HX_HCSTRING("_footer","\x3a","\x50","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("_footerText","\x07","\xee","\x07","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BitmapLog_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(BitmapLog_obj,_canvasBitmap),HX_HCSTRING("_canvasBitmap","\xc6","\x9d","\xe4","\x7e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(BitmapLog_obj,_entries),HX_HCSTRING("_entries","\xd1","\x86","\x17","\xb3")},
	{hx::fsInt,(int)offsetof(BitmapLog_obj,_curIndex),HX_HCSTRING("_curIndex","\xd1","\x8c","\x58","\x4d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_lastMousePos),HX_HCSTRING("_lastMousePos","\xc4","\x43","\x1f","\xe8")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(BitmapLog_obj,_curMouseOffset),HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(BitmapLog_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonLeft),HX_HCSTRING("_buttonLeft","\x38","\x44","\x30","\x84")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonText),HX_HCSTRING("_buttonText","\xde","\x08","\x7a","\x89")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(BitmapLog_obj,_buttonRight),HX_HCSTRING("_buttonRight","\x8b","\x7a","\x18","\x9d")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_counterText),HX_HCSTRING("_counterText","\xca","\x83","\x9f","\xad")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_dimensionsText),HX_HCSTRING("_dimensionsText","\x39","\xaa","\x64","\x11")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(BitmapLog_obj,_ui),HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00")},
	{hx::fsBool,(int)offsetof(BitmapLog_obj,_middleMouseDown),HX_HCSTRING("_middleMouseDown","\x93","\x6d","\xdd","\xec")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(BitmapLog_obj,_footer),HX_HCSTRING("_footer","\x3a","\x50","\x0f","\x6a")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(BitmapLog_obj,_footerText),HX_HCSTRING("_footerText","\x07","\xee","\x07","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("_canvasBitmap","\xc6","\x9d","\xe4","\x7e"),
	HX_HCSTRING("_entries","\xd1","\x86","\x17","\xb3"),
	HX_HCSTRING("_curIndex","\xd1","\x8c","\x58","\x4d"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_lastMousePos","\xc4","\x43","\x1f","\xe8"),
	HX_HCSTRING("_curMouseOffset","\x97","\x16","\x9a","\xf4"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_buttonLeft","\x38","\x44","\x30","\x84"),
	HX_HCSTRING("_buttonText","\xde","\x08","\x7a","\x89"),
	HX_HCSTRING("_buttonRight","\x8b","\x7a","\x18","\x9d"),
	HX_HCSTRING("_counterText","\xca","\x83","\x9f","\xad"),
	HX_HCSTRING("_dimensionsText","\x39","\xaa","\x64","\x11"),
	HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00"),
	HX_HCSTRING("_middleMouseDown","\x93","\x6d","\xdd","\xec"),
	HX_HCSTRING("_footer","\x3a","\x50","\x0f","\x6a"),
	HX_HCSTRING("_footerText","\x07","\xee","\x07","\xc9"),
	HX_HCSTRING("createHeaderUI","\x3d","\x10","\x7a","\x96"),
	HX_HCSTRING("createFooterUI","\xcb","\x24","\x54","\x93"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeTexts","\x92","\xcc","\x9c","\x4c"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("previous","\x37","\xbc","\xb0","\x23"),
	HX_HCSTRING("resetSettings","\xd2","\x69","\xdc","\xbb"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("clearAt","\xe0","\xe7","\x44","\xab"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("refreshCanvas","\x13","\xf9","\x7c","\xb6"),
	HX_HCSTRING("refreshTexts","\x4b","\x47","\x1b","\x21"),
	HX_HCSTRING("drawBoundingBox","\x63","\x37","\x3f","\x4b"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMiddleDown","\x56","\x68","\x5e","\x56"),
	HX_HCSTRING("onMiddleUp","\x4f","\x31","\xf1","\x1d"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("get__canvas","\x8e","\xc6","\xb3","\xac"),
	HX_HCSTRING("get__curEntry","\x08","\x3e","\x2e","\xc1"),
	HX_HCSTRING("get__curBitmap","\x99","\x2d","\x31","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapLog_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapLog_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapLog_obj::__mClass;

void BitmapLog_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.log.BitmapLog","\xc3","\xc9","\x7a","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapLog_obj >;
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

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
