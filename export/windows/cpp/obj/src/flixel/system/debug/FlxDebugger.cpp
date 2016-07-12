#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicBitmapLog
#include <flixel/system/debug/GraphicBitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicConsole
#include <flixel/system/debug/GraphicConsole.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicWatch
#include <flixel/system/debug/GraphicWatch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicDrawDebug
#include <flixel/system/debug/_FlxDebugger/GraphicDrawDebug.h>
#endif
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#include <flixel/system/debug/_FlxDebugger/GraphicFlixel.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_BitmapLog
#include <flixel/system/debug/log/BitmapLog.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_Log
#include <flixel/system/debug/log/Log.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_Stats
#include <flixel/system/debug/stats/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Tracker
#include <flixel/system/debug/watch/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void FlxDebugger_obj::__construct(Float Width,Float Height)
{
HX_STACK_FRAME("flixel.system.debug.FlxDebugger","new",0x06ebd57d,"flixel.system.debug.FlxDebugger.new","flixel/system/debug/FlxDebugger.hx",61,0xd9fc0a74)
HX_STACK_THIS(this)
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(110)
	this->_wasUsingSystemCursor = false;
	HX_STACK_LINE(109)
	this->_wasMouseVisible = true;
	HX_STACK_LINE(108)
	this->_usingSystemCursor = false;
	HX_STACK_LINE(106)
	this->_windows = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static ::haxe::ds::EnumValueMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/FlxDebugger.hx",99,0xd9fc0a74)
			{
				HX_STACK_LINE(99)
				::haxe::ds::EnumValueMap tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(99)
				{
					HX_STACK_LINE(99)
					::haxe::ds::EnumValueMap tmp1 = ::haxe::ds::EnumValueMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(99)
					::haxe::ds::EnumValueMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(99)
					tmp = tmp2;
				}
				HX_STACK_LINE(99)
				::haxe::ds::EnumValueMap _g = tmp;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				_g->set(::flixel::util::FlxHorizontalAlign_obj::LEFT,Array_obj< ::Dynamic >::__new());
				HX_STACK_LINE(99)
				_g->set(::flixel::util::FlxHorizontalAlign_obj::CENTER,Array_obj< ::Dynamic >::__new());
				HX_STACK_LINE(99)
				_g->set(::flixel::util::FlxHorizontalAlign_obj::RIGHT,Array_obj< ::Dynamic >::__new());
				HX_STACK_LINE(99)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(99)
	this->_buttons = _Function_1_1::Block();
	HX_STACK_LINE(92)
	this->_screen = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(88)
	this->_layout = ::flixel::_system::debug::FlxDebuggerLayout_obj::STANDARD;
	HX_STACK_LINE(83)
	this->hasMouse = false;
	HX_STACK_LINE(121)
	super::__construct();
	HX_STACK_LINE(123)
	this->set_visible(false);
	HX_STACK_LINE(125)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	this->_topBar = tmp;
	HX_STACK_LINE(126)
	::openfl::_legacy::display::Sprite tmp1 = this->_topBar;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	::openfl::_legacy::display::Graphics tmp2 = tmp1->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	Float tmp3 = ((Float)0.66666666666666663);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	tmp2->beginFill((int)0,tmp3);
	HX_STACK_LINE(127)
	::openfl::_legacy::display::Sprite tmp4 = this->_topBar;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	::openfl::_legacy::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	int tmp8 = tmp7->get_stageWidth();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(127)
	tmp5->drawRect((int)0,(int)0,tmp8,(int)20);
	HX_STACK_LINE(128)
	::openfl::_legacy::display::Sprite tmp9 = this->_topBar;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(128)
	::openfl::_legacy::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(128)
	tmp10->endFill();
	HX_STACK_LINE(129)
	::openfl::_legacy::display::Sprite tmp11 = this->_topBar;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(129)
	this->addChild(tmp11);
	HX_STACK_LINE(131)
	::openfl::_legacy::text::TextField tmp12 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(131)
	::openfl::_legacy::text::TextField txt = tmp12;		HX_STACK_VAR(txt,"txt");
	HX_STACK_LINE(132)
	txt->set_height((int)20);
	HX_STACK_LINE(133)
	txt->set_selectable(false);
	HX_STACK_LINE(134)
	txt->set_y((int)-9);
	HX_STACK_LINE(135)
	txt->set_multiline(false);
	HX_STACK_LINE(136)
	txt->set_embedFonts(true);
	HX_STACK_LINE(137)
	::String tmp13 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(137)
	::openfl::_legacy::text::TextFormat tmp14 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp13,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(137)
	::openfl::_legacy::text::TextFormat format = tmp14;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(138)
	::openfl::_legacy::text::TextFormat tmp15 = format;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(138)
	txt->set_defaultTextFormat(tmp15);
	HX_STACK_LINE(139)
	txt->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(140)
	::flixel::_system::FlxVersion tmp16 = ::flixel::FlxG_obj::VERSION;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(140)
	::String tmp17 = ::Std_obj::string(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(140)
	txt->set_text(tmp17);
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		::flixel::_system::debug::log::Log tmp18 = ::flixel::_system::debug::log::Log_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(142)
		::flixel::_system::debug::log::Log tmp19 = this->log = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(142)
		::flixel::_system::debug::Window window = tmp19;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(142)
		::flixel::_system::debug::Window tmp20 = window;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(142)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
		HX_STACK_LINE(142)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(142)
		this->addChild(tmp21);
		HX_STACK_LINE(142)
		::openfl::_legacy::geom::Rectangle tmp22 = this->_screenBounds;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(142)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(142)
		if ((tmp23)){
			HX_STACK_LINE(142)
			this->updateBounds();
			HX_STACK_LINE(142)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(142)
		window;
	}
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::flixel::_system::debug::log::BitmapLog tmp18 = ::flixel::_system::debug::log::BitmapLog_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(143)
		::flixel::_system::debug::log::BitmapLog tmp19 = this->bitmapLog = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(143)
		::flixel::_system::debug::Window window = tmp19;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(143)
		::flixel::_system::debug::Window tmp20 = window;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(143)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
		HX_STACK_LINE(143)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(143)
		this->addChild(tmp21);
		HX_STACK_LINE(143)
		::openfl::_legacy::geom::Rectangle tmp22 = this->_screenBounds;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(143)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(143)
		if ((tmp23)){
			HX_STACK_LINE(143)
			this->updateBounds();
			HX_STACK_LINE(143)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(143)
		window;
	}
	HX_STACK_LINE(144)
	{
		HX_STACK_LINE(144)
		::flixel::_system::debug::watch::Watch tmp18 = ::flixel::_system::debug::watch::Watch_obj::__new(null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(144)
		::flixel::_system::debug::watch::Watch tmp19 = this->watch = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(144)
		::flixel::_system::debug::Window window = tmp19;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(144)
		::flixel::_system::debug::Window tmp20 = window;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(144)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
		HX_STACK_LINE(144)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(144)
		this->addChild(tmp21);
		HX_STACK_LINE(144)
		::openfl::_legacy::geom::Rectangle tmp22 = this->_screenBounds;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(144)
		bool tmp23 = (tmp22 != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(144)
		if ((tmp23)){
			HX_STACK_LINE(144)
			this->updateBounds();
			HX_STACK_LINE(144)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(144)
		window;
	}
	HX_STACK_LINE(145)
	::flixel::_system::debug::completion::CompletionList tmp18 = ::flixel::_system::debug::completion::CompletionList_obj::__new((int)5);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(145)
	this->completionList = tmp18;
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		::flixel::_system::debug::completion::CompletionList tmp19 = this->completionList;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(146)
		::flixel::_system::debug::console::Console tmp20 = ::flixel::_system::debug::console::Console_obj::__new(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(146)
		::flixel::_system::debug::console::Console tmp21 = this->console = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(146)
		::flixel::_system::debug::Window window = tmp21;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(146)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(146)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
		HX_STACK_LINE(146)
		::flixel::_system::debug::Window tmp23 = window;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(146)
		this->addChild(tmp23);
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle tmp24 = this->_screenBounds;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(146)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(146)
		if ((tmp25)){
			HX_STACK_LINE(146)
			this->updateBounds();
			HX_STACK_LINE(146)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(146)
		window;
	}
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		::flixel::_system::debug::stats::Stats tmp19 = ::flixel::_system::debug::stats::Stats_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(147)
		::flixel::_system::debug::stats::Stats tmp20 = this->stats = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(147)
		::flixel::_system::debug::Window window = tmp20;		HX_STACK_VAR(window,"window");
		HX_STACK_LINE(147)
		::flixel::_system::debug::Window tmp21 = window;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(147)
		this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
		HX_STACK_LINE(147)
		::flixel::_system::debug::Window tmp22 = window;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(147)
		this->addChild(tmp22);
		HX_STACK_LINE(147)
		::openfl::_legacy::geom::Rectangle tmp23 = this->_screenBounds;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(147)
		bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(147)
		if ((tmp24)){
			HX_STACK_LINE(147)
			this->updateBounds();
			HX_STACK_LINE(147)
			window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
		}
		HX_STACK_LINE(147)
		window;
	}
	HX_STACK_LINE(149)
	::flixel::_system::debug::VCR tmp19 = ::flixel::_system::debug::VCR_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(149)
	this->vcr = tmp19;
	HX_STACK_LINE(151)
	::flixel::_system::debug::_FlxDebugger::GraphicFlixel tmp20 = ::flixel::_system::debug::_FlxDebugger::GraphicFlixel_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(151)
	Dynamic tmp21 = this->openHomepage_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(151)
	this->addButton(::flixel::util::FlxHorizontalAlign_obj::LEFT,tmp20,tmp21,null(),null());
	HX_STACK_LINE(152)
	Dynamic tmp22 = this->openGitHub_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(152)
	::flixel::_system::ui::FlxSystemButton tmp23 = this->addButton(::flixel::util::FlxHorizontalAlign_obj::LEFT,null(),tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(152)
	::openfl::_legacy::text::TextField tmp24 = txt;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(152)
	tmp23->__Field(HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"), hx::paccDynamic )(tmp24);
	HX_STACK_LINE(154)
	::flixel::_system::debug::log::BitmapLog tmp25 = this->bitmapLog;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(154)
	this->addWindowToggleButton(tmp25,hx::ClassOf< ::flixel::_system::debug::GraphicBitmapLog >());
	HX_STACK_LINE(155)
	::flixel::_system::debug::log::Log tmp26 = this->log;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(155)
	this->addWindowToggleButton(tmp26,hx::ClassOf< ::flixel::_system::debug::GraphicLog >());
	HX_STACK_LINE(157)
	::flixel::_system::debug::watch::Watch tmp27 = this->watch;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(157)
	this->addWindowToggleButton(tmp27,hx::ClassOf< ::flixel::_system::debug::GraphicWatch >());
	HX_STACK_LINE(158)
	::flixel::_system::debug::console::Console tmp28 = this->console;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(158)
	this->addWindowToggleButton(tmp28,hx::ClassOf< ::flixel::_system::debug::GraphicConsole >());
	HX_STACK_LINE(159)
	::flixel::_system::debug::stats::Stats tmp29 = this->stats;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(159)
	this->addWindowToggleButton(tmp29,hx::ClassOf< ::flixel::_system::debug::GraphicStats >());
	HX_STACK_LINE(161)
	::flixel::_system::debug::_FlxDebugger::GraphicDrawDebug tmp30 = ::flixel::_system::debug::_FlxDebugger::GraphicDrawDebug_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(161)
	Dynamic tmp31 = this->toggleDrawDebug_dyn();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(161)
	::flixel::_system::ui::FlxSystemButton tmp32 = this->addButton(::flixel::util::FlxHorizontalAlign_obj::RIGHT,tmp30,tmp31,true,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(161)
	::flixel::_system::ui::FlxSystemButton drawDebugButton = tmp32;		HX_STACK_VAR(drawDebugButton,"drawDebugButton");
	HX_STACK_LINE(162)
	::flixel::_system::frontEnds::DebuggerFrontEnd tmp33 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(162)
	bool tmp34 = tmp33->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(162)
	bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(162)
	drawDebugButton->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp35);
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp36 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp36,"tmp36");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::flixel::_system::ui::FlxSystemButton,drawDebugButton)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/system/debug/FlxDebugger.hx",165,0xd9fc0a74)
			{
				HX_STACK_LINE(165)
				::flixel::_system::frontEnds::DebuggerFrontEnd tmp37 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(165)
				bool tmp38 = tmp37->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(165)
				drawDebugButton->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp38);
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(163)
		tmp36->__Field(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )( Dynamic(new _Function_2_1(drawDebugButton)));
	}
	HX_STACK_LINE(172)
	::flixel::_system::debug::completion::CompletionList tmp36 = this->completionList;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(172)
	this->addChild(tmp36);
	HX_STACK_LINE(174)
	Float tmp37 = Width;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(174)
	Float tmp38 = Height;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(174)
	this->onResize(tmp37,tmp38);
	HX_STACK_LINE(176)
	::String tmp39 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(176)
	Dynamic tmp40 = this->onMouseOver_dyn();		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(176)
	this->addEventListener(tmp39,tmp40,null(),null(),null());
	HX_STACK_LINE(177)
	::String tmp41 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(177)
	Dynamic tmp42 = this->onMouseOut_dyn();		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(177)
	this->addEventListener(tmp41,tmp42,null(),null(),null());
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		::flixel::_system::frontEnds::SignalFrontEnd tmp43 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(179)
		Dynamic tmp44 = ::flixel::_system::debug::watch::Tracker_obj::onStateSwitch_dyn();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(179)
		tmp43->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp44);
	}
}
;
	return null();
}

//FlxDebugger_obj::~FlxDebugger_obj() { }

Dynamic FlxDebugger_obj::__CreateEmpty() { return  new FlxDebugger_obj; }
hx::ObjectPtr< FlxDebugger_obj > FlxDebugger_obj::__new(Float Width,Float Height)
{  hx::ObjectPtr< FlxDebugger_obj > _result_ = new FlxDebugger_obj();
	_result_->__construct(Width,Height);
	return _result_;}

Dynamic FlxDebugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDebugger_obj > _result_ = new FlxDebugger_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void FlxDebugger_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","destroy",0x0aa38497,"flixel.system.debug.FlxDebugger.destroy","flixel/system/debug/FlxDebugger.hx",186,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->_screen = null();
		HX_STACK_LINE(188)
		this->_buttons = null();
		HX_STACK_LINE(190)
		::openfl::_legacy::display::Sprite tmp = this->_topBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		this->removeChild(tmp);
		HX_STACK_LINE(191)
		this->_topBar = null();
		HX_STACK_LINE(193)
		::flixel::_system::debug::log::Log tmp1 = this->log;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		if ((tmp2)){
			HX_STACK_LINE(195)
			::flixel::_system::debug::log::Log tmp3 = this->log;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(195)
			this->removeChild(tmp3);
			HX_STACK_LINE(196)
			::flixel::_system::debug::log::Log tmp4 = this->log;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			tmp4->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(197)
			this->log = null();
		}
		HX_STACK_LINE(199)
		::flixel::_system::debug::watch::Watch tmp3 = this->watch;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		if ((tmp4)){
			HX_STACK_LINE(201)
			::flixel::_system::debug::watch::Watch tmp5 = this->watch;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			this->removeChild(tmp5);
			HX_STACK_LINE(202)
			::flixel::_system::debug::watch::Watch tmp6 = this->watch;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			tmp6->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(203)
			this->watch = null();
		}
		HX_STACK_LINE(205)
		::flixel::_system::debug::log::BitmapLog tmp5 = this->bitmapLog;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		if ((tmp6)){
			HX_STACK_LINE(207)
			::flixel::_system::debug::log::BitmapLog tmp7 = this->bitmapLog;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(207)
			this->removeChild(tmp7);
			HX_STACK_LINE(208)
			::flixel::_system::debug::log::BitmapLog tmp8 = this->bitmapLog;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(208)
			tmp8->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(209)
			this->bitmapLog = null();
		}
		HX_STACK_LINE(211)
		::flixel::_system::debug::stats::Stats tmp7 = this->stats;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		if ((tmp8)){
			HX_STACK_LINE(213)
			::flixel::_system::debug::stats::Stats tmp9 = this->stats;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(213)
			this->removeChild(tmp9);
			HX_STACK_LINE(214)
			::flixel::_system::debug::stats::Stats tmp10 = this->stats;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			tmp10->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(215)
			this->stats = null();
		}
		HX_STACK_LINE(217)
		::flixel::_system::debug::console::Console tmp9 = this->console;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(217)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(217)
		if ((tmp10)){
			HX_STACK_LINE(219)
			::flixel::_system::debug::console::Console tmp11 = this->console;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(219)
			this->removeChild(tmp11);
			HX_STACK_LINE(220)
			::flixel::_system::debug::console::Console tmp12 = this->console;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			tmp12->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
			HX_STACK_LINE(221)
			this->console = null();
		}
		HX_STACK_LINE(224)
		this->_windows = null();
		HX_STACK_LINE(226)
		::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(226)
		Dynamic tmp12 = this->onMouseOver_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		this->removeEventListener(tmp11,tmp12,null());
		HX_STACK_LINE(227)
		::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(227)
		Dynamic tmp14 = this->onMouseOut_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(227)
		this->removeEventListener(tmp13,tmp14,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,destroy,(void))

Void FlxDebugger_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","update",0x10a9d10c,"flixel.system.debug.FlxDebugger.update","flixel/system/debug/FlxDebugger.hx",232,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		Array< ::Dynamic > _g1 = this->_windows;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(232)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			if ((tmp1)){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(232)
			::flixel::_system::debug::Window tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			::flixel::_system::debug::Window window = tmp2;		HX_STACK_VAR(window,"window");
			HX_STACK_LINE(232)
			++(_g);
			HX_STACK_LINE(233)
			window->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,update,(void))

