#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__TextFieldType_TextFieldType_Impl_
#include <openfl/text/_TextFieldType/TextFieldType_Impl_.h>
#endif
namespace openfl{
namespace text{
namespace _TextFieldType{

Void TextFieldType_Impl__obj::__construct()
{
	return null();
}

//TextFieldType_Impl__obj::~TextFieldType_Impl__obj() { }

Dynamic TextFieldType_Impl__obj::__CreateEmpty() { return  new TextFieldType_Impl__obj; }
hx::ObjectPtr< TextFieldType_Impl__obj > TextFieldType_Impl__obj::__new()
{  hx::ObjectPtr< TextFieldType_Impl__obj > _result_ = new TextFieldType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFieldType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextFieldType_Impl__obj > _result_ = new TextFieldType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TextFieldType_Impl__obj::DYNAMIC;

Dynamic TextFieldType_Impl__obj::INPUT;

Dynamic TextFieldType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.text._TextFieldType.TextFieldType_Impl_","fromString",0x3beed305,"openfl.text._TextFieldType.TextFieldType_Impl_.fromString","openfl/text/TextFieldType.hx",9,0xaebfe8fa)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("dynamic","\x7f","\x9f","\x15","\x36"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)1));
	}
	else  {
		HX_STACK_LINE(15)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(11)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldType_Impl__obj,fromString,return )

::String TextFieldType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.text._TextFieldType.TextFieldType_Impl_","toString",0x7192f756,"openfl.text._TextFieldType.TextFieldType_Impl_.toString","openfl/text/TextFieldType.hx",21,0xaebfe8fa)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("dynamic","\x7f","\x9f","\x15","\x36");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe");
		}
		;break;
		default: {
			HX_STACK_LINE(27)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextFieldType_Impl__obj,toString,return )


TextFieldType_Impl__obj::TextFieldType_Impl__obj()
{
}

bool TextFieldType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldType_Impl__obj::DYNAMIC,HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextFieldType_Impl__obj::INPUT,HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFieldType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFieldType_Impl__obj::DYNAMIC,"DYNAMIC");
	HX_MARK_MEMBER_NAME(TextFieldType_Impl__obj::INPUT,"INPUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFieldType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFieldType_Impl__obj::DYNAMIC,"DYNAMIC");
	HX_VISIT_MEMBER_NAME(TextFieldType_Impl__obj::INPUT,"INPUT");
};

#endif

hx::Class TextFieldType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DYNAMIC","\x5f","\x73","\xe9","\xb5"),
	HX_HCSTRING("INPUT","\xea","\xfb","\x0b","\x3c"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void TextFieldType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._TextFieldType.TextFieldType_Impl_","\x04","\xb7","\x37","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextFieldType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFieldType_Impl__obj >;
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

void TextFieldType_Impl__obj::__boot()
{
	DYNAMIC= ((Dynamic)((int)0));
	INPUT= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace text
} // end namespace _TextFieldType
