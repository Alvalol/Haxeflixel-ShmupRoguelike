#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
namespace flixel{
namespace ui{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.ui.FlxTypedButton","new",0xc7e33f04,"flixel.ui.FlxTypedButton.new","flixel/ui/FlxButton.hx",116,0xc64cf442)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(195)
	this->lastStatus = (int)-1;
	HX_STACK_LINE(152)
	this->maxInputMovement = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(145)
	this->mouseButtons = Array_obj< int >::__new().Add((int)-1);
	HX_STACK_LINE(140)
	this->allowSwiping = true;
	HX_STACK_LINE(135)
	this->statusAnimations = Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("highlight","\x34","\x56","\x00","\xed")).Add(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	HX_STACK_LINE(130)
	this->labelAlphas = Array_obj< Float >::__new().Add(((Float)0.8)).Add(((Float)1.0)).Add(((Float)0.5));
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/ui/FlxButton.hx",125,0xc64cf442)
			{
				HX_STACK_LINE(125)
				::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(125)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(125)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(125)
					Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(125)
					Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(125)
					point->_inPool = false;
					HX_STACK_LINE(125)
					tmp = point;
				}
				HX_STACK_LINE(125)
				::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(125)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(125)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(125)
					Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(125)
					Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(125)
					point->_inPool = false;
					HX_STACK_LINE(125)
					tmp1 = point;
				}
				HX_STACK_LINE(125)
				::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint tmp5 = tmp4->set((int)0,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(125)
					::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(125)
					point->_inPool = false;
					HX_STACK_LINE(125)
					tmp2 = point;
				}
				HX_STACK_LINE(125)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2);
			}
			return null();
		}
	};
	HX_STACK_LINE(125)
	this->labelOffsets = _Function_1_1::Block();
	HX_STACK_LINE(206)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(208)
	this->loadDefaultGraphic();
	HX_STACK_LINE(210)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp2 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(OnClick,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	this->onUp = tmp2;
	HX_STACK_LINE(211)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp3 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	this->onDown = tmp3;
	HX_STACK_LINE(212)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp4 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(212)
	this->onOver = tmp4;
	HX_STACK_LINE(213)
	::flixel::ui::_FlxButton::FlxButtonEvent tmp5 = ::flixel::ui::_FlxButton::FlxButtonEvent_obj::__new(null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(213)
	this->onOut = tmp5;
	HX_STACK_LINE(215)
	this->set_status((int)0);
	HX_STACK_LINE(218)
	::flixel::math::FlxPoint tmp6 = this->scrollFactor;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	tmp6->set(null(),null());
	HX_STACK_LINE(221)
	::openfl::_legacy::display::MovieClip tmp7 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(221)
	::openfl::_legacy::display::Stage tmp8 = tmp7->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(221)
	::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(221)
	Dynamic tmp10 = this->onUpEventListener_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(221)
	tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
	HX_STACK_LINE(229)
	::flixel::input::FlxInput tmp11 = ::flixel::input::FlxInput_obj::__new((int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(229)
	this->input = tmp11;
}
;
	return null();
}

//FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > _result_ = new FlxTypedButton_obj();
	_result_->__construct(__o_X,__o_Y,OnClick);
	return _result_;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > _result_ = new FlxTypedButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxTypedButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::input::IFlxInput_obj)) return operator ::flixel::input::IFlxInput_obj *();
	return super::__ToInterface(inType);
}

FlxTypedButton_obj::operator ::flixel::input::IFlxInput_obj *()
	{ return new ::flixel::input::IFlxInput_delegate_< FlxTypedButton_obj >(this); }
Void FlxTypedButton_obj::graphicLoaded( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","graphicLoaded",0xa7022871,"flixel.ui.FlxTypedButton.graphicLoaded","flixel/ui/FlxButton.hx",233,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		this->super::graphicLoaded();
		HX_STACK_LINE(236)
		this->setupAnimation(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),(int)0);
		HX_STACK_LINE(237)
		this->setupAnimation(HX_HCSTRING("highlight","\x34","\x56","\x00","\xed"),(int)1);
		HX_STACK_LINE(238)
		this->setupAnimation(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),(int)2);
	}
return null();
}


