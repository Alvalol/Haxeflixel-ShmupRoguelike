#include <hxcpp.h>

#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace errors{

Void Error_obj::__construct(::String __o_message,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.errors.Error","new",0xefad98b5,"openfl.errors.Error.new","openfl/errors/Error.hx",17,0x5096467b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(__o_id,"id")
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(19)
	this->message = message;
	HX_STACK_LINE(20)
	this->errorID = id;
	HX_STACK_LINE(21)
	this->name = HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06");
}
;
	return null();
}

//Error_obj::~Error_obj() { }

Dynamic Error_obj::__CreateEmpty() { return  new Error_obj; }
hx::ObjectPtr< Error_obj > Error_obj::__new(::String __o_message,hx::Null< int >  __o_id)
{  hx::ObjectPtr< Error_obj > _result_ = new Error_obj();
	_result_->__construct(__o_message,__o_id);
	return _result_;}

Dynamic Error_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Error_obj > _result_ = new Error_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Error_obj::getStackTrace( ){
	HX_STACK_FRAME("openfl.errors.Error","getStackTrace",0x0bedf2e8,"openfl.errors.Error.getStackTrace","openfl/errors/Error.hx",26,0x5096467b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::String tmp = ::haxe::CallStack_obj::toString(::haxe::CallStack_obj::exceptionStack());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,getStackTrace,return )

::String Error_obj::toString( ){
	HX_STACK_FRAME("openfl.errors.Error","toString",0x62f5b437,"openfl.errors.Error.toString","openfl/errors/Error.hx",33,0x5096467b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::String tmp = this->message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(37)
		::String tmp2 = this->message;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		return tmp2;
	}
	else{
		HX_STACK_LINE(41)
		return HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06");
	}
	HX_STACK_LINE(35)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,toString,return )

::String Error_obj::DEFAULT_TO_STRING;


Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(errorID,"errorID");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errorID,"errorID");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Error_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStackTrace") ) { return getStackTrace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Error_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Error_obj,errorID),HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")},
	{hx::fsString,(int)offsetof(Error_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsString,(int)offsetof(Error_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Error_obj::DEFAULT_TO_STRING,HX_HCSTRING("DEFAULT_TO_STRING","\xf7","\x2d","\xdc","\x05")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("getStackTrace","\x53","\x8e","\xb0","\x85"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Error_obj::DEFAULT_TO_STRING,"DEFAULT_TO_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Error_obj::DEFAULT_TO_STRING,"DEFAULT_TO_STRING");
};

#endif

hx::Class Error_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_TO_STRING","\xf7","\x2d","\xdc","\x05"),
	::String(null()) };

void Error_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.Error","\x43","\x1a","\x04","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Error_obj >;
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

void Error_obj::__boot()
{
	DEFAULT_TO_STRING= HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06");
}

} // end namespace openfl
} // end namespace errors
