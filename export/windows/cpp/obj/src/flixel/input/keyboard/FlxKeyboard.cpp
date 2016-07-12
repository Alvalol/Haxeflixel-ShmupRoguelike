#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
namespace flixel{
namespace input{
namespace keyboard{

Void FlxKeyboard_obj::__construct()
{
HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",26,0x41882875)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct(hx::ClassOf< ::flixel::input::keyboard::FlxKeyList >());
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
		int code = __it->next();
		{
			HX_STACK_LINE(31)
			bool tmp2 = (code != (int)-2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			if ((tmp2)){
				HX_STACK_LINE(31)
				tmp3 = (code != (int)-1);
			}
			else{
				HX_STACK_LINE(31)
				tmp3 = false;
			}
			HX_STACK_LINE(31)
			if ((tmp3)){
				HX_STACK_LINE(33)
				::flixel::input::FlxInput tmp4 = ::flixel::input::FlxInput_obj::__new(code);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				::flixel::input::FlxInput input = tmp4;		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(34)
				::flixel::input::FlxInput tmp5 = input;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				this->_keyListArray->push(tmp5);
				HX_STACK_LINE(35)
				::haxe::ds::IntMap tmp6 = this->_keyListMap;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(35)
				int tmp7 = code;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(35)
				::flixel::input::FlxInput tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(35)
				tmp6->set(tmp7,tmp8);
			}
		}
;
	}
	HX_STACK_LINE(40)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(40)
	this->_nativeCorrection = tmp2;
	HX_STACK_LINE(42)
	::haxe::ds::StringMap tmp3 = this->_nativeCorrection;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	tmp3->set(HX_HCSTRING("0_64","\x2d","\x83","\x02","\x20"),(int)45);
	HX_STACK_LINE(43)
	::haxe::ds::StringMap tmp4 = this->_nativeCorrection;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	tmp4->set(HX_HCSTRING("0_65","\x2e","\x83","\x02","\x20"),(int)35);
	HX_STACK_LINE(44)
	::haxe::ds::StringMap tmp5 = this->_nativeCorrection;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	tmp5->set(HX_HCSTRING("0_67","\x30","\x83","\x02","\x20"),(int)34);
	HX_STACK_LINE(45)
	::haxe::ds::StringMap tmp6 = this->_nativeCorrection;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	tmp6->set(HX_HCSTRING("0_69","\x32","\x83","\x02","\x20"),(int)-1);
	HX_STACK_LINE(46)
	::haxe::ds::StringMap tmp7 = this->_nativeCorrection;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(46)
	tmp7->set(HX_HCSTRING("0_73","\x0b","\x84","\x02","\x20"),(int)33);
	HX_STACK_LINE(47)
	::haxe::ds::StringMap tmp8 = this->_nativeCorrection;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(47)
	tmp8->set(HX_HCSTRING("0_266","\x23","\x3d","\x2d","\xe2"),(int)46);
	HX_STACK_LINE(48)
	::haxe::ds::StringMap tmp9 = this->_nativeCorrection;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	tmp9->set(HX_HCSTRING("123_222","\xa5","\xbc","\xd4","\x8f"),(int)219);
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp10 = this->_nativeCorrection;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	tmp10->set(HX_HCSTRING("125_187","\xa5","\x28","\xa1","\xb6"),(int)221);
	HX_STACK_LINE(50)
	::haxe::ds::StringMap tmp11 = this->_nativeCorrection;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(50)
	tmp11->set(HX_HCSTRING("126_233","\x08","\x7b","\x08","\x4a"),(int)192);
	HX_STACK_LINE(52)
	::haxe::ds::StringMap tmp12 = this->_nativeCorrection;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(52)
	tmp12->set(HX_HCSTRING("0_80","\xe7","\x84","\x02","\x20"),(int)112);
	HX_STACK_LINE(53)
	::haxe::ds::StringMap tmp13 = this->_nativeCorrection;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(53)
	tmp13->set(HX_HCSTRING("0_81","\xe8","\x84","\x02","\x20"),(int)113);
	HX_STACK_LINE(54)
	::haxe::ds::StringMap tmp14 = this->_nativeCorrection;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(54)
	tmp14->set(HX_HCSTRING("0_82","\xe9","\x84","\x02","\x20"),(int)114);
	HX_STACK_LINE(55)
	::haxe::ds::StringMap tmp15 = this->_nativeCorrection;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(55)
	tmp15->set(HX_HCSTRING("0_83","\xea","\x84","\x02","\x20"),(int)115);
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp16 = this->_nativeCorrection;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(56)
	tmp16->set(HX_HCSTRING("0_84","\xeb","\x84","\x02","\x20"),(int)116);
	HX_STACK_LINE(57)
	::haxe::ds::StringMap tmp17 = this->_nativeCorrection;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(57)
	tmp17->set(HX_HCSTRING("0_85","\xec","\x84","\x02","\x20"),(int)117);
	HX_STACK_LINE(58)
	::haxe::ds::StringMap tmp18 = this->_nativeCorrection;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(58)
	tmp18->set(HX_HCSTRING("0_86","\xed","\x84","\x02","\x20"),(int)118);
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp19 = this->_nativeCorrection;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(59)
	tmp19->set(HX_HCSTRING("0_87","\xee","\x84","\x02","\x20"),(int)119);
	HX_STACK_LINE(60)
	::haxe::ds::StringMap tmp20 = this->_nativeCorrection;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(60)
	tmp20->set(HX_HCSTRING("0_88","\xef","\x84","\x02","\x20"),(int)120);
	HX_STACK_LINE(61)
	::haxe::ds::StringMap tmp21 = this->_nativeCorrection;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(61)
	tmp21->set(HX_HCSTRING("0_89","\xf0","\x84","\x02","\x20"),(int)121);
	HX_STACK_LINE(62)
	::haxe::ds::StringMap tmp22 = this->_nativeCorrection;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(62)
	tmp22->set(HX_HCSTRING("0_90","\xc6","\x85","\x02","\x20"),(int)122);
	HX_STACK_LINE(64)
	::haxe::ds::StringMap tmp23 = this->_nativeCorrection;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(64)
	tmp23->set(HX_HCSTRING("48_224","\xf9","\xa0","\xf0","\x47"),(int)48);
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp24 = this->_nativeCorrection;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(65)
	tmp24->set(HX_HCSTRING("49_38","\x5f","\x96","\xcb","\x16"),(int)49);
	HX_STACK_LINE(66)
	::haxe::ds::StringMap tmp25 = this->_nativeCorrection;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(66)
	tmp25->set(HX_HCSTRING("50_233","\x2e","\x5a","\x17","\x13"),(int)50);
	HX_STACK_LINE(67)
	::haxe::ds::StringMap tmp26 = this->_nativeCorrection;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(67)
	tmp26->set(HX_HCSTRING("51_34","\xe4","\x75","\xe8","\xa4"),(int)51);
	HX_STACK_LINE(68)
	::haxe::ds::StringMap tmp27 = this->_nativeCorrection;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(68)
	tmp27->set(HX_HCSTRING("52_222","\x50","\x82","\xe4","\x39"),(int)52);
	HX_STACK_LINE(69)
	::haxe::ds::StringMap tmp28 = this->_nativeCorrection;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(69)
	tmp28->set(HX_HCSTRING("53_40","\xfd","\xe3","\x3a","\xa6"),(int)53);
	HX_STACK_LINE(70)
	::haxe::ds::StringMap tmp29 = this->_nativeCorrection;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(70)
	tmp29->set(HX_HCSTRING("54_189","\x52","\xee","\xb0","\x60"),(int)54);
	HX_STACK_LINE(71)
	::haxe::ds::StringMap tmp30 = this->_nativeCorrection;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(71)
	tmp30->set(HX_HCSTRING("55_232","\xb2","\x40","\x18","\xf4"),(int)55);
	HX_STACK_LINE(72)
	::haxe::ds::StringMap tmp31 = this->_nativeCorrection;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(72)
	tmp31->set(HX_HCSTRING("56_95","\x3a","\x8c","\x36","\xa8"),(int)56);
	HX_STACK_LINE(73)
	::haxe::ds::StringMap tmp32 = this->_nativeCorrection;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(73)
	tmp32->set(HX_HCSTRING("57_231","\xb3","\x69","\xe5","\x1a"),(int)57);
	HX_STACK_LINE(75)
	::haxe::ds::StringMap tmp33 = this->_nativeCorrection;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(75)
	tmp33->set(HX_HCSTRING("48_64","\x59","\x62","\x22","\x16"),(int)96);
	HX_STACK_LINE(76)
	::haxe::ds::StringMap tmp34 = this->_nativeCorrection;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(76)
	tmp34->set(HX_HCSTRING("49_65","\xf9","\x98","\xcb","\x16"),(int)97);
	HX_STACK_LINE(77)
	::haxe::ds::StringMap tmp35 = this->_nativeCorrection;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(77)
	tmp35->set(HX_HCSTRING("50_66","\xe4","\x41","\x3f","\xa4"),(int)98);
	HX_STACK_LINE(78)
	::haxe::ds::StringMap tmp36 = this->_nativeCorrection;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(78)
	tmp36->set(HX_HCSTRING("51_67","\x84","\x78","\xe8","\xa4"),(int)99);
	HX_STACK_LINE(79)
	::haxe::ds::StringMap tmp37 = this->_nativeCorrection;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(79)
	tmp37->set(HX_HCSTRING("52_68","\x24","\xaf","\x91","\xa5"),(int)100);
	HX_STACK_LINE(80)
	::haxe::ds::StringMap tmp38 = this->_nativeCorrection;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(80)
	tmp38->set(HX_HCSTRING("53_69","\xc4","\xe5","\x3a","\xa6"),(int)101);
	HX_STACK_LINE(81)
	::haxe::ds::StringMap tmp39 = this->_nativeCorrection;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(81)
	tmp39->set(HX_HCSTRING("54_70","\x39","\x1d","\xe4","\xa6"),(int)102);
	HX_STACK_LINE(82)
	::haxe::ds::StringMap tmp40 = this->_nativeCorrection;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(82)
	tmp40->set(HX_HCSTRING("55_71","\xd9","\x53","\x8d","\xa7"),(int)103);
	HX_STACK_LINE(83)
	::haxe::ds::StringMap tmp41 = this->_nativeCorrection;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(83)
	tmp41->set(HX_HCSTRING("56_72","\x79","\x8a","\x36","\xa8"),(int)104);
	HX_STACK_LINE(84)
	::haxe::ds::StringMap tmp42 = this->_nativeCorrection;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(84)
	tmp42->set(HX_HCSTRING("57_73","\x19","\xc1","\xdf","\xa8"),(int)105);
	HX_STACK_LINE(86)
	::haxe::ds::StringMap tmp43 = this->_nativeCorrection;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(86)
	tmp43->set(HX_HCSTRING("43_75","\x1e","\x52","\xd4","\x12"),(int)107);
	HX_STACK_LINE(87)
	::haxe::ds::StringMap tmp44 = this->_nativeCorrection;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(87)
	tmp44->set(HX_HCSTRING("45_77","\x5e","\xbf","\x26","\x14"),(int)109);
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp45 = this->_nativeCorrection;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(88)
	tmp45->set(HX_HCSTRING("47_79","\x9e","\x2c","\x79","\x15"),(int)191);
	HX_STACK_LINE(89)
	::haxe::ds::StringMap tmp46 = this->_nativeCorrection;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(89)
	tmp46->set(HX_HCSTRING("46_78","\xfe","\xf5","\xcf","\x14"),(int)110);
	HX_STACK_LINE(90)
	::haxe::ds::StringMap tmp47 = this->_nativeCorrection;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(90)
	tmp47->set(HX_HCSTRING("42_74","\x7e","\x1b","\x2b","\x12"),(int)106);
}
;
	return null();
}

//FlxKeyboard_obj::~FlxKeyboard_obj() { }

Dynamic FlxKeyboard_obj::__CreateEmpty() { return  new FlxKeyboard_obj; }
hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new()
{  hx::ObjectPtr< FlxKeyboard_obj > _result_ = new FlxKeyboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxKeyboard_obj > _result_ = new FlxKeyboard_obj();
	_result_->__construct();
	return _result_;}

Void FlxKeyboard_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyUp",0xa36f8255,"flixel.input.keyboard.FlxKeyboard.onKeyUp","flixel/input/keyboard/FlxKeyboard.hx",95,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(96)
		::openfl::_legacy::events::KeyboardEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		this->super::onKeyUp(tmp);
	}
return null();
}


