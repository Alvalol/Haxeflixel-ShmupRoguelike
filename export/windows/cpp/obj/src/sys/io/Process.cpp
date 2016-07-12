#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdin
#include <sys/io/_Process/Stdin.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdout
#include <sys/io/_Process/Stdout.h>
#endif
namespace sys{
namespace io{

Void Process_obj::__construct(::String cmd,Array< ::String > args)
{
HX_STACK_FRAME("sys.io.Process","new",0x849b4c7a,"sys.io.Process.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",100,0x19dec630)
HX_STACK_THIS(this)
HX_STACK_ARG(cmd,"cmd")
HX_STACK_ARG(args,"args")
{
	HX_STACK_LINE(101)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(101)
		::String tmp1 = cmd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp = ::sys::io::Process_obj::_run(tmp1,args);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(101)
				::String tmp1 = (HX_HCSTRING("Process creation failure : ","\xcc","\xfa","\x44","\xa5") + cmd);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(101)
				HX_STACK_DO_THROW(tmp1);
			}
		}
	}
	HX_STACK_LINE(101)
	this->p = tmp;
	HX_STACK_LINE(102)
	Dynamic tmp1 = this->p;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::sys::io::_Process::Stdin tmp2 = ::sys::io::_Process::Stdin_obj::__new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	this->_stdin = tmp2;
	HX_STACK_LINE(103)
	Dynamic tmp3 = this->p;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	::sys::io::_Process::Stdout tmp4 = ::sys::io::_Process::Stdout_obj::__new(tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	this->_stdout = tmp4;
	HX_STACK_LINE(104)
	Dynamic tmp5 = this->p;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	::sys::io::_Process::Stdout tmp6 = ::sys::io::_Process::Stdout_obj::__new(tmp5,false);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	this->_stderr = tmp6;
}
;
	return null();
}

//Process_obj::~Process_obj() { }

Dynamic Process_obj::__CreateEmpty() { return  new Process_obj; }
hx::ObjectPtr< Process_obj > Process_obj::__new(::String cmd,Array< ::String > args)
{  hx::ObjectPtr< Process_obj > _result_ = new Process_obj();
	_result_->__construct(cmd,args);
	return _result_;}

Dynamic Process_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Process_obj > _result_ = new Process_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Process_obj::close( ){
{
		HX_STACK_FRAME("sys.io.Process","close",0x0a954e52,"sys.io.Process.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",115,0x19dec630)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		Dynamic tmp = this->p;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::sys::io::Process_obj::_close(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Process_obj,close,(void))

Dynamic Process_obj::_run;

Dynamic Process_obj::_close;


Process_obj::Process_obj()
{
}

void Process_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Process);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(_stdout,"stdout");
	HX_MARK_MEMBER_NAME(_stderr,"stderr");
	HX_MARK_MEMBER_NAME(_stdin,"stdin");
	HX_MARK_END_CLASS();
}

void Process_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(_stdout,"stdout");
	HX_VISIT_MEMBER_NAME(_stderr,"stderr");
	HX_VISIT_MEMBER_NAME(_stdin,"stdin");
}

Dynamic Process_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stdin") ) { return _stdin; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { return _stdout; }
		if (HX_FIELD_EQ(inName,"stderr") ) { return _stderr; }
	}
	return super::__Field(inName,inCallProp);
}

bool Process_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_run") ) { outValue = _run; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { outValue = _close; return true;  }
	}
	return false;
}

Dynamic Process_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stdin") ) { _stdin=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { _stdout=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stderr") ) { _stderr=inValue.Cast< ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Process_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_run") ) { _run=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_close") ) { _close=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Process_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"));
	outFields->push(HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"));
	outFields->push(HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Process_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Process_obj,_stdout),HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Process_obj,_stderr),HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07")},
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Process_obj,_stdin),HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Process_obj::_run,HX_HCSTRING("_run","\x4c","\x2c","\x22","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Process_obj::_close,HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("stdout","\xcb","\xbf","\xf3","\x07"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Process_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Process_obj::_run,"_run");
	HX_MARK_MEMBER_NAME(Process_obj::_close,"_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Process_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Process_obj::_run,"_run");
	HX_VISIT_MEMBER_NAME(Process_obj::_close,"_close");
};

#endif

hx::Class Process_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_run","\x4c","\x2c","\x22","\x3f"),
	HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44"),
	::String(null()) };

void Process_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.Process","\x88","\x47","\xb1","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Process_obj::__GetStatic;
	__mClass->mSetStaticField = &Process_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Process_obj >;
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

void Process_obj::__boot()
{
	_run= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("process_run","\x3b","\x32","\xe0","\x70"),(int)2);
	_close= ::cpp::Lib_obj::loadLazy(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("process_close","\xa8","\xfe","\x08","\xe6"),(int)1);
}

} // end namespace sys
} // end namespace io
