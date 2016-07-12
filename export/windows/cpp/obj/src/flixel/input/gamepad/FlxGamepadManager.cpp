#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxAnalogToDigitalMode
#include <flixel/input/gamepad/FlxAnalogToDigitalMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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
#ifndef INCLUDED_openfl__legacy_events_JoystickEvent
#include <openfl/_legacy/events/JoystickEvent.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadManager_obj::__construct()
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","new",0x05218fad,"flixel.input.gamepad.FlxGamepadManager.new","flixel/input/gamepad/FlxGamepadManager.hx",19,0xccfee0a6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(48)
	this->_activeGamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(44)
	this->_gamepads = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(308)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(308)
	Dynamic tmp2 = this->handleAxisMove_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(308)
	tmp1->addEventListener(HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"),tmp2,null(),null(),null());
	HX_STACK_LINE(309)
	::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(309)
	::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(309)
	Dynamic tmp5 = this->handleBallMove_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(309)
	tmp4->addEventListener(HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"),tmp5,null(),null(),null());
	HX_STACK_LINE(310)
	::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(310)
	::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(310)
	Dynamic tmp8 = this->handleButtonDownEvent_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(310)
	tmp7->addEventListener(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),tmp8,null(),null(),null());
	HX_STACK_LINE(311)
	::openfl::_legacy::display::MovieClip tmp9 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(311)
	::openfl::_legacy::display::Stage tmp10 = tmp9->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(311)
	Dynamic tmp11 = this->handleButtonUpEvent_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(311)
	tmp10->addEventListener(HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),tmp11,null(),null(),null());
	HX_STACK_LINE(312)
	::openfl::_legacy::display::MovieClip tmp12 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(312)
	::openfl::_legacy::display::Stage tmp13 = tmp12->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(312)
	Dynamic tmp14 = this->handleHatMove_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(312)
	tmp13->addEventListener(HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"),tmp14,null(),null(),null());
	HX_STACK_LINE(313)
	::openfl::_legacy::display::MovieClip tmp15 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(313)
	::openfl::_legacy::display::Stage tmp16 = tmp15->get_stage();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(313)
	Dynamic tmp17 = this->handleDeviceRemoved_dyn();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(313)
	tmp16->addEventListener(HX_HCSTRING("deviceRemoved","\xaa","\xc9","\x5b","\x59"),tmp17,null(),null(),null());
	HX_STACK_LINE(314)
	::openfl::_legacy::display::MovieClip tmp18 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(314)
	::openfl::_legacy::display::Stage tmp19 = tmp18->get_stage();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(314)
	Dynamic tmp20 = this->handleDeviceAdded_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(314)
	tmp19->addEventListener(HX_HCSTRING("deviceAdded","\x4a","\x08","\x84","\x0b"),tmp20,null(),null(),null());
}
;
	return null();
}

//FlxGamepadManager_obj::~FlxGamepadManager_obj() { }

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return  new FlxGamepadManager_obj; }
hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new()
{  hx::ObjectPtr< FlxGamepadManager_obj > _result_ = new FlxGamepadManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGamepadManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadManager_obj > _result_ = new FlxGamepadManager_obj();
	_result_->__construct();
	return _result_;}

hx::Object *FlxGamepadManager_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::input::IFlxInputManager_obj)) return operator ::flixel::input::IFlxInputManager_obj *();
	return super::__ToInterface(inType);
}

FlxGamepadManager_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxGamepadManager_obj >(this); }
FlxGamepadManager_obj::operator ::flixel::input::IFlxInputManager_obj *()
	{ return new ::flixel::input::IFlxInputManager_delegate_< FlxGamepadManager_obj >(this); }
::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID( int GamepadID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getByID",0xe19992f5,"flixel.input.gamepad.FlxGamepadManager.getByID","flixel/input/gamepad/FlxGamepadManager.hx",62,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_LINE(63)
	::flixel::input::gamepad::FlxGamepad tmp = this->_activeGamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )

