#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void InputFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","new",0x5285aa54,"flixel.system.frontEnds.InputFrontEnd.new","flixel/system/frontEnds/InputFrontEnd.hx",8,0x759f67bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->resetOnStateSwitch = true;
	HX_STACK_LINE(13)
	this->list = Array_obj< ::flixel::input::IFlxInputManager >::__new();
}
;
	return null();
}

//InputFrontEnd_obj::~InputFrontEnd_obj() { }

Dynamic InputFrontEnd_obj::__CreateEmpty() { return  new InputFrontEnd_obj; }
hx::ObjectPtr< InputFrontEnd_obj > InputFrontEnd_obj::__new()
{  hx::ObjectPtr< InputFrontEnd_obj > _result_ = new InputFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic InputFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputFrontEnd_obj > _result_ = new InputFrontEnd_obj();
	_result_->__construct();
	return _result_;}

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old,::flixel::input::mouse::FlxMouse New){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","replace_flixel_input_mouse_FlxMouse",0x59a38f0e,"flixel.system.frontEnds.InputFrontEnd.replace_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",74,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Old,"Old")
	HX_STACK_ARG(New,"New")
	HX_STACK_LINE(75)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(76)
	bool success = false;		HX_STACK_VAR(success,"success");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(77)
		while((true)){
			HX_STACK_LINE(77)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(77)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(77)
			if ((tmp1)){
				HX_STACK_LINE(77)
				break;
			}
			HX_STACK_LINE(77)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(77)
			++(_g);
			HX_STACK_LINE(79)
			bool tmp3 = (input == Old);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			if ((tmp3)){
				HX_STACK_LINE(81)
				::flixel::input::mouse::FlxMouse tmp4 = New;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(81)
				hx::IndexRef((this->list).mPtr,i) = tmp4;
				HX_STACK_LINE(82)
				success = true;
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(85)
			(i)++;
		}
	}
	HX_STACK_LINE(88)
	bool tmp = success;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	if ((tmp)){
		HX_STACK_LINE(90)
		::flixel::input::mouse::FlxMouse tmp1 = New;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		return tmp1;
	}
	HX_STACK_LINE(92)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InputFrontEnd_obj,replace_flixel_input_mouse_FlxMouse,return )

::flixel::input::gamepad::FlxGamepadManager InputFrontEnd_obj::add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_gamepad_FlxGamepadManager",0x189964b2,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_gamepad_FlxGamepadManager","flixel/system/frontEnds/InputFrontEnd.hx",29,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(31)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			if ((tmp1)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(33)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(33)
					::flixel::input::gamepad::FlxGamepadManager tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					if ((tmp6)){
						HX_STACK_LINE(33)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(33)
						::flixel::input::gamepad::FlxGamepadManager tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(33)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						cl = tmp8;
					}
					HX_STACK_LINE(33)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(33)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					if ((tmp9)){
						HX_STACK_LINE(33)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(33)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						s = tmp11;
						HX_STACK_LINE(33)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						if ((tmp12)){
							HX_STACK_LINE(33)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(33)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							s = tmp15;
						}
					}
					HX_STACK_LINE(33)
					tmp4 = s;
				}
				HX_STACK_LINE(33)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(33)
					::flixel::input::IFlxInputManager tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					if ((tmp7)){
						HX_STACK_LINE(33)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(33)
						::flixel::input::IFlxInputManager tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(33)
						cl = tmp9;
					}
					HX_STACK_LINE(33)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(33)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					if ((tmp10)){
						HX_STACK_LINE(33)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						s = tmp12;
						HX_STACK_LINE(33)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(33)
						if ((tmp13)){
							HX_STACK_LINE(33)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(33)
							s = tmp16;
						}
					}
					HX_STACK_LINE(33)
					tmp5 = s;
				}
				HX_STACK_LINE(33)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(35)
				::flixel::input::gamepad::FlxGamepadManager tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(39)
	::flixel::input::gamepad::FlxGamepadManager tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(40)
	::flixel::input::gamepad::FlxGamepadManager tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_gamepad_FlxGamepadManager,return )

