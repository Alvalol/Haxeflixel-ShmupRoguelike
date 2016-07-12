#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{

Void DebuggerUtil_obj::__construct()
{
	return null();
}

//DebuggerUtil_obj::~DebuggerUtil_obj() { }

Dynamic DebuggerUtil_obj::__CreateEmpty() { return  new DebuggerUtil_obj; }
hx::ObjectPtr< DebuggerUtil_obj > DebuggerUtil_obj::__new()
{  hx::ObjectPtr< DebuggerUtil_obj > _result_ = new DebuggerUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic DebuggerUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DebuggerUtil_obj > _result_ = new DebuggerUtil_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::text::TextField DebuggerUtil_obj::createTextField( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Color,hx::Null< int >  __o_Size){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Color = __o_Color.Default(-1);
int Size = __o_Size.Default(12);
	HX_STACK_FRAME("flixel.system.debug.DebuggerUtil","createTextField",0x34b9b52e,"flixel.system.debug.DebuggerUtil.createTextField","flixel/system/debug/DebuggerUtil.hx",28,0x13434d32)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
{
		HX_STACK_LINE(29)
		::openfl::_legacy::text::TextField tmp = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::openfl::_legacy::text::TextField tf = tmp;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(30)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		tf->set_x(tmp1);
		HX_STACK_LINE(31)
		Float tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		tf->set_y(tmp2);
		HX_STACK_LINE(32)
		tf->set_multiline(false);
		HX_STACK_LINE(33)
		tf->set_wordWrap(false);
		HX_STACK_LINE(34)
		tf->set_embedFonts(true);
		HX_STACK_LINE(35)
		tf->set_selectable(false);
		HX_STACK_LINE(40)
		::String tmp3 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		int tmp4 = Size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		int tmp5 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		::openfl::_legacy::text::TextFormat tmp7 = ::openfl::_legacy::text::TextFormat_obj::__new(tmp3,tmp4,tmp6,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		tf->set_defaultTextFormat(tmp7);
		HX_STACK_LINE(41)
		int tmp8 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		tf->set_alpha(tmp10);
		HX_STACK_LINE(42)
		tf->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT);
		HX_STACK_LINE(43)
		::openfl::_legacy::text::TextField tmp11 = tf;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(43)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DebuggerUtil_obj,createTextField,return )

::openfl::_legacy::display::BitmapData DebuggerUtil_obj::fixSize( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.system.debug.DebuggerUtil","fixSize",0xaffeaf33,"flixel.system.debug.DebuggerUtil.fixSize","flixel/system/debug/DebuggerUtil.hx",48,0x13434d32)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(54)
	::openfl::_legacy::display::BitmapData tmp = bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DebuggerUtil_obj,fixSize,return )


DebuggerUtil_obj::DebuggerUtil_obj()
{
}

bool DebuggerUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fixSize") ) { outValue = fixSize_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { outValue = createTextField_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DebuggerUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DebuggerUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class DebuggerUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createTextField","\x31","\xde","\x75","\x3a"),
	HX_HCSTRING("fixSize","\x36","\x9d","\x48","\xdc"),
	::String(null()) };

void DebuggerUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.DebuggerUtil","\x6b","\xad","\xc9","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DebuggerUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DebuggerUtil_obj >;
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
