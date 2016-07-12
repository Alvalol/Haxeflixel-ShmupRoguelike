#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
namespace flixel{
namespace text{

Void FlxTextFormatMarkerPair_obj::__construct(::flixel::text::FlxTextFormat format,::String marker)
{
HX_STACK_FRAME("flixel.text.FlxTextFormatMarkerPair","new",0xb549f24d,"flixel.text.FlxTextFormatMarkerPair.new","flixel/text/FlxText.hx",1053,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(marker,"marker")
{
	HX_STACK_LINE(1054)
	this->format = format;
	HX_STACK_LINE(1055)
	this->marker = marker;
}
;
	return null();
}

//FlxTextFormatMarkerPair_obj::~FlxTextFormatMarkerPair_obj() { }

Dynamic FlxTextFormatMarkerPair_obj::__CreateEmpty() { return  new FlxTextFormatMarkerPair_obj; }
hx::ObjectPtr< FlxTextFormatMarkerPair_obj > FlxTextFormatMarkerPair_obj::__new(::flixel::text::FlxTextFormat format,::String marker)
{  hx::ObjectPtr< FlxTextFormatMarkerPair_obj > _result_ = new FlxTextFormatMarkerPair_obj();
	_result_->__construct(format,marker);
	return _result_;}

Dynamic FlxTextFormatMarkerPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormatMarkerPair_obj > _result_ = new FlxTextFormatMarkerPair_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


FlxTextFormatMarkerPair_obj::FlxTextFormatMarkerPair_obj()
{
}

void FlxTextFormatMarkerPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormatMarkerPair);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(marker,"marker");
	HX_MARK_END_CLASS();
}

void FlxTextFormatMarkerPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(marker,"marker");
}

Dynamic FlxTextFormatMarkerPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		if (HX_FIELD_EQ(inName,"marker") ) { return marker; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormatMarkerPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::flixel::text::FlxTextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marker") ) { marker=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormatMarkerPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("marker","\xba","\x75","\x70","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxTextFormat*/ ,(int)offsetof(FlxTextFormatMarkerPair_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsString,(int)offsetof(FlxTextFormatMarkerPair_obj,marker),HX_HCSTRING("marker","\xba","\x75","\x70","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("marker","\xba","\x75","\x70","\xba"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormatMarkerPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormatMarkerPair_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTextFormatMarkerPair_obj::__mClass;

void FlxTextFormatMarkerPair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxTextFormatMarkerPair","\xdb","\xc7","\xdd","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTextFormatMarkerPair_obj >;
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
} // end namespace text
