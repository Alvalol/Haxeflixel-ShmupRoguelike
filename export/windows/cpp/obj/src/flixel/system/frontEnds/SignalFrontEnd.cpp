#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
namespace flixel{
namespace _system{
namespace frontEnds{

Void SignalFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SignalFrontEnd","new",0xa84da1e6,"flixel.system.frontEnds.SignalFrontEnd.new","flixel/system/frontEnds/SignalFrontEnd.hx",6,0x6eb9cd09)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	this->focusLost = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(28)
	this->focusGained = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(27)
	this->postDraw = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(26)
	this->preDraw = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(25)
	this->postUpdate = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(24)
	this->preUpdate = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(23)
	this->gameStarted = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(19)
	this->postGameReset = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(18)
	this->preGameReset = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
	HX_STACK_LINE(17)
	this->gameResized = ::flixel::util::_FlxSignal::FlxSignal2_obj::__new();
	HX_STACK_LINE(12)
	this->preStateCreate = ::flixel::util::_FlxSignal::FlxSignal1_obj::__new();
	HX_STACK_LINE(11)
	this->stateSwitched = ::flixel::util::_FlxSignal::FlxSignal0_obj::__new();
}
;
	return null();
}

//SignalFrontEnd_obj::~SignalFrontEnd_obj() { }

Dynamic SignalFrontEnd_obj::__CreateEmpty() { return  new SignalFrontEnd_obj; }
hx::ObjectPtr< SignalFrontEnd_obj > SignalFrontEnd_obj::__new()
{  hx::ObjectPtr< SignalFrontEnd_obj > _result_ = new SignalFrontEnd_obj();
	_result_->__construct();
	return _result_;}

Dynamic SignalFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SignalFrontEnd_obj > _result_ = new SignalFrontEnd_obj();
	_result_->__construct();
	return _result_;}


SignalFrontEnd_obj::SignalFrontEnd_obj()
{
}

void SignalFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SignalFrontEnd);
	HX_MARK_MEMBER_NAME(stateSwitched,"stateSwitched");
	HX_MARK_MEMBER_NAME(preStateCreate,"preStateCreate");
	HX_MARK_MEMBER_NAME(gameResized,"gameResized");
	HX_MARK_MEMBER_NAME(preGameReset,"preGameReset");
	HX_MARK_MEMBER_NAME(postGameReset,"postGameReset");
	HX_MARK_MEMBER_NAME(gameStarted,"gameStarted");
	HX_MARK_MEMBER_NAME(preUpdate,"preUpdate");
	HX_MARK_MEMBER_NAME(postUpdate,"postUpdate");
	HX_MARK_MEMBER_NAME(preDraw,"preDraw");
	HX_MARK_MEMBER_NAME(postDraw,"postDraw");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_END_CLASS();
}

void SignalFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stateSwitched,"stateSwitched");
	HX_VISIT_MEMBER_NAME(preStateCreate,"preStateCreate");
	HX_VISIT_MEMBER_NAME(gameResized,"gameResized");
	HX_VISIT_MEMBER_NAME(preGameReset,"preGameReset");
	HX_VISIT_MEMBER_NAME(postGameReset,"postGameReset");
	HX_VISIT_MEMBER_NAME(gameStarted,"gameStarted");
	HX_VISIT_MEMBER_NAME(preUpdate,"preUpdate");
	HX_VISIT_MEMBER_NAME(postUpdate,"postUpdate");
	HX_VISIT_MEMBER_NAME(preDraw,"preDraw");
	HX_VISIT_MEMBER_NAME(postDraw,"postDraw");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
}

Dynamic SignalFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { return preDraw; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { return postDraw; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preUpdate") ) { return preUpdate; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { return postUpdate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { return gameResized; }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { return gameStarted; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preGameReset") ) { return preGameReset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { return stateSwitched; }
		if (HX_FIELD_EQ(inName,"postGameReset") ) { return postGameReset; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preStateCreate") ) { return preStateCreate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SignalFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"preDraw") ) { preDraw=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postDraw") ) { postDraw=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"preUpdate") ) { preUpdate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"postUpdate") ) { postUpdate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameResized") ) { gameResized=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameStarted") ) { gameStarted=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"preGameReset") ) { preGameReset=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stateSwitched") ) { stateSwitched=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"postGameReset") ) { postGameReset=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal0 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"preStateCreate") ) { preStateCreate=inValue.Cast< ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SignalFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"));
	outFields->push(HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06"));
	outFields->push(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"));
	outFields->push(HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"));
	outFields->push(HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"));
	outFields->push(HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"));
	outFields->push(HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"));
	outFields->push(HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"));
	outFields->push(HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"));
	outFields->push(HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"));
	outFields->push(HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"));
	outFields->push(HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,stateSwitched),HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal1*/ ,(int)offsetof(SignalFrontEnd_obj,preStateCreate),HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal2*/ ,(int)offsetof(SignalFrontEnd_obj,gameResized),HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preGameReset),HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postGameReset),HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,gameStarted),HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preUpdate),HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postUpdate),HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,preDraw),HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,postDraw),HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,focusGained),HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1")},
	{hx::fsObject /*::flixel::util::_FlxSignal::FlxSignal0*/ ,(int)offsetof(SignalFrontEnd_obj,focusLost),HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("stateSwitched","\x84","\x32","\x02","\x37"),
	HX_HCSTRING("preStateCreate","\x8a","\xe8","\xdd","\x06"),
	HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"),
	HX_HCSTRING("preGameReset","\xda","\x1b","\xe3","\xc1"),
	HX_HCSTRING("postGameReset","\xfd","\x07","\x96","\xc9"),
	HX_HCSTRING("gameStarted","\x6f","\x9f","\xd1","\x19"),
	HX_HCSTRING("preUpdate","\x8c","\x96","\xa6","\xe5"),
	HX_HCSTRING("postUpdate","\x89","\x06","\x3e","\xdc"),
	HX_HCSTRING("preDraw","\xc7","\x05","\xd5","\x1a"),
	HX_HCSTRING("postDraw","\x84","\x8c","\xaf","\x00"),
	HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"),
	HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SignalFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SignalFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class SignalFrontEnd_obj::__mClass;

void SignalFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.SignalFrontEnd","\xf4","\x76","\xd9","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SignalFrontEnd_obj >;
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
