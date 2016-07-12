#include <hxcpp.h>

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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
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
#ifndef INCLUDED_openfl_display_FrameLabel
#include <openfl/display/FrameLabel.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void MovieClip_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.display.MovieClip","new",0xbdab0de2,"openfl._legacy.display.MovieClip.new","openfl/_legacy/display/MovieClip.hx",25,0x3e17f751)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	this->__currentFrame = (int)0;
	HX_STACK_LINE(30)
	this->__currentFrameLabel = null();
	HX_STACK_LINE(31)
	this->__currentLabel = null();
	HX_STACK_LINE(32)
	this->__currentLabels = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(33)
	this->__totalFrames = (int)0;
	HX_STACK_LINE(34)
	this->enabled = true;
}
;
	return null();
}

//MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("openfl._legacy.display.MovieClip","gotoAndPlay",0x0077f48a,"openfl._legacy.display.MovieClip.gotoAndPlay","openfl/_legacy/display/MovieClip.hx",39,0x3e17f751)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("openfl._legacy.display.MovieClip","gotoAndStop",0x0279b698,"openfl._legacy.display.MovieClip.gotoAndStop","openfl/_legacy/display/MovieClip.hx",46,0x3e17f751)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_FRAME("openfl._legacy.display.MovieClip","nextFrame",0x4191dd3c,"openfl._legacy.display.MovieClip.nextFrame","openfl/_legacy/display/MovieClip.hx",53,0x3e17f751)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

::String MovieClip_obj::__getType( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","__getType",0x34a33e52,"openfl._legacy.display.MovieClip.__getType","openfl/_legacy/display/MovieClip.hx",62,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return HX_HCSTRING("MovieClip","\x80","\xe2","\xed","\xb9");
}


