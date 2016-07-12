#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_FlxRenderMethod
#include <flixel/FlxRenderMethod.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_StageDisplayState
#include <openfl/_legacy/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
namespace flixel{

Void FlxG_obj::__construct()
{
	return null();
}

//FlxG_obj::~FlxG_obj() { }

Dynamic FlxG_obj::__CreateEmpty() { return  new FlxG_obj; }
hx::ObjectPtr< FlxG_obj > FlxG_obj::__new()
{  hx::ObjectPtr< FlxG_obj > _result_ = new FlxG_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxG_obj > _result_ = new FlxG_obj();
	_result_->__construct();
	return _result_;}

bool FlxG_obj::autoPause;

bool FlxG_obj::fixedTimestep;

Float FlxG_obj::timeScale;

int FlxG_obj::worldDivisions;

::flixel::FlxCamera FlxG_obj::camera;

::flixel::_system::FlxVersion FlxG_obj::VERSION;

::flixel::FlxGame FlxG_obj::game;

int FlxG_obj::updateFramerate;

int FlxG_obj::drawFramerate;

::flixel::FlxRenderMethod FlxG_obj::renderMethod;

bool FlxG_obj::renderBlit;

bool FlxG_obj::renderTile;

Float FlxG_obj::elapsed;

Float FlxG_obj::maxElapsed;

int FlxG_obj::width;

int FlxG_obj::height;

::flixel::_system::scaleModes::BaseScaleMode FlxG_obj::scaleMode;

::flixel::math::FlxRect FlxG_obj::worldBounds;

::flixel::util::FlxSave FlxG_obj::save;

::flixel::math::FlxRandom FlxG_obj::random;

::flixel::input::mouse::FlxMouse FlxG_obj::mouse;

Array< ::Dynamic > FlxG_obj::swipes;

::flixel::input::keyboard::FlxKeyboard FlxG_obj::keys;

::flixel::input::gamepad::FlxGamepadManager FlxG_obj::gamepads;

::flixel::_system::frontEnds::InputFrontEnd FlxG_obj::inputs;

::flixel::_system::frontEnds::ConsoleFrontEnd FlxG_obj::console;

::flixel::_system::frontEnds::LogFrontEnd FlxG_obj::log;

::flixel::_system::frontEnds::BitmapLogFrontEnd FlxG_obj::bitmapLog;

::flixel::_system::frontEnds::WatchFrontEnd FlxG_obj::watch;

::flixel::_system::frontEnds::DebuggerFrontEnd FlxG_obj::debugger;

::flixel::_system::frontEnds::VCRFrontEnd FlxG_obj::vcr;

::flixel::_system::frontEnds::BitmapFrontEnd FlxG_obj::bitmap;

::flixel::_system::frontEnds::CameraFrontEnd FlxG_obj::cameras;

::flixel::_system::frontEnds::PluginFrontEnd FlxG_obj::plugins;

int FlxG_obj::initialWidth;

int FlxG_obj::initialHeight;

Float FlxG_obj::initialZoom;

::flixel::_system::frontEnds::SoundFrontEnd FlxG_obj::sound;

::flixel::_system::frontEnds::SignalFrontEnd FlxG_obj::signals;

Void FlxG_obj::resizeGame( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxG","resizeGame",0x80aafe0d,"flixel.FlxG.resizeGame","flixel/FlxG.hx",289,0x8e176836)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(290)
		::flixel::_system::scaleModes::BaseScaleMode tmp = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(290)
		int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(290)
		tmp->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,resizeGame,(void))

Void FlxG_obj::resizeWindow( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxG","resizeWindow",0x41839acb,"flixel.FlxG.resizeWindow","flixel/FlxG.hx",297,0x8e176836)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(300)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(300)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		tmp1->resize(tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,resizeWindow,(void))

Void FlxG_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetGame",0x7560e13a,"flixel.FlxG.resetGame","flixel/FlxG.hx",311,0x8e176836)
		HX_STACK_LINE(312)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		tmp->_resetGame = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetGame,(void))

Void FlxG_obj::switchState( ::flixel::FlxState nextState){
{
		HX_STACK_FRAME("flixel.FlxG","switchState",0xbec45396,"flixel.FlxG.switchState","flixel/FlxG.hx",320,0x8e176836)
		HX_STACK_ARG(nextState,"nextState")
		HX_STACK_LINE(321)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		::flixel::FlxState tmp1 = nextState;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		bool tmp2 = tmp->_state->switchTo(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		if ((tmp2)){
			HX_STACK_LINE(322)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(322)
			tmp3->_requestedState = nextState;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,switchState,(void))

Void FlxG_obj::resetState( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetState",0x34b927c9,"flixel.FlxG.resetState","flixel/FlxG.hx",331,0x8e176836)
		HX_STACK_LINE(331)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		::flixel::FlxState tmp1 = tmp->_state;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		::flixel::FlxState tmp3 = ::Type_obj::createInstance(tmp2,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		::flixel::FlxState nextState = tmp3;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(331)
		::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		::flixel::FlxState tmp5 = nextState;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		bool tmp6 = tmp4->_state->switchTo(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		if ((tmp6)){
			HX_STACK_LINE(331)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(331)
			tmp7->_requestedState = nextState;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetState,(void))

bool FlxG_obj::overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
	HX_STACK_FRAME("flixel.FlxG","overlap",0x37194f20,"flixel.FlxG.overlap","flixel/FlxG.hx",349,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_ARG(ProcessCallback,"ProcessCallback")
	HX_STACK_LINE(350)
	bool tmp = (ObjectOrGroup1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	if ((tmp)){
		HX_STACK_LINE(352)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		ObjectOrGroup1 = tmp1->_state;
	}
	HX_STACK_LINE(354)
	bool tmp1 = (ObjectOrGroup2 == ObjectOrGroup1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	if ((tmp1)){
		HX_STACK_LINE(356)
		ObjectOrGroup2 = null();
	}
	HX_STACK_LINE(358)
	int tmp2 = ::flixel::FlxG_obj::worldDivisions;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(358)
	::flixel::_system::FlxQuadTree_obj::divisions = tmp2;
	HX_STACK_LINE(359)
	::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(359)
	Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(359)
	::flixel::math::FlxRect tmp5 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(359)
	Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(359)
	::flixel::math::FlxRect tmp7 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(359)
	Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(359)
	::flixel::math::FlxRect tmp9 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(359)
	Float tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(359)
	::flixel::_system::FlxQuadTree tmp11 = ::flixel::_system::FlxQuadTree_obj::recycle(tmp4,tmp6,tmp8,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(359)
	::flixel::_system::FlxQuadTree quadTree = tmp11;		HX_STACK_VAR(quadTree,"quadTree");
	HX_STACK_LINE(360)
	::flixel::FlxBasic tmp12 = ObjectOrGroup1;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(360)
	::flixel::FlxBasic tmp13 = ObjectOrGroup2;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(360)
	Dynamic tmp14 = NotifyCallback;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(360)
	Dynamic tmp15 = ProcessCallback;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(360)
	quadTree->__Field(HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"), hx::paccDynamic )(tmp12,tmp13,tmp14,tmp15);
	HX_STACK_LINE(361)
	bool tmp16 = quadTree->__Field(HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(361)
	bool result = tmp16;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(362)
	quadTree->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )();
	HX_STACK_LINE(363)
	bool tmp17 = result;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(363)
	return tmp17;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,overlap,return )

bool FlxG_obj::pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_FRAME("flixel.FlxG","pixelPerfectOverlap",0x4d139839,"flixel.FlxG.pixelPerfectOverlap","flixel/FlxG.hx",377,0x8e176836)
	HX_STACK_ARG(Sprite1,"Sprite1")
	HX_STACK_ARG(Sprite2,"Sprite2")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(378)
		::flixel::FlxSprite tmp = Sprite1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(378)
		::flixel::FlxSprite tmp1 = Sprite2;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(378)
		int tmp2 = AlphaTolerance;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(378)
		bool tmp4 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(378)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,pixelPerfectOverlap,return )

bool FlxG_obj::collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback){
	HX_STACK_FRAME("flixel.FlxG","collide",0x7b6cbb17,"flixel.FlxG.collide","flixel/FlxG.hx",396,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_LINE(397)
	::flixel::FlxBasic tmp = ObjectOrGroup1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(397)
	::flixel::FlxBasic tmp1 = ObjectOrGroup2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(397)
	Dynamic tmp2 = NotifyCallback;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(397)
	Dynamic tmp3 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(397)
	bool tmp4 = ::flixel::FlxG_obj::overlap(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(397)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,collide,return )

::flixel::effects::postprocess::PostProcess FlxG_obj::addPostProcess( ::flixel::effects::postprocess::PostProcess postProcess){
	HX_STACK_FRAME("flixel.FlxG","addPostProcess",0x527e22d5,"flixel.FlxG.addPostProcess","flixel/FlxG.hx",436,0x8e176836)
	HX_STACK_ARG(postProcess,"postProcess")
	HX_STACK_LINE(439)
	{
		HX_STACK_LINE(440)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		Array< ::Dynamic > postProcesses = tmp->postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(443)
		int length = postProcesses->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(444)
		bool tmp1 = (length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		if ((tmp1)){
			HX_STACK_LINE(446)
			int tmp2 = (length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(446)
			::flixel::effects::postprocess::PostProcess tmp3 = postProcesses->__get(tmp2).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(446)
			::flixel::effects::postprocess::PostProcess tmp4 = postProcess;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(446)
			tmp3->set_to(tmp4);
		}
		HX_STACK_LINE(449)
		::flixel::FlxGame tmp2 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		::flixel::effects::postprocess::PostProcess tmp3 = postProcess;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		tmp2->postProcessLayer->addChild(tmp3);
		HX_STACK_LINE(450)
		::flixel::effects::postprocess::PostProcess tmp4 = postProcess;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(450)
		postProcesses->push(tmp4);
	}
	HX_STACK_LINE(458)
	::flixel::effects::postprocess::PostProcess tmp = postProcess;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,addPostProcess,return )

Void FlxG_obj::removePostProcess( ::flixel::effects::postprocess::PostProcess postProcess){
{
		HX_STACK_FRAME("flixel.FlxG","removePostProcess",0x4ea610e4,"flixel.FlxG.removePostProcess","flixel/FlxG.hx",462,0x8e176836)
		HX_STACK_ARG(postProcess,"postProcess")
		HX_STACK_LINE(464)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		Array< ::Dynamic > postProcesses = tmp->postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(465)
		::flixel::effects::postprocess::PostProcess tmp1 = postProcess;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		bool tmp2 = postProcesses->remove(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(465)
		if ((tmp2)){
			HX_STACK_LINE(467)
			::flixel::FlxG_obj::chainPostProcesses();
			HX_STACK_LINE(468)
			postProcess->set_to(null());
			HX_STACK_LINE(470)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(470)
			::openfl::_legacy::display::Sprite tmp4 = tmp3->postProcessLayer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(470)
			::flixel::effects::postprocess::PostProcess tmp5 = postProcess;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(470)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,removePostProcess,(void))

Void FlxG_obj::chainPostProcesses( ){
{
		HX_STACK_FRAME("flixel.FlxG","chainPostProcesses",0xe504cb63,"flixel.FlxG.chainPostProcesses","flixel/FlxG.hx",477,0x8e176836)
		HX_STACK_LINE(478)
		::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		Array< ::Dynamic > postProcesses = tmp->postProcesses;		HX_STACK_VAR(postProcesses,"postProcesses");
		HX_STACK_LINE(480)
		bool tmp1 = (postProcesses->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(480)
		if ((tmp1)){
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(482)
				int tmp2 = (postProcesses->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(482)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(482)
				while((true)){
					HX_STACK_LINE(482)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(482)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(482)
					if ((tmp4)){
						HX_STACK_LINE(482)
						break;
					}
					HX_STACK_LINE(482)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(482)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(484)
					::flixel::effects::postprocess::PostProcess tmp6 = postProcesses->__get(i).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(484)
					int tmp7 = (i + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(484)
					::flixel::effects::postprocess::PostProcess tmp8 = postProcesses->__get(tmp7).StaticCast< ::flixel::effects::postprocess::PostProcess >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(484)
					tmp6->set_to(tmp8);
				}
			}
			HX_STACK_LINE(486)
			::flixel::effects::postprocess::PostProcess tmp2 = ::flixel::util::FlxArrayUtil_obj::last(postProcesses);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(486)
			tmp2->set_to(null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,chainPostProcesses,(void))

Void FlxG_obj::openURL( ::String URL,::String __o_Target){
::String Target = __o_Target.Default(HX_HCSTRING("_blank","\x95","\x26","\xd9","\xb0"));
	HX_STACK_FRAME("flixel.FlxG","openURL",0xce3ec95e,"flixel.FlxG.openURL","flixel/FlxG.hx",499,0x8e176836)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Target,"Target")
{
		HX_STACK_LINE(500)
		::String prefix = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(502)
		::EReg tmp = ::EReg_obj::__new(HX_HCSTRING("^https?://","\x48","\xee","\xdd","\x38"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		::String tmp1 = URL;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		bool tmp2 = tmp->match(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(502)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		if ((tmp3)){
			HX_STACK_LINE(503)
			prefix = HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a");
		}
		HX_STACK_LINE(504)
		::String tmp4 = (prefix + URL);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(504)
		::openfl::_legacy::net::URLRequest tmp5 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(504)
		::String tmp6 = Target;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(504)
		::openfl::_legacy::Lib_obj::getURL(tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,openURL,(void))

Void FlxG_obj::init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom){
{
		HX_STACK_FRAME("flixel.FlxG","init",0x1141e5d7,"flixel.FlxG.init","flixel/FlxG.hx",511,0x8e176836)
		HX_STACK_ARG(Game,"Game")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Zoom,"Zoom")
		HX_STACK_LINE(512)
		::flixel::FlxG_obj::game = Game;
		HX_STACK_LINE(513)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(513)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		::flixel::FlxG_obj::width = tmp2;
		HX_STACK_LINE(514)
		int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(514)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(514)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(514)
		::flixel::FlxG_obj::height = tmp5;
		HX_STACK_LINE(516)
		::flixel::FlxG_obj::initRenderMethod();
		HX_STACK_LINE(518)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(518)
		::flixel::FlxG_obj::initialWidth = tmp6;
		HX_STACK_LINE(519)
		int tmp7 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(519)
		::flixel::FlxG_obj::initialHeight = tmp7;
		HX_STACK_LINE(520)
		Float tmp8 = ::flixel::FlxCamera_obj::defaultZoom = Zoom;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(520)
		::flixel::FlxG_obj::initialZoom = tmp8;
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			::openfl::_legacy::display::MovieClip tmp9 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(522)
			::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(522)
			int tmp11 = tmp10->get_stageWidth();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(522)
			int Width1 = tmp11;		HX_STACK_VAR(Width1,"Width1");
			HX_STACK_LINE(522)
			::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(522)
			::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(522)
			int tmp14 = tmp13->get_stageHeight();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(522)
			int Height1 = tmp14;		HX_STACK_VAR(Height1,"Height1");
			HX_STACK_LINE(522)
			::flixel::_system::scaleModes::BaseScaleMode tmp15 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(522)
			int tmp16 = Width1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(522)
			int tmp17 = Height1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(522)
			tmp15->__Field(HX_HCSTRING("onMeasure","\xff","\xb3","\x94","\x14"), hx::paccDynamic )(tmp16,tmp17);
		}
		HX_STACK_LINE(526)
		::flixel::_system::frontEnds::InputFrontEnd tmp9 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(526)
		::flixel::input::keyboard::FlxKeyboard tmp10 = ::flixel::input::keyboard::FlxKeyboard_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(526)
		::flixel::input::keyboard::FlxKeyboard tmp11 = tmp9->__Field(HX_HCSTRING("add_flixel_input_keyboard_FlxKeyboard","\x3b","\x4b","\x11","\x84"), hx::paccDynamic )(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(526)
		::flixel::FlxG_obj::keys = tmp11;
		HX_STACK_LINE(530)
		::flixel::_system::frontEnds::InputFrontEnd tmp12 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(530)
		::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(530)
		::openfl::_legacy::display::Sprite tmp14 = tmp13->_inputContainer;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(530)
		::flixel::input::mouse::FlxMouse tmp15 = ::flixel::input::mouse::FlxMouse_obj::__new(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(530)
		::flixel::input::mouse::FlxMouse tmp16 = tmp12->__Field(HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(530)
		::flixel::FlxG_obj::set_mouse(tmp16);
		HX_STACK_LINE(538)
		::flixel::_system::frontEnds::InputFrontEnd tmp17 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(538)
		::flixel::input::gamepad::FlxGamepadManager tmp18 = ::flixel::input::gamepad::FlxGamepadManager_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(538)
		::flixel::input::gamepad::FlxGamepadManager tmp19 = tmp17->__Field(HX_HCSTRING("add_flixel_input_gamepad_FlxGamepadManager","\x26","\xa8","\x4b","\x80"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(538)
		::flixel::FlxG_obj::gamepads = tmp19;
		HX_STACK_LINE(548)
		::flixel::util::FlxSave tmp20 = ::flixel::FlxG_obj::save;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(548)
		tmp20->bind(HX_HCSTRING("flixel","\x5c","\x42","\x70","\x3d"));
		HX_STACK_LINE(550)
		::flixel::_system::frontEnds::PluginFrontEnd tmp21 = ::flixel::_system::frontEnds::PluginFrontEnd_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(550)
		::flixel::FlxG_obj::plugins = tmp21;
		HX_STACK_LINE(551)
		::flixel::_system::frontEnds::VCRFrontEnd tmp22 = ::flixel::_system::frontEnds::VCRFrontEnd_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(551)
		::flixel::FlxG_obj::vcr = tmp22;
		HX_STACK_LINE(554)
		::flixel::_system::frontEnds::SoundFrontEnd tmp23 = ::flixel::_system::frontEnds::SoundFrontEnd_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(554)
		::flixel::FlxG_obj::sound = tmp23;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,init,(void))

Void FlxG_obj::initRenderMethod( ){
{
		HX_STACK_FRAME("flixel.FlxG","initRenderMethod",0x7472134e,"flixel.FlxG.initRenderMethod","flixel/FlxG.hx",559,0x8e176836)
		HX_STACK_LINE(560)
		::flixel::FlxG_obj::renderMethod = ::flixel::FlxRenderMethod_obj::BLITTING;
		HX_STACK_LINE(580)
		::flixel::FlxG_obj::renderMethod = ::flixel::FlxRenderMethod_obj::DRAW_TILES;
		HX_STACK_LINE(584)
		::flixel::FlxRenderMethod tmp = ::flixel::FlxG_obj::renderMethod;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		bool tmp1 = (tmp == ::flixel::FlxRenderMethod_obj::BLITTING);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		::flixel::FlxG_obj::renderBlit = tmp1;
		HX_STACK_LINE(585)
		::flixel::FlxRenderMethod tmp2 = ::flixel::FlxG_obj::renderMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		bool tmp3 = (tmp2 == ::flixel::FlxRenderMethod_obj::DRAW_TILES);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		::flixel::FlxG_obj::renderTile = tmp3;
		HX_STACK_LINE(587)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(587)
		::flixel::FlxObject_obj::defaultPixelPerfectPosition = tmp4;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,initRenderMethod,(void))

Void FlxG_obj::reset( ){
{
		HX_STACK_FRAME("flixel.FlxG","reset",0x31170d28,"flixel.FlxG.reset","flixel/FlxG.hx",594,0x8e176836)
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			::flixel::math::FlxRandom tmp = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(595)
			::flixel::math::FlxRandom _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(595)
			{
				HX_STACK_LINE(595)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(595)
				{
					HX_STACK_LINE(595)
					Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(595)
					Float tmp3 = (tmp2 * (int)2147483647);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(595)
					int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(595)
					int Value = tmp4;		HX_STACK_VAR(Value,"Value");
					HX_STACK_LINE(595)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						bool tmp6 = (Value < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(595)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(595)
						if ((tmp6)){
							HX_STACK_LINE(595)
							tmp7 = (int)1;
						}
						else{
							HX_STACK_LINE(595)
							tmp7 = Value;
						}
						HX_STACK_LINE(595)
						Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(595)
						bool tmp8 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(595)
						if ((tmp8)){
							HX_STACK_LINE(595)
							tmp5 = (int)2147483646;
						}
						else{
							HX_STACK_LINE(595)
							tmp5 = lowerBound;
						}
					}
					HX_STACK_LINE(595)
					Float tmp6 = ((Float)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(595)
					tmp1 = ::Std_obj::_int(tmp6);
				}
				HX_STACK_LINE(595)
				int NewSeed = tmp1;		HX_STACK_VAR(NewSeed,"NewSeed");
				HX_STACK_LINE(595)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(595)
				{
					HX_STACK_LINE(595)
					Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						bool tmp4 = (NewSeed < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(595)
						Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(595)
						if ((tmp4)){
							HX_STACK_LINE(595)
							tmp5 = (int)1;
						}
						else{
							HX_STACK_LINE(595)
							tmp5 = NewSeed;
						}
						HX_STACK_LINE(595)
						Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(595)
						bool tmp6 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(595)
						if ((tmp6)){
							HX_STACK_LINE(595)
							tmp3 = (int)2147483646;
						}
						else{
							HX_STACK_LINE(595)
							tmp3 = lowerBound;
						}
					}
					HX_STACK_LINE(595)
					Float tmp4 = ((Float)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(595)
					int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(595)
					int NewSeed1 = tmp5;		HX_STACK_VAR(NewSeed1,"NewSeed1");
					HX_STACK_LINE(595)
					Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(595)
					{
						HX_STACK_LINE(595)
						bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(595)
						bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(595)
						if ((tmp7)){
							HX_STACK_LINE(595)
							tmp8 = (NewSeed1 < (int)1);
						}
						else{
							HX_STACK_LINE(595)
							tmp8 = false;
						}
						HX_STACK_LINE(595)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(595)
						if ((tmp8)){
							HX_STACK_LINE(595)
							tmp9 = (int)1;
						}
						else{
							HX_STACK_LINE(595)
							tmp9 = NewSeed1;
						}
						HX_STACK_LINE(595)
						Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
						HX_STACK_LINE(595)
						bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(595)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(595)
						if ((tmp10)){
							HX_STACK_LINE(595)
							tmp11 = (lowerBound > (int)2147483646);
						}
						else{
							HX_STACK_LINE(595)
							tmp11 = false;
						}
						HX_STACK_LINE(595)
						if ((tmp11)){
							HX_STACK_LINE(595)
							tmp6 = (int)2147483646;
						}
						else{
							HX_STACK_LINE(595)
							tmp6 = lowerBound;
						}
					}
					HX_STACK_LINE(595)
					Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(595)
					int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(595)
					Float tmp9 = _this->internalSeed = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(595)
					tmp2 = ::Std_obj::_int(tmp9);
				}
				HX_STACK_LINE(595)
				_this->initialSeed = tmp2;
			}
		}
		HX_STACK_LINE(597)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		tmp->__Field(HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"), hx::paccDynamic )();
		HX_STACK_LINE(598)
		::flixel::_system::frontEnds::InputFrontEnd tmp1 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(598)
		tmp1->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )();
		HX_STACK_LINE(600)
		::flixel::_system::frontEnds::SoundFrontEnd tmp2 = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		tmp2->__Field(HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"), hx::paccDynamic )(true);
		HX_STACK_LINE(602)
		::flixel::FlxG_obj::autoPause = true;
		HX_STACK_LINE(603)
		::flixel::FlxG_obj::fixedTimestep = true;
		HX_STACK_LINE(604)
		::flixel::FlxG_obj::timeScale = ((Float)1.0);
		HX_STACK_LINE(605)
		::flixel::FlxG_obj::elapsed = (int)0;
		HX_STACK_LINE(606)
		::flixel::FlxG_obj::maxElapsed = ((Float)0.1);
		HX_STACK_LINE(607)
		{
			HX_STACK_LINE(607)
			::flixel::math::FlxRect tmp3 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(607)
			_this->x = (int)-10;
			HX_STACK_LINE(607)
			_this->y = (int)-10;
			HX_STACK_LINE(607)
			int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(607)
			int tmp5 = (tmp4 + (int)20);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(607)
			_this->width = tmp5;
			HX_STACK_LINE(607)
			int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(607)
			int tmp7 = (tmp6 + (int)20);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(607)
			_this->height = tmp7;
			HX_STACK_LINE(607)
			_this;
		}
		HX_STACK_LINE(608)
		::flixel::FlxG_obj::worldDivisions = (int)6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,reset,(void))

::flixel::_system::scaleModes::BaseScaleMode FlxG_obj::set_scaleMode( ::flixel::_system::scaleModes::BaseScaleMode ScaleMode){
	HX_STACK_FRAME("flixel.FlxG","set_scaleMode",0xb374d549,"flixel.FlxG.set_scaleMode","flixel/FlxG.hx",612,0x8e176836)
	HX_STACK_ARG(ScaleMode,"ScaleMode")
	HX_STACK_LINE(613)
	::flixel::FlxG_obj::scaleMode = ScaleMode;
	HX_STACK_LINE(614)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	tmp->onResize(null());
	HX_STACK_LINE(615)
	::flixel::_system::scaleModes::BaseScaleMode tmp1 = ScaleMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(615)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_scaleMode,return )

::flixel::input::mouse::FlxMouse FlxG_obj::set_mouse( ::flixel::input::mouse::FlxMouse NewMouse){
	HX_STACK_FRAME("flixel.FlxG","set_mouse",0x1e754261,"flixel.FlxG.set_mouse","flixel/FlxG.hx",620,0x8e176836)
	HX_STACK_ARG(NewMouse,"NewMouse")
	HX_STACK_LINE(621)
	::flixel::input::mouse::FlxMouse tmp = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	if ((tmp1)){
		HX_STACK_LINE(623)
		::flixel::_system::frontEnds::InputFrontEnd tmp2 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(623)
		::flixel::input::mouse::FlxMouse tmp3 = NewMouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(623)
		::flixel::input::mouse::FlxMouse tmp4 = tmp2->__Field(HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"), hx::paccDynamic )(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(623)
		::flixel::FlxG_obj::mouse = tmp4;
		HX_STACK_LINE(624)
		::flixel::input::mouse::FlxMouse tmp5 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		return tmp5;
	}
	HX_STACK_LINE(626)
	::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	::flixel::input::mouse::FlxMouse oldMouse = tmp2;		HX_STACK_VAR(oldMouse,"oldMouse");
	HX_STACK_LINE(627)
	::flixel::_system::frontEnds::InputFrontEnd tmp3 = ::flixel::FlxG_obj::inputs;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(627)
	::flixel::input::mouse::FlxMouse tmp4 = oldMouse;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(627)
	::flixel::input::mouse::FlxMouse tmp5 = NewMouse;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(627)
	::flixel::input::mouse::FlxMouse tmp6 = tmp3->__Field(HX_HCSTRING("replace_flixel_input_mouse_FlxMouse","\x1a","\x65","\xd5","\xe3"), hx::paccDynamic )(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(627)
	::flixel::input::mouse::FlxMouse result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(628)
	bool tmp7 = (result != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(628)
	if ((tmp7)){
		HX_STACK_LINE(630)
		::flixel::FlxG_obj::mouse = result;
		HX_STACK_LINE(631)
		oldMouse->destroy();
		HX_STACK_LINE(632)
		::flixel::input::mouse::FlxMouse tmp8 = NewMouse;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(632)
		return tmp8;
	}
	HX_STACK_LINE(634)
	::flixel::input::mouse::FlxMouse tmp8 = oldMouse;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(634)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_mouse,return )

int FlxG_obj::set_updateFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_updateFramerate",0x52770580,"flixel.FlxG.set_updateFramerate","flixel/FlxG.hx",639,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(640)
	int tmp = Framerate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	int tmp1 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(640)
	if ((tmp2)){
		HX_STACK_LINE(642)
		Dynamic();
	}
	HX_STACK_LINE(645)
	::flixel::FlxG_obj::updateFramerate = Framerate;
	HX_STACK_LINE(647)
	Float tmp3 = (Float((int)1000) / Float(Framerate));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(647)
	Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(647)
	::flixel::FlxGame tmp5 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(647)
	tmp5->_stepMS = tmp4;
	HX_STACK_LINE(648)
	::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(648)
	Float tmp7 = tmp6->_stepMS;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(648)
	Float tmp8 = (Float(tmp7) / Float((int)1000));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(648)
	::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(648)
	tmp9->_stepSeconds = tmp8;
	HX_STACK_LINE(650)
	::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(650)
	Float tmp11 = tmp10->_maxAccumulation;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(650)
	::flixel::FlxGame tmp12 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(650)
	Float tmp13 = tmp12->_stepMS;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(650)
	bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(650)
	if ((tmp14)){
		HX_STACK_LINE(652)
		::flixel::FlxGame tmp15 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(652)
		::flixel::FlxGame tmp16 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(652)
		tmp16->_maxAccumulation = tmp15->_stepMS;
	}
	HX_STACK_LINE(655)
	int tmp15 = Framerate;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(655)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_updateFramerate,return )

int FlxG_obj::set_drawFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_drawFramerate",0x3e23c125,"flixel.FlxG.set_drawFramerate","flixel/FlxG.hx",659,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(660)
	int tmp = Framerate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(660)
	int tmp1 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(660)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(660)
	if ((tmp2)){
		HX_STACK_LINE(662)
		Dynamic();
	}
	HX_STACK_LINE(665)
	int tmp3 = Framerate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(665)
	Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(665)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(665)
	::flixel::FlxG_obj::drawFramerate = tmp5;
	HX_STACK_LINE(667)
	::flixel::FlxGame tmp6 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(667)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(667)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(667)
	if ((tmp8)){
		HX_STACK_LINE(669)
		::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(669)
		::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(669)
		int tmp11 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(669)
		tmp10->set_frameRate(tmp11);
	}
	HX_STACK_LINE(672)
	int tmp9 = ::flixel::FlxG_obj::drawFramerate;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(672)
	Float tmp10 = (Float((int)2000) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(672)
	Float tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(672)
	::flixel::FlxGame tmp12 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(672)
	tmp12->_maxAccumulation = tmp11;
	HX_STACK_LINE(674)
	::flixel::FlxGame tmp13 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(674)
	Float tmp14 = tmp13->_maxAccumulation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(674)
	::flixel::FlxGame tmp15 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(674)
	Float tmp16 = tmp15->_stepMS;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(674)
	bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(674)
	if ((tmp17)){
		HX_STACK_LINE(676)
		::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(676)
		::flixel::FlxGame tmp19 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(676)
		tmp19->_maxAccumulation = tmp18->_stepMS;
	}
	HX_STACK_LINE(679)
	int tmp18 = Framerate;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(679)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_drawFramerate,return )

bool FlxG_obj::get_fullscreen( ){
	HX_STACK_FRAME("flixel.FlxG","get_fullscreen",0xfece4c0b,"flixel.FlxG.get_fullscreen","flixel/FlxG.hx",683,0x8e176836)
	HX_STACK_LINE(684)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(684)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(684)
	::openfl::_legacy::display::StageDisplayState tmp2 = tmp1->get_displayState();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(684)
	bool tmp3 = (tmp2 == ::openfl::_legacy::display::StageDisplayState_obj::FULL_SCREEN);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(684)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(684)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(684)
	if ((tmp4)){
		HX_STACK_LINE(685)
		::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(685)
		::openfl::_legacy::display::MovieClip tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(685)
		::openfl::_legacy::display::Stage tmp8 = tmp7->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(685)
		::openfl::_legacy::display::Stage tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(685)
		::openfl::_legacy::display::StageDisplayState tmp10 = tmp9->get_displayState();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(685)
		::openfl::_legacy::display::StageDisplayState tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(685)
		tmp5 = (tmp11 == ::openfl::_legacy::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
	}
	else{
		HX_STACK_LINE(684)
		tmp5 = true;
	}
	HX_STACK_LINE(684)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_fullscreen,return )

bool FlxG_obj::set_fullscreen( bool Value){
	HX_STACK_FRAME("flixel.FlxG","set_fullscreen",0x1eee347f,"flixel.FlxG.set_fullscreen","flixel/FlxG.hx",689,0x8e176836)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(690)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(690)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(690)
	bool tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(690)
	::openfl::_legacy::display::StageDisplayState tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(690)
	if ((tmp2)){
		HX_STACK_LINE(690)
		tmp3 = ::openfl::_legacy::display::StageDisplayState_obj::FULL_SCREEN;
	}
	else{
		HX_STACK_LINE(690)
		tmp3 = ::openfl::_legacy::display::StageDisplayState_obj::NORMAL;
	}
	HX_STACK_LINE(690)
	tmp1->set_displayState(tmp3);
	HX_STACK_LINE(691)
	bool tmp4 = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(691)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_fullscreen,return )

::openfl::_legacy::display::Stage FlxG_obj::get_stage( ){
	HX_STACK_FRAME("flixel.FlxG","get_stage",0xb2caaaee,"flixel.FlxG.get_stage","flixel/FlxG.hx",695,0x8e176836)
	HX_STACK_LINE(696)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(696)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_stage,return )

::flixel::FlxState FlxG_obj::get_state( ){
	HX_STACK_FRAME("flixel.FlxG","get_state",0xb2cab641,"flixel.FlxG.get_state","flixel/FlxG.hx",700,0x8e176836)
	HX_STACK_LINE(701)
	::flixel::FlxGame tmp = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(701)
	::flixel::FlxState tmp1 = tmp->_state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(701)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_state,return )


FlxG_obj::FlxG_obj()
{
}

bool FlxG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log; return true;  }
		if (HX_FIELD_EQ(inName,"vcr") ) { outValue = vcr; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { outValue = game; return true;  }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save; return true;  }
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = keys; return true;  }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { if (inCallProp == hx::paccAlways) { outValue = get_stage(); return true; } }
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) { outValue = get_state(); return true; } }
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width; return true;  }
		if (HX_FIELD_EQ(inName,"mouse") ) { outValue = mouse; return true;  }
		if (HX_FIELD_EQ(inName,"watch") ) { outValue = watch; return true;  }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound; return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { outValue = camera; return true;  }
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height; return true;  }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random; return true;  }
		if (HX_FIELD_EQ(inName,"swipes") ) { outValue = swipes; return true;  }
		if (HX_FIELD_EQ(inName,"inputs") ) { outValue = inputs; return true;  }
		if (HX_FIELD_EQ(inName,"bitmap") ) { outValue = bitmap; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { outValue = VERSION; return true;  }
		if (HX_FIELD_EQ(inName,"elapsed") ) { outValue = elapsed; return true;  }
		if (HX_FIELD_EQ(inName,"console") ) { outValue = console; return true;  }
		if (HX_FIELD_EQ(inName,"cameras") ) { outValue = cameras; return true;  }
		if (HX_FIELD_EQ(inName,"plugins") ) { outValue = plugins; return true;  }
		if (HX_FIELD_EQ(inName,"signals") ) { outValue = signals; return true;  }
		if (HX_FIELD_EQ(inName,"overlap") ) { outValue = overlap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"collide") ) { outValue = collide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { outValue = gamepads; return true;  }
		if (HX_FIELD_EQ(inName,"debugger") ) { outValue = debugger; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { outValue = autoPause; return true;  }
		if (HX_FIELD_EQ(inName,"timeScale") ) { outValue = timeScale; return true;  }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { outValue = scaleMode; return true;  }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { outValue = bitmapLog; return true;  }
		if (HX_FIELD_EQ(inName,"resetGame") ) { outValue = resetGame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { outValue = set_mouse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_stage") ) { outValue = get_stage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_state") ) { outValue = get_state_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderBlit") ) { outValue = renderBlit; return true;  }
		if (HX_FIELD_EQ(inName,"renderTile") ) { outValue = renderTile; return true;  }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { outValue = maxElapsed; return true;  }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) { outValue = get_fullscreen(); return true; } }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { outValue = resizeGame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { outValue = worldBounds; return true;  }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { outValue = initialZoom; return true;  }
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderMethod") ) { outValue = renderMethod; return true;  }
		if (HX_FIELD_EQ(inName,"initialWidth") ) { outValue = initialWidth; return true;  }
		if (HX_FIELD_EQ(inName,"resizeWindow") ) { outValue = resizeWindow_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { outValue = fixedTimestep; return true;  }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { outValue = drawFramerate; return true;  }
		if (HX_FIELD_EQ(inName,"initialHeight") ) { outValue = initialHeight; return true;  }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { outValue = set_scaleMode_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { outValue = worldDivisions; return true;  }
		if (HX_FIELD_EQ(inName,"addPostProcess") ) { outValue = addPostProcess_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { outValue = get_fullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { outValue = set_fullscreen_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { outValue = updateFramerate; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initRenderMethod") ) { outValue = initRenderMethod_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removePostProcess") ) { outValue = removePostProcess_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_drawFramerate") ) { outValue = set_drawFramerate_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"chainPostProcesses") ) { outValue = chainPostProcesses_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pixelPerfectOverlap") ) { outValue = pixelPerfectOverlap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_updateFramerate") ) { outValue = set_updateFramerate_dyn(); return true;  }
	}
	return false;
}

bool FlxG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=ioValue.Cast< ::flixel::_system::frontEnds::LogFrontEnd >(); return true; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=ioValue.Cast< ::flixel::_system::frontEnds::VCRFrontEnd >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=ioValue.Cast< ::flixel::FlxGame >(); return true; }
		if (HX_FIELD_EQ(inName,"save") ) { save=ioValue.Cast< ::flixel::util::FlxSave >(); return true; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=ioValue.Cast< ::flixel::input::keyboard::FlxKeyboard >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"mouse") ) { if (inCallProp == hx::paccAlways)  ioValue = set_mouse(ioValue); else mouse=ioValue.Cast< ::flixel::input::mouse::FlxMouse >(); return true; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=ioValue.Cast< ::flixel::_system::frontEnds::WatchFrontEnd >(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=ioValue.Cast< ::flixel::_system::frontEnds::SoundFrontEnd >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=ioValue.Cast< ::flixel::FlxCamera >(); return true; }
		if (HX_FIELD_EQ(inName,"height") ) { height=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"random") ) { random=ioValue.Cast< ::flixel::math::FlxRandom >(); return true; }
		if (HX_FIELD_EQ(inName,"swipes") ) { swipes=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=ioValue.Cast< ::flixel::_system::frontEnds::InputFrontEnd >(); return true; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=ioValue.Cast< ::flixel::_system::frontEnds::BitmapFrontEnd >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=ioValue.Cast< ::flixel::_system::FlxVersion >(); return true; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"console") ) { console=ioValue.Cast< ::flixel::_system::frontEnds::ConsoleFrontEnd >(); return true; }
		if (HX_FIELD_EQ(inName,"cameras") ) { cameras=ioValue.Cast< ::flixel::_system::frontEnds::CameraFrontEnd >(); return true; }
		if (HX_FIELD_EQ(inName,"plugins") ) { plugins=ioValue.Cast< ::flixel::_system::frontEnds::PluginFrontEnd >(); return true; }
		if (HX_FIELD_EQ(inName,"signals") ) { signals=ioValue.Cast< ::flixel::_system::frontEnds::SignalFrontEnd >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { gamepads=ioValue.Cast< ::flixel::input::gamepad::FlxGamepadManager >(); return true; }
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=ioValue.Cast< ::flixel::_system::frontEnds::DebuggerFrontEnd >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp == hx::paccAlways)  ioValue = set_scaleMode(ioValue); else scaleMode=ioValue.Cast< ::flixel::_system::scaleModes::BaseScaleMode >(); return true; }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=ioValue.Cast< ::flixel::_system::frontEnds::BitmapLogFrontEnd >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderBlit") ) { renderBlit=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"renderTile") ) { renderTile=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways)  ioValue = set_fullscreen(ioValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { worldBounds=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderMethod") ) { renderMethod=ioValue.Cast< ::flixel::FlxRenderMethod >(); return true; }
		if (HX_FIELD_EQ(inName,"initialWidth") ) { initialWidth=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { fixedTimestep=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { if (inCallProp == hx::paccAlways)  ioValue = set_drawFramerate(ioValue); else drawFramerate=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"initialHeight") ) { initialHeight=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { worldDivisions=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { if (inCallProp == hx::paccAlways)  ioValue = set_updateFramerate(ioValue); else updateFramerate=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &FlxG_obj::autoPause,HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b")},
	{hx::fsBool,(void *) &FlxG_obj::fixedTimestep,HX_HCSTRING("fixedTimestep","\x6d","\x87","\xbc","\x49")},
	{hx::fsFloat,(void *) &FlxG_obj::timeScale,HX_HCSTRING("timeScale","\x3d","\xa3","\xbf","\x2d")},
	{hx::fsInt,(void *) &FlxG_obj::worldDivisions,HX_HCSTRING("worldDivisions","\xf4","\x19","\x32","\xa0")},
	{hx::fsObject /*::flixel::FlxCamera*/ ,(void *) &FlxG_obj::camera,HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::flixel::_system::FlxVersion*/ ,(void *) &FlxG_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsObject /*::flixel::FlxGame*/ ,(void *) &FlxG_obj::game,HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsInt,(void *) &FlxG_obj::updateFramerate,HX_HCSTRING("updateFramerate","\x44","\xb6","\xd6","\x9d")},
	{hx::fsInt,(void *) &FlxG_obj::drawFramerate,HX_HCSTRING("drawFramerate","\xe9","\xf8","\x72","\xad")},
	{hx::fsObject /*::flixel::FlxRenderMethod*/ ,(void *) &FlxG_obj::renderMethod,HX_HCSTRING("renderMethod","\xd7","\xfa","\xb0","\x78")},
	{hx::fsBool,(void *) &FlxG_obj::renderBlit,HX_HCSTRING("renderBlit","\xab","\x32","\x23","\xde")},
	{hx::fsBool,(void *) &FlxG_obj::renderTile,HX_HCSTRING("renderTile","\xa4","\xc5","\x06","\xea")},
	{hx::fsFloat,(void *) &FlxG_obj::elapsed,HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")},
	{hx::fsFloat,(void *) &FlxG_obj::maxElapsed,HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24")},
	{hx::fsInt,(void *) &FlxG_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &FlxG_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::flixel::_system::scaleModes::BaseScaleMode*/ ,(void *) &FlxG_obj::scaleMode,HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxG_obj::worldBounds,HX_HCSTRING("worldBounds","\x67","\x1a","\x8b","\x31")},
	{hx::fsObject /*::flixel::util::FlxSave*/ ,(void *) &FlxG_obj::save,HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c")},
	{hx::fsObject /*::flixel::math::FlxRandom*/ ,(void *) &FlxG_obj::random,HX_HCSTRING("random","\x03","\x22","\x8f","\xb7")},
	{hx::fsObject /*::flixel::input::mouse::FlxMouse*/ ,(void *) &FlxG_obj::mouse,HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxG_obj::swipes,HX_HCSTRING("swipes","\xb9","\x42","\x76","\xc5")},
	{hx::fsObject /*::flixel::input::keyboard::FlxKeyboard*/ ,(void *) &FlxG_obj::keys,HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadManager*/ ,(void *) &FlxG_obj::gamepads,HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb")},
	{hx::fsObject /*::flixel::_system::frontEnds::InputFrontEnd*/ ,(void *) &FlxG_obj::inputs,HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b")},
	{hx::fsObject /*::flixel::_system::frontEnds::ConsoleFrontEnd*/ ,(void *) &FlxG_obj::console,HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{hx::fsObject /*::flixel::_system::frontEnds::LogFrontEnd*/ ,(void *) &FlxG_obj::log,HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsObject /*::flixel::_system::frontEnds::BitmapLogFrontEnd*/ ,(void *) &FlxG_obj::bitmapLog,HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6")},
	{hx::fsObject /*::flixel::_system::frontEnds::WatchFrontEnd*/ ,(void *) &FlxG_obj::watch,HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5")},
	{hx::fsObject /*::flixel::_system::frontEnds::DebuggerFrontEnd*/ ,(void *) &FlxG_obj::debugger,HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90")},
	{hx::fsObject /*::flixel::_system::frontEnds::VCRFrontEnd*/ ,(void *) &FlxG_obj::vcr,HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00")},
	{hx::fsObject /*::flixel::_system::frontEnds::BitmapFrontEnd*/ ,(void *) &FlxG_obj::bitmap,HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::flixel::_system::frontEnds::CameraFrontEnd*/ ,(void *) &FlxG_obj::cameras,HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3")},
	{hx::fsObject /*::flixel::_system::frontEnds::PluginFrontEnd*/ ,(void *) &FlxG_obj::plugins,HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02")},
	{hx::fsInt,(void *) &FlxG_obj::initialWidth,HX_HCSTRING("initialWidth","\xe2","\xb6","\x72","\x8e")},
	{hx::fsInt,(void *) &FlxG_obj::initialHeight,HX_HCSTRING("initialHeight","\x8b","\xc7","\x3c","\xcc")},
	{hx::fsFloat,(void *) &FlxG_obj::initialZoom,HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d")},
	{hx::fsObject /*::flixel::_system::frontEnds::SoundFrontEnd*/ ,(void *) &FlxG_obj::sound,HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsObject /*::flixel::_system::frontEnds::SignalFrontEnd*/ ,(void *) &FlxG_obj::signals,HX_HCSTRING("signals","\x0b","\x6d","\xe2","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_MARK_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_MARK_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(FlxG_obj::game,"game");
	HX_MARK_MEMBER_NAME(FlxG_obj::updateFramerate,"updateFramerate");
	HX_MARK_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_MARK_MEMBER_NAME(FlxG_obj::renderMethod,"renderMethod");
	HX_MARK_MEMBER_NAME(FlxG_obj::renderBlit,"renderBlit");
	HX_MARK_MEMBER_NAME(FlxG_obj::renderTile,"renderTile");
	HX_MARK_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::width,"width");
	HX_MARK_MEMBER_NAME(FlxG_obj::height,"height");
	HX_MARK_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::save,"save");
	HX_MARK_MEMBER_NAME(FlxG_obj::random,"random");
	HX_MARK_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_MARK_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_MARK_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_MARK_MEMBER_NAME(FlxG_obj::console,"console");
	HX_MARK_MEMBER_NAME(FlxG_obj::log,"log");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_MARK_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_MARK_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_MARK_MEMBER_NAME(FlxG_obj::initialWidth,"initialWidth");
	HX_MARK_MEMBER_NAME(FlxG_obj::initialHeight,"initialHeight");
	HX_MARK_MEMBER_NAME(FlxG_obj::initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(FlxG_obj::signals,"signals");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_VISIT_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_VISIT_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(FlxG_obj::game,"game");
	HX_VISIT_MEMBER_NAME(FlxG_obj::updateFramerate,"updateFramerate");
	HX_VISIT_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_VISIT_MEMBER_NAME(FlxG_obj::renderMethod,"renderMethod");
	HX_VISIT_MEMBER_NAME(FlxG_obj::renderBlit,"renderBlit");
	HX_VISIT_MEMBER_NAME(FlxG_obj::renderTile,"renderTile");
	HX_VISIT_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FlxG_obj::height,"height");
	HX_VISIT_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::save,"save");
	HX_VISIT_MEMBER_NAME(FlxG_obj::random,"random");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_VISIT_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_VISIT_MEMBER_NAME(FlxG_obj::console,"console");
	HX_VISIT_MEMBER_NAME(FlxG_obj::log,"log");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_VISIT_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_VISIT_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_VISIT_MEMBER_NAME(FlxG_obj::initialWidth,"initialWidth");
	HX_VISIT_MEMBER_NAME(FlxG_obj::initialHeight,"initialHeight");
	HX_VISIT_MEMBER_NAME(FlxG_obj::initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(FlxG_obj::signals,"signals");
};

#endif

hx::Class FlxG_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("autoPause","\x07","\x15","\x63","\x9b"),
	HX_HCSTRING("fixedTimestep","\x6d","\x87","\xbc","\x49"),
	HX_HCSTRING("timeScale","\x3d","\xa3","\xbf","\x2d"),
	HX_HCSTRING("worldDivisions","\xf4","\x19","\x32","\xa0"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("updateFramerate","\x44","\xb6","\xd6","\x9d"),
	HX_HCSTRING("drawFramerate","\xe9","\xf8","\x72","\xad"),
	HX_HCSTRING("renderMethod","\xd7","\xfa","\xb0","\x78"),
	HX_HCSTRING("renderBlit","\xab","\x32","\x23","\xde"),
	HX_HCSTRING("renderTile","\xa4","\xc5","\x06","\xea"),
	HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"),
	HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("worldBounds","\x67","\x1a","\x8b","\x31"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("swipes","\xb9","\x42","\x76","\xc5"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("gamepads","\xb2","\xac","\x9e","\xcb"),
	HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"),
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("bitmapLog","\xd5","\x5b","\xdb","\xc6"),
	HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),
	HX_HCSTRING("debugger","\x21","\x24","\xeb","\x90"),
	HX_HCSTRING("vcr","\xa5","\xe0","\x59","\x00"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("cameras","\x2e","\x8a","\x31","\xe3"),
	HX_HCSTRING("plugins","\x60","\xd2","\x35","\x02"),
	HX_HCSTRING("initialWidth","\xe2","\xb6","\x72","\x8e"),
	HX_HCSTRING("initialHeight","\x8b","\xc7","\x3c","\xcc"),
	HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("signals","\x0b","\x6d","\xe2","\x40"),
	HX_HCSTRING("resizeGame","\x06","\x84","\x99","\xb8"),
	HX_HCSTRING("resizeWindow","\x04","\x51","\x9a","\x36"),
	HX_HCSTRING("resetGame","\x61","\xfd","\x4a","\x8a"),
	HX_HCSTRING("switchState","\x7d","\x07","\x8b","\x77"),
	HX_HCSTRING("resetState","\xc2","\xad","\xa7","\x6c"),
	HX_HCSTRING("overlap","\x87","\x43","\x10","\xa9"),
	HX_HCSTRING("pixelPerfectOverlap","\x20","\x0b","\x1b","\x60"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("addPostProcess","\x4e","\x99","\x59","\xc3"),
	HX_HCSTRING("removePostProcess","\x0b","\x2c","\xd3","\xe7"),
	HX_HCSTRING("chainPostProcesses","\x5c","\x72","\x4f","\x53"),
	HX_HCSTRING("openURL","\xc5","\xbd","\x35","\x40"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initRenderMethod","\x07","\xda","\xf2","\x6b"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("set_scaleMode","\xf0","\x90","\x3d","\x32"),
	HX_HCSTRING("set_mouse","\x88","\x5e","\x5f","\x33"),
	HX_HCSTRING("set_updateFramerate","\x67","\x78","\x7e","\x65"),
	HX_HCSTRING("set_drawFramerate","\x4c","\xdc","\x50","\xd7"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("get_state","\x68","\xd2","\xb4","\xc7"),
	::String(null()) };

void FlxG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxG","\x07","\xab","\x3b","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxG_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxG_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxG_obj >;
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

void FlxG_obj::__boot()
{
	autoPause= true;
	fixedTimestep= true;
	timeScale= ((Float)1);
	worldDivisions= (int)6;
	VERSION= ::flixel::_system::FlxVersion_obj::__new((int)4,(int)0,(int)1);
	elapsed= ((Float)0);
	maxElapsed= ((Float)0.1);
struct _Function_0_1{
	inline static ::flixel::_system::scaleModes::BaseScaleMode Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",144,0x8e176836)
		{
			HX_STACK_LINE(144)
			::flixel::_system::scaleModes::RatioScaleMode tmp = ::flixel::_system::scaleModes::RatioScaleMode_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(144)
			return ((::flixel::_system::scaleModes::BaseScaleMode)(tmp));
		}
		return null();
	}
};
	scaleMode= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",154,0x8e176836)
		{
			HX_STACK_LINE(154)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(154)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(154)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(154)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(154)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(154)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(154)
				_this->x = X;
				HX_STACK_LINE(154)
				_this->y = Y;
				HX_STACK_LINE(154)
				_this->width = Width;
				HX_STACK_LINE(154)
				_this->height = Height;
				HX_STACK_LINE(154)
				tmp = _this;
			}
			HX_STACK_LINE(154)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(154)
			rect->_inPool = false;
			HX_STACK_LINE(154)
			return rect;
		}
		return null();
	}
};
	worldBounds= _Function_0_2::Block();
	save= ::flixel::util::FlxSave_obj::__new();
	random= ::flixel::math::FlxRandom_obj::__new(null());
	swipes= Array_obj< ::Dynamic >::__new();
	inputs= ::flixel::_system::frontEnds::InputFrontEnd_obj::__new();
	console= ::flixel::_system::frontEnds::ConsoleFrontEnd_obj::__new();
	log= ::flixel::_system::frontEnds::LogFrontEnd_obj::__new();
	bitmapLog= ::flixel::_system::frontEnds::BitmapLogFrontEnd_obj::__new();
	watch= ::flixel::_system::frontEnds::WatchFrontEnd_obj::__new();
	debugger= ::flixel::_system::frontEnds::DebuggerFrontEnd_obj::__new();
	bitmap= ::flixel::_system::frontEnds::BitmapFrontEnd_obj::__new();
	cameras= ::flixel::_system::frontEnds::CameraFrontEnd_obj::__new();
	initialWidth= (int)0;
	initialHeight= (int)0;
	initialZoom= ((Float)0);
	signals= ::flixel::_system::frontEnds::SignalFrontEnd_obj::__new();
}

} // end namespace flixel
