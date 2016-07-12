#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_WiiRemoteID
#include <flixel/input/gamepad/id/WiiRemoteID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#include <flixel/input/gamepad/mappings/WiiRemoteMapping.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

Void WiiRemoteMapping_obj::__construct(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{
HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","new",0x74d6fe89,"flixel.input.gamepad.mappings.WiiRemoteMapping.new","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",8,0xc69520e9)
HX_STACK_THIS(this)
HX_STACK_ARG(attachment,"attachment")
{
	HX_STACK_LINE(8)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	super::__construct(tmp);
}
;
	return null();
}

//WiiRemoteMapping_obj::~WiiRemoteMapping_obj() { }

Dynamic WiiRemoteMapping_obj::__CreateEmpty() { return  new WiiRemoteMapping_obj; }
hx::ObjectPtr< WiiRemoteMapping_obj > WiiRemoteMapping_obj::__new(::flixel::input::gamepad::FlxGamepadAttachment attachment)
{  hx::ObjectPtr< WiiRemoteMapping_obj > _result_ = new WiiRemoteMapping_obj();
	_result_->__construct(attachment);
	return _result_;}

Dynamic WiiRemoteMapping_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WiiRemoteMapping_obj > _result_ = new WiiRemoteMapping_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void WiiRemoteMapping_obj::initValues( ){
{
		HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","initValues",0xff6f3809,"flixel.input.gamepad.mappings.WiiRemoteMapping.initValues","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",18,0xc69520e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->supportsMotion = true;
		HX_STACK_LINE(21)
		this->supportsPointer = false;
	}
return null();
}


int WiiRemoteMapping_obj::getID( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getID",0x8faa5c5a,"flixel.input.gamepad.mappings.WiiRemoteMapping.getID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",25,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(26)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::flixel::input::gamepad::FlxGamepadAttachment _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(28)
				int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(28)
				tmp = this->getIDClassicController(tmp2);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(29)
				int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(29)
				tmp = this->getIDNunchuk(tmp2);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(30)
				int tmp2 = rawID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(30)
				tmp = this->getIDDefault(tmp2);
			}
			;break;
		}
	}
	HX_STACK_LINE(26)
	return tmp;
}


int WiiRemoteMapping_obj::getIDClassicController( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDClassicController",0xe5d4d794,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDClassicController","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",35,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(36)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(38)
			tmp1 = (int)1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(39)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(40)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(41)
			tmp1 = (int)2;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(42)
			tmp1 = (int)6;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(43)
			tmp1 = (int)10;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(44)
			tmp1 = (int)7;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(45)
			tmp1 = (int)4;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(46)
			tmp1 = (int)5;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(47)
			tmp1 = (int)17;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(48)
			tmp1 = (int)18;
		}
		;break;
		case (int)25: {
			HX_STACK_LINE(49)
			tmp1 = (int)11;
		}
		;break;
		case (int)24: {
			HX_STACK_LINE(50)
			tmp1 = (int)12;
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(51)
			tmp1 = (int)13;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(52)
			tmp1 = (int)14;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(53)
			tmp1 = (int)30;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(54)
			tmp1 = (int)31;
		}
		;break;
		default: {
			HX_STACK_LINE(55)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(36)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDClassicController,return )

int WiiRemoteMapping_obj::getIDNunchuk( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDNunchuk",0x6173e8c8,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDNunchuk","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",60,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(61)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(63)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(64)
			tmp1 = (int)1;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(65)
			tmp1 = (int)4;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(66)
			tmp1 = (int)17;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(67)
			tmp1 = (int)2;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(68)
			tmp1 = (int)3;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(69)
			tmp1 = (int)6;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(70)
			tmp1 = (int)7;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(71)
			tmp1 = (int)10;
		}
		;break;
		case (int)29: {
			HX_STACK_LINE(72)
			tmp1 = (int)11;
		}
		;break;
		case (int)28: {
			HX_STACK_LINE(73)
			tmp1 = (int)12;
		}
		;break;
		case (int)30: {
			HX_STACK_LINE(74)
			tmp1 = (int)13;
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(75)
			tmp1 = (int)14;
		}
		;break;
		default: {
			HX_STACK_LINE(76)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(61)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDNunchuk,return )

