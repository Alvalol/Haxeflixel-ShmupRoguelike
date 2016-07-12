#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList
#include <flixel/input/gamepad/lists/FlxGamepadMotionValueList.h>
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

Void FlxGamepadMotionValueList_obj::__construct(::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadMotionValueList","new",0xb094ae80,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.new","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",31,0x4127dbf4)
HX_STACK_THIS(this)
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(31)
	this->gamepad = gamepad;
}
;
	return null();
}

//FlxGamepadMotionValueList_obj::~FlxGamepadMotionValueList_obj() { }

Dynamic FlxGamepadMotionValueList_obj::__CreateEmpty() { return  new FlxGamepadMotionValueList_obj; }
hx::ObjectPtr< FlxGamepadMotionValueList_obj > FlxGamepadMotionValueList_obj::__new(::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxGamepadMotionValueList_obj > _result_ = new FlxGamepadMotionValueList_obj();
	_result_->__construct(gamepad);
	return _result_;}

Dynamic FlxGamepadMotionValueList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadMotionValueList_obj > _result_ = new FlxGamepadMotionValueList_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float FlxGamepadMotionValueList_obj::get_TILT_PITCH( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadMotionValueList","get_TILT_PITCH",0x82747807,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.get_TILT_PITCH","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",23,0x4127dbf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = tmp->mapping->supportsMotion;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	if ((tmp2)){
		HX_STACK_LINE(23)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(23)
		::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		tmp3 = tmp4->getAxis((int)26);
	}
	HX_STACK_LINE(23)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMotionValueList_obj,get_TILT_PITCH,return )

Float FlxGamepadMotionValueList_obj::get_TILT_ROLL( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadMotionValueList","get_TILT_ROLL",0x9ce6f8f6,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.get_TILT_ROLL","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",27,0x4127dbf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	bool tmp1 = tmp->mapping->supportsMotion;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(27)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(27)
		::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		tmp3 = tmp4->getAxis((int)27);
	}
	HX_STACK_LINE(27)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMotionValueList_obj,get_TILT_ROLL,return )

Float FlxGamepadMotionValueList_obj::getAxis( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadMotionValueList","getAxis",0x44d63a77,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",35,0x4127dbf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(36)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = tmp->mapping->supportsMotion;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	if ((tmp2)){
		HX_STACK_LINE(37)
		return (int)0;
	}
	HX_STACK_LINE(38)
	::flixel::input::gamepad::FlxGamepad tmp3 = this->gamepad;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(38)
	int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	Float tmp5 = tmp3->getAxis(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMotionValueList_obj,getAxis,return )

bool FlxGamepadMotionValueList_obj::get_isSupported( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadMotionValueList","get_isSupported",0x6991c29b,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.get_isSupported","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",42,0x4127dbf4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = tmp->mapping->supportsMotion;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMotionValueList_obj,get_isSupported,return )


FlxGamepadMotionValueList_obj::FlxGamepadMotionValueList_obj()
{
}

void FlxGamepadMotionValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadMotionValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadMotionValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

Dynamic FlxGamepadMotionValueList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TILT_ROLL") ) { if (inCallProp == hx::paccAlways) return get_TILT_ROLL(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILT_PITCH") ) { if (inCallProp == hx::paccAlways) return get_TILT_PITCH(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == hx::paccAlways) return get_isSupported(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_TILT_ROLL") ) { return get_TILT_ROLL_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_TILT_PITCH") ) { return get_TILT_PITCH_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadMotionValueList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadMotionValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b"));
	outFields->push(HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadMotionValueList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("get_TILT_PITCH","\x27","\xe2","\xb6","\x91"),
	HX_HCSTRING("get_TILT_ROLL","\xd6","\x32","\xd7","\x1f"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadMotionValueList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadMotionValueList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadMotionValueList_obj::__mClass;

void FlxGamepadMotionValueList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadMotionValueList","\x8e","\xae","\x83","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadMotionValueList_obj >;
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
