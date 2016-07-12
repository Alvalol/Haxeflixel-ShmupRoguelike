#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxBitmapDataPool_FlxBitmapDataPoolNode
#include <flixel/util/_FlxBitmapDataPool/FlxBitmapDataPoolNode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
namespace flixel{
namespace util{
namespace _FlxBitmapDataPool{

Void FlxBitmapDataPoolNode_obj::__construct(::openfl::_legacy::display::BitmapData bmd,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next)
{
HX_STACK_FRAME("flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode","new",0x6f761b8f,"flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode.new","flixel/util/FlxBitmapDataPool.hx",159,0x992b0db1)
HX_STACK_THIS(this)
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(prev,"prev")
HX_STACK_ARG(next,"next")
{
	HX_STACK_LINE(160)
	this->bmd = bmd;
	HX_STACK_LINE(161)
	this->prev = prev;
	HX_STACK_LINE(162)
	this->next = next;
}
;
	return null();
}

//FlxBitmapDataPoolNode_obj::~FlxBitmapDataPoolNode_obj() { }

Dynamic FlxBitmapDataPoolNode_obj::__CreateEmpty() { return  new FlxBitmapDataPoolNode_obj; }
hx::ObjectPtr< FlxBitmapDataPoolNode_obj > FlxBitmapDataPoolNode_obj::__new(::openfl::_legacy::display::BitmapData bmd,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode prev,::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode next)
{  hx::ObjectPtr< FlxBitmapDataPoolNode_obj > _result_ = new FlxBitmapDataPoolNode_obj();
	_result_->__construct(bmd,prev,next);
	return _result_;}

Dynamic FlxBitmapDataPoolNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataPoolNode_obj > _result_ = new FlxBitmapDataPoolNode_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


FlxBitmapDataPoolNode_obj::FlxBitmapDataPoolNode_obj()
{
}

void FlxBitmapDataPoolNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBitmapDataPoolNode);
	HX_MARK_MEMBER_NAME(bmd,"bmd");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void FlxBitmapDataPoolNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bmd,"bmd");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic FlxBitmapDataPoolNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { return bmd; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBitmapDataPoolNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { bmd=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBitmapDataPoolNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"));
	outFields->push(HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,bmd),HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,prev),HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a")},
	{hx::fsObject /*::flixel::util::_FlxBitmapDataPool::FlxBitmapDataPoolNode*/ ,(int)offsetof(FlxBitmapDataPoolNode_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataPoolNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataPoolNode_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBitmapDataPoolNode_obj::__mClass;

void FlxBitmapDataPoolNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxBitmapDataPool.FlxBitmapDataPoolNode","\x1d","\xa8","\x27","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapDataPoolNode_obj >;
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
} // end namespace util
} // end namespace _FlxBitmapDataPool
