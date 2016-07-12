#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
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
namespace flixel{
namespace _system{
namespace frontEnds{

Void DebuggerFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","new",0x8bc76b9f,"flixel.system.frontEnds.DebuggerFrontEnd.new","flixel/system/frontEnds/DebuggerFrontEnd.hx",14,0x2ebb4b30)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->visible = false;
	HX_STACK_LINE(36)
	this->drawDebugChanged = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(32)
	this->drawDebug = false;
	HX_STACK_LINE(26)
	this->toggleKeys = Array_obj< int >::__new().Add((int)192).Add((int)220);
	HX_STACK_LINE(19)
	this->precision = (int)3;
}
;
	return null();
}

//DebuggerFrontEnd_obj::~DebuggerFrontEnd_obj() { }

Dynamic DebuggerFrontEnd_obj::__CreateEmpty() { return  new DebuggerFrontEnd_obj; }
hx::ObjectPtr< DebuggerFrontEnd_obj > DebuggerFrontEnd_obj::__new()
{  hx::ObjectPtr< DebuggerFrontEnd_obj > _result_ = new DebuggerFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic DebuggerFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerFrontEnd_obj > _result_ = new DebuggerFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Void DebuggerFrontEnd_obj::setLayout( ::flixel::_system::debug::FlxDebuggerLayout Layout){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","setLayout",0x96c2386b,"flixel.system.frontEnds.DebuggerFrontEnd.setLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",46,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Layout,"Layout")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,setLayout,(void))

Void DebuggerFrontEnd_obj::resetLayout( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","resetLayout",0xc33ca418,"flixel.system.frontEnds.DebuggerFrontEnd.resetLayout","flixel/system/frontEnds/DebuggerFrontEnd.hx",56,0x2ebb4b30)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DebuggerFrontEnd_obj,resetLayout,(void))

::flixel::_system::ui::FlxSystemButton DebuggerFrontEnd_obj::addButton( ::flixel::util::FlxHorizontalAlign Alignment,::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode,hx::Null< bool >  __o_UpdateLayout){
bool ToggleMode = __o_ToggleMode.Default(false);
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","addButton",0x7066ab72,"flixel.system.frontEnds.DebuggerFrontEnd.addButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",77,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(Icon,"Icon")
	HX_STACK_ARG(UpHandler,"UpHandler")
	HX_STACK_ARG(ToggleMode,"ToggleMode")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
		HX_STACK_LINE(77)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC5(DebuggerFrontEnd_obj,addButton,return )

::flixel::_system::debug::Window DebuggerFrontEnd_obj::track( Dynamic ObjectOrClass,::String WindowTitle){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","track",0x1a1fb78a,"flixel.system.frontEnds.DebuggerFrontEnd.track","flixel/system/frontEnds/DebuggerFrontEnd.hx",106,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrClass,"ObjectOrClass")
	HX_STACK_ARG(WindowTitle,"WindowTitle")
	HX_STACK_LINE(106)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,track,return )

Void DebuggerFrontEnd_obj::addTrackerProfile( ::flixel::_system::debug::watch::TrackerProfile Profile){
{
		HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","addTrackerProfile",0xb36941d1,"flixel.system.frontEnds.DebuggerFrontEnd.addTrackerProfile","flixel/system/frontEnds/DebuggerFrontEnd.hx",115,0x2ebb4b30)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Profile,"Profile")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,addTrackerProfile,(void))

Void DebuggerFrontEnd_obj::removeButton( ::flixel::_system::ui::FlxSystemButton Button,hx::Null< bool >  __o_UpdateLayout){
bool UpdateLayout = __o_UpdateLayout.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","removeButton",0xa0228237,"flixel.system.frontEnds.DebuggerFrontEnd.removeButton","flixel/system/frontEnds/DebuggerFrontEnd.hx",128,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Button,"Button")
	HX_STACK_ARG(UpdateLayout,"UpdateLayout")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DebuggerFrontEnd_obj,removeButton,(void))

bool DebuggerFrontEnd_obj::set_drawDebug( bool Value){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","set_drawDebug",0x8073fd91,"flixel.system.frontEnds.DebuggerFrontEnd.set_drawDebug","flixel/system/frontEnds/DebuggerFrontEnd.hx",138,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(144)
	bool tmp = this->drawDebug = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_drawDebug,return )

bool DebuggerFrontEnd_obj::set_visible( bool Value){
	HX_STACK_FRAME("flixel.system.frontEnds.DebuggerFrontEnd","set_visible",0xfdfb51d4,"flixel.system.frontEnds.DebuggerFrontEnd.set_visible","flixel/system/frontEnds/DebuggerFrontEnd.hx",148,0x2ebb4b30)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(161)
	bool tmp = this->visible = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DebuggerFrontEnd_obj,set_visible,return )


DebuggerFrontEnd_obj::DebuggerFrontEnd_obj()
{
}

void DebuggerFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DebuggerFrontEnd);
	HX_MARK_MEMBER_NAME(precision,"precision");
	HX_MARK_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_MARK_MEMBER_NAME(drawDebug,"drawDebug");
	HX_MARK_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void DebuggerFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(precision,"precision");
	HX_VISIT_MEMBER_NAME(toggleKeys,"toggleKeys");
	HX_VISIT_MEMBER_NAME(drawDebug,"drawDebug");
	HX_VISIT_MEMBER_NAME(drawDebugChanged,"drawDebugChanged");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

Dynamic DebuggerFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"track") ) { return track_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { return precision; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug; }
		if (HX_FIELD_EQ(inName,"setLayout") ) { return setLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"addButton") ) { return addButton_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { return toggleKeys; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetLayout") ) { return resetLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeButton") ) { return removeButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_drawDebug") ) { return set_drawDebug_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { return drawDebugChanged; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addTrackerProfile") ) { return addTrackerProfile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DebuggerFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue);visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"precision") ) { precision=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { if (inCallProp == hx::paccAlways) return set_drawDebug(inValue);drawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleKeys") ) { toggleKeys=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawDebugChanged") ) { drawDebugChanged=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DebuggerFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"));
	outFields->push(HX_HCSTRING("toggleKeys","\xa8","\x27","\xbd","\xde"));
	outFields->push(HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"));
	outFields->push(HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DebuggerFrontEnd_obj,precision),HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DebuggerFrontEnd_obj,toggleKeys),HX_HCSTRING("toggleKeys","\xa8","\x27","\xbd","\xde")},
	{hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,drawDebug),HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(DebuggerFrontEnd_obj,drawDebugChanged),HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47")},
	{hx::fsBool,(int)offsetof(DebuggerFrontEnd_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("precision","\x3e","\xd5","\xc7","\x80"),
	HX_HCSTRING("toggleKeys","\xa8","\x27","\xbd","\xde"),
	HX_HCSTRING("drawDebug","\xaf","\x87","\x2a","\x9f"),
	HX_HCSTRING("drawDebugChanged","\x05","\x35","\xde","\x47"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("setLayout","\xec","\x23","\x60","\xb8"),
	HX_HCSTRING("resetLayout","\xd9","\x31","\xcd","\xf8"),
	HX_HCSTRING("addButton","\xf3","\x96","\x04","\x92"),
	HX_HCSTRING("track","\x8b","\x8e","\x1f","\x16"),
	HX_HCSTRING("addTrackerProfile","\x52","\x16","\x10","\x21"),
	HX_HCSTRING("removeButton","\x56","\xfd","\x0d","\x49"),
	HX_HCSTRING("set_drawDebug","\x92","\x3d","\x94","\xa5"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class DebuggerFrontEnd_obj::__mClass;

void DebuggerFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.DebuggerFrontEnd","\x2d","\xb0","\x6b","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DebuggerFrontEnd_obj >;
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
