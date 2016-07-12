#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKeyList_obj::__construct(int status,::flixel::input::FlxKeyManager keyManager)
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","new",0xfff37fce,"flixel.input.keyboard.FlxKeyList.new","flixel/input/keyboard/FlxKeyList.hx",10,0xb04d5f03)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(keyManager,"keyManager")
{
	HX_STACK_LINE(10)
	int tmp = status;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	::flixel::input::FlxKeyManager tmp1 = keyManager;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//FlxKeyList_obj::~FlxKeyList_obj() { }

Dynamic FlxKeyList_obj::__CreateEmpty() { return  new FlxKeyList_obj; }
hx::ObjectPtr< FlxKeyList_obj > FlxKeyList_obj::__new(int status,::flixel::input::FlxKeyManager keyManager)
{  hx::ObjectPtr< FlxKeyList_obj > _result_ = new FlxKeyList_obj();
	_result_->__construct(status,keyManager);
	return _result_;}

Dynamic FlxKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyList_obj > _result_ = new FlxKeyList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxKeyList_obj::get_A( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_A",0x7bdd8c06,"flixel.input.keyboard.FlxKeyList.get_A","flixel/input/keyboard/FlxKeyList.hx",12,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	bool tmp2 = tmp->checkStatus((int)65,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_A,return )

bool FlxKeyList_obj::get_B( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_B",0x7bdd8c07,"flixel.input.keyboard.FlxKeyList.get_B","flixel/input/keyboard/FlxKeyList.hx",13,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	bool tmp2 = tmp->checkStatus((int)66,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_B,return )

bool FlxKeyList_obj::get_C( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_C",0x7bdd8c08,"flixel.input.keyboard.FlxKeyList.get_C","flixel/input/keyboard/FlxKeyList.hx",14,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = tmp->checkStatus((int)67,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_C,return )

bool FlxKeyList_obj::get_D( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_D",0x7bdd8c09,"flixel.input.keyboard.FlxKeyList.get_D","flixel/input/keyboard/FlxKeyList.hx",15,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	bool tmp2 = tmp->checkStatus((int)68,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_D,return )

bool FlxKeyList_obj::get_E( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_E",0x7bdd8c0a,"flixel.input.keyboard.FlxKeyList.get_E","flixel/input/keyboard/FlxKeyList.hx",16,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = tmp->checkStatus((int)69,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_E,return )

bool FlxKeyList_obj::get_F( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F",0x7bdd8c0b,"flixel.input.keyboard.FlxKeyList.get_F","flixel/input/keyboard/FlxKeyList.hx",17,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	bool tmp2 = tmp->checkStatus((int)70,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F,return )

bool FlxKeyList_obj::get_G( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_G",0x7bdd8c0c,"flixel.input.keyboard.FlxKeyList.get_G","flixel/input/keyboard/FlxKeyList.hx",18,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	bool tmp2 = tmp->checkStatus((int)71,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_G,return )

bool FlxKeyList_obj::get_H( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_H",0x7bdd8c0d,"flixel.input.keyboard.FlxKeyList.get_H","flixel/input/keyboard/FlxKeyList.hx",19,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	bool tmp2 = tmp->checkStatus((int)72,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_H,return )

bool FlxKeyList_obj::get_I( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_I",0x7bdd8c0e,"flixel.input.keyboard.FlxKeyList.get_I","flixel/input/keyboard/FlxKeyList.hx",20,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	bool tmp2 = tmp->checkStatus((int)73,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_I,return )

bool FlxKeyList_obj::get_J( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_J",0x7bdd8c0f,"flixel.input.keyboard.FlxKeyList.get_J","flixel/input/keyboard/FlxKeyList.hx",21,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	bool tmp2 = tmp->checkStatus((int)74,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_J,return )

bool FlxKeyList_obj::get_K( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_K",0x7bdd8c10,"flixel.input.keyboard.FlxKeyList.get_K","flixel/input/keyboard/FlxKeyList.hx",22,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2 = tmp->checkStatus((int)75,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_K,return )

bool FlxKeyList_obj::get_L( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_L",0x7bdd8c11,"flixel.input.keyboard.FlxKeyList.get_L","flixel/input/keyboard/FlxKeyList.hx",23,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = tmp->checkStatus((int)76,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_L,return )

bool FlxKeyList_obj::get_M( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_M",0x7bdd8c12,"flixel.input.keyboard.FlxKeyList.get_M","flixel/input/keyboard/FlxKeyList.hx",24,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	bool tmp2 = tmp->checkStatus((int)77,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_M,return )

bool FlxKeyList_obj::get_N( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_N",0x7bdd8c13,"flixel.input.keyboard.FlxKeyList.get_N","flixel/input/keyboard/FlxKeyList.hx",25,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	bool tmp2 = tmp->checkStatus((int)78,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_N,return )

bool FlxKeyList_obj::get_O( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_O",0x7bdd8c14,"flixel.input.keyboard.FlxKeyList.get_O","flixel/input/keyboard/FlxKeyList.hx",26,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	bool tmp2 = tmp->checkStatus((int)79,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_O,return )

bool FlxKeyList_obj::get_P( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_P",0x7bdd8c15,"flixel.input.keyboard.FlxKeyList.get_P","flixel/input/keyboard/FlxKeyList.hx",27,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	bool tmp2 = tmp->checkStatus((int)80,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_P,return )

bool FlxKeyList_obj::get_Q( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_Q",0x7bdd8c16,"flixel.input.keyboard.FlxKeyList.get_Q","flixel/input/keyboard/FlxKeyList.hx",28,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2 = tmp->checkStatus((int)81,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Q,return )

bool FlxKeyList_obj::get_R( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_R",0x7bdd8c17,"flixel.input.keyboard.FlxKeyList.get_R","flixel/input/keyboard/FlxKeyList.hx",29,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2 = tmp->checkStatus((int)82,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_R,return )

bool FlxKeyList_obj::get_S( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_S",0x7bdd8c18,"flixel.input.keyboard.FlxKeyList.get_S","flixel/input/keyboard/FlxKeyList.hx",30,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	bool tmp2 = tmp->checkStatus((int)83,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_S,return )

bool FlxKeyList_obj::get_T( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_T",0x7bdd8c19,"flixel.input.keyboard.FlxKeyList.get_T","flixel/input/keyboard/FlxKeyList.hx",31,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	bool tmp2 = tmp->checkStatus((int)84,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_T,return )

bool FlxKeyList_obj::get_U( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_U",0x7bdd8c1a,"flixel.input.keyboard.FlxKeyList.get_U","flixel/input/keyboard/FlxKeyList.hx",32,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	bool tmp2 = tmp->checkStatus((int)85,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_U,return )

bool FlxKeyList_obj::get_V( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_V",0x7bdd8c1b,"flixel.input.keyboard.FlxKeyList.get_V","flixel/input/keyboard/FlxKeyList.hx",33,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	bool tmp2 = tmp->checkStatus((int)86,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_V,return )

bool FlxKeyList_obj::get_W( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_W",0x7bdd8c1c,"flixel.input.keyboard.FlxKeyList.get_W","flixel/input/keyboard/FlxKeyList.hx",34,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = tmp->checkStatus((int)87,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_W,return )

bool FlxKeyList_obj::get_X( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_X",0x7bdd8c1d,"flixel.input.keyboard.FlxKeyList.get_X","flixel/input/keyboard/FlxKeyList.hx",35,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	bool tmp2 = tmp->checkStatus((int)88,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_X,return )

bool FlxKeyList_obj::get_Y( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_Y",0x7bdd8c1e,"flixel.input.keyboard.FlxKeyList.get_Y","flixel/input/keyboard/FlxKeyList.hx",36,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = tmp->checkStatus((int)89,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Y,return )

bool FlxKeyList_obj::get_Z( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_Z",0x7bdd8c1f,"flixel.input.keyboard.FlxKeyList.get_Z","flixel/input/keyboard/FlxKeyList.hx",37,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = tmp->checkStatus((int)90,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Z,return )

bool FlxKeyList_obj::get_ZERO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ZERO",0x2ad43483,"flixel.input.keyboard.FlxKeyList.get_ZERO","flixel/input/keyboard/FlxKeyList.hx",38,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	bool tmp2 = tmp->checkStatus((int)48,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ZERO,return )

bool FlxKeyList_obj::get_ONE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ONE",0x5767fd4b,"flixel.input.keyboard.FlxKeyList.get_ONE","flixel/input/keyboard/FlxKeyList.hx",39,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	bool tmp2 = tmp->checkStatus((int)49,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ONE,return )

bool FlxKeyList_obj::get_TWO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_TWO",0x576bd071,"flixel.input.keyboard.FlxKeyList.get_TWO","flixel/input/keyboard/FlxKeyList.hx",40,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = tmp->checkStatus((int)50,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TWO,return )

bool FlxKeyList_obj::get_THREE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_THREE",0xdc6dde83,"flixel.input.keyboard.FlxKeyList.get_THREE","flixel/input/keyboard/FlxKeyList.hx",41,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	bool tmp2 = tmp->checkStatus((int)51,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_THREE,return )

bool FlxKeyList_obj::get_FOUR( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_FOUR",0x1da38941,"flixel.input.keyboard.FlxKeyList.get_FOUR","flixel/input/keyboard/FlxKeyList.hx",42,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	bool tmp2 = tmp->checkStatus((int)52,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FOUR,return )

bool FlxKeyList_obj::get_FIVE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_FIVE",0x1d9efc8d,"flixel.input.keyboard.FlxKeyList.get_FIVE","flixel/input/keyboard/FlxKeyList.hx",43,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	bool tmp2 = tmp->checkStatus((int)53,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FIVE,return )

bool FlxKeyList_obj::get_SIX( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SIX",0x576b0207,"flixel.input.keyboard.FlxKeyList.get_SIX","flixel/input/keyboard/FlxKeyList.hx",44,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	bool tmp2 = tmp->checkStatus((int)54,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SIX,return )

bool FlxKeyList_obj::get_SEVEN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SEVEN",0x470eaf32,"flixel.input.keyboard.FlxKeyList.get_SEVEN","flixel/input/keyboard/FlxKeyList.hx",45,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	bool tmp2 = tmp->checkStatus((int)55,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEVEN,return )

bool FlxKeyList_obj::get_EIGHT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_EIGHT",0x3a0c0b74,"flixel.input.keyboard.FlxKeyList.get_EIGHT","flixel/input/keyboard/FlxKeyList.hx",46,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	bool tmp2 = tmp->checkStatus((int)56,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_EIGHT,return )

bool FlxKeyList_obj::get_NINE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NINE",0x22e8aa8d,"flixel.input.keyboard.FlxKeyList.get_NINE","flixel/input/keyboard/FlxKeyList.hx",47,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	bool tmp2 = tmp->checkStatus((int)57,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NINE,return )

bool FlxKeyList_obj::get_PAGEUP( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PAGEUP",0x5b340885,"flixel.input.keyboard.FlxKeyList.get_PAGEUP","flixel/input/keyboard/FlxKeyList.hx",48,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	bool tmp2 = tmp->checkStatus((int)33,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEUP,return )

bool FlxKeyList_obj::get_PAGEDOWN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PAGEDOWN",0x8b6ddd0c,"flixel.input.keyboard.FlxKeyList.get_PAGEDOWN","flixel/input/keyboard/FlxKeyList.hx",49,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = tmp->checkStatus((int)34,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEDOWN,return )

bool FlxKeyList_obj::get_HOME( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_HOME",0x1ef5ef7a,"flixel.input.keyboard.FlxKeyList.get_HOME","flixel/input/keyboard/FlxKeyList.hx",50,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2 = tmp->checkStatus((int)36,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_HOME,return )

bool FlxKeyList_obj::get_END( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_END",0x576066c0,"flixel.input.keyboard.FlxKeyList.get_END","flixel/input/keyboard/FlxKeyList.hx",51,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2 = tmp->checkStatus((int)35,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_END,return )

bool FlxKeyList_obj::get_INSERT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_INSERT",0x12d89954,"flixel.input.keyboard.FlxKeyList.get_INSERT","flixel/input/keyboard/FlxKeyList.hx",52,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	bool tmp2 = tmp->checkStatus((int)45,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_INSERT,return )

bool FlxKeyList_obj::get_ESCAPE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ESCAPE",0x4fd5999c,"flixel.input.keyboard.FlxKeyList.get_ESCAPE","flixel/input/keyboard/FlxKeyList.hx",53,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2 = tmp->checkStatus((int)27,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ESCAPE,return )

bool FlxKeyList_obj::get_MINUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_MINUS",0xd5460a95,"flixel.input.keyboard.FlxKeyList.get_MINUS","flixel/input/keyboard/FlxKeyList.hx",54,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	bool tmp2 = tmp->checkStatus((int)189,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_MINUS,return )

bool FlxKeyList_obj::get_PLUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PLUS",0x243d64b5,"flixel.input.keyboard.FlxKeyList.get_PLUS","flixel/input/keyboard/FlxKeyList.hx",55,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	bool tmp2 = tmp->checkStatus((int)187,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PLUS,return )

bool FlxKeyList_obj::get_DELETE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_DELETE",0xdfd41646,"flixel.input.keyboard.FlxKeyList.get_DELETE","flixel/input/keyboard/FlxKeyList.hx",56,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = tmp->checkStatus((int)46,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DELETE,return )

bool FlxKeyList_obj::get_BACKSPACE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_BACKSPACE",0x4ee94de4,"flixel.input.keyboard.FlxKeyList.get_BACKSPACE","flixel/input/keyboard/FlxKeyList.hx",57,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	bool tmp2 = tmp->checkStatus((int)8,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSPACE,return )

bool FlxKeyList_obj::get_LBRACKET( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_LBRACKET",0xe7dfe217,"flixel.input.keyboard.FlxKeyList.get_LBRACKET","flixel/input/keyboard/FlxKeyList.hx",58,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2 = tmp->checkStatus((int)219,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LBRACKET,return )

bool FlxKeyList_obj::get_RBRACKET( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_RBRACKET",0x3f0e8ed1,"flixel.input.keyboard.FlxKeyList.get_RBRACKET","flixel/input/keyboard/FlxKeyList.hx",59,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = tmp->checkStatus((int)221,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RBRACKET,return )

bool FlxKeyList_obj::get_BACKSLASH( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_BACKSLASH",0x4c44815b,"flixel.input.keyboard.FlxKeyList.get_BACKSLASH","flixel/input/keyboard/FlxKeyList.hx",60,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	bool tmp2 = tmp->checkStatus((int)220,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSLASH,return )

bool FlxKeyList_obj::get_CAPSLOCK( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_CAPSLOCK",0x51fa1367,"flixel.input.keyboard.FlxKeyList.get_CAPSLOCK","flixel/input/keyboard/FlxKeyList.hx",61,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	bool tmp2 = tmp->checkStatus((int)20,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CAPSLOCK,return )

bool FlxKeyList_obj::get_SEMICOLON( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SEMICOLON",0xd1d0ded6,"flixel.input.keyboard.FlxKeyList.get_SEMICOLON","flixel/input/keyboard/FlxKeyList.hx",62,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	bool tmp2 = tmp->checkStatus((int)186,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEMICOLON,return )

bool FlxKeyList_obj::get_QUOTE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_QUOTE",0x2acfad61,"flixel.input.keyboard.FlxKeyList.get_QUOTE","flixel/input/keyboard/FlxKeyList.hx",63,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	bool tmp2 = tmp->checkStatus((int)222,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_QUOTE,return )

bool FlxKeyList_obj::get_ENTER( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ENTER",0x3d63f73d,"flixel.input.keyboard.FlxKeyList.get_ENTER","flixel/input/keyboard/FlxKeyList.hx",64,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp->checkStatus((int)13,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ENTER,return )

bool FlxKeyList_obj::get_SHIFT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SHIFT",0x490076a7,"flixel.input.keyboard.FlxKeyList.get_SHIFT","flixel/input/keyboard/FlxKeyList.hx",65,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	bool tmp2 = tmp->checkStatus((int)16,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SHIFT,return )

bool FlxKeyList_obj::get_COMMA( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_COMMA",0x173abbfa,"flixel.input.keyboard.FlxKeyList.get_COMMA","flixel/input/keyboard/FlxKeyList.hx",66,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	bool tmp2 = tmp->checkStatus((int)188,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_COMMA,return )

bool FlxKeyList_obj::get_PERIOD( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PERIOD",0xb016b71c,"flixel.input.keyboard.FlxKeyList.get_PERIOD","flixel/input/keyboard/FlxKeyList.hx",67,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	bool tmp2 = tmp->checkStatus((int)190,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PERIOD,return )

bool FlxKeyList_obj::get_SLASH( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SLASH",0x4b9f4a62,"flixel.input.keyboard.FlxKeyList.get_SLASH","flixel/input/keyboard/FlxKeyList.hx",68,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = tmp->checkStatus((int)191,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SLASH,return )

bool FlxKeyList_obj::get_GRAVEACCENT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_GRAVEACCENT",0xd01c3774,"flixel.input.keyboard.FlxKeyList.get_GRAVEACCENT","flixel/input/keyboard/FlxKeyList.hx",69,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = tmp->checkStatus((int)192,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_GRAVEACCENT,return )

bool FlxKeyList_obj::get_CONTROL( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_CONTROL",0x00716cc2,"flixel.input.keyboard.FlxKeyList.get_CONTROL","flixel/input/keyboard/FlxKeyList.hx",70,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2 = tmp->checkStatus((int)17,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CONTROL,return )

bool FlxKeyList_obj::get_ALT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_ALT",0x575d5c0e,"flixel.input.keyboard.FlxKeyList.get_ALT","flixel/input/keyboard/FlxKeyList.hx",71,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = tmp->checkStatus((int)18,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ALT,return )

bool FlxKeyList_obj::get_SPACE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_SPACE",0x4e4416eb,"flixel.input.keyboard.FlxKeyList.get_SPACE","flixel/input/keyboard/FlxKeyList.hx",72,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	bool tmp2 = tmp->checkStatus((int)32,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SPACE,return )

bool FlxKeyList_obj::get_UP( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_UP",0xe5fd0af6,"flixel.input.keyboard.FlxKeyList.get_UP","flixel/input/keyboard/FlxKeyList.hx",73,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	bool tmp2 = tmp->checkStatus((int)38,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_UP,return )

bool FlxKeyList_obj::get_DOWN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_DOWN",0x1c511dbd,"flixel.input.keyboard.FlxKeyList.get_DOWN","flixel/input/keyboard/FlxKeyList.hx",74,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(74)
	bool tmp2 = tmp->checkStatus((int)40,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DOWN,return )

bool FlxKeyList_obj::get_LEFT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_LEFT",0x21932d62,"flixel.input.keyboard.FlxKeyList.get_LEFT","flixel/input/keyboard/FlxKeyList.hx",75,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	bool tmp2 = tmp->checkStatus((int)37,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LEFT,return )

bool FlxKeyList_obj::get_RIGHT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_RIGHT",0xb6419601,"flixel.input.keyboard.FlxKeyList.get_RIGHT","flixel/input/keyboard/FlxKeyList.hx",76,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	bool tmp2 = tmp->checkStatus((int)39,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RIGHT,return )

bool FlxKeyList_obj::get_TAB( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_TAB",0x576bbd3a,"flixel.input.keyboard.FlxKeyList.get_TAB","flixel/input/keyboard/FlxKeyList.hx",77,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	bool tmp2 = tmp->checkStatus((int)9,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TAB,return )

bool FlxKeyList_obj::get_PRINTSCREEN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_PRINTSCREEN",0xd1fe533e,"flixel.input.keyboard.FlxKeyList.get_PRINTSCREEN","flixel/input/keyboard/FlxKeyList.hx",78,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	bool tmp2 = tmp->checkStatus((int)301,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PRINTSCREEN,return )

bool FlxKeyList_obj::get_F1( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F1",0xe5fcfdc6,"flixel.input.keyboard.FlxKeyList.get_F1","flixel/input/keyboard/FlxKeyList.hx",79,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	bool tmp2 = tmp->checkStatus((int)112,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F1,return )

bool FlxKeyList_obj::get_F2( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F2",0xe5fcfdc7,"flixel.input.keyboard.FlxKeyList.get_F2","flixel/input/keyboard/FlxKeyList.hx",80,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	bool tmp2 = tmp->checkStatus((int)113,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F2,return )

bool FlxKeyList_obj::get_F3( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F3",0xe5fcfdc8,"flixel.input.keyboard.FlxKeyList.get_F3","flixel/input/keyboard/FlxKeyList.hx",81,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	bool tmp2 = tmp->checkStatus((int)114,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F3,return )

bool FlxKeyList_obj::get_F4( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F4",0xe5fcfdc9,"flixel.input.keyboard.FlxKeyList.get_F4","flixel/input/keyboard/FlxKeyList.hx",82,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	bool tmp2 = tmp->checkStatus((int)115,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F4,return )

bool FlxKeyList_obj::get_F5( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F5",0xe5fcfdca,"flixel.input.keyboard.FlxKeyList.get_F5","flixel/input/keyboard/FlxKeyList.hx",83,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	bool tmp2 = tmp->checkStatus((int)116,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F5,return )

bool FlxKeyList_obj::get_F6( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F6",0xe5fcfdcb,"flixel.input.keyboard.FlxKeyList.get_F6","flixel/input/keyboard/FlxKeyList.hx",84,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	bool tmp2 = tmp->checkStatus((int)117,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F6,return )

bool FlxKeyList_obj::get_F7( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F7",0xe5fcfdcc,"flixel.input.keyboard.FlxKeyList.get_F7","flixel/input/keyboard/FlxKeyList.hx",85,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	bool tmp2 = tmp->checkStatus((int)118,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F7,return )

bool FlxKeyList_obj::get_F8( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F8",0xe5fcfdcd,"flixel.input.keyboard.FlxKeyList.get_F8","flixel/input/keyboard/FlxKeyList.hx",86,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	bool tmp2 = tmp->checkStatus((int)119,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F8,return )

bool FlxKeyList_obj::get_F9( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F9",0xe5fcfdce,"flixel.input.keyboard.FlxKeyList.get_F9","flixel/input/keyboard/FlxKeyList.hx",87,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	bool tmp2 = tmp->checkStatus((int)120,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F9,return )

bool FlxKeyList_obj::get_F10( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F10",0x57610faa,"flixel.input.keyboard.FlxKeyList.get_F10","flixel/input/keyboard/FlxKeyList.hx",88,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	bool tmp2 = tmp->checkStatus((int)121,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F10,return )

bool FlxKeyList_obj::get_F11( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F11",0x57610fab,"flixel.input.keyboard.FlxKeyList.get_F11","flixel/input/keyboard/FlxKeyList.hx",89,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2 = tmp->checkStatus((int)122,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F11,return )

bool FlxKeyList_obj::get_F12( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_F12",0x57610fac,"flixel.input.keyboard.FlxKeyList.get_F12","flixel/input/keyboard/FlxKeyList.hx",90,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = tmp->checkStatus((int)123,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F12,return )

bool FlxKeyList_obj::get_NUMPADONE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADONE",0xe4b03e5e,"flixel.input.keyboard.FlxKeyList.get_NUMPADONE","flixel/input/keyboard/FlxKeyList.hx",91,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(91)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	bool tmp2 = tmp->checkStatus((int)97,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADONE,return )

bool FlxKeyList_obj::get_NUMPADTWO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADTWO",0xe4b41184,"flixel.input.keyboard.FlxKeyList.get_NUMPADTWO","flixel/input/keyboard/FlxKeyList.hx",92,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	bool tmp2 = tmp->checkStatus((int)98,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTWO,return )

bool FlxKeyList_obj::get_NUMPADTHREE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADTHREE",0x7d16ca56,"flixel.input.keyboard.FlxKeyList.get_NUMPADTHREE","flixel/input/keyboard/FlxKeyList.hx",93,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	bool tmp2 = tmp->checkStatus((int)99,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTHREE,return )

bool FlxKeyList_obj::get_NUMPADFOUR( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADFOUR",0x2f9438ce,"flixel.input.keyboard.FlxKeyList.get_NUMPADFOUR","flixel/input/keyboard/FlxKeyList.hx",94,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	bool tmp2 = tmp->checkStatus((int)100,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFOUR,return )

bool FlxKeyList_obj::get_NUMPADFIVE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADFIVE",0x2f8fac1a,"flixel.input.keyboard.FlxKeyList.get_NUMPADFIVE","flixel/input/keyboard/FlxKeyList.hx",95,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	bool tmp2 = tmp->checkStatus((int)101,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFIVE,return )

bool FlxKeyList_obj::get_NUMPADSIX( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADSIX",0xe4b3431a,"flixel.input.keyboard.FlxKeyList.get_NUMPADSIX","flixel/input/keyboard/FlxKeyList.hx",96,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	bool tmp2 = tmp->checkStatus((int)102,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSIX,return )

bool FlxKeyList_obj::get_NUMPADSEVEN( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADSEVEN",0xe7b79b05,"flixel.input.keyboard.FlxKeyList.get_NUMPADSEVEN","flixel/input/keyboard/FlxKeyList.hx",97,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	bool tmp2 = tmp->checkStatus((int)103,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSEVEN,return )

bool FlxKeyList_obj::get_NUMPADEIGHT( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADEIGHT",0xdab4f747,"flixel.input.keyboard.FlxKeyList.get_NUMPADEIGHT","flixel/input/keyboard/FlxKeyList.hx",98,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	bool tmp2 = tmp->checkStatus((int)104,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADEIGHT,return )

bool FlxKeyList_obj::get_NUMPADNINE( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADNINE",0x34d95a1a,"flixel.input.keyboard.FlxKeyList.get_NUMPADNINE","flixel/input/keyboard/FlxKeyList.hx",99,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	bool tmp2 = tmp->checkStatus((int)105,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADNINE,return )

bool FlxKeyList_obj::get_NUMPADZERO( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADZERO",0x3cc4e410,"flixel.input.keyboard.FlxKeyList.get_NUMPADZERO","flixel/input/keyboard/FlxKeyList.hx",100,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	bool tmp2 = tmp->checkStatus((int)96,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADZERO,return )

bool FlxKeyList_obj::get_NUMPADMINUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADMINUS",0x75eef668,"flixel.input.keyboard.FlxKeyList.get_NUMPADMINUS","flixel/input/keyboard/FlxKeyList.hx",101,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	bool tmp2 = tmp->checkStatus((int)109,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMINUS,return )

bool FlxKeyList_obj::get_NUMPADPLUS( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADPLUS",0x362e1442,"flixel.input.keyboard.FlxKeyList.get_NUMPADPLUS","flixel/input/keyboard/FlxKeyList.hx",102,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	bool tmp2 = tmp->checkStatus((int)107,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPLUS,return )

bool FlxKeyList_obj::get_NUMPADPERIOD( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADPERIOD",0xa33c23e9,"flixel.input.keyboard.FlxKeyList.get_NUMPADPERIOD","flixel/input/keyboard/FlxKeyList.hx",103,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	bool tmp2 = tmp->checkStatus((int)110,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPERIOD,return )

bool FlxKeyList_obj::get_NUMPADMULTIPLY( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyList","get_NUMPADMULTIPLY",0xde92130c,"flixel.input.keyboard.FlxKeyList.get_NUMPADMULTIPLY","flixel/input/keyboard/FlxKeyList.hx",104,0xb04d5f03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	::flixel::input::FlxKeyManager tmp = this->keyManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int tmp1 = this->status;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	bool tmp2 = tmp->checkStatus((int)106,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMULTIPLY,return )


FlxKeyList_obj::FlxKeyList_obj()
{
}

Dynamic FlxKeyList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { if (inCallProp == hx::paccAlways) return get_A(); }
		if (HX_FIELD_EQ(inName,"B") ) { if (inCallProp == hx::paccAlways) return get_B(); }
		if (HX_FIELD_EQ(inName,"C") ) { if (inCallProp == hx::paccAlways) return get_C(); }
		if (HX_FIELD_EQ(inName,"D") ) { if (inCallProp == hx::paccAlways) return get_D(); }
		if (HX_FIELD_EQ(inName,"E") ) { if (inCallProp == hx::paccAlways) return get_E(); }
		if (HX_FIELD_EQ(inName,"F") ) { if (inCallProp == hx::paccAlways) return get_F(); }
		if (HX_FIELD_EQ(inName,"G") ) { if (inCallProp == hx::paccAlways) return get_G(); }
		if (HX_FIELD_EQ(inName,"H") ) { if (inCallProp == hx::paccAlways) return get_H(); }
		if (HX_FIELD_EQ(inName,"I") ) { if (inCallProp == hx::paccAlways) return get_I(); }
		if (HX_FIELD_EQ(inName,"J") ) { if (inCallProp == hx::paccAlways) return get_J(); }
		if (HX_FIELD_EQ(inName,"K") ) { if (inCallProp == hx::paccAlways) return get_K(); }
		if (HX_FIELD_EQ(inName,"L") ) { if (inCallProp == hx::paccAlways) return get_L(); }
		if (HX_FIELD_EQ(inName,"M") ) { if (inCallProp == hx::paccAlways) return get_M(); }
		if (HX_FIELD_EQ(inName,"N") ) { if (inCallProp == hx::paccAlways) return get_N(); }
		if (HX_FIELD_EQ(inName,"O") ) { if (inCallProp == hx::paccAlways) return get_O(); }
		if (HX_FIELD_EQ(inName,"P") ) { if (inCallProp == hx::paccAlways) return get_P(); }
		if (HX_FIELD_EQ(inName,"Q") ) { if (inCallProp == hx::paccAlways) return get_Q(); }
		if (HX_FIELD_EQ(inName,"R") ) { if (inCallProp == hx::paccAlways) return get_R(); }
		if (HX_FIELD_EQ(inName,"S") ) { if (inCallProp == hx::paccAlways) return get_S(); }
		if (HX_FIELD_EQ(inName,"T") ) { if (inCallProp == hx::paccAlways) return get_T(); }
		if (HX_FIELD_EQ(inName,"U") ) { if (inCallProp == hx::paccAlways) return get_U(); }
		if (HX_FIELD_EQ(inName,"V") ) { if (inCallProp == hx::paccAlways) return get_V(); }
		if (HX_FIELD_EQ(inName,"W") ) { if (inCallProp == hx::paccAlways) return get_W(); }
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == hx::paccAlways) return get_X(); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == hx::paccAlways) return get_Y(); }
		if (HX_FIELD_EQ(inName,"Z") ) { if (inCallProp == hx::paccAlways) return get_Z(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { if (inCallProp == hx::paccAlways) return get_UP(); }
		if (HX_FIELD_EQ(inName,"F1") ) { if (inCallProp == hx::paccAlways) return get_F1(); }
		if (HX_FIELD_EQ(inName,"F2") ) { if (inCallProp == hx::paccAlways) return get_F2(); }
		if (HX_FIELD_EQ(inName,"F3") ) { if (inCallProp == hx::paccAlways) return get_F3(); }
		if (HX_FIELD_EQ(inName,"F4") ) { if (inCallProp == hx::paccAlways) return get_F4(); }
		if (HX_FIELD_EQ(inName,"F5") ) { if (inCallProp == hx::paccAlways) return get_F5(); }
		if (HX_FIELD_EQ(inName,"F6") ) { if (inCallProp == hx::paccAlways) return get_F6(); }
		if (HX_FIELD_EQ(inName,"F7") ) { if (inCallProp == hx::paccAlways) return get_F7(); }
		if (HX_FIELD_EQ(inName,"F8") ) { if (inCallProp == hx::paccAlways) return get_F8(); }
		if (HX_FIELD_EQ(inName,"F9") ) { if (inCallProp == hx::paccAlways) return get_F9(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { if (inCallProp == hx::paccAlways) return get_ONE(); }
		if (HX_FIELD_EQ(inName,"TWO") ) { if (inCallProp == hx::paccAlways) return get_TWO(); }
		if (HX_FIELD_EQ(inName,"SIX") ) { if (inCallProp == hx::paccAlways) return get_SIX(); }
		if (HX_FIELD_EQ(inName,"END") ) { if (inCallProp == hx::paccAlways) return get_END(); }
		if (HX_FIELD_EQ(inName,"ALT") ) { if (inCallProp == hx::paccAlways) return get_ALT(); }
		if (HX_FIELD_EQ(inName,"TAB") ) { if (inCallProp == hx::paccAlways) return get_TAB(); }
		if (HX_FIELD_EQ(inName,"F10") ) { if (inCallProp == hx::paccAlways) return get_F10(); }
		if (HX_FIELD_EQ(inName,"F11") ) { if (inCallProp == hx::paccAlways) return get_F11(); }
		if (HX_FIELD_EQ(inName,"F12") ) { if (inCallProp == hx::paccAlways) return get_F12(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { if (inCallProp == hx::paccAlways) return get_ZERO(); }
		if (HX_FIELD_EQ(inName,"FOUR") ) { if (inCallProp == hx::paccAlways) return get_FOUR(); }
		if (HX_FIELD_EQ(inName,"FIVE") ) { if (inCallProp == hx::paccAlways) return get_FIVE(); }
		if (HX_FIELD_EQ(inName,"NINE") ) { if (inCallProp == hx::paccAlways) return get_NINE(); }
		if (HX_FIELD_EQ(inName,"HOME") ) { if (inCallProp == hx::paccAlways) return get_HOME(); }
		if (HX_FIELD_EQ(inName,"PLUS") ) { if (inCallProp == hx::paccAlways) return get_PLUS(); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { if (inCallProp == hx::paccAlways) return get_DOWN(); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { if (inCallProp == hx::paccAlways) return get_LEFT(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_A") ) { return get_A_dyn(); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return get_B_dyn(); }
		if (HX_FIELD_EQ(inName,"get_C") ) { return get_C_dyn(); }
		if (HX_FIELD_EQ(inName,"get_D") ) { return get_D_dyn(); }
		if (HX_FIELD_EQ(inName,"get_E") ) { return get_E_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F") ) { return get_F_dyn(); }
		if (HX_FIELD_EQ(inName,"get_G") ) { return get_G_dyn(); }
		if (HX_FIELD_EQ(inName,"get_H") ) { return get_H_dyn(); }
		if (HX_FIELD_EQ(inName,"get_I") ) { return get_I_dyn(); }
		if (HX_FIELD_EQ(inName,"get_J") ) { return get_J_dyn(); }
		if (HX_FIELD_EQ(inName,"get_K") ) { return get_K_dyn(); }
		if (HX_FIELD_EQ(inName,"get_L") ) { return get_L_dyn(); }
		if (HX_FIELD_EQ(inName,"get_M") ) { return get_M_dyn(); }
		if (HX_FIELD_EQ(inName,"get_N") ) { return get_N_dyn(); }
		if (HX_FIELD_EQ(inName,"get_O") ) { return get_O_dyn(); }
		if (HX_FIELD_EQ(inName,"get_P") ) { return get_P_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Q") ) { return get_Q_dyn(); }
		if (HX_FIELD_EQ(inName,"get_R") ) { return get_R_dyn(); }
		if (HX_FIELD_EQ(inName,"get_S") ) { return get_S_dyn(); }
		if (HX_FIELD_EQ(inName,"get_T") ) { return get_T_dyn(); }
		if (HX_FIELD_EQ(inName,"get_U") ) { return get_U_dyn(); }
		if (HX_FIELD_EQ(inName,"get_V") ) { return get_V_dyn(); }
		if (HX_FIELD_EQ(inName,"get_W") ) { return get_W_dyn(); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return get_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return get_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Z") ) { return get_Z_dyn(); }
		if (HX_FIELD_EQ(inName,"THREE") ) { if (inCallProp == hx::paccAlways) return get_THREE(); }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { if (inCallProp == hx::paccAlways) return get_SEVEN(); }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { if (inCallProp == hx::paccAlways) return get_EIGHT(); }
		if (HX_FIELD_EQ(inName,"MINUS") ) { if (inCallProp == hx::paccAlways) return get_MINUS(); }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { if (inCallProp == hx::paccAlways) return get_QUOTE(); }
		if (HX_FIELD_EQ(inName,"ENTER") ) { if (inCallProp == hx::paccAlways) return get_ENTER(); }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { if (inCallProp == hx::paccAlways) return get_SHIFT(); }
		if (HX_FIELD_EQ(inName,"COMMA") ) { if (inCallProp == hx::paccAlways) return get_COMMA(); }
		if (HX_FIELD_EQ(inName,"SLASH") ) { if (inCallProp == hx::paccAlways) return get_SLASH(); }
		if (HX_FIELD_EQ(inName,"SPACE") ) { if (inCallProp == hx::paccAlways) return get_SPACE(); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { if (inCallProp == hx::paccAlways) return get_RIGHT(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { if (inCallProp == hx::paccAlways) return get_PAGEUP(); }
		if (HX_FIELD_EQ(inName,"INSERT") ) { if (inCallProp == hx::paccAlways) return get_INSERT(); }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { if (inCallProp == hx::paccAlways) return get_ESCAPE(); }
		if (HX_FIELD_EQ(inName,"DELETE") ) { if (inCallProp == hx::paccAlways) return get_DELETE(); }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { if (inCallProp == hx::paccAlways) return get_PERIOD(); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return get_UP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F1") ) { return get_F1_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F2") ) { return get_F2_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F3") ) { return get_F3_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F4") ) { return get_F4_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F5") ) { return get_F5_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F6") ) { return get_F6_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F7") ) { return get_F7_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F8") ) { return get_F8_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F9") ) { return get_F9_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ONE") ) { return get_ONE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TWO") ) { return get_TWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SIX") ) { return get_SIX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return get_END_dyn(); }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { if (inCallProp == hx::paccAlways) return get_CONTROL(); }
		if (HX_FIELD_EQ(inName,"get_ALT") ) { return get_ALT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TAB") ) { return get_TAB_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F10") ) { return get_F10_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F11") ) { return get_F11_dyn(); }
		if (HX_FIELD_EQ(inName,"get_F12") ) { return get_F12_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_ZERO") ) { return get_ZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FOUR") ) { return get_FOUR_dyn(); }
		if (HX_FIELD_EQ(inName,"get_FIVE") ) { return get_FIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NINE") ) { return get_NINE_dyn(); }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { if (inCallProp == hx::paccAlways) return get_PAGEDOWN(); }
		if (HX_FIELD_EQ(inName,"get_HOME") ) { return get_HOME_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PLUS") ) { return get_PLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { if (inCallProp == hx::paccAlways) return get_LBRACKET(); }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { if (inCallProp == hx::paccAlways) return get_RBRACKET(); }
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { if (inCallProp == hx::paccAlways) return get_CAPSLOCK(); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return get_DOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return get_LEFT_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_THREE") ) { return get_THREE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SEVEN") ) { return get_SEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_EIGHT") ) { return get_EIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_MINUS") ) { return get_MINUS_dyn(); }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { if (inCallProp == hx::paccAlways) return get_BACKSPACE(); }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { if (inCallProp == hx::paccAlways) return get_BACKSLASH(); }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { if (inCallProp == hx::paccAlways) return get_SEMICOLON(); }
		if (HX_FIELD_EQ(inName,"get_QUOTE") ) { return get_QUOTE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ENTER") ) { return get_ENTER_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SHIFT") ) { return get_SHIFT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_COMMA") ) { return get_COMMA_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SLASH") ) { return get_SLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SPACE") ) { return get_SPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return get_RIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { if (inCallProp == hx::paccAlways) return get_NUMPADONE(); }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { if (inCallProp == hx::paccAlways) return get_NUMPADTWO(); }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { if (inCallProp == hx::paccAlways) return get_NUMPADSIX(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_PAGEUP") ) { return get_PAGEUP_dyn(); }
		if (HX_FIELD_EQ(inName,"get_INSERT") ) { return get_INSERT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ESCAPE") ) { return get_ESCAPE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_DELETE") ) { return get_DELETE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PERIOD") ) { return get_PERIOD_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { if (inCallProp == hx::paccAlways) return get_NUMPADFOUR(); }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { if (inCallProp == hx::paccAlways) return get_NUMPADFIVE(); }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { if (inCallProp == hx::paccAlways) return get_NUMPADNINE(); }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { if (inCallProp == hx::paccAlways) return get_NUMPADZERO(); }
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { if (inCallProp == hx::paccAlways) return get_NUMPADPLUS(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"GRAVEACCENT") ) { if (inCallProp == hx::paccAlways) return get_GRAVEACCENT(); }
		if (HX_FIELD_EQ(inName,"get_CONTROL") ) { return get_CONTROL_dyn(); }
		if (HX_FIELD_EQ(inName,"PRINTSCREEN") ) { if (inCallProp == hx::paccAlways) return get_PRINTSCREEN(); }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { if (inCallProp == hx::paccAlways) return get_NUMPADTHREE(); }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { if (inCallProp == hx::paccAlways) return get_NUMPADSEVEN(); }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { if (inCallProp == hx::paccAlways) return get_NUMPADEIGHT(); }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { if (inCallProp == hx::paccAlways) return get_NUMPADMINUS(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_PAGEDOWN") ) { return get_PAGEDOWN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LBRACKET") ) { return get_LBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RBRACKET") ) { return get_RBRACKET_dyn(); }
		if (HX_FIELD_EQ(inName,"get_CAPSLOCK") ) { return get_CAPSLOCK_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { if (inCallProp == hx::paccAlways) return get_NUMPADPERIOD(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_BACKSPACE") ) { return get_BACKSPACE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_BACKSLASH") ) { return get_BACKSLASH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_SEMICOLON") ) { return get_SEMICOLON_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADONE") ) { return get_NUMPADONE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTWO") ) { return get_NUMPADTWO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSIX") ) { return get_NUMPADSIX_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_NUMPADFOUR") ) { return get_NUMPADFOUR_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFIVE") ) { return get_NUMPADFIVE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADNINE") ) { return get_NUMPADNINE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADZERO") ) { return get_NUMPADZERO_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADPLUS") ) { return get_NUMPADPLUS_dyn(); }
		if (HX_FIELD_EQ(inName,"NUMPADMULTIPLY") ) { if (inCallProp == hx::paccAlways) return get_NUMPADMULTIPLY(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_GRAVEACCENT") ) { return get_GRAVEACCENT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_PRINTSCREEN") ) { return get_PRINTSCREEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTHREE") ) { return get_NUMPADTHREE_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSEVEN") ) { return get_NUMPADSEVEN_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADEIGHT") ) { return get_NUMPADEIGHT_dyn(); }
		if (HX_FIELD_EQ(inName,"get_NUMPADMINUS") ) { return get_NUMPADMINUS_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NUMPADPERIOD") ) { return get_NUMPADPERIOD_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_NUMPADMULTIPLY") ) { return get_NUMPADMULTIPLY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

void FlxKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("A","\x41","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("B","\x42","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("C","\x43","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("D","\x44","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("G","\x47","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("H","\x48","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("I","\x49","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("J","\x4a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("K","\x4b","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("L","\x4c","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("M","\x4d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("N","\x4e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("O","\x4f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("P","\x50","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("S","\x53","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("T","\x54","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("U","\x55","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("V","\x56","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"));
	outFields->push(HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"));
	outFields->push(HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"));
	outFields->push(HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"));
	outFields->push(HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"));
	outFields->push(HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"));
	outFields->push(HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"));
	outFields->push(HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"));
	outFields->push(HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"));
	outFields->push(HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"));
	outFields->push(HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"));
	outFields->push(HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"));
	outFields->push(HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"));
	outFields->push(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"));
	outFields->push(HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"));
	outFields->push(HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"));
	outFields->push(HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"));
	outFields->push(HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"));
	outFields->push(HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"));
	outFields->push(HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"));
	outFields->push(HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"));
	outFields->push(HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"));
	outFields->push(HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"));
	outFields->push(HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"));
	outFields->push(HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"));
	outFields->push(HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"));
	outFields->push(HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"));
	outFields->push(HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"));
	outFields->push(HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"));
	outFields->push(HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"));
	outFields->push(HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"));
	outFields->push(HX_HCSTRING("GRAVEACCENT","\x6f","\x63","\x9a","\x0e"));
	outFields->push(HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"));
	outFields->push(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"));
	outFields->push(HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"));
	outFields->push(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"));
	outFields->push(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"));
	outFields->push(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"));
	outFields->push(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"));
	outFields->push(HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"));
	outFields->push(HX_HCSTRING("PRINTSCREEN","\x39","\x7f","\x7c","\x10"));
	outFields->push(HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"));
	outFields->push(HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"));
	outFields->push(HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"));
	outFields->push(HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"));
	outFields->push(HX_HCSTRING("NUMPADONE","\x99","\xe5","\x09","\x5c"));
	outFields->push(HX_HCSTRING("NUMPADTWO","\xbf","\xb8","\x0d","\x5c"));
	outFields->push(HX_HCSTRING("NUMPADTHREE","\x51","\xf6","\x94","\xbb"));
	outFields->push(HX_HCSTRING("NUMPADFOUR","\x33","\xe5","\xac","\x26"));
	outFields->push(HX_HCSTRING("NUMPADFIVE","\x7f","\x58","\xa8","\x26"));
	outFields->push(HX_HCSTRING("NUMPADSIX","\x55","\xea","\x0c","\x5c"));
	outFields->push(HX_HCSTRING("NUMPADSEVEN","\x00","\xc7","\x35","\x26"));
	outFields->push(HX_HCSTRING("NUMPADEIGHT","\x42","\x23","\x33","\x19"));
	outFields->push(HX_HCSTRING("NUMPADNINE","\x7f","\x06","\xf2","\x2b"));
	outFields->push(HX_HCSTRING("NUMPADZERO","\x75","\x90","\xdd","\x33"));
	outFields->push(HX_HCSTRING("NUMPADMINUS","\x63","\x22","\x6d","\xb4"));
	outFields->push(HX_HCSTRING("NUMPADPLUS","\xa7","\xc0","\x46","\x2d"));
	outFields->push(HX_HCSTRING("NUMPADPERIOD","\x8e","\x73","\x24","\x13"));
	outFields->push(HX_HCSTRING("NUMPADMULTIPLY","\xf1","\x55","\xe9","\x54"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_A","\x18","\xa5","\x60","\x91"),
	HX_HCSTRING("get_B","\x19","\xa5","\x60","\x91"),
	HX_HCSTRING("get_C","\x1a","\xa5","\x60","\x91"),
	HX_HCSTRING("get_D","\x1b","\xa5","\x60","\x91"),
	HX_HCSTRING("get_E","\x1c","\xa5","\x60","\x91"),
	HX_HCSTRING("get_F","\x1d","\xa5","\x60","\x91"),
	HX_HCSTRING("get_G","\x1e","\xa5","\x60","\x91"),
	HX_HCSTRING("get_H","\x1f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_I","\x20","\xa5","\x60","\x91"),
	HX_HCSTRING("get_J","\x21","\xa5","\x60","\x91"),
	HX_HCSTRING("get_K","\x22","\xa5","\x60","\x91"),
	HX_HCSTRING("get_L","\x23","\xa5","\x60","\x91"),
	HX_HCSTRING("get_M","\x24","\xa5","\x60","\x91"),
	HX_HCSTRING("get_N","\x25","\xa5","\x60","\x91"),
	HX_HCSTRING("get_O","\x26","\xa5","\x60","\x91"),
	HX_HCSTRING("get_P","\x27","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Q","\x28","\xa5","\x60","\x91"),
	HX_HCSTRING("get_R","\x29","\xa5","\x60","\x91"),
	HX_HCSTRING("get_S","\x2a","\xa5","\x60","\x91"),
	HX_HCSTRING("get_T","\x2b","\xa5","\x60","\x91"),
	HX_HCSTRING("get_U","\x2c","\xa5","\x60","\x91"),
	HX_HCSTRING("get_V","\x2d","\xa5","\x60","\x91"),
	HX_HCSTRING("get_W","\x2e","\xa5","\x60","\x91"),
	HX_HCSTRING("get_X","\x2f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Y","\x30","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Z","\x31","\xa5","\x60","\x91"),
	HX_HCSTRING("get_ZERO","\xb1","\x92","\x6c","\xbb"),
	HX_HCSTRING("get_ONE","\xdd","\xfe","\xb0","\x26"),
	HX_HCSTRING("get_TWO","\x03","\xd2","\xb4","\x26"),
	HX_HCSTRING("get_THREE","\x95","\xe8","\x27","\xd1"),
	HX_HCSTRING("get_FOUR","\x6f","\xe7","\x3b","\xae"),
	HX_HCSTRING("get_FIVE","\xbb","\x5a","\x37","\xae"),
	HX_HCSTRING("get_SIX","\x99","\x03","\xb4","\x26"),
	HX_HCSTRING("get_SEVEN","\x44","\xb9","\xc8","\x3b"),
	HX_HCSTRING("get_EIGHT","\x86","\x15","\xc6","\x2e"),
	HX_HCSTRING("get_NINE","\xbb","\x08","\x81","\xb3"),
	HX_HCSTRING("get_PAGEUP","\x33","\xce","\x42","\x89"),
	HX_HCSTRING("get_PAGEDOWN","\x3a","\xea","\xfb","\x6e"),
	HX_HCSTRING("get_HOME","\xa8","\x4d","\x8e","\xaf"),
	HX_HCSTRING("get_END","\x52","\x68","\xa9","\x26"),
	HX_HCSTRING("get_INSERT","\x02","\x5f","\xe7","\x40"),
	HX_HCSTRING("get_ESCAPE","\x4a","\x5f","\xe4","\x7d"),
	HX_HCSTRING("get_MINUS","\xa7","\x14","\x00","\xca"),
	HX_HCSTRING("get_PLUS","\xe3","\xc2","\xd5","\xb4"),
	HX_HCSTRING("get_DELETE","\xf4","\xdb","\xe2","\x0d"),
	HX_HCSTRING("get_BACKSPACE","\xf6","\xc8","\xa6","\x87"),
	HX_HCSTRING("get_LBRACKET","\x45","\xef","\x6d","\xcb"),
	HX_HCSTRING("get_RBRACKET","\xff","\x9b","\x9c","\x22"),
	HX_HCSTRING("get_BACKSLASH","\x6d","\xfc","\x01","\x85"),
	HX_HCSTRING("get_CAPSLOCK","\x95","\x20","\x88","\x35"),
	HX_HCSTRING("get_SEMICOLON","\xe8","\x59","\x8e","\x0a"),
	HX_HCSTRING("get_QUOTE","\x73","\xb7","\x89","\x1f"),
	HX_HCSTRING("get_ENTER","\x4f","\x01","\x1e","\x32"),
	HX_HCSTRING("get_SHIFT","\xb9","\x80","\xba","\x3d"),
	HX_HCSTRING("get_COMMA","\x0c","\xc6","\xf4","\x0b"),
	HX_HCSTRING("get_PERIOD","\xca","\x7c","\x25","\xde"),
	HX_HCSTRING("get_SLASH","\x74","\x54","\x59","\x40"),
	HX_HCSTRING("get_GRAVEACCENT","\x06","\x1b","\x7c","\xcf"),
	HX_HCSTRING("get_CONTROL","\x54","\x9f","\x4f","\x1f"),
	HX_HCSTRING("get_ALT","\xa0","\x5d","\xa6","\x26"),
	HX_HCSTRING("get_SPACE","\xfd","\x20","\xfe","\x42"),
	HX_HCSTRING("get_UP","\xa4","\xe1","\x2f","\xa3"),
	HX_HCSTRING("get_DOWN","\xeb","\x7b","\xe9","\xac"),
	HX_HCSTRING("get_LEFT","\x90","\x8b","\x2b","\xb2"),
	HX_HCSTRING("get_RIGHT","\x13","\xa0","\xfb","\xaa"),
	HX_HCSTRING("get_TAB","\xcc","\xbe","\xb4","\x26"),
	HX_HCSTRING("get_PRINTSCREEN","\xd0","\x36","\x5e","\xd1"),
	HX_HCSTRING("get_F1","\x74","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F2","\x75","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F3","\x76","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F4","\x77","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F5","\x78","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F6","\x79","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F7","\x7a","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F8","\x7b","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F9","\x7c","\xd4","\x2f","\xa3"),
	HX_HCSTRING("get_F10","\x3c","\x11","\xaa","\x26"),
	HX_HCSTRING("get_F11","\x3d","\x11","\xaa","\x26"),
	HX_HCSTRING("get_F12","\x3e","\x11","\xaa","\x26"),
	HX_HCSTRING("get_NUMPADONE","\x70","\xb9","\x6d","\x1d"),
	HX_HCSTRING("get_NUMPADTWO","\x96","\x8c","\x71","\x1d"),
	HX_HCSTRING("get_NUMPADTHREE","\xe8","\xad","\x76","\x7c"),
	HX_HCSTRING("get_NUMPADFOUR","\x7c","\x6d","\xa2","\x9c"),
	HX_HCSTRING("get_NUMPADFIVE","\xc8","\xe0","\x9d","\x9c"),
	HX_HCSTRING("get_NUMPADSIX","\x2c","\xbe","\x70","\x1d"),
	HX_HCSTRING("get_NUMPADSEVEN","\x97","\x7e","\x17","\xe7"),
	HX_HCSTRING("get_NUMPADEIGHT","\xd9","\xda","\x14","\xda"),
	HX_HCSTRING("get_NUMPADNINE","\xc8","\x8e","\xe7","\xa1"),
	HX_HCSTRING("get_NUMPADZERO","\xbe","\x18","\xd3","\xa9"),
	HX_HCSTRING("get_NUMPADMINUS","\xfa","\xd9","\x4e","\x75"),
	HX_HCSTRING("get_NUMPADPLUS","\xf0","\x48","\x3c","\xa3"),
	HX_HCSTRING("get_NUMPADPERIOD","\x17","\x60","\xc3","\x17"),
	HX_HCSTRING("get_NUMPADMULTIPLY","\xba","\x36","\x83","\xf0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxKeyList_obj::__mClass;

void FlxKeyList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.keyboard.FlxKeyList","\xdc","\x40","\xf0","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKeyList_obj >;
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
} // end namespace keyboard
