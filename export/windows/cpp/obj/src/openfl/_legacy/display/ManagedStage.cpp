#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_ManagedStage
#include <openfl/_legacy/display/ManagedStage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void ManagedStage_obj::__construct(int width,int height,hx::Null< int >  __o_flags)
{
HX_STACK_FRAME("openfl._legacy.display.ManagedStage","new",0x52468401,"openfl._legacy.display.ManagedStage.new","openfl/_legacy/display/ManagedStage.hx",57,0x768356ec)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_flags,"flags")
int flags = __o_flags.Default(0);
{
	HX_STACK_LINE(59)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	int tmp2 = flags;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	Dynamic tmp3 = ::openfl::_legacy::display::ManagedStage_obj::lime_managed_stage_create(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	super::__construct(tmp3,tmp4,tmp5);
}
;
	return null();
}

//ManagedStage_obj::~ManagedStage_obj() { }

Dynamic ManagedStage_obj::__CreateEmpty() { return  new ManagedStage_obj; }
hx::ObjectPtr< ManagedStage_obj > ManagedStage_obj::__new(int width,int height,hx::Null< int >  __o_flags)
{  hx::ObjectPtr< ManagedStage_obj > _result_ = new ManagedStage_obj();
	_result_->__construct(width,height,__o_flags);
	return _result_;}