int WiiRemoteMapping_obj::getIDDefault( int rawID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDDefault",0xbf6a4387,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDDefault","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",81,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rawID,"rawID")
	HX_STACK_LINE(82)
	int tmp = rawID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	switch( (int)(tmp)){
		case (int)2: {
			HX_STACK_LINE(84)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(85)
			tmp1 = (int)1;
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(86)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(87)
			tmp1 = (int)3;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(88)
			tmp1 = (int)6;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(89)
			tmp1 = (int)10;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(90)
			tmp1 = (int)7;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(91)
			tmp1 = (int)11;
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(92)
			tmp1 = (int)12;
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(93)
			tmp1 = (int)13;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(94)
			tmp1 = (int)14;
		}
		;break;
		default: {
			HX_STACK_LINE(95)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(82)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDDefault,return )

int WiiRemoteMapping_obj::getRawID( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawID",0x63d54c84,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",100,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(101)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::flixel::input::gamepad::FlxGamepadAttachment tmp1 = this->attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		::flixel::input::gamepad::FlxGamepadAttachment _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(103)
				int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(103)
				tmp = this->getRawClassicController(tmp2);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(104)
				int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				tmp = this->getRawNunchuk(tmp2);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(105)
				int tmp2 = ID;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				tmp = this->getRawDefault(tmp2);
			}
			;break;
		}
	}
	HX_STACK_LINE(101)
	return tmp;
}


int WiiRemoteMapping_obj::getRawClassicController( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawClassicController",0x484852a5,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawClassicController","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",110,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(111)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(113)
			tmp1 = (int)1;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(114)
			tmp1 = (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(115)
			tmp1 = (int)2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(116)
			tmp1 = (int)3;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(117)
			tmp1 = (int)25;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(118)
			tmp1 = (int)24;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(119)
			tmp1 = (int)26;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(120)
			tmp1 = (int)27;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(121)
			tmp1 = (int)9;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(122)
			tmp1 = (int)10;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(123)
			tmp1 = (int)8;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(124)
			tmp1 = (int)6;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(125)
			tmp1 = (int)7;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(126)
			tmp1 = (int)4;
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(127)
			tmp1 = (int)5;
		}
		;break;
		case (int)30: {
			HX_STACK_LINE(128)
			tmp1 = (int)11;
		}
		;break;
		case (int)31: {
			HX_STACK_LINE(129)
			tmp1 = (int)12;
		}
		;break;
		default: {
			HX_STACK_LINE(130)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(111)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawClassicController,return )

int WiiRemoteMapping_obj::getRawNunchuk( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawNunchuk",0x7dce1499,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawNunchuk","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",135,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(136)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(138)
			tmp1 = (int)0;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(139)
			tmp1 = (int)1;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(140)
			tmp1 = (int)2;
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(141)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(142)
			tmp1 = (int)4;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(143)
			tmp1 = (int)5;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(144)
			tmp1 = (int)7;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(145)
			tmp1 = (int)6;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(146)
			tmp1 = (int)8;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(147)
			tmp1 = (int)29;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(148)
			tmp1 = (int)28;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(149)
			tmp1 = (int)30;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(150)
			tmp1 = (int)31;
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(151)
			tmp1 = (int)3;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(152)
			tmp1 = (int)2;
		}
		;break;
		default: {
			HX_STACK_LINE(153)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(136)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawNunchuk,return )

int WiiRemoteMapping_obj::getRawDefault( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawDefault",0xdbc46f58,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawDefault","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",158,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(159)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(161)
			tmp1 = (int)2;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(162)
			tmp1 = (int)3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(163)
			tmp1 = (int)0;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(164)
			tmp1 = (int)1;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(165)
			tmp1 = (int)14;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(166)
			tmp1 = (int)15;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(167)
			tmp1 = (int)16;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(168)
			tmp1 = (int)17;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(169)
			tmp1 = (int)5;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(170)
			tmp1 = (int)6;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(171)
			tmp1 = (int)4;
		}
		;break;
		case (int)26: {
			HX_STACK_LINE(172)
			tmp1 = (int)2;
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(173)
			tmp1 = (int)3;
		}
		;break;
		default: {
			HX_STACK_LINE(174)
			tmp1 = (int)-1;
		}
	}
	HX_STACK_LINE(159)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawDefault,return )

