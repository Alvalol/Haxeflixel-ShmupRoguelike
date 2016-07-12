#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
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

Void FlxGamepadAnalogValueList_obj::__construct(::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","new",0xac4e6a46,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.new","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",26,0xefa13aee)
HX_STACK_THIS(this)
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(26)
	this->gamepad = gamepad;
}
;
	return null();
}

//FlxGamepadAnalogValueList_obj::~FlxGamepadAnalogValueList_obj() { }

Dynamic FlxGamepadAnalogValueList_obj::__CreateEmpty() { return  new FlxGamepadAnalogValueList_obj; }
hx::ObjectPtr< FlxGamepadAnalogValueList_obj > FlxGamepadAnalogValueList_obj::__new(::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxGamepadAnalogValueList_obj > _result_ = new FlxGamepadAnalogValueList_obj();
	_result_->__construct(gamepad);
	return _result_;}

Dynamic FlxGamepadAnalogValueList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadAnalogValueList_obj > _result_ = new FlxGamepadAnalogValueList_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float FlxGamepadAnalogValueList_obj::get_LEFT_STICK_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_LEFT_STICK_X",0xef3753b4,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_LEFT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",14,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(14)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = _this->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		tmp = _this->getAnalogXAxisValue(tmp2);
	}
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_LEFT_STICK_X,return )

Float FlxGamepadAnalogValueList_obj::get_LEFT_STICK_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_LEFT_STICK_Y",0xef3753b5,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_LEFT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",15,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(15)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = _this->mapping->getAnalogStick((int)19);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		tmp = _this->getYAxisRaw(tmp2);
	}
	HX_STACK_LINE(15)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_LEFT_STICK_Y,return )

Float FlxGamepadAnalogValueList_obj::get_RIGHT_STICK_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_RIGHT_STICK_X",0xd1775543,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_RIGHT_STICK_X","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",16,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	{
		HX_STACK_LINE(16)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(16)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = _this->mapping->getAnalogStick((int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		tmp = _this->getAnalogXAxisValue(tmp2);
	}
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_RIGHT_STICK_X,return )

Float FlxGamepadAnalogValueList_obj::get_RIGHT_STICK_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_RIGHT_STICK_Y",0xd1775544,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_RIGHT_STICK_Y","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",17,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(17)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp2 = _this->mapping->getAnalogStick((int)20);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		tmp = _this->getYAxisRaw(tmp2);
	}
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_RIGHT_STICK_Y,return )

Float FlxGamepadAnalogValueList_obj::get_LEFT_TRIGGER( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_LEFT_TRIGGER",0x4eb7cc83,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_LEFT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",18,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float tmp1 = tmp->getAxis((int)17);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_LEFT_TRIGGER,return )

Float FlxGamepadAnalogValueList_obj::get_RIGHT_TRIGGER( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_RIGHT_TRIGGER",0x30f7ce12,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_RIGHT_TRIGGER","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",19,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = tmp->getAxis((int)18);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_RIGHT_TRIGGER,return )

Float FlxGamepadAnalogValueList_obj::get_POINTER_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_POINTER_X",0xc8c61233,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_POINTER_X","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",21,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Float tmp1 = tmp->getAxis((int)28);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_POINTER_X,return )

Float FlxGamepadAnalogValueList_obj::get_POINTER_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","get_POINTER_Y",0xc8c61234,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.get_POINTER_Y","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",22,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Float tmp1 = tmp->getAxis((int)29);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadAnalogValueList_obj,get_POINTER_Y,return )

Float FlxGamepadAnalogValueList_obj::getAxis( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","getAxis",0x00e0513d,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",30,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(31)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = tmp->getAxis(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogValueList_obj,getAxis,return )

Float FlxGamepadAnalogValueList_obj::getXAxis( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","getXAxis",0xdd4eb91d,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.getXAxis","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",35,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(36)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp3 = _this->mapping->getAnalogStick(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp = _this->getAnalogXAxisValue(tmp3);
	}
	HX_STACK_LINE(36)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogValueList_obj,getXAxis,return )

Float FlxGamepadAnalogValueList_obj::getYAxis( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","getYAxis",0x70b54d9e,"flixel.input.gamepad.lists.FlxGamepadAnalogValueList.getYAxis","flixel/input/gamepad/lists/FlxGamepadAnalogValueList.hx",40,0xefa13aee)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(41)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::flixel::input::gamepad::FlxGamepad tmp1 = this->gamepad;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::flixel::input::gamepad::FlxGamepad _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::flixel::input::gamepad::FlxGamepadAnalogStick tmp3 = _this->mapping->getAnalogStick(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		tmp = _this->getYAxisRaw(tmp3);
	}
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadAnalogValueList_obj,getYAxis,return )


