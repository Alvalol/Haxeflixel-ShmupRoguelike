#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_system_PixelFormat
#include <openfl/_legacy/system/PixelFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_ScreenMode
#include <openfl/_legacy/system/ScreenMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace _system{

Void ScreenMode_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.system.ScreenMode","new",0x975af1bc,"openfl._legacy.system.ScreenMode.new","openfl/_legacy/system/ScreenMode.hx",9,0xb2cfa295)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->width = (int)-1;
	HX_STACK_LINE(11)
	this->height = (int)-1;
	HX_STACK_LINE(12)
	this->format = null();
	HX_STACK_LINE(13)
	this->refreshRate = (int)-1;
}
;
	return null();
}

//ScreenMode_obj::~ScreenMode_obj() { }

Dynamic ScreenMode_obj::__CreateEmpty() { return  new ScreenMode_obj; }
hx::ObjectPtr< ScreenMode_obj > ScreenMode_obj::__new()
{  hx::ObjectPtr< ScreenMode_obj > _result_ = new ScreenMode_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScreenMode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenMode_obj > _result_ = new ScreenMode_obj();
	_result_->__construct();
	return _result_;}


ScreenMode_obj::ScreenMode_obj()
{
}

void ScreenMode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenMode);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(refreshRate,"refreshRate");
	HX_MARK_END_CLASS();
}

void ScreenMode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(refreshRate,"refreshRate");
}

Dynamic ScreenMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return refreshRate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenMode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::_legacy::_system::PixelFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::_system::PixelFormat*/ ,(int)offsetof(ScreenMode_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(ScreenMode_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(ScreenMode_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(ScreenMode_obj,refreshRate),HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenMode_obj::__mClass,"__mClass");
};

#endif

hx::Class ScreenMode_obj::__mClass;

void ScreenMode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.system.ScreenMode","\xca","\xa3","\x20","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScreenMode_obj >;
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
} // end namespace system
