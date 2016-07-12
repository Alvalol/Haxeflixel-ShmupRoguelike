#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

Void FlxGamepadAnalogStateList_obj::__construct(int status,::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","new",0x726900e6,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.new","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",24,0xa4c0584e)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(25)
	this->status = status;
	HX_STACK_LINE(26)
	this->gamepad = gamepad;
}
;
	return null();
}

//FlxGamepadAnalogStateList_obj::~FlxGamepadAnalogStateList_obj() { }

Dynamic FlxGamepadAnalogStateList_obj::__CreateEmpty() { return  new FlxGamepadAnalogStateList_obj; }
hx::ObjectPtr< FlxGamepadAnalogStateList_obj > FlxGamepadAnalogStateList_obj::__new(int status,::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxGamepadAnalogStateList_obj > _result_ = new FlxGamepadAnalogStateList_obj();
	_result_->__construct(status,gamepad);
	return _result_;}

Dynamic FlxGamepadAnalogStateList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadAnalogStateList_obj > _result_ = new FlxGamepadAnalogStateList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK",0xc8abc13b,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",16,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	bool tmp = this->checkXY((int)19);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK,return )

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK_X",0x1c0b1914,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",17,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp1->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
		HX_STACK_LINE(17)
		bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		if ((tmp3)){
			HX_STACK_LINE(17)
			tmp = false;
		}
		else{
			HX_STACK_LINE(17)
			int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(17)
			::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(17)
			int tmp5 = RawID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(17)
			int tmp6 = tmp4->mapping->axisIndexToRawID(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			RawID = tmp6;
			HX_STACK_LINE(17)
			::flixel::input::gamepad::FlxGamepad tmp7 = this->gamepad;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(17)
			int tmp8 = RawID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			int tmp9 = this->status;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(17)
			tmp = tmp7->checkStatusRaw(tmp8,tmp9);
		}
	}
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK_X,return )

