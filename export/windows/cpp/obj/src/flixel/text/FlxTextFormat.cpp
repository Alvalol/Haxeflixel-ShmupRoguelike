#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace text{

Void FlxTextFormat_obj::__construct(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor)
{
HX_STACK_FRAME("flixel.text.FlxTextFormat","new",0x67be2279,"flixel.text.FlxTextFormat.new","flixel/text/FlxText.hx",1028,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(FontColor,"FontColor")
HX_STACK_ARG(Bold,"Bold")
HX_STACK_ARG(Italic,"Italic")
HX_STACK_ARG(BorderColor,"BorderColor")
{
	HX_STACK_LINE(1029)
	::openfl::_legacy::text::TextFormat tmp = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),FontColor,Bold,Italic,null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1029)
	this->format = tmp;
	HX_STACK_LINE(1030)
	bool tmp1 = (BorderColor == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1030)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1030)
	if ((tmp1)){
		HX_STACK_LINE(1030)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(1030)
		tmp2 = BorderColor;
	}
	HX_STACK_LINE(1030)
	this->borderColor = tmp2;
}
;
	return null();
}

//FlxTextFormat_obj::~FlxTextFormat_obj() { }

Dynamic FlxTextFormat_obj::__CreateEmpty() { return  new FlxTextFormat_obj; }
hx::ObjectPtr< FlxTextFormat_obj > FlxTextFormat_obj::__new(Dynamic FontColor,Dynamic Bold,Dynamic Italic,Dynamic BorderColor)
{  hx::ObjectPtr< FlxTextFormat_obj > _result_ = new FlxTextFormat_obj();
	_result_->__construct(FontColor,Bold,Italic,BorderColor);
	return _result_;}

Dynamic FlxTextFormat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormat_obj > _result_ = new FlxTextFormat_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}


FlxTextFormat_obj::FlxTextFormat_obj()
{
}

void FlxTextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormat);
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FlxTextFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormat_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTextFormat_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxTextFormat_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormat_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTextFormat_obj::__mClass;

void FlxTextFormat_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxTextFormat","\x07","\x72","\x93","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTextFormat_obj >;
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