::flixel::input::mouse::FlxMouse InputFrontEnd_obj::add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_mouse_FlxMouse",0xe1e4487b,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_mouse_FlxMouse","flixel/system/frontEnds/InputFrontEnd.hx",29,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(31)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			if ((tmp1)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(33)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(33)
					::flixel::input::mouse::FlxMouse tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					if ((tmp6)){
						HX_STACK_LINE(33)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(33)
						::flixel::input::mouse::FlxMouse tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(33)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						cl = tmp8;
					}
					HX_STACK_LINE(33)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(33)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					if ((tmp9)){
						HX_STACK_LINE(33)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(33)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						s = tmp11;
						HX_STACK_LINE(33)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						if ((tmp12)){
							HX_STACK_LINE(33)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(33)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							s = tmp15;
						}
					}
					HX_STACK_LINE(33)
					tmp4 = s;
				}
				HX_STACK_LINE(33)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(33)
					::flixel::input::IFlxInputManager tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					if ((tmp7)){
						HX_STACK_LINE(33)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(33)
						::flixel::input::IFlxInputManager tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(33)
						cl = tmp9;
					}
					HX_STACK_LINE(33)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(33)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					if ((tmp10)){
						HX_STACK_LINE(33)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						s = tmp12;
						HX_STACK_LINE(33)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(33)
						if ((tmp13)){
							HX_STACK_LINE(33)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(33)
							s = tmp16;
						}
					}
					HX_STACK_LINE(33)
					tmp5 = s;
				}
				HX_STACK_LINE(33)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(35)
				::flixel::input::mouse::FlxMouse tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(39)
	::flixel::input::mouse::FlxMouse tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(40)
	::flixel::input::mouse::FlxMouse tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_mouse_FlxMouse,return )

::flixel::input::keyboard::FlxKeyboard InputFrontEnd_obj::add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input){
	HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","add_flixel_input_keyboard_FlxKeyboard",0xa934da2f,"flixel.system.frontEnds.InputFrontEnd.add_flixel_input_keyboard_FlxKeyboard","flixel/system/frontEnds/InputFrontEnd.hx",29,0x759f67bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Input,"Input")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(31)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			if ((tmp1)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(33)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				bool Simple = true;		HX_STACK_VAR(Simple,"Simple");
				HX_STACK_LINE(33)
				::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(33)
					::flixel::input::keyboard::FlxKeyboard tmp5 = Input;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(33)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					if ((tmp6)){
						HX_STACK_LINE(33)
						cl = ((::hx::Class)(Input));
					}
					else{
						HX_STACK_LINE(33)
						::flixel::input::keyboard::FlxKeyboard tmp7 = Input;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(33)
						::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						cl = tmp8;
					}
					HX_STACK_LINE(33)
					::hx::Class tmp7 = cl;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					::String s = tmp8;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(33)
					bool tmp9 = (s != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					if ((tmp9)){
						HX_STACK_LINE(33)
						::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(33)
						::String tmp11 = ::StringTools_obj::replace(tmp10,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						s = tmp11;
						HX_STACK_LINE(33)
						bool tmp12 = Simple;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						if ((tmp12)){
							HX_STACK_LINE(33)
							int tmp13 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(33)
							int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							::String tmp15 = s.substr(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							s = tmp15;
						}
					}
					HX_STACK_LINE(33)
					tmp4 = s;
				}
				HX_STACK_LINE(33)
				::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					::hx::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(33)
					::flixel::input::IFlxInputManager tmp6 = input;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(33)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(33)
					if ((tmp7)){
						HX_STACK_LINE(33)
						cl = ((::hx::Class)(input));
					}
					else{
						HX_STACK_LINE(33)
						::flixel::input::IFlxInputManager tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(33)
						::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(33)
						cl = tmp9;
					}
					HX_STACK_LINE(33)
					::hx::Class tmp8 = cl;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(33)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(33)
					::String s = tmp9;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(33)
					bool tmp10 = (s != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					if ((tmp10)){
						HX_STACK_LINE(33)
						::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						::String tmp12 = ::StringTools_obj::replace(tmp11,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						s = tmp12;
						HX_STACK_LINE(33)
						bool tmp13 = Simple;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(33)
						if ((tmp13)){
							HX_STACK_LINE(33)
							int tmp14 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(33)
							int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(33)
							::String tmp16 = s.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(33)
							s = tmp16;
						}
					}
					HX_STACK_LINE(33)
					tmp5 = s;
				}
				HX_STACK_LINE(33)
				tmp3 = (tmp4 == tmp5);
			}
			HX_STACK_LINE(33)
			if ((tmp3)){
				HX_STACK_LINE(35)
				::flixel::input::keyboard::FlxKeyboard tmp4 = Input;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(39)
	::flixel::input::keyboard::FlxKeyboard tmp = Input;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(40)
	::flixel::input::keyboard::FlxKeyboard tmp1 = Input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(InputFrontEnd_obj,add_flixel_input_keyboard_FlxKeyboard,return )

Void InputFrontEnd_obj::reset( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","reset",0x8c9b88c3,"flixel.system.frontEnds.InputFrontEnd.reset","flixel/system/frontEnds/InputFrontEnd.hx",97,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			if ((tmp1)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(97)
			++(_g);
			HX_STACK_LINE(99)
			input->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,reset,(void))

Void InputFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","update",0xfa095c95,"flixel.system.frontEnds.InputFrontEnd.update","flixel/system/frontEnds/InputFrontEnd.hx",107,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		while((true)){
			HX_STACK_LINE(107)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(107)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(107)
			if ((tmp1)){
				HX_STACK_LINE(107)
				break;
			}
			HX_STACK_LINE(107)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(107)
			++(_g);
			HX_STACK_LINE(109)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,update,(void))

Void InputFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocus",0xcb1ee22d,"flixel.system.frontEnds.InputFrontEnd.onFocus","flixel/system/frontEnds/InputFrontEnd.hx",115,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		while((true)){
			HX_STACK_LINE(115)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(115)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(115)
			if ((tmp1)){
				HX_STACK_LINE(115)
				break;
			}
			HX_STACK_LINE(115)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(115)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(115)
			++(_g);
			HX_STACK_LINE(117)
			input->onFocus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocus,(void))

Void InputFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onFocusLost",0x5cd0d2b1,"flixel.system.frontEnds.InputFrontEnd.onFocusLost","flixel/system/frontEnds/InputFrontEnd.hx",123,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(123)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			if ((tmp1)){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(123)
			++(_g);
			HX_STACK_LINE(125)
			input->onFocusLost();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onFocusLost,(void))

Void InputFrontEnd_obj::onStateSwitch( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","onStateSwitch",0x594606fa,"flixel.system.frontEnds.InputFrontEnd.onStateSwitch","flixel/system/frontEnds/InputFrontEnd.hx",130,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		bool tmp = this->resetOnStateSwitch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		if ((tmp)){
			HX_STACK_LINE(133)
			this->reset();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,onStateSwitch,(void))

Void InputFrontEnd_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.InputFrontEnd","destroy",0x54de10ee,"flixel.system.frontEnds.InputFrontEnd.destroy","flixel/system/frontEnds/InputFrontEnd.hx",139,0x759f67bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		Array< ::flixel::input::IFlxInputManager > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(139)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			if ((tmp1)){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(139)
			::flixel::input::IFlxInputManager tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			::flixel::input::IFlxInputManager input = tmp2;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(139)
			++(_g);
			HX_STACK_LINE(141)
			::flixel::input::IFlxInputManager tmp3 = input;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			::flixel::input::IFlxInputManager tmp4 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			input = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InputFrontEnd_obj,destroy,(void))


