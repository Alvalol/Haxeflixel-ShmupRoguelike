#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListScrollBar
#include <flixel/system/debug/completion/CompletionListScrollBar.h>
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
namespace flixel{
namespace _system{
namespace debug{
namespace completion{

Void CompletionListScrollBar_obj::__construct(int x,int y,int width,int height)
{
HX_STACK_FRAME("flixel.system.debug.completion.CompletionListScrollBar","new",0xf77443d4,"flixel.system.debug.completion.CompletionListScrollBar.new","flixel/system/debug/completion/CompletionListScrollBar.hx",16,0x884a099c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->set_x(tmp);
	HX_STACK_LINE(20)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	this->set_y(tmp1);
	HX_STACK_LINE(22)
	::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)-12303292,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::openfl::_legacy::display::Bitmap tmp3 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	this->addChild(tmp3);
	HX_STACK_LINE(23)
	::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(width,(int)1,true,(int)-14540254,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::openfl::_legacy::display::Bitmap tmp5 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	this->handle = tmp5;
	HX_STACK_LINE(24)
	::openfl::_legacy::display::Bitmap tmp6 = this->handle;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	this->addChild(tmp6);
}
;
	return null();
}

//CompletionListScrollBar_obj::~CompletionListScrollBar_obj() { }

Dynamic CompletionListScrollBar_obj::__CreateEmpty() { return  new CompletionListScrollBar_obj; }
hx::ObjectPtr< CompletionListScrollBar_obj > CompletionListScrollBar_obj::__new(int x,int y,int width,int height)
{  hx::ObjectPtr< CompletionListScrollBar_obj > _result_ = new CompletionListScrollBar_obj();
	_result_->__construct(x,y,width,height);
	return _result_;}

Dynamic CompletionListScrollBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompletionListScrollBar_obj > _result_ = new CompletionListScrollBar_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void CompletionListScrollBar_obj::updateHandle( int lower,int items,int entries){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionListScrollBar","updateHandle",0x7238a89d,"flixel.system.debug.completion.CompletionListScrollBar.updateHandle","flixel/system/debug/completion/CompletionListScrollBar.hx",28,0x884a099c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lower,"lower")
		HX_STACK_ARG(items,"items")
		HX_STACK_ARG(entries,"entries")
		HX_STACK_LINE(29)
		::openfl::_legacy::display::Bitmap tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		Float tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		int tmp2 = items;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		int tmp4 = entries;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		Float tmp7 = ::Math_obj::min(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(29)
		tmp->set_scaleY(tmp7);
		HX_STACK_LINE(30)
		::openfl::_legacy::display::Bitmap tmp8 = this->handle;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(30)
		Float tmp9 = this->get_height();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(30)
		int tmp10 = items;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(30)
		int tmp12 = lower;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		tmp8->set_y(tmp13);
		HX_STACK_LINE(31)
		::openfl::_legacy::display::Bitmap tmp14 = this->handle;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(31)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			::openfl::_legacy::display::Bitmap tmp16 = this->handle;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(31)
			Float tmp17 = tmp16->get_y();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(31)
			Float Value = tmp17;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(31)
			Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(31)
			::openfl::_legacy::display::Bitmap tmp19 = this->handle;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(31)
			Float tmp20 = tmp19->get_scaleY();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(31)
			Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(31)
			Dynamic Max = tmp21;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(31)
			bool tmp22 = true;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(31)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(31)
			if ((tmp22)){
				HX_STACK_LINE(31)
				tmp23 = (Value < (int)0);
			}
			else{
				HX_STACK_LINE(31)
				tmp23 = false;
			}
			HX_STACK_LINE(31)
			Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(31)
			if ((tmp23)){
				HX_STACK_LINE(31)
				tmp24 = (int)0;
			}
			else{
				HX_STACK_LINE(31)
				tmp24 = Value;
			}
			HX_STACK_LINE(31)
			Float lowerBound = tmp24;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(31)
			bool tmp25 = (Max != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(31)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(31)
			if ((tmp25)){
				HX_STACK_LINE(31)
				tmp26 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(31)
				tmp26 = false;
			}
			HX_STACK_LINE(31)
			if ((tmp26)){
				HX_STACK_LINE(31)
				tmp15 = Max;
			}
			else{
				HX_STACK_LINE(31)
				tmp15 = lowerBound;
			}
		}
		HX_STACK_LINE(31)
		tmp14->set_y(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CompletionListScrollBar_obj,updateHandle,(void))

int CompletionListScrollBar_obj::BG_COLOR;

int CompletionListScrollBar_obj::HANDLE_COLOR;


CompletionListScrollBar_obj::CompletionListScrollBar_obj()
{
}

void CompletionListScrollBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionListScrollBar);
	HX_MARK_MEMBER_NAME(handle,"handle");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompletionListScrollBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CompletionListScrollBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateHandle") ) { return updateHandle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompletionListScrollBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionListScrollBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(CompletionListScrollBar_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CompletionListScrollBar_obj::BG_COLOR,HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b")},
	{hx::fsInt,(void *) &CompletionListScrollBar_obj::HANDLE_COLOR,HX_HCSTRING("HANDLE_COLOR","\x2c","\x4e","\x95","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("updateHandle","\x91","\x2a","\xc1","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionListScrollBar_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CompletionListScrollBar_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(CompletionListScrollBar_obj::HANDLE_COLOR,"HANDLE_COLOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionListScrollBar_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompletionListScrollBar_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(CompletionListScrollBar_obj::HANDLE_COLOR,"HANDLE_COLOR");
};

#endif

hx::Class CompletionListScrollBar_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b"),
	HX_HCSTRING("HANDLE_COLOR","\x2c","\x4e","\x95","\xc9"),
	::String(null()) };

void CompletionListScrollBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionListScrollBar","\xe2","\x09","\x71","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionListScrollBar_obj >;
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

void CompletionListScrollBar_obj::__boot()
{
	BG_COLOR= (int)-12303292;
	HANDLE_COLOR= (int)-14540254;
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace completion
