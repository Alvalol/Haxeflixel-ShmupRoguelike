#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
namespace openfl{
namespace display{

Void PNGEncoderOptions_obj::__construct(hx::Null< bool >  __o_fastCompression)
{
HX_STACK_FRAME("openfl.display.PNGEncoderOptions","new",0x5da61973,"openfl.display.PNGEncoderOptions.new","openfl/display/PNGEncoderOptions.hx",12,0xcb23cb5f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_fastCompression,"fastCompression")
bool fastCompression = __o_fastCompression.Default(false);
{
	HX_STACK_LINE(12)
	this->fastCompression = fastCompression;
}
;
	return null();
}

//PNGEncoderOptions_obj::~PNGEncoderOptions_obj() { }

Dynamic PNGEncoderOptions_obj::__CreateEmpty() { return  new PNGEncoderOptions_obj; }
hx::ObjectPtr< PNGEncoderOptions_obj > PNGEncoderOptions_obj::__new(hx::Null< bool >  __o_fastCompression)
{  hx::ObjectPtr< PNGEncoderOptions_obj > _result_ = new PNGEncoderOptions_obj();
	_result_->__construct(__o_fastCompression);
	return _result_;}

Dynamic PNGEncoderOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PNGEncoderOptions_obj > _result_ = new PNGEncoderOptions_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


PNGEncoderOptions_obj::PNGEncoderOptions_obj()
{
}

Dynamic PNGEncoderOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"fastCompression") ) { return fastCompression; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PNGEncoderOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"fastCompression") ) { fastCompression=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PNGEncoderOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fastCompression","\x2a","\x9a","\x82","\x9b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PNGEncoderOptions_obj,fastCompression),HX_HCSTRING("fastCompression","\x2a","\x9a","\x82","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fastCompression","\x2a","\x9a","\x82","\x9b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PNGEncoderOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PNGEncoderOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class PNGEncoderOptions_obj::__mClass;

void PNGEncoderOptions_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.PNGEncoderOptions","\x01","\xe4","\xc1","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PNGEncoderOptions_obj >;
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
} // end namespace display