InputFrontEnd_obj::InputFrontEnd_obj()
{
}

void InputFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InputFrontEnd);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
	HX_MARK_END_CLASS();
}

void InputFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(resetOnStateSwitch,"resetOnStateSwitch");
}

Dynamic InputFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onStateSwitch") ) { return onStateSwitch_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { return resetOnStateSwitch; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"add_flixel_input_mouse_FlxMouse") ) { return add_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"replace_flixel_input_mouse_FlxMouse") ) { return replace_flixel_input_mouse_FlxMouse_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"add_flixel_input_keyboard_FlxKeyboard") ) { return add_flixel_input_keyboard_FlxKeyboard_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"add_flixel_input_gamepad_FlxGamepadManager") ) { return add_flixel_input_gamepad_FlxGamepadManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InputFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::flixel::input::IFlxInputManager > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"resetOnStateSwitch") ) { resetOnStateSwitch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InputFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("resetOnStateSwitch","\xb7","\x84","\x01","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::flixel::input::IFlxInputManager >*/ ,(int)offsetof(InputFrontEnd_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsBool,(int)offsetof(InputFrontEnd_obj,resetOnStateSwitch),HX_HCSTRING("resetOnStateSwitch","\xb7","\x84","\x01","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("replace_flixel_input_mouse_FlxMouse","\x1a","\x65","\xd5","\xe3"),
	HX_HCSTRING("add_flixel_input_gamepad_FlxGamepadManager","\x26","\xa8","\x4b","\x80"),
	HX_HCSTRING("add_flixel_input_mouse_FlxMouse","\x87","\x28","\x57","\xa0"),
	HX_HCSTRING("add_flixel_input_keyboard_FlxKeyboard","\x3b","\x4b","\x11","\x84"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("resetOnStateSwitch","\xb7","\x84","\x01","\x3e"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onFocus","\x39","\xfe","\xc6","\x9a"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("onStateSwitch","\x06","\xb4","\xec","\xa2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class InputFrontEnd_obj::__mClass;

void InputFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.InputFrontEnd","\x62","\x30","\x2d","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputFrontEnd_obj >;
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
} // end namespace system
} // end namespace frontEnds
