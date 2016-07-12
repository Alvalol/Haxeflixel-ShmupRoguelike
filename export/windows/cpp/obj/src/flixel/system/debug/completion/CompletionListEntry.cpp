#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListEntry
#include <flixel/system/debug/completion/CompletionListEntry.h>
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
namespace completion{

Void CompletionListEntry_obj::__construct()
{
HX_STACK_FRAME("flixel.system.debug.completion.CompletionListEntry","new",0x5600ec80,"flixel.system.debug.completion.CompletionListEntry.new","flixel/system/debug/completion/CompletionListEntry.hx",9,0xaa5a5a70)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->selected = false;
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	this->initBitmapDatas();
	HX_STACK_LINE(32)
	::openfl::_legacy::display::Bitmap tmp = ::openfl::_legacy::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::openfl::_legacy::display::Bitmap tmp1 = this->background = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	this->addChild(tmp1);
	HX_STACK_LINE(33)
	::openfl::_legacy::display::Bitmap tmp2 = this->background;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	::openfl::_legacy::display::BitmapData tmp3 = ::flixel::_system::debug::completion::CompletionListEntry_obj::normalBitmapData;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	tmp2->set_bitmapData(tmp3);
	HX_STACK_LINE(35)
	::openfl::_legacy::text::TextField tmp4 = ::flixel::_system::debug::DebuggerUtil_obj::createTextField(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	this->label = tmp4;
	HX_STACK_LINE(36)
	::openfl::_legacy::text::TextField tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	tmp5->set_x((int)4);
	HX_STACK_LINE(37)
	::openfl::_legacy::text::TextField tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	tmp6->set_width((int)150);
	HX_STACK_LINE(38)
	::openfl::_legacy::text::TextField tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(38)
	this->addChild(tmp7);
}
;
	return null();
}

//CompletionListEntry_obj::~CompletionListEntry_obj() { }

Dynamic CompletionListEntry_obj::__CreateEmpty() { return  new CompletionListEntry_obj; }
hx::ObjectPtr< CompletionListEntry_obj > CompletionListEntry_obj::__new()
{  hx::ObjectPtr< CompletionListEntry_obj > _result_ = new CompletionListEntry_obj();
	_result_->__construct();
	return _result_;}

Dynamic CompletionListEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompletionListEntry_obj > _result_ = new CompletionListEntry_obj();
	_result_->__construct();
	return _result_;}

Void CompletionListEntry_obj::initBitmapDatas( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionListEntry","initBitmapDatas",0x8c672f8a,"flixel.system.debug.completion.CompletionListEntry.initBitmapDatas","flixel/system/debug/completion/CompletionListEntry.hx",42,0xaa5a5a70)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		::openfl::_legacy::display::BitmapData tmp = ::flixel::_system::debug::completion::CompletionListEntry_obj::normalBitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		if ((tmp1)){
			HX_STACK_LINE(44)
			::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::__new((int)150,(int)20,true,(int)-10526881,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			::flixel::_system::debug::completion::CompletionListEntry_obj::normalBitmapData = tmp2;
		}
		HX_STACK_LINE(45)
		::openfl::_legacy::display::BitmapData tmp2 = ::flixel::_system::debug::completion::CompletionListEntry_obj::highlightBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(46)
			::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new((int)150,(int)20,true,(int)-9605779,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			::flixel::_system::debug::completion::CompletionListEntry_obj::highlightBitmapData = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionListEntry_obj,initBitmapDatas,(void))

Void CompletionListEntry_obj::setItem( ::String item){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionListEntry","setItem",0xe081b1f5,"flixel.system.debug.completion.CompletionListEntry.setItem","flixel/system/debug/completion/CompletionListEntry.hx",50,0xaa5a5a70)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(51)
		::openfl::_legacy::text::TextField tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::String tmp1 = item;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		tmp->set_text(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionListEntry_obj,setItem,(void))

bool CompletionListEntry_obj::set_selected( bool selected){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionListEntry","set_selected",0xb69e61b8,"flixel.system.debug.completion.CompletionListEntry.set_selected","flixel/system/debug/completion/CompletionListEntry.hx",55,0xaa5a5a70)
	HX_STACK_THIS(this)
	HX_STACK_ARG(selected,"selected")
	HX_STACK_LINE(56)
	bool tmp = selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = this->selected;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(57)
		bool tmp3 = selected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		return tmp3;
	}
	HX_STACK_LINE(59)
	::openfl::_legacy::display::Bitmap tmp3 = this->background;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	bool tmp4 = selected;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	::openfl::_legacy::display::BitmapData tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	if ((tmp4)){
		HX_STACK_LINE(60)
		tmp5 = ::flixel::_system::debug::completion::CompletionListEntry_obj::highlightBitmapData;
	}
	else{
		HX_STACK_LINE(60)
		tmp5 = ::flixel::_system::debug::completion::CompletionListEntry_obj::normalBitmapData;
	}
	HX_STACK_LINE(59)
	tmp3->set_bitmapData(tmp5);
	HX_STACK_LINE(62)
	bool tmp6 = this->selected = selected;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionListEntry_obj,set_selected,return )

int CompletionListEntry_obj::WIDTH;

int CompletionListEntry_obj::HEIGHT;

int CompletionListEntry_obj::COLOR_NORMAL;

int CompletionListEntry_obj::COLOR_HIGHLIGHT;

int CompletionListEntry_obj::GUTTER;

::openfl::_legacy::display::BitmapData CompletionListEntry_obj::normalBitmapData;

::openfl::_legacy::display::BitmapData CompletionListEntry_obj::highlightBitmapData;


CompletionListEntry_obj::CompletionListEntry_obj()
{
}

void CompletionListEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionListEntry);
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(label,"label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompletionListEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(label,"label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CompletionListEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setItem") ) { return setItem_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return selected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initBitmapDatas") ) { return initBitmapDatas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool CompletionListEntry_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"normalBitmapData") ) { outValue = normalBitmapData; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"highlightBitmapData") ) { outValue = highlightBitmapData; return true;  }
	}
	return false;
}

