#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_AssetData
#include <openfl/_legacy/AssetData.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
namespace openfl{
namespace _legacy{

Void AssetData_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.AssetData","new",0xeaf2b3a8,"openfl._legacy.AssetData.new","openfl/_legacy/Assets.hx",1654,0x9276b055)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > _result_ = new AssetData_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > _result_ = new AssetData_obj();
	_result_->__construct();
	return _result_;}


AssetData_obj::AssetData_obj()
{
}

void AssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetData);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void AssetData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic AssetData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::openfl::_legacy::AssetType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AssetData_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsString,(int)offsetof(AssetData_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::openfl::_legacy::AssetType*/ ,(int)offsetof(AssetData_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetData_obj::__mClass;

void AssetData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.AssetData","\xb6","\xff","\xdd","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetData_obj >;
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
