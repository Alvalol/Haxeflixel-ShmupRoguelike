#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#include <flixel/input/gamepad/lists/FlxGamepadPointerValueList.h>
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

Void FlxGamepadPointerValueList_obj::__construct(::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","new",0xa1fdbe8f,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.new","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",32,0x5105f03d)
HX_STACK_THIS(this)
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(32)
	this->gamepad = gamepad;
}
;
	return null();
}

//FlxGamepadPointerValueList_obj::~FlxGamepadPointerValueList_obj() { }

Dynamic FlxGamepadPointerValueList_obj::__CreateEmpty() { return  new FlxGamepadPointerValueList_obj; }
hx::ObjectPtr< FlxGamepadPointerValueList_obj > FlxGamepadPointerValueList_obj::__new(::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxGamepadPointerValueList_obj > _result_ = new FlxGamepadPointerValueList_obj();
	_result_->__construct(gamepad);
	return _result_;}

Dynamic FlxGamepadPointerValueList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadPointerValueList_obj > _result_ = new FlxGamepadPointerValueList_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Float FlxGamepadPointerValueList_obj::get_X( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_X",0x6405bd1e,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_X","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",23,0x5105f03d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = tmp->mapping->supportsPointer;		HX_STACK_VAR(tmp1,"tmp1");
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
		tmp3 = tmp4->getAxis((int)28);
	}
	HX_STACK_LINE(23)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_X,return )

Float FlxGamepadPointerValueList_obj::get_Y( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_Y",0x6405bd1f,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_Y","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",28,0x5105f03d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = tmp->mapping->supportsPointer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	if ((tmp2)){
		HX_STACK_LINE(28)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(28)
		::flixel::input::gamepad::FlxGamepad tmp4 = this->gamepad;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		tmp3 = tmp4->getAxis((int)29);
	}
	HX_STACK_LINE(28)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_Y,return )

Float FlxGamepadPointerValueList_obj::getAxis( int id){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","getAxis",0xab09fe06,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",36,0x5105f03d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(37)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = tmp->mapping->supportsPointer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	if ((tmp2)){
		HX_STACK_LINE(38)
		return (int)0;
	}
	HX_STACK_LINE(39)
	::flixel::input::gamepad::FlxGamepad tmp3 = this->gamepad;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	int tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	Float tmp5 = tmp3->getAxis(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadPointerValueList_obj,getAxis,return )

bool FlxGamepadPointerValueList_obj::get_isSupported( ){
	HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_isSupported",0x729a2d2a,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_isSupported","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",43,0x5105f03d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::flixel::input::gamepad::FlxGamepad tmp = this->gamepad;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1 = tmp->mapping->supportsPointer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_isSupported,return )


FlxGamepadPointerValueList_obj::FlxGamepadPointerValueList_obj()
{
}

void FlxGamepadPointerValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadPointerValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadPointerValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

Dynamic FlxGamepadPointerValueList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == hx::paccAlways) return get_X(); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == hx::paccAlways) return get_Y(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_X") ) { return get_X_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return get_Y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return gamepad; }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == hx::paccAlways) return get_isSupported(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadPointerValueList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast< ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadPointerValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("X","\x58","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadPointerValueList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("get_X","\x2f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_Y","\x30","\xa5","\x60","\x91"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadPointerValueList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadPointerValueList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadPointerValueList_obj::__mClass;

void FlxGamepadPointerValueList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadPointerValueList","\x1d","\xcb","\x61","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadPointerValueList_obj >;
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