bool FlxGamepadAnalogStateList_obj::get_LEFT_STICK_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_LEFT_STICK_Y",0x1c0b1915,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_LEFT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",18,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp1->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
		HX_STACK_LINE(18)
		bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(18)
			tmp = false;
		}
		else{
			HX_STACK_LINE(18)
			int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(18)
			::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(18)
			int tmp5 = RawID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(18)
			int tmp6 = tmp4->mapping->axisIndexToRawID(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(18)
			RawID = tmp6;
			HX_STACK_LINE(18)
			::flixel::input::gamepad::FlxGamepad tmp7 = this->gamepad;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(18)
			int tmp8 = RawID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(18)
			int tmp9 = this->status;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(18)
			tmp = tmp7->checkStatusRaw(tmp8,tmp9);
		}
	}
	HX_STACK_LINE(18)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_LEFT_STICK_Y,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK",0x6f514a4a,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",19,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	bool tmp = this->checkXY((int)20);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK_X",0xddf043e3,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",20,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp1->mapping->getAnalogStick((int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
		HX_STACK_LINE(20)
		bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		if ((tmp3)){
			HX_STACK_LINE(20)
			tmp = false;
		}
		else{
			HX_STACK_LINE(20)
			int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(20)
			::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(20)
			int tmp5 = RawID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(20)
			int tmp6 = tmp4->mapping->axisIndexToRawID(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(20)
			RawID = tmp6;
			HX_STACK_LINE(20)
			::flixel::input::gamepad::FlxGamepad tmp7 = this->gamepad;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(20)
			int tmp8 = RawID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(20)
			int tmp9 = this->status;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(20)
			tmp = tmp7->checkStatusRaw(tmp8,tmp9);
		}
	}
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK_X,return )

bool FlxGamepadAnalogStateList_obj::get_RIGHT_STICK_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","get_RIGHT_STICK_Y",0xddf043e4,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.get_RIGHT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",21,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp1->mapping->getAnalogStick((int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
		HX_STACK_LINE(21)
		bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		if ((tmp3)){
			HX_STACK_LINE(21)
			tmp = false;
		}
		else{
			HX_STACK_LINE(21)
			int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(21)
			::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			int tmp5 = RawID;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			int tmp6 = tmp4->mapping->axisIndexToRawID(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(21)
			RawID = tmp6;
			HX_STACK_LINE(21)
			::flixel::input::gamepad::FlxGamepad tmp7 = this->gamepad;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(21)
			int tmp8 = RawID;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(21)
			int tmp9 = this->status;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(21)
			tmp = tmp7->checkStatusRaw(tmp8,tmp9);
		}
	}
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogStateList_obj,get_RIGHT_STICK_Y,return )

bool FlxGamepadAnalogStateList_obj::checkXY( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkXY",0x1743934f,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkXY","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",33,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(34)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp->mapping->getAnalogStick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
	HX_STACK_LINE(35)
	bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(36)
		return false;
	}
	HX_STACK_LINE(45)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
		HX_STACK_LINE(45)
		::flixel::input::gamepad::FlxGamepad tmp5 = this->gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		int tmp6 = RawID;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		int tmp7 = tmp5->mapping->axisIndexToRawID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		RawID = tmp7;
		HX_STACK_LINE(45)
		::flixel::input::gamepad::FlxGamepad tmp8 = this->gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		int tmp9 = RawID;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		int tmp10 = this->status;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		tmp4 = tmp8->checkStatusRaw(tmp9,tmp10);
	}
	HX_STACK_LINE(45)
	bool xVal = tmp4;		HX_STACK_VAR(xVal,"xVal");
	HX_STACK_LINE(46)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
		HX_STACK_LINE(46)
		::flixel::input::gamepad::FlxGamepad tmp6 = this->gamepad;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		int tmp7 = RawID;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		int tmp8 = tmp6->mapping->axisIndexToRawID(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		RawID = tmp8;
		HX_STACK_LINE(46)
		::flixel::input::gamepad::FlxGamepad tmp9 = this->gamepad;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		int tmp10 = RawID;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		int tmp11 = this->status;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		tmp5 = tmp9->checkStatusRaw(tmp10,tmp11);
	}
	HX_STACK_LINE(46)
	bool yVal = tmp5;		HX_STACK_VAR(yVal,"yVal");
	HX_STACK_LINE(48)
	bool tmp6 = xVal;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	if ((tmp6)){
		HX_STACK_LINE(48)
		tmp7 = yVal;
	}
	else{
		HX_STACK_LINE(48)
		tmp7 = false;
	}
	HX_STACK_LINE(48)
	if ((tmp7)){
		HX_STACK_LINE(50)
		return true;
	}
	HX_STACK_LINE(53)
	bool tmp8 = xVal;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	if ((tmp8)){
		HX_STACK_LINE(55)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(55)
			::flixel::input::gamepad::FlxGamepad tmp10 = this->gamepad;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			int tmp11 = RawID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			int tmp12 = tmp10->mapping->axisIndexToRawID(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			RawID = tmp12;
			HX_STACK_LINE(55)
			::flixel::input::gamepad::FlxGamepad tmp13 = this->gamepad;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			int tmp14 = RawID;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			tmp9 = tmp13->checkStatusRaw(tmp14,(int)0);
		}
		HX_STACK_LINE(55)
		bool yReleased = tmp9;		HX_STACK_VAR(yReleased,"yReleased");
		HX_STACK_LINE(56)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(56)
			::flixel::input::gamepad::FlxGamepad tmp11 = this->gamepad;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			int tmp12 = RawID;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			int tmp13 = tmp11->mapping->axisIndexToRawID(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			RawID = tmp13;
			HX_STACK_LINE(56)
			::flixel::input::gamepad::FlxGamepad tmp14 = this->gamepad;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(56)
			int tmp15 = RawID;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			tmp10 = tmp14->checkStatusRaw(tmp15,(int)-1);
		}
		HX_STACK_LINE(56)
		bool yJustReleased = tmp10;		HX_STACK_VAR(yJustReleased,"yJustReleased");
		HX_STACK_LINE(57)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(57)
			::flixel::input::gamepad::FlxGamepad tmp12 = this->gamepad;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(57)
			int tmp13 = RawID;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(57)
			int tmp14 = tmp12->mapping->axisIndexToRawID(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(57)
			RawID = tmp14;
			HX_STACK_LINE(57)
			::flixel::input::gamepad::FlxGamepad tmp15 = this->gamepad;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(57)
			int tmp16 = RawID;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(57)
			tmp11 = tmp15->checkStatusRaw(tmp16,(int)2);
		}
		HX_STACK_LINE(57)
		bool yJustPressed = tmp11;		HX_STACK_VAR(yJustPressed,"yJustPressed");
		HX_STACK_LINE(58)
		bool tmp12 = yReleased;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(58)
		if ((tmp13)){
			HX_STACK_LINE(58)
			tmp14 = yJustReleased;
		}
		else{
			HX_STACK_LINE(58)
			tmp14 = true;
		}
		HX_STACK_LINE(58)
		if ((tmp14)){
			HX_STACK_LINE(60)
			return true;
		}
	}
	HX_STACK_LINE(64)
	bool tmp9 = yVal;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	if ((tmp9)){
		HX_STACK_LINE(66)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(66)
			::flixel::input::gamepad::FlxGamepad tmp11 = this->gamepad;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(66)
			int tmp12 = RawID;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(66)
			int tmp13 = tmp11->mapping->axisIndexToRawID(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(66)
			RawID = tmp13;
			HX_STACK_LINE(66)
			::flixel::input::gamepad::FlxGamepad tmp14 = this->gamepad;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(66)
			int tmp15 = RawID;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(66)
			tmp10 = tmp14->checkStatusRaw(tmp15,(int)0);
		}
		HX_STACK_LINE(66)
		bool xReleased = tmp10;		HX_STACK_VAR(xReleased,"xReleased");
		HX_STACK_LINE(67)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(67)
			::flixel::input::gamepad::FlxGamepad tmp12 = this->gamepad;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			int tmp13 = RawID;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			int tmp14 = tmp12->mapping->axisIndexToRawID(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(67)
			RawID = tmp14;
			HX_STACK_LINE(67)
			::flixel::input::gamepad::FlxGamepad tmp15 = this->gamepad;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(67)
			int tmp16 = RawID;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(67)
			tmp11 = tmp15->checkStatusRaw(tmp16,(int)-1);
		}
		HX_STACK_LINE(67)
		bool xJustReleased = tmp11;		HX_STACK_VAR(xJustReleased,"xJustReleased");
		HX_STACK_LINE(68)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
			HX_STACK_LINE(68)
			::flixel::input::gamepad::FlxGamepad tmp13 = this->gamepad;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			int tmp14 = RawID;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			int tmp15 = tmp13->mapping->axisIndexToRawID(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			RawID = tmp15;
			HX_STACK_LINE(68)
			::flixel::input::gamepad::FlxGamepad tmp16 = this->gamepad;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(68)
			int tmp17 = RawID;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(68)
			tmp12 = tmp16->checkStatusRaw(tmp17,(int)2);
		}
		HX_STACK_LINE(68)
		bool xJustPressed = tmp12;		HX_STACK_VAR(xJustPressed,"xJustPressed");
		HX_STACK_LINE(69)
		bool tmp13 = xReleased;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		if ((tmp14)){
			HX_STACK_LINE(69)
			tmp15 = xJustReleased;
		}
		else{
			HX_STACK_LINE(69)
			tmp15 = true;
		}
		HX_STACK_LINE(69)
		if ((tmp15)){
			HX_STACK_LINE(71)
			return true;
		}
	}
	HX_STACK_LINE(75)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkXY,return )

