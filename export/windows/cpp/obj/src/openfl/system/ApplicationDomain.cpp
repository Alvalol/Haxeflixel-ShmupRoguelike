#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl_system_ApplicationDomain
#include <openfl/system/ApplicationDomain.h>
#endif
namespace openfl{
namespace _system{

Void ApplicationDomain_obj::__construct(::openfl::_system::ApplicationDomain parentDomain)
{
HX_STACK_FRAME("openfl.system.ApplicationDomain","new",0x87171265,"openfl.system.ApplicationDomain.new","openfl/system/ApplicationDomain.hx",15,0xc87242cb)
HX_STACK_THIS(this)
HX_STACK_ARG(parentDomain,"parentDomain")
{
	HX_STACK_LINE(17)
	bool tmp = (parentDomain != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(19)
		this->parentDomain = parentDomain;
	}
	else{
		HX_STACK_LINE(23)
		::openfl::_system::ApplicationDomain tmp1 = ::openfl::_system::ApplicationDomain_obj::currentDomain;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		this->parentDomain = tmp1;
	}
}
;
	return null();
}

//ApplicationDomain_obj::~ApplicationDomain_obj() { }

Dynamic ApplicationDomain_obj::__CreateEmpty() { return  new ApplicationDomain_obj; }
hx::ObjectPtr< ApplicationDomain_obj > ApplicationDomain_obj::__new(::openfl::_system::ApplicationDomain parentDomain)
{  hx::ObjectPtr< ApplicationDomain_obj > _result_ = new ApplicationDomain_obj();
	_result_->__construct(parentDomain);
	return _result_;}

Dynamic ApplicationDomain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationDomain_obj > _result_ = new ApplicationDomain_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::hx::Class ApplicationDomain_obj::getDefinition( ::String name){
	HX_STACK_FRAME("openfl.system.ApplicationDomain","getDefinition",0xdd020c0e,"openfl.system.ApplicationDomain.getDefinition","openfl/system/ApplicationDomain.hx",30,0xc87242cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(32)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,getDefinition,return )

bool ApplicationDomain_obj::hasDefinition( ::String name){
	HX_STACK_FRAME("openfl.system.ApplicationDomain","hasDefinition",0x9ae667d2,"openfl.system.ApplicationDomain.hasDefinition","openfl/system/ApplicationDomain.hx",37,0xc87242cb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(39)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,hasDefinition,return )

::openfl::_system::ApplicationDomain ApplicationDomain_obj::currentDomain;


ApplicationDomain_obj::ApplicationDomain_obj()
{
}

void ApplicationDomain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationDomain);
	HX_MARK_MEMBER_NAME(parentDomain,"parentDomain");
	HX_MARK_END_CLASS();
}

void ApplicationDomain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentDomain,"parentDomain");
}

Dynamic ApplicationDomain_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { return parentDomain; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"hasDefinition") ) { return hasDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ApplicationDomain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { outValue = currentDomain; return true;  }
	}
	return false;
}

Dynamic ApplicationDomain_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { parentDomain=inValue.Cast< ::openfl::_system::ApplicationDomain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ApplicationDomain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=ioValue.Cast< ::openfl::_system::ApplicationDomain >(); return true; }
	}
	return false;
}

void ApplicationDomain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parentDomain","\x0e","\x66","\xea","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_system::ApplicationDomain*/ ,(int)offsetof(ApplicationDomain_obj,parentDomain),HX_HCSTRING("parentDomain","\x0e","\x66","\xea","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_system::ApplicationDomain*/ ,(void *) &ApplicationDomain_obj::currentDomain,HX_HCSTRING("currentDomain","\x5d","\x32","\xdd","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parentDomain","\x0e","\x66","\xea","\x3f"),
	HX_HCSTRING("getDefinition","\xc9","\x31","\x80","\x48"),
	HX_HCSTRING("hasDefinition","\x8d","\x8d","\x64","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

#endif

hx::Class ApplicationDomain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("currentDomain","\x5d","\x32","\xdd","\x10"),
	::String(null()) };

void ApplicationDomain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.system.ApplicationDomain","\xf3","\xfb","\x62","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationDomain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationDomain_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ApplicationDomain_obj >;
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

void ApplicationDomain_obj::__boot()
{
	currentDomain= ::openfl::_system::ApplicationDomain_obj::__new(null());
}

} // end namespace openfl
} // end namespace system
