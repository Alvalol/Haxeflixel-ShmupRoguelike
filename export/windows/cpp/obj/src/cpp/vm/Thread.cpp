#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
namespace cpp{
namespace vm{

Void Thread_obj::__construct(Dynamic h)
{
HX_STACK_FRAME("cpp.vm.Thread","new",0x66262c28,"cpp.vm.Thread.new","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Thread.hx",31,0xd8d7e381)
HX_STACK_THIS(this)
HX_STACK_ARG(h,"h")
{
	HX_STACK_LINE(31)
	this->handle = h;
}
;
	return null();
}

//Thread_obj::~Thread_obj() { }

Dynamic Thread_obj::__CreateEmpty() { return  new Thread_obj; }
hx::ObjectPtr< Thread_obj > Thread_obj::__new(Dynamic h)
{  hx::ObjectPtr< Thread_obj > _result_ = new Thread_obj();
	_result_->__construct(h);
	return _result_;}

Dynamic Thread_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Thread_obj > _result_ = new Thread_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Thread_obj::sendMessage( Dynamic msg){
{
		HX_STACK_FRAME("cpp.vm.Thread","sendMessage",0x48dced27,"cpp.vm.Thread.sendMessage","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Thread.hx",38,0xd8d7e381)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(38)
		::__hxcpp_thread_send(this->handle,msg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,sendMessage,(void))

int Thread_obj::__compare( Dynamic t){
	HX_STACK_FRAME("cpp.vm.Thread","__compare",0x3204cb4d,"cpp.vm.Thread.__compare","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Thread.hx",65,0xd8d7e381)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(66)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Dynamic tmp1 = t->__Field(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	if ((tmp2)){
		HX_STACK_LINE(66)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(66)
		tmp3 = (int)1;
	}
	HX_STACK_LINE(66)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,__compare,return )

::cpp::vm::Thread Thread_obj::current( ){
	HX_STACK_FRAME("cpp.vm.Thread","current",0x21a37c01,"cpp.vm.Thread.current","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Thread.hx",45,0xd8d7e381)
	HX_STACK_LINE(46)
	Dynamic tmp = ::__hxcpp_thread_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Thread_obj,current,return )

::cpp::vm::Thread Thread_obj::create( Dynamic callb){
	HX_STACK_FRAME("cpp.vm.Thread","create",0xb01a9834,"cpp.vm.Thread.create","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Thread.hx",52,0xd8d7e381)
	HX_STACK_ARG(callb,"callb")
	HX_STACK_LINE(53)
	Dynamic tmp = ::__hxcpp_thread_create(callb);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	::cpp::vm::Thread tmp1 = ::cpp::vm::Thread_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,create,return )

Dynamic Thread_obj::readMessage( bool block){
	HX_STACK_FRAME("cpp.vm.Thread","readMessage",0x11bc2cd9,"cpp.vm.Thread.readMessage","C:\\HaxeToolkit\\haxe\\std/cpp/vm/Thread.hx",61,0xd8d7e381)
	HX_STACK_ARG(block,"block")
	HX_STACK_LINE(62)
	Dynamic tmp = ::__hxcpp_thread_read_message(block);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Thread_obj,readMessage,return )


Thread_obj::Thread_obj()
{
}

void Thread_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Thread);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Thread_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Thread_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__compare") ) { return __compare_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sendMessage") ) { return sendMessage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Thread_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readMessage") ) { outValue = readMessage_dyn(); return true;  }
	}
	return false;
}

Dynamic Thread_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Thread_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Thread_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("sendMessage","\x5f","\x89","\x1d","\x24"),
	HX_HCSTRING("__compare","\x85","\x69","\xb7","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Thread_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Thread_obj::__mClass,"__mClass");
};

#endif

hx::Class Thread_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("readMessage","\x11","\xc9","\xfc","\xec"),
	::String(null()) };

void Thread_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cpp.vm.Thread","\x36","\x38","\xcb","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Thread_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Thread_obj >;
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
