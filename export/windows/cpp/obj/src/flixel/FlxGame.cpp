#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
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
#ifndef INCLUDED_openfl__legacy_display_StageScaleMode
#include <openfl/_legacy/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_FRAME("flixel.FlxGame","new",0xde7d5f44,"flixel.FlxGame.new","flixel/FlxGame.hx",48,0x34f39fed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_GameSizeX,"GameSizeX")
HX_STACK_ARG(__o_GameSizeY,"GameSizeY")
HX_STACK_ARG(InitialState,"InitialState")
HX_STACK_ARG(__o_Zoom,"Zoom")
HX_STACK_ARG(__o_UpdateFramerate,"UpdateFramerate")
HX_STACK_ARG(__o_DrawFramerate,"DrawFramerate")
HX_STACK_ARG(__o_SkipSplash,"SkipSplash")
HX_STACK_ARG(__o_StartFullscreen,"StartFullscreen")
int GameSizeX = __o_GameSizeX.Default(640);
int GameSizeY = __o_GameSizeY.Default(480);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(220)
	this->postProcesses = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(216)
	this->postProcessLayer = ::openfl::_legacy::display::Sprite_obj::__new();
	HX_STACK_LINE(195)
	this->_resetGame = false;
	HX_STACK_LINE(185)
	this->_startFullscreen = false;
	HX_STACK_LINE(179)
	this->_skipSplash = false;
	HX_STACK_LINE(173)
	this->_customFocusLostScreen = ((::hx::Class)(hx::ClassOf< ::flixel::_system::ui::FlxFocusLostScreen >()));
	HX_STACK_LINE(166)
	this->_customSoundTray = ((::hx::Class)(hx::ClassOf< ::flixel::_system::ui::FlxSoundTray >()));
	HX_STACK_LINE(145)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(133)
	this->_lostFocus = false;
	HX_STACK_LINE(106)
	this->_total = (int)0;
	HX_STACK_LINE(93)
	this->_gameJustStarted = false;
	HX_STACK_LINE(87)
	this->filtersEnabled = true;
	HX_STACK_LINE(83)
	this->ticks = (int)0;
	HX_STACK_LINE(53)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(237)
	super::__construct();
	HX_STACK_LINE(240)
	this->_startFullscreen = StartFullscreen;
	HX_STACK_LINE(244)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	this->_inputContainer = tmp;
	HX_STACK_LINE(247)
	int tmp1 = GameSizeX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	int tmp2 = GameSizeY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	Float tmp3 = Zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(247)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3);
	HX_STACK_LINE(249)
	int tmp4 = UpdateFramerate;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	::flixel::FlxG_obj::set_updateFramerate(tmp4);
	HX_STACK_LINE(250)
	int tmp5 = DrawFramerate;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(250)
	::flixel::FlxG_obj::set_drawFramerate(tmp5);
	HX_STACK_LINE(251)
	Float tmp6 = this->_stepMS;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(251)
	this->_accumulator = tmp6;
	HX_STACK_LINE(252)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(259)
	bool tmp7 = (InitialState == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(259)
	::hx::Class tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(259)
	if ((tmp7)){
		HX_STACK_LINE(259)
		tmp8 = hx::ClassOf< ::flixel::FlxState >();
	}
	else{
		HX_STACK_LINE(259)
		tmp8 = InitialState;
	}
	HX_STACK_LINE(259)
	this->_initialState = tmp8;
	HX_STACK_LINE(261)
	::String tmp9 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(261)
	Dynamic tmp10 = this->create_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(261)
	this->addEventListener(tmp9,tmp10,null(),null(),null());
}
;
	return null();
}

//FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::hx::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > _result_ = new FlxGame_obj();
	_result_->__construct(__o_GameSizeX,__o_GameSizeY,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return _result_;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > _result_ = new FlxGame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void FlxGame_obj::setFilters( Array< ::Dynamic > filters){
{
		HX_STACK_FRAME("flixel.FlxGame","setFilters",0x71579bd5,"flixel.FlxGame.setFilters","flixel/FlxGame.hx",271,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_LINE(271)
		this->_filters = filters;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,setFilters,(void))

Void FlxGame_obj::create( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","create",0x90873e98,"flixel.FlxGame.create","flixel/FlxGame.hx",278,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(279)
		::openfl::_legacy::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		if ((tmp1)){
			HX_STACK_LINE(281)
			return null();
		}
		HX_STACK_LINE(283)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		Dynamic tmp3 = this->create_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		this->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(285)
		int tmp4 = this->getTimer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		this->_total = tmp4;
		HX_STACK_LINE(288)
		bool tmp5 = this->_startFullscreen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(288)
		::flixel::FlxG_obj::set_fullscreen(tmp5);
		HX_STACK_LINE(292)
		::openfl::_legacy::display::Stage tmp6 = this->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		tmp6->set_scaleMode(::openfl::_legacy::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(293)
		::openfl::_legacy::display::Stage tmp7 = this->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(293)
		tmp7->set_align(::openfl::_legacy::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(294)
		::openfl::_legacy::display::Stage tmp8 = this->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(294)
		int tmp9 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(294)
		tmp8->set_frameRate(tmp9);
		HX_STACK_LINE(296)
		::openfl::_legacy::display::Sprite tmp10 = this->_inputContainer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(296)
		this->addChild(tmp10);
		HX_STACK_LINE(300)
		{
			HX_STACK_LINE(300)
			::openfl::_legacy::display::Sprite tmp11 = this->postProcessLayer;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(300)
			this->addChild(tmp11);
		}
		HX_STACK_LINE(313)
		::hx::Class tmp11 = this->_customSoundTray;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(313)
		::flixel::_system::ui::FlxSoundTray tmp12 = ::Type_obj::createInstance(tmp11,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(313)
		this->soundTray = tmp12;
		HX_STACK_LINE(314)
		::flixel::_system::ui::FlxSoundTray tmp13 = this->soundTray;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(314)
		this->addChild(tmp13);
		HX_STACK_LINE(318)
		::hx::Class tmp14 = this->_customFocusLostScreen;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(318)
		::flixel::_system::ui::FlxFocusLostScreen tmp15 = ::Type_obj::createInstance(tmp14,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(318)
		this->_focusLostScreen = tmp15;
		HX_STACK_LINE(319)
		::flixel::_system::ui::FlxFocusLostScreen tmp16 = this->_focusLostScreen;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(319)
		this->addChild(tmp16);
		HX_STACK_LINE(325)
		::openfl::_legacy::display::Stage tmp17 = this->get_stage();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(325)
		Dynamic tmp18 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(325)
		tmp17->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp18,null(),null(),null());
		HX_STACK_LINE(326)
		::openfl::_legacy::display::Stage tmp19 = this->get_stage();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(326)
		Dynamic tmp20 = this->onFocus_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(326)
		tmp19->addEventListener(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),tmp20,null(),null(),null());
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			::flixel::_system::frontEnds::SignalFrontEnd tmp21 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(333)
			tmp21->__Field(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
			HX_STACK_LINE(333)
			bool tmp22 = this->_skipSplash;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(333)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(333)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(333)
			if ((tmp23)){
				HX_STACK_LINE(333)
				::hx::Class tmp25 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(333)
				::hx::Class tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(333)
				tmp24 = (tmp26 != null());
			}
			else{
				HX_STACK_LINE(333)
				tmp24 = true;
			}
			HX_STACK_LINE(333)
			if ((tmp24)){
				HX_STACK_LINE(333)
				::hx::Class tmp25 = this->_initialState;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(333)
				::flixel::FlxState tmp26 = ::Type_obj::createInstance(tmp25,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(333)
				this->_requestedState = tmp26;
				HX_STACK_LINE(333)
				::hx::Class tmp27 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(333)
				bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(333)
				if ((tmp28)){
					HX_STACK_LINE(333)
					this->_gameJustStarted = true;
				}
			}
			else{
				HX_STACK_LINE(333)
				::hx::Class tmp25 = this->_initialState;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(333)
				::flixel::_system::FlxSplash_obj::nextState = tmp25;
				HX_STACK_LINE(333)
				::flixel::_system::FlxSplash tmp26 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(333)
				this->_requestedState = tmp26;
				HX_STACK_LINE(333)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(333)
			::flixel::FlxG_obj::reset();
			HX_STACK_LINE(333)
			::flixel::_system::frontEnds::SignalFrontEnd tmp25 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(333)
			tmp25->__Field(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		}
		HX_STACK_LINE(334)
		this->switchState();
		HX_STACK_LINE(336)
		int tmp21 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(336)
		int tmp22 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(336)
		bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(336)
		if ((tmp23)){
			HX_STACK_LINE(338)
			Dynamic();
		}
		HX_STACK_LINE(342)
		::openfl::_legacy::display::Stage tmp24 = this->get_stage();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(342)
		::String tmp25 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(342)
		Dynamic tmp26 = this->onEnterFrame_dyn();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(342)
		tmp24->addEventListener(tmp25,tmp26,null(),null(),null());
		HX_STACK_LINE(346)
		::openfl::_legacy::display::Stage tmp27 = this->get_stage();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(346)
		::String tmp28 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(346)
		Dynamic tmp29 = this->onResize_dyn();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(346)
		tmp27->addEventListener(tmp28,tmp29,null(),null(),null());
		HX_STACK_LINE(349)
		::openfl::_legacy::display::MovieClip tmp30 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(349)
		::openfl::_legacy::display::Stage tmp31 = tmp30->get_stage();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(349)
		int tmp32 = tmp31->get_stageWidth();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(349)
		::openfl::_legacy::display::MovieClip tmp33 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(349)
		::openfl::_legacy::display::Stage tmp34 = tmp33->get_stage();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(349)
		int tmp35 = tmp34->get_stageHeight();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(349)
		this->resizeGame(tmp32,tmp35);
		HX_STACK_LINE(351)
		::String tmp36 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(351)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp37 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(351)
		Dynamic tmp38 = tmp37->__Field(HX_HCSTRING("onAssetsReload","\xfb","\x33","\x88","\x63"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(351)
		::openfl::_legacy::Assets_obj::addEventListener(tmp36,tmp38,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocus",0x6f2bcf1d,"flixel.FlxGame.onFocus","flixel/FlxGame.hx",355,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(365)
		bool tmp = this->_onFocusFiredOnce;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(365)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		if ((tmp1)){
			HX_STACK_LINE(367)
			this->_onFocusFiredOnce = true;
			HX_STACK_LINE(368)
			return null();
		}
		HX_STACK_LINE(377)
		this->_lostFocus = false;
		HX_STACK_LINE(378)
		::flixel::_system::frontEnds::SignalFrontEnd tmp2 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		tmp2->__Field(HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(379)
		::flixel::FlxState tmp3 = this->_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(379)
		tmp3->onFocus();
		HX_STACK_LINE(381)
		bool tmp4 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(381)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		if ((tmp5)){
			HX_STACK_LINE(383)
			return null();
		}
		HX_STACK_LINE(387)
		::flixel::_system::ui::FlxFocusLostScreen tmp6 = this->_focusLostScreen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(387)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(387)
		if ((tmp7)){
			HX_STACK_LINE(389)
			::flixel::_system::ui::FlxFocusLostScreen tmp8 = this->_focusLostScreen;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(389)
			tmp8->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(false);
		}
		HX_STACK_LINE(397)
		::openfl::_legacy::display::Stage tmp8 = this->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		int tmp9 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(397)
		tmp8->set_frameRate(tmp9);
		HX_STACK_LINE(399)
		::flixel::_system::frontEnds::SoundFrontEnd tmp10 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(399)
		tmp10->__Field(HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"), hx::paccDynamic )();
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(401)
			::flixel::_system::frontEnds::InputFrontEnd tmp11 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(401)
			Array< ::flixel::input::IFlxInputManager > _g1 = tmp11->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(401)
			while((true)){
				HX_STACK_LINE(401)
				bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(401)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(401)
				if ((tmp13)){
					HX_STACK_LINE(401)
					break;
				}
				HX_STACK_LINE(401)
				::flixel::input::IFlxInputManager tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(401)
				::flixel::input::IFlxInputManager input = tmp14;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(401)
				++(_g);
				HX_STACK_LINE(401)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocusLost",0xb7eef7a1,"flixel.FlxGame.onFocusLost","flixel/FlxGame.hx",405,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(413)
		this->_lostFocus = true;
		HX_STACK_LINE(414)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(414)
		tmp->__Field(HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(415)
		::flixel::FlxState tmp1 = this->_state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		tmp1->onFocusLost();
		HX_STACK_LINE(417)
		bool tmp2 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(417)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(417)
		if ((tmp3)){
			HX_STACK_LINE(419)
			return null();
		}
		HX_STACK_LINE(423)
		::flixel::_system::ui::FlxFocusLostScreen tmp4 = this->_focusLostScreen;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(423)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(423)
		if ((tmp5)){
			HX_STACK_LINE(425)
			::flixel::_system::ui::FlxFocusLostScreen tmp6 = this->_focusLostScreen;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(425)
			tmp6->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
		}
		HX_STACK_LINE(433)
		::openfl::_legacy::display::Stage tmp6 = this->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(433)
		int tmp7 = this->focusLostFramerate;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(433)
		tmp6->set_frameRate(tmp7);
		HX_STACK_LINE(435)
		::flixel::_system::frontEnds::SoundFrontEnd tmp8 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(435)
		tmp8->__Field(HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"), hx::paccDynamic )();
		HX_STACK_LINE(437)
		{
			HX_STACK_LINE(437)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(437)
			::flixel::_system::frontEnds::InputFrontEnd tmp9 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(437)
			Array< ::flixel::input::IFlxInputManager > _g1 = tmp9->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(437)
			while((true)){
				HX_STACK_LINE(437)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(437)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(437)
				if ((tmp11)){
					HX_STACK_LINE(437)
					break;
				}
				HX_STACK_LINE(437)
				::flixel::input::IFlxInputManager tmp12 = _g1->__get(_g);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(437)
				::flixel::input::IFlxInputManager input = tmp12;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(437)
				++(_g);
				HX_STACK_LINE(437)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onResize( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onResize",0xebfa470f,"flixel.FlxGame.onResize","flixel/FlxGame.hx",442,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(443)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		int width = tmp2;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(444)
		::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(444)
		::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(444)
		int tmp5 = tmp4->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		int height = tmp5;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(447)
		bool tmp6 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		if ((tmp6)){
			HX_STACK_LINE(449)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp7 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(449)
			tmp7->__Field(HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"), hx::paccDynamic )();
		}
		HX_STACK_LINE(453)
		int tmp7 = width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(453)
		int tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(453)
		this->resizeGame(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::resizeGame( int width,int height){
{
		HX_STACK_FRAME("flixel.FlxGame","resizeGame",0xcdcb59a2,"flixel.FlxGame.resizeGame","flixel/FlxGame.hx",457,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(458)
		{
			HX_STACK_LINE(458)
			::flixel::_system::scaleModes::BaseScaleMode tmp = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(458)
			int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			tmp->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp1,tmp2);
		}
		HX_STACK_LINE(460)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(460)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(460)
		tmp->onResize(tmp1,tmp2);
		HX_STACK_LINE(461)
		::flixel::_system::frontEnds::SignalFrontEnd tmp3 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(461)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(461)
		tmp3->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp4,tmp5);
		HX_STACK_LINE(463)
		::flixel::_system::frontEnds::CameraFrontEnd tmp6 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		tmp6->__Field(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"), hx::paccDynamic )();
		HX_STACK_LINE(470)
		::flixel::_system::ui::FlxFocusLostScreen tmp7 = this->_focusLostScreen;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(470)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(470)
		if ((tmp8)){
			HX_STACK_LINE(472)
			::flixel::_system::ui::FlxFocusLostScreen tmp9 = this->_focusLostScreen;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(472)
			tmp9->__Field(HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"), hx::paccDynamic )();
		}
		HX_STACK_LINE(477)
		::flixel::_system::ui::FlxSoundTray tmp9 = this->soundTray;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(477)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(477)
		if ((tmp10)){
			HX_STACK_LINE(479)
			::flixel::_system::ui::FlxSoundTray tmp11 = this->soundTray;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(479)
			tmp11->__Field(HX_HCSTRING("screenCenter","\x61","\x2e","\xf9","\xe2"), hx::paccDynamic )();
		}
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(484)
			Array< ::Dynamic > _g1 = this->postProcesses;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(484)
			while((true)){
				HX_STACK_LINE(484)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(484)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(484)
				if ((tmp12)){
					HX_STACK_LINE(484)
					break;
				}
				HX_STACK_LINE(484)
				::flixel::effects::postprocess::PostProcess tmp13 = _g1->__get(_g).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(484)
				::flixel::effects::postprocess::PostProcess postProcess = tmp13;		HX_STACK_VAR(postProcess,"postProcess");
				HX_STACK_LINE(484)
				++(_g);
				HX_STACK_LINE(486)
				postProcess->rebuild();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGame_obj,resizeGame,(void))

Void FlxGame_obj::onEnterFrame( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onEnterFrame",0x001b1a90,"flixel.FlxGame.onEnterFrame","flixel/FlxGame.hx",495,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(496)
		int tmp = this->getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		this->ticks = tmp;
		HX_STACK_LINE(497)
		int tmp1 = this->ticks;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(497)
		int tmp2 = this->_total;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(497)
		this->_elapsedMS = tmp3;
		HX_STACK_LINE(498)
		int tmp4 = this->ticks;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(498)
		this->_total = tmp4;
		HX_STACK_LINE(501)
		::flixel::_system::ui::FlxSoundTray tmp5 = this->soundTray;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		if ((tmp6)){
			HX_STACK_LINE(501)
			::flixel::_system::ui::FlxSoundTray tmp8 = this->soundTray;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(501)
			::flixel::_system::ui::FlxSoundTray tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(501)
			tmp7 = tmp9->__Field(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(501)
			tmp7 = false;
		}
		HX_STACK_LINE(501)
		if ((tmp7)){
			HX_STACK_LINE(503)
			::flixel::_system::ui::FlxSoundTray tmp8 = this->soundTray;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(503)
			Float tmp9 = this->_elapsedMS;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(503)
			tmp8->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp9);
		}
		HX_STACK_LINE(507)
		bool tmp8 = this->_lostFocus;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(507)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(507)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(507)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(507)
		if ((tmp11)){
			HX_STACK_LINE(507)
			bool tmp13 = ::flixel::FlxG_obj::autoPause;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(507)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(507)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(507)
			tmp12 = !(tmp15);
		}
		else{
			HX_STACK_LINE(507)
			tmp12 = true;
		}
		HX_STACK_LINE(507)
		if ((tmp12)){
			HX_STACK_LINE(509)
			::flixel::_system::frontEnds::VCRFrontEnd tmp13 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(509)
			bool tmp14 = tmp13->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(509)
			if ((tmp14)){
				HX_STACK_LINE(511)
				::flixel::_system::frontEnds::VCRFrontEnd tmp15 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(511)
				bool tmp16 = tmp15->__Field(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(511)
				if ((tmp16)){
					HX_STACK_LINE(513)
					::flixel::_system::frontEnds::VCRFrontEnd tmp17 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(513)
					tmp17->__FieldRef(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")) = false;
				}
				else{
					HX_STACK_LINE(515)
					::flixel::FlxState tmp17 = this->_state;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(515)
					::flixel::FlxState tmp18 = this->_requestedState;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(515)
					bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(515)
					if ((tmp19)){
						HX_STACK_LINE(517)
						return null();
					}
				}
			}
			HX_STACK_LINE(521)
			bool tmp15 = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(521)
			if ((tmp15)){
				HX_STACK_LINE(523)
				Float tmp16 = this->_elapsedMS;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(523)
				hx::AddEq(this->_accumulator,tmp16);
				HX_STACK_LINE(524)
				Float tmp17 = this->_accumulator;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(524)
				Float tmp18 = this->_maxAccumulation;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(524)
				bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(524)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(524)
				if ((tmp19)){
					HX_STACK_LINE(524)
					tmp20 = this->_maxAccumulation;
				}
				else{
					HX_STACK_LINE(524)
					tmp20 = this->_accumulator;
				}
				HX_STACK_LINE(524)
				this->_accumulator = tmp20;
				HX_STACK_LINE(526)
				while((true)){
					HX_STACK_LINE(526)
					Float tmp21 = this->_accumulator;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(526)
					Float tmp22 = this->_stepMS;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(526)
					bool tmp23 = (tmp21 >= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(526)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(526)
					if ((tmp24)){
						HX_STACK_LINE(526)
						break;
					}
					HX_STACK_LINE(528)
					this->step();
					HX_STACK_LINE(529)
					Float tmp25 = this->_stepMS;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(529)
					hx::SubEq(this->_accumulator,tmp25);
				}
			}
			else{
				HX_STACK_LINE(534)
				this->step();
			}
			HX_STACK_LINE(541)
			this->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxGame","resetGame",0xde30cf45,"flixel.FlxGame.resetGame","flixel/FlxGame.hx",555,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(556)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		tmp->__Field(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(562)
		bool tmp1 = this->_skipSplash;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(562)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(562)
		if ((tmp2)){
			HX_STACK_LINE(562)
			::hx::Class tmp4 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(562)
			::hx::Class tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(562)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(562)
			tmp3 = true;
		}
		HX_STACK_LINE(562)
		if ((tmp3)){
			HX_STACK_LINE(564)
			::hx::Class tmp4 = this->_initialState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(564)
			::flixel::FlxState tmp5 = ::Type_obj::createInstance(tmp4,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(564)
			this->_requestedState = tmp5;
			HX_STACK_LINE(565)
			::hx::Class tmp6 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(565)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(565)
			if ((tmp7)){
				HX_STACK_LINE(567)
				this->_gameJustStarted = true;
			}
		}
		else{
			HX_STACK_LINE(572)
			::hx::Class tmp4 = this->_initialState;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(572)
			::flixel::_system::FlxSplash_obj::nextState = tmp4;
			HX_STACK_LINE(573)
			::flixel::_system::FlxSplash tmp5 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(573)
			this->_requestedState = tmp5;
			HX_STACK_LINE(574)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(584)
		::flixel::FlxG_obj::reset();
		HX_STACK_LINE(586)
		::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(586)
		tmp4->__Field(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_FRAME("flixel.FlxGame","switchState",0xedf41a61,"flixel.FlxGame.switchState","flixel/FlxGame.hx",595,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(597)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		tmp->__Field(HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"), hx::paccDynamic )();
		HX_STACK_LINE(598)
		::flixel::_system::frontEnds::CameraFrontEnd tmp1 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(598)
		tmp1->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(null());
		HX_STACK_LINE(599)
		::flixel::_system::frontEnds::InputFrontEnd tmp2 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(599)
		tmp2->__Field(HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"), hx::paccDynamic )();
		HX_STACK_LINE(601)
		::flixel::_system::frontEnds::SoundFrontEnd tmp3 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(601)
		tmp3->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )(null());
		HX_STACK_LINE(604)
		::flixel::_system::frontEnds::SignalFrontEnd tmp4 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(604)
		tmp4->__Field(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(611)
		::flixel::FlxState tmp5 = this->_state;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(611)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(611)
		if ((tmp6)){
			HX_STACK_LINE(613)
			::flixel::FlxState tmp7 = this->_state;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(613)
			tmp7->destroy();
		}
		HX_STACK_LINE(617)
		::flixel::FlxState tmp7 = this->_requestedState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(617)
		this->_state = tmp7;
		HX_STACK_LINE(619)
		::flixel::_system::frontEnds::SignalFrontEnd tmp8 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(619)
		::flixel::FlxState tmp9 = this->_state;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(619)
		tmp8->__Field(HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(621)
		::flixel::FlxState tmp10 = this->_state;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(621)
		tmp10->create();
		HX_STACK_LINE(623)
		bool tmp11 = this->_gameJustStarted;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(623)
		if ((tmp11)){
			HX_STACK_LINE(625)
			this->gameStart();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_FRAME("flixel.FlxGame","gameStart",0x0d0c34f4,"flixel.FlxGame.gameStart","flixel/FlxGame.hx",634,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(635)
		::flixel::_system::frontEnds::SignalFrontEnd tmp = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(635)
		tmp->__Field(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(636)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_FRAME("flixel.FlxGame","step",0xd28f5fe8,"flixel.FlxGame.step","flixel/FlxGame.hx",646,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(648)
		bool tmp = this->_resetGame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		if ((tmp)){
			HX_STACK_LINE(650)
			{
				HX_STACK_LINE(650)
				::flixel::_system::frontEnds::SignalFrontEnd tmp1 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(650)
				tmp1->__Field(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
				HX_STACK_LINE(650)
				bool tmp2 = this->_skipSplash;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(650)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(650)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(650)
				if ((tmp3)){
					HX_STACK_LINE(650)
					::hx::Class tmp5 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(650)
					::hx::Class tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(650)
					tmp4 = (tmp6 != null());
				}
				else{
					HX_STACK_LINE(650)
					tmp4 = true;
				}
				HX_STACK_LINE(650)
				if ((tmp4)){
					HX_STACK_LINE(650)
					::hx::Class tmp5 = this->_initialState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(650)
					::flixel::FlxState tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(650)
					this->_requestedState = tmp6;
					HX_STACK_LINE(650)
					::hx::Class tmp7 = ::flixel::_system::FlxSplash_obj::nextState;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(650)
					bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(650)
					if ((tmp8)){
						HX_STACK_LINE(650)
						this->_gameJustStarted = true;
					}
				}
				else{
					HX_STACK_LINE(650)
					::hx::Class tmp5 = this->_initialState;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(650)
					::flixel::_system::FlxSplash_obj::nextState = tmp5;
					HX_STACK_LINE(650)
					::flixel::_system::FlxSplash tmp6 = ::flixel::_system::FlxSplash_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(650)
					this->_requestedState = tmp6;
					HX_STACK_LINE(650)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(650)
				::flixel::FlxG_obj::reset();
				HX_STACK_LINE(650)
				::flixel::_system::frontEnds::SignalFrontEnd tmp5 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(650)
				tmp5->__Field(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
			}
			HX_STACK_LINE(651)
			this->_resetGame = false;
		}
		HX_STACK_LINE(686)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxGame","update",0x9b7d5da5,"flixel.FlxGame.update","flixel/FlxGame.hx",698,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(699)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(699)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(699)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(699)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(699)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(699)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(699)
		if ((tmp4)){
			HX_STACK_LINE(699)
			::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(699)
			::flixel::FlxState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(699)
			bool tmp8 = tmp7->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(699)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(699)
			tmp5 = !(tmp9);
		}
		else{
			HX_STACK_LINE(699)
			tmp5 = true;
		}
		HX_STACK_LINE(699)
		if ((tmp5)){
			HX_STACK_LINE(701)
			return null();
		}
		HX_STACK_LINE(704)
		::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(704)
		::flixel::FlxState tmp7 = this->_requestedState;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(704)
		bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(704)
		if ((tmp8)){
			HX_STACK_LINE(706)
			this->switchState();
		}
		HX_STACK_LINE(716)
		::flixel::_system::frontEnds::SignalFrontEnd tmp9 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(716)
		tmp9->__Field(HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(718)
		bool tmp10 = ::flixel::FlxG_obj::fixedTimestep;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(718)
		if ((tmp10)){
			HX_STACK_LINE(720)
			Float tmp11 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(720)
			Float tmp12 = this->_stepSeconds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(720)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(720)
			::flixel::FlxG_obj::elapsed = tmp13;
		}
		else{
			HX_STACK_LINE(724)
			Float tmp11 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(724)
			Float tmp12 = this->_elapsedMS;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(724)
			Float tmp13 = (Float(tmp12) / Float((int)1000));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(724)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(724)
			::flixel::FlxG_obj::elapsed = tmp14;
			HX_STACK_LINE(726)
			Float tmp15 = ::flixel::FlxG_obj::maxElapsed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(726)
			Float tmp16 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(726)
			Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(726)
			Float max = tmp17;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(727)
			Float tmp18 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(727)
			Float tmp19 = max;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(727)
			bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(727)
			if ((tmp20)){
				HX_STACK_LINE(728)
				::flixel::FlxG_obj::elapsed = max;
			}
		}
		HX_STACK_LINE(731)
		this->updateInput();
		HX_STACK_LINE(734)
		::flixel::effects::postprocess::PostProcess tmp11 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(734)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(734)
		if ((tmp12)){
			HX_STACK_LINE(736)
			::flixel::effects::postprocess::PostProcess tmp13 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(736)
			Float tmp14 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(736)
			tmp13->update(tmp14);
		}
		HX_STACK_LINE(741)
		::flixel::_system::frontEnds::SoundFrontEnd tmp13 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(741)
		Float tmp14 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(741)
		tmp13->__Field(HX_HCSTRING("update","\x09","\x86","\x05","\x87"), hx::paccDynamic )(tmp14);
		HX_STACK_LINE(743)
		{
			HX_STACK_LINE(743)
			Float tmp15 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(743)
			Float elapsed = tmp15;		HX_STACK_VAR(elapsed,"elapsed");
			HX_STACK_LINE(743)
			{
				HX_STACK_LINE(743)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(743)
				::flixel::_system::frontEnds::PluginFrontEnd tmp16 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(743)
				Array< ::Dynamic > _g1 = tmp16->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(743)
				while((true)){
					HX_STACK_LINE(743)
					bool tmp17 = (_g < _g1->length);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(743)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(743)
					if ((tmp18)){
						HX_STACK_LINE(743)
						break;
					}
					HX_STACK_LINE(743)
					::flixel::FlxBasic tmp19 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(743)
					::flixel::FlxBasic plugin = tmp19;		HX_STACK_VAR(plugin,"plugin");
					HX_STACK_LINE(743)
					++(_g);
					HX_STACK_LINE(743)
					bool tmp20 = plugin->exists;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(743)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(743)
					if ((tmp20)){
						HX_STACK_LINE(743)
						tmp21 = plugin->active;
					}
					else{
						HX_STACK_LINE(743)
						tmp21 = false;
					}
					HX_STACK_LINE(743)
					if ((tmp21)){
						HX_STACK_LINE(743)
						Float tmp22 = elapsed;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(743)
						plugin->update(tmp22);
					}
				}
			}
		}
		HX_STACK_LINE(745)
		::flixel::FlxState tmp15 = this->_state;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(745)
		Float tmp16 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(745)
		tmp15->tryUpdate(tmp16);
		HX_STACK_LINE(747)
		{
			HX_STACK_LINE(747)
			Float tmp17 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(747)
			Float elapsed = tmp17;		HX_STACK_VAR(elapsed,"elapsed");
			HX_STACK_LINE(747)
			{
				HX_STACK_LINE(747)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(747)
				::flixel::_system::frontEnds::CameraFrontEnd tmp18 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(747)
				Array< ::Dynamic > _g1 = tmp18->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(747)
				while((true)){
					HX_STACK_LINE(747)
					bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(747)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(747)
					if ((tmp20)){
						HX_STACK_LINE(747)
						break;
					}
					HX_STACK_LINE(747)
					::flixel::FlxCamera tmp21 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(747)
					::flixel::FlxCamera camera = tmp21;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(747)
					++(_g);
					HX_STACK_LINE(747)
					bool tmp22 = (camera != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(747)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(747)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(747)
					if ((tmp23)){
						HX_STACK_LINE(747)
						tmp24 = camera->exists;
					}
					else{
						HX_STACK_LINE(747)
						tmp24 = false;
					}
					HX_STACK_LINE(747)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(747)
					if ((tmp24)){
						HX_STACK_LINE(747)
						tmp25 = camera->active;
					}
					else{
						HX_STACK_LINE(747)
						tmp25 = false;
					}
					HX_STACK_LINE(747)
					if ((tmp25)){
						HX_STACK_LINE(747)
						Float tmp26 = elapsed;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(747)
						camera->update(tmp26);
					}
				}
			}
		}
		HX_STACK_LINE(748)
		::flixel::_system::frontEnds::SignalFrontEnd tmp17 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(748)
		tmp17->__Field(HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(755)
		{
			HX_STACK_LINE(755)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(755)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(755)
			while((true)){
				HX_STACK_LINE(755)
				bool tmp18 = (_g < _g1->length);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(755)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(755)
				if ((tmp19)){
					HX_STACK_LINE(755)
					break;
				}
				HX_STACK_LINE(755)
				::flixel::input::FlxSwipe tmp20 = _g1->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(755)
				::flixel::input::FlxSwipe swipe = tmp20;		HX_STACK_VAR(swipe,"swipe");
				HX_STACK_LINE(755)
				++(_g);
				HX_STACK_LINE(757)
				swipe = null();
			}
		}
		HX_STACK_LINE(759)
		::flixel::util::FlxArrayUtil_obj::clearArray(::flixel::FlxG_obj::swipes,null());
		HX_STACK_LINE(762)
		bool tmp18 = this->filtersEnabled;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(762)
		this->set_filters((  ((tmp18)) ? Array< ::Dynamic >(this->_filters) : Array< ::Dynamic >(null()) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_FRAME("flixel.FlxGame","updateInput",0x1a1f4025,"flixel.FlxGame.updateInput","flixel/FlxGame.hx",809,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(809)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(809)
		::flixel::_system::frontEnds::InputFrontEnd tmp = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(809)
		Array< ::flixel::input::IFlxInputManager > _g1 = tmp->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(809)
		while((true)){
			HX_STACK_LINE(809)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(809)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(809)
			if ((tmp2)){
				HX_STACK_LINE(809)
				break;
			}
			HX_STACK_LINE(809)
			::flixel::input::IFlxInputManager tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(809)
			::flixel::input::IFlxInputManager input = tmp3;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(809)
			++(_g);
			HX_STACK_LINE(809)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxGame","draw",0xc8a3a4a0,"flixel.FlxGame.draw","flixel/FlxGame.hx",828,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(829)
		::flixel::FlxState tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(829)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(829)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(829)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(829)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(829)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(829)
		if ((tmp4)){
			HX_STACK_LINE(829)
			::flixel::FlxState tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(829)
			::flixel::FlxState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(829)
			bool tmp8 = tmp7->exists;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(829)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(829)
			tmp5 = !(tmp9);
		}
		else{
			HX_STACK_LINE(829)
			tmp5 = true;
		}
		HX_STACK_LINE(829)
		if ((tmp5)){
			HX_STACK_LINE(831)
			return null();
		}
		HX_STACK_LINE(842)
		::flixel::_system::frontEnds::SignalFrontEnd tmp6 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(842)
		tmp6->__Field(HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
		HX_STACK_LINE(844)
		bool tmp7 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(844)
		if ((tmp7)){
			HX_STACK_LINE(846)
			::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS = (int)0;
		}
		HX_STACK_LINE(850)
		::flixel::effects::postprocess::PostProcess tmp8 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(850)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(850)
		if ((tmp9)){
			HX_STACK_LINE(852)
			::flixel::effects::postprocess::PostProcess tmp10 = this->postProcesses->__get((int)0).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(852)
			tmp10->capture();
		}
		HX_STACK_LINE(856)
		{
			HX_STACK_LINE(856)
			::flixel::_system::frontEnds::CameraFrontEnd tmp10 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(856)
			::flixel::_system::frontEnds::CameraFrontEnd _this = tmp10;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(856)
			{
				HX_STACK_LINE(856)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(856)
				Array< ::Dynamic > _g1 = _this->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(856)
				while((true)){
					HX_STACK_LINE(856)
					bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(856)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(856)
					if ((tmp12)){
						HX_STACK_LINE(856)
						break;
					}
					HX_STACK_LINE(856)
					::flixel::FlxCamera tmp13 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(856)
					::flixel::FlxCamera camera = tmp13;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(856)
					++(_g);
					HX_STACK_LINE(856)
					bool tmp14 = (camera == null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(856)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(856)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(856)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(856)
					if ((tmp16)){
						HX_STACK_LINE(856)
						bool tmp18 = camera->exists;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(856)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(856)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(856)
						tmp17 = !(tmp20);
					}
					else{
						HX_STACK_LINE(856)
						tmp17 = true;
					}
					HX_STACK_LINE(856)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(856)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(856)
					if ((tmp18)){
						HX_STACK_LINE(856)
						bool tmp20 = camera->visible;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(856)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(856)
						tmp19 = !(tmp21);
					}
					else{
						HX_STACK_LINE(856)
						tmp19 = true;
					}
					HX_STACK_LINE(856)
					if ((tmp19)){
						HX_STACK_LINE(856)
						continue;
					}
					HX_STACK_LINE(856)
					bool tmp20 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(856)
					if ((tmp20)){
						HX_STACK_LINE(856)
						camera->checkResize();
						HX_STACK_LINE(856)
						bool tmp21 = _this->__Field(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(856)
						if ((tmp21)){
							HX_STACK_LINE(856)
							camera->buffer->lock();
						}
					}
					HX_STACK_LINE(856)
					bool tmp21 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(856)
					if ((tmp21)){
						HX_STACK_LINE(856)
						camera->clearDrawStack();
						HX_STACK_LINE(856)
						::openfl::_legacy::display::Graphics tmp22 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(856)
						tmp22->clear();
					}
					HX_STACK_LINE(856)
					bool tmp22 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(856)
					if ((tmp22)){
						HX_STACK_LINE(856)
						int tmp23 = camera->bgColor;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(856)
						bool tmp24 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(856)
						camera->fill(tmp23,tmp24,null(),null());
						HX_STACK_LINE(856)
						camera->screen->dirty = true;
					}
					else{
						HX_STACK_LINE(856)
						int tmp23 = (int(camera->bgColor) & int((int)16777215));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(856)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(856)
						bool tmp25 = camera->useBgAlphaBlending;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(856)
						int tmp26 = (int(camera->bgColor) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(856)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(856)
						Float tmp28 = (Float(tmp27) / Float((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(856)
						camera->fill(tmp24,tmp25,tmp28,null());
					}
				}
			}
		}
		HX_STACK_LINE(858)
		{
			HX_STACK_LINE(858)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(858)
			::flixel::_system::frontEnds::PluginFrontEnd tmp10 = ::flixel::FlxG_obj::plugins;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(858)
			Array< ::Dynamic > _g1 = tmp10->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(858)
			while((true)){
				HX_STACK_LINE(858)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(858)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(858)
				if ((tmp12)){
					HX_STACK_LINE(858)
					break;
				}
				HX_STACK_LINE(858)
				::flixel::FlxBasic tmp13 = _g1->__get(_g).StaticCast< ::flixel::FlxBasic >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(858)
				::flixel::FlxBasic plugin = tmp13;		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(858)
				++(_g);
				HX_STACK_LINE(858)
				bool tmp14 = plugin->exists;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(858)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(858)
				if ((tmp14)){
					HX_STACK_LINE(858)
					tmp15 = plugin->visible;
				}
				else{
					HX_STACK_LINE(858)
					tmp15 = false;
				}
				HX_STACK_LINE(858)
				if ((tmp15)){
					HX_STACK_LINE(858)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(860)
		::flixel::FlxState tmp10 = this->_state;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(860)
		tmp10->draw();
		HX_STACK_LINE(862)
		bool tmp11 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(862)
		if ((tmp11)){
			HX_STACK_LINE(864)
			bool tmp12 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(864)
			if ((tmp12)){
				HX_STACK_LINE(864)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(864)
				::flixel::_system::frontEnds::CameraFrontEnd tmp13 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(864)
				Array< ::Dynamic > _g1 = tmp13->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(864)
				while((true)){
					HX_STACK_LINE(864)
					bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(864)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(864)
					if ((tmp15)){
						HX_STACK_LINE(864)
						break;
					}
					HX_STACK_LINE(864)
					::flixel::FlxCamera tmp16 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(864)
					::flixel::FlxCamera camera = tmp16;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(864)
					++(_g);
					HX_STACK_LINE(864)
					bool tmp17 = (camera != null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(864)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(864)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(864)
					if ((tmp18)){
						HX_STACK_LINE(864)
						tmp19 = camera->exists;
					}
					else{
						HX_STACK_LINE(864)
						tmp19 = false;
					}
					HX_STACK_LINE(864)
					bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(864)
					if ((tmp19)){
						HX_STACK_LINE(864)
						tmp20 = camera->visible;
					}
					else{
						HX_STACK_LINE(864)
						tmp20 = false;
					}
					HX_STACK_LINE(864)
					if ((tmp20)){
						HX_STACK_LINE(864)
						camera->render();
					}
				}
			}
		}
		HX_STACK_LINE(871)
		{
			HX_STACK_LINE(871)
			::flixel::_system::frontEnds::CameraFrontEnd tmp12 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(871)
			::flixel::_system::frontEnds::CameraFrontEnd _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(871)
			{
				HX_STACK_LINE(871)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(871)
				Array< ::Dynamic > _g1 = _this->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(871)
				while((true)){
					HX_STACK_LINE(871)
					bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(871)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(871)
					if ((tmp14)){
						HX_STACK_LINE(871)
						break;
					}
					HX_STACK_LINE(871)
					::flixel::FlxCamera tmp15 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(871)
					::flixel::FlxCamera camera = tmp15;		HX_STACK_VAR(camera,"camera");
					HX_STACK_LINE(871)
					++(_g);
					HX_STACK_LINE(871)
					bool tmp16 = (camera == null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(871)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(871)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(871)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(871)
					if ((tmp18)){
						HX_STACK_LINE(871)
						bool tmp20 = camera->exists;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(871)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(871)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(871)
						tmp19 = !(tmp22);
					}
					else{
						HX_STACK_LINE(871)
						tmp19 = true;
					}
					HX_STACK_LINE(871)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(871)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(871)
					if ((tmp20)){
						HX_STACK_LINE(871)
						bool tmp22 = camera->visible;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(871)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(871)
						tmp21 = !(tmp23);
					}
					else{
						HX_STACK_LINE(871)
						tmp21 = true;
					}
					HX_STACK_LINE(871)
					if ((tmp21)){
						HX_STACK_LINE(871)
						continue;
					}
					HX_STACK_LINE(871)
					camera->drawFX();
					HX_STACK_LINE(871)
					bool tmp22 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(871)
					if ((tmp22)){
						HX_STACK_LINE(871)
						bool tmp23 = _this->__Field(HX_HCSTRING("useBufferLocking","\xf0","\x43","\x3c","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(871)
						if ((tmp23)){
							HX_STACK_LINE(871)
							camera->buffer->unlock(null());
						}
						HX_STACK_LINE(871)
						camera->screen->dirty = true;
					}
				}
			}
		}
		HX_STACK_LINE(873)
		::flixel::_system::frontEnds::SignalFrontEnd tmp12 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(873)
		tmp12->__Field(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"), hx::paccDynamic )->__Field(HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"), hx::paccDynamic )();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))

HX_BEGIN_DEFAULT_FUNC(__default_getTimer,FlxGame_obj)
int run(){
	HX_STACK_FRAME("flixel.FlxGame","getTimer",0x73dec5eb,"flixel.FlxGame.getTimer","flixel/FlxGame.hx",881,0x34f39fed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(882)
	int tmp = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(882)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC


FlxGame_obj::FlxGame_obj()
{
	getTimer = new __default_getTimer(this);
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	HX_MARK_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_stepMS,"_stepMS");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_resetGame,"_resetGame");
	HX_MARK_MEMBER_NAME(postProcessLayer,"postProcessLayer");
	HX_MARK_MEMBER_NAME(postProcesses,"postProcesses");
	HX_MARK_MEMBER_NAME(getTimer,"getTimer");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	HX_VISIT_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_stepMS,"_stepMS");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_resetGame,"_resetGame");
	HX_VISIT_MEMBER_NAME(postProcessLayer,"postProcessLayer");
	HX_VISIT_MEMBER_NAME(postProcesses,"postProcesses");
	HX_VISIT_MEMBER_NAME(getTimer,"getTimer");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { return _stepMS; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"getTimer") ) { return getTimer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { return _resetGame; }
		if (HX_FIELD_EQ(inName,"setFilters") ) { return setFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { return _initialState; }
		if (HX_FIELD_EQ(inName,"postProcesses") ) { return postProcesses; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { return filtersEnabled; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { return _gameJustStarted; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { return _startFullscreen; }
		if (HX_FIELD_EQ(inName,"postProcessLayer") ) { return postProcessLayer; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { return _onFocusFiredOnce; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { return focusLostFramerate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { return _customFocusLostScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { _stepMS=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { getTimer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::_system::ui::FlxSoundTray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { _resetGame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postProcesses") ) { postProcesses=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { filtersEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { _gameJustStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::_system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { _startFullscreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postProcessLayer") ) { postProcessLayer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { _onFocusFiredOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { focusLostFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { _customFocusLostScreen=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda"));
	outFields->push(HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57"));
	outFields->push(HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10"));
	outFields->push(HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"));
	outFields->push(HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15"));
	outFields->push(HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a"));
	outFields->push(HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"));
	outFields->push(HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a"));
	outFields->push(HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9"));
	outFields->push(HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77"));
	outFields->push(HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2"));
	outFields->push(HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd"));
	outFields->push(HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd"));
	outFields->push(HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"));
	outFields->push(HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb"));
	outFields->push(HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c"));
	outFields->push(HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47"));
	outFields->push(HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b"));
	outFields->push(HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d"));
	outFields->push(HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa"));
	outFields->push(HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18"));
	outFields->push(HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70"));
	outFields->push(HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5"));
	outFields->push(HX_HCSTRING("postProcessLayer","\x62","\xfd","\xc8","\xec"));
	outFields->push(HX_HCSTRING("postProcesses","\x1d","\x84","\xbe","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGame_obj,focusLostFramerate),HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda")},
	{hx::fsObject /*::flixel::_system::ui::FlxSoundTray*/ ,(int)offsetof(FlxGame_obj,soundTray),HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,ticks),HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,filtersEnabled),HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_gameJustStarted),HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_initialState),HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_state),HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_total),HX_HCSTRING("_total","\x05","\x9b","\x19","\x10")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_accumulator),HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_elapsedMS),HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepMS),HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepSeconds),HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_maxAccumulation),HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_lostFocus),HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGame_obj,_filters),HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_onFocusFiredOnce),HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb")},
	{hx::fsObject /*::flixel::_system::ui::FlxFocusLostScreen*/ ,(int)offsetof(FlxGame_obj,_focusLostScreen),HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxGame_obj,_inputContainer),HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_customSoundTray),HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FlxGame_obj,_customFocusLostScreen),HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_skipSplash),HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_startFullscreen),HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_requestedState),HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_resetGame),HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxGame_obj,postProcessLayer),HX_HCSTRING("postProcessLayer","\x62","\xfd","\xc8","\xec")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGame_obj,postProcesses),HX_HCSTRING("postProcesses","\x1d","\x84","\xbe","\x80")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxGame_obj,getTimer),HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("focusLostFramerate","\x11","\xa8","\xf2","\xda"),
	HX_HCSTRING("soundTray","\x65","\x62","\xd1","\x57"),
	HX_HCSTRING("ticks","\x76","\x2e","\x2e","\x10"),
	HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"),
	HX_HCSTRING("_gameJustStarted","\x24","\xcc","\x52","\x15"),
	HX_HCSTRING("_initialState","\xcc","\x09","\x8a","\x2a"),
	HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"),
	HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"),
	HX_HCSTRING("_accumulator","\x47","\xf7","\xa7","\x3a"),
	HX_HCSTRING("_elapsedMS","\x63","\xde","\xe6","\xb9"),
	HX_HCSTRING("_stepMS","\x51","\xa7","\x14","\x77"),
	HX_HCSTRING("_stepSeconds","\x94","\x66","\xe1","\xd2"),
	HX_HCSTRING("_maxAccumulation","\x8a","\x43","\xd9","\xcd"),
	HX_HCSTRING("_lostFocus","\x15","\x47","\x9b","\xcd"),
	HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"),
	HX_HCSTRING("_onFocusFiredOnce","\x75","\x65","\x64","\xfb"),
	HX_HCSTRING("_focusLostScreen","\xe9","\xc0","\x3c","\x2c"),
	HX_HCSTRING("_inputContainer","\x76","\x08","\x99","\x47"),
	HX_HCSTRING("_customSoundTray","\xf5","\xfe","\x64","\x5b"),
	HX_HCSTRING("_customFocusLostScreen","\xf8","\xe6","\xa0","\x2d"),
	HX_HCSTRING("_skipSplash","\x65","\x42","\x26","\xfa"),
	HX_HCSTRING("_startFullscreen","\xbe","\x03","\xce","\x18"),
	HX_HCSTRING("_requestedState","\x62","\x56","\x37","\x70"),
	HX_HCSTRING("_resetGame","\x22","\x79","\xed","\xe5"),
	HX_HCSTRING("postProcessLayer","\x62","\xfd","\xc8","\xec"),
	HX_HCSTRING("postProcesses","\x1d","\x84","\xbe","\x80"),
	HX_HCSTRING("setFilters","\x39","\xc6","\x25","\x5c"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("resizeGame","\x06","\x84","\x99","\xb8"),
	HX_HCSTRING("onEnterFrame","\xf4","\xa5","\x93","\xda"),
	HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a"),
	HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77"),
	HX_HCSTRING("gameStart","\x10","\x63","\x26","\xb9"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateInput","\x41","\x2d","\xb6","\xa3"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxGame","\x52","\xad","\x0b","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGame_obj >;
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
