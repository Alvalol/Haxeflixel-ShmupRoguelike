#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSystemButton
#include <flixel/system/ui/FlxSystemButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace flixel{
namespace _system{
namespace ui{

Void FlxSystemButton_obj::__construct(::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode)
{
HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","new",0x605e3518,"flixel.system.ui.FlxSystemButton.new","flixel/system/ui/FlxSystemButton.hx",14,0x167fa379)
HX_STACK_THIS(this)
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(UpHandler,"UpHandler")
HX_STACK_ARG(__o_ToggleMode,"ToggleMode")
bool ToggleMode = __o_ToggleMode.Default(false);
{
	HX_STACK_LINE(42)
	this->_mouseDown = false;
	HX_STACK_LINE(33)
	this->toggled = false;
	HX_STACK_LINE(29)
	this->toggleMode = false;
	HX_STACK_LINE(24)
	this->enabled = true;
	HX_STACK_LINE(53)
	super::__construct();
	HX_STACK_LINE(55)
	bool tmp = (Icon != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	if ((tmp)){
		HX_STACK_LINE(56)
		::openfl::_legacy::display::BitmapData tmp1 = Icon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		this->changeIcon(tmp1);
	}
	HX_STACK_LINE(62)
	this->upHandler = UpHandler;
	HX_STACK_LINE(63)
	this->toggleMode = ToggleMode;
	HX_STACK_LINE(65)
	::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Dynamic tmp2 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	this->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(66)
	::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Dynamic tmp4 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	this->addEventListener(tmp3,tmp4,null(),null(),null());
	HX_STACK_LINE(67)
	::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	Dynamic tmp6 = this->onMouseOut_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	this->addEventListener(tmp5,tmp6,null(),null(),null());
	HX_STACK_LINE(68)
	::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	Dynamic tmp8 = this->onMouseOver_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	this->addEventListener(tmp7,tmp8,null(),null(),null());
}
;
	return null();
}

//FlxSystemButton_obj::~FlxSystemButton_obj() { }

Dynamic FlxSystemButton_obj::__CreateEmpty() { return  new FlxSystemButton_obj; }
hx::ObjectPtr< FlxSystemButton_obj > FlxSystemButton_obj::__new(::openfl::_legacy::display::BitmapData Icon,Dynamic UpHandler,hx::Null< bool >  __o_ToggleMode)
{  hx::ObjectPtr< FlxSystemButton_obj > _result_ = new FlxSystemButton_obj();
	_result_->__construct(Icon,UpHandler,__o_ToggleMode);
	return _result_;}

Dynamic FlxSystemButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSystemButton_obj > _result_ = new FlxSystemButton_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *FlxSystemButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxSystemButton_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxSystemButton_obj >(this); }
Void FlxSystemButton_obj::changeIcon( ::openfl::_legacy::display::BitmapData Icon){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","changeIcon",0x06083f51,"flixel.system.ui.FlxSystemButton.changeIcon","flixel/system/ui/FlxSystemButton.hx",77,0x167fa379)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Icon,"Icon")
		HX_STACK_LINE(78)
		::openfl::_legacy::display::Bitmap tmp = this->_icon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		if ((tmp1)){
			HX_STACK_LINE(79)
			::openfl::_legacy::display::Bitmap tmp2 = this->_icon;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			this->removeChild(tmp2);
		}
		HX_STACK_LINE(81)
		::openfl::_legacy::display::BitmapData tmp2 = Icon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::flixel::_system::debug::DebuggerUtil_obj::fixSize(tmp2);
		HX_STACK_LINE(82)
		::openfl::_legacy::display::Bitmap tmp3 = ::openfl::_legacy::display::Bitmap_obj::__new(Icon,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		this->_icon = tmp3;
		HX_STACK_LINE(83)
		::openfl::_legacy::display::Bitmap tmp4 = this->_icon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		this->addChild(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,changeIcon,(void))

Void FlxSystemButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","destroy",0x554d4db2,"flixel.system.ui.FlxSystemButton.destroy","flixel/system/ui/FlxSystemButton.hx",87,0x167fa379)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Dynamic tmp1 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		this->removeEventListener(tmp,tmp1,null());
		HX_STACK_LINE(89)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		Dynamic tmp3 = this->onMouseDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		this->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(90)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		Dynamic tmp5 = this->onMouseOut_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		this->removeEventListener(tmp4,tmp5,null());
		HX_STACK_LINE(91)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		Dynamic tmp7 = this->onMouseOver_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		this->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(92)
		this->_icon = null();
		HX_STACK_LINE(93)
		this->upHandler = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSystemButton_obj,destroy,(void))

Void FlxSystemButton_obj::onMouseUp( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","onMouseUp",0xe1786b39,"flixel.system.ui.FlxSystemButton.onMouseUp","flixel/system/ui/FlxSystemButton.hx",97,0x167fa379)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(98)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		if ((tmp)){
			HX_STACK_LINE(98)
			tmp1 = this->_mouseDown;
		}
		else{
			HX_STACK_LINE(98)
			tmp1 = false;
		}
		HX_STACK_LINE(98)
		if ((tmp1)){
			HX_STACK_LINE(100)
			bool tmp2 = this->toggled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			this->set_toggled(tmp3);
			HX_STACK_LINE(101)
			this->_mouseDown = false;
			HX_STACK_LINE(103)
			Dynamic tmp4 = this->upHandler_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			if ((tmp5)){
				HX_STACK_LINE(105)
				this->upHandler();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseUp,(void))

Void FlxSystemButton_obj::onMouseDown( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","onMouseDown",0x759770c0,"flixel.system.ui.FlxSystemButton.onMouseDown","flixel/system/ui/FlxSystemButton.hx",112,0x167fa379)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(112)
		this->_mouseDown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseDown,(void))

Void FlxSystemButton_obj::onMouseOver( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","onMouseOver",0x7ce209b2,"flixel.system.ui.FlxSystemButton.onMouseOver","flixel/system/ui/FlxSystemButton.hx",117,0x167fa379)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(117)
		::flixel::_system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		Float tmp = _g->__Field(HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		Float tmp1 = (tmp - ((Float)0.2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		_g->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOver,(void))

Void FlxSystemButton_obj::onMouseOut( ::openfl::_legacy::events::MouseEvent E){
{
		HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","onMouseOut",0x67e0ddf0,"flixel.system.ui.FlxSystemButton.onMouseOut","flixel/system/ui/FlxSystemButton.hx",122,0x167fa379)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(122)
		::flixel::_system::ui::FlxSystemButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		Float tmp = _g->__Field(HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		Float tmp1 = (tmp + ((Float)0.2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		_g->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,onMouseOut,(void))

bool FlxSystemButton_obj::set_toggled( bool Value){
	HX_STACK_FRAME("flixel.system.ui.FlxSystemButton","set_toggled",0xc0fd262b,"flixel.system.ui.FlxSystemButton.set_toggled","flixel/system/ui/FlxSystemButton.hx",126,0x167fa379)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(127)
	bool tmp = this->toggleMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	if ((tmp)){
		HX_STACK_LINE(129)
		bool tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		if ((tmp1)){
			HX_STACK_LINE(129)
			tmp2 = ((Float)0.3);
		}
		else{
			HX_STACK_LINE(129)
			tmp2 = (int)1;
		}
		HX_STACK_LINE(129)
		this->set_alpha(tmp2);
	}
	HX_STACK_LINE(131)
	bool tmp1 = this->toggled = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxSystemButton_obj,set_toggled,return )


FlxSystemButton_obj::FlxSystemButton_obj()
{
}

void FlxSystemButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSystemButton);
	HX_MARK_MEMBER_NAME(upHandler,"upHandler");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(toggleMode,"toggleMode");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_mouseDown,"_mouseDown");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSystemButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(upHandler,"upHandler");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(toggleMode,"toggleMode");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_mouseDown,"_mouseDown");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSystemButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"toggled") ) { return toggled; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { return upHandler; }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { return toggleMode; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { return _mouseDown; }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return changeIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_toggled") ) { return set_toggled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSystemButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggled") ) { if (inCallProp == hx::paccAlways) return set_toggled(inValue);toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"upHandler") ) { upHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toggleMode") ) { toggleMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mouseDown") ) { _mouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSystemButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("toggleMode","\x17","\x19","\x17","\xe0"));
	outFields->push(HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"));
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("_mouseDown","\xe8","\x2c","\x65","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSystemButton_obj,upHandler),HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,toggleMode),HX_HCSTRING("toggleMode","\x17","\x19","\x17","\xe0")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,toggled),HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxSystemButton_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{hx::fsBool,(int)offsetof(FlxSystemButton_obj,_mouseDown),HX_HCSTRING("_mouseDown","\xe8","\x2c","\x65","\x4a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("upHandler","\xaf","\xc2","\x8d","\x81"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("toggleMode","\x17","\x19","\x17","\xe0"),
	HX_HCSTRING("toggled","\x50","\xe2","\x03","\xcc"),
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("_mouseDown","\xe8","\x2c","\x65","\x4a"),
	HX_HCSTRING("changeIcon","\x09","\x1d","\xfc","\x1f"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseOver","\xfa","\x2c","\x50","\x18"),
	HX_HCSTRING("onMouseOut","\xa8","\xbb","\xd4","\x81"),
	HX_HCSTRING("set_toggled","\x73","\x49","\x6b","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSystemButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSystemButton_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSystemButton_obj::__mClass;

void FlxSystemButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.ui.FlxSystemButton","\x26","\x09","\x30","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSystemButton_obj >;
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
} // end namespace ui