Void FlxTypedButton_obj::loadDefaultGraphic( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","loadDefaultGraphic",0xe0dec289,"flixel.ui.FlxTypedButton.loadDefaultGraphic","flixel/ui/FlxButton.hx",243,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		this->loadGraphic(HX_HCSTRING("flixel/images/ui/button.png","\x44","\xee","\x2f","\x34"),true,(int)80,(int)20,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,loadDefaultGraphic,(void))

Void FlxTypedButton_obj::setupAnimation( ::String animationName,int frameIndex){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","setupAnimation",0xeb5c74a3,"flixel.ui.FlxTypedButton.setupAnimation","flixel/ui/FlxButton.hx",247,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(animationName,"animationName")
		HX_STACK_ARG(frameIndex,"frameIndex")
		HX_STACK_LINE(249)
		int tmp = frameIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		int tmp2 = tmp1->_sprite->numFrames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		Float tmp4 = ::Math_obj::min(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		frameIndex = tmp5;
		HX_STACK_LINE(250)
		::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		::String tmp7 = animationName;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(250)
		tmp6->add(tmp7,Array_obj< int >::__new().Add(frameIndex),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedButton_obj,setupAnimation,(void))

Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","destroy",0xe11bbd9e,"flixel.ui.FlxTypedButton.destroy","flixel/ui/FlxButton.hx",257,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(258)
		Dynamic tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		Dynamic tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		this->set_label(tmp1);
		HX_STACK_LINE(259)
		this->_spriteLabel = null();
		HX_STACK_LINE(261)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp2 = this->onUp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(261)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp3 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(261)
		this->onUp = tmp3;
		HX_STACK_LINE(262)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp4 = this->onDown;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(262)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp5 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(262)
		this->onDown = tmp5;
		HX_STACK_LINE(263)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp6 = this->onOver;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(263)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp7 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(263)
		this->onOver = tmp7;
		HX_STACK_LINE(264)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp8 = this->onOut;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(264)
		::flixel::ui::_FlxButton::FlxButtonEvent tmp9 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(264)
		this->onOut = tmp9;
		HX_STACK_LINE(266)
		this->labelOffsets = ::flixel::util::FlxDestroyUtil_obj::putArray(this->labelOffsets);
		HX_STACK_LINE(268)
		this->labelAlphas = null();
		HX_STACK_LINE(269)
		this->currentInput = null();
		HX_STACK_LINE(270)
		this->input = null();
		HX_STACK_LINE(273)
		::openfl::_legacy::display::MovieClip tmp10 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(273)
		::openfl::_legacy::display::Stage tmp11 = tmp10->get_stage();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(273)
		::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(273)
		Dynamic tmp13 = this->onUpEventListener_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(273)
		tmp11->removeEventListener(tmp12,tmp13,null());
		HX_STACK_LINE(276)
		this->super::destroy();
	}
return null();
}


Void FlxTypedButton_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","update",0xc4b5d5e5,"flixel.ui.FlxTypedButton.update","flixel/ui/FlxButton.hx",283,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(284)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		this->super::update(tmp);
		HX_STACK_LINE(286)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(286)
		tmp1->update();
		HX_STACK_LINE(288)
		bool tmp2 = this->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		if ((tmp2)){
			HX_STACK_LINE(292)
			this->updateButton();
			HX_STACK_LINE(296)
			int tmp3 = this->lastStatus;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(296)
			int tmp4 = this->status;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(296)
			if ((tmp5)){
				HX_STACK_LINE(298)
				this->updateStatusAnimation();
				HX_STACK_LINE(299)
				int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(299)
				this->lastStatus = tmp6;
			}
		}
	}
return null();
}


Void FlxTypedButton_obj::updateStatusAnimation( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateStatusAnimation",0x00250d0d,"flixel.ui.FlxTypedButton.updateStatusAnimation","flixel/ui/FlxButton.hx",305,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		::String tmp2 = this->statusAnimations->__get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		tmp->play(tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateStatusAnimation,(void))

Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","draw",0x18618ce0,"flixel.ui.FlxTypedButton.draw","flixel/ui/FlxButton.hx",313,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(314)
		this->super::draw();
		HX_STACK_LINE(316)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		if ((tmp1)){
			HX_STACK_LINE(316)
			::flixel::FlxSprite tmp3 = this->_spriteLabel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(316)
			::flixel::FlxSprite tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			tmp2 = tmp4->visible;
		}
		else{
			HX_STACK_LINE(316)
			tmp2 = false;
		}
		HX_STACK_LINE(316)
		if ((tmp2)){
			HX_STACK_LINE(318)
			::flixel::FlxSprite tmp3 = this->_spriteLabel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(318)
			tmp3->set_cameras(this->get_cameras());
			HX_STACK_LINE(319)
			::flixel::FlxSprite tmp4 = this->_spriteLabel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			tmp4->draw();
		}
	}
return null();
}


