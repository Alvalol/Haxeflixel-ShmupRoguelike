#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#include <openfl/display3D/_Context3D/SamplerState.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3D{

Void SamplerState_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D._Context3D.SamplerState","new",0xe10565af,"openfl.display3D._Context3D.SamplerState.new","openfl/display3D/Context3D.hx",1190,0xc899cbb9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SamplerState_obj::~SamplerState_obj() { }

Dynamic SamplerState_obj::__CreateEmpty() { return  new SamplerState_obj; }
hx::ObjectPtr< SamplerState_obj > SamplerState_obj::__new()
{  hx::ObjectPtr< SamplerState_obj > _result_ = new SamplerState_obj();
	_result_->__construct();
	return _result_;}

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerState_obj > _result_ = new SamplerState_obj();
	_result_->__construct();
	return _result_;}


SamplerState_obj::SamplerState_obj()
{
}

void SamplerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerState);
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(mipfilter,"mipfilter");
	HX_MARK_END_CLASS();
}

void SamplerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(mipfilter,"mipfilter");
}

Dynamic SamplerState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { return mipfilter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SamplerState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< ::openfl::display3D::Context3DWrapMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::openfl::display3D::Context3DTextureFilter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { mipfilter=inValue.Cast< ::openfl::display3D::Context3DMipFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("mipfilter","\x4c","\x98","\x13","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3DWrapMode*/ ,(int)offsetof(SamplerState_obj,wrap),HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e")},
	{hx::fsObject /*::openfl::display3D::Context3DTextureFilter*/ ,(int)offsetof(SamplerState_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsObject /*::openfl::display3D::Context3DMipFilter*/ ,(int)offsetof(SamplerState_obj,mipfilter),HX_HCSTRING("mipfilter","\x4c","\x98","\x13","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("wrap","\xca","\x39","\xff","\x4e"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("mipfilter","\x4c","\x98","\x13","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3D.SamplerState","\x3d","\x62","\x7f","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerState_obj >;
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
} // end namespace display3D
} // end namespace _Context3D