bool WiiRemoteMapping_obj::isAxisForMotion( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","isAxisForMotion",0xc221669d,"flixel.input.gamepad.mappings.WiiRemoteMapping.isAxisForMotion","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",179,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(180)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = this->attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	bool tmp1 = (tmp == ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	if ((tmp1)){
		HX_STACK_LINE(182)
		bool tmp2 = (ID == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(182)
		if ((tmp3)){
			HX_STACK_LINE(182)
			tmp4 = (ID == (int)3);
		}
		else{
			HX_STACK_LINE(182)
			tmp4 = true;
		}
		HX_STACK_LINE(182)
		if ((tmp4)){
			HX_STACK_LINE(183)
			return true;
		}
	}
	else{
		HX_STACK_LINE(185)
		::flixel::input::gamepad::FlxGamepadAttachment tmp2 = this->attachment;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		bool tmp3 = (tmp2 == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		if ((tmp3)){
			HX_STACK_LINE(187)
			bool tmp4 = (ID == (int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			if ((tmp5)){
				HX_STACK_LINE(187)
				tmp6 = (ID == (int)2);
			}
			else{
				HX_STACK_LINE(187)
				tmp6 = true;
			}
			HX_STACK_LINE(187)
			if ((tmp6)){
				HX_STACK_LINE(188)
				return true;
			}
		}
	}
	HX_STACK_LINE(190)
	return false;
}


bool WiiRemoteMapping_obj::isAxisFlipped( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","isAxisFlipped",0x7501e940,"flixel.input.gamepad.mappings.WiiRemoteMapping.isAxisFlipped","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",194,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(195)
	bool tmp = (axisID == (int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


int WiiRemoteMapping_obj::axisIndexToRawID( int axisID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","axisIndexToRawID",0x493b61ce,"flixel.input.gamepad.mappings.WiiRemoteMapping.axisIndexToRawID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",201,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(axisID,"axisID")
	HX_STACK_LINE(203)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = this->attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	bool tmp1 = (tmp == ::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	if ((tmp1)){
		HX_STACK_LINE(203)
		tmp2 = (axisID == (int)4);
	}
	else{
		HX_STACK_LINE(203)
		tmp2 = false;
	}
	HX_STACK_LINE(203)
	if ((tmp2)){
		HX_STACK_LINE(204)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(206)
		::flixel::input::gamepad::FlxGamepadAttachment tmp3 = this->attachment;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		bool tmp4 = (tmp3 == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		if ((tmp4)){
			HX_STACK_LINE(206)
			tmp5 = (axisID == (int)4);
		}
		else{
			HX_STACK_LINE(206)
			tmp5 = false;
		}
		HX_STACK_LINE(206)
		if ((tmp5)){
			HX_STACK_LINE(207)
			return (int)-1;
		}
	}
	HX_STACK_LINE(209)
	::flixel::input::gamepad::FlxGamepadAttachment tmp3 = this->attachment;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	bool tmp4 = (tmp3 == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(209)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(209)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(209)
	if ((tmp5)){
		HX_STACK_LINE(209)
		::flixel::input::gamepad::FlxGamepadAttachment tmp7 = this->attachment;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		::flixel::input::gamepad::FlxGamepadAttachment tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(209)
		tmp6 = (tmp8 == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER);
	}
	else{
		HX_STACK_LINE(209)
		tmp6 = true;
	}
	HX_STACK_LINE(209)
	if ((tmp6)){
		HX_STACK_LINE(211)
		int tmp7 = axisID;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(211)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp8 = this->leftStick;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		int tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		bool tmp10 = (tmp7 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		if ((tmp10)){
			HX_STACK_LINE(212)
			return (int)20;
		}
		else{
			HX_STACK_LINE(213)
			int tmp11 = axisID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp12 = this->leftStick;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			int tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			bool tmp14 = (tmp11 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			if ((tmp14)){
				HX_STACK_LINE(214)
				return (int)21;
			}
		}
	}
	else{
		HX_STACK_LINE(218)
		int tmp7 = axisID;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(218)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp8 = this->leftStick;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		int tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(218)
		bool tmp10 = (tmp7 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(218)
		if ((tmp10)){
			HX_STACK_LINE(219)
			return (int)18;
		}
		else{
			HX_STACK_LINE(220)
			int tmp11 = axisID;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			::flixel::input::gamepad::FlxGamepadAnalogStick tmp12 = this->leftStick;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			int tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(220)
			bool tmp14 = (tmp11 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(220)
			if ((tmp14)){
				HX_STACK_LINE(221)
				return (int)19;
			}
		}
	}
	HX_STACK_LINE(224)
	int tmp7 = axisID;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(224)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp8 = this->rightStick;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(224)
	int tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(224)
	bool tmp10 = (tmp7 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(224)
	if ((tmp10)){
		HX_STACK_LINE(225)
		return (int)22;
	}
	else{
		HX_STACK_LINE(226)
		int tmp11 = axisID;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(226)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp12 = this->rightStick;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(226)
		int tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(226)
		bool tmp14 = (tmp11 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(226)
		if ((tmp14)){
			HX_STACK_LINE(227)
			return (int)23;
		}
	}
	HX_STACK_LINE(229)
	int tmp11 = axisID;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(229)
	return tmp11;
}


int WiiRemoteMapping_obj::checkForFakeAxis( int ID){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","checkForFakeAxis",0xe60c374e,"flixel.input.gamepad.mappings.WiiRemoteMapping.checkForFakeAxis","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",233,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(234)
	::flixel::input::gamepad::FlxGamepadAttachment tmp = this->attachment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	bool tmp1 = (tmp == ::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	if ((tmp1)){
		HX_STACK_LINE(234)
		tmp2 = (ID == (int)17);
	}
	else{
		HX_STACK_LINE(234)
		tmp2 = false;
	}
	HX_STACK_LINE(234)
	if ((tmp2)){
		HX_STACK_LINE(235)
		return (int)3;
	}
	HX_STACK_LINE(237)
	return (int)-1;
}


::flixel::input::gamepad::FlxGamepadAttachment WiiRemoteMapping_obj::set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","set_attachment",0x85409917,"flixel.input.gamepad.mappings.WiiRemoteMapping.set_attachment","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",242,0xc69520e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_LINE(243)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	switch( (int)(attachment->__Index())){
		case (int)0: case (int)1: {
			HX_STACK_LINE(245)
			tmp = ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(246)
			tmp = ::flixel::input::gamepad::id::WiiRemoteID_obj::REMOTE_DPAD;
		}
		;break;
	}
	HX_STACK_LINE(243)
	this->leftStick = tmp;
	HX_STACK_LINE(249)
	::flixel::input::gamepad::FlxGamepadAnalogStick tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	switch( (int)(attachment->__Index())){
		case (int)1: {
			HX_STACK_LINE(251)
			tmp1 = ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK;
		}
		;break;
		default: {
			HX_STACK_LINE(252)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(249)
	this->rightStick = tmp1;
	HX_STACK_LINE(255)
	::flixel::input::gamepad::FlxGamepadAttachment tmp2 = attachment;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	::flixel::input::gamepad::FlxGamepadAttachment tmp3 = this->super::set_attachment(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(255)
	return tmp3;
}


int WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

int WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

int WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

int WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


WiiRemoteMapping_obj::WiiRemoteMapping_obj()
{
}

Dynamic WiiRemoteMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return getRawID_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return initValues_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getIDNunchuk") ) { return getIDNunchuk_dyn(); }
		if (HX_FIELD_EQ(inName,"getIDDefault") ) { return getIDDefault_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRawNunchuk") ) { return getRawNunchuk_dyn(); }
		if (HX_FIELD_EQ(inName,"getRawDefault") ) { return getRawDefault_dyn(); }
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return isAxisFlipped_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return set_attachment_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isAxisForMotion") ) { return isAxisForMotion_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return axisIndexToRawID_dyn(); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return checkForFakeAxis_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIDClassicController") ) { return getIDClassicController_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRawClassicController") ) { return getRawClassicController_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getIDClassicController","\x1d","\xe8","\xc4","\x20"),
	HX_HCSTRING("getIDNunchuk","\x11","\xa4","\xdf","\xd0"),
	HX_HCSTRING("getIDDefault","\xd0","\xfe","\xd5","\x2e"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("getRawClassicController","\xfc","\xb9","\x66","\x9f"),
	HX_HCSTRING("getRawNunchuk","\x30","\x39","\xa6","\x8c"),
	HX_HCSTRING("getRawDefault","\xef","\x93","\x9c","\xea"),
	HX_HCSTRING("isAxisForMotion","\xf4","\x1e","\xbd","\x52"),
	HX_HCSTRING("isAxisFlipped","\xd7","\x0d","\xda","\x83"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class WiiRemoteMapping_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null()) };

void WiiRemoteMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.WiiRemoteMapping","\x17","\x06","\xe9","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WiiRemoteMapping_obj >;
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

void WiiRemoteMapping_obj::__boot()
{
	LEFT_ANALOG_STICK_FAKE_X= (int)20;
	LEFT_ANALOG_STICK_FAKE_Y= (int)21;
	RIGHT_ANALOG_STICK_FAKE_X= (int)22;
	RIGHT_ANALOG_STICK_FAKE_Y= (int)23;
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
