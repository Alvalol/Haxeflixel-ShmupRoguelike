#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace text{
namespace _FlxText{

Void FlxTextFormatRange_obj::__construct(::flixel::text::FlxTextFormat format,int start,int end)
{
HX_STACK_FRAME("flixel.text._FlxText.FlxTextFormatRange","new",0x02a8ae38,"flixel.text._FlxText.FlxTextFormatRange.new","flixel/text/FlxText.hx",1041,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(start,"start")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(1042)
	::flixel::util::helpers::FlxRange tmp = ::flixel::util::helpers::FlxRange_obj::__new(start,end);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1042)
	this->range = tmp;
	HX_STACK_LINE(1043)
	this->format = format;
}
;
	return null();
}

//FlxTextFormatRange_obj::~FlxTextFormatRange_obj() { }

Dynamic FlxTextFormatRange_obj::__CreateEmpty() { return  new FlxTextFormatRange_obj; }
hx::ObjectPtr< FlxTextFormatRange_obj > FlxTextFormatRange_obj::__new(::flixel::text::FlxTextFormat format,int start,int end)
{  hx::ObjectPtr< FlxTextFormatRange_obj > _result_ = new FlxTextFormatRange_obj();
	_result_->__construct(format,start,end);
	return _result_;}

Dynamic FlxTextFormatRange_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormatRange_obj > _result_ = new FlxTextFormatRange_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


FlxTextFormatRange_obj::FlxTextFormatRange_obj()
{
}

void FlxTextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormatRange);
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FlxTextFormatRange_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormatRange_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::flixel::text::FlxTextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxTextFormatRange_obj,range),HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4")},
	{hx::fsObject /*::flixel::text::FlxTextFormat*/ ,(int)offsetof(FlxTextFormatRange_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormatRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormatRange_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTextFormatRange_obj::__mClass;

void FlxTextFormatRange_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text._FlxText.FlxTextFormatRange","\x46","\x72","\x3f","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTextFormatRange_obj >;
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
} // end namespace _FlxText
