#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogStateList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogStateList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadAnalogValueList
#include <flixel/input/gamepad/lists/FlxGamepadAnalogValueList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

Void FlxGamepadAnalogList_obj::__construct(::flixel::input::gamepad::FlxGamepad gamepad)
{
HX_STACK_FRAME("flixel.input.gamepad.lists.FlxGamepadAnalogList","new",0x93642d0b,"flixel.input.gamepad.lists.FlxGamepadAnalogList.new","flixel/input/gamepad/lists/FlxGamepadAnalogList.hx",20,0x4e142041)
HX_STACK_THIS(this)
HX_STACK_ARG(gamepad,"gamepad")
{
	HX_STACK_LINE(21)
	::flixel::input::gamepad::lists::FlxGamepadAnalogValueList tmp = ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList_obj::__new(gamepad);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	this->value = tmp;
	HX_STACK_LINE(22)
	::flixel::input::gamepad::lists::FlxGamepadAnalogStateList tmp1 = ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList_obj::__new((int)2,gamepad);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	this->justMoved = tmp1;
	HX_STACK_LINE(23)
	::flixel::input::gamepad::lists::FlxGamepadAnalogStateList tmp2 = ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList_obj::__new((int)-1,gamepad);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->justReleased = tmp2;
}
;
	return null();
}

//FlxGamepadAnalogList_obj::~FlxGamepadAnalogList_obj() { }

Dynamic FlxGamepadAnalogList_obj::__CreateEmpty() { return  new FlxGamepadAnalogList_obj; }
hx::ObjectPtr< FlxGamepadAnalogList_obj > FlxGamepadAnalogList_obj::__new(::flixel::input::gamepad::FlxGamepad gamepad)
{  hx::ObjectPtr< FlxGamepadAnalogList_obj > _result_ = new FlxGamepadAnalogList_obj();
	_result_->__construct(gamepad);
	return _result_;}

Dynamic FlxGamepadAnalogList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadAnalogList_obj > _result_ = new FlxGamepadAnalogList_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


FlxGamepadAnalogList_obj::FlxGamepadAnalogList_obj()
{
}

void FlxGamepadAnalogList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadAnalogList);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(justMoved,"justMoved");
	HX_MARK_MEMBER_NAME(justReleased,"justReleased");
	HX_MARK_END_CLASS();
}

void FlxGamepadAnalogList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(justMoved,"justMoved");
	HX_VISIT_MEMBER_NAME(justReleased,"justReleased");
}

Dynamic FlxGamepadAnalogList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justMoved") ) { return justMoved; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { return justReleased; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGamepadAnalogList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadAnalogValueList >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"justMoved") ) { justMoved=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { justReleased=inValue.Cast< ::flixel::input::gamepad::lists::FlxGamepadAnalogStateList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadAnalogList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("justMoved","\x67","\x12","\x21","\x2b"));
	outFields->push(HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogValueList*/ ,(int)offsetof(FlxGamepadAnalogList_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogStateList*/ ,(int)offsetof(FlxGamepadAnalogList_obj,justMoved),HX_HCSTRING("justMoved","\x67","\x12","\x21","\x2b")},
	{hx::fsObject /*::flixel::input::gamepad::lists::FlxGamepadAnalogStateList*/ ,(int)offsetof(FlxGamepadAnalogList_obj,justReleased),HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("justMoved","\x67","\x12","\x21","\x2b"),
	HX_HCSTRING("justReleased","\x09","\x1b","\x5b","\x66"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadAnalogList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadAnalogList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadAnalogList_obj::__mClass;

void FlxGamepadAnalogList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadAnalogList","\x99","\x4b","\xd8","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadAnalogList_obj >;
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
