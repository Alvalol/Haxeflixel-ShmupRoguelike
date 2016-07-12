#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_postprocess__PostProcess_Uniform
#include <flixel/effects/postprocess/_PostProcess/Uniform.h>
#endif
namespace flixel{
namespace effects{
namespace postprocess{
namespace _PostProcess{

Void Uniform_obj::__construct(int id,Float value)
{
HX_STACK_FRAME("flixel.effects.postprocess._PostProcess.Uniform","new",0xa5501325,"flixel.effects.postprocess._PostProcess.Uniform.new","flixel/effects/postprocess/PostProcess.hx",18,0x6a90b60f)
HX_STACK_THIS(this)
HX_STACK_ARG(id,"id")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(19)
	this->id = id;
	HX_STACK_LINE(20)
	this->value = value;
}
;
	return null();
}

//Uniform_obj::~Uniform_obj() { }

Dynamic Uniform_obj::__CreateEmpty() { return  new Uniform_obj; }
hx::ObjectPtr< Uniform_obj > Uniform_obj::__new(int id,Float value)
{  hx::ObjectPtr< Uniform_obj > _result_ = new Uniform_obj();
	_result_->__construct(id,value);
	return _result_;}

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Uniform_obj > _result_ = new Uniform_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


Uniform_obj::Uniform_obj()
{
}

Dynamic Uniform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Uniform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Uniform_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Uniform_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.postprocess._PostProcess.Uniform","\xb3","\x9c","\x5c","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniform_obj >;
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
} // end namespace effects
} // end namespace postprocess
} // end namespace _PostProcess
