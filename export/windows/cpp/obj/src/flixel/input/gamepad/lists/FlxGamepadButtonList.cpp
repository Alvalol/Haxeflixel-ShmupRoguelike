#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
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

Void FlxGamepadButtonList_obj::__construct(int status,::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","new",0xeb174acd,"flixel.input.gamepad.lists.FlxGamepadButtonList.new","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",41,0x834770bf)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(42)
	int tmp = status;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::flixel::input::gamepad::FlxGamepad tmp1 = gamepad;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//FlxGamepadButtonList_obj::~FlxGamepadButtonList_obj() { }

Dynamic FlxGamepadButtonList_obj::__CreateEmpty() { return  new FlxGamepadButtonList_obj; }
hx::ObjectPtr< FlxGamepadButtonList_obj > FlxGamepadButtonList_obj::__new(int status,::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxGamepadButtonList_obj > _result_ = new FlxGamepadButtonList_obj();
	_result_->__construct(status,gamepad);
	return _result_;}

Dynamic FlxGamepadButtonList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadButtonList_obj > _result_ = new FlxGamepadButtonList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxGamepadButtonList_obj::get_A( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_A",0x4fc954c5,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_A","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",13,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	{
		HX_STACK_LINE(13)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(13)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(13)
		int tmp2 = _this->mapping->getRawID((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(13)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_A,return )

bool FlxGamepadButtonList_obj::get_B( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_B",0x4fc954c6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_B","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",14,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(14)
		int tmp2 = _this->mapping->getRawID((int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_B,return )

bool FlxGamepadButtonList_obj::get_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_X",0x4fc954dc,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_X","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",15,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		int tmp2 = _this->mapping->getRawID((int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(15)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_X,return )

bool FlxGamepadButtonList_obj::get_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_Y",0x4fc954dd,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_Y","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",16,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		int tmp2 = _this->mapping->getRawID((int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(16)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_Y,return )

bool FlxGamepadButtonList_obj::get_LEFT_SHOULDER( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_SHOULDER",0x7b61bc5c,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_SHOULDER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",17,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(17)
		int tmp2 = _this->mapping->getRawID((int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_SHOULDER,return )

bool FlxGamepadButtonList_obj::get_RIGHT_SHOULDER( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_SHOULDER",0x1879c87f,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_SHOULDER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",18,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(18)
		int tmp2 = _this->mapping->getRawID((int)5);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(18)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_SHOULDER,return )

bool FlxGamepadButtonList_obj::get_BACK( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_BACK",0xfcd4f823,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_BACK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",19,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(19)
		int tmp2 = _this->mapping->getRawID((int)6);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_BACK,return )

bool FlxGamepadButtonList_obj::get_START( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_START",0x13e192c6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_START","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",20,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(20)
		int tmp2 = _this->mapping->getRawID((int)7);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_START,return )

bool FlxGamepadButtonList_obj::get_LEFT_STICK_CLICK( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_STICK_CLICK",0x1bf4fd1d,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_STICK_CLICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",21,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(21)
		int tmp2 = _this->mapping->getRawID((int)8);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_STICK_CLICK,return )

bool FlxGamepadButtonList_obj::get_RIGHT_STICK_CLICK( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_STICK_CLICK",0xc38ee8da,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_STICK_CLICK","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",22,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(22)
		int tmp2 = _this->mapping->getRawID((int)9);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(22)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_STICK_CLICK,return )

bool FlxGamepadButtonList_obj::get_GUIDE( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_GUIDE",0x2bc1d920,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_GUIDE","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",23,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(23)
		int tmp2 = _this->mapping->getRawID((int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(23)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_GUIDE,return )

bool FlxGamepadButtonList_obj::get_DPAD_UP( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_UP",0xeb188fef,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_UP","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",24,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(24)
		int tmp2 = _this->mapping->getRawID((int)11);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(24)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_UP,return )

bool FlxGamepadButtonList_obj::get_DPAD_DOWN( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_DOWN",0x431292f6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_DOWN","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",25,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(25)
		int tmp2 = _this->mapping->getRawID((int)12);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(25)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_DOWN,return )

bool FlxGamepadButtonList_obj::get_DPAD_LEFT( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_LEFT",0x4854a29b,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_LEFT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",26,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(26)
		int tmp2 = _this->mapping->getRawID((int)13);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(26)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_LEFT,return )

bool FlxGamepadButtonList_obj::get_DPAD_RIGHT( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_DPAD_RIGHT",0x78c6b2a8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_DPAD_RIGHT","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",27,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(27)
		int tmp2 = _this->mapping->getRawID((int)14);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_DPAD_RIGHT,return )

bool FlxGamepadButtonList_obj::get_LEFT_TRIGGER( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_LEFT_TRIGGER",0xc549e39c,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_LEFT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",32,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(32)
		int tmp2 = _this->mapping->getRawID((int)22);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_LEFT_TRIGGER,return )

bool FlxGamepadButtonList_obj::get_RIGHT_TRIGGER( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_RIGHT_TRIGGER",0x7a39ecd9,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_RIGHT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",33,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(33)
		int tmp2 = _this->mapping->getRawID((int)23);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_RIGHT_TRIGGER,return )

bool FlxGamepadButtonList_obj::get_EXTRA_0( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_0",0x415030e5,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_0","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",35,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(35)
		int tmp2 = _this->mapping->getRawID((int)30);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_0,return )

bool FlxGamepadButtonList_obj::get_EXTRA_1( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_1",0x415030e6,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_1","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",36,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		int tmp2 = _this->mapping->getRawID((int)31);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(36)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_1,return )

bool FlxGamepadButtonList_obj::get_EXTRA_2( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_2",0x415030e7,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_2","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",37,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		int tmp2 = _this->mapping->getRawID((int)32);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_2,return )

bool FlxGamepadButtonList_obj::get_EXTRA_3( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadButtonList","get_EXTRA_3",0x415030e8,"flixel.input.gamepad.lists.FlxGamepadButtonList.get_EXTRA_3","flixel/input/gamepad/lists/FlxGamepadButtonList.hx",38,0x834770bf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(38)
		int tmp2 = _this->mapping->getRawID((int)33);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		int tmp3 = this->status;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		tmp = _this->checkStatusRaw(tmp2,tmp3);
	}
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadButtonList_obj,get_EXTRA_3,return )


FlxGamepadButtonList_obj::FlxGamepadButtonList_obj()
{
}

Dynamic FlxGamepadButtonList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { if (inCallProp == hx::paccAlways) return get_A(); }
		if (HX_FIELD_EQ(inName,"B") ) { if (inCallProp == hx::paccAlways) return get_B(); }
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == hx::paccAlways) return get_X(); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == hx::paccAlways) return get_Y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { if (inCallProp == hx::paccAlways) return get_BACK(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_A") ) { return get_A_dyn(); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return get_B_dyn(); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return get_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return get_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"START") ) { if (inCallProp == hx::paccAlways) return get_START(); }
		if (HX_FIELD_EQ(inName,"GUIDE") ) { if (inCallProp == hx::paccAlways) return get_GUIDE(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DPAD_UP") ) { if (inCallProp == hx::paccAlways) return get_DPAD_UP(); }
		if (HX_FIELD_EQ(inName,"EXTRA_0") ) { if (inCallProp == hx::paccAlways) return get_EXTRA_0(); }
		if (HX_FIELD_EQ(inName,"EXTRA_1") ) { if (inCallProp == hx::paccAlways) return get_EXTRA_1(); }
		if (HX_FIELD_EQ(inName,"EXTRA_2") ) { if (inCallProp == hx::paccAlways) return get_EXTRA_2(); }
		if (HX_FIELD_EQ(inName,"EXTRA_3") ) { if (inCallProp == hx::paccAlways) return get_EXTRA_3(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return get_BACK_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_START") ) { return get_START_dyn(); }
		if (HX_FIELD_EQ(inName,"get_GUIDE") ) { return get_GUIDE_dyn(); }
		if (HX_FIELD_EQ(inName,"DPAD_DOWN") ) { if (inCallProp == hx::paccAlways) return get_DPAD_DOWN(); }
		if (HX_FIELD_EQ(inName,"DPAD_LEFT") ) { if (inCallProp == hx::paccAlways) return get_DPAD_LEFT(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"DPAD_RIGHT") ) { if (inCallProp == hx::paccAlways) return get_DPAD_RIGHT(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_DPAD_UP") ) { return get_DPAD_UP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_0") ) { return get_EXTRA_0_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_1") ) { return get_EXTRA_1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_2") ) { return get_EXTRA_2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EXTRA_3") ) { return get_EXTRA_3_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return get_LEFT_TRIGGER(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"LEFT_SHOULDER") ) { if (inCallProp == hx::paccAlways) return get_LEFT_SHOULDER(); }
		if (HX_FIELD_EQ(inName,"get_DPAD_DOWN") ) { return get_DPAD_DOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DPAD_LEFT") ) { return get_DPAD_LEFT_dyn(); }
		if (HX_FIELD_EQ(inName,"RIGHT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_TRIGGER(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RIGHT_SHOULDER") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_SHOULDER(); }
		if (HX_FIELD_EQ(inName,"get_DPAD_RIGHT") ) { return get_DPAD_RIGHT_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_CLICK") ) { if (inCallProp == hx::paccAlways) return get_LEFT_STICK_CLICK(); }
		if (HX_FIELD_EQ(inName,"get_LEFT_TRIGGER") ) { return get_LEFT_TRIGGER_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_LEFT_SHOULDER") ) { return get_LEFT_SHOULDER_dyn(); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_CLICK") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_STICK_CLICK(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_TRIGGER") ) { return get_RIGHT_TRIGGER_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_RIGHT_SHOULDER") ) { return get_RIGHT_SHOULDER_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_CLICK") ) { return get_LEFT_STICK_CLICK_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_CLICK") ) { return get_RIGHT_STICK_CLICK_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void FlxGamepadButtonList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("LEFT_SHOULDER","\xd8","\xb1","\xa9","\x01"));
	outFields->push(HX_HCSTRING("RIGHT_SHOULDER","\x83","\x9f","\x28","\x11"));
	outFields->push(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
	outFields->push(HX_HCSTRING("START","\x42","\xac","\xf9","\x01"));
	outFields->push(HX_HCSTRING("LEFT_STICK_CLICK","\x21","\x9d","\x4a","\xbf"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_CLICK","\x56","\x4c","\x25","\x0b"));
	outFields->push(HX_HCSTRING("GUIDE","\x9c","\xf2","\xd9","\x19"));
	outFields->push(HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"));
	outFields->push(HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"));
	outFields->push(HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"));
	outFields->push(HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"));
	outFields->push(HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"));
	outFields->push(HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"));
	outFields->push(HX_HCSTRING("EXTRA_0","\x61","\xa1","\xbe","\xf8"));
	outFields->push(HX_HCSTRING("EXTRA_1","\x62","\xa1","\xbe","\xf8"));
	outFields->push(HX_HCSTRING("EXTRA_2","\x63","\xa1","\xbe","\xf8"));
	outFields->push(HX_HCSTRING("EXTRA_3","\x64","\xa1","\xbe","\xf8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_A","\x18","\xa5","\x60","\x91"),
	HX_HCSTRING("get_B","\x19","\xa5","\x60","\x91"),
	HX_HCSTRING("get_X","\x2f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Y","\x30","\xa5","\x60","\x91"),
	HX_HCSTRING("get_LEFT_SHOULDER","\x2f","\xbd","\x19","\x08"),
	HX_HCSTRING("get_RIGHT_SHOULDER","\x4c","\x80","\xc2","\xac"),
	HX_HCSTRING("get_BACK","\xb0","\x5d","\x8c","\xab"),
	HX_HCSTRING("get_START","\x99","\x08","\xa3","\x45"),
	HX_HCSTRING("get_LEFT_STICK_CLICK","\x2a","\x02","\xb5","\xdd"),
	HX_HCSTRING("get_RIGHT_STICK_CLICK","\x2d","\x4f","\xd3","\x89"),
	HX_HCSTRING("get_GUIDE","\xf3","\x4e","\x83","\x5d"),
	HX_HCSTRING("get_DPAD_UP","\x82","\x60","\x81","\x28"),
	HX_HCSTRING("get_DPAD_DOWN","\x49","\xee","\xbe","\x48"),
	HX_HCSTRING("get_DPAD_LEFT","\xee","\xfd","\x00","\x4e"),
	HX_HCSTRING("get_DPAD_RIGHT","\xf5","\x3f","\xea","\x69"),
	HX_HCSTRING("get_LEFT_TRIGGER","\x29","\x1e","\x65","\xf0"),
	HX_HCSTRING("get_RIGHT_TRIGGER","\xac","\xed","\xf1","\x06"),
	HX_HCSTRING("get_EXTRA_0","\x78","\x01","\xb9","\x7e"),
	HX_HCSTRING("get_EXTRA_1","\x79","\x01","\xb9","\x7e"),
	HX_HCSTRING("get_EXTRA_2","\x7a","\x01","\xb9","\x7e"),
	HX_HCSTRING("get_EXTRA_3","\x7b","\x01","\xb9","\x7e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButtonList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButtonList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadButtonList_obj::__mClass;

void FlxGamepadButtonList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadButtonList","\x5b","\xe0","\xf4","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadButtonList_obj >;
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
