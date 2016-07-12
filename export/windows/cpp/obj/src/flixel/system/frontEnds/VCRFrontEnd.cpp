#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Mouse
#include <openfl/_legacy/ui/Mouse.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void VCRFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","new",0x9592d9ef,"flixel.system.frontEnds.VCRFrontEnd.new","flixel/system/frontEnds/VCRFrontEnd.hx",17,0xa1666a42)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	this->stepRequested = false;
	HX_STACK_LINE(47)
	this->paused = false;
}
;
	return null();
}

//VCRFrontEnd_obj::~VCRFrontEnd_obj() { }

Dynamic VCRFrontEnd_obj::__CreateEmpty() { return  new VCRFrontEnd_obj; }
hx::ObjectPtr< VCRFrontEnd_obj > VCRFrontEnd_obj::__new()
{  hx::ObjectPtr< VCRFrontEnd_obj > _result_ = new VCRFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic VCRFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VCRFrontEnd_obj > _result_ = new VCRFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void VCRFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","pause",0x6797a245,"flixel.system.frontEnds.VCRFrontEnd.pause","flixel/system/frontEnds/VCRFrontEnd.hx",57,0xa1666a42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(61)
			::flixel::input::mouse::FlxMouse tmp2 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			bool tmp3 = tmp2->useSystemCursor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			if ((tmp4)){
				HX_STACK_LINE(62)
				::openfl::_legacy::ui::Mouse_obj::show();
			}
			HX_STACK_LINE(65)
			this->paused = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,pause,(void))

Void VCRFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.VCRFrontEnd","resume",0x5616837e,"flixel.system.frontEnds.VCRFrontEnd.resume","flixel/system/frontEnds/VCRFrontEnd.hx",77,0xa1666a42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(81)
			::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			bool tmp2 = tmp1->useSystemCursor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			if ((tmp3)){
				HX_STACK_LINE(82)
				::openfl::_legacy::ui::Mouse_obj::hide();
			}
			HX_STACK_LINE(85)
			this->paused = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCRFrontEnd_obj,resume,(void))


VCRFrontEnd_obj::VCRFrontEnd_obj()
{
}

Dynamic VCRFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { return stepRequested; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VCRFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stepRequested") ) { stepRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCRFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(VCRFrontEnd_obj,stepRequested),HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCRFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class VCRFrontEnd_obj::__mClass;

void VCRFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.VCRFrontEnd","\x7d","\xb6","\xad","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VCRFrontEnd_obj >;
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
