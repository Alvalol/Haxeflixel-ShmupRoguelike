#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_flixel_system_debug_VCR
#include <flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicPause
#include <flixel/system/debug/_VCR/GraphicPause.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRestart
#include <flixel/system/debug/_VCR/GraphicRestart.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicStep
#include <flixel/system/debug/_VCR/GraphicStep.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxHorizontalAlign
#include <flixel/util/FlxHorizontalAlign.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void VCR_obj::__construct(::flixel::_system::debug::FlxDebugger Debugger)
{
HX_STACK_FRAME("flixel.system.debug.VCR","new",0x7584fc6f,"flixel.system.debug.VCR.new","flixel/system/debug/VCR.hx",39,0x4ecb3ec2)
HX_STACK_THIS(this)
HX_STACK_ARG(Debugger,"Debugger")
{
	HX_STACK_LINE(46)
	this->runtime = ((Float)0);
	HX_STACK_LINE(59)
	::flixel::_system::debug::_VCR::GraphicRestart tmp = ::flixel::_system::debug::_VCR::GraphicRestart_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Dynamic tmp1 = ::flixel::FlxG_obj::resetState_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	::flixel::_system::ui::FlxSystemButton tmp2 = Debugger->__Field(HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"), hx::paccDynamic )(::flixel::util::FlxHorizontalAlign_obj::CENTER,tmp,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	this->restartBtn = tmp2;
	HX_STACK_LINE(64)
	::flixel::_system::debug::_VCR::GraphicPause tmp3 = ::flixel::_system::debug::_VCR::GraphicPause_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	::flixel::_system::frontEnds::VCRFrontEnd tmp4 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	Dynamic tmp5 = tmp4->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	::flixel::_system::ui::FlxSystemButton tmp6 = Debugger->__Field(HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"), hx::paccDynamic )(::flixel::util::FlxHorizontalAlign_obj::CENTER,tmp3,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	this->playbackToggleBtn = tmp6;
	HX_STACK_LINE(65)
	::flixel::_system::debug::_VCR::GraphicStep tmp7 = ::flixel::_system::debug::_VCR::GraphicStep_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	Dynamic tmp8 = this->onStep_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	::flixel::_system::ui::FlxSystemButton tmp9 = Debugger->__Field(HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"), hx::paccDynamic )(::flixel::util::FlxHorizontalAlign_obj::CENTER,tmp7,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	this->stepBtn = tmp9;
}
;
	return null();
}

//VCR_obj::~VCR_obj() { }

Dynamic VCR_obj::__CreateEmpty() { return  new VCR_obj; }
hx::ObjectPtr< VCR_obj > VCR_obj::__new(::flixel::_system::debug::FlxDebugger Debugger)
{  hx::ObjectPtr< VCR_obj > _result_ = new VCR_obj();
	_result_->__construct(Debugger);
	return _result_;}

Dynamic VCR_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VCR_obj > _result_ = new VCR_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void VCR_obj::onPause( ){
{
		HX_STACK_FRAME("flixel.system.debug.VCR","onPause",0xf9cf54e6,"flixel.system.debug.VCR.onPause","flixel/system/debug/VCR.hx",145,0x4ecb3ec2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		::flixel::_system::ui::FlxSystemButton tmp1 = this->playbackToggleBtn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		tmp1->__FieldRef(HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81")) = tmp->__Field(HX_HCSTRING("resume","\xad","\x69","\x84","\x08"), hx::paccDynamic );
		HX_STACK_LINE(147)
		::flixel::_system::ui::FlxSystemButton tmp2 = this->playbackToggleBtn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		::flixel::_system::debug::GraphicArrowRight tmp3 = ::flixel::_system::debug::GraphicArrowRight_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		tmp2->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onPause,(void))

Void VCR_obj::onResume( ){
{
		HX_STACK_FRAME("flixel.system.debug.VCR","onResume",0xb49b1dbd,"flixel.system.debug.VCR.onResume","flixel/system/debug/VCR.hx",155,0x4ecb3ec2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		::flixel::_system::ui::FlxSystemButton tmp1 = this->playbackToggleBtn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		tmp1->__FieldRef(HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81")) = tmp->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic );
		HX_STACK_LINE(157)
		::flixel::_system::ui::FlxSystemButton tmp2 = this->playbackToggleBtn;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		::flixel::_system::debug::_VCR::GraphicPause tmp3 = ::flixel::_system::debug::_VCR::GraphicPause_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		tmp2->__Field(HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onResume,(void))

Void VCR_obj::onStep( ){
{
		HX_STACK_FRAME("flixel.system.debug.VCR","onStep",0x2da2775c,"flixel.system.debug.VCR.onStep","flixel/system/debug/VCR.hx",165,0x4ecb3ec2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		::flixel::_system::frontEnds::VCRFrontEnd tmp = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		bool tmp1 = tmp->__Field(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		if ((tmp2)){
			HX_STACK_LINE(168)
			::flixel::_system::frontEnds::VCRFrontEnd tmp3 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			tmp3->__Field(HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"), hx::paccDynamic )();
		}
		HX_STACK_LINE(170)
		::flixel::_system::frontEnds::VCRFrontEnd tmp3 = ::flixel::FlxG_obj::vcr;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		tmp3->__FieldRef(HX_HCSTRING("stepRequested","\x82","\x98","\x54","\xd1")) = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onStep,(void))


VCR_obj::VCR_obj()
{
}

void VCR_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCR);
	HX_MARK_MEMBER_NAME(runtimeDisplay,"runtimeDisplay");
	HX_MARK_MEMBER_NAME(runtime,"runtime");
	HX_MARK_MEMBER_NAME(playbackToggleBtn,"playbackToggleBtn");
	HX_MARK_MEMBER_NAME(stepBtn,"stepBtn");
	HX_MARK_MEMBER_NAME(restartBtn,"restartBtn");
	HX_MARK_MEMBER_NAME(recordBtn,"recordBtn");
	HX_MARK_MEMBER_NAME(openBtn,"openBtn");
	HX_MARK_END_CLASS();
}

void VCR_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(runtimeDisplay,"runtimeDisplay");
	HX_VISIT_MEMBER_NAME(runtime,"runtime");
	HX_VISIT_MEMBER_NAME(playbackToggleBtn,"playbackToggleBtn");
	HX_VISIT_MEMBER_NAME(stepBtn,"stepBtn");
	HX_VISIT_MEMBER_NAME(restartBtn,"restartBtn");
	HX_VISIT_MEMBER_NAME(recordBtn,"recordBtn");
	HX_VISIT_MEMBER_NAME(openBtn,"openBtn");
}

Dynamic VCR_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onStep") ) { return onStep_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { return runtime; }
		if (HX_FIELD_EQ(inName,"stepBtn") ) { return stepBtn; }
		if (HX_FIELD_EQ(inName,"openBtn") ) { return openBtn; }
		if (HX_FIELD_EQ(inName,"onPause") ) { return onPause_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResume") ) { return onResume_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"recordBtn") ) { return recordBtn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restartBtn") ) { return restartBtn; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runtimeDisplay") ) { return runtimeDisplay; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playbackToggleBtn") ) { return playbackToggleBtn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VCR_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"runtime") ) { runtime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepBtn") ) { stepBtn=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"openBtn") ) { openBtn=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"recordBtn") ) { recordBtn=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"restartBtn") ) { restartBtn=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"runtimeDisplay") ) { runtimeDisplay=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"playbackToggleBtn") ) { playbackToggleBtn=inValue.Cast< ::flixel::_system::ui::FlxSystemButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCR_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("runtimeDisplay","\x4a","\x68","\x09","\x00"));
	outFields->push(HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef"));
	outFields->push(HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"));
	outFields->push(HX_HCSTRING("stepBtn","\x70","\x2a","\x3d","\x81"));
	outFields->push(HX_HCSTRING("restartBtn","\xcd","\x3d","\xf6","\x1c"));
	outFields->push(HX_HCSTRING("recordBtn","\x4b","\xb4","\xcb","\xdc"));
	outFields->push(HX_HCSTRING("openBtn","\xb2","\x70","\x27","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(VCR_obj,runtimeDisplay),HX_HCSTRING("runtimeDisplay","\x4a","\x68","\x09","\x00")},
	{hx::fsFloat,(int)offsetof(VCR_obj,runtime),HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,playbackToggleBtn),HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,stepBtn),HX_HCSTRING("stepBtn","\x70","\x2a","\x3d","\x81")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,restartBtn),HX_HCSTRING("restartBtn","\xcd","\x3d","\xf6","\x1c")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,recordBtn),HX_HCSTRING("recordBtn","\x4b","\xb4","\xcb","\xdc")},
	{hx::fsObject /*::flixel::_system::ui::FlxSystemButton*/ ,(int)offsetof(VCR_obj,openBtn),HX_HCSTRING("openBtn","\xb2","\x70","\x27","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("runtimeDisplay","\x4a","\x68","\x09","\x00"),
	HX_HCSTRING("runtime","\xd8","\xb4","\x60","\xef"),
	HX_HCSTRING("playbackToggleBtn","\x8d","\xe1","\xd3","\xfc"),
	HX_HCSTRING("stepBtn","\x70","\x2a","\x3d","\x81"),
	HX_HCSTRING("restartBtn","\xcd","\x3d","\xf6","\x1c"),
	HX_HCSTRING("recordBtn","\x4b","\xb4","\xcb","\xdc"),
	HX_HCSTRING("openBtn","\xb2","\x70","\x27","\x40"),
	HX_HCSTRING("onPause","\x57","\x75","\x95","\x53"),
	HX_HCSTRING("onResume","\x2c","\x60","\x31","\xe8"),
	HX_HCSTRING("onStep","\x0b","\xf0","\xe5","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCR_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCR_obj::__mClass,"__mClass");
};

#endif

hx::Class VCR_obj::__mClass;

void VCR_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.VCR","\xfd","\x98","\x3c","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VCR_obj >;
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
} // end namespace debug