bool FlxGamepadAnalogStateList_obj::checkX( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkX",0x15ea7dca,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkX","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",79,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(80)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp->mapping->getAnalogStick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
	HX_STACK_LINE(81)
	bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	if ((tmp3)){
		HX_STACK_LINE(82)
		return false;
	}
	HX_STACK_LINE(83)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int RawID = stick->x;		HX_STACK_VAR(RawID,"RawID");
		HX_STACK_LINE(83)
		::flixel::input::gamepad::FlxGamepad tmp5 = this->gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		int tmp6 = RawID;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		int tmp7 = tmp5->mapping->axisIndexToRawID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		RawID = tmp7;
		HX_STACK_LINE(83)
		::flixel::input::gamepad::FlxGamepad tmp8 = this->gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		int tmp9 = RawID;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		int tmp10 = this->status;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		tmp4 = tmp8->checkStatusRaw(tmp9,tmp10);
	}
	HX_STACK_LINE(83)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkX,return )

bool FlxGamepadAnalogStateList_obj::checkY( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkY",0x15ea7dcb,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkY","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",87,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(88)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = tmp->mapping->getAnalogStick(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	::flixel::input::gamepad::FlxGamepadAnalogStick stick = tmp2;		HX_STACK_VAR(stick,"stick");
	HX_STACK_LINE(89)
	bool tmp3 = (stick == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	if ((tmp3)){
		HX_STACK_LINE(90)
		return false;
	}
	HX_STACK_LINE(91)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		int RawID = stick->y;		HX_STACK_VAR(RawID,"RawID");
		HX_STACK_LINE(91)
		::flixel::input::gamepad::FlxGamepad tmp5 = this->gamepad;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		int tmp6 = RawID;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		int tmp7 = tmp5->mapping->axisIndexToRawID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		RawID = tmp7;
		HX_STACK_LINE(91)
		::flixel::input::gamepad::FlxGamepad tmp8 = this->gamepad;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		int tmp9 = RawID;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		int tmp10 = this->status;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		tmp4 = tmp8->checkStatusRaw(tmp9,tmp10);
	}
	HX_STACK_LINE(91)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogStateList_obj,checkY,return )

bool FlxGamepadAnalogStateList_obj::checkRaw( int RawID,int Status){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","checkRaw",0x43d8cbba,"flixel.input.gamepad.lists.FlxGamepadAnalogStateList.checkRaw","flixel/input/gamepad/lists/FlxGamepadAnalogStateList.hx",95,0xa4c0584e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RawID,"RawID")
	HX_STACK_ARG(Status,"Status")
	HX_STACK_LINE(99)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	int tmp1 = RawID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	int tmp2 = tmp->mapping->axisIndexToRawID(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	RawID = tmp2;
	HX_STACK_LINE(101)
	::flixel::input::gamepad::FlxGamepad tmp3 = this->gamepad;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	int tmp4 = RawID;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(101)
	int tmp5 = Status;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(101)
	bool tmp6 = tmp3->checkStatusRaw(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(101)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadAnalogStateList_obj,checkRaw,return )


FlxGamepadAnalogStateList_obj::FlxGamepadAnalogStateList_obj()
{
}

void FlxGamepadAnalogStateList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogStateList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogStateList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(status,"status");
}

Dynamic FlxGamepadAnalogStateList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"checkX") ) { return checkX_dyn(); }
		if (HX_FIELD_EQ(inName,"checkY") ) { return checkY_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		if (HX_FIELD_EQ(inName,"checkXY") ) { return checkXY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkRaw") ) { return checkRaw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LEFT_STICK") ) { if (inCallProp == hx::paccAlways) return get_LEFT_STICK(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_STICK(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_X") ) { if (inCallProp == hx::paccAlways) return get_LEFT_STICK_X(); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return get_LEFT_STICK_Y(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_X") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_STICK_X(); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_STICK_Y(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK") ) { return get_LEFT_STICK_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK") ) { return get_RIGHT_STICK_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_X") ) { return get_LEFT_STICK_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_Y") ) { return get_LEFT_STICK_Y_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_X") ) { return get_RIGHT_STICK_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_Y") ) { return get_RIGHT_STICK_Y_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadAnalogStateList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogStateList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	outFields->push(HX_HCSTRING("LEFT_STICK","\xb8","\x07","\xea","\x37"));
	outFields->push(HX_HCSTRING("LEFT_STICK_X","\xd1","\xb8","\x45","\x8c"));
	outFields->push(HX_HCSTRING("LEFT_STICK_Y","\xd2","\xb8","\x45","\x8c"));
	outFields->push(HX_HCSTRING("RIGHT_STICK","\x2d","\xb1","\x90","\x56"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_X","\x86","\x69","\x01","\xa1"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_Y","\x87","\x69","\x01","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadAnalogStateList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsInt,(int)offsetof(FlxGamepadAnalogStateList_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("get_LEFT_STICK","\x01","\x90","\xdf","\xad"),
	HX_HCSTRING("get_LEFT_STICK_X","\x5a","\xa5","\xe4","\x90"),
	HX_HCSTRING("get_LEFT_STICK_Y","\x5b","\xa5","\xe4","\x90"),
	HX_HCSTRING("get_RIGHT_STICK","\xc4","\x68","\x72","\x17"),
	HX_HCSTRING("get_RIGHT_STICK_X","\xdd","\x74","\x71","\xa7"),
	HX_HCSTRING("get_RIGHT_STICK_Y","\xde","\x74","\x71","\xa7"),
	HX_HCSTRING("checkXY","\xc9","\xa7","\x24","\x13"),
	HX_HCSTRING("checkX","\x90","\x16","\x0f","\xba"),
	HX_HCSTRING("checkY","\x91","\x16","\x0f","\xba"),
	HX_HCSTRING("checkRaw","\x00","\xa2","\xe9","\xac"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadAnalogStateList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadAnalogStateList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadAnalogStateList_obj::__mClass;

void FlxGamepadAnalogStateList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadAnalogStateList","\xf4","\x55","\x19","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogStateList_obj >;
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
} // end namespace lists
