#include <hxcpp.h>

#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_system_SecurityDomain
#include <openfl/system/SecurityDomain.h>
#endif
namespace openfl{
namespace _system{

Void LoaderContext_obj::__construct(hx::Null< bool >  __o_checkPolicyFile,::openfl::_system::ApplicationDomain applicationDomain,::openfl::_system::SecurityDomain securityDomain)
{
HX_STACK_FRAME("openfl.system.LoaderContext","new",0xca9b9c4d,"openfl.system.LoaderContext.new","openfl/system/LoaderContext.hx",14,0x3ddfdde3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_checkPolicyFile,"checkPolicyFile")
HX_STACK_ARG(applicationDomain,"applicationDomain")
HX_STACK_ARG(securityDomain,"securityDomain")
bool checkPolicyFile = __o_checkPolicyFile.Default(false);
{
	HX_STACK_LINE(16)
	this->checkPolicyFile = checkPolicyFile;
	HX_STACK_LINE(17)
	this->securityDomain = securityDomain;
	HX_STACK_LINE(18)
	this->applicationDomain = applicationDomain;
	HX_STACK_LINE(20)
	this->allowCodeImport = true;
	HX_STACK_LINE(21)
	this->allowLoadBytesCodeExecution = true;
}
;
	return null();
}

//LoaderContext_obj::~LoaderContext_obj() { }

Dynamic LoaderContext_obj::__CreateEmpty() { return  new LoaderContext_obj; }
hx::ObjectPtr< LoaderContext_obj > LoaderContext_obj::__new(hx::Null< bool >  __o_checkPolicyFile,::openfl::_system::ApplicationDomain applicationDomain,::openfl::_system::SecurityDomain securityDomain)
{  hx::ObjectPtr< LoaderContext_obj > _result_ = new LoaderContext_obj();
	_result_->__construct(__o_checkPolicyFile,applicationDomain,securityDomain);
	return _result_;}

Dynamic LoaderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderContext_obj > _result_ = new LoaderContext_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


LoaderContext_obj::LoaderContext_obj()
{
}

void LoaderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderContext);
	HX_MARK_MEMBER_NAME(allowCodeImport,"allowCodeImport");
	HX_MARK_MEMBER_NAME(allowLoadBytesCodeExecution,"allowLoadBytesCodeExecution");
	HX_MARK_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_MARK_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_MARK_MEMBER_NAME(securityDomain,"securityDomain");
	HX_MARK_END_CLASS();
}

void LoaderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowCodeImport,"allowCodeImport");
	HX_VISIT_MEMBER_NAME(allowLoadBytesCodeExecution,"allowLoadBytesCodeExecution");
	HX_VISIT_MEMBER_NAME(applicationDomain,"applicationDomain");
	HX_VISIT_MEMBER_NAME(checkPolicyFile,"checkPolicyFile");
	HX_VISIT_MEMBER_NAME(securityDomain,"securityDomain");
}

Dynamic LoaderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"securityDomain") ) { return securityDomain; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCodeImport") ) { return allowCodeImport; }
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return checkPolicyFile; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { return applicationDomain; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowLoadBytesCodeExecution") ) { return allowLoadBytesCodeExecution; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoaderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"securityDomain") ) { securityDomain=inValue.Cast< ::openfl::_system::SecurityDomain >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"allowCodeImport") ) { allowCodeImport=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"applicationDomain") ) { applicationDomain=inValue.Cast< ::openfl::_system::ApplicationDomain >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowLoadBytesCodeExecution") ) { allowLoadBytesCodeExecution=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("allowCodeImport","\x5b","\x74","\xfd","\x31"));
	outFields->push(HX_HCSTRING("allowLoadBytesCodeExecution","\x6f","\x74","\xe7","\x4b"));
	outFields->push(HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"));
	outFields->push(HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"));
	outFields->push(HX_HCSTRING("securityDomain","\x24","\xd0","\x3f","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LoaderContext_obj,allowCodeImport),HX_HCSTRING("allowCodeImport","\x5b","\x74","\xfd","\x31")},
	{hx::fsBool,(int)offsetof(LoaderContext_obj,allowLoadBytesCodeExecution),HX_HCSTRING("allowLoadBytesCodeExecution","\x6f","\x74","\xe7","\x4b")},
	{hx::fsObject /*::openfl::_system::ApplicationDomain*/ ,(int)offsetof(LoaderContext_obj,applicationDomain),HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3")},
	{hx::fsBool,(int)offsetof(LoaderContext_obj,checkPolicyFile),HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf")},
	{hx::fsObject /*::openfl::_system::SecurityDomain*/ ,(int)offsetof(LoaderContext_obj,securityDomain),HX_HCSTRING("securityDomain","\x24","\xd0","\x3f","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("allowCodeImport","\x5b","\x74","\xfd","\x31"),
	HX_HCSTRING("allowLoadBytesCodeExecution","\x6f","\x74","\xe7","\x4b"),
	HX_HCSTRING("applicationDomain","\xb4","\x2c","\xdb","\xa3"),
	HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"),
	HX_HCSTRING("securityDomain","\x24","\xd0","\x3f","\x66"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class LoaderContext_obj::__mClass;

void LoaderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system.LoaderContext","\xdb","\x71","\x92","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoaderContext_obj >;
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
} // end namespace system