Dynamic ManagedStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManagedStage_obj > _result_ = new ManagedStage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_beginRender,ManagedStage_obj)
Void run(){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","beginRender",0xa9800b00,"openfl._legacy.display.ManagedStage.beginRender","openfl/_legacy/display/ManagedStage.hx",64,0x768356ec)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_endRender,ManagedStage_obj)
Void run(){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","endRender",0x41865bf2,"openfl._legacy.display.ManagedStage.endRender","openfl/_legacy/display/ManagedStage.hx",71,0x768356ec)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void ManagedStage_obj::pumpEvent( Dynamic event){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","pumpEvent",0xefb4ecb3,"openfl._legacy.display.ManagedStage.pumpEvent","openfl/_legacy/display/ManagedStage.hx",78,0x768356ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(80)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		Dynamic tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::openfl::_legacy::display::ManagedStage_obj::lime_managed_stage_pump_event(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ManagedStage_obj,pumpEvent,(void))

Void ManagedStage_obj::resize( int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","resize",0xb565e0f3,"openfl._legacy.display.ManagedStage.resize","openfl/_legacy/display/ManagedStage.hx",85,0x768356ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		struct _Function_1_1{
			inline static Dynamic Block( int &width,int &height){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/ManagedStage.hx",87,0x768356ec)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , width,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , height,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(87)
		Dynamic tmp = _Function_1_1::Block(width,height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		this->pumpEvent(tmp);
	}
return null();
}


Void ManagedStage_obj::sendQuit( ){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","sendQuit",0x80b1c1f6,"openfl._legacy.display.ManagedStage.sendQuit","openfl/_legacy/display/ManagedStage.hx",92,0x768356ec)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_legacy/display/ManagedStage.hx",94,0x768356ec)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		this->pumpEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ManagedStage_obj,sendQuit,(void))

HX_BEGIN_DEFAULT_FUNC(__default_setNextWake,ManagedStage_obj)
Void run(Float delay){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","setNextWake",0x3550891a,"openfl._legacy.display.ManagedStage.setNextWake","openfl/_legacy/display/ManagedStage.hx",99,0x768356ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delay,"delay")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Float ManagedStage_obj::__doProcessStageEvent( Dynamic event){
	HX_STACK_FRAME("openfl._legacy.display.ManagedStage","__doProcessStageEvent",0x9c9f5081,"openfl._legacy.display.ManagedStage.__doProcessStageEvent","openfl/_legacy/display/ManagedStage.hx",106,0x768356ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(108)
	this->__pollTimers();
	HX_STACK_LINE(110)
	Dynamic tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	Float tmp1 = this->super::__doProcessStageEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	Float wake = tmp1;		HX_STACK_VAR(wake,"wake");
	HX_STACK_LINE(111)
	Float tmp2 = wake;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	this->setNextWake(tmp2);
	HX_STACK_LINE(113)
	Float tmp3 = wake;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	return tmp3;
}


Void ManagedStage_obj::__render( bool sendEnterFrame){
{
		HX_STACK_FRAME("openfl._legacy.display.ManagedStage","__render",0x4f325b35,"openfl._legacy.display.ManagedStage.__render","openfl/_legacy/display/ManagedStage.hx",118,0x768356ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sendEnterFrame,"sendEnterFrame")
		HX_STACK_LINE(120)
		this->beginRender();
		HX_STACK_LINE(121)
		bool tmp = sendEnterFrame;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		this->super::__render(tmp);
		HX_STACK_LINE(122)
		this->endRender();
	}
return null();
}


int ManagedStage_obj::efLeftDown;

int ManagedStage_obj::efShiftDown;

int ManagedStage_obj::efCtrlDown;

int ManagedStage_obj::efAltDown;

int ManagedStage_obj::efCommandDown;

int ManagedStage_obj::efMiddleDown;

int ManagedStage_obj::efRightDown;

int ManagedStage_obj::efLocationRight;

int ManagedStage_obj::efPrimaryTouch;

int ManagedStage_obj::etUnknown;

int ManagedStage_obj::etKeyDown;

int ManagedStage_obj::etChar;

int ManagedStage_obj::etKeyUp;

int ManagedStage_obj::etMouseMove;

int ManagedStage_obj::etMouseDown;

int ManagedStage_obj::etMouseClick;

int ManagedStage_obj::etMouseUp;

int ManagedStage_obj::etResize;

int ManagedStage_obj::etPoll;

int ManagedStage_obj::etQuit;

int ManagedStage_obj::etFocus;

int ManagedStage_obj::etShouldRotate;

int ManagedStage_obj::etDestroyHandler;

int ManagedStage_obj::etRedraw;

int ManagedStage_obj::etTouchBegin;

int ManagedStage_obj::etTouchMove;

int ManagedStage_obj::etTouchEnd;

int ManagedStage_obj::etTouchTap;

int ManagedStage_obj::etChange;

int ManagedStage_obj::etActivate;

int ManagedStage_obj::etDeactivate;

int ManagedStage_obj::etGotInputFocus;

int ManagedStage_obj::etLostInputFocus;

int ManagedStage_obj::etJoyAxisMove;

int ManagedStage_obj::etJoyBallMove;

int ManagedStage_obj::etJoyHatMove;

int ManagedStage_obj::etJoyButtonDown;

int ManagedStage_obj::etJoyButtonUp;

int ManagedStage_obj::etJoyDeviceAdded;

int ManagedStage_obj::etJoyDeviceRemoved;

int ManagedStage_obj::etSysWM;

int ManagedStage_obj::etRenderContextLost;

int ManagedStage_obj::etRenderContextRestored;

Dynamic ManagedStage_obj::lime_managed_stage_create;

Dynamic ManagedStage_obj::lime_managed_stage_pump_event;


ManagedStage_obj::ManagedStage_obj()
{
	beginRender = new __default_beginRender(this);
	endRender = new __default_endRender(this);
	setNextWake = new __default_setNextWake(this);
}

void ManagedStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManagedStage);
	HX_MARK_MEMBER_NAME(beginRender,"beginRender");
	HX_MARK_MEMBER_NAME(endRender,"endRender");
	HX_MARK_MEMBER_NAME(setNextWake,"setNextWake");
	::openfl::_legacy::display::Stage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ManagedStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(beginRender,"beginRender");
	HX_VISIT_MEMBER_NAME(endRender,"endRender");
	HX_VISIT_MEMBER_NAME(setNextWake,"setNextWake");
	::openfl::_legacy::display::Stage_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ManagedStage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sendQuit") ) { return sendQuit_dyn(); }
		if (HX_FIELD_EQ(inName,"__render") ) { return __render_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endRender") ) { return endRender; }
		if (HX_FIELD_EQ(inName,"pumpEvent") ) { return pumpEvent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginRender") ) { return beginRender; }
		if (HX_FIELD_EQ(inName,"setNextWake") ) { return setNextWake; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__doProcessStageEvent") ) { return __doProcessStageEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ManagedStage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"lime_managed_stage_create") ) { outValue = lime_managed_stage_create; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_managed_stage_pump_event") ) { outValue = lime_managed_stage_pump_event; return true;  }
	}
	return false;
}

Dynamic ManagedStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"endRender") ) { endRender=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginRender") ) { beginRender=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setNextWake") ) { setNextWake=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ManagedStage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 25:
		if (HX_FIELD_EQ(inName,"lime_managed_stage_create") ) { lime_managed_stage_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_managed_stage_pump_event") ) { lime_managed_stage_pump_event=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ManagedStage_obj,beginRender),HX_HCSTRING("beginRender","\x5f","\x4e","\x4f","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ManagedStage_obj,endRender),HX_HCSTRING("endRender","\x91","\xb9","\x0b","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ManagedStage_obj,setNextWake),HX_HCSTRING("setNextWake","\x79","\xcc","\x1f","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ManagedStage_obj::efLeftDown,HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c")},
	{hx::fsInt,(void *) &ManagedStage_obj::efShiftDown,HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4")},
	{hx::fsInt,(void *) &ManagedStage_obj::efCtrlDown,HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa")},
	{hx::fsInt,(void *) &ManagedStage_obj::efAltDown,HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8")},
	{hx::fsInt,(void *) &ManagedStage_obj::efCommandDown,HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b")},
	{hx::fsInt,(void *) &ManagedStage_obj::efMiddleDown,HX_HCSTRING("efMiddleDown","\x18","\xc6","\xf0","\xbd")},
	{hx::fsInt,(void *) &ManagedStage_obj::efRightDown,HX_HCSTRING("efRightDown","\xbd","\x41","\x73","\xc4")},
	{hx::fsInt,(void *) &ManagedStage_obj::efLocationRight,HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc")},
	{hx::fsInt,(void *) &ManagedStage_obj::efPrimaryTouch,HX_HCSTRING("efPrimaryTouch","\x9e","\x1a","\x82","\x70")},
	{hx::fsInt,(void *) &ManagedStage_obj::etUnknown,HX_HCSTRING("etUnknown","\xdb","\x6e","\xe6","\xd2")},
	{hx::fsInt,(void *) &ManagedStage_obj::etKeyDown,HX_HCSTRING("etKeyDown","\xf2","\xb4","\xb2","\x8d")},
	{hx::fsInt,(void *) &ManagedStage_obj::etChar,HX_HCSTRING("etChar","\xe5","\x46","\x1f","\x59")},
	{hx::fsInt,(void *) &ManagedStage_obj::etKeyUp,HX_HCSTRING("etKeyUp","\xeb","\xde","\x89","\x3b")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseMove,HX_HCSTRING("etMouseMove","\x67","\x1d","\x07","\x90")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseDown,HX_HCSTRING("etMouseDown","\xb8","\x32","\x14","\x8a")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseClick,HX_HCSTRING("etMouseClick","\x32","\x4d","\x2b","\xb2")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseUp,HX_HCSTRING("etMouseUp","\x31","\x3f","\xde","\xb1")},
	{hx::fsInt,(void *) &ManagedStage_obj::etResize,HX_HCSTRING("etResize","\xc3","\xa3","\xb0","\xa5")},
	{hx::fsInt,(void *) &ManagedStage_obj::etPoll,HX_HCSTRING("etPoll","\x4e","\x66","\xbc","\x61")},
	{hx::fsInt,(void *) &ManagedStage_obj::etQuit,HX_HCSTRING("etQuit","\xde","\x27","\x6a","\x62")},
	{hx::fsInt,(void *) &ManagedStage_obj::etFocus,HX_HCSTRING("etFocus","\xe9","\x84","\x14","\x61")},
	{hx::fsInt,(void *) &ManagedStage_obj::etShouldRotate,HX_HCSTRING("etShouldRotate","\xfd","\x19","\x05","\x3d")},
	{hx::fsInt,(void *) &ManagedStage_obj::etDestroyHandler,HX_HCSTRING("etDestroyHandler","\xbf","\xce","\x9b","\x74")},
	{hx::fsInt,(void *) &ManagedStage_obj::etRedraw,HX_HCSTRING("etRedraw","\x06","\x2f","\xcd","\x9b")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchBegin,HX_HCSTRING("etTouchBegin","\x39","\xab","\xe6","\xf5")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchMove,HX_HCSTRING("etTouchMove","\x01","\xf4","\x1e","\xa9")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchEnd,HX_HCSTRING("etTouchEnd","\xeb","\x60","\x80","\x4c")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchTap,HX_HCSTRING("etTouchTap","\x73","\xb7","\x8b","\x4c")},
	{hx::fsInt,(void *) &ManagedStage_obj::etChange,HX_HCSTRING("etChange","\x3f","\xdb","\xa7","\x54")},
	{hx::fsInt,(void *) &ManagedStage_obj::etActivate,HX_HCSTRING("etActivate","\x42","\xb7","\x22","\x32")},
	{hx::fsInt,(void *) &ManagedStage_obj::etDeactivate,HX_HCSTRING("etDeactivate","\x83","\x39","\x01","\x88")},
	{hx::fsInt,(void *) &ManagedStage_obj::etGotInputFocus,HX_HCSTRING("etGotInputFocus","\xeb","\xe9","\x70","\xb6")},
	{hx::fsInt,(void *) &ManagedStage_obj::etLostInputFocus,HX_HCSTRING("etLostInputFocus","\x41","\xcb","\x2b","\x89")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyAxisMove,HX_HCSTRING("etJoyAxisMove","\x57","\x18","\x05","\x0e")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyBallMove,HX_HCSTRING("etJoyBallMove","\xb5","\xe4","\x0d","\xb6")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyHatMove,HX_HCSTRING("etJoyHatMove","\xa7","\xb7","\xb6","\xe2")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyButtonDown,HX_HCSTRING("etJoyButtonDown","\xb9","\xba","\xaa","\x35")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyButtonUp,HX_HCSTRING("etJoyButtonUp","\xf2","\x14","\x43","\xda")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyDeviceAdded,HX_HCSTRING("etJoyDeviceAdded","\x65","\x91","\xc6","\x9f")},
	{hx::fsInt,(void *) &ManagedStage_obj::etJoyDeviceRemoved,HX_HCSTRING("etJoyDeviceRemoved","\x85","\x0f","\x27","\x6a")},
	{hx::fsInt,(void *) &ManagedStage_obj::etSysWM,HX_HCSTRING("etSysWM","\x74","\x3b","\xf2","\xe3")},
	{hx::fsInt,(void *) &ManagedStage_obj::etRenderContextLost,HX_HCSTRING("etRenderContextLost","\x4e","\x6a","\x7c","\xc0")},
	{hx::fsInt,(void *) &ManagedStage_obj::etRenderContextRestored,HX_HCSTRING("etRenderContextRestored","\xc0","\x3a","\x48","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ManagedStage_obj::lime_managed_stage_create,HX_HCSTRING("lime_managed_stage_create","\x67","\x5f","\x9b","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ManagedStage_obj::lime_managed_stage_pump_event,HX_HCSTRING("lime_managed_stage_pump_event","\xee","\x13","\x3c","\x99")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("beginRender","\x5f","\x4e","\x4f","\x9f"),
	HX_HCSTRING("endRender","\x91","\xb9","\x0b","\x45"),
	HX_HCSTRING("pumpEvent","\x52","\x4a","\x3a","\xf3"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("sendQuit","\x37","\x3d","\xd8","\xde"),
	HX_HCSTRING("setNextWake","\x79","\xcc","\x1f","\x2b"),
	HX_HCSTRING("__doProcessStageEvent","\xa0","\x20","\xca","\x93"),
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efCommandDown,"efCommandDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efMiddleDown,"efMiddleDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efRightDown,"efRightDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efPrimaryTouch,"efPrimaryTouch");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etUnknown,"etUnknown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etKeyDown,"etKeyDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etChar,"etChar");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etKeyUp,"etKeyUp");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseMove,"etMouseMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseDown,"etMouseDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseClick,"etMouseClick");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseUp,"etMouseUp");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etResize,"etResize");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etPoll,"etPoll");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etQuit,"etQuit");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etFocus,"etFocus");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etShouldRotate,"etShouldRotate");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etDestroyHandler,"etDestroyHandler");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etRedraw,"etRedraw");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchBegin,"etTouchBegin");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchMove,"etTouchMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchEnd,"etTouchEnd");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchTap,"etTouchTap");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etChange,"etChange");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etActivate,"etActivate");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etDeactivate,"etDeactivate");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etGotInputFocus,"etGotInputFocus");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etLostInputFocus,"etLostInputFocus");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyAxisMove,"etJoyAxisMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyBallMove,"etJoyBallMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyHatMove,"etJoyHatMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyButtonDown,"etJoyButtonDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyButtonUp,"etJoyButtonUp");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyDeviceAdded,"etJoyDeviceAdded");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etJoyDeviceRemoved,"etJoyDeviceRemoved");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etSysWM,"etSysWM");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etRenderContextLost,"etRenderContextLost");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etRenderContextRestored,"etRenderContextRestored");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::lime_managed_stage_create,"lime_managed_stage_create");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::lime_managed_stage_pump_event,"lime_managed_stage_pump_event");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efCommandDown,"efCommandDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efMiddleDown,"efMiddleDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efRightDown,"efRightDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efLocationRight,"efLocationRight");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efPrimaryTouch,"efPrimaryTouch");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etUnknown,"etUnknown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etKeyDown,"etKeyDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etChar,"etChar");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etKeyUp,"etKeyUp");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseMove,"etMouseMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseDown,"etMouseDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseClick,"etMouseClick");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseUp,"etMouseUp");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etResize,"etResize");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etPoll,"etPoll");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etQuit,"etQuit");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etFocus,"etFocus");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etShouldRotate,"etShouldRotate");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etDestroyHandler,"etDestroyHandler");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etRedraw,"etRedraw");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchBegin,"etTouchBegin");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchMove,"etTouchMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchEnd,"etTouchEnd");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchTap,"etTouchTap");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etChange,"etChange");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etActivate,"etActivate");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etDeactivate,"etDeactivate");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etGotInputFocus,"etGotInputFocus");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etLostInputFocus,"etLostInputFocus");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyAxisMove,"etJoyAxisMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyBallMove,"etJoyBallMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyHatMove,"etJoyHatMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyButtonDown,"etJoyButtonDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyButtonUp,"etJoyButtonUp");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyDeviceAdded,"etJoyDeviceAdded");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etJoyDeviceRemoved,"etJoyDeviceRemoved");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etSysWM,"etSysWM");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etRenderContextLost,"etRenderContextLost");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etRenderContextRestored,"etRenderContextRestored");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::lime_managed_stage_create,"lime_managed_stage_create");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::lime_managed_stage_pump_event,"lime_managed_stage_pump_event");
};