Dynamic CompletionListEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return set_selected(inValue);selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CompletionListEntry_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"normalBitmapData") ) { normalBitmapData=ioValue.Cast< ::openfl::_legacy::display::BitmapData >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"highlightBitmapData") ) { highlightBitmapData=ioValue.Cast< ::openfl::_legacy::display::BitmapData >(); return true; }
	}
	return false;
}

void CompletionListEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(CompletionListEntry_obj,selected),HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(CompletionListEntry_obj,background),HX_HCSTRING("background","\xee","\x93","\x1d","\x26")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(CompletionListEntry_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CompletionListEntry_obj::WIDTH,HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::HEIGHT,HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::COLOR_NORMAL,HX_HCSTRING("COLOR_NORMAL","\xe3","\x84","\xe3","\xcb")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::COLOR_HIGHLIGHT,HX_HCSTRING("COLOR_HIGHLIGHT","\xd8","\x3c","\xc9","\x9b")},
	{hx::fsInt,(void *) &CompletionListEntry_obj::GUTTER,HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(void *) &CompletionListEntry_obj::normalBitmapData,HX_HCSTRING("normalBitmapData","\xc0","\x02","\xc0","\x05")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(void *) &CompletionListEntry_obj::highlightBitmapData,HX_HCSTRING("highlightBitmapData","\x0d","\x59","\xa7","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("initBitmapDatas","\x6a","\x63","\x70","\x21"),
	HX_HCSTRING("setItem","\xd5","\x05","\x44","\x0b"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::COLOR_NORMAL,"COLOR_NORMAL");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::COLOR_HIGHLIGHT,"COLOR_HIGHLIGHT");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::GUTTER,"GUTTER");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::normalBitmapData,"normalBitmapData");
	HX_MARK_MEMBER_NAME(CompletionListEntry_obj::highlightBitmapData,"highlightBitmapData");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::COLOR_NORMAL,"COLOR_NORMAL");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::COLOR_HIGHLIGHT,"COLOR_HIGHLIGHT");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::GUTTER,"GUTTER");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::normalBitmapData,"normalBitmapData");
	HX_VISIT_MEMBER_NAME(CompletionListEntry_obj::highlightBitmapData,"highlightBitmapData");
};

#endif

hx::Class CompletionListEntry_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48"),
	HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4"),
	HX_HCSTRING("COLOR_NORMAL","\xe3","\x84","\xe3","\xcb"),
	HX_HCSTRING("COLOR_HIGHLIGHT","\xd8","\x3c","\xc9","\x9b"),
	HX_HCSTRING("GUTTER","\x1b","\xd3","\x2b","\x8c"),
	HX_HCSTRING("normalBitmapData","\xc0","\x02","\xc0","\x05"),
	HX_HCSTRING("highlightBitmapData","\x0d","\x59","\xa7","\x3c"),
	::String(null()) };

void CompletionListEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionListEntry","\x8e","\xec","\x78","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompletionListEntry_obj::__GetStatic;
	__mClass->mSetStaticField = &CompletionListEntry_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionListEntry_obj >;
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

void CompletionListEntry_obj::__boot()
{
	WIDTH= (int)150;
	HEIGHT= (int)20;
	COLOR_NORMAL= (int)-10526881;
	COLOR_HIGHLIGHT= (int)-9605779;
	GUTTER= (int)4;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
