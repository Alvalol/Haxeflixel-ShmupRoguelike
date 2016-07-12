#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
namespace flixel{
namespace input{
namespace gamepad{

Void FlxGamepadButton_obj::__construct(int ID)
{
HX_STACK_FRAME("flixel.input.gamepad.FlxGamepadButton","new",0xa97275d6,"flixel.input.gamepad.FlxGamepadButton.new","flixel/input/gamepad/FlxGamepadButton.hx",5,0xa176f377)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
{
	HX_STACK_LINE(5)
	int tmp = ID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5)
	super::__construct(tmp);
}
;
	return null();
}

//FlxGamepadButton_obj::~FlxGamepadButton_obj() { }

Dynamic FlxGamepadButton_obj::__CreateEmpty() { return  new FlxGamepadButton_obj; }
hx::ObjectPtr< FlxGamepadButton_obj > FlxGamepadButton_obj::__new(int ID)
{  hx::ObjectPtr< FlxGamepadButton_obj > _result_ = new FlxGamepadButton_obj();
	_result_->__construct(ID);
	return _result_;}

Dynamic FlxGamepadButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGamepadButton_obj > _result_ = new FlxGamepadButton_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


FlxGamepadButton_obj::FlxGamepadButton_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadButton_obj::__mClass;

void FlxGamepadButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.FlxGamepadButton","\xe4","\x92","\x29","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadButton_obj >;
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