Void FlxKeyboard_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","onKeyDown",0xf4d786dc,"flixel.input.keyboard.FlxKeyboard.onKeyDown","flixel/input/keyboard/FlxKeyboard.hx",108,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(109)
		::openfl::_legacy::events::KeyboardEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		this->super::onKeyDown(tmp);
	}
return null();
}


int FlxKeyboard_obj::resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","resolveKeyCode",0x581c5a06,"flixel.input.keyboard.FlxKeyboard.resolveKeyCode","flixel/input/keyboard/FlxKeyboard.hx",121,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(125)
	::haxe::ds::StringMap tmp = this->_nativeCorrection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	::String tmp1 = (e->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	int tmp2 = e->keyCode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	Dynamic tmp4 = tmp->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(125)
	Dynamic code = tmp4;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(126)
	bool tmp5 = (code == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(126)
	if ((tmp5)){
		HX_STACK_LINE(126)
		tmp6 = e->keyCode;
	}
	else{
		HX_STACK_LINE(126)
		tmp6 = code;
	}
	HX_STACK_LINE(126)
	return tmp6;
}


Array< ::Dynamic > FlxKeyboard_obj::record( ){
	HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","record",0x38ad8db7,"flixel.input.keyboard.FlxKeyboard.record","flixel/input/keyboard/FlxKeyboard.hx",138,0x41882875)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	Array< ::Dynamic > data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Array< ::Dynamic > _g1 = this->_keyListArray;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(141)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			if ((tmp1)){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			::flixel::input::FlxInput tmp2 = _g1->__get(_g).StaticCast< ::flixel::input::FlxInput >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			::flixel::input::FlxInput key = tmp2;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(141)
			++(_g);
			HX_STACK_LINE(143)
			bool tmp3 = (key == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			if ((tmp4)){
				HX_STACK_LINE(143)
				bool tmp6 = (key->current == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(143)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(143)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(143)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(143)
				if ((tmp11)){
					HX_STACK_LINE(143)
					tmp5 = (key->current == (int)-1);
				}
				else{
					HX_STACK_LINE(143)
					tmp5 = true;
				}
			}
			else{
				HX_STACK_LINE(143)
				tmp5 = true;
			}
			HX_STACK_LINE(143)
			if ((tmp5)){
				HX_STACK_LINE(145)
				continue;
			}
			HX_STACK_LINE(148)
			bool tmp6 = (data == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			if ((tmp6)){
				HX_STACK_LINE(150)
				data = Array_obj< ::Dynamic >::__new();
			}
			HX_STACK_LINE(153)
			::flixel::_system::replay::CodeValuePair tmp7 = ::flixel::_system::replay::CodeValuePair_obj::__new(key->ID,key->current);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			data->push(tmp7);
		}
	}
	HX_STACK_LINE(156)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

Void FlxKeyboard_obj::playback( Array< ::Dynamic > Record){
{
		HX_STACK_FRAME("flixel.input.keyboard.FlxKeyboard","playback",0x84dcbec1,"flixel.input.keyboard.FlxKeyboard.playback","flixel/input/keyboard/FlxKeyboard.hx",166,0x41882875)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Record,"Record")
		HX_STACK_LINE(167)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(168)
		int l = Record->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(169)
		::flixel::_system::replay::CodeValuePair o;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(170)
		::flixel::input::FlxInput o2;		HX_STACK_VAR(o2,"o2");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			bool tmp = (i < l);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(172)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			if ((tmp1)){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(174)
			int tmp2 = (i)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			::flixel::_system::replay::CodeValuePair tmp3 = Record->__get(tmp2).StaticCast< ::flixel::_system::replay::CodeValuePair >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			o = tmp3;
			HX_STACK_LINE(175)
			::haxe::ds::IntMap tmp4 = this->_keyListMap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			int tmp5 = o->__Field(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			::flixel::input::FlxInput tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			o2 = tmp6;
			HX_STACK_LINE(176)
			o2->current = o->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))


FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	::flixel::input::FlxKeyManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	::flixel::input::FlxKeyManager_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxKeyboard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return record_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return playback_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return resolveKeyCode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return _nativeCorrection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxKeyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_nativeCorrection),HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("resolveKeyCode","\xe0","\xac","\x16","\xf4"),
	HX_HCSTRING("record","\x91","\x76","\xec","\xfd"),
	HX_HCSTRING("playback","\x1b","\x12","\x4b","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.keyboard.FlxKeyboard","\x88","\xe0","\x02","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKeyboard_obj >;
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
