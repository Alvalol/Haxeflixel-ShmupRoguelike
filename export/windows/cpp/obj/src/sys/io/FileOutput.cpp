#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace sys{
namespace io{

Void FileOutput_obj::__construct(Dynamic f)
{
HX_STACK_FRAME("sys.io.FileOutput","new",0x19e22a16,"sys.io.FileOutput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",31,0x32123c60)
HX_STACK_THIS(this)
HX_STACK_ARG(f,"f")
{
	HX_STACK_LINE(31)
	this->__f = f;
}
;
	return null();
}

//FileOutput_obj::~FileOutput_obj() { }

Dynamic FileOutput_obj::__CreateEmpty() { return  new FileOutput_obj; }
hx::ObjectPtr< FileOutput_obj > FileOutput_obj::__new(Dynamic f)
{  hx::ObjectPtr< FileOutput_obj > _result_ = new FileOutput_obj();
	_result_->__construct(f);
	return _result_;}

Dynamic FileOutput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileOutput_obj > _result_ = new FileOutput_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void FileOutput_obj::writeByte( int c){
{
		HX_STACK_FRAME("sys.io.FileOutput","writeByte",0x887099bd,"sys.io.FileOutput.writeByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",35,0x32123c60)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(35)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(35)
			Dynamic tmp = this->__f;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			int tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			::sys::io::FileOutput_obj::file_write_char(tmp,tmp1);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(35)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(35)
					::haxe::io::Error tmp1 = ::haxe::io::Error_obj::Custom(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(35)
					HX_STACK_DO_THROW(tmp1);
				}
			}
		}
	}
return null();
}


int FileOutput_obj::writeBytes( ::haxe::io::Bytes s,int p,int l){
	HX_STACK_FRAME("sys.io.FileOutput","writeBytes",0xda15ec16,"sys.io.FileOutput.writeBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",38,0x32123c60)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(39)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(39)
		Dynamic tmp1 = this->__f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		int tmp2 = p;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		int tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		tmp = ::sys::io::FileOutput_obj::file_write(tmp1,s->b,tmp2,tmp3);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(39)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(39)
				::haxe::io::Error tmp2 = ::haxe::io::Error_obj::Custom(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(39)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(39)
	return tmp;
}


Void FileOutput_obj::close( ){
{
		HX_STACK_FRAME("sys.io.FileOutput","close",0xa583caee,"sys.io.FileOutput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",46,0x32123c60)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::close();
		HX_STACK_LINE(48)
		Dynamic tmp = this->__f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::sys::io::FileOutput_obj::file_close(tmp);
	}
return null();
}


Dynamic FileOutput_obj::file_close;

Dynamic FileOutput_obj::file_write;

Dynamic FileOutput_obj::file_write_char;


FileOutput_obj::FileOutput_obj()
{
}

void FileOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileOutput);
	HX_MARK_MEMBER_NAME(__f,"__f");
	HX_MARK_END_CLASS();
}

void FileOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__f,"__f");
}

Dynamic FileOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return __f; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FileOutput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"file_close") ) { outValue = file_close; return true;  }
		if (HX_FIELD_EQ(inName,"file_write") ) { outValue = file_write; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"file_write_char") ) { outValue = file_write_char; return true;  }
	}
	return false;
}

Dynamic FileOutput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { __f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FileOutput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"file_close") ) { file_close=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_write") ) { file_write=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"file_write_char") ) { file_write_char=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void FileOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__f","\x46","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FileOutput_obj,__f),HX_HCSTRING("__f","\x46","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FileOutput_obj::file_close,HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileOutput_obj::file_write,HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FileOutput_obj::file_write_char,HX_HCSTRING("file_write_char","\x99","\xdd","\x02","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__f","\x46","\x69","\x48","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileOutput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileOutput_obj::file_close,"file_close");
	HX_MARK_MEMBER_NAME(FileOutput_obj::file_write,"file_write");
	HX_MARK_MEMBER_NAME(FileOutput_obj::file_write_char,"file_write_char");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileOutput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileOutput_obj::file_close,"file_close");
	HX_VISIT_MEMBER_NAME(FileOutput_obj::file_write,"file_write");
	HX_VISIT_MEMBER_NAME(FileOutput_obj::file_write_char,"file_write_char");
};

#endif

hx::Class FileOutput_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),
	HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78"),
	HX_HCSTRING("file_write_char","\x99","\xdd","\x02","\x5c"),
	::String(null()) };

void FileOutput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.FileOutput","\x24","\x27","\x1a","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileOutput_obj::__GetStatic;
	__mClass->mSetStaticField = &FileOutput_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileOutput_obj >;
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

void FileOutput_obj::__boot()
{
	file_close= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_close","\x75","\x32","\x3a","\xf0"),(int)1);
	file_write= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_write","\x9c","\x87","\x30","\x78"),(int)4);
	file_write_char= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_write_char","\x99","\xdd","\x02","\x5c"),(int)2);
}

} // end namespace sys
} // end namespace io