FlxGamepadAnalogValueList_obj::FlxGamepadAnalogValueList_obj()
{
}

void FlxGamepadAnalogValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

Dynamic FlxGamepadAnalogValueList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getXAxis") ) { return getXAxis_dyn(); }
		if (HX_FIELD_EQ(inName,"getYAxis") ) { return getYAxis_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"POINTER_X") ) { if (inCallProp == hx::paccAlways) return get_POINTER_X(); }
		if (HX_FIELD_EQ(inName,"POINTER_Y") ) { if (inCallProp == hx::paccAlways) return get_POINTER_Y(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"LEFT_STICK_X") ) { if (inCallProp == hx::paccAlways) return get_LEFT_STICK_X(); }
		if (HX_FIELD_EQ(inName,"LEFT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return get_LEFT_STICK_Y(); }
		if (HX_FIELD_EQ(inName,"LEFT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return get_LEFT_TRIGGER(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_X") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_STICK_X(); }
		if (HX_FIELD_EQ(inName,"RIGHT_STICK_Y") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_STICK_Y(); }
		if (HX_FIELD_EQ(inName,"RIGHT_TRIGGER") ) { if (inCallProp == hx::paccAlways) return get_RIGHT_TRIGGER(); }
		if (HX_FIELD_EQ(inName,"get_POINTER_X") ) { return get_POINTER_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_POINTER_Y") ) { return get_POINTER_Y_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_X") ) { return get_LEFT_STICK_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LEFT_STICK_Y") ) { return get_LEFT_STICK_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_LEFT_TRIGGER") ) { return get_LEFT_TRIGGER_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_X") ) { return get_RIGHT_STICK_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_STICK_Y") ) { return get_RIGHT_STICK_Y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_RIGHT_TRIGGER") ) { return get_RIGHT_TRIGGER_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadAnalogValueList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("LEFT_STICK_X","\xd1","\xb8","\x45","\x8c"));
	outFields->push(HX_HCSTRING("LEFT_STICK_Y","\xd2","\xb8","\x45","\x8c"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_X","\x86","\x69","\x01","\xa1"));
	outFields->push(HX_HCSTRING("RIGHT_STICK_Y","\x87","\x69","\x01","\xa1"));
	outFields->push(HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"));
	outFields->push(HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"));
	outFields->push(HX_HCSTRING("POINTER_X","\xf6","\x08","\xfa","\x28"));
	outFields->push(HX_HCSTRING("POINTER_Y","\xf7","\x08","\xfa","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadAnalogValueList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("get_LEFT_STICK_X","\x5a","\xa5","\xe4","\x90"),
	HX_HCSTRING("get_LEFT_STICK_Y","\x5b","\xa5","\xe4","\x90"),
	HX_HCSTRING("get_RIGHT_STICK_X","\xdd","\x74","\x71","\xa7"),
	HX_HCSTRING("get_RIGHT_STICK_Y","\xde","\x74","\x71","\xa7"),
	HX_HCSTRING("get_LEFT_TRIGGER","\x29","\x1e","\x65","\xf0"),
	HX_HCSTRING("get_RIGHT_TRIGGER","\xac","\xed","\xf1","\x06"),
	HX_HCSTRING("get_POINTER_X","\xcd","\xdc","\x5d","\xea"),
	HX_HCSTRING("get_POINTER_Y","\xce","\xdc","\x5d","\xea"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("getXAxis","\xc3","\xf4","\x3e","\xa3"),
	HX_HCSTRING("getYAxis","\x44","\x89","\xa5","\x36"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadAnalogValueList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadAnalogValueList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadAnalogValueList_obj::__mClass;

void FlxGamepadAnalogValueList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadAnalogValueList","\x54","\x8f","\xf6","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogValueList_obj >;
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