bool FlxTypedButton_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","stampOnAtlas",0xa90d96c5,"flixel.ui.FlxTypedButton.stampOnAtlas","flixel/ui/FlxButton.hx",347,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(348)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(348)
	::String tmp3 = tmp2->key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(348)
	::flixel::graphics::atlas::FlxNode tmp4 = atlas->addNode(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(348)
	::flixel::graphics::atlas::FlxNode buttonNode = tmp4;		HX_STACK_VAR(buttonNode,"buttonNode");
	HX_STACK_LINE(349)
	bool tmp5 = (buttonNode != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(349)
	bool result = tmp5;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(351)
	bool tmp6 = (buttonNode != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(351)
	if ((tmp6)){
		HX_STACK_LINE(353)
		::flixel::graphics::frames::FlxFramesCollection tmp7 = this->frames;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(353)
		::flixel::graphics::frames::FlxTileFrames buttonFrames = ((::flixel::graphics::frames::FlxTileFrames)(tmp7));		HX_STACK_VAR(buttonFrames,"buttonFrames");
		HX_STACK_LINE(354)
		::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(354)
		{
			HX_STACK_LINE(354)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(354)
			::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(354)
			Float tmp11 = buttonFrames->tileSize->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(354)
			Float tmp12 = buttonFrames->tileSize->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(354)
			::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(354)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(354)
			point->_inPool = false;
			HX_STACK_LINE(354)
			tmp8 = point;
		}
		HX_STACK_LINE(354)
		::flixel::math::FlxPoint tileSize = tmp8;		HX_STACK_VAR(tileSize,"tileSize");
		HX_STACK_LINE(355)
		::flixel::math::FlxPoint tmp9 = tileSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(355)
		::flixel::graphics::frames::FlxTileFrames tmp10 = buttonNode->getTileFrames(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(355)
		::flixel::graphics::frames::FlxTileFrames tileFrames = tmp10;		HX_STACK_VAR(tileFrames,"tileFrames");
		HX_STACK_LINE(356)
		::flixel::graphics::frames::FlxTileFrames tmp11 = tileFrames;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(356)
		this->set_frames(tmp11);
	}
	HX_STACK_LINE(359)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(359)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(359)
	if ((tmp7)){
		HX_STACK_LINE(359)
		Dynamic tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(359)
		Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(359)
		tmp8 = (tmp10 != null());
	}
	else{
		HX_STACK_LINE(359)
		tmp8 = false;
	}
	HX_STACK_LINE(359)
	if ((tmp8)){
		HX_STACK_LINE(361)
		Dynamic tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(361)
		::openfl::_legacy::display::BitmapData tmp10 = tmp9->__Field(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(361)
		Dynamic tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(361)
		::String tmp12 = tmp11->__Field(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"), hx::paccDynamic )->__Field(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(361)
		::flixel::graphics::atlas::FlxNode tmp13 = atlas->addNode(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(361)
		::flixel::graphics::atlas::FlxNode labelNode = tmp13;		HX_STACK_VAR(labelNode,"labelNode");
		HX_STACK_LINE(362)
		bool tmp14 = result;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(362)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(362)
		if ((tmp14)){
			HX_STACK_LINE(362)
			tmp15 = (labelNode != null());
		}
		else{
			HX_STACK_LINE(362)
			tmp15 = false;
		}
		HX_STACK_LINE(362)
		result = tmp15;
		HX_STACK_LINE(364)
		bool tmp16 = (labelNode != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(364)
		if ((tmp16)){
			HX_STACK_LINE(366)
			Dynamic tmp17 = this->label;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(366)
			::flixel::graphics::frames::FlxImageFrame tmp18 = labelNode->getImageFrame();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(366)
			tmp17->__Field(HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"), hx::paccDynamic )(tmp18);
		}
	}
	HX_STACK_LINE(370)
	bool tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(370)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,stampOnAtlas,return )

Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateButton",0x576ba5b7,"flixel.ui.FlxTypedButton.updateButton","flixel/ui/FlxButton.hx",378,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(380)
		bool tmp = this->checkMouseOverlap();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		bool overlapFound = tmp;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(381)
		bool tmp1 = overlapFound;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		if ((tmp2)){
			HX_STACK_LINE(382)
			bool tmp3 = this->checkTouchOverlap();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			overlapFound = tmp3;
		}
		HX_STACK_LINE(391)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(391)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(391)
		if ((tmp4)){
			HX_STACK_LINE(392)
			bool tmp6 = overlapFound;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(392)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(392)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(392)
			if ((tmp14)){
				HX_STACK_LINE(392)
				::flixel::input::IFlxInput tmp15 = this->currentInput;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(392)
				::flixel::input::IFlxInput tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(392)
				::flixel::input::IFlxInput tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(392)
				bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(392)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(392)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(392)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(392)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(392)
				if ((tmp22)){
					HX_STACK_LINE(392)
					::flixel::input::IFlxInput tmp23 = this->currentInput;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(392)
					::flixel::input::IFlxInput tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(392)
					::flixel::input::IFlxInput tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(392)
					::flixel::input::IFlxInput tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(392)
					tmp5 = tmp26->get_justReleased();
				}
				else{
					HX_STACK_LINE(392)
					tmp5 = false;
				}
			}
			else{
				HX_STACK_LINE(392)
				tmp5 = true;
			}
		}
		else{
			HX_STACK_LINE(391)
			tmp5 = false;
		}
		HX_STACK_LINE(391)
		if ((tmp5)){
			HX_STACK_LINE(394)
			this->onOutHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

bool FlxTypedButton_obj::checkMouseOverlap( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","checkMouseOverlap",0xee0aca6e,"flixel.ui.FlxTypedButton.checkMouseOverlap","flixel/ui/FlxButton.hx",399,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(401)
		Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(401)
		while((true)){
			HX_STACK_LINE(401)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(401)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(401)
			if ((tmp1)){
				HX_STACK_LINE(401)
				break;
			}
			HX_STACK_LINE(401)
			::flixel::FlxCamera tmp2 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(401)
			::flixel::FlxCamera camera = tmp2;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(401)
			++(_g);
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(403)
				Array< int > _g3 = this->mouseButtons;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(403)
				while((true)){
					HX_STACK_LINE(403)
					bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(403)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(403)
					if ((tmp4)){
						HX_STACK_LINE(403)
						break;
					}
					HX_STACK_LINE(403)
					int tmp5 = _g3->__get(_g2);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(403)
					int buttonID = tmp5;		HX_STACK_VAR(buttonID,"buttonID");
					HX_STACK_LINE(403)
					++(_g2);
					HX_STACK_LINE(405)
					int tmp6 = buttonID;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(405)
					::flixel::input::mouse::FlxMouseButton tmp7 = ::flixel::input::mouse::FlxMouseButton_obj::getByID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(405)
					::flixel::input::mouse::FlxMouseButton button = tmp7;		HX_STACK_VAR(button,"button");
					HX_STACK_LINE(406)
					bool tmp8 = (button != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(406)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(406)
					if ((tmp8)){
						HX_STACK_LINE(406)
						::flixel::input::mouse::FlxMouse tmp10 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(406)
						::flixel::input::mouse::FlxMouse tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(406)
						::flixel::input::mouse::FlxMouseButton tmp12 = button;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(406)
						::flixel::math::FlxPoint tmp13 = button->justPressedPosition;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(406)
						::flixel::FlxCamera tmp14 = camera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(406)
						::flixel::input::mouse::FlxMouse tmp15 = tmp11;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(406)
						::flixel::input::mouse::FlxMouseButton tmp16 = tmp12;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(406)
						::flixel::math::FlxPoint tmp17 = tmp13;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(406)
						::flixel::FlxCamera tmp18 = tmp14;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(406)
						tmp9 = this->checkInput(tmp15,tmp16,tmp17,tmp18);
					}
					else{
						HX_STACK_LINE(406)
						tmp9 = false;
					}
					HX_STACK_LINE(406)
					if ((tmp9)){
						HX_STACK_LINE(408)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(414)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,checkMouseOverlap,return )

bool FlxTypedButton_obj::checkTouchOverlap( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","checkTouchOverlap",0x36c79014,"flixel.ui.FlxTypedButton.checkTouchOverlap","flixel/ui/FlxButton.hx",432,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(432)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,checkTouchOverlap,return )

bool FlxTypedButton_obj::checkInput( ::flixel::input::FlxPointer pointer,::flixel::input::IFlxInput input,::flixel::math::FlxPoint justPressedPosition,::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","checkInput",0xf7b933fe,"flixel.ui.FlxTypedButton.checkInput","flixel/ui/FlxButton.hx",436,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pointer,"pointer")
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(justPressedPosition,"justPressedPosition")
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(437)
	Float tmp = this->maxInputMovement;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(437)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(437)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(437)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(437)
	if ((tmp3)){
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(438)
		{
			HX_STACK_LINE(438)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(438)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(438)
			::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			{
				HX_STACK_LINE(438)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp7 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(438)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(438)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(438)
				Float tmp13 = X;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(438)
				Float tmp14 = Y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(438)
				Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(438)
				Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(438)
				Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(438)
				Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint tmp19 = tmp12->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(438)
				::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(438)
				point->_inPool = false;
				HX_STACK_LINE(438)
				tmp6 = point;
			}
			HX_STACK_LINE(438)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(438)
			point->_weak = true;
			HX_STACK_LINE(438)
			tmp5 = point;
		}
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp8 = pointer->getScreenPosition(null(),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(438)
		::flixel::math::FlxPoint tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(438)
		Float tmp13 = justPressedPosition->distanceTo(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(438)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(438)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(438)
		Float tmp16 = this->maxInputMovement;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(438)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(438)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(438)
		tmp4 = (tmp15 > tmp18);
	}
	else{
		HX_STACK_LINE(437)
		tmp4 = false;
	}
	HX_STACK_LINE(437)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(437)
	if ((tmp4)){
		HX_STACK_LINE(439)
		::flixel::input::IFlxInput tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(439)
		::flixel::input::IFlxInput tmp7 = this->currentInput;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(439)
		::flixel::input::IFlxInput tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(439)
		tmp5 = (tmp6 == tmp8);
	}
	else{
		HX_STACK_LINE(437)
		tmp5 = false;
	}
	HX_STACK_LINE(437)
	if ((tmp5)){
		HX_STACK_LINE(441)
		::flixel::input::IFlxInput tmp6 = this->currentInput;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(441)
		(tmp6 == null());
	}
	else{
		HX_STACK_LINE(443)
		::flixel::FlxCamera tmp6 = camera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		::flixel::math::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(443)
		::flixel::math::FlxPoint tmp8 = pointer->getWorldPosition(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(443)
		::flixel::FlxCamera tmp9 = camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(443)
		bool tmp10 = this->overlapsPoint(tmp8,true,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(443)
		if ((tmp10)){
			HX_STACK_LINE(445)
			::flixel::input::IFlxInput tmp11 = input;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(445)
			this->updateStatus(tmp11);
			HX_STACK_LINE(446)
			return true;
		}
	}
	HX_STACK_LINE(449)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedButton_obj,checkInput,return )

Void FlxTypedButton_obj::updateStatus( ::flixel::input::IFlxInput input){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateStatus",0x83872af7,"flixel.ui.FlxTypedButton.updateStatus","flixel/ui/FlxButton.hx",456,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(457)
		bool tmp = input->get_justPressed();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(457)
		if ((tmp)){
			HX_STACK_LINE(459)
			this->currentInput = input;
			HX_STACK_LINE(460)
			this->onDownHandler();
		}
		else{
			HX_STACK_LINE(462)
			int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(462)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(462)
			if ((tmp2)){
				HX_STACK_LINE(465)
				bool tmp3 = this->allowSwiping;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(465)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(465)
				if ((tmp3)){
					HX_STACK_LINE(465)
					tmp4 = input->get_pressed();
				}
				else{
					HX_STACK_LINE(465)
					tmp4 = false;
				}
				HX_STACK_LINE(465)
				if ((tmp4)){
					HX_STACK_LINE(467)
					this->onDownHandler();
				}
				else{
					HX_STACK_LINE(471)
					this->onOverHandler();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,updateStatus,(void))

Void FlxTypedButton_obj::updateLabelPosition( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateLabelPosition",0x7d4d6d98,"flixel.ui.FlxTypedButton.updateLabelPosition","flixel/ui/FlxButton.hx",477,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(478)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(480)
			::flixel::FlxSprite tmp2 = this->_spriteLabel;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(480)
			bool tmp3 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(480)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(480)
			if ((tmp3)){
				HX_STACK_LINE(480)
				Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(480)
				tmp4 = ::Math_obj::floor(tmp5);
			}
			else{
				HX_STACK_LINE(480)
				tmp4 = this->x;
			}
			HX_STACK_LINE(480)
			int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(480)
			::flixel::math::FlxPoint tmp6 = this->labelOffsets->__get(tmp5).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(480)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(480)
			Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(480)
			tmp2->set_x(tmp8);
			HX_STACK_LINE(481)
			::flixel::FlxSprite tmp9 = this->_spriteLabel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(481)
			bool tmp10 = this->pixelPerfectPosition;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(481)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(481)
			if ((tmp10)){
				HX_STACK_LINE(481)
				Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(481)
				tmp11 = ::Math_obj::floor(tmp12);
			}
			else{
				HX_STACK_LINE(481)
				tmp11 = this->y;
			}
			HX_STACK_LINE(481)
			int tmp12 = this->status;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(481)
			::flixel::math::FlxPoint tmp13 = this->labelOffsets->__get(tmp12).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(481)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(481)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(481)
			tmp9->set_y(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateLabelPosition,(void))

Void FlxTypedButton_obj::updateLabelAlpha( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","updateLabelAlpha",0x2352ff0f,"flixel.ui.FlxTypedButton.updateLabelAlpha","flixel/ui/FlxButton.hx",486,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(487)
		::flixel::FlxSprite tmp = this->_spriteLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(487)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(487)
		if ((tmp1)){
			HX_STACK_LINE(487)
			int tmp3 = this->labelAlphas->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(487)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(487)
			int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(487)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(487)
			tmp2 = (tmp4 > tmp6);
		}
		else{
			HX_STACK_LINE(487)
			tmp2 = false;
		}
		HX_STACK_LINE(487)
		if ((tmp2)){
			HX_STACK_LINE(489)
			::flixel::FlxSprite tmp3 = this->_spriteLabel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(489)
			Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(489)
			int tmp5 = this->status;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(489)
			Float tmp6 = this->labelAlphas->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(489)
			Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(489)
			tmp3->set_alpha(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateLabelAlpha,(void))

Void FlxTypedButton_obj::onUpEventListener( Dynamic _){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpEventListener",0x0f960298,"flixel.ui.FlxTypedButton.onUpEventListener","flixel/ui/FlxButton.hx",499,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(500)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(500)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(500)
		if ((tmp1)){
			HX_STACK_LINE(500)
			tmp2 = this->exists;
		}
		else{
			HX_STACK_LINE(500)
			tmp2 = false;
		}
		HX_STACK_LINE(500)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(500)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		if ((tmp3)){
			HX_STACK_LINE(500)
			tmp4 = this->active;
		}
		else{
			HX_STACK_LINE(500)
			tmp4 = false;
		}
		HX_STACK_LINE(500)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(500)
		if ((tmp4)){
			HX_STACK_LINE(500)
			int tmp6 = this->status;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(500)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(500)
			tmp5 = (tmp7 == (int)2);
		}
		else{
			HX_STACK_LINE(500)
			tmp5 = false;
		}
		HX_STACK_LINE(500)
		if ((tmp5)){
			HX_STACK_LINE(502)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onUpEventListener,(void))

Void FlxTypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onUpHandler",0xf0255834,"flixel.ui.FlxTypedButton.onUpHandler","flixel/ui/FlxButton.hx",511,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(512)
		this->set_status((int)0);
		HX_STACK_LINE(513)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		tmp->release();
		HX_STACK_LINE(514)
		this->currentInput = null();
		HX_STACK_LINE(516)
		{
			HX_STACK_LINE(516)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp1 = this->onUp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(516)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(516)
			bool tmp2 = (_this->callback != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(516)
			if ((tmp2)){
				HX_STACK_LINE(516)
				_this->callback();
			}
			HX_STACK_LINE(516)
			bool tmp3 = (_this->sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(516)
			if ((tmp3)){
				HX_STACK_LINE(516)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onUpHandler,(void))

Void FlxTypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onDownHandler",0x6003504d,"flixel.ui.FlxTypedButton.onDownHandler","flixel/ui/FlxButton.hx",523,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(524)
		this->set_status((int)2);
		HX_STACK_LINE(525)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(525)
		tmp->press();
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp1 = this->onDown;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(527)
			bool tmp2 = (_this->callback != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			if ((tmp2)){
				HX_STACK_LINE(527)
				_this->callback();
			}
			HX_STACK_LINE(527)
			bool tmp3 = (_this->sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(527)
			if ((tmp3)){
				HX_STACK_LINE(527)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onDownHandler,(void))

Void FlxTypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOverHandler",0x3b6b999b,"flixel.ui.FlxTypedButton.onOverHandler","flixel/ui/FlxButton.hx",534,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(535)
		this->set_status((int)1);
		HX_STACK_LINE(537)
		{
			HX_STACK_LINE(537)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp = this->onOver;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(537)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(537)
			bool tmp1 = (_this->callback != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(537)
			if ((tmp1)){
				HX_STACK_LINE(537)
				_this->callback();
			}
			HX_STACK_LINE(537)
			bool tmp2 = (_this->sound != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(537)
			if ((tmp2)){
				HX_STACK_LINE(537)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOverHandler,(void))

Void FlxTypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.ui.FlxTypedButton","onOutHandler",0x1cacc3b7,"flixel.ui.FlxTypedButton.onOutHandler","flixel/ui/FlxButton.hx",544,0xc64cf442)
		HX_STACK_THIS(this)
		HX_STACK_LINE(545)
		this->set_status((int)0);
		HX_STACK_LINE(546)
		::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(546)
		tmp->release();
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			::flixel::ui::_FlxButton::FlxButtonEvent tmp1 = this->onOut;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(548)
			::flixel::ui::_FlxButton::FlxButtonEvent _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(548)
			bool tmp2 = (_this->callback != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(548)
			if ((tmp2)){
				HX_STACK_LINE(548)
				_this->callback();
			}
			HX_STACK_LINE(548)
			bool tmp3 = (_this->sound != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(548)
			if ((tmp3)){
				HX_STACK_LINE(548)
				_this->sound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,onOutHandler,(void))

Dynamic FlxTypedButton_obj::set_label( Dynamic Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_label",0xd03f57fb,"flixel.ui.FlxTypedButton.set_label","flixel/ui/FlxButton.hx",552,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(553)
	bool tmp = (Value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(553)
	if ((tmp)){
		HX_STACK_LINE(556)
		Value->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("put","\xcf","\x62","\x55","\x00"), hx::paccDynamic )();
		HX_STACK_LINE(557)
		::flixel::math::FlxPoint tmp1 = this->scrollFactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		Value->__FieldRef(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b")) = tmp1;
	}
	HX_STACK_LINE(560)
	this->label = Value;
	HX_STACK_LINE(561)
	Dynamic tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(561)
	this->_spriteLabel = tmp1;
	HX_STACK_LINE(563)
	this->updateLabelPosition();
	HX_STACK_LINE(565)
	Dynamic tmp2 = Value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(565)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_label,return )

int FlxTypedButton_obj::set_status( int Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_status",0x23ac634b,"flixel.ui.FlxTypedButton.set_status","flixel/ui/FlxButton.hx",569,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(570)
	this->status = Value;
	HX_STACK_LINE(571)
	this->updateLabelAlpha();
	HX_STACK_LINE(572)
	int tmp = this->status;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(572)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,set_status,return )

Float FlxTypedButton_obj::set_alpha( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_alpha",0x8226f165,"flixel.ui.FlxTypedButton.set_alpha","flixel/ui/FlxButton.hx",576,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(577)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	this->super::set_alpha(tmp);
	HX_STACK_LINE(578)
	this->updateLabelAlpha();
	HX_STACK_LINE(579)
	Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	return tmp1;
}


Float FlxTypedButton_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_x",0xd772faff,"flixel.ui.FlxTypedButton.set_x","flixel/ui/FlxButton.hx",583,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(584)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	this->super::set_x(tmp);
	HX_STACK_LINE(585)
	this->updateLabelPosition();
	HX_STACK_LINE(586)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(586)
	return tmp1;
}


Float FlxTypedButton_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","set_y",0xd772fb00,"flixel.ui.FlxTypedButton.set_y","flixel/ui/FlxButton.hx",590,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(591)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	this->super::set_y(tmp);
	HX_STACK_LINE(592)
	this->updateLabelPosition();
	HX_STACK_LINE(593)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(593)
	return tmp1;
}


bool FlxTypedButton_obj::get_justReleased( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_justReleased",0x06e7426e,"flixel.ui.FlxTypedButton.get_justReleased","flixel/ui/FlxButton.hx",597,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(598)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(598)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_justReleased,return )

bool FlxTypedButton_obj::get_released( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_released",0xa9c8d9a2,"flixel.ui.FlxTypedButton.get_released","flixel/ui/FlxButton.hx",602,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(603)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	{
		HX_STACK_LINE(603)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		::flixel::input::FlxInput _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(603)
		bool tmp2 = (_this->current == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		if ((tmp3)){
			HX_STACK_LINE(603)
			tmp = (_this->current == (int)-1);
		}
		else{
			HX_STACK_LINE(603)
			tmp = true;
		}
	}
	HX_STACK_LINE(603)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_released,return )

bool FlxTypedButton_obj::get_pressed( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_pressed",0x0c35e55d,"flixel.ui.FlxTypedButton.get_pressed","flixel/ui/FlxButton.hx",607,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(608)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(608)
		::flixel::input::FlxInput tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		::flixel::input::FlxInput _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(608)
		bool tmp2 = (_this->current == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(608)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(608)
		if ((tmp3)){
			HX_STACK_LINE(608)
			tmp = (_this->current == (int)2);
		}
		else{
			HX_STACK_LINE(608)
			tmp = true;
		}
	}
	HX_STACK_LINE(608)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_pressed,return )

bool FlxTypedButton_obj::get_justPressed( ){
	HX_STACK_FRAME("flixel.ui.FlxTypedButton","get_justPressed",0x7ad59a11,"flixel.ui.FlxTypedButton.get_justPressed","flixel/ui/FlxButton.hx",612,0xc64cf442)
	HX_STACK_THIS(this)
	HX_STACK_LINE(613)
	::flixel::input::FlxInput tmp = this->input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	int tmp1 = tmp->current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,get_justPressed,return )


FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_MARK_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_MARK_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_MARK_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_MARK_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_MARK_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(_spriteLabel,"_spriteLabel");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(currentInput,"currentInput");
	HX_MARK_MEMBER_NAME(lastStatus,"lastStatus");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(labelOffsets,"labelOffsets");
	HX_VISIT_MEMBER_NAME(labelAlphas,"labelAlphas");
	HX_VISIT_MEMBER_NAME(statusAnimations,"statusAnimations");
	HX_VISIT_MEMBER_NAME(allowSwiping,"allowSwiping");
	HX_VISIT_MEMBER_NAME(mouseButtons,"mouseButtons");
	HX_VISIT_MEMBER_NAME(maxInputMovement,"maxInputMovement");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(_spriteLabel,"_spriteLabel");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(currentInput,"currentInput");
	HX_VISIT_MEMBER_NAME(lastStatus,"lastStatus");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == hx::paccAlways) return get_released(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_label") ) { return set_label_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastStatus") ) { return lastStatus; }
		if (HX_FIELD_EQ(inName,"checkInput") ) { return checkInput_dyn(); }
		if (HX_FIELD_EQ(inName,"set_status") ) { return set_status_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { return labelAlphas; }
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == hx::paccAlways) return get_justPressed(); }
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { return labelOffsets; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { return allowSwiping; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { return mouseButtons; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == hx::paccAlways) return get_justReleased(); }
		if (HX_FIELD_EQ(inName,"_spriteLabel") ) { return _spriteLabel; }
		if (HX_FIELD_EQ(inName,"currentInput") ) { return currentInput; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"updateStatus") ) { return updateStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return get_released_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"graphicLoaded") ) { return graphicLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setupAnimation") ) { return setupAnimation_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return get_justPressed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { return statusAnimations; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { return maxInputMovement; }
		if (HX_FIELD_EQ(inName,"updateLabelAlpha") ) { return updateLabelAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return get_justReleased_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkMouseOverlap") ) { return checkMouseOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTouchOverlap") ) { return checkTouchOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpEventListener") ) { return onUpEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadDefaultGraphic") ) { return loadDefaultGraphic_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateLabelPosition") ) { return updateLabelPosition_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateStatusAnimation") ) { return updateStatusAnimation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { if (inCallProp == hx::paccAlways) return set_label(inValue);label=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::flixel::input::FlxInput >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { if (inCallProp == hx::paccAlways) return set_status(inValue);status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< ::flixel::ui::_FlxButton::FlxButtonEvent >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastStatus") ) { lastStatus=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelAlphas") ) { labelAlphas=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"labelOffsets") ) { labelOffsets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSwiping") ) { allowSwiping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseButtons") ) { mouseButtons=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteLabel") ) { _spriteLabel=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentInput") ) { currentInput=inValue.Cast< ::flixel::input::IFlxInput >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"statusAnimations") ) { statusAnimations=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxInputMovement") ) { maxInputMovement=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c"));
	outFields->push(HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d"));
	outFields->push(HX_HCSTRING("statusAnimations","\xc1","\xd2","\xc0","\xc5"));
	outFields->push(HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43"));
	outFields->push(HX_HCSTRING("mouseButtons","\x9c","\xa2","\x1a","\xac"));
	outFields->push(HX_HCSTRING("maxInputMovement","\x15","\x8e","\xe1","\x5a"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"));
	outFields->push(HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"));
	outFields->push(HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec"));
	outFields->push(HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("_spriteLabel","\xb0","\x9d","\x5b","\x0c"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("currentInput","\x11","\xa9","\x29","\x05"));
	outFields->push(HX_HCSTRING("lastStatus","\x28","\xca","\xd6","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTypedButton_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTypedButton_obj,labelOffsets),HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxTypedButton_obj,labelAlphas),HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxTypedButton_obj,statusAnimations),HX_HCSTRING("statusAnimations","\xc1","\xd2","\xc0","\xc5")},
	{hx::fsBool,(int)offsetof(FlxTypedButton_obj,allowSwiping),HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTypedButton_obj,mouseButtons),HX_HCSTRING("mouseButtons","\x9c","\xa2","\x1a","\xac")},
	{hx::fsFloat,(int)offsetof(FlxTypedButton_obj,maxInputMovement),HX_HCSTRING("maxInputMovement","\x15","\x8e","\xe1","\x5a")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onUp),HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onDown),HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOver),HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec")},
	{hx::fsObject /*::flixel::ui::_FlxButton::FlxButtonEvent*/ ,(int)offsetof(FlxTypedButton_obj,onOut),HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxTypedButton_obj,_spriteLabel),HX_HCSTRING("_spriteLabel","\xb0","\x9d","\x5b","\x0c")},
	{hx::fsObject /*::flixel::input::FlxInput*/ ,(int)offsetof(FlxTypedButton_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::flixel::input::IFlxInput*/ ,(int)offsetof(FlxTypedButton_obj,currentInput),HX_HCSTRING("currentInput","\x11","\xa9","\x29","\x05")},
	{hx::fsInt,(int)offsetof(FlxTypedButton_obj,lastStatus),HX_HCSTRING("lastStatus","\x28","\xca","\xd6","\xd0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("labelOffsets","\xec","\x89","\xc7","\x2c"),
	HX_HCSTRING("labelAlphas","\x69","\x3c","\x3c","\x8d"),
	HX_HCSTRING("statusAnimations","\xc1","\xd2","\xc0","\xc5"),
	HX_HCSTRING("allowSwiping","\xae","\x3a","\x40","\x43"),
	HX_HCSTRING("mouseButtons","\x9c","\xa2","\x1a","\xac"),
	HX_HCSTRING("maxInputMovement","\x15","\x8e","\xe1","\x5a"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("onUp","\x5a","\x71","\xb2","\x49"),
	HX_HCSTRING("onDown","\x21","\x01","\xf8","\xe4"),
	HX_HCSTRING("onOver","\x13","\x9a","\x42","\xec"),
	HX_HCSTRING("onOut","\xaf","\x34","\x6c","\x32"),
	HX_HCSTRING("_spriteLabel","\xb0","\x9d","\x5b","\x0c"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("currentInput","\x11","\xa9","\x29","\x05"),
	HX_HCSTRING("lastStatus","\x28","\xca","\xd6","\xd0"),
	HX_HCSTRING("graphicLoaded","\xcd","\x84","\x20","\x16"),
	HX_HCSTRING("loadDefaultGraphic","\xad","\x18","\x08","\x83"),
	HX_HCSTRING("setupAnimation","\xc7","\xe8","\xce","\xb6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateStatusAnimation","\x69","\x25","\xc1","\x4d"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("stampOnAtlas","\xe9","\xf9","\x45","\x2b"),
	HX_HCSTRING("updateButton","\xdb","\x08","\xa4","\xd9"),
	HX_HCSTRING("checkMouseOverlap","\xca","\x84","\x64","\x1a"),
	HX_HCSTRING("checkTouchOverlap","\x70","\x4a","\x21","\x63"),
	HX_HCSTRING("checkInput","\x22","\xc6","\x0d","\xce"),
	HX_HCSTRING("updateStatus","\x1b","\x8e","\xbf","\x05"),
	HX_HCSTRING("updateLabelPosition","\xf4","\x76","\x4f","\xbf"),
	HX_HCSTRING("updateLabelAlpha","\x33","\xc4","\x65","\x87"),
	HX_HCSTRING("onUpEventListener","\xf4","\xbc","\xef","\x3b"),
	HX_HCSTRING("onUpHandler","\x90","\xa5","\xd0","\xa3"),
	HX_HCSTRING("onDownHandler","\xa9","\xac","\x21","\xcf"),
	HX_HCSTRING("onOverHandler","\xf7","\xf5","\x89","\xaa"),
	HX_HCSTRING("onOutHandler","\xdb","\x26","\xe5","\x9e"),
	HX_HCSTRING("set_label","\x57","\x56","\xa9","\x96"),
	HX_HCSTRING("set_status","\x6f","\xf5","\x00","\xfa"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_justReleased","\x92","\x07","\xfa","\x6a"),
	HX_HCSTRING("get_released","\xc6","\x3c","\x01","\x2c"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("get_justPressed","\x6d","\xc5","\x88","\xb3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxTypedButton","\x12","\xad","\x96","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedButton_obj >;
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
} // end namespace ui
