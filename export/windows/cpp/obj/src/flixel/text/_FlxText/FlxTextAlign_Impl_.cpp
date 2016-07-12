#include <hxcpp.h>

#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
namespace flixel{
namespace text{
namespace _FlxText{

Void FlxTextAlign_Impl__obj::__construct()
{
	return null();
}

//FlxTextAlign_Impl__obj::~FlxTextAlign_Impl__obj() { }

Dynamic FlxTextAlign_Impl__obj::__CreateEmpty() { return  new FlxTextAlign_Impl__obj; }
hx::ObjectPtr< FlxTextAlign_Impl__obj > FlxTextAlign_Impl__obj::__new()
{  hx::ObjectPtr< FlxTextAlign_Impl__obj > _result_ = new FlxTextAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTextAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextAlign_Impl__obj > _result_ = new FlxTextAlign_Impl__obj();
	_result_->__construct();
	return _result_;}

::String FlxTextAlign_Impl__obj::LEFT;

::String FlxTextAlign_Impl__obj::CENTER;

::String FlxTextAlign_Impl__obj::RIGHT;

::String FlxTextAlign_Impl__obj::JUSTIFY;

::String FlxTextAlign_Impl__obj::fromOpenFL( ::String align){
	HX_STACK_FRAME("flixel.text._FlxText.FlxTextAlign_Impl_","fromOpenFL",0xc584ea03,"flixel.text._FlxText.FlxTextAlign_Impl_.fromOpenFL","flixel/text/FlxText.hx",1085,0xdf165a6e)
	HX_STACK_ARG(align,"align")
	HX_STACK_LINE(1086)
	::String tmp = align;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1086)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1086)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(1088)
		tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
	else if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(1089)
		tmp1 = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	}
	else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(1090)
		tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	}
	else if (  ( _switch_1==HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"))){
		HX_STACK_LINE(1091)
		tmp1 = HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83");
	}
	else  {
		HX_STACK_LINE(1092)
		tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
;
;
	HX_STACK_LINE(1086)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,fromOpenFL,return )

::String FlxTextAlign_Impl__obj::toOpenFL( ::String align){
	HX_STACK_FRAME("flixel.text._FlxText.FlxTextAlign_Impl_","toOpenFL",0xa34e3094,"flixel.text._FlxText.FlxTextAlign_Impl_.toOpenFL","flixel/text/FlxText.hx",1097,0xdf165a6e)
	HX_STACK_ARG(align,"align")
	HX_STACK_LINE(1098)
	::String tmp = align;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1098)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1098)
	::String _switch_2 = (tmp);
	if (  ( _switch_2==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(1100)
		tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
	else if (  ( _switch_2==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(1101)
		tmp1 = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	}
	else if (  ( _switch_2==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(1102)
		tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	}
	else if (  ( _switch_2==HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"))){
		HX_STACK_LINE(1103)
		tmp1 = HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83");
	}
	else  {
		HX_STACK_LINE(1104)
		tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
;
;
	HX_STACK_LINE(1098)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,toOpenFL,return )


FlxTextAlign_Impl__obj::FlxTextAlign_Impl__obj()
{
}

bool FlxTextAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toOpenFL") ) { outValue = toOpenFL_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromOpenFL") ) { outValue = fromOpenFL_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsString,(void *) &FlxTextAlign_Impl__obj::JUSTIFY,HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxTextAlign_Impl__obj::JUSTIFY,"JUSTIFY");
};

#endif

hx::Class FlxTextAlign_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03"),
	HX_HCSTRING("fromOpenFL","\x9a","\x4c","\xd8","\x64"),
	HX_HCSTRING("toOpenFL","\x6b","\xef","\xd2","\x48"),
	::String(null()) };

void FlxTextAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text._FlxText.FlxTextAlign_Impl_","\x65","\xe8","\xc9","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTextAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxTextAlign_Impl__obj >;
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

void FlxTextAlign_Impl__obj::__boot()
{
	LEFT= HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	CENTER= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	RIGHT= HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	JUSTIFY= HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83");
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