#endif

hx::Class ManagedStage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c"),
	HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4"),
	HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa"),
	HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8"),
	HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b"),
	HX_HCSTRING("efMiddleDown","\x18","\xc6","\xf0","\xbd"),
	HX_HCSTRING("efRightDown","\xbd","\x41","\x73","\xc4"),
	HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc"),
	HX_HCSTRING("efPrimaryTouch","\x9e","\x1a","\x82","\x70"),
	HX_HCSTRING("etUnknown","\xdb","\x6e","\xe6","\xd2"),
	HX_HCSTRING("etKeyDown","\xf2","\xb4","\xb2","\x8d"),
	HX_HCSTRING("etChar","\xe5","\x46","\x1f","\x59"),
	HX_HCSTRING("etKeyUp","\xeb","\xde","\x89","\x3b"),
	HX_HCSTRING("etMouseMove","\x67","\x1d","\x07","\x90"),
	HX_HCSTRING("etMouseDown","\xb8","\x32","\x14","\x8a"),
	HX_HCSTRING("etMouseClick","\x32","\x4d","\x2b","\xb2"),
	HX_HCSTRING("etMouseUp","\x31","\x3f","\xde","\xb1"),
	HX_HCSTRING("etResize","\xc3","\xa3","\xb0","\xa5"),
	HX_HCSTRING("etPoll","\x4e","\x66","\xbc","\x61"),
	HX_HCSTRING("etQuit","\xde","\x27","\x6a","\x62"),
	HX_HCSTRING("etFocus","\xe9","\x84","\x14","\x61"),
	HX_HCSTRING("etShouldRotate","\xfd","\x19","\x05","\x3d"),
	HX_HCSTRING("etDestroyHandler","\xbf","\xce","\x9b","\x74"),
	HX_HCSTRING("etRedraw","\x06","\x2f","\xcd","\x9b"),
	HX_HCSTRING("etTouchBegin","\x39","\xab","\xe6","\xf5"),
	HX_HCSTRING("etTouchMove","\x01","\xf4","\x1e","\xa9"),
	HX_HCSTRING("etTouchEnd","\xeb","\x60","\x80","\x4c"),
	HX_HCSTRING("etTouchTap","\x73","\xb7","\x8b","\x4c"),
	HX_HCSTRING("etChange","\x3f","\xdb","\xa7","\x54"),
	HX_HCSTRING("etActivate","\x42","\xb7","\x22","\x32"),
	HX_HCSTRING("etDeactivate","\x83","\x39","\x01","\x88"),
	HX_HCSTRING("etGotInputFocus","\xeb","\xe9","\x70","\xb6"),
	HX_HCSTRING("etLostInputFocus","\x41","\xcb","\x2b","\x89"),
	HX_HCSTRING("etJoyAxisMove","\x57","\x18","\x05","\x0e"),
	HX_HCSTRING("etJoyBallMove","\xb5","\xe4","\x0d","\xb6"),
	HX_HCSTRING("etJoyHatMove","\xa7","\xb7","\xb6","\xe2"),
	HX_HCSTRING("etJoyButtonDown","\xb9","\xba","\xaa","\x35"),
	HX_HCSTRING("etJoyButtonUp","\xf2","\x14","\x43","\xda"),
	HX_HCSTRING("etJoyDeviceAdded","\x65","\x91","\xc6","\x9f"),
	HX_HCSTRING("etJoyDeviceRemoved","\x85","\x0f","\x27","\x6a"),
	HX_HCSTRING("etSysWM","\x74","\x3b","\xf2","\xe3"),
	HX_HCSTRING("etRenderContextLost","\x4e","\x6a","\x7c","\xc0"),
	HX_HCSTRING("etRenderContextRestored","\xc0","\x3a","\x48","\x12"),
	HX_HCSTRING("lime_managed_stage_create","\x67","\x5f","\x9b","\x71"),
	HX_HCSTRING("lime_managed_stage_pump_event","\xee","\x13","\x3c","\x99"),
	::String(null()) };

