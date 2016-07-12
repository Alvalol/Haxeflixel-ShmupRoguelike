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
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadDeadZoneMode
#include <flixel/input/gamepad/FlxGamepadDeadZoneMode.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList
#include <flixel/input/gamepad/lists/FlxGamepadMotionValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#include <flixel/input/gamepad/lists/FlxGamepadPointerValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_LogitechMapping
#include <flixel/input/gamepad/mappings/LogitechMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MFiMapping
#include <flixel/input/gamepad/mappings/MFiMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping
#include <flixel/input/gamepad/mappings/MayflashWiiRemoteMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_OUYAMapping
#include <flixel/input/gamepad/mappings/OUYAMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PS4Mapping
#include <flixel/input/gamepad/mappings/PS4Mapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PSVitaMapping
#include <flixel/input/gamepad/mappings/PSVitaMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#include <flixel/input/gamepad/mappings/WiiRemoteMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_XInputMapping
#include <flixel/input/gamepad/mappings/XInputMapping.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxVector
#include <flixel/math/FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxVector
#include <flixel/util/FlxPool_flixel_math_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepad_obj::__construct(int ID,::flixel::input::gamepad::FlxGamepadManager Manager,::flixel::input::gamepad::FlxGamepadModel Model,::flixel::input::gamepad::FlxGamepadAttachment Attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","new",0x48c92544,"flixel.input.gamepad.FlxGamepad.new","flixel/input/gamepad/FlxGamepad.hx",29,0xdb78a809)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(Manager,"Manager")
HX_STACK_ARG(Model,"Model")
HX_STACK_ARG(Attachment,"Attachment")
{
	HX_STACK_LINE(123)
	this->buttons = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(117)
	this->_deadZone = ((Float)0.15);
	HX_STACK_LINE(114)
	this->axisActive = false;
	struct _Function_1_1{
		inline static Array< Float > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",113,0xdb78a809)
			{
				HX_STACK_LINE(113)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(113)
				{
					HX_STACK_LINE(113)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(113)
					while((true)){
						HX_STACK_LINE(113)
						bool tmp = (_g1 < (int)6);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(113)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(113)
						if ((tmp1)){
							HX_STACK_LINE(113)
							break;
						}
						HX_STACK_LINE(113)
						int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(113)
						int i = tmp2;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(113)
						_g->push((int)0);
					}
				}
				HX_STACK_LINE(113)
				return _g;
			}
			return null();
		}
	};
	HX_STACK_LINE(113)
	this->axis = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",110,0xdb78a809)
			{
				HX_STACK_LINE(110)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(110)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(110)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(110)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(110)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(110)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(110)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(110)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(110)
				point->_inPool = false;
				HX_STACK_LINE(110)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(110)
	this->ball = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/input/gamepad/FlxGamepad.hx",109,0xdb78a809)
			{
				HX_STACK_LINE(109)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(109)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(109)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(109)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(109)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(109)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(109)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(109)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(109)
				point->_inPool = false;
				HX_STACK_LINE(109)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(109)
	this->hat = _Function_1_3::Block();
	HX_STACK_LINE(80)
	this->deadZoneMode = ::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::INDEPENDENT_AXES;
	HX_STACK_LINE(58)
	this->connected = true;
	HX_STACK_LINE(127)
	this->id = ID;
	HX_STACK_LINE(129)
	this->manager = Manager;
	HX_STACK_LINE(131)
	::flixel::input::gamepad::lists::FlxGamepadButtonList tmp = ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__new((int)1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	this->pressed = tmp;
	HX_STACK_LINE(132)
	::flixel::input::gamepad::lists::FlxGamepadButtonList tmp1 = ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__new((int)2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	this->justPressed = tmp1;
	HX_STACK_LINE(133)
	::flixel::input::gamepad::lists::FlxGamepadButtonList tmp2 = ::flixel::input::gamepad::lists::FlxGamepadButtonList_obj::__new((int)-1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	this->justReleased = tmp2;
	HX_STACK_LINE(134)
	::flixel::input::gamepad::lists::FlxGamepadAnalogList tmp3 = ::flixel::input::gamepad::lists::FlxGamepadAnalogList_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	this->analog = tmp3;
	HX_STACK_LINE(135)
	::flixel::input::gamepad::lists::FlxGamepadMotionValueList tmp4 = ::flixel::input::gamepad::lists::FlxGamepadMotionValueList_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	this->motion = tmp4;
	HX_STACK_LINE(136)
	::flixel::input::gamepad::lists::FlxGamepadPointerValueList tmp5 = ::flixel::input::gamepad::lists::FlxGamepadPointerValueList_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	this->pointer = tmp5;
	HX_STACK_LINE(138)
	bool tmp6 = (Model == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(138)
	if ((tmp6)){
		HX_STACK_LINE(139)
		Model = ::flixel::input::gamepad::FlxGamepadModel_obj::XINPUT;
	}
	HX_STACK_LINE(141)
	bool tmp7 = (Attachment == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(141)
	if ((tmp7)){
		HX_STACK_LINE(142)
		Attachment = ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE;
	}
	HX_STACK_LINE(144)
	::flixel::input::gamepad::FlxGamepadModel tmp8 = Model;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(144)
	this->set_model(tmp8);
	HX_STACK_LINE(145)
	this->detectedModel = Model;
}
;
	return null();
}

//FlxGamepad_obj::~FlxGamepad_obj() { }

Dynamic FlxGamepad_obj::__CreateEmpty() { return  new FlxGamepad_obj; }
hx::ObjectPtr< FlxGamepad_obj > FlxGamepad_obj::__new(int ID,::flixel::input::gamepad::FlxGamepadManager Manager,::flixel::input::gamepad::FlxGamepadModel Model,::flixel::input::gamepad::FlxGamepadAttachment Attachment)
{  hx::ObjectPtr< FlxGamepad_obj > _result_ = new FlxGamepad_obj();
	_result_->__construct(ID,Manager,Model,Attachment);
	return _result_;}

Dynamic FlxGamepad_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepad_obj > _result_ = new FlxGamepad_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxGamepad_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxGamepad_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxGamepad_obj >(this); }
::flixel::input::gamepad::FlxGamepadButton FlxGamepad_obj::getButton( int RawID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getButton",0xf881030c,"flixel.input.gamepad.FlxGamepad.getButton","flixel/input/gamepad/FlxGamepad.hx",149,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawID,"RawID")
	HX_STACK_LINE(150)
	bool tmp = (RawID == (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	if ((tmp)){
		HX_STACK_LINE(151)
		return null();
	}
	HX_STACK_LINE(152)
	::flixel::input::gamepad::FlxGamepadButton tmp1 = this->buttons->__get(RawID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	::flixel::input::gamepad::FlxGamepadButton gamepadButton = tmp1;		HX_STACK_VAR(gamepadButton,"gamepadButton");
	HX_STACK_LINE(154)
	bool tmp2 = (gamepadButton == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	if ((tmp2)){
		HX_STACK_LINE(156)
		::flixel::input::gamepad::FlxGamepadButton tmp3 = ::flixel::input::gamepad::FlxGamepadButton_obj::__new(RawID);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		gamepadButton = tmp3;
		HX_STACK_LINE(157)
		::flixel::input::gamepad::FlxGamepadButton tmp4 = gamepadButton;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		this->buttons[RawID] = tmp4;
	}
	HX_STACK_LINE(160)
	::flixel::input::gamepad::FlxGamepadButton tmp3 = gamepadButton;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getButton,return )

Float FlxGamepad_obj::applyAxisFlip( Float axisValue,int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","applyAxisFlip",0xd984f960,"flixel.input.gamepad.FlxGamepad.applyAxisFlip","flixel/input/gamepad/FlxGamepad.hx",164,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisValue,"axisValue")
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(165)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	int tmp1 = axisID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	bool tmp2 = tmp->isAxisFlipped(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	if ((tmp2)){
		HX_STACK_LINE(166)
		hx::MultEq(axisValue,(int)-1);
	}
	HX_STACK_LINE(167)
	Float tmp3 = axisValue;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(167)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,applyAxisFlip,return )

Void FlxGamepad_obj::update( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","update",0x525157a5,"flixel.input.gamepad.FlxGamepad.update","flixel/input/gamepad/FlxGamepad.hx",174,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			int tmp = this->axis->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(201)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(201)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				if ((tmp2)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(201)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(204)
				::flixel::input::gamepad::mappings::FlxGamepadMapping tmp4 = this->mapping;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(204)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(204)
				int tmp6 = tmp4->axisIndexToRawID(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(204)
				::flixel::input::gamepad::FlxGamepadButton tmp7 = this->getButton(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				::flixel::input::gamepad::FlxGamepadButton button = tmp7;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(205)
				bool tmp8 = (button != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(205)
				if ((tmp8)){
					HX_STACK_LINE(208)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(208)
					{
						HX_STACK_LINE(208)
						Float tmp10 = this->axis->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(208)
						Float tmp11 = ::Math_obj::abs(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(208)
						Float axisValue = tmp11;		HX_STACK_VAR(axisValue,"axisValue");
						HX_STACK_LINE(208)
						::flixel::input::gamepad::mappings::FlxGamepadMapping tmp12 = this->mapping;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(208)
						int tmp13 = i;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(208)
						bool tmp14 = tmp12->isAxisFlipped(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(208)
						if ((tmp14)){
							HX_STACK_LINE(208)
							hx::MultEq(axisValue,(int)-1);
						}
						HX_STACK_LINE(208)
						tmp9 = axisValue;
					}
					HX_STACK_LINE(208)
					Float value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(209)
					Float tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(209)
					Float tmp11 = this->get_deadZone();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					if ((tmp12)){
						HX_STACK_LINE(211)
						button->press();
					}
					else{
						HX_STACK_LINE(213)
						Float tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(213)
						Float tmp14 = this->get_deadZone();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(213)
						bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(213)
						if ((tmp15)){
							HX_STACK_LINE(215)
							button->release();
						}
					}
				}
				HX_STACK_LINE(219)
				this->axisActive = false;
			}
		}
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(223)
			while((true)){
				HX_STACK_LINE(223)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(223)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(223)
				if ((tmp1)){
					HX_STACK_LINE(223)
					break;
				}
				HX_STACK_LINE(223)
				::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(223)
				::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(223)
				++(_g);
				HX_STACK_LINE(225)
				bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(225)
				if ((tmp3)){
					HX_STACK_LINE(227)
					button->update();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,update,(void))

Void FlxGamepad_obj::reset( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","reset",0x36e79fb3,"flixel.input.gamepad.FlxGamepad.reset","flixel/input/gamepad/FlxGamepad.hx",233,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		{
			HX_STACK_LINE(234)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(234)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(234)
			while((true)){
				HX_STACK_LINE(234)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(234)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(234)
				if ((tmp1)){
					HX_STACK_LINE(234)
					break;
				}
				HX_STACK_LINE(234)
				::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(234)
				::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(234)
				++(_g);
				HX_STACK_LINE(236)
				bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(236)
				if ((tmp3)){
					HX_STACK_LINE(238)
					button->reset();
				}
			}
		}
		HX_STACK_LINE(242)
		int tmp = this->axis->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		int numAxis = tmp;		HX_STACK_VAR(numAxis,"numAxis");
		HX_STACK_LINE(244)
		{
			HX_STACK_LINE(244)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				bool tmp1 = (_g < numAxis);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(244)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(244)
				if ((tmp2)){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(244)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(244)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(246)
				this->axis[i] = (int)0;
			}
		}
		HX_STACK_LINE(250)
		::flixel::math::FlxPoint tmp1 = this->hat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		tmp1->set(null(),null());
		HX_STACK_LINE(251)
		::flixel::math::FlxPoint tmp2 = this->ball;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		tmp2->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,reset,(void))

Void FlxGamepad_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","destroy",0x3b91c3de,"flixel.input.gamepad.FlxGamepad.destroy","flixel/input/gamepad/FlxGamepad.hx",256,0xdb78a809)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		this->connected = false;
		HX_STACK_LINE(259)
		this->buttons = null();
		HX_STACK_LINE(260)
		this->axis = null();
		HX_STACK_LINE(261)
		this->manager = null();
		HX_STACK_LINE(264)
		::flixel::math::FlxPoint tmp = this->hat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		this->hat = tmp1;
		HX_STACK_LINE(265)
		::flixel::math::FlxPoint tmp2 = this->ball;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(265)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(265)
		this->ball = tmp3;
		HX_STACK_LINE(267)
		this->hat = null();
		HX_STACK_LINE(268)
		this->ball = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,destroy,(void))

bool FlxGamepad_obj::checkStatus( int ID,int Status){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","checkStatus",0x42f892fe,"flixel.input.gamepad.FlxGamepad.checkStatus","flixel/input/gamepad/FlxGamepad.hx",280,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(281)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	int tmp1 = ID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	int tmp2 = tmp->getRawID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	int tmp3 = Status;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	bool tmp4 = this->checkStatusRaw(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(281)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatus,return )

bool FlxGamepad_obj::checkStatusRaw( int RawID,int Status){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","checkStatusRaw",0x11516d8a,"flixel.input.gamepad.FlxGamepad.checkStatusRaw","flixel/input/gamepad/FlxGamepad.hx",292,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawID,"RawID")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(293)
	::flixel::input::gamepad::FlxGamepadButton tmp = this->buttons->__get(RawID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	if ((tmp1)){
		HX_STACK_LINE(295)
		::flixel::input::gamepad::FlxGamepadButton tmp2 = this->buttons->__get(RawID).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		int tmp3 = tmp2->current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(295)
		int tmp4 = Status;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(295)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(295)
		return tmp5;
	}
	HX_STACK_LINE(297)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,checkStatusRaw,return )

bool FlxGamepad_obj::anyPressed( Array< int > IDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyPressed",0xee8d44b2,"flixel.input.gamepad.FlxGamepad.anyPressed","flixel/input/gamepad/FlxGamepad.hx",307,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDArray,"IDArray")
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(308)
		while((true)){
			HX_STACK_LINE(308)
			bool tmp = (_g < IDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(308)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(308)
			if ((tmp1)){
				HX_STACK_LINE(308)
				break;
			}
			HX_STACK_LINE(308)
			int tmp2 = IDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(308)
			int id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(308)
			++(_g);
			HX_STACK_LINE(310)
			::flixel::input::gamepad::mappings::FlxGamepadMapping tmp3 = this->mapping;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(310)
			int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(310)
			int tmp5 = tmp3->getRawID(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(310)
			int raw = tmp5;		HX_STACK_VAR(raw,"raw");
			HX_STACK_LINE(311)
			::flixel::input::gamepad::FlxGamepadButton tmp6 = this->buttons->__get(raw).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			if ((tmp7)){
				HX_STACK_LINE(313)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(313)
				{
					HX_STACK_LINE(313)
					::flixel::input::gamepad::FlxGamepadButton tmp9 = this->buttons->__get(raw).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(313)
					::flixel::input::gamepad::FlxGamepadButton _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(313)
					bool tmp10 = (_this->current == (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(313)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(313)
					if ((tmp11)){
						HX_STACK_LINE(313)
						tmp8 = (_this->current == (int)2);
					}
					else{
						HX_STACK_LINE(313)
						tmp8 = true;
					}
				}
				HX_STACK_LINE(313)
				if ((tmp8)){
					HX_STACK_LINE(315)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(319)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressed,return )

bool FlxGamepad_obj::anyPressedRaw( Array< int > RawIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyPressedRaw",0x4ffbc456,"flixel.input.gamepad.FlxGamepad.anyPressedRaw","flixel/input/gamepad/FlxGamepad.hx",329,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawIDArray,"RawIDArray")
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		while((true)){
			HX_STACK_LINE(330)
			bool tmp = (_g < RawIDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(330)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			if ((tmp1)){
				HX_STACK_LINE(330)
				break;
			}
			HX_STACK_LINE(330)
			int tmp2 = RawIDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(330)
			++(_g);
			HX_STACK_LINE(332)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(332)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(332)
			if ((tmp4)){
				HX_STACK_LINE(334)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(334)
				{
					HX_STACK_LINE(334)
					::flixel::input::gamepad::FlxGamepadButton tmp6 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(334)
					::flixel::input::gamepad::FlxGamepadButton _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(334)
					bool tmp7 = (_this->current == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(334)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(334)
					if ((tmp8)){
						HX_STACK_LINE(334)
						tmp5 = (_this->current == (int)2);
					}
					else{
						HX_STACK_LINE(334)
						tmp5 = true;
					}
				}
				HX_STACK_LINE(334)
				if ((tmp5)){
					HX_STACK_LINE(335)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(339)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyPressedRaw,return )

bool FlxGamepad_obj::anyJustPressed( Array< int > IDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustPressed",0xd6d7c7e6,"flixel.input.gamepad.FlxGamepad.anyJustPressed","flixel/input/gamepad/FlxGamepad.hx",349,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDArray,"IDArray")
	HX_STACK_LINE(350)
	{
		HX_STACK_LINE(350)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		while((true)){
			HX_STACK_LINE(350)
			bool tmp = (_g < IDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(350)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(350)
			if ((tmp1)){
				HX_STACK_LINE(350)
				break;
			}
			HX_STACK_LINE(350)
			int tmp2 = IDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(350)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(350)
			++(_g);
			HX_STACK_LINE(352)
			::flixel::input::gamepad::mappings::FlxGamepadMapping tmp3 = this->mapping;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(352)
			int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(352)
			int tmp5 = tmp3->getRawID(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			int raw = tmp5;		HX_STACK_VAR(raw,"raw");
			HX_STACK_LINE(353)
			::flixel::input::gamepad::FlxGamepadButton tmp6 = this->buttons->__get(raw).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(353)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(353)
			if ((tmp7)){
				HX_STACK_LINE(355)
				::flixel::input::gamepad::FlxGamepadButton tmp8 = this->buttons->__get(raw).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(355)
				int tmp9 = tmp8->current;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(355)
				bool tmp10 = (tmp9 == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(355)
				if ((tmp10)){
					HX_STACK_LINE(356)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(360)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressed,return )

bool FlxGamepad_obj::anyJustPressedRaw( Array< int > RawIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustPressedRaw",0xeb4439a2,"flixel.input.gamepad.FlxGamepad.anyJustPressedRaw","flixel/input/gamepad/FlxGamepad.hx",370,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawIDArray,"RawIDArray")
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(371)
		while((true)){
			HX_STACK_LINE(371)
			bool tmp = (_g < RawIDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(371)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(371)
			if ((tmp1)){
				HX_STACK_LINE(371)
				break;
			}
			HX_STACK_LINE(371)
			int tmp2 = RawIDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(371)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(371)
			++(_g);
			HX_STACK_LINE(373)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(373)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(373)
			if ((tmp4)){
				HX_STACK_LINE(375)
				::flixel::input::gamepad::FlxGamepadButton tmp5 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(375)
				int tmp6 = tmp5->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(375)
				bool tmp7 = (tmp6 == (int)2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(375)
				if ((tmp7)){
					HX_STACK_LINE(376)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(380)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustPressedRaw,return )

bool FlxGamepad_obj::anyJustReleased( Array< int > IDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustReleased",0x2ccd2ef9,"flixel.input.gamepad.FlxGamepad.anyJustReleased","flixel/input/gamepad/FlxGamepad.hx",390,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(IDArray,"IDArray")
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			bool tmp = (_g < IDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(391)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(391)
			if ((tmp1)){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			int tmp2 = IDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(391)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(391)
			++(_g);
			HX_STACK_LINE(393)
			::flixel::input::gamepad::mappings::FlxGamepadMapping tmp3 = this->mapping;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(393)
			int tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(393)
			int tmp5 = tmp3->getRawID(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(393)
			int raw = tmp5;		HX_STACK_VAR(raw,"raw");
			HX_STACK_LINE(394)
			::flixel::input::gamepad::FlxGamepadButton tmp6 = this->buttons->__get(raw).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(394)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(394)
			if ((tmp7)){
				HX_STACK_LINE(396)
				::flixel::input::gamepad::FlxGamepadButton tmp8 = this->buttons->__get(raw).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(396)
				int tmp9 = tmp8->current;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(396)
				bool tmp10 = (tmp9 == (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(396)
				if ((tmp10)){
					HX_STACK_LINE(397)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(401)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleased,return )

bool FlxGamepad_obj::anyJustReleasedRaw( Array< int > RawIDArray){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyJustReleasedRaw",0x1df8406f,"flixel.input.gamepad.FlxGamepad.anyJustReleasedRaw","flixel/input/gamepad/FlxGamepad.hx",411,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawIDArray,"RawIDArray")
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		while((true)){
			HX_STACK_LINE(412)
			bool tmp = (_g < RawIDArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(412)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(412)
			if ((tmp1)){
				HX_STACK_LINE(412)
				break;
			}
			HX_STACK_LINE(412)
			int tmp2 = RawIDArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(412)
			int b = tmp2;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(412)
			++(_g);
			HX_STACK_LINE(414)
			::flixel::input::gamepad::FlxGamepadButton tmp3 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			if ((tmp4)){
				HX_STACK_LINE(416)
				::flixel::input::gamepad::FlxGamepadButton tmp5 = this->buttons->__get(b).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(416)
				int tmp6 = tmp5->current;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(416)
				bool tmp7 = (tmp6 == (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(416)
				if ((tmp7)){
					HX_STACK_LINE(417)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(421)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyJustReleasedRaw,return )

int FlxGamepad_obj::firstPressedID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstPressedID",0xeb182e49,"flixel.input.gamepad.FlxGamepad.firstPressedID","flixel/input/gamepad/FlxGamepad.hx",429,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(430)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	int tmp1 = this->firstPressedRawID();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	int tmp2 = tmp->getID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(430)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedID,return )

int FlxGamepad_obj::firstPressedRawID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstPressedRawID",0xee1a19f5,"flixel.input.gamepad.FlxGamepad.firstPressedRawID","flixel/input/gamepad/FlxGamepad.hx",438,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(439)
	{
		HX_STACK_LINE(439)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(439)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(439)
		while((true)){
			HX_STACK_LINE(439)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(439)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(439)
			if ((tmp1)){
				HX_STACK_LINE(439)
				break;
			}
			HX_STACK_LINE(439)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(439)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(439)
			++(_g);
			HX_STACK_LINE(441)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(441)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(441)
			if ((tmp3)){
				HX_STACK_LINE(441)
				bool tmp5 = (button->current == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(441)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(441)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(441)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(441)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(441)
				if ((tmp10)){
					HX_STACK_LINE(441)
					tmp4 = (button->current == (int)-1);
				}
				else{
					HX_STACK_LINE(441)
					tmp4 = true;
				}
			}
			else{
				HX_STACK_LINE(441)
				tmp4 = false;
			}
			HX_STACK_LINE(441)
			if ((tmp4)){
				HX_STACK_LINE(443)
				int tmp5 = button->ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(443)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(446)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstPressedRawID,return )

int FlxGamepad_obj::firstJustPressedID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustPressedID",0x153c347d,"flixel.input.gamepad.FlxGamepad.firstJustPressedID","flixel/input/gamepad/FlxGamepad.hx",454,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(455)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	int tmp1 = this->firstJustPressedRawID();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(455)
	int tmp2 = tmp->getID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(455)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedID,return )

int FlxGamepad_obj::firstJustPressedRawID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustPressedRawID",0xcc1cec41,"flixel.input.gamepad.FlxGamepad.firstJustPressedRawID","flixel/input/gamepad/FlxGamepad.hx",463,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(464)
	{
		HX_STACK_LINE(464)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(464)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(464)
		while((true)){
			HX_STACK_LINE(464)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(464)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(464)
			if ((tmp1)){
				HX_STACK_LINE(464)
				break;
			}
			HX_STACK_LINE(464)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(464)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(464)
			++(_g);
			HX_STACK_LINE(466)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(466)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(466)
			if ((tmp3)){
				HX_STACK_LINE(466)
				tmp4 = (button->current == (int)2);
			}
			else{
				HX_STACK_LINE(466)
				tmp4 = false;
			}
			HX_STACK_LINE(466)
			if ((tmp4)){
				HX_STACK_LINE(468)
				int tmp5 = button->ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(468)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(471)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustPressedRawID,return )

int FlxGamepad_obj::firstJustReleasedID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustReleasedID",0x71e64c58,"flixel.input.gamepad.FlxGamepad.firstJustReleasedID","flixel/input/gamepad/FlxGamepad.hx",479,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	int tmp1 = this->firstJustReleasedRawID();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	int tmp2 = tmp->getID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedID,return )

int FlxGamepad_obj::firstJustReleasedRawID( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","firstJustReleasedRawID",0xfa5cef46,"flixel.input.gamepad.FlxGamepad.firstJustReleasedRawID","flixel/input/gamepad/FlxGamepad.hx",488,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	{
		HX_STACK_LINE(489)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(489)
		Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(489)
		while((true)){
			HX_STACK_LINE(489)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(489)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(489)
			if ((tmp1)){
				HX_STACK_LINE(489)
				break;
			}
			HX_STACK_LINE(489)
			::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(489)
			::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
			HX_STACK_LINE(489)
			++(_g);
			HX_STACK_LINE(491)
			bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(491)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(491)
			if ((tmp3)){
				HX_STACK_LINE(491)
				tmp4 = (button->current == (int)-1);
			}
			else{
				HX_STACK_LINE(491)
				tmp4 = false;
			}
			HX_STACK_LINE(491)
			if ((tmp4)){
				HX_STACK_LINE(493)
				int tmp5 = button->ID;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(493)
				return tmp5;
			}
		}
	}
	HX_STACK_LINE(496)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,firstJustReleasedRawID,return )

Float FlxGamepad_obj::getAxis( int AxisButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxis",0x2a07633b,"flixel.input.gamepad.FlxGamepad.getAxis","flixel/input/gamepad/FlxGamepad.hx",505,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisButtonID,"AxisButtonID")
	HX_STACK_LINE(509)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	int tmp1 = AxisButtonID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	int tmp2 = tmp->checkForFakeAxis(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	int fakeAxisRawID = tmp2;		HX_STACK_VAR(fakeAxisRawID,"fakeAxisRawID");
	HX_STACK_LINE(510)
	bool tmp3 = (fakeAxisRawID == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	if ((tmp3)){
		HX_STACK_LINE(513)
		::flixel::input::gamepad::mappings::FlxGamepadMapping tmp4 = this->mapping;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(513)
		int tmp5 = AxisButtonID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(513)
		int tmp6 = tmp4->getRawID(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(513)
		int rawID = tmp6;		HX_STACK_VAR(rawID,"rawID");
		HX_STACK_LINE(514)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(514)
		{
			HX_STACK_LINE(514)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				int tmp9 = rawID;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(514)
				Float tmp10 = this->getAxisValue(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(514)
				Float axisValue = tmp10;		HX_STACK_VAR(axisValue,"axisValue");
				HX_STACK_LINE(514)
				Float tmp11 = axisValue;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(514)
				Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(514)
				Float tmp13 = this->get_deadZone();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(514)
				if ((tmp14)){
					HX_STACK_LINE(514)
					tmp8 = axisValue;
				}
				else{
					HX_STACK_LINE(514)
					tmp8 = (int)0;
				}
			}
			HX_STACK_LINE(514)
			Float axisValue = tmp8;		HX_STACK_VAR(axisValue,"axisValue");
			HX_STACK_LINE(514)
			::flixel::input::gamepad::mappings::FlxGamepadMapping tmp9 = this->mapping;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			int tmp10 = AxisButtonID;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			bool tmp11 = tmp9->isAxisFlipped(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(514)
			if ((tmp11)){
				HX_STACK_LINE(514)
				hx::MultEq(axisValue,(int)-1);
			}
			HX_STACK_LINE(514)
			tmp7 = axisValue;
		}
		HX_STACK_LINE(514)
		return tmp7;
	}
	else{
		HX_STACK_LINE(519)
		int tmp4 = fakeAxisRawID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(519)
		::flixel::input::gamepad::FlxGamepadButton tmp5 = this->getButton(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(519)
		::flixel::input::gamepad::FlxGamepadButton btn = tmp5;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(520)
		bool tmp6 = (btn == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(520)
		if ((tmp6)){
			HX_STACK_LINE(521)
			return (int)0;
		}
		HX_STACK_LINE(522)
		bool tmp7 = (btn->current == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(522)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(522)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(522)
		if ((tmp8)){
			HX_STACK_LINE(522)
			tmp9 = (btn->current == (int)2);
		}
		else{
			HX_STACK_LINE(522)
			tmp9 = true;
		}
		HX_STACK_LINE(522)
		if ((tmp9)){
			HX_STACK_LINE(523)
			return (int)1;
		}
	}
	HX_STACK_LINE(525)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxis,return )

Float FlxGamepad_obj::getAxisRaw( int RawAxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxisRaw",0x2bb6a16d,"flixel.input.gamepad.FlxGamepad.getAxisRaw","flixel/input/gamepad/FlxGamepad.hx",535,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawAxisID,"RawAxisID")
	HX_STACK_LINE(536)
	int tmp = RawAxisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(536)
	Float tmp1 = this->getAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(536)
	Float axisValue = tmp1;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(537)
	Float tmp2 = axisValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(537)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(537)
	Float tmp4 = this->get_deadZone();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(537)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(537)
	if ((tmp5)){
		HX_STACK_LINE(539)
		Float tmp6 = axisValue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(539)
		return tmp6;
	}
	HX_STACK_LINE(541)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisRaw,return )

bool FlxGamepad_obj::isAxisForAnalogStick( int AxisIndex){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","isAxisForAnalogStick",0x770b861e,"flixel.input.gamepad.FlxGamepad.isAxisForAnalogStick","flixel/input/gamepad/FlxGamepad.hx",545,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisIndex,"AxisIndex")
	HX_STACK_LINE(546)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	::flixel::input::gamepad::FlxGamepadAnalogStick leftStick = tmp->leftStick;		HX_STACK_VAR(leftStick,"leftStick");
	HX_STACK_LINE(547)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp1 = this->mapping;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(547)
	::flixel::input::gamepad::FlxGamepadAnalogStick rightStick = tmp1->rightStick;		HX_STACK_VAR(rightStick,"rightStick");
	HX_STACK_LINE(549)
	bool tmp2 = (leftStick != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(549)
	if ((tmp2)){
		HX_STACK_LINE(551)
		bool tmp3 = (AxisIndex == leftStick->x);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(551)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(551)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(551)
		if ((tmp4)){
			HX_STACK_LINE(551)
			tmp5 = (AxisIndex == leftStick->y);
		}
		else{
			HX_STACK_LINE(551)
			tmp5 = true;
		}
		HX_STACK_LINE(551)
		if ((tmp5)){
			HX_STACK_LINE(552)
			return true;
		}
	}
	HX_STACK_LINE(554)
	bool tmp3 = (rightStick != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(554)
	if ((tmp3)){
		HX_STACK_LINE(556)
		bool tmp4 = (AxisIndex == rightStick->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(556)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(556)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(556)
		if ((tmp5)){
			HX_STACK_LINE(556)
			tmp6 = (AxisIndex == rightStick->y);
		}
		else{
			HX_STACK_LINE(556)
			tmp6 = true;
		}
		HX_STACK_LINE(556)
		if ((tmp6)){
			HX_STACK_LINE(557)
			return true;
		}
	}
	HX_STACK_LINE(559)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,isAxisForAnalogStick,return )

::flixel::input::gamepad::FlxGamepadAnalogStick FlxGamepad_obj::getAnalogStickByAxis( int AxisIndex){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAnalogStickByAxis",0xdbfed05e,"flixel.input.gamepad.FlxGamepad.getAnalogStickByAxis","flixel/input/gamepad/FlxGamepad.hx",563,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisIndex,"AxisIndex")
	HX_STACK_LINE(564)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	::flixel::input::gamepad::FlxGamepadAnalogStick leftStick = tmp->leftStick;		HX_STACK_VAR(leftStick,"leftStick");
	HX_STACK_LINE(565)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp1 = this->mapping;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(565)
	::flixel::input::gamepad::FlxGamepadAnalogStick rightStick = tmp1->rightStick;		HX_STACK_VAR(rightStick,"rightStick");
	HX_STACK_LINE(567)
	bool tmp2 = (leftStick != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(567)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(567)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(567)
	if ((tmp3)){
		HX_STACK_LINE(567)
		tmp4 = (AxisIndex == leftStick->x);
	}
	else{
		HX_STACK_LINE(567)
		tmp4 = false;
	}
	HX_STACK_LINE(567)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(567)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(567)
	if ((tmp5)){
		HX_STACK_LINE(567)
		tmp6 = (AxisIndex == leftStick->y);
	}
	else{
		HX_STACK_LINE(567)
		tmp6 = true;
	}
	HX_STACK_LINE(567)
	if ((tmp6)){
		HX_STACK_LINE(568)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp7 = leftStick;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(568)
		return tmp7;
	}
	HX_STACK_LINE(569)
	bool tmp7 = (rightStick != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(569)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(569)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(569)
	if ((tmp8)){
		HX_STACK_LINE(569)
		tmp9 = (AxisIndex == rightStick->x);
	}
	else{
		HX_STACK_LINE(569)
		tmp9 = false;
	}
	HX_STACK_LINE(569)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(569)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(569)
	if ((tmp10)){
		HX_STACK_LINE(569)
		tmp11 = (AxisIndex == rightStick->y);
	}
	else{
		HX_STACK_LINE(569)
		tmp11 = true;
	}
	HX_STACK_LINE(569)
	if ((tmp11)){
		HX_STACK_LINE(570)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp12 = rightStick;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(570)
		return tmp12;
	}
	HX_STACK_LINE(571)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogStickByAxis,return )

Float FlxGamepad_obj::getXAxis( int AxesButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getXAxis",0xb657655f,"flixel.input.gamepad.FlxGamepad.getXAxis","flixel/input/gamepad/FlxGamepad.hx",579,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxesButtonID,"AxesButtonID")
	HX_STACK_LINE(580)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	int tmp1 = AxesButtonID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(580)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp->getAnalogStick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	Float tmp3 = this->getAnalogXAxisValue(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(580)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxis,return )

Float FlxGamepad_obj::getXAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getXAxisRaw",0x9b9f8dc9,"flixel.input.gamepad.FlxGamepad.getXAxisRaw","flixel/input/gamepad/FlxGamepad.hx",587,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Stick,"Stick")
	HX_STACK_LINE(588)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp = Stick;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	Float tmp1 = this->getAnalogXAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(588)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getXAxisRaw,return )

Float FlxGamepad_obj::getYAxis( int AxesButtonID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getYAxis",0x49bdf9e0,"flixel.input.gamepad.FlxGamepad.getYAxis","flixel/input/gamepad/FlxGamepad.hx",596,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxesButtonID,"AxesButtonID")
	HX_STACK_LINE(597)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	int tmp1 = AxesButtonID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(597)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp->getAnalogStick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(597)
	Float tmp3 = this->getYAxisRaw(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(597)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxis,return )

Float FlxGamepad_obj::getYAxisRaw( ::flixel::input::gamepad::FlxGamepadAnalogStick Stick){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getYAxisRaw",0xd4d1ffe8,"flixel.input.gamepad.FlxGamepad.getYAxisRaw","flixel/input/gamepad/FlxGamepad.hx",605,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Stick,"Stick")
	HX_STACK_LINE(606)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp = Stick;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(606)
	Float tmp1 = this->getAnalogYAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(606)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getYAxisRaw,return )

bool FlxGamepad_obj::anyButton( hx::Null< int >  __o_state){
int state = __o_state.Default(1);
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyButton",0xd989e1e2,"flixel.input.gamepad.FlxGamepad.anyButton","flixel/input/gamepad/FlxGamepad.hx",613,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
{
		HX_STACK_LINE(614)
		{
			HX_STACK_LINE(614)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(614)
			Array< ::Dynamic > _g1 = this->buttons;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(614)
			while((true)){
				HX_STACK_LINE(614)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(614)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(614)
				if ((tmp1)){
					HX_STACK_LINE(614)
					break;
				}
				HX_STACK_LINE(614)
				::flixel::input::gamepad::FlxGamepadButton tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::gamepad::FlxGamepadButton >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(614)
				::flixel::input::gamepad::FlxGamepadButton button = tmp2;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(614)
				++(_g);
				HX_STACK_LINE(616)
				bool tmp3 = (button != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(616)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(616)
				if ((tmp3)){
					HX_STACK_LINE(616)
					int tmp5 = state;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(616)
					int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(616)
					tmp4 = button->hasState(tmp6);
				}
				else{
					HX_STACK_LINE(616)
					tmp4 = false;
				}
				HX_STACK_LINE(616)
				if ((tmp4)){
					HX_STACK_LINE(618)
					return true;
				}
			}
		}
		HX_STACK_LINE(621)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,anyButton,return )

bool FlxGamepad_obj::anyInput( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","anyInput",0x4fe8921a,"flixel.input.gamepad.FlxGamepad.anyInput","flixel/input/gamepad/FlxGamepad.hx",628,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(629)
	bool tmp = this->anyButton(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	if ((tmp)){
		HX_STACK_LINE(630)
		return true;
	}
	HX_STACK_LINE(632)
	int tmp1 = this->axis->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	int numAxis = tmp1;		HX_STACK_VAR(numAxis,"numAxis");
	HX_STACK_LINE(634)
	{
		HX_STACK_LINE(634)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(634)
		while((true)){
			HX_STACK_LINE(634)
			bool tmp2 = (_g < numAxis);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(634)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(634)
			if ((tmp3)){
				HX_STACK_LINE(634)
				break;
			}
			HX_STACK_LINE(634)
			int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(634)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(636)
			Float tmp5 = this->axis->__get((int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(636)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(636)
			if ((tmp6)){
				HX_STACK_LINE(638)
				return true;
			}
		}
	}
	HX_STACK_LINE(643)
	::flixel::math::FlxPoint tmp2 = this->ball;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(643)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(643)
	bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(643)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(643)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(643)
	if ((tmp5)){
		HX_STACK_LINE(643)
		::flixel::math::FlxPoint tmp7 = this->ball;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(643)
		::flixel::math::FlxPoint tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(643)
		Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(643)
		tmp6 = (tmp9 != (int)0);
	}
	else{
		HX_STACK_LINE(643)
		tmp6 = true;
	}
	HX_STACK_LINE(643)
	if ((tmp6)){
		HX_STACK_LINE(645)
		return true;
	}
	HX_STACK_LINE(648)
	::flixel::math::FlxPoint tmp7 = this->hat;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(648)
	Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(648)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(648)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(648)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(648)
	if ((tmp10)){
		HX_STACK_LINE(648)
		::flixel::math::FlxPoint tmp12 = this->hat;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(648)
		::flixel::math::FlxPoint tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(648)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(648)
		tmp11 = (tmp14 != (int)0);
	}
	else{
		HX_STACK_LINE(648)
		tmp11 = true;
	}
	HX_STACK_LINE(648)
	if ((tmp11)){
		HX_STACK_LINE(650)
		return true;
	}
	HX_STACK_LINE(654)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,anyInput,return )

Float FlxGamepad_obj::getAxisValue( int AxisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAxisValue",0xcd45f636,"flixel.input.gamepad.FlxGamepad.getAxisValue","flixel/input/gamepad/FlxGamepad.hx",658,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AxisID,"AxisID")
	HX_STACK_LINE(659)
	Float axisValue = (int)0;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(671)
	bool tmp = (AxisID < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(671)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(671)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(671)
	if ((tmp1)){
		HX_STACK_LINE(671)
		int tmp3 = AxisID;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(671)
		int tmp4 = this->axis->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(671)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(671)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(671)
		tmp2 = true;
	}
	HX_STACK_LINE(671)
	if ((tmp2)){
		HX_STACK_LINE(673)
		return (int)0;
	}
	HX_STACK_LINE(676)
	Float tmp3 = this->axis->__get(AxisID);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(676)
	axisValue = tmp3;
	HX_STACK_LINE(679)
	int tmp4 = AxisID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(679)
	bool tmp5 = this->isAxisForAnalogStick(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(679)
	if ((tmp5)){
		HX_STACK_LINE(681)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(681)
		{
			HX_STACK_LINE(681)
			Float axisValue1 = axisValue;		HX_STACK_VAR(axisValue1,"axisValue1");
			HX_STACK_LINE(681)
			::flixel::input::gamepad::mappings::FlxGamepadMapping tmp7 = this->mapping;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(681)
			int tmp8 = AxisID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(681)
			bool tmp9 = tmp7->isAxisFlipped(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(681)
			if ((tmp9)){
				HX_STACK_LINE(681)
				hx::MultEq(axisValue1,(int)-1);
			}
			HX_STACK_LINE(681)
			tmp6 = axisValue1;
		}
		HX_STACK_LINE(681)
		axisValue = tmp6;
	}
	HX_STACK_LINE(684)
	Float tmp6 = axisValue;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(684)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAxisValue,return )

Float FlxGamepad_obj::getAnalogXAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAnalogXAxisValue",0xef30b762,"flixel.input.gamepad.FlxGamepad.getAnalogXAxisValue","flixel/input/gamepad/FlxGamepad.hx",688,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stick,"stick")
	HX_STACK_LINE(689)
	bool tmp = (stick == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(689)
	if ((tmp)){
		HX_STACK_LINE(690)
		return (int)0;
	}
	HX_STACK_LINE(691)
	::flixel::input::gamepad::FlxGamepadDeadZoneMode tmp1 = this->deadZoneMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(691)
	bool tmp2 = (tmp1 == ::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::CIRCULAR);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(691)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(691)
	if ((tmp2)){
		HX_STACK_LINE(692)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = stick;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(692)
		int tmp5 = stick->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(692)
		tmp3 = this->getAnalogAxisValueCircular(tmp4,tmp5);
	}
	else{
		HX_STACK_LINE(694)
		int tmp4 = stick->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(694)
		tmp3 = this->getAnalogAxisValueIndependant(tmp4);
	}
	HX_STACK_LINE(691)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogXAxisValue,return )

Float FlxGamepad_obj::getAnalogYAxisValue( ::flixel::input::gamepad::FlxGamepadAnalogStick stick){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAnalogYAxisValue",0xaf7b2f41,"flixel.input.gamepad.FlxGamepad.getAnalogYAxisValue","flixel/input/gamepad/FlxGamepad.hx",698,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stick,"stick")
	HX_STACK_LINE(699)
	bool tmp = (stick == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(699)
	if ((tmp)){
		HX_STACK_LINE(700)
		return (int)0;
	}
	HX_STACK_LINE(701)
	::flixel::input::gamepad::FlxGamepadDeadZoneMode tmp1 = this->deadZoneMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(701)
	bool tmp2 = (tmp1 == ::flixel::input::gamepad::FlxGamepadDeadZoneMode_obj::CIRCULAR);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(701)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(701)
	if ((tmp2)){
		HX_STACK_LINE(702)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp4 = stick;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		int tmp5 = stick->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		tmp3 = this->getAnalogAxisValueCircular(tmp4,tmp5);
	}
	else{
		HX_STACK_LINE(704)
		int tmp4 = stick->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(704)
		tmp3 = this->getAnalogAxisValueIndependant(tmp4);
	}
	HX_STACK_LINE(701)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogYAxisValue,return )

Float FlxGamepad_obj::getAnalogAxisValueCircular( ::flixel::input::gamepad::FlxGamepadAnalogStick stick,int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAnalogAxisValueCircular",0x954ad2e5,"flixel.input.gamepad.FlxGamepad.getAnalogAxisValueCircular","flixel/input/gamepad/FlxGamepad.hx",708,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stick,"stick")
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(709)
	bool tmp = (stick == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	if ((tmp)){
		HX_STACK_LINE(710)
		return (int)0;
	}
	HX_STACK_LINE(711)
	int tmp1 = stick->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	Float tmp2 = this->getAxisValue(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(711)
	Float xAxis = tmp2;		HX_STACK_VAR(xAxis,"xAxis");
	HX_STACK_LINE(712)
	int tmp3 = stick->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(712)
	Float tmp4 = this->getAxisValue(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(712)
	Float yAxis = tmp4;		HX_STACK_VAR(yAxis,"yAxis");
	HX_STACK_LINE(714)
	::flixel::math::FlxVector tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(714)
	{
		HX_STACK_LINE(714)
		::flixel::util::FlxPool_flixel_math_FlxVector tmp6 = ::flixel::math::FlxVector_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(714)
		::flixel::math::FlxVector tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(714)
		Float tmp8 = xAxis;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(714)
		Float tmp9 = yAxis;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(714)
		::flixel::math::FlxVector tmp10 = hx::TCast< ::flixel::math::FlxVector >::cast(tmp7->set(tmp8,tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(714)
		::flixel::math::FlxVector vector = tmp10;		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(714)
		vector->_inPool = false;
		HX_STACK_LINE(714)
		tmp5 = vector;
	}
	HX_STACK_LINE(714)
	::flixel::math::FlxVector vector = tmp5;		HX_STACK_VAR(vector,"vector");
	HX_STACK_LINE(715)
	Float tmp6 = (vector->x * vector->x);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(715)
	Float tmp7 = (vector->y * vector->y);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(715)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(715)
	Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(715)
	Float length = tmp9;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(716)
	vector->put();
	HX_STACK_LINE(718)
	Float tmp10 = length;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(718)
	Float tmp11 = this->get_deadZone();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(718)
	bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(718)
	if ((tmp12)){
		HX_STACK_LINE(720)
		int tmp13 = axisID;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(720)
		Float tmp14 = this->getAxisValue(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(720)
		return tmp14;
	}
	HX_STACK_LINE(722)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepad_obj,getAnalogAxisValueCircular,return )

Float FlxGamepad_obj::getAnalogAxisValueIndependant( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","getAnalogAxisValueIndependant",0x41d1fbb0,"flixel.input.gamepad.FlxGamepad.getAnalogAxisValueIndependant","flixel/input/gamepad/FlxGamepad.hx",726,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(727)
	int tmp = axisID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	Float tmp1 = this->getAxisValue(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(727)
	Float axisValue = tmp1;		HX_STACK_VAR(axisValue,"axisValue");
	HX_STACK_LINE(728)
	Float tmp2 = axisValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(728)
	Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(728)
	Float tmp4 = this->get_deadZone();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(728)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(728)
	if ((tmp5)){
		HX_STACK_LINE(729)
		Float tmp6 = axisValue;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(729)
		return tmp6;
	}
	HX_STACK_LINE(730)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,getAnalogAxisValueIndependant,return )

::flixel::input::gamepad::mappings::FlxGamepadMapping FlxGamepad_obj::createMappingForModel( ::flixel::input::gamepad::FlxGamepadModel model){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","createMappingForModel",0x1a17db56,"flixel.input.gamepad.FlxGamepad.createMappingForModel","flixel/input/gamepad/FlxGamepad.hx",734,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(model,"model")
	HX_STACK_LINE(735)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(735)
	switch( (int)(model->__Index())){
		case (int)0: {
			HX_STACK_LINE(737)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(737)
			tmp = ::flixel::input::gamepad::mappings::LogitechMapping_obj::__new(tmp1);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(738)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(738)
			tmp = ::flixel::input::gamepad::mappings::OUYAMapping_obj::__new(tmp1);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(739)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(739)
			tmp = ::flixel::input::gamepad::mappings::PS4Mapping_obj::__new(tmp1);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(740)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(740)
			tmp = ::flixel::input::gamepad::mappings::PSVitaMapping_obj::__new(tmp1);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(741)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(741)
			tmp = ::flixel::input::gamepad::mappings::XInputMapping_obj::__new(tmp1);
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(742)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(742)
			tmp = ::flixel::input::gamepad::mappings::MayflashWiiRemoteMapping_obj::__new(tmp1);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(743)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(743)
			tmp = ::flixel::input::gamepad::mappings::WiiRemoteMapping_obj::__new(tmp1);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(744)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(744)
			tmp = ::flixel::input::gamepad::mappings::MFiMapping_obj::__new(tmp1);
		}
		;break;
		default: {
			HX_STACK_LINE(746)
			::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(746)
			tmp = ::flixel::input::gamepad::mappings::XInputMapping_obj::__new(tmp1);
		}
	}
	HX_STACK_LINE(735)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,createMappingForModel,return )

::flixel::input::gamepad::FlxGamepadModel FlxGamepad_obj::set_model( ::flixel::input::gamepad::FlxGamepadModel Model){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","set_model",0xd59c83f0,"flixel.input.gamepad.FlxGamepad.set_model","flixel/input/gamepad/FlxGamepad.hx",760,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Model,"Model")
	HX_STACK_LINE(761)
	this->model = Model;
	HX_STACK_LINE(762)
	::flixel::input::gamepad::FlxGamepadModel tmp = this->model;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(762)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp1 = this->createMappingForModel(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(762)
	this->mapping = tmp1;
	HX_STACK_LINE(764)
	::flixel::input::gamepad::FlxGamepadModel tmp2 = this->model;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(764)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,set_model,return )

::flixel::input::gamepad::FlxGamepadAttachment FlxGamepad_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment Attachment){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","set_attachment",0xa3a9463c,"flixel.input.gamepad.FlxGamepad.set_attachment","flixel/input/gamepad/FlxGamepad.hx",768,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Attachment,"Attachment")
	HX_STACK_LINE(769)
	this->attachment = Attachment;
	HX_STACK_LINE(770)
	::flixel::input::gamepad::mappings::FlxGamepadMapping tmp = this->mapping;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(770)
	::flixel::input::gamepad::FlxGamepadAttachment tmp1 = Attachment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(770)
	tmp->set_attachment(tmp1);
	HX_STACK_LINE(771)
	::flixel::input::gamepad::FlxGamepadAttachment tmp2 = this->attachment;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(771)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,set_attachment,return )

Float FlxGamepad_obj::get_deadZone( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","get_deadZone",0x3fdae195,"flixel.input.gamepad.FlxGamepad.get_deadZone","flixel/input/gamepad/FlxGamepad.hx",775,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(776)
	::flixel::input::gamepad::FlxGamepadManager tmp = this->manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(776)
	Dynamic tmp1 = tmp->globalDeadZone;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(776)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(776)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(776)
	if ((tmp2)){
		HX_STACK_LINE(776)
		tmp3 = this->_deadZone;
	}
	else{
		HX_STACK_LINE(776)
		::flixel::input::gamepad::FlxGamepadManager tmp4 = this->manager;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(776)
		tmp3 = tmp4->globalDeadZone;
	}
	HX_STACK_LINE(776)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,get_deadZone,return )

Float FlxGamepad_obj::set_deadZone( Float deadZone){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","set_deadZone",0x54d40509,"flixel.input.gamepad.FlxGamepad.set_deadZone","flixel/input/gamepad/FlxGamepad.hx",780,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deadZone,"deadZone")
	HX_STACK_LINE(781)
	Float tmp = this->_deadZone = deadZone;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepad_obj,set_deadZone,return )

::String FlxGamepad_obj::toString( ){
	HX_STACK_FRAME("flixel.input.gamepad.FlxGamepad","toString",0x4b874148,"flixel.input.gamepad.FlxGamepad.toString","flixel/input/gamepad/FlxGamepad.hx",785,0xdb78a809)
	HX_STACK_THIS(this)
	HX_STACK_LINE(787)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(787)
	{
		HX_STACK_LINE(787)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(787)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(787)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(787)
		_this->label = HX_HCSTRING("id","\xdb","\x5b","\x00","\x00");
		HX_STACK_LINE(787)
		int tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(787)
		_this->value = tmp3;
		HX_STACK_LINE(787)
		tmp = _this;
	}
	HX_STACK_LINE(788)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(788)
	{
		HX_STACK_LINE(788)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(788)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(788)
		_this->label = HX_HCSTRING("model","\xa9","\x23","\x58","\x0c");
		HX_STACK_LINE(788)
		::flixel::input::gamepad::FlxGamepadModel tmp4 = this->model;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(788)
		_this->value = tmp4;
		HX_STACK_LINE(788)
		tmp1 = _this;
	}
	HX_STACK_LINE(789)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(789)
	{
		HX_STACK_LINE(789)
		Float tmp3 = this->get_deadZone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(789)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(789)
			::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(789)
			::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(789)
			_this->label = HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58");
			HX_STACK_LINE(789)
			_this->value = value;
			HX_STACK_LINE(789)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(786)
	::String tmp3 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(786)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepad_obj,toString,return )


FlxGamepad_obj::FlxGamepad_obj()
{
}

void FlxGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepad);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(detectedModel,"detectedModel");
	HX_MARK_MEMBER_NAME(mapping,"mapping");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(deadZoneMode,"deadZoneMode");
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(justPressed,"justPressed");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_MEMBER_NAME(analog,"analog");
	HX_MARK_MEMBER_NAME(motion,"motion");
	HX_MARK_MEMBER_NAME(pointer,"pointer");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(axisActive,"axisActive");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(_deadZone,"_deadZone");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_END_CLASS();
}

void FlxGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(detectedModel,"detectedModel");
	HX_VISIT_MEMBER_NAME(mapping,"mapping");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(deadZoneMode,"deadZoneMode");
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(justPressed,"justPressed");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
	HX_VISIT_MEMBER_NAME(analog,"analog");
	HX_VISIT_MEMBER_NAME(motion,"motion");
	HX_VISIT_MEMBER_NAME(pointer,"pointer");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(axisActive,"axisActive");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(_deadZone,"_deadZone");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
}

Dynamic FlxGamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"analog") ) { return analog; }
		if (HX_FIELD_EQ(inName,"motion") ) { return motion; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { return mapping; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"pointer") ) { return pointer; }
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { if (inCallProp == hx::paccAlways) return get_deadZone(); }
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return getXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return getYAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"anyInput") ) { return anyInput_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return connected; }
		if (HX_FIELD_EQ(inName,"_deadZone") ) { return _deadZone; }
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return anyButton_dyn(); }
		if (HX_FIELD_EQ(inName,"set_model") ) { return set_model_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { return attachment; }
		if (HX_FIELD_EQ(inName,"axisActive") ) { return axisActive; }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return anyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxisRaw") ) { return getAxisRaw_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return justPressed; }
		if (HX_FIELD_EQ(inName,"checkStatus") ) { return checkStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getXAxisRaw") ) { return getXAxisRaw_dyn(); }
		if (HX_FIELD_EQ(inName,"getYAxisRaw") ) { return getYAxisRaw_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deadZoneMode") ) { return deadZoneMode; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
		if (HX_FIELD_EQ(inName,"getAxisValue") ) { return getAxisValue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_deadZone") ) { return get_deadZone_dyn(); }
		if (HX_FIELD_EQ(inName,"set_deadZone") ) { return set_deadZone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detectedModel") ) { return detectedModel; }
		if (HX_FIELD_EQ(inName,"applyAxisFlip") ) { return applyAxisFlip_dyn(); }
		if (HX_FIELD_EQ(inName,"anyPressedRaw") ) { return anyPressedRaw_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkStatusRaw") ) { return checkStatusRaw_dyn(); }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return anyJustPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"firstPressedID") ) { return firstPressedID_dyn(); }
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return set_attachment_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return anyJustReleased_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"anyJustPressedRaw") ) { return anyJustPressedRaw_dyn(); }
		if (HX_FIELD_EQ(inName,"firstPressedRawID") ) { return firstPressedRawID_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"anyJustReleasedRaw") ) { return anyJustReleasedRaw_dyn(); }
		if (HX_FIELD_EQ(inName,"firstJustPressedID") ) { return firstJustPressedID_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"firstJustReleasedID") ) { return firstJustReleasedID_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnalogXAxisValue") ) { return getAnalogXAxisValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnalogYAxisValue") ) { return getAnalogYAxisValue_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isAxisForAnalogStick") ) { return isAxisForAnalogStick_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnalogStickByAxis") ) { return getAnalogStickByAxis_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"firstJustPressedRawID") ) { return firstJustPressedRawID_dyn(); }
		if (HX_FIELD_EQ(inName,"createMappingForModel") ) { return createMappingForModel_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"firstJustReleasedRawID") ) { return firstJustReleasedRawID_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getAnalogAxisValueCircular") ) { return getAnalogAxisValueCircular_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getAnalogAxisValueIndependant") ) { return getAnalogAxisValueIndependant_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepad_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { if (inCallProp == hx::paccAlways) return set_model(inValue);model=inValue.Cast< ::flixel::input::gamepad::FlxGamepadModel >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"analog") ) { analog=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadAnalogList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"motion") ) { motion=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadMotionValueList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapping") ) { mapping=inValue.Cast< ::flixel::input::gamepad::mappings::FlxGamepadMapping >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointer") ) { pointer=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadPointerValueList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::input::gamepad::FlxGamepadManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { if (inCallProp == hx::paccAlways) return set_deadZone(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deadZone") ) { _deadZone=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { if (inCallProp == hx::paccAlways) return set_attachment(inValue);attachment=inValue.Cast< ::flixel::input::gamepad::FlxGamepadAttachment >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisActive") ) { axisActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { justPressed=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deadZoneMode") ) { deadZoneMode=inValue.Cast< ::flixel::input::gamepad::FlxGamepadDeadZoneMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadButtonList >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detectedModel") ) { detectedModel=inValue.Cast< ::flixel::input::gamepad::FlxGamepadModel >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("model","\xa9","\x23","\x58","\x0c"));
	outFields->push(HX_HCSTRING("detectedModel","\xc7","\xfe","\x45","\xf3"));
	outFields->push(HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44"));
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd"));
	outFields->push(HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58"));
	outFields->push(HX_HCSTRING("deadZoneMode","\x73","\x76","\x8a","\x42"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	outFields->push(HX_HCSTRING("analog","\x30","\xd6","\x21","\x5f"));
	outFields->push(HX_HCSTRING("motion","\x36","\x86","\x5d","\xcb"));
	outFields->push(HX_HCSTRING("pointer","\xbd","\xc0","\x21","\x51"));
	outFields->push(HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("axisActive","\x47","\x81","\x10","\x2c"));
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("_deadZone","\x4f","\x36","\xc4","\x9f"));
	outFields->push(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadModel*/ ,(int)offsetof(FlxGamepad_obj,model),HX_HCSTRING("model","\xa9","\x23","\x58","\x0c")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadModel*/ ,(int)offsetof(FlxGamepad_obj,detectedModel),HX_HCSTRING("detectedModel","\xc7","\xfe","\x45","\xf3")},
	{hx::fsObject /*::flixel::input::gamepad::mappings::FlxGamepadMapping*/ ,(int)offsetof(FlxGamepad_obj,mapping),HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadAttachment*/ ,(int)offsetof(FlxGamepad_obj,attachment),HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadDeadZoneMode*/ ,(int)offsetof(FlxGamepad_obj,deadZoneMode),HX_HCSTRING("deadZoneMode","\x73","\x76","\x8a","\x42")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadButtonList*/ ,(int)offsetof(FlxGamepad_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadButtonList*/ ,(int)offsetof(FlxGamepad_obj,justPressed),HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadButtonList*/ ,(int)offsetof(FlxGamepad_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogList*/ ,(int)offsetof(FlxGamepad_obj,analog),HX_HCSTRING("analog","\x30","\xd6","\x21","\x5f")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadMotionValueList*/ ,(int)offsetof(FlxGamepad_obj,motion),HX_HCSTRING("motion","\x36","\x86","\x5d","\xcb")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadPointerValueList*/ ,(int)offsetof(FlxGamepad_obj,pointer),HX_HCSTRING("pointer","\xbd","\xc0","\x21","\x51")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,hat),HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxGamepad_obj,ball),HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxGamepad_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsBool,(int)offsetof(FlxGamepad_obj,axisActive),HX_HCSTRING("axisActive","\x47","\x81","\x10","\x2c")},
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepadManager*/ ,(int)offsetof(FlxGamepad_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsFloat,(int)offsetof(FlxGamepad_obj,_deadZone),HX_HCSTRING("_deadZone","\x4f","\x36","\xc4","\x9f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxGamepad_obj,buttons),HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("model","\xa9","\x23","\x58","\x0c"),
	HX_HCSTRING("detectedModel","\xc7","\xfe","\x45","\xf3"),
	HX_HCSTRING("mapping","\x0e","\x7b","\x7a","\x44"),
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("attachment","\xe3","\x07","\x73","\xdd"),
	HX_HCSTRING("deadZoneMode","\x73","\x76","\x8a","\x42"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("justPressed","\xd6","\x0d","\xa7","\xf2"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	HX_HCSTRING("analog","\x30","\xd6","\x21","\x5f"),
	HX_HCSTRING("motion","\x36","\x86","\x5d","\xcb"),
	HX_HCSTRING("pointer","\xbd","\xc0","\x21","\x51"),
	HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00"),
	HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("axisActive","\x47","\x81","\x10","\x2c"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("_deadZone","\x4f","\x36","\xc4","\x9f"),
	HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"),
	HX_HCSTRING("getButton","\x28","\xeb","\x36","\x56"),
	HX_HCSTRING("applyAxisFlip","\x7c","\x1f","\x87","\xcb"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("checkStatus","\x1a","\xba","\x0d","\xe8"),
	HX_HCSTRING("checkStatusRaw","\xee","\x9f","\x30","\xe1"),
	HX_HCSTRING("anyPressed","\x16","\x75","\x02","\x90"),
	HX_HCSTRING("anyPressedRaw","\x72","\xea","\xfd","\x41"),
	HX_HCSTRING("anyJustPressed","\x4a","\xfa","\xb6","\xa6"),
	HX_HCSTRING("anyJustPressedRaw","\xbe","\x9d","\x89","\x5f"),
	HX_HCSTRING("anyJustReleased","\x15","\x14","\x3a","\x40"),
	HX_HCSTRING("anyJustReleasedRaw","\xd3","\x74","\x6a","\x66"),
	HX_HCSTRING("firstPressedID","\xad","\x60","\xf7","\xba"),
	HX_HCSTRING("firstPressedRawID","\x11","\x7e","\x5f","\x62"),
	HX_HCSTRING("firstJustPressedID","\xe1","\x68","\xae","\x5d"),
	HX_HCSTRING("firstJustPressedRawID","\x5d","\x8e","\x1c","\x78"),
	HX_HCSTRING("firstJustReleasedID","\x74","\xef","\x61","\x8d"),
	HX_HCSTRING("firstJustReleasedRawID","\xaa","\x25","\x0b","\xce"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("getAxisRaw","\xd1","\xd1","\x2b","\xcd"),
	HX_HCSTRING("isAxisForAnalogStick","\x82","\x9b","\xbe","\x67"),
	HX_HCSTRING("getAnalogStickByAxis","\xc2","\xe5","\xb1","\xcc"),
	HX_HCSTRING("getXAxis","\xc3","\xf4","\x3e","\xa3"),
	HX_HCSTRING("getXAxisRaw","\xe5","\xb4","\xb4","\x40"),
	HX_HCSTRING("getYAxis","\x44","\x89","\xa5","\x36"),
	HX_HCSTRING("getYAxisRaw","\x04","\x27","\xe7","\x79"),
	HX_HCSTRING("anyButton","\xfe","\xc9","\x3f","\x37"),
	HX_HCSTRING("anyInput","\x7e","\x21","\xd0","\x3c"),
	HX_HCSTRING("getAxisValue","\x9a","\x07","\xb3","\x9a"),
	HX_HCSTRING("getAnalogXAxisValue","\x7e","\x5a","\xac","\x0a"),
	HX_HCSTRING("getAnalogYAxisValue","\x5d","\xd2","\xf6","\xca"),
	HX_HCSTRING("getAnalogAxisValueCircular","\x49","\x0b","\x5e","\x0f"),
	HX_HCSTRING("getAnalogAxisValueIndependant","\xcc","\x19","\xab","\x5b"),
	HX_HCSTRING("createMappingForModel","\x72","\x7d","\x17","\xc6"),
	HX_HCSTRING("set_model","\x0c","\x6c","\x52","\x33"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	HX_HCSTRING("get_deadZone","\xf9","\xf2","\x47","\x0d"),
	HX_HCSTRING("set_deadZone","\x6d","\x16","\x41","\x22"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepad_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepad_obj::__mClass;

void FlxGamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepad","\x52","\x73","\x7c","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepad_obj >;
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
