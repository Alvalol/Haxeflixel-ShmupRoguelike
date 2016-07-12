#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
namespace flixel{
namespace util{
namespace _FlxSignal{

Void FlxSignalHandler_obj::__construct(Dynamic listener,bool dispatchOnce)
{
HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalHandler","new",0x24d8c59b,"flixel.util._FlxSignal.FlxSignalHandler.new","flixel/util/FlxSignal.hx",78,0x3c758c5e)
HX_STACK_THIS(this)
HX_STACK_ARG(listener,"listener")
HX_STACK_ARG(dispatchOnce,"dispatchOnce")
{
	HX_STACK_LINE(81)
	this->dispatchOnce = false;
	HX_STACK_LINE(85)
	this->listener = listener;
	HX_STACK_LINE(86)
	this->dispatchOnce = dispatchOnce;
}
;
	return null();
}

//FlxSignalHandler_obj::~FlxSignalHandler_obj() { }

Dynamic FlxSignalHandler_obj::__CreateEmpty() { return  new FlxSignalHandler_obj; }
hx::ObjectPtr< FlxSignalHandler_obj > FlxSignalHandler_obj::__new(Dynamic listener,bool dispatchOnce)
{  hx::ObjectPtr< FlxSignalHandler_obj > _result_ = new FlxSignalHandler_obj();
	_result_->__construct(listener,dispatchOnce);
	return _result_;}

Dynamic FlxSignalHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSignalHandler_obj > _result_ = new FlxSignalHandler_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FlxSignalHandler_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxSignalHandler_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxSignalHandler_obj >(this); }
Void FlxSignalHandler_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util._FlxSignal.FlxSignalHandler","destroy",0xffcddbb5,"flixel.util._FlxSignal.FlxSignalHandler.destroy","flixel/util/FlxSignal.hx",91,0x3c758c5e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->listener = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSignalHandler_obj,destroy,(void))


FlxSignalHandler_obj::FlxSignalHandler_obj()
{
}

void FlxSignalHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSignalHandler);
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(dispatchOnce,"dispatchOnce");
	HX_MARK_END_CLASS();
}

void FlxSignalHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(dispatchOnce,"dispatchOnce");
}

Dynamic FlxSignalHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dispatchOnce") ) { return dispatchOnce; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSignalHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dispatchOnce") ) { dispatchOnce=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSignalHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("listener","\x74","\x00","\x32","\x38"));
	outFields->push(HX_HCSTRING("dispatchOnce","\x5b","\x5d","\x76","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxSignalHandler_obj,listener),HX_HCSTRING("listener","\x74","\x00","\x32","\x38")},
	{hx::fsBool,(int)offsetof(FlxSignalHandler_obj,dispatchOnce),HX_HCSTRING("dispatchOnce","\x5b","\x5d","\x76","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	HX_HCSTRING("dispatchOnce","\x5b","\x5d","\x76","\x64"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSignalHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSignalHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSignalHandler_obj::__mClass;

void FlxSignalHandler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util._FlxSignal.FlxSignalHandler","\x29","\x5c","\xd1","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSignalHandler_obj >;
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
} // end namespace util
} // end namespace _FlxSignal
