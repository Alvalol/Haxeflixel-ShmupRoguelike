#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io__Process_Stdout
#include <sys/io/_Process/Stdout.h>
#endif
namespace sys{
namespace io{
namespace _Process{

Void Stdout_obj::__construct(Dynamic p,bool out)
{
HX_STACK_FRAME("sys.io._Process.Stdout","new",0xc765a8f4,"sys.io._Process.Stdout.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",64,0x19dec630)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
HX_STACK_ARG(out,"out")
{
	HX_STACK_LINE(65)
	this->p = p;
	HX_STACK_LINE(66)
	this->out = out;
	HX_STACK_LINE(67)
	::haxe::io::Bytes tmp = ::haxe::io::Bytes_obj::alloc((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	this->buf = tmp;
}
;
	return null();
}

//Stdout_obj::~Stdout_obj() { }

Dynamic Stdout_obj::__CreateEmpty() { return  new Stdout_obj; }
hx::ObjectPtr< Stdout_obj > Stdout_obj::__new(Dynamic p,bool out)
{  hx::ObjectPtr< Stdout_obj > _result_ = new Stdout_obj();
	_result_->__construct(p,out);
	return _result_;}

Dynamic Stdout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stdout_obj > _result_ = new Stdout_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int Stdout_obj::readByte( ){
	HX_STACK_FRAME("sys.io._Process.Stdout","readByte",0xa72b886a,"sys.io._Process.Stdout.readByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",70,0x19dec630)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::haxe::io::Bytes tmp = this->buf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = this->readBytes(tmp,(int)0,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(72)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
	}
	HX_STACK_LINE(73)
	::haxe::io::Bytes tmp3 = this->buf;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	int tmp4 = tmp3->b->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	return tmp4;
}


int Stdout_obj::readBytes( ::haxe::io::Bytes str,int pos,int len){
	HX_STACK_FRAME("sys.io._Process.Stdout","readBytes",0x9eebd4c9,"sys.io._Process.Stdout.readBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/Process.hx",76,0x19dec630)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(77)
	int result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(78)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(79)
		bool tmp = this->out;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(79)
			tmp1 = ::sys::io::_Process::Stdout_obj::_stdout_read_dyn();
		}
		else{
			HX_STACK_LINE(79)
			tmp1 = ::sys::io::_Process::Stdout_obj::_stderr_read_dyn();
		}
		HX_STACK_LINE(79)
		Dynamic tmp2 = this->p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		int tmp5 = tmp1(tmp2,str->b,tmp3,tmp4).Cast< int >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		result = tmp5;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(81)
				::haxe::io::Eof tmp = ::haxe::io::Eof_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(81)
				HX_STACK_DO_THROW(tmp);
			}
		}
	}
	HX_STACK_LINE(83)
	bool tmp = (result == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(83)
		::haxe::io::Eof tmp1 = ::haxe::io::Eof_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(84)
	int tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC3(Stdout_obj,readBytes,return )

Dynamic Stdout_obj::_stdout_read;

Dynamic Stdout_obj::_stderr_read;


Stdout_obj::Stdout_obj()
{
}

void Stdout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stdout);
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Stdout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

Dynamic Stdout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return out; }
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stdout_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_stdout_read") ) { outValue = _stdout_read; return true;  }
		if (HX_FIELD_EQ(inName,"_stderr_read") ) { outValue = _stderr_read; return true;  }
	}
	return false;
}

Dynamic Stdout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stdout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_stdout_read") ) { _stdout_read=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_stderr_read") ) { _stderr_read=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Stdout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"));
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stdout_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stdout_obj,out),HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Stdout_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Stdout_obj::_stdout_read,HX_HCSTRING("_stdout_read","\x8b","\x35","\x4c","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stdout_obj::_stderr_read,HX_HCSTRING("_stderr_read","\x54","\xa3","\xdc","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"),
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stdout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stdout_obj::_stdout_read,"_stdout_read");
	HX_MARK_MEMBER_NAME(Stdout_obj::_stderr_read,"_stderr_read");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stdout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stdout_obj::_stdout_read,"_stdout_read");
	HX_VISIT_MEMBER_NAME(Stdout_obj::_stderr_read,"_stderr_read");
};

#endif

hx::Class Stdout_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_stdout_read","\x8b","\x35","\x4c","\x00"),
	HX_HCSTRING("_stderr_read","\x54","\xa3","\xdc","\x7a"),
	::String(null()) };

void Stdout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io._Process.Stdout","\x02","\x5f","\x41","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stdout_obj::__GetStatic;
	__mClass->mSetStaticField = &Stdout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stdout_obj >;
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

void Stdout_obj::__boot()
{
	_stdout_read= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("process_stdout_read","\x7a","\x42","\x78","\xc6"),(int)4);
	_stderr_read= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("process_stderr_read","\x43","\xb0","\x08","\x41"),(int)4);
}

} // end namespace sys
} // end namespace io
} // end namespace _Process