Void MovieClip_obj::play( ){
{
		HX_STACK_FRAME("openfl._legacy.display.MovieClip","play",0x3958c232,"openfl._legacy.display.MovieClip.play","openfl/_legacy/display/MovieClip.hx",67,0x3e17f751)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_FRAME("openfl._legacy.display.MovieClip","prevFrame",0x85a3633c,"openfl._legacy.display.MovieClip.prevFrame","openfl/_legacy/display/MovieClip.hx",74,0x3e17f751)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::stop( ){
{
		HX_STACK_FRAME("openfl._legacy.display.MovieClip","stop",0x3b5a8440,"openfl._legacy.display.MovieClip.stop","openfl/_legacy/display/MovieClip.hx",81,0x3e17f751)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

int MovieClip_obj::get_currentFrame( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","get_currentFrame",0xf35942fb,"openfl._legacy.display.MovieClip.get_currentFrame","openfl/_legacy/display/MovieClip.hx",95,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	int tmp = this->__currentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

::String MovieClip_obj::get_currentFrameLabel( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","get_currentFrameLabel",0x36478cf9,"openfl._legacy.display.MovieClip.get_currentFrameLabel","openfl/_legacy/display/MovieClip.hx",96,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	::String tmp = this->__currentFrameLabel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrameLabel,return )

::String MovieClip_obj::get_currentLabel( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","get_currentLabel",0x5c84d8c2,"openfl._legacy.display.MovieClip.get_currentLabel","openfl/_legacy/display/MovieClip.hx",97,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	::String tmp = this->__currentLabel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabel,return )

Array< ::Dynamic > MovieClip_obj::get_currentLabels( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","get_currentLabels",0x97b8d171,"openfl._legacy.display.MovieClip.get_currentLabels","openfl/_legacy/display/MovieClip.hx",98,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(98)
	return this->__currentLabels;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentLabels,return )

int MovieClip_obj::get_framesLoaded( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","get_framesLoaded",0xb42b9212,"openfl._legacy.display.MovieClip.get_framesLoaded","openfl/_legacy/display/MovieClip.hx",99,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	int tmp = this->__totalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

int MovieClip_obj::get_totalFrames( ){
	HX_STACK_FRAME("openfl._legacy.display.MovieClip","get_totalFrames",0x611bd2a3,"openfl._legacy.display.MovieClip.get_totalFrames","openfl/_legacy/display/MovieClip.hx",100,0x3e17f751)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	int tmp = this->__totalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )


MovieClip_obj::MovieClip_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void MovieClip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MovieClip);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_MARK_MEMBER_NAME(currentLabel,"currentLabel");
	HX_MARK_MEMBER_NAME(currentLabels,"currentLabels");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_MARK_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_MARK_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_MARK_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_MARK_MEMBER_NAME(__totalFrames,"__totalFrames");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MovieClip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(currentFrameLabel,"currentFrameLabel");
	HX_VISIT_MEMBER_NAME(currentLabel,"currentLabel");
	HX_VISIT_MEMBER_NAME(currentLabels,"currentLabels");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(framesLoaded,"framesLoaded");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(__currentFrame,"__currentFrame");
	HX_VISIT_MEMBER_NAME(__currentFrameLabel,"__currentFrameLabel");
	HX_VISIT_MEMBER_NAME(__currentLabel,"__currentLabel");
	HX_VISIT_MEMBER_NAME(__currentLabels,"__currentLabels");
	HX_VISIT_MEMBER_NAME(__totalFrames,"__totalFrames");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MovieClip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__getType") ) { return __getType_dyn(); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return inCallProp == hx::paccAlways ? get_totalFrames() : totalFrames; }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return inCallProp == hx::paccAlways ? get_currentFrame() : currentFrame; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { return inCallProp == hx::paccAlways ? get_currentLabel() : currentLabel; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return inCallProp == hx::paccAlways ? get_framesLoaded() : framesLoaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { return inCallProp == hx::paccAlways ? get_currentLabels() : currentLabels; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { return __totalFrames; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { return __currentFrame; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { return __currentLabel; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { return __currentLabels; }
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentLabel") ) { return get_currentLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return get_framesLoaded_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { return inCallProp == hx::paccAlways ? get_currentFrameLabel() : currentFrameLabel; }
		if (HX_FIELD_EQ(inName,"get_currentLabels") ) { return get_currentLabels_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { return __currentFrameLabel; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_currentFrameLabel") ) { return get_currentFrameLabel_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLabel") ) { currentLabel=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentLabels") ) { currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__totalFrames") ) { __totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__currentFrame") ) { __currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentLabel") ) { __currentLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__currentLabels") ) { __currentLabels=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameLabel") ) { currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__currentFrameLabel") ) { __currentFrameLabel=inValue.Cast< ::String >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a"));
	outFields->push(HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6"));
	outFields->push(HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"));
	outFields->push(HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"));
	outFields->push(HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"));
	outFields->push(HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"));
	outFields->push(HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"));
	outFields->push(HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"));
	outFields->push(HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MovieClip_obj,currentFrame),HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d")},
	{hx::fsString,(int)offsetof(MovieClip_obj,currentFrameLabel),HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a")},
	{hx::fsString,(int)offsetof(MovieClip_obj,currentLabel),HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,currentLabels),HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c")},
	{hx::fsBool,(int)offsetof(MovieClip_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,framesLoaded),HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,totalFrames),HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__currentFrame),HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentFrameLabel),HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc")},
	{hx::fsString,(int)offsetof(MovieClip_obj,__currentLabel),HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MovieClip_obj,__currentLabels),HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,__totalFrames),HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("currentFrameLabel","\x20","\xc4","\x0a","\x2a"),
	HX_HCSTRING("currentLabel","\xfb","\xf2","\xba","\xb6"),
	HX_HCSTRING("currentLabels","\x18","\xa9","\xd9","\x2c"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"),
	HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"),
	HX_HCSTRING("__currentFrame","\x54","\xe0","\x4f","\x6e"),
	HX_HCSTRING("__currentFrameLabel","\x00","\xed","\xfa","\xdc"),
	HX_HCSTRING("__currentLabel","\x1b","\x76","\x7b","\xd7"),
	HX_HCSTRING("__currentLabels","\xf8","\xe1","\x8b","\xb4"),
	HX_HCSTRING("__totalFrames","\x6a","\xe3","\x33","\xbb"),
	HX_HCSTRING("gotoAndPlay","\x08","\x65","\x84","\xef"),
	HX_HCSTRING("gotoAndStop","\x16","\x27","\x86","\xf1"),
	HX_HCSTRING("nextFrame","\x3a","\x92","\xc8","\xad"),
	HX_HCSTRING("__getType","\x50","\xf3","\xd9","\xa0"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("prevFrame","\x3a","\x18","\xda","\xf1"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentFrame","\xbd","\x49","\x2e","\x52"),
	HX_HCSTRING("get_currentFrameLabel","\xf7","\xc6","\xb8","\xa8"),
	HX_HCSTRING("get_currentLabel","\x84","\xdf","\x59","\xbb"),
	HX_HCSTRING("get_currentLabels","\x6f","\xb4","\x49","\x33"),
	HX_HCSTRING("get_framesLoaded","\xd4","\x98","\x00","\x13"),
	HX_HCSTRING("get_totalFrames","\x21","\x5a","\x9d","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#endif

hx::Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.MovieClip","\xf0","\x34","\x9a","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MovieClip_obj >;
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

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
