#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
namespace cpp{
namespace vm{

Void Mutex_obj::__construct()
{
HX_STACK_FRAME("cpp.vm.Mutex","new",0xabb3ca05,"cpp.vm.Mutex.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Mutex.hx",27,0x7b4ed3f2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	Dynamic tmp = ::__hxcpp_mutex_create();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->m = tmp;
}
;
	return null();
}

//Mutex_obj::~Mutex_obj() { }

Dynamic Mutex_obj::__CreateEmpty() { return  new Mutex_obj; }
hx::ObjectPtr< Mutex_obj > Mutex_obj::__new()
{  hx::ObjectPtr< Mutex_obj > _result_ = new Mutex_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mutex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mutex_obj > _result_ = new Mutex_obj();
	_result_->__construct();
	return _result_;}

Void Mutex_obj::acquire( ){
{
		HX_STACK_FRAME("cpp.vm.Mutex","acquire",0xc3527bfb,"cpp.vm.Mutex.acquire","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Mutex.hx",31,0x7b4ed3f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::__hxcpp_mutex_acquire(this->m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,acquire,(void))

Void Mutex_obj::release( ){
{
		HX_STACK_FRAME("cpp.vm.Mutex","release",0x675bb5ec,"cpp.vm.Mutex.release","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Mutex.hx",37,0x7b4ed3f2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::__hxcpp_mutex_release(this->m);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mutex_obj,release,(void))


Mutex_obj::Mutex_obj()
{
}

void Mutex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mutex);
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_END_CLASS();
}

void Mutex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m,"m");
}

Dynamic Mutex_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"acquire") ) { return acquire_dyn(); }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mutex_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mutex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Mutex_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("acquire","\xd6","\x4b","\xe4","\xb4"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mutex_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mutex_obj::__mClass,"__mClass");
};

#endif

hx::Class Mutex_obj::__mClass;

void Mutex_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Mutex","\x93","\x63","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mutex_obj >;
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

} // end namespace cpp
} // end namespace vm
