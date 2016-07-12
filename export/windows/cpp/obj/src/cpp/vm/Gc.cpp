#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
namespace cpp{
namespace vm{

Void Gc_obj::__construct()
{
	return null();
}

//Gc_obj::~Gc_obj() { }

Dynamic Gc_obj::__CreateEmpty() { return  new Gc_obj; }
hx::ObjectPtr< Gc_obj > Gc_obj::__new()
{  hx::ObjectPtr< Gc_obj > _result_ = new Gc_obj();
	_result_->__construct();
	return _result_;}

Dynamic Gc_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gc_obj > _result_ = new Gc_obj();
	_result_->__construct();
	return _result_;}

Void Gc_obj::run( bool major){
{
		HX_STACK_FRAME("cpp.vm.Gc","run",0x3d3e0d65,"cpp.vm.Gc.run","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Gc.hx",38,0xeed1f8ef)
		HX_STACK_ARG(major,"major")
		HX_STACK_LINE(38)
		::__hxcpp_collect(major);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gc_obj,run,(void))


Gc_obj::Gc_obj()
{
}

bool Gc_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gc_obj::__mClass,"__mClass");
};

#endif

hx::Class Gc_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

void Gc_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Gc","\x88","\xf1","\xb3","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gc_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Gc_obj >;
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
