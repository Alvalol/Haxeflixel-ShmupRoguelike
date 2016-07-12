#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_TextLineMetrics
#include <openfl/_legacy/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

Void TextLineMetrics_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading)
{
HX_STACK_FRAME("openfl._legacy.text.TextLineMetrics","new",0x14bc1477,"openfl._legacy.text.TextLineMetrics.new","openfl/_legacy/text/TextLineMetrics.hx",15,0xe204f258)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_ascent,"ascent")
HX_STACK_ARG(__o_descent,"descent")
HX_STACK_ARG(__o_leading,"leading")
Float x = __o_x.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
Float ascent = __o_ascent.Default(0);
Float descent = __o_descent.Default(0);
Float leading = __o_leading.Default(0);
{
	HX_STACK_LINE(17)
	this->x = x;
	HX_STACK_LINE(18)
	this->width = width;
	HX_STACK_LINE(19)
	this->height = height;
	HX_STACK_LINE(20)
	this->ascent = ascent;
	HX_STACK_LINE(21)
	this->descent = descent;
	HX_STACK_LINE(22)
	this->leading = leading;
}
;
	return null();
}

//TextLineMetrics_obj::~TextLineMetrics_obj() { }

Dynamic TextLineMetrics_obj::__CreateEmpty() { return  new TextLineMetrics_obj; }
hx::ObjectPtr< TextLineMetrics_obj > TextLineMetrics_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_ascent,hx::Null< Float >  __o_descent,hx::Null< Float >  __o_leading)
{  hx::ObjectPtr< TextLineMetrics_obj > _result_ = new TextLineMetrics_obj();
	_result_->__construct(__o_x,__o_width,__o_height,__o_ascent,__o_descent,__o_leading);
	return _result_;}

Dynamic TextLineMetrics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLineMetrics_obj > _result_ = new TextLineMetrics_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}


TextLineMetrics_obj::TextLineMetrics_obj()
{
}

Dynamic TextLineMetrics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return ascent; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return descent; }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextLineMetrics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLineMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"));
	outFields->push(HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,ascent),HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,descent),HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"),
	HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#endif

hx::Class TextLineMetrics_obj::__mClass;

void TextLineMetrics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.text.TextLineMetrics","\x05","\x0d","\xf5","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLineMetrics_obj >;
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
} // end namespace text