void ManagedStage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.ManagedStage","\x8f","\x6f","\xda","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManagedStage_obj::__GetStatic;
	__mClass->mSetStaticField = &ManagedStage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ManagedStage_obj >;
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

void ManagedStage_obj::__boot()
{
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
	efMiddleDown= (int)32;
	efRightDown= (int)64;
	efLocationRight= (int)16384;
	efPrimaryTouch= (int)32768;
	etUnknown= (int)0;
	etKeyDown= (int)1;
	etChar= (int)2;
	etKeyUp= (int)3;
	etMouseMove= (int)4;
	etMouseDown= (int)5;
	etMouseClick= (int)6;
	etMouseUp= (int)7;
	etResize= (int)8;
	etPoll= (int)9;
	etQuit= (int)10;
	etFocus= (int)11;
	etShouldRotate= (int)12;
	etDestroyHandler= (int)13;
	etRedraw= (int)14;
	etTouchBegin= (int)15;
	etTouchMove= (int)16;
	etTouchEnd= (int)17;
	etTouchTap= (int)18;
	etChange= (int)19;
	etActivate= (int)20;
	etDeactivate= (int)21;
	etGotInputFocus= (int)22;
	etLostInputFocus= (int)23;
	etJoyAxisMove= (int)24;
	etJoyBallMove= (int)25;
	etJoyHatMove= (int)26;
	etJoyButtonDown= (int)27;
	etJoyButtonUp= (int)28;
	etJoyDeviceAdded= (int)29;
	etJoyDeviceRemoved= (int)30;
	etSysWM= (int)31;
	etRenderContextLost= (int)32;
	etRenderContextRestored= (int)33;
	lime_managed_stage_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_managed_stage_create","\x49","\xd4","\x80","\xda"),(int)3);
	lime_managed_stage_pump_event= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_managed_stage_pump_event","\xd0","\xa1","\x7a","\x74"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
