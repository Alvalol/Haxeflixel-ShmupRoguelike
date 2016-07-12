#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
namespace openfl{
namespace media{

Void SoundLoaderContext_obj::__construct(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile)
{
HX_STACK_FRAME("openfl.media.SoundLoaderContext","new",0xafd95147,"openfl.media.SoundLoaderContext.new","openfl/media/SoundLoaderContext.hx",11,0x79afda07)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_bufferTime,"bufferTime")
HX_STACK_ARG(__o_checkPolicyFile,"checkPolicyFile")
Float bufferTime = __o_bufferTime.Default(1000);
bool checkPolicyFile = __o_checkPolicyFile.Default(false);
{
	HX_STACK_LINE(13)
	this->bufferTime = bufferTime;
	HX_STACK_LINE(14)
	this->checkPolicyFile = checkPolicyFile;
}
;
	return null();
}

//SoundLoaderContext_obj::~SoundLoaderContext_obj() { }

Dynamic SoundLoaderContext_obj::__CreateEmpty() { return  new SoundLoaderContext_obj; }
hx::ObjectPtr< SoundLoaderContext_obj > SoundLoaderContext_obj::__new(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile)
{  hx::ObjectPtr< SoundLoaderContext_obj > _result_ = new SoundLoaderContext_obj();
	_result_->__construct(__o_bufferTime,__o_checkPolicyFile);
	return _result_;}

Dynamic SoundLoaderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundLoaderContext_obj > _result_ = new SoundLoaderContext_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


SoundLoaderContext_obj::SoundLoaderContext_obj()
{
}

Dynamic SoundLoaderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return bufferTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return checkPolicyFile; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundLoaderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundLoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"));
	outFields->push(HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundLoaderContext_obj,bufferTime),HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e")},
	{hx::fsBool,(int)offsetof(SoundLoaderContext_obj,checkPolicyFile),HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"),
	HX_HCSTRING("checkPolicyFile","\x76","\x1e","\x96","\xaf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundLoaderContext_obj::__mClass;

void SoundLoaderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundLoaderContext","\xd5","\xa1","\xdf","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundLoaderContext_obj >;
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
} // end namespace media
