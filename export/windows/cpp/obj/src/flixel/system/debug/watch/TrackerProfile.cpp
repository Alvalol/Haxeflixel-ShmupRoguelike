#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void TrackerProfile_obj::__construct(::hx::Class ObjectClass,Array< ::String > Variables,Array< ::Dynamic > Extensions)
{
HX_STACK_FRAME("flixel.system.debug.watch.TrackerProfile","new",0x3f8f952a,"flixel.system.debug.watch.TrackerProfile.new","flixel/system/debug/watch/Tracker.hx",240,0x14368dcf)
HX_STACK_THIS(this)
HX_STACK_ARG(ObjectClass,"ObjectClass")
HX_STACK_ARG(Variables,"Variables")
HX_STACK_ARG(Extensions,"Extensions")
{
	HX_STACK_LINE(241)
	this->objectClass = ObjectClass;
	HX_STACK_LINE(242)
	this->variables = Variables;
	HX_STACK_LINE(243)
	this->extensions = Extensions;
}
;
	return null();
}

//TrackerProfile_obj::~TrackerProfile_obj() { }

Dynamic TrackerProfile_obj::__CreateEmpty() { return  new TrackerProfile_obj; }
hx::ObjectPtr< TrackerProfile_obj > TrackerProfile_obj::__new(::hx::Class ObjectClass,Array< ::String > Variables,Array< ::Dynamic > Extensions)
{  hx::ObjectPtr< TrackerProfile_obj > _result_ = new TrackerProfile_obj();
	_result_->__construct(ObjectClass,Variables,Extensions);
	return _result_;}

Dynamic TrackerProfile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TrackerProfile_obj > _result_ = new TrackerProfile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String TrackerProfile_obj::toString( ){
	HX_STACK_FRAME("flixel.system.debug.watch.TrackerProfile","toString",0x9a236fa2,"flixel.system.debug.watch.TrackerProfile.toString","flixel/system/debug/watch/Tracker.hx",247,0x14368dcf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(249)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(249)
		_this->label = HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82");
		HX_STACK_LINE(249)
		_this->value = this->variables;
		HX_STACK_LINE(249)
		tmp = _this;
	}
	HX_STACK_LINE(250)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(250)
		_this->label = HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89");
		HX_STACK_LINE(250)
		_this->value = this->extensions;
		HX_STACK_LINE(250)
		tmp1 = _this;
	}
	HX_STACK_LINE(248)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TrackerProfile_obj,toString,return )


TrackerProfile_obj::TrackerProfile_obj()
{
}

void TrackerProfile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrackerProfile);
	HX_MARK_MEMBER_NAME(objectClass,"objectClass");
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(extensions,"extensions");
	HX_MARK_END_CLASS();
}

void TrackerProfile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectClass,"objectClass");
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(extensions,"extensions");
}

Dynamic TrackerProfile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return variables; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { return extensions; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { return objectClass; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TrackerProfile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"objectClass") ) { objectClass=inValue.Cast< ::hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrackerProfile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"));
	outFields->push(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"));
	outFields->push(HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(TrackerProfile_obj,objectClass),HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TrackerProfile_obj,variables),HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TrackerProfile_obj,extensions),HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectClass","\xf9","\x94","\x87","\xb7"),
	HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"),
	HX_HCSTRING("extensions","\x14","\x7c","\x70","\x89"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TrackerProfile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TrackerProfile_obj::__mClass,"__mClass");
};

#endif

hx::Class TrackerProfile_obj::__mClass;

void TrackerProfile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.TrackerProfile","\x38","\x78","\x47","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TrackerProfile_obj >;
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
} // end namespace watch