Void FlxDebugger_obj::setLayout( ::flixel::_system::debug::FlxDebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","setLayout",0x62385cc9,"flixel.system.debug.FlxDebugger.setLayout","flixel/system/debug/FlxDebugger.hx",242,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
		HX_STACK_LINE(243)
		this->_layout = Layout;
		HX_STACK_LINE(244)
		this->resetLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,setLayout,(void))

Void FlxDebugger_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetLayout",0xf3cb1bf6,"flixel.system.debug.FlxDebugger.resetLayout","flixel/system/debug/FlxDebugger.hx",253,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		::flixel::_system::debug::FlxDebuggerLayout tmp = this->_layout;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		::flixel::_system::debug::FlxDebuggerLayout _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(256)
				::flixel::_system::debug::log::Log tmp1 = this->log;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(256)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(256)
				Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(256)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp4,(int)68);
				HX_STACK_LINE(257)
				::flixel::_system::debug::log::Log tmp5 = this->log;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				::openfl::_legacy::geom::Point tmp6 = this->_screen;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(257)
				Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(257)
				tmp5->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp7);
				HX_STACK_LINE(258)
				::flixel::_system::debug::console::Console tmp8 = this->console;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(258)
				::openfl::_legacy::geom::Point tmp9 = this->_screen;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(258)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(258)
				Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(258)
				int tmp12 = (int)8;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(258)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(258)
				tmp8->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp13,(int)35);
				HX_STACK_LINE(259)
				::flixel::_system::debug::console::Console tmp14 = this->console;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				::flixel::_system::debug::log::Log tmp15 = this->log;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(259)
				Float tmp16 = tmp15->__Field(HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(259)
				::flixel::_system::debug::log::Log tmp17 = this->log;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(259)
				Float tmp18 = tmp17->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(259)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(259)
				Float tmp20 = (tmp19 + (int)2);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(259)
				::openfl::_legacy::geom::Point tmp21 = this->_screen;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(259)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(259)
				tmp14->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp20,tmp22);
				HX_STACK_LINE(260)
				::flixel::_system::debug::watch::Watch tmp23 = this->watch;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(260)
				::openfl::_legacy::geom::Point tmp24 = this->_screen;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(260)
				Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(260)
				Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(260)
				tmp23->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp26,(int)68);
				HX_STACK_LINE(261)
				::flixel::_system::debug::watch::Watch tmp27 = this->watch;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(261)
				::openfl::_legacy::geom::Point tmp28 = this->_screen;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(261)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(261)
				::openfl::_legacy::geom::Point tmp30 = this->_screen;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(261)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(261)
				tmp27->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp29,tmp31);
				HX_STACK_LINE(262)
				::flixel::_system::debug::stats::Stats tmp32 = this->stats;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(262)
				::openfl::_legacy::geom::Point tmp33 = this->_screen;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(262)
				Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(262)
				tmp32->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp34,(int)0);
				HX_STACK_LINE(263)
				::flixel::_system::debug::log::BitmapLog tmp35 = this->bitmapLog;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(263)
				::openfl::_legacy::geom::Point tmp36 = this->_screen;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(263)
				Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(263)
				Float tmp38 = (Float(tmp37) / Float((int)4));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(263)
				tmp35->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp38,(int)68);
				HX_STACK_LINE(264)
				::flixel::_system::debug::log::BitmapLog tmp39 = this->bitmapLog;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(264)
				::openfl::_legacy::geom::Point tmp40 = this->_screen;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(264)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(264)
				int tmp42 = (int)136;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(264)
				Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(264)
				int tmp44 = (int)4;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(264)
				Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(264)
				tmp39->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp45);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(266)
				::flixel::_system::debug::console::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(266)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(266)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(267)
				::flixel::_system::debug::console::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(267)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(268)
				::flixel::_system::debug::log::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(268)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(268)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(268)
				int tmp12 = (int)6;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(268)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(268)
				Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(268)
				::openfl::_legacy::geom::Point tmp15 = this->_screen;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(268)
				Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(268)
				Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(268)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp14,tmp17);
				HX_STACK_LINE(269)
				::flixel::_system::debug::log::Log tmp18 = this->log;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(269)
				::openfl::_legacy::geom::Point tmp19 = this->_screen;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(269)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(269)
				::flixel::_system::debug::log::Log tmp21 = this->log;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(269)
				Float tmp22 = tmp21->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(269)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(269)
				::flixel::_system::debug::console::Console tmp24 = this->console;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(269)
				Float tmp25 = tmp24->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(269)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(269)
				Float tmp27 = ((Float)3.);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(269)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(269)
				tmp18->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp28);
				HX_STACK_LINE(270)
				::flixel::_system::debug::watch::Watch tmp29 = this->watch;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(270)
				::openfl::_legacy::geom::Point tmp30 = this->_screen;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(270)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(270)
				int tmp32 = (int)6;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(270)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(270)
				Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(270)
				::openfl::_legacy::geom::Point tmp35 = this->_screen;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(270)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(270)
				Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(270)
				tmp29->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp34,tmp37);
				HX_STACK_LINE(271)
				::flixel::_system::debug::watch::Watch tmp38 = this->watch;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(271)
				::openfl::_legacy::geom::Point tmp39 = this->_screen;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(271)
				Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(271)
				::openfl::_legacy::geom::Point tmp41 = this->_screen;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(271)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(271)
				::flixel::_system::debug::watch::Watch tmp43 = this->watch;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(271)
				Float tmp44 = tmp43->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(271)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(271)
				::flixel::_system::debug::console::Console tmp46 = this->console;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(271)
				Float tmp47 = tmp46->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(271)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(271)
				Float tmp49 = ((Float)3.);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(271)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(271)
				tmp38->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp40,tmp50);
				HX_STACK_LINE(272)
				::flixel::_system::debug::stats::Stats tmp51 = this->stats;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(272)
				::openfl::_legacy::geom::Point tmp52 = this->_screen;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(272)
				Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(272)
				tmp51->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp53,(int)0);
				HX_STACK_LINE(273)
				::flixel::_system::debug::log::BitmapLog tmp54 = this->bitmapLog;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(273)
				::openfl::_legacy::geom::Point tmp55 = this->_screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(273)
				Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(273)
				int tmp57 = (int)6;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(273)
				Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(273)
				Float tmp59 = (Float(tmp58) / Float((int)2));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(273)
				::openfl::_legacy::geom::Point tmp60 = this->_screen;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(273)
				Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(273)
				int tmp62 = (int)4;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(273)
				Float tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(273)
				::openfl::_legacy::geom::Point tmp64 = this->_screen;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(273)
				Float tmp65 = tmp64->y;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(273)
				Float tmp66 = (Float(tmp65) / Float((int)2));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(273)
				Float tmp67 = (tmp63 - tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(273)
				int tmp68 = (int)70;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(273)
				Float tmp69 = (tmp67 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(273)
				tmp54->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp59,tmp69);
				HX_STACK_LINE(274)
				::flixel::_system::debug::log::BitmapLog tmp70 = this->bitmapLog;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(274)
				Float tmp71 = ((Float)3.);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(274)
				tmp70->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp71);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(276)
				::flixel::_system::debug::console::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(276)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(276)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(276)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(277)
				::flixel::_system::debug::console::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(277)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,(int)0);
				HX_STACK_LINE(278)
				::flixel::_system::debug::log::Log tmp7 = this->log;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(278)
				::openfl::_legacy::geom::Point tmp8 = this->_screen;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(278)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(278)
				int tmp10 = (int)6;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(278)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(278)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(278)
				::openfl::_legacy::geom::Point tmp13 = this->_screen;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(278)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(278)
				Float tmp15 = (Float(tmp14) / Float((int)4));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(278)
				tmp7->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp12,tmp15);
				HX_STACK_LINE(279)
				::flixel::_system::debug::log::Log tmp16 = this->log;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(279)
				::flixel::_system::debug::console::Console tmp17 = this->console;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(279)
				Float tmp18 = tmp17->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(279)
				Float tmp19 = (tmp18 + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(279)
				Float tmp20 = (tmp19 + (int)15);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(279)
				tmp16->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp20);
				HX_STACK_LINE(280)
				::flixel::_system::debug::watch::Watch tmp21 = this->watch;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(280)
				::openfl::_legacy::geom::Point tmp22 = this->_screen;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(280)
				Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(280)
				int tmp24 = (int)6;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(280)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(280)
				Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(280)
				::openfl::_legacy::geom::Point tmp27 = this->_screen;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(280)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(280)
				Float tmp29 = (Float(tmp28) / Float((int)4));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(280)
				tmp21->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp26,tmp29);
				HX_STACK_LINE(281)
				::flixel::_system::debug::watch::Watch tmp30 = this->watch;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(281)
				::openfl::_legacy::geom::Point tmp31 = this->_screen;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(281)
				Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(281)
				::flixel::_system::debug::console::Console tmp33 = this->console;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(281)
				Float tmp34 = tmp33->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(281)
				Float tmp35 = (tmp34 + (int)2);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(281)
				Float tmp36 = (tmp35 + (int)15);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(281)
				tmp30->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp32,tmp36);
				HX_STACK_LINE(282)
				::flixel::_system::debug::stats::Stats tmp37 = this->stats;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(282)
				::openfl::_legacy::geom::Point tmp38 = this->_screen;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(282)
				Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(282)
				::openfl::_legacy::geom::Point tmp40 = this->_screen;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(282)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(282)
				tmp37->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp39,tmp41);
				HX_STACK_LINE(283)
				::flixel::_system::debug::log::BitmapLog tmp42 = this->bitmapLog;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(283)
				::openfl::_legacy::geom::Point tmp43 = this->_screen;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(283)
				Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(283)
				int tmp45 = (int)6;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(283)
				Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(283)
				Float tmp47 = (Float(tmp46) / Float((int)2));		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(283)
				::openfl::_legacy::geom::Point tmp48 = this->_screen;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(283)
				Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(283)
				Float tmp50 = (Float(tmp49) / Float((int)4));		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(283)
				tmp42->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp47,tmp50);
				HX_STACK_LINE(284)
				::flixel::_system::debug::log::BitmapLog tmp51 = this->bitmapLog;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(284)
				::flixel::_system::debug::console::Console tmp52 = this->console;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(284)
				Float tmp53 = tmp52->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(284)
				int tmp54 = (int)4;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(284)
				Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(284)
				Float tmp56 = (tmp55 + (int)15);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(284)
				::openfl::_legacy::geom::Point tmp57 = this->_screen;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(284)
				Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(284)
				Float tmp59 = (Float(tmp58) / Float((int)4));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(284)
				Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(284)
				Float tmp61 = (tmp60 + (int)2);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(284)
				tmp51->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp61);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(286)
				::flixel::_system::debug::console::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(286)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(286)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(287)
				::flixel::_system::debug::console::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(287)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(287)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(287)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(288)
				::flixel::_system::debug::log::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(288)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(288)
				Float tmp12 = (Float(tmp11) / Float((int)3));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(288)
				::openfl::_legacy::geom::Point tmp13 = this->_screen;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(288)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(288)
				Float tmp15 = (tmp14 - (int)15);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(288)
				Float tmp16 = ((Float)5.);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(288)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(288)
				Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(288)
				::flixel::_system::debug::console::Console tmp19 = this->console;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(288)
				Float tmp20 = tmp19->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(288)
				Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(288)
				Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(288)
				Float tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(288)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp12,tmp23);
				HX_STACK_LINE(289)
				::flixel::_system::debug::log::Log tmp24 = this->log;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(289)
				tmp24->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,(int)0);
				HX_STACK_LINE(290)
				::flixel::_system::debug::watch::Watch tmp25 = this->watch;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(290)
				::openfl::_legacy::geom::Point tmp26 = this->_screen;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(290)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(290)
				Float tmp28 = (Float(tmp27) / Float((int)3));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(290)
				::openfl::_legacy::geom::Point tmp29 = this->_screen;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(290)
				Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(290)
				Float tmp31 = (tmp30 - (int)15);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(290)
				Float tmp32 = ((Float)5.);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(290)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(290)
				Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(290)
				::flixel::_system::debug::console::Console tmp35 = this->console;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(290)
				Float tmp36 = tmp35->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(290)
				Float tmp37 = (Float(tmp36) / Float((int)2));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(290)
				Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(290)
				tmp25->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp28,tmp38);
				HX_STACK_LINE(291)
				::flixel::_system::debug::watch::Watch tmp39 = this->watch;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(291)
				::flixel::_system::debug::log::Log tmp40 = this->log;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(291)
				Float tmp41 = tmp40->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(291)
				::flixel::_system::debug::log::Log tmp42 = this->log;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(291)
				Float tmp43 = tmp42->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(291)
				Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(291)
				Float tmp45 = (tmp44 + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(291)
				tmp39->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp45);
				HX_STACK_LINE(292)
				::flixel::_system::debug::stats::Stats tmp46 = this->stats;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(292)
				::openfl::_legacy::geom::Point tmp47 = this->_screen;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(292)
				Float tmp48 = tmp47->x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(292)
				tmp46->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp48,(int)0);
				HX_STACK_LINE(293)
				::flixel::_system::debug::log::BitmapLog tmp49 = this->bitmapLog;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(293)
				::openfl::_legacy::geom::Point tmp50 = this->_screen;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(293)
				Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(293)
				Float tmp52 = (Float(tmp51) / Float((int)3));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(293)
				::openfl::_legacy::geom::Point tmp53 = this->_screen;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(293)
				Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(293)
				Float tmp55 = (tmp54 - (int)15);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(293)
				Float tmp56 = ((Float)5.);		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(293)
				Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(293)
				Float tmp58 = (Float(tmp57) / Float((int)2));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(293)
				::flixel::_system::debug::console::Console tmp59 = this->console;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(293)
				Float tmp60 = tmp59->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(293)
				Float tmp61 = (Float(tmp60) / Float((int)2));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(293)
				Float tmp62 = (tmp58 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(293)
				Float tmp63 = (tmp62 - (int)2);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(293)
				tmp49->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp52,tmp63);
				HX_STACK_LINE(294)
				::flixel::_system::debug::log::BitmapLog tmp64 = this->bitmapLog;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(294)
				::openfl::_legacy::geom::Point tmp65 = this->_screen;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(294)
				Float tmp66 = tmp65->x;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(294)
				Float tmp67 = (Float(tmp66) / Float((int)3));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(294)
				int tmp68 = (int)4;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(294)
				Float tmp69 = (tmp67 + tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(294)
				tmp64->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp69,(int)0);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(296)
				::flixel::_system::debug::console::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(296)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(296)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(296)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(296)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(297)
				::flixel::_system::debug::console::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(297)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(297)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(297)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(298)
				::flixel::_system::debug::log::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(298)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(298)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(298)
				Float tmp12 = (Float(tmp11) / Float((int)3));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(298)
				::openfl::_legacy::geom::Point tmp13 = this->_screen;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(298)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(298)
				Float tmp15 = (tmp14 - (int)15);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(298)
				Float tmp16 = ((Float)5.);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(298)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(298)
				Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(298)
				::flixel::_system::debug::console::Console tmp19 = this->console;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(298)
				Float tmp20 = tmp19->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(298)
				Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(298)
				Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(298)
				Float tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(298)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp12,tmp23);
				HX_STACK_LINE(299)
				::flixel::_system::debug::log::Log tmp24 = this->log;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(299)
				::openfl::_legacy::geom::Point tmp25 = this->_screen;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(299)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(299)
				tmp24->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp26,(int)0);
				HX_STACK_LINE(300)
				::flixel::_system::debug::watch::Watch tmp27 = this->watch;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(300)
				::openfl::_legacy::geom::Point tmp28 = this->_screen;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(300)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(300)
				Float tmp30 = (Float(tmp29) / Float((int)3));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(300)
				::openfl::_legacy::geom::Point tmp31 = this->_screen;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(300)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(300)
				Float tmp33 = (tmp32 - (int)15);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(300)
				Float tmp34 = ((Float)5.);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(300)
				Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(300)
				Float tmp36 = (Float(tmp35) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(300)
				::flixel::_system::debug::console::Console tmp37 = this->console;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(300)
				Float tmp38 = tmp37->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(300)
				Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(300)
				Float tmp40 = (tmp36 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(300)
				tmp27->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp30,tmp40);
				HX_STACK_LINE(301)
				::flixel::_system::debug::watch::Watch tmp41 = this->watch;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(301)
				::openfl::_legacy::geom::Point tmp42 = this->_screen;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(301)
				Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(301)
				::flixel::_system::debug::log::Log tmp44 = this->log;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(301)
				Float tmp45 = tmp44->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(301)
				::flixel::_system::debug::log::Log tmp46 = this->log;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(301)
				Float tmp47 = tmp46->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(301)
				Float tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(301)
				Float tmp49 = (tmp48 + (int)2);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(301)
				tmp41->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp43,tmp49);
				HX_STACK_LINE(302)
				::flixel::_system::debug::stats::Stats tmp50 = this->stats;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(302)
				tmp50->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,(int)0);
				HX_STACK_LINE(303)
				::flixel::_system::debug::log::BitmapLog tmp51 = this->bitmapLog;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(303)
				::openfl::_legacy::geom::Point tmp52 = this->_screen;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(303)
				Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(303)
				Float tmp54 = (Float(tmp53) / Float((int)3));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(303)
				::openfl::_legacy::geom::Point tmp55 = this->_screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(303)
				Float tmp56 = tmp55->y;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(303)
				Float tmp57 = (tmp56 - (int)15);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(303)
				Float tmp58 = ((Float)5.);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(303)
				Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(303)
				Float tmp60 = (Float(tmp59) / Float((int)2));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(303)
				::flixel::_system::debug::console::Console tmp61 = this->console;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(303)
				Float tmp62 = tmp61->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(303)
				Float tmp63 = (Float(tmp62) / Float((int)2));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(303)
				Float tmp64 = (tmp60 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(303)
				Float tmp65 = (tmp64 - (int)2);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(303)
				tmp51->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp54,tmp65);
				HX_STACK_LINE(304)
				::flixel::_system::debug::log::BitmapLog tmp66 = this->bitmapLog;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(304)
				::openfl::_legacy::geom::Point tmp67 = this->_screen;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(304)
				Float tmp68 = tmp67->x;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(304)
				int tmp69 = (int)4;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(304)
				Float tmp70 = (tmp68 - tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(304)
				::openfl::_legacy::geom::Point tmp71 = this->_screen;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(304)
				Float tmp72 = tmp71->x;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(304)
				Float tmp73 = (Float(tmp72) / Float((int)3));		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(304)
				Float tmp74 = (tmp73 * (int)2);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(304)
				Float tmp75 = (tmp70 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(304)
				tmp66->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp75,(int)0);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(306)
				::flixel::_system::debug::console::Console tmp1 = this->console;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(306)
				::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(306)
				Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(306)
				int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(306)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				tmp1->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp5,(int)35);
				HX_STACK_LINE(307)
				::flixel::_system::debug::console::Console tmp6 = this->console;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(307)
				::openfl::_legacy::geom::Point tmp7 = this->_screen;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(307)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(307)
				tmp6->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)2,tmp8);
				HX_STACK_LINE(308)
				::flixel::_system::debug::log::Log tmp9 = this->log;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(308)
				::openfl::_legacy::geom::Point tmp10 = this->_screen;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(308)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(308)
				int tmp12 = (int)6;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(308)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(308)
				Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(308)
				::openfl::_legacy::geom::Point tmp15 = this->_screen;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(308)
				Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(308)
				Float tmp17 = (Float(tmp16) / Float((int)4));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(308)
				tmp9->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp14,tmp17);
				HX_STACK_LINE(309)
				::flixel::_system::debug::log::Log tmp18 = this->log;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(309)
				::openfl::_legacy::geom::Point tmp19 = this->_screen;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(309)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(309)
				::flixel::_system::debug::log::Log tmp21 = this->log;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(309)
				Float tmp22 = tmp21->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(309)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(309)
				::flixel::_system::debug::console::Console tmp24 = this->console;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(309)
				Float tmp25 = tmp24->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(309)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(309)
				Float tmp27 = ((Float)3.);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(309)
				Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(309)
				tmp18->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp28);
				HX_STACK_LINE(310)
				::flixel::_system::debug::watch::Watch tmp29 = this->watch;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(310)
				::openfl::_legacy::geom::Point tmp30 = this->_screen;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(310)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(310)
				int tmp32 = (int)6;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(310)
				Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(310)
				Float tmp34 = (Float(tmp33) / Float((int)2));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(310)
				::openfl::_legacy::geom::Point tmp35 = this->_screen;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(310)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(310)
				Float tmp37 = (Float(tmp36) / Float((int)4));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(310)
				tmp29->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp34,tmp37);
				HX_STACK_LINE(311)
				::flixel::_system::debug::watch::Watch tmp38 = this->watch;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(311)
				::openfl::_legacy::geom::Point tmp39 = this->_screen;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(311)
				Float tmp40 = tmp39->x;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(311)
				::openfl::_legacy::geom::Point tmp41 = this->_screen;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(311)
				Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(311)
				::flixel::_system::debug::watch::Watch tmp43 = this->watch;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(311)
				Float tmp44 = tmp43->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(311)
				Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(311)
				::flixel::_system::debug::console::Console tmp46 = this->console;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(311)
				Float tmp47 = tmp46->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(311)
				Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(311)
				Float tmp49 = ((Float)3.);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(311)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(311)
				tmp38->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp40,tmp50);
				HX_STACK_LINE(312)
				::flixel::_system::debug::stats::Stats tmp51 = this->stats;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(312)
				::openfl::_legacy::geom::Point tmp52 = this->_screen;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(312)
				Float tmp53 = tmp52->x;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(312)
				tmp51->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )(tmp53,(int)0);
				HX_STACK_LINE(313)
				::flixel::_system::debug::log::BitmapLog tmp54 = this->bitmapLog;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(313)
				::openfl::_legacy::geom::Point tmp55 = this->_screen;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(313)
				Float tmp56 = tmp55->x;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(313)
				int tmp57 = (int)6;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(313)
				Float tmp58 = (tmp56 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(313)
				Float tmp59 = (Float(tmp58) / Float((int)2));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(313)
				::openfl::_legacy::geom::Point tmp60 = this->_screen;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(313)
				Float tmp61 = tmp60->y;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(313)
				Float tmp62 = (Float(tmp61) / Float((int)4));		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(313)
				tmp54->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )(tmp59,tmp62);
				HX_STACK_LINE(314)
				::flixel::_system::debug::log::BitmapLog tmp63 = this->bitmapLog;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(314)
				::flixel::_system::debug::log::Log tmp64 = this->log;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(314)
				Float tmp65 = tmp64->__Field(HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"), hx::paccDynamic )();		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(314)
				Float tmp66 = (tmp65 - (int)2);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(314)
				::flixel::_system::debug::log::BitmapLog tmp67 = this->bitmapLog;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(314)
				Float tmp68 = tmp67->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(314)
				Float tmp69 = (tmp66 - tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(314)
				tmp63->__Field(HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"), hx::paccDynamic )((int)0,tmp69);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetLayout,(void))

Void FlxDebugger_obj::onResize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onResize",0x5bb7a236,"flixel.system.debug.FlxDebugger.onResize","flixel/system/debug/FlxDebugger.hx",319,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(320)
		::openfl::_legacy::geom::Point tmp = this->_screen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		tmp->x = Width;
		HX_STACK_LINE(321)
		::openfl::_legacy::geom::Point tmp1 = this->_screen;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		tmp1->y = Height;
		HX_STACK_LINE(323)
		this->updateBounds();
		HX_STACK_LINE(324)
		::openfl::_legacy::display::Sprite tmp2 = this->_topBar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		int tmp5 = tmp4->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		tmp2->set_width(tmp5);
		HX_STACK_LINE(325)
		this->resetButtonLayout();
		HX_STACK_LINE(326)
		this->resetLayout();
		HX_STACK_LINE(327)
		Float tmp6 = this->set_scaleY((int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(327)
		this->set_scaleX(tmp6);
		HX_STACK_LINE(328)
		::flixel::_system::scaleModes::BaseScaleMode tmp7 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		Float tmp8 = tmp7->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(328)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(328)
		this->set_x(tmp9);
		HX_STACK_LINE(329)
		::flixel::_system::scaleModes::BaseScaleMode tmp10 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(329)
		Float tmp11 = tmp10->__Field(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(329)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(329)
		this->set_y(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,onResize,(void))

Void FlxDebugger_obj::updateBounds( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","updateBounds",0x09101ca1,"flixel.system.debug.FlxDebugger.updateBounds","flixel/system/debug/FlxDebugger.hx",333,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		Float tmp = ((Float)1.);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		Float tmp1 = ((int)20 + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		::openfl::_legacy::geom::Point tmp2 = this->_screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		int tmp4 = (int)4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		::openfl::_legacy::geom::Point tmp6 = this->_screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(334)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(334)
		int tmp8 = (int)4;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(334)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(334)
		Float tmp10 = (tmp9 - (int)20);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(334)
		::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)2,tmp1,tmp5,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(334)
		this->_screenBounds = tmp11;
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(335)
			Array< ::Dynamic > _g1 = this->_windows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(335)
			while((true)){
				HX_STACK_LINE(335)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(335)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(335)
				if ((tmp13)){
					HX_STACK_LINE(335)
					break;
				}
				HX_STACK_LINE(335)
				::flixel::_system::debug::Window tmp14 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(335)
				::flixel::_system::debug::Window window = tmp14;		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(335)
				++(_g);
				HX_STACK_LINE(337)
				::openfl::_legacy::geom::Rectangle tmp15 = this->_screenBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(337)
				window->__Field(HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"), hx::paccDynamic )(tmp15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,updateBounds,(void))

Float FlxDebugger_obj::hAlignButtons( Array< ::Dynamic > Sprites,hx::Null< Float >  __o_Padding,hx::Null< bool >  __o_Set,hx::Null< Float >  __o_LeftOffset){
Float Padding = __o_Padding.Default(0);
bool Set = __o_Set.Default(true);
Float LeftOffset = __o_LeftOffset.Default(0);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","hAlignButtons",0x74a569e1,"flixel.system.debug.FlxDebugger.hAlignButtons","flixel/system/debug/FlxDebugger.hx",345,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprites,"Sprites")
	HX_STACK_ARG(Padding,"Padding")
	HX_STACK_ARG(Set,"Set")
	HX_STACK_ARG(LeftOffset,"LeftOffset")
{
		HX_STACK_LINE(346)
		Float width = (int)0;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(347)
		Float last = LeftOffset;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(349)
			int _g = Sprites->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(349)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(349)
				if ((tmp1)){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(349)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(349)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(351)
				::flixel::_system::ui::FlxSystemButton tmp3 = Sprites->__get(i).StaticCast< ::flixel::_system::ui::FlxSystemButton >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(351)
				::openfl::_legacy::display::Sprite o = tmp3;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(352)
				Float tmp4 = o->get_width();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(352)
				Float tmp5 = Padding;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(352)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(352)
				hx::AddEq(width,tmp6);
				HX_STACK_LINE(353)
				bool tmp7 = Set;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(353)
				if ((tmp7)){
					HX_STACK_LINE(354)
					Float tmp8 = last;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(354)
					o->set_x(tmp8);
				}
				HX_STACK_LINE(355)
				Float tmp8 = o->get_x();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(355)
				Float tmp9 = o->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(355)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(355)
				Float tmp11 = Padding;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(355)
				Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(355)
				last = tmp12;
			}
		}
		HX_STACK_LINE(358)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxDebugger_obj,hAlignButtons,return )

Void FlxDebugger_obj::resetButtonLayout( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","resetButtonLayout",0x30f7f488,"flixel.system.debug.FlxDebugger.resetButtonLayout","flixel/system/debug/FlxDebugger.hx",365,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(366)
		::haxe::ds::EnumValueMap tmp = this->_buttons;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(366)
		this->hAlignButtons(((Array< ::Dynamic >)(tmp->get(::flixel::util::FlxHorizontalAlign_obj::LEFT))),(int)10,true,(int)10);
		HX_STACK_LINE(368)
		::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		int tmp3 = tmp2->get_stageWidth();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(368)
		Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		::haxe::ds::EnumValueMap tmp5 = this->_buttons;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		Float tmp6 = this->hAlignButtons(((Array< ::Dynamic >)(tmp5->get(::flixel::util::FlxHorizontalAlign_obj::CENTER))),(int)10,false,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(368)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(368)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(368)
		Float offset = tmp8;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(369)
		::haxe::ds::EnumValueMap tmp9 = this->_buttons;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(369)
		Float tmp10 = offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(369)
		this->hAlignButtons(((Array< ::Dynamic >)(tmp9->get(::flixel::util::FlxHorizontalAlign_obj::CENTER))),(int)10,true,tmp10);
		HX_STACK_LINE(371)
		::openfl::_legacy::display::MovieClip tmp11 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(371)
		::openfl::_legacy::display::Stage tmp12 = tmp11->get_stage();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(371)
		int tmp13 = tmp12->get_stageWidth();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(371)
		::haxe::ds::EnumValueMap tmp14 = this->_buttons;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(371)
		Float tmp15 = this->hAlignButtons(((Array< ::Dynamic >)(tmp14->get(::flixel::util::FlxHorizontalAlign_obj::RIGHT))),(int)10,false,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(371)
		Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(371)
		Float offset1 = tmp16;		HX_STACK_VAR(offset1,"offset1");
		HX_STACK_LINE(372)
		::haxe::ds::EnumValueMap tmp17 = this->_buttons;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(372)
		Float tmp18 = offset1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(372)
		this->hAlignButtons(((Array< ::Dynamic >)(tmp17->get(::flixel::util::FlxHorizontalAlign_obj::RIGHT))),(int)10,true,tmp18);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,resetButtonLayout,(void))

::flixel::_system::ui::FlxSystemButton FlxDebugger_obj::addButton( ::flixel::util::FlxHorizontalAlign Position,::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(false);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addButton",0x3bdccfd0,"flixel.system.debug.FlxDebugger.addButton","flixel/system/debug/FlxDebugger.hx",386,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Position,"Position")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(387)
		::flixel::_system::ui::FlxSystemButton tmp = ::flixel::_system::ui::FlxSystemButton_obj::__new(Icon,UpHandler,ToggleMode);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		::flixel::_system::ui::FlxSystemButton button = tmp;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(388)
		Float tmp1 = ((Float)10.);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		Float tmp2 = button->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(388)
		button->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp4);
		HX_STACK_LINE(389)
		::haxe::ds::EnumValueMap tmp5 = this->_buttons;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(389)
		::flixel::util::FlxHorizontalAlign tmp6 = Position;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(389)
		::flixel::_system::ui::FlxSystemButton tmp7 = button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		((Array< ::Dynamic >)(tmp5->get(tmp6)))->push(tmp7);
		HX_STACK_LINE(390)
		::flixel::_system::ui::FlxSystemButton tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(390)
		this->addChild(tmp8);
		HX_STACK_LINE(392)
		bool tmp9 = UpdateLayout;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(392)
		if ((tmp9)){
			HX_STACK_LINE(393)
			this->resetButtonLayout();
		}
		HX_STACK_LINE(395)
		::flixel::_system::ui::FlxSystemButton tmp10 = button;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(395)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxDebugger_obj,addButton,return )

Void FlxDebugger_obj::removeButton( ::flixel::_system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeButton",0xec3cec99,"flixel.system.debug.FlxDebugger.removeButton","flixel/system/debug/FlxDebugger.hx",405,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(406)
		::flixel::_system::ui::FlxSystemButton tmp = Button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		this->removeChild(tmp);
		HX_STACK_LINE(407)
		Button->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
		HX_STACK_LINE(409)
		::haxe::ds::EnumValueMap tmp1 = this->_buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		::flixel::_system::ui::FlxSystemButton tmp2 = Button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(409)
		((Array< ::Dynamic >)(tmp1->get(::flixel::util::FlxHorizontalAlign_obj::LEFT)))->remove(tmp2);
		HX_STACK_LINE(410)
		::haxe::ds::EnumValueMap tmp3 = this->_buttons;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(410)
		::flixel::_system::ui::FlxSystemButton tmp4 = Button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(410)
		((Array< ::Dynamic >)(tmp3->get(::flixel::util::FlxHorizontalAlign_obj::CENTER)))->remove(tmp4);
		HX_STACK_LINE(411)
		::haxe::ds::EnumValueMap tmp5 = this->_buttons;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(411)
		::flixel::_system::ui::FlxSystemButton tmp6 = Button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(411)
		((Array< ::Dynamic >)(tmp5->get(::flixel::util::FlxHorizontalAlign_obj::RIGHT)))->remove(tmp6);
		HX_STACK_LINE(413)
		bool tmp7 = UpdateLayout;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		if ((tmp7)){
			HX_STACK_LINE(414)
			this->resetButtonLayout();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,removeButton,(void))

Void FlxDebugger_obj::addWindowToggleButton( ::flixel::_system::debug::Window window,::hx::Class icon){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindowToggleButton",0x07784794,"flixel.system.debug.FlxDebugger.addWindowToggleButton","flixel/system/debug/FlxDebugger.hx",418,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(icon,"icon")
		HX_STACK_LINE(419)
		::hx::Class tmp = icon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		::openfl::_legacy::display::BitmapData tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add((int)0).Add((int)0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(420)
		Dynamic tmp2 = window->__Field(HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(419)
		::flixel::_system::ui::FlxSystemButton tmp3 = this->addButton(::flixel::util::FlxHorizontalAlign_obj::RIGHT,tmp1,tmp2,true,true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(419)
		::flixel::_system::ui::FlxSystemButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(421)
		window->__FieldRef(HX_HCSTRING("toggleButton","\xa6","\x7c","\xfa","\x7f")) = button;
		HX_STACK_LINE(422)
		bool tmp4 = window->__Field(HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(422)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(422)
		button->__Field(HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"), hx::paccDynamic )(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxDebugger_obj,addWindowToggleButton,(void))

::flixel::_system::debug::Window FlxDebugger_obj::addWindow( ::flixel::_system::debug::Window window){
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addWindow",0xb48901ce,"flixel.system.debug.FlxDebugger.addWindow","flixel/system/debug/FlxDebugger.hx",426,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(window,"window")
	HX_STACK_LINE(427)
	::flixel::_system::debug::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(427)
	this->_windows->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(428)
	::flixel::_system::debug::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	this->addChild(tmp1);
	HX_STACK_LINE(429)
	::openfl::_legacy::geom::Rectangle tmp2 = this->_screenBounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(429)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(429)
	if ((tmp3)){
		HX_STACK_LINE(431)
		this->updateBounds();
		HX_STACK_LINE(432)
		window->__Field(HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"), hx::paccDynamic )();
	}
	HX_STACK_LINE(434)
	::flixel::_system::debug::Window tmp4 = window;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(434)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,addWindow,return )

Void FlxDebugger_obj::removeWindow( ::flixel::_system::debug::Window window){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","removeWindow",0x64e91e97,"flixel.system.debug.FlxDebugger.removeWindow","flixel/system/debug/FlxDebugger.hx",438,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(439)
		::flixel::_system::debug::Window tmp = window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		bool tmp1 = this->contains(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(439)
		if ((tmp1)){
			HX_STACK_LINE(440)
			::flixel::_system::debug::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			this->removeChild(tmp2);
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			Array< ::Dynamic > array = this->_windows;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(441)
			::flixel::_system::debug::Window tmp2 = window;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(441)
			int tmp3 = array->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(441)
			int index = tmp3;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(441)
			bool tmp4 = (index != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			if ((tmp4)){
				HX_STACK_LINE(441)
				int tmp5 = (array->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(441)
				::flixel::_system::debug::Window tmp6 = array->__get(tmp5).StaticCast< ::flixel::_system::debug::Window >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				array[index] = tmp6;
				HX_STACK_LINE(441)
				array->pop().StaticCast< ::flixel::_system::debug::Window >();
				HX_STACK_LINE(441)
				array;
			}
			else{
				HX_STACK_LINE(441)
				array;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,removeWindow,(void))

::openfl::_legacy::display::DisplayObject FlxDebugger_obj::addChild( ::openfl::_legacy::display::DisplayObject child){
	HX_STACK_FRAME("flixel.system.debug.FlxDebugger","addChild",0x32a6217e,"flixel.system.debug.FlxDebugger.addChild","flixel/system/debug/FlxDebugger.hx",445,0xd9fc0a74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(446)
	::openfl::_legacy::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	::openfl::_legacy::display::DisplayObject tmp1 = this->super::addChild(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(446)
	::openfl::_legacy::display::DisplayObject result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(448)
	::flixel::_system::debug::completion::CompletionList tmp2 = this->completionList;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(448)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(448)
	if ((tmp3)){
		HX_STACK_LINE(449)
		::flixel::_system::debug::completion::CompletionList tmp4 = this->completionList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		this->super::addChild(tmp4);
	}
	HX_STACK_LINE(450)
	::openfl::_legacy::display::DisplayObject tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(450)
	return tmp4;
}


Void FlxDebugger_obj::onMouseOver( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOver",0x134e1717,"flixel.system.debug.FlxDebugger.onMouseOver","flixel/system/debug/FlxDebugger.hx",457,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(458)
		this->hasMouse = true;
		HX_STACK_LINE(459)
		this->showCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOver,(void))

Void FlxDebugger_obj::onMouseOut( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","onMouseOut",0x752e442b,"flixel.system.debug.FlxDebugger.onMouseOut","flixel/system/debug/FlxDebugger.hx",466,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(467)
		this->hasMouse = false;
		HX_STACK_LINE(468)
		this->restoreCursor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxDebugger_obj,onMouseOut,(void))

Void FlxDebugger_obj::showCursor( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","showCursor",0x9bb6bc36,"flixel.system.debug.FlxDebugger.showCursor","flixel/system/debug/FlxDebugger.hx",472,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(474)
		::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		this->_wasMouseVisible = tmp->visible;
		HX_STACK_LINE(475)
		::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		this->_wasUsingSystemCursor = tmp1->useSystemCursor;
		HX_STACK_LINE(476)
		::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		tmp2->set_useSystemCursor(true);
		HX_STACK_LINE(477)
		this->_usingSystemCursor = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,showCursor,(void))

Void FlxDebugger_obj::restoreCursor( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","restoreCursor",0xf6614421,"flixel.system.debug.FlxDebugger.restoreCursor","flixel/system/debug/FlxDebugger.hx",483,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(484)
		bool tmp = this->_usingSystemCursor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		if ((tmp)){
			HX_STACK_LINE(487)
			::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(487)
			bool tmp2 = this->_wasUsingSystemCursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(487)
			tmp1->set_useSystemCursor(tmp2);
			HX_STACK_LINE(488)
			::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(488)
			bool tmp4 = this->_wasMouseVisible;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(488)
			tmp3->set_visible(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,restoreCursor,(void))

Void FlxDebugger_obj::toggleDrawDebug( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","toggleDrawDebug",0x1fb0d218,"flixel.system.debug.FlxDebugger.toggleDrawDebug","flixel/system/debug/FlxDebugger.hx",495,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(495)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		::flixel::_system::frontEnds::DebuggerFrontEnd _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(495)
		::flixel::_system::frontEnds::DebuggerFrontEnd tmp1 = ::flixel::FlxG_obj::debugger;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		bool tmp2 = tmp1->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(495)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(495)
		bool Value = tmp3;		HX_STACK_VAR(Value,"Value");
		HX_STACK_LINE(495)
		bool tmp4 = (Value != _this->__Field(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(495)
		if ((tmp4)){
			HX_STACK_LINE(495)
			_this->__Field(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		}
		HX_STACK_LINE(495)
		_this->__FieldRef(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f")) = Value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,toggleDrawDebug,(void))

Void FlxDebugger_obj::openHomepage( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","openHomepage",0x2c4a291b,"flixel.system.debug.FlxDebugger.openHomepage","flixel/system/debug/FlxDebugger.hx",500,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(500)
		::String prefix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(500)
		::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("^https?://","\x48","\xee","\xdd","\x38"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(500)
		bool tmp1 = tmp->match(HX_HCSTRING("http://www.haxeflixel.com","\xde","\xbc","\x02","\xe0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(500)
		if ((tmp2)){
			HX_STACK_LINE(500)
			prefix = HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a");
		}
		HX_STACK_LINE(500)
		::String tmp3 = (prefix + HX_HCSTRING("http://www.haxeflixel.com","\xde","\xbc","\x02","\xe0"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(500)
		::openfl::_legacy::net::URLRequest tmp4 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		::openfl::_legacy::Lib_obj::getURL(tmp4,HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openHomepage,(void))

Void FlxDebugger_obj::openGitHub( ){
{
		HX_STACK_FRAME("flixel.system.debug.FlxDebugger","openGitHub",0x31aecfb0,"flixel.system.debug.FlxDebugger.openGitHub","flixel/system/debug/FlxDebugger.hx",504,0xd9fc0a74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(505)
		::String url = HX_HCSTRING("https://github.com/HaxeFlixel/flixel","\xbf","\x0c","\x67","\x11");		HX_STACK_VAR(url,"url");
		HX_STACK_LINE(506)
		Dynamic tmp = ::flixel::_system::FlxVersion_obj::sha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		bool tmp1 = (tmp != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		if ((tmp1)){
			HX_STACK_LINE(508)
			Dynamic tmp2 = ::flixel::_system::FlxVersion_obj::sha;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(508)
			::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(508)
			::String tmp4 = (HX_HCSTRING("/commit/","\x09","\x7c","\xb6","\x01") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(508)
			hx::AddEq(url,tmp4);
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::String prefix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(510)
			::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("^https?://","\x48","\xee","\xdd","\x38"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(510)
			::String tmp3 = url;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(510)
			bool tmp4 = tmp2->match(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(510)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(510)
			if ((tmp5)){
				HX_STACK_LINE(510)
				prefix = HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a");
			}
			HX_STACK_LINE(510)
			::String tmp6 = (prefix + url);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(510)
			::openfl::_legacy::net::URLRequest tmp7 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			::openfl::_legacy::Lib_obj::getURL(tmp7,HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxDebugger_obj,openGitHub,(void))

int FlxDebugger_obj::GUTTER;

int FlxDebugger_obj::TOP_HEIGHT;


FlxDebugger_obj::FlxDebugger_obj()
{
}

void FlxDebugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDebugger);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(log,"log");
	HX_MARK_MEMBER_NAME(watch,"watch");
	HX_MARK_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(vcr,"vcr");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(completionList,"completionList");
	HX_MARK_MEMBER_NAME(hasMouse,"hasMouse");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_screen,"_screen");
	HX_MARK_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_topBar,"_topBar");
	HX_MARK_MEMBER_NAME(_windows,"_windows");
	HX_MARK_MEMBER_NAME(_usingSystemCursor,"_usingSystemCursor");
	HX_MARK_MEMBER_NAME(_wasMouseVisible,"_wasMouseVisible");
	HX_MARK_MEMBER_NAME(_wasUsingSystemCursor,"_wasUsingSystemCursor");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDebugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(log,"log");
	HX_VISIT_MEMBER_NAME(watch,"watch");
	HX_VISIT_MEMBER_NAME(bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(vcr,"vcr");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(completionList,"completionList");
	HX_VISIT_MEMBER_NAME(hasMouse,"hasMouse");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_screen,"_screen");
	HX_VISIT_MEMBER_NAME(_screenBounds,"_screenBounds");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_topBar,"_topBar");
	HX_VISIT_MEMBER_NAME(_windows,"_windows");
	HX_VISIT_MEMBER_NAME(_usingSystemCursor,"_usingSystemCursor");
	HX_VISIT_MEMBER_NAME(_wasMouseVisible,"_wasMouseVisible");
	HX_VISIT_MEMBER_NAME(_wasUsingSystemCursor,"_wasUsingSystemCursor");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDebugger_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"_screen") ) { return _screen; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { return _topBar; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { return hasMouse; }
		if (HX_FIELD_EQ(inName,"_buttons") ) { return _buttons; }
		if (HX_FIELD_EQ(inName,"_windows") ) { return _windows; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return bitmapLog; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		if (HX_FIELD_EQ(inName,"addWindow") ) { return addWindow_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"openGitHub") ) { return openGitHub_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return updateBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		if (HX_FIELD_EQ(inName,"removeWindow") ) { return removeWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"openHomepage") ) { return openHomepage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { return _screenBounds; }
		if (HX_FIELD_EQ(inName,"hAlignButtons") ) { return hAlignButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"restoreCursor") ) { return restoreCursor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { return completionList; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toggleDrawDebug") ) { return toggleDrawDebug_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_wasMouseVisible") ) { return _wasMouseVisible; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonLayout") ) { return resetButtonLayout_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_usingSystemCursor") ) { return _usingSystemCursor; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_wasUsingSystemCursor") ) { return _wasUsingSystemCursor; }
		if (HX_FIELD_EQ(inName,"addWindowToggleButton") ) { return addWindowToggleButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxDebugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::_system::debug::log::Log >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::_system::debug::VCR >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::flixel::_system::debug::stats::Stats >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::_system::debug::watch::Watch >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::_system::debug::console::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::flixel::_system::debug::FlxDebuggerLayout >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screen") ) { _screen=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topBar") ) { _topBar=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasMouse") ) { hasMouse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast< ::haxe::ds::EnumValueMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_windows") ) { _windows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast< ::flixel::_system::debug::log::BitmapLog >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_screenBounds") ) { _screenBounds=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"completionList") ) { completionList=inValue.Cast< ::flixel::_system::debug::completion::CompletionList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_wasMouseVisible") ) { _wasMouseVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_usingSystemCursor") ) { _usingSystemCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_wasUsingSystemCursor") ) { _wasUsingSystemCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxDebugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("log","\x84","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"));
	outFields->push(HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"));
	outFields->push(HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"));
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	outFields->push(HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"));
	outFields->push(HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98"));
	outFields->push(HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7"));
	outFields->push(HX_HCSTRING("_screen","\x0b","\x4d","\xd4","\xb5"));
	outFields->push(HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25"));
	outFields->push(HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04"));
	outFields->push(HX_HCSTRING("_topBar","\xdd","\x9f","\x91","\x03"));
	outFields->push(HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22"));
	outFields->push(HX_HCSTRING("_usingSystemCursor","\x4a","\x33","\x58","\xe3"));
	outFields->push(HX_HCSTRING("_wasMouseVisible","\x17","\x92","\xd7","\x91"));
	outFields->push(HX_HCSTRING("_wasUsingSystemCursor","\xff","\xd8","\x04","\xe6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_system::debug::stats::Stats*/ ,(int)offsetof(FlxDebugger_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{hx::fsObject /*::flixel::_system::debug::log::Log*/ ,(int)offsetof(FlxDebugger_obj,log),HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsObject /*::flixel::_system::debug::watch::Watch*/ ,(int)offsetof(FlxDebugger_obj,watch),HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5")},
	{hx::fsObject /*::flixel::_system::debug::log::BitmapLog*/ ,(int)offsetof(FlxDebugger_obj,bitmapLog),HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6")},
	{hx::fsObject /*::flixel::_system::debug::VCR*/ ,(int)offsetof(FlxDebugger_obj,vcr),HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00")},
	{hx::fsObject /*::flixel::_system::debug::console::Console*/ ,(int)offsetof(FlxDebugger_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{hx::fsObject /*::flixel::_system::debug::completion::CompletionList*/ ,(int)offsetof(FlxDebugger_obj,completionList),HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,hasMouse),HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98")},
	{hx::fsObject /*::flixel::_system::debug::FlxDebuggerLayout*/ ,(int)offsetof(FlxDebugger_obj,_layout),HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxDebugger_obj,_screen),HX_HCSTRING("_screen","\x0b","\x4d","\xd4","\xb5")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxDebugger_obj,_screenBounds),HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25")},
	{hx::fsObject /*::haxe::ds::EnumValueMap*/ ,(int)offsetof(FlxDebugger_obj,_buttons),HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxDebugger_obj,_topBar),HX_HCSTRING("_topBar","\xdd","\x9f","\x91","\x03")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxDebugger_obj,_windows),HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,_usingSystemCursor),HX_HCSTRING("_usingSystemCursor","\x4a","\x33","\x58","\xe3")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,_wasMouseVisible),HX_HCSTRING("_wasMouseVisible","\x17","\x92","\xd7","\x91")},
	{hx::fsBool,(int)offsetof(FlxDebugger_obj,_wasUsingSystemCursor),HX_HCSTRING("_wasUsingSystemCursor","\xff","\xd8","\x04","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxDebugger_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsInt,(void *) &FlxDebugger_obj::TOP_HEIGHT,HX_HCSTRING("TOP_HEIGHT","\xb1","\x2b","\xf8","\x33")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),
	HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"),
	HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"),
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("completionList","\x9a","\xd1","\x5d","\x23"),
	HX_HCSTRING("hasMouse","\x6b","\x60","\xbd","\x98"),
	HX_HCSTRING("_layout","\x49","\xc0","\x2f","\xc7"),
	HX_HCSTRING("_screen","\x0b","\x4d","\xd4","\xb5"),
	HX_HCSTRING("_screenBounds","\xe0","\x21","\xaa","\x25"),
	HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04"),
	HX_HCSTRING("_topBar","\xdd","\x9f","\x91","\x03"),
	HX_HCSTRING("_windows","\x04","\x38","\x2d","\x22"),
	HX_HCSTRING("_usingSystemCursor","\x4a","\x33","\x58","\xe3"),
	HX_HCSTRING("_wasMouseVisible","\x17","\x92","\xd7","\x91"),
	HX_HCSTRING("_wasUsingSystemCursor","\xff","\xd8","\x04","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("setLayout","\xec","\x23","\x60","\xb8"),
	HX_HCSTRING("resetLayout","\xd9","\x31","\xcd","\xf8"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("updateBounds","\x5e","\x2d","\xe1","\x65"),
	HX_HCSTRING("hAlignButtons","\x84","\xfe","\xc2","\x4e"),
	HX_HCSTRING("resetButtonLayout","\xab","\x16","\xc0","\x05"),
	HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("addWindowToggleButton","\x37","\xb7","\xff","\xa6"),
	HX_HCSTRING("addWindow","\xf1","\xc8","\xb0","\x0a"),
	HX_HCSTRING("removeWindow","\x54","\x2f","\xba","\xc1"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("onMouseOver","\xfa","\x2c","\x50","\x18"),
	HX_HCSTRING("onMouseOut","\xa8","\xbb","\xd4","\x81"),
	HX_HCSTRING("showCursor","\xb3","\x33","\x5d","\xa8"),
	HX_HCSTRING("restoreCursor","\xc4","\xd8","\x7e","\xd0"),
	HX_HCSTRING("toggleDrawDebug","\x7b","\x15","\xd7","\xeb"),
	HX_HCSTRING("openHomepage","\xd8","\x39","\x1b","\x89"),
	HX_HCSTRING("openGitHub","\x2d","\x47","\x55","\x3e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(FlxDebugger_obj::TOP_HEIGHT,"TOP_HEIGHT");
};

#endif

hx::Class FlxDebugger_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("TOP_HEIGHT","\xb1","\x2b","\xf8","\x33"),
	::String(null()) };

void FlxDebugger_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.FlxDebugger","\x0b","\x53","\xa2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDebugger_obj >;
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

void FlxDebugger_obj::__boot()
{
	GUTTER= (int)2;
	TOP_HEIGHT= (int)20;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
