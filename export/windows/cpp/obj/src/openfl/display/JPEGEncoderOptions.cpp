#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
namespace openfl{
namespace display{

Void JPEGEncoderOptions_obj::__construct(hx::Null< int >  __o_quality)
{
HX_STACK_FRAME("openfl.display.JPEGEncoderOptions","new",0xdec807a6,"openfl.display.JPEGEncoderOptions.new","openfl/display/JPEGEncoderOptions.hx",12,0xc451ba48)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_quality,"quality")
int quality = __o_quality.Default(80);
{
	HX_STACK_LINE(12)
	this->quality = quality;
}
;
	return null();
}

//JPEGEncoderOptions_obj::~JPEGEncoderOptions_obj() { }

Dynamic JPEGEncoderOptions_obj::__CreateEmpty() { return  new JPEGEncoderOptions_obj; }
hx::ObjectPtr< JPEGEncoderOptions_obj > JPEGEncoderOptions_obj::__new(hx::Null< int >  __o_quality)
{  hx::ObjectPtr< JPEGEncoderOptions_obj > _result_ = new JPEGEncoderOptions_obj();
	_result_->__construct(__o_quality);
	return _result_;}

Dynamic JPEGEncoderOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEGEncoderOptions_obj > _result_ = new JPEGEncoderOptions_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


JPEGEncoderOptions_obj::JPEGEncoderOptions_obj()
{
}

Dynamic JPEGEncoderOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JPEGEncoderOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JPEGEncoderOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(JPEGEncoderOptions_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEGEncoderOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEGEncoderOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class JPEGEncoderOptions_obj::__mClass;

void JPEGEncoderOptions_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.JPEGEncoderOptions","\xb4","\xfc","\x3d","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JPEGEncoderOptions_obj >;
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