Void FlxGamepadManager_obj::removeByID( int GamepadID){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","removeByID",0x7466a829,"flixel.input.gamepad.FlxGamepadManager.removeByID","flixel/input/gamepad/FlxGamepadManager.hx",67,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(GamepadID,"GamepadID")
		HX_STACK_LINE(68)
		::flixel::input::gamepad::FlxGamepad tmp = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(69)
		bool tmp1 = (gamepad != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(71)
			::flixel::input::gamepad::FlxGamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			::flixel::util::FlxDestroyUtil_obj::destroy(tmp2);
			HX_STACK_LINE(72)
			this->_gamepads[GamepadID] = null();
			HX_STACK_LINE(74)
			::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			int tmp4 = this->_activeGamepads->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			bool tmp5 = (i != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			if ((tmp5)){
				HX_STACK_LINE(76)
				this->_activeGamepads[i] = null();
			}
		}
		HX_STACK_LINE(79)
		::flixel::input::gamepad::FlxGamepad tmp2 = this->lastActive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		if ((tmp4)){
			HX_STACK_LINE(80)
			this->lastActive = null();
		}
		HX_STACK_LINE(82)
		::flixel::input::gamepad::FlxGamepad tmp5 = this->firstActive;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		if ((tmp7)){
			HX_STACK_LINE(83)
			this->firstActive = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,removeByID,(void))

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::createByID( int GamepadID,::flixel::input::gamepad::FlxGamepadModel Model){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","createByID",0x09d52ee1,"flixel.input.gamepad.FlxGamepadManager.createByID","flixel/input/gamepad/FlxGamepadManager.hx",87,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadID,"GamepadID")
	HX_STACK_ARG(Model,"Model")
	HX_STACK_LINE(88)
	::flixel::input::gamepad::FlxGamepad tmp = this->_gamepads->__get(GamepadID).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	::flixel::input::gamepad::FlxGamepad gamepad = tmp;		HX_STACK_VAR(gamepad,"gamepad");
	HX_STACK_LINE(89)
	bool tmp1 = (gamepad == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	if ((tmp1)){
		HX_STACK_LINE(91)
		::flixel::input::gamepad::FlxGamepad tmp2 = ::flixel::input::gamepad::FlxGamepad_obj::__new(GamepadID,hx::ObjectPtr<OBJ_>(this),Model,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		gamepad = tmp2;
		HX_STACK_LINE(92)
		::flixel::input::gamepad::FlxGamepad tmp3 = gamepad;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		this->_gamepads[GamepadID] = tmp3;
		HX_STACK_LINE(95)
		bool nullFound = false;		HX_STACK_VAR(nullFound,"nullFound");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			int tmp4 = this->_activeGamepads->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(96)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(96)
				if ((tmp6)){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(98)
				::flixel::input::gamepad::FlxGamepad tmp8 = this->_activeGamepads->__get(i).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				if ((tmp9)){
					HX_STACK_LINE(100)
					::flixel::input::gamepad::FlxGamepad tmp10 = gamepad;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(100)
					this->_activeGamepads[i] = tmp10;
					HX_STACK_LINE(101)
					nullFound = true;
					HX_STACK_LINE(102)
					break;
				}
			}
		}
		HX_STACK_LINE(106)
		bool tmp4 = nullFound;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		if ((tmp5)){
			HX_STACK_LINE(107)
			::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			this->_activeGamepads->push(tmp6);
		}
	}
	HX_STACK_LINE(110)
	this->lastActive = gamepad;
	HX_STACK_LINE(111)
	::flixel::input::gamepad::FlxGamepad tmp2 = this->firstActive;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	if ((tmp3)){
		HX_STACK_LINE(112)
		this->firstActive = gamepad;
	}
	HX_STACK_LINE(114)
	::flixel::input::gamepad::FlxGamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,createByID,return )

Array< int > FlxGamepadManager_obj::getActiveGamepadIDs( Array< int > IDsArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepadIDs",0x2dbae5a0,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",124,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDsArray,"IDsArray")
	HX_STACK_LINE(125)
	bool tmp = (IDsArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	if ((tmp)){
		HX_STACK_LINE(126)
		IDsArray = Array_obj< int >::__new();
	}
	HX_STACK_LINE(128)
	{
		HX_STACK_LINE(128)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		while((true)){
			HX_STACK_LINE(128)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			if ((tmp2)){
				HX_STACK_LINE(128)
				break;
			}
			HX_STACK_LINE(128)
			::flixel::input::gamepad::FlxGamepad tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp3;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(128)
			++(_g);
			HX_STACK_LINE(129)
			bool tmp4 = (gamepad != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(129)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(129)
			if ((tmp4)){
				HX_STACK_LINE(129)
				tmp5 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(129)
				tmp5 = false;
			}
			HX_STACK_LINE(129)
			if ((tmp5)){
				HX_STACK_LINE(130)
				int tmp6 = gamepad->id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(130)
				IDsArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(132)
	return IDsArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

Array< ::Dynamic > FlxGamepadManager_obj::getActiveGamepads( Array< ::Dynamic > GamepadArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getActiveGamepads",0xd3d79bdb,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",142,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GamepadArray,"GamepadArray")
	HX_STACK_LINE(143)
	bool tmp = (GamepadArray == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	if ((tmp)){
		HX_STACK_LINE(144)
		GamepadArray = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(146)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(146)
		while((true)){
			HX_STACK_LINE(146)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			if ((tmp2)){
				HX_STACK_LINE(146)
				break;
			}
			HX_STACK_LINE(146)
			::flixel::input::gamepad::FlxGamepad tmp3 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp3;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(146)
			++(_g);
			HX_STACK_LINE(147)
			bool tmp4 = (gamepad != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(147)
				tmp5 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(147)
				tmp5 = false;
			}
			HX_STACK_LINE(147)
			if ((tmp5)){
				HX_STACK_LINE(148)
				::flixel::input::gamepad::FlxGamepad tmp6 = gamepad;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(148)
				GamepadArray->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(150)
	return GamepadArray;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepadID",0x40a7d549,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",158,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(159)
	::flixel::input::gamepad::FlxGamepad tmp = this->getFirstActiveGamepad();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	::flixel::input::gamepad::FlxGamepad firstActive = tmp;		HX_STACK_VAR(firstActive,"firstActive");
	HX_STACK_LINE(160)
	bool tmp1 = (firstActive == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	if ((tmp1)){
		HX_STACK_LINE(160)
		tmp2 = (int)-1;
	}
	else{
		HX_STACK_LINE(160)
		tmp2 = firstActive->id;
	}
	HX_STACK_LINE(160)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepad",0x4c49bdee,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",168,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(169)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(169)
			if ((tmp1)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(170)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			if ((tmp3)){
				HX_STACK_LINE(170)
				tmp4 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(170)
				tmp4 = false;
			}
			HX_STACK_LINE(170)
			if ((tmp4)){
				HX_STACK_LINE(171)
				::flixel::input::gamepad::FlxGamepad tmp5 = gamepad;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(171)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(173)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

bool FlxGamepadManager_obj::anyButton( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyButton",0x595b810b,"flixel.input.gamepad.FlxGamepadManager.anyButton","flixel/input/gamepad/FlxGamepadManager.hx",180,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(181)
			while((true)){
				HX_STACK_LINE(181)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(181)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(181)
				if ((tmp1)){
					HX_STACK_LINE(181)
					break;
				}
				HX_STACK_LINE(181)
				::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(181)
				::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
				HX_STACK_LINE(181)
				++(_g);
				HX_STACK_LINE(182)
				bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(182)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(182)
				if ((tmp3)){
					HX_STACK_LINE(182)
					int tmp5 = state;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(182)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(182)
					tmp4 = gamepad->anyButton(tmp6);
				}
				else{
					HX_STACK_LINE(182)
					tmp4 = false;
				}
				HX_STACK_LINE(182)
				if ((tmp4)){
					HX_STACK_LINE(183)
					return true;
				}
			}
		}
		HX_STACK_LINE(185)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyButton,return )

bool FlxGamepadManager_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyInput",0xa448cb11,"flixel.input.gamepad.FlxGamepadManager.anyInput","flixel/input/gamepad/FlxGamepadManager.hx",192,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(193)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			if ((tmp1)){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(194)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			if ((tmp3)){
				HX_STACK_LINE(194)
				tmp4 = gamepad->anyInput();
			}
			else{
				HX_STACK_LINE(194)
				tmp4 = false;
			}
			HX_STACK_LINE(194)
			if ((tmp4)){
				HX_STACK_LINE(195)
				return true;
			}
		}
	}
	HX_STACK_LINE(197)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyPressed( int buttonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyPressed",0x4626e969,"flixel.input.gamepad.FlxGamepadManager.anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",204,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_LINE(205)
	int tmp = buttonID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	bool tmp1 = this->anyHasState(tmp,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyJustPressed( int buttonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustPressed",0x8467941d,"flixel.input.gamepad.FlxGamepadManager.anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",212,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_LINE(213)
	int tmp = buttonID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	bool tmp1 = this->anyHasState(tmp,(int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyJustReleased( int buttonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyJustReleased",0x5d1012e2,"flixel.input.gamepad.FlxGamepadManager.anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",220,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_LINE(221)
	int tmp = buttonID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	bool tmp1 = this->anyHasState(tmp,(int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

bool FlxGamepadManager_obj::anyHasState( int buttonID,int state){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyHasState",0xbc3797b0,"flixel.input.gamepad.FlxGamepadManager.anyHasState","flixel/input/gamepad/FlxGamepadManager.hx",225,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buttonID,"buttonID")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(226)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			if ((tmp1)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(226)
			++(_g);
			HX_STACK_LINE(227)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			if ((tmp3)){
				HX_STACK_LINE(227)
				int tmp5 = buttonID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(227)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(227)
				int tmp7 = gamepad->mapping->getRawID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(227)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(227)
				int tmp9 = state;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(227)
				int tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(227)
				int tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				tmp4 = gamepad->checkStatusRaw(tmp10,tmp11);
			}
			else{
				HX_STACK_LINE(227)
				tmp4 = false;
			}
			HX_STACK_LINE(227)
			if ((tmp4)){
				HX_STACK_LINE(228)
				return true;
			}
		}
	}
	HX_STACK_LINE(230)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,anyHasState,return )

Float FlxGamepadManager_obj::anyMovedXAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyMovedXAxis",0x17da8f9f,"flixel.input.gamepad.FlxGamepadManager.anyMovedXAxis","flixel/input/gamepad/FlxGamepadManager.hx",240,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawAxisID,"RawAxisID")
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(241)
		while((true)){
			HX_STACK_LINE(241)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(241)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(241)
			if ((tmp1)){
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(241)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(241)
			++(_g);
			HX_STACK_LINE(243)
			bool tmp3 = (gamepad == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(243)
			if ((tmp3)){
				HX_STACK_LINE(244)
				continue;
			}
			HX_STACK_LINE(246)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = RawAxisID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			Float tmp5 = gamepad->getAnalogXAxisValue(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(246)
			Float value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(247)
			bool tmp6 = (value != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			if ((tmp6)){
				HX_STACK_LINE(248)
				Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(248)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(251)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyMovedXAxis,return )

Float FlxGamepadManager_obj::anyMovedYAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","anyMovedYAxis",0xab412420,"flixel.input.gamepad.FlxGamepadManager.anyMovedYAxis","flixel/input/gamepad/FlxGamepadManager.hx",261,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawAxisID,"RawAxisID")
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(262)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(262)
		while((true)){
			HX_STACK_LINE(262)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(262)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(262)
			if ((tmp1)){
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(262)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(262)
			++(_g);
			HX_STACK_LINE(264)
			bool tmp3 = (gamepad == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(264)
			if ((tmp3)){
				HX_STACK_LINE(265)
				continue;
			}
			HX_STACK_LINE(267)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = RawAxisID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			Float tmp5 = gamepad->getYAxisRaw(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(267)
			Float value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(268)
			bool tmp6 = (value != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(268)
			if ((tmp6)){
				HX_STACK_LINE(269)
				Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(269)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(272)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyMovedYAxis,return )

Void FlxGamepadManager_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","destroy",0xf27a16c7,"flixel.input.gamepad.FlxGamepadManager.destroy","flixel/input/gamepad/FlxGamepadManager.hx",280,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(281)
		this->_gamepads = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_gamepads);
		HX_STACK_LINE(283)
		this->firstActive = null();
		HX_STACK_LINE(284)
		this->lastActive = null();
		HX_STACK_LINE(285)
		this->_gamepads = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

Void FlxGamepadManager_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","reset",0x09fe365c,"flixel.input.gamepad.FlxGamepadManager.reset","flixel/input/gamepad/FlxGamepadManager.hx",299,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(299)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(299)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(299)
		while((true)){
			HX_STACK_LINE(299)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(299)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(299)
			if ((tmp1)){
				HX_STACK_LINE(299)
				break;
			}
			HX_STACK_LINE(299)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(299)
			++(_g);
			HX_STACK_LINE(300)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(300)
			if ((tmp3)){
				HX_STACK_LINE(301)
				gamepad->reset();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

::flixel::input::gamepad::FlxGamepadModel FlxGamepadManager_obj::getModelFromJoystick( Float id){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","getModelFromJoystick",0x94fdf62c,"flixel.input.gamepad.FlxGamepadManager.getModelFromJoystick","flixel/input/gamepad/FlxGamepadManager.hx",406,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(409)
	::flixel::input::gamepad::FlxGamepadModel tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(409)
	{
		HX_STACK_LINE(409)
		Float tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(409)
		int tmp2 = ::Math_obj::round(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(409)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(409)
		int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(409)
		switch( (int)(tmp3)){
			case (int)0: {
				HX_STACK_LINE(411)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::XINPUT;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(412)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::PS4;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(413)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::OUYA;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(414)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::MAYFLASH_WII_REMOTE;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(415)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::WII_REMOTE;
			}
			;break;
			default: {
				HX_STACK_LINE(416)
				tmp = ::flixel::input::gamepad::FlxGamepadModel_obj::UNKNOWN;
			}
		}
	}
	HX_STACK_LINE(409)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getModelFromJoystick,return )

Void FlxGamepadManager_obj::handleButtonDownEvent( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDownEvent",0x228bc3cb,"flixel.input.gamepad.FlxGamepadManager.handleButtonDownEvent","flixel/input/gamepad/FlxGamepadManager.hx",421,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(422)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		int tmp1 = event->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		this->handleButtonDown(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonDownEvent,(void))

Void FlxGamepadManager_obj::handleButtonDown( int device,int id){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonDown",0x9a9405cf,"flixel.input.gamepad.FlxGamepadManager.handleButtonDown","flixel/input/gamepad/FlxGamepadManager.hx",426,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(device,"device")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(427)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(427)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(427)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = tmp1->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(428)
		bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(428)
		if ((tmp4)){
			HX_STACK_LINE(429)
			button->press();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,handleButtonDown,(void))

Void FlxGamepadManager_obj::handleButtonUpEvent( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUpEvent",0x75a63c72,"flixel.input.gamepad.FlxGamepadManager.handleButtonUpEvent","flixel/input/gamepad/FlxGamepadManager.hx",433,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(434)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(434)
		int tmp1 = event->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(434)
		this->handleButtonUp(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleButtonUpEvent,(void))

Void FlxGamepadManager_obj::handleButtonUp( int device,int id){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleButtonUp",0x87ba4e88,"flixel.input.gamepad.FlxGamepadManager.handleButtonUp","flixel/input/gamepad/FlxGamepadManager.hx",438,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(device,"device")
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(439)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(439)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(439)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = tmp1->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(439)
		::flixel::input::gamepad::FlxGamepadButton button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(440)
		bool tmp4 = (button != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(440)
		if ((tmp4)){
			HX_STACK_LINE(441)
			button->release();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,handleButtonUp,(void))

Void FlxGamepadManager_obj::handleAxisMove( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleAxisMove",0xbb7c51ed,"flixel.input.gamepad.FlxGamepadManager.handleAxisMove","flixel/input/gamepad/FlxGamepadManager.hx",445,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(446)
		int device = event->device;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(447)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(447)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(447)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(449)
		Array< Float > oldAxis = gamepad->axis;		HX_STACK_VAR(oldAxis,"oldAxis");
		HX_STACK_LINE(450)
		Array< Float > newAxis = event->axis;		HX_STACK_VAR(newAxis,"newAxis");
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(452)
			int _g = newAxis->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(452)
			while((true)){
				HX_STACK_LINE(452)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(452)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(452)
				if ((tmp3)){
					HX_STACK_LINE(452)
					break;
				}
				HX_STACK_LINE(452)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(452)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(454)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(454)
				bool tmp6 = gamepad->isAxisForAnalogStick(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(454)
				bool isForStick = tmp6;		HX_STACK_VAR(isForStick,"isForStick");
				HX_STACK_LINE(455)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(455)
				bool tmp8 = gamepad->mapping->isAxisForMotion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(455)
				bool isForMotion = tmp8;		HX_STACK_VAR(isForMotion,"isForMotion");
				HX_STACK_LINE(456)
				bool tmp9 = isForStick;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(456)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(456)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(456)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(456)
				if ((tmp11)){
					HX_STACK_LINE(456)
					bool tmp13 = isForMotion;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(456)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(456)
					tmp12 = !(tmp14);
				}
				else{
					HX_STACK_LINE(456)
					tmp12 = false;
				}
				HX_STACK_LINE(456)
				if ((tmp12)){
					HX_STACK_LINE(460)
					Float tmp13 = newAxis->__get(i);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(460)
					Float tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(460)
					Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(460)
					newAxis[i] = tmp15;
				}
				else{
					HX_STACK_LINE(462)
					bool tmp13 = isForStick;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(462)
					if ((tmp13)){
						HX_STACK_LINE(465)
						::flixel::input::gamepad::FlxGamepadAnalogStick tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(465)
						{
							HX_STACK_LINE(465)
							::flixel::input::gamepad::FlxGamepadAnalogStick tmp15 = gamepad->mapping->leftStick;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(465)
							::flixel::input::gamepad::FlxGamepadAnalogStick leftStick = tmp15;		HX_STACK_VAR(leftStick,"leftStick");
							HX_STACK_LINE(465)
							::flixel::input::gamepad::FlxGamepadAnalogStick tmp16 = gamepad->mapping->rightStick;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(465)
							::flixel::input::gamepad::FlxGamepadAnalogStick rightStick = tmp16;		HX_STACK_VAR(rightStick,"rightStick");
							HX_STACK_LINE(465)
							bool tmp17 = (leftStick != null());		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(465)
							bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(465)
							bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(465)
							if ((tmp18)){
								HX_STACK_LINE(465)
								tmp19 = (i == leftStick->x);
							}
							else{
								HX_STACK_LINE(465)
								tmp19 = false;
							}
							HX_STACK_LINE(465)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(465)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(465)
							if ((tmp20)){
								HX_STACK_LINE(465)
								tmp21 = (i == leftStick->y);
							}
							else{
								HX_STACK_LINE(465)
								tmp21 = true;
							}
							HX_STACK_LINE(465)
							if ((tmp21)){
								HX_STACK_LINE(465)
								tmp14 = leftStick;
							}
							else{
								HX_STACK_LINE(465)
								bool tmp22 = (rightStick != null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(465)
								bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(465)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(465)
								if ((tmp23)){
									HX_STACK_LINE(465)
									tmp24 = (i == rightStick->x);
								}
								else{
									HX_STACK_LINE(465)
									tmp24 = false;
								}
								HX_STACK_LINE(465)
								bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(465)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(465)
								if ((tmp25)){
									HX_STACK_LINE(465)
									tmp26 = (i == rightStick->y);
								}
								else{
									HX_STACK_LINE(465)
									tmp26 = true;
								}
								HX_STACK_LINE(465)
								if ((tmp26)){
									HX_STACK_LINE(465)
									tmp14 = rightStick;
								}
								else{
									HX_STACK_LINE(465)
									tmp14 = null();
								}
							}
						}
						HX_STACK_LINE(465)
						::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp14;		HX_STACK_VAR(stick,"stick");
						HX_STACK_LINE(466)
						bool tmp15 = (stick->mode == ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_DIGITAL);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(466)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(466)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(466)
						if ((tmp16)){
							HX_STACK_LINE(466)
							tmp17 = (stick->mode == ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::BOTH);
						}
						else{
							HX_STACK_LINE(466)
							tmp17 = true;
						}
						HX_STACK_LINE(466)
						if ((tmp17)){
							HX_STACK_LINE(468)
							Float tmp18 = newAxis->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(468)
							Float newVal = tmp18;		HX_STACK_VAR(newVal,"newVal");
							HX_STACK_LINE(469)
							Float tmp19 = oldAxis->__get(i);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(469)
							Float oldVal = tmp19;		HX_STACK_VAR(oldVal,"oldVal");
							HX_STACK_LINE(471)
							Float tmp20 = (stick->digitalThreshold * (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(471)
							Float neg = tmp20;		HX_STACK_VAR(neg,"neg");
							HX_STACK_LINE(472)
							Float pos = stick->digitalThreshold;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(473)
							int digitalButton = (int)-1;		HX_STACK_VAR(digitalButton,"digitalButton");
							HX_STACK_LINE(476)
							bool tmp21 = (newVal < neg);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(476)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(476)
							if ((tmp21)){
								HX_STACK_LINE(476)
								tmp22 = (oldVal >= neg);
							}
							else{
								HX_STACK_LINE(476)
								tmp22 = false;
							}
							HX_STACK_LINE(476)
							if ((tmp22)){
								HX_STACK_LINE(478)
								bool tmp23 = (i == stick->x);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(478)
								if ((tmp23)){
									HX_STACK_LINE(478)
									digitalButton = stick->rawLeft;
								}
								else{
									HX_STACK_LINE(479)
									bool tmp24 = (i == stick->y);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(479)
									if ((tmp24)){
										HX_STACK_LINE(479)
										digitalButton = stick->rawUp;
									}
								}
								HX_STACK_LINE(480)
								int tmp24 = device;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(480)
								int tmp25 = digitalButton;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(480)
								this->handleButtonDown(tmp24,tmp25);
							}
							else{
								HX_STACK_LINE(482)
								bool tmp23 = (newVal >= neg);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(482)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(482)
								if ((tmp23)){
									HX_STACK_LINE(482)
									tmp24 = (oldVal < neg);
								}
								else{
									HX_STACK_LINE(482)
									tmp24 = false;
								}
								HX_STACK_LINE(482)
								if ((tmp24)){
									HX_STACK_LINE(484)
									bool tmp25 = (i == stick->x);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(484)
									if ((tmp25)){
										HX_STACK_LINE(484)
										digitalButton = stick->rawLeft;
									}
									else{
										HX_STACK_LINE(485)
										bool tmp26 = (i == stick->y);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(485)
										if ((tmp26)){
											HX_STACK_LINE(485)
											digitalButton = stick->rawUp;
										}
									}
									HX_STACK_LINE(486)
									int tmp26 = device;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(486)
									int tmp27 = digitalButton;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(486)
									this->handleButtonUp(tmp26,tmp27);
								}
							}
							HX_STACK_LINE(490)
							bool tmp23 = (newVal > pos);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(490)
							bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(490)
							if ((tmp23)){
								HX_STACK_LINE(490)
								tmp24 = (oldVal <= pos);
							}
							else{
								HX_STACK_LINE(490)
								tmp24 = false;
							}
							HX_STACK_LINE(490)
							if ((tmp24)){
								HX_STACK_LINE(492)
								bool tmp25 = (i == stick->x);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(492)
								if ((tmp25)){
									HX_STACK_LINE(492)
									digitalButton = stick->rawRight;
								}
								else{
									HX_STACK_LINE(493)
									bool tmp26 = (i == stick->y);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(493)
									if ((tmp26)){
										HX_STACK_LINE(493)
										digitalButton = stick->rawDown;
									}
								}
								HX_STACK_LINE(494)
								int tmp26 = device;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(494)
								int tmp27 = digitalButton;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(494)
								this->handleButtonDown(tmp26,tmp27);
							}
							else{
								HX_STACK_LINE(496)
								bool tmp25 = (newVal <= pos);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(496)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(496)
								if ((tmp25)){
									HX_STACK_LINE(496)
									tmp26 = (oldVal > pos);
								}
								else{
									HX_STACK_LINE(496)
									tmp26 = false;
								}
								HX_STACK_LINE(496)
								if ((tmp26)){
									HX_STACK_LINE(498)
									bool tmp27 = (i == stick->x);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(498)
									if ((tmp27)){
										HX_STACK_LINE(498)
										digitalButton = stick->rawRight;
									}
									else{
										HX_STACK_LINE(499)
										bool tmp28 = (i == stick->y);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(499)
										if ((tmp28)){
											HX_STACK_LINE(499)
											digitalButton = stick->rawDown;
										}
									}
									HX_STACK_LINE(500)
									int tmp28 = device;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(500)
									int tmp29 = digitalButton;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(500)
									this->handleButtonUp(tmp28,tmp29);
								}
							}
							HX_STACK_LINE(503)
							bool tmp25 = (stick->mode == ::flixel::input::gamepad::FlxAnalogToDigitalMode_obj::ONLY_DIGITAL);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(503)
							if ((tmp25)){
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(511)
		gamepad->axis = newAxis;
		HX_STACK_LINE(512)
		gamepad->axisActive = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleAxisMove,(void))

Void FlxGamepadManager_obj::copyToPointWithDeadzone( ::flixel::input::gamepad::FlxGamepad gamepad,::flixel::math::FlxPoint point,::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","copyToPointWithDeadzone",0xd4338883,"flixel.input.gamepad.FlxGamepadManager.copyToPointWithDeadzone","flixel/input/gamepad/FlxGamepadManager.hx",516,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(517)
		Float tmp = event->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(517)
		Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(517)
		Float tmp2 = gamepad->get_deadZone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(517)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(517)
		if ((tmp3)){
			HX_STACK_LINE(517)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(517)
			tmp4 = event->x;
		}
		HX_STACK_LINE(517)
		point->set_x(tmp4);
		HX_STACK_LINE(518)
		Float tmp5 = event->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		Float tmp6 = ::Math_obj::abs(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(518)
		Float tmp7 = gamepad->get_deadZone();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(518)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(518)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(518)
		if ((tmp8)){
			HX_STACK_LINE(518)
			tmp9 = (int)0;
		}
		else{
			HX_STACK_LINE(518)
			tmp9 = event->y;
		}
		HX_STACK_LINE(518)
		point->set_y(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxGamepadManager_obj,copyToPointWithDeadzone,(void))

Void FlxGamepadManager_obj::handleBallMove( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleBallMove",0x63851e4b,"flixel.input.gamepad.FlxGamepadManager.handleBallMove","flixel/input/gamepad/FlxGamepadManager.hx",522,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(523)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(523)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(524)
		::flixel::input::gamepad::FlxGamepad tmp2 = gamepad;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(524)
		::flixel::math::FlxPoint tmp3 = gamepad->ball;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(524)
		::openfl::_legacy::events::JoystickEvent tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(524)
		this->copyToPointWithDeadzone(tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleBallMove,(void))

Void FlxGamepadManager_obj::handleHatMove( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleHatMove",0x5f7942d1,"flixel.input.gamepad.FlxGamepadManager.handleHatMove","flixel/input/gamepad/FlxGamepadManager.hx",528,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(529)
		int device = event->device;		HX_STACK_VAR(device,"device");
		HX_STACK_LINE(530)
		int tmp = device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(530)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->createByID(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(530)
		::flixel::input::gamepad::FlxGamepad gamepad = tmp1;		HX_STACK_VAR(gamepad,"gamepad");
		HX_STACK_LINE(532)
		Float tmp2 = gamepad->hat->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(532)
		Float oldX = tmp2;		HX_STACK_VAR(oldX,"oldX");
		HX_STACK_LINE(533)
		Float tmp3 = gamepad->hat->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		Float oldY = tmp3;		HX_STACK_VAR(oldY,"oldY");
		HX_STACK_LINE(535)
		::flixel::input::gamepad::FlxGamepad tmp4 = gamepad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint tmp5 = gamepad->hat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		::openfl::_legacy::events::JoystickEvent tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(535)
		this->copyToPointWithDeadzone(tmp4,tmp5,tmp6);
		HX_STACK_LINE(537)
		int tmp7 = device;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		Float tmp8 = oldX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(537)
		Float tmp9 = gamepad->hat->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(537)
		this->checkDpadAxisChange(tmp7,tmp8,tmp9,(int)13,(int)14);
		HX_STACK_LINE(539)
		int tmp10 = device;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(539)
		Float tmp11 = oldY;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(539)
		Float tmp12 = gamepad->hat->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(539)
		this->checkDpadAxisChange(tmp10,tmp11,tmp12,(int)11,(int)12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleHatMove,(void))

Void FlxGamepadManager_obj::checkDpadAxisChange( int device,Float oldValue,Float newValue,int negativeID,int positiveID){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","checkDpadAxisChange",0x1e10a175,"flixel.input.gamepad.FlxGamepadManager.checkDpadAxisChange","flixel/input/gamepad/FlxGamepadManager.hx",545,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(device,"device")
		HX_STACK_ARG(oldValue,"oldValue")
		HX_STACK_ARG(newValue,"newValue")
		HX_STACK_ARG(negativeID,"negativeID")
		HX_STACK_ARG(positiveID,"positiveID")
		HX_STACK_LINE(546)
		bool tmp = (oldValue == newValue);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(546)
		if ((tmp)){
			HX_STACK_LINE(547)
			return null();
		}
		HX_STACK_LINE(549)
		int tmp1 = device;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		::flixel::input::gamepad::FlxGamepad tmp2 = this->createByID(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		int tmp3 = negativeID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		int tmp4 = tmp2->mapping->getRawID(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		int rawNegativeID = tmp4;		HX_STACK_VAR(rawNegativeID,"rawNegativeID");
		HX_STACK_LINE(550)
		int tmp5 = device;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(550)
		::flixel::input::gamepad::FlxGamepad tmp6 = this->createByID(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(550)
		int tmp7 = positiveID;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(550)
		int tmp8 = tmp6->mapping->getRawID(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(550)
		int rawPositiveID = tmp8;		HX_STACK_VAR(rawPositiveID,"rawPositiveID");
		HX_STACK_LINE(552)
		bool tmp9 = (oldValue == (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(552)
		if ((tmp9)){
			HX_STACK_LINE(553)
			int tmp10 = device;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(553)
			int tmp11 = rawNegativeID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(553)
			this->handleButtonUp(tmp10,tmp11);
		}
		else{
			HX_STACK_LINE(554)
			bool tmp10 = (oldValue == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(554)
			if ((tmp10)){
				HX_STACK_LINE(555)
				int tmp11 = device;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(555)
				int tmp12 = rawPositiveID;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(555)
				this->handleButtonUp(tmp11,tmp12);
			}
		}
		HX_STACK_LINE(557)
		bool tmp10 = (newValue == (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(557)
		if ((tmp10)){
			HX_STACK_LINE(558)
			int tmp11 = device;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(558)
			int tmp12 = rawNegativeID;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(558)
			this->handleButtonDown(tmp11,tmp12);
		}
		else{
			HX_STACK_LINE(559)
			bool tmp11 = (newValue == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(559)
			if ((tmp11)){
				HX_STACK_LINE(560)
				int tmp12 = device;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(560)
				int tmp13 = rawPositiveID;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(560)
				this->handleButtonDown(tmp12,tmp13);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxGamepadManager_obj,checkDpadAxisChange,(void))

Void FlxGamepadManager_obj::handleDeviceAdded( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleDeviceAdded",0x86fef98f,"flixel.input.gamepad.FlxGamepadManager.handleDeviceAdded","flixel/input/gamepad/FlxGamepadManager.hx",564,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(565)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		Float tmp1 = event->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		::flixel::input::gamepad::FlxGamepadModel tmp2 = this->getModelFromJoystick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		this->createByID(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleDeviceAdded,(void))

Void FlxGamepadManager_obj::handleDeviceRemoved( ::openfl::_legacy::events::JoystickEvent event){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","handleDeviceRemoved",0xde69562f,"flixel.input.gamepad.FlxGamepadManager.handleDeviceRemoved","flixel/input/gamepad/FlxGamepadManager.hx",569,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(570)
		int tmp = event->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(570)
		this->removeByID(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,handleDeviceRemoved,(void))

Void FlxGamepadManager_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","update",0x32fe94dc,"flixel.input.gamepad.FlxGamepadManager.update","flixel/input/gamepad/FlxGamepadManager.hx",579,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(579)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(579)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(579)
		while((true)){
			HX_STACK_LINE(579)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(579)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(579)
			if ((tmp1)){
				HX_STACK_LINE(579)
				break;
			}
			HX_STACK_LINE(579)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(579)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(579)
			++(_g);
			HX_STACK_LINE(580)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(580)
			if ((tmp3)){
				HX_STACK_LINE(581)
				gamepad->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

Void FlxGamepadManager_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocus",0x68bae806,"flixel.input.gamepad.FlxGamepadManager.onFocus","flixel/input/gamepad/FlxGamepadManager.hx",584,0xccfee0a6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

Void FlxGamepadManager_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","onFocusLost",0xeb47390a,"flixel.input.gamepad.FlxGamepadManager.onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",588,0xccfee0a6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(588)
		this->reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

int FlxGamepadManager_obj::get_numActiveGamepads( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadManager","get_numActiveGamepads",0x4cfd1ae2,"flixel.input.gamepad.FlxGamepadManager.get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",592,0xccfee0a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(593)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(594)
	{
		HX_STACK_LINE(594)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(594)
		Array< ::Dynamic > _g1 = this->_gamepads;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(594)
		while((true)){
			HX_STACK_LINE(594)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(594)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(594)
			if ((tmp1)){
				HX_STACK_LINE(594)
				break;
			}
			HX_STACK_LINE(594)
			::flixel::input::gamepad::FlxGamepad tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepad >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(594)
			::flixel::input::gamepad::FlxGamepad gamepad = tmp2;		HX_STACK_VAR(gamepad,"gamepad");
			HX_STACK_LINE(594)
			++(_g);
			HX_STACK_LINE(595)
			bool tmp3 = (gamepad != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(595)
			if ((tmp3)){
				HX_STACK_LINE(596)
				(count)++;
			}
		}
	}
	HX_STACK_LINE(597)
	int tmp = count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )


FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_MEMBER_NAME(_activeGamepads,"_activeGamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(numActiveGamepads,"numActiveGamepads");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
	HX_VISIT_MEMBER_NAME(_activeGamepads,"_activeGamepads");
}

Dynamic FlxGamepadManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return getByID_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return _gamepads; }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { return lastActive; }
		if (HX_FIELD_EQ(inName,"removeByID") ) { return removeByID_dyn(); }
		if (HX_FIELD_EQ(inName,"createByID") ) { return createByID_dyn(); }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { return firstActive; }
		if (HX_FIELD_EQ(inName,"anyHasState") ) { return anyHasState_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"anyMovedXAxis") ) { return anyMovedXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"anyMovedYAxis") ) { return anyMovedYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"handleHatMove") ) { return handleHatMove_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return globalDeadZone; }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUp") ) { return handleButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"handleAxisMove") ) { return handleAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"handleBallMove") ) { return handleBallMove_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { return _activeGamepads; }
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handleButtonDown") ) { return handleButtonDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { return inCallProp == hx::paccAlways ? get_numActiveGamepads() : numActiveGamepads; }
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return getActiveGamepads_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeviceAdded") ) { return handleDeviceAdded_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return getActiveGamepadIDs_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonUpEvent") ) { return handleButtonUpEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"checkDpadAxisChange") ) { return checkDpadAxisChange_dyn(); }
		if (HX_FIELD_EQ(inName,"handleDeviceRemoved") ) { return handleDeviceRemoved_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getModelFromJoystick") ) { return getModelFromJoystick_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return getFirstActiveGamepad_dyn(); }
		if (HX_FIELD_EQ(inName,"handleButtonDownEvent") ) { return handleButtonDownEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return get_numActiveGamepads_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return getFirstActiveGamepadID_dyn(); }
		if (HX_FIELD_EQ(inName,"copyToPointWithDeadzone") ) { return copyToPointWithDeadzone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { globalDeadZone=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { _activeGamepads=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { numActiveGamepads=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa"));
	outFields->push(HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1"));
	outFields->push(HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b"));
	outFields->push(HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4"));
	outFields->push(HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13"));
	outFields->push(HX_HCSTRING("_activeGamepads","\x37","\x29","\x57","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,firstActive),HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadManager_obj,lastActive),HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1")},
	{hx::fsInt,(int)offsetof(FlxGamepadManager_obj,numActiveGamepads),HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxGamepadManager_obj,globalDeadZone),HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_gamepads),HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepadManager_obj,_activeGamepads),HX_HCSTRING("_activeGamepads","\x37","\x29","\x57","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("firstActive","\x16","\x72","\xe8","\xfa"),
	HX_HCSTRING("lastActive","\xbc","\x24","\x21","\xe1"),
	HX_HCSTRING("numActiveGamepads","\x7e","\x81","\x36","\x4b"),
	HX_HCSTRING("globalDeadZone","\x73","\xc7","\x06","\xa4"),
	HX_HCSTRING("_gamepads","\x11","\xa4","\x34","\x13"),
	HX_HCSTRING("_activeGamepads","\x37","\x29","\x57","\x2d"),
	HX_HCSTRING("getByID","\x28","\xa9","\xa5","\x13"),
	HX_HCSTRING("removeByID","\xd6","\x33","\x42","\xbe"),
	HX_HCSTRING("createByID","\x8e","\xba","\xb0","\x53"),
	HX_HCSTRING("getActiveGamepadIDs","\x53","\xfc","\xe8","\xb1"),
	HX_HCSTRING("getActiveGamepads","\xce","\x8f","\x6a","\x56"),
	HX_HCSTRING("getFirstActiveGamepadID","\x7c","\xc1","\x52","\x55"),
	HX_HCSTRING("getFirstActiveGamepad","\x61","\x27","\x31","\xc9"),
	HX_HCSTRING("anyButton","\xfe","\xc9","\x3f","\x37"),
	HX_HCSTRING("anyInput","\x7e","\x21","\xd0","\x3c"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("anyHasState","\x63","\x43","\x76","\x12"),
	HX_HCSTRING("anyMovedXAxis","\x12","\xce","\xe1","\x7b"),
	HX_HCSTRING("anyMovedYAxis","\x93","\x62","\x48","\x0f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("getModelFromJoystick","\x19","\xbc","\x23","\xb9"),
	HX_HCSTRING("handleButtonDownEvent","\x3e","\x2d","\x73","\x9f"),
	HX_HCSTRING("handleButtonDown","\x3c","\x11","\x2b","\x7c"),
	HX_HCSTRING("handleButtonUpEvent","\x25","\x53","\xd4","\xf9"),
	HX_HCSTRING("handleButtonUp","\xb5","\xb4","\x09","\xaa"),
	HX_HCSTRING("handleAxisMove","\x1a","\xb8","\xcb","\xdd"),
	HX_HCSTRING("copyToPointWithDeadzone","\xb6","\x74","\xde","\xe8"),
	HX_HCSTRING("handleBallMove","\x78","\x84","\xd4","\x85"),
	HX_HCSTRING("handleHatMove","\x44","\x81","\x80","\xc3"),
	HX_HCSTRING("checkDpadAxisChange","\x28","\xb8","\x3e","\xa2"),
	HX_HCSTRING("handleDeviceAdded","\x82","\xed","\x91","\x09"),
	HX_HCSTRING("handleDeviceRemoved","\xe2","\x6c","\x97","\x62"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("get_numActiveGamepads","\x55","\x84","\xe4","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadManager_obj::__mClass;

void FlxGamepadManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepadManager","\x3b","\x35","\x83","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadManager_obj >;
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
} // end namespace input
} // end namespace gamepad
