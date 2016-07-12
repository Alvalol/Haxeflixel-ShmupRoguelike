#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Memory
#include <openfl/_legacy/Memory.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
namespace openfl{
namespace _legacy{

Void Memory_obj::__construct()
{
	return null();
}

//Memory_obj::~Memory_obj() { }

Dynamic Memory_obj::__CreateEmpty() { return  new Memory_obj; }
hx::ObjectPtr< Memory_obj > Memory_obj::__new()
{  hx::ObjectPtr< Memory_obj > _result_ = new Memory_obj();
	_result_->__construct();
	return _result_;}

Dynamic Memory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Memory_obj > _result_ = new Memory_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::utils::ByteArray Memory_obj::gcRef;

int Memory_obj::len;

Void Memory_obj::select( ::openfl::_legacy::utils::ByteArray bytes){
{
		HX_STACK_FRAME("openfl._legacy.Memory","select",0x0e2e4245,"openfl._legacy.Memory.select","openfl/_legacy/Memory.hx",23,0x38405097)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(38)
		::openfl::_legacy::Memory_obj::gcRef = bytes;
		HX_STACK_LINE(39)
		bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		if ((tmp)){
			HX_STACK_LINE(41)
			::__hxcpp_memory_clear();
		}
		else{
			HX_STACK_LINE(45)
			::__hxcpp_memory_select(bytes->b);
		}
		HX_STACK_LINE(50)
		bool tmp1 = (bytes == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		if ((tmp1)){
			HX_STACK_LINE(52)
			::openfl::_legacy::Memory_obj::len = (int)0;
		}
		else{
			HX_STACK_LINE(56)
			::openfl::_legacy::Memory_obj::len = bytes->length;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,select,(void))

int Memory_obj::getByte( int addr){
	HX_STACK_FRAME("openfl._legacy.Memory","getByte",0xeb6d0755,"openfl._legacy.Memory.getByte","openfl/_legacy/Memory.hx",217,0x38405097)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(220)
	int tmp = ::__hxcpp_memory_get_byte(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getByte,return )

Float Memory_obj::getDouble( int addr){
	HX_STACK_FRAME("openfl._legacy.Memory","getDouble",0x7199809e,"openfl._legacy.Memory.getDouble","openfl/_legacy/Memory.hx",225,0x38405097)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(228)
	Float tmp = ::__hxcpp_memory_get_double(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getDouble,return )

Float Memory_obj::getFloat( int addr){
	HX_STACK_FRAME("openfl._legacy.Memory","getFloat",0x58f820af,"openfl._legacy.Memory.getFloat","openfl/_legacy/Memory.hx",233,0x38405097)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(236)
	Float tmp = ::__hxcpp_memory_get_float(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getFloat,return )

int Memory_obj::getI32( int addr){
	HX_STACK_FRAME("openfl._legacy.Memory","getI32",0x471a399b,"openfl._legacy.Memory.getI32","openfl/_legacy/Memory.hx",241,0x38405097)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(244)
	int tmp = ::__hxcpp_memory_get_i32(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getI32,return )

int Memory_obj::getUI16( int addr){
	HX_STACK_FRAME("openfl._legacy.Memory","getUI16",0xf7d76e66,"openfl._legacy.Memory.getUI16","openfl/_legacy/Memory.hx",249,0x38405097)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(252)
	int tmp = ::__hxcpp_memory_get_ui16(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getUI16,return )

Void Memory_obj::setByte( int addr,int v){
{
		HX_STACK_FRAME("openfl._legacy.Memory","setByte",0xde6e9861,"openfl._legacy.Memory.setByte","openfl/_legacy/Memory.hx",260,0x38405097)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(260)
		::__hxcpp_memory_set_byte(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setByte,(void))

Void Memory_obj::setDouble( int addr,Float v){
{
		HX_STACK_FRAME("openfl._legacy.Memory","setDouble",0x54ea6caa,"openfl._legacy.Memory.setDouble","openfl/_legacy/Memory.hx",268,0x38405097)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(268)
		::__hxcpp_memory_set_double(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setDouble,(void))

Void Memory_obj::setFloat( int addr,Float v){
{
		HX_STACK_FRAME("openfl._legacy.Memory","setFloat",0x07557a23,"openfl._legacy.Memory.setFloat","openfl/_legacy/Memory.hx",276,0x38405097)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(276)
		::__hxcpp_memory_set_float(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setFloat,(void))

Void Memory_obj::setI16( int addr,int v){
{
		HX_STACK_FRAME("openfl._legacy.Memory","setI16",0x13628c55,"openfl._legacy.Memory.setI16","openfl/_legacy/Memory.hx",284,0x38405097)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(284)
		::__hxcpp_memory_set_i16(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI16,(void))

Void Memory_obj::setI32( int addr,int v){
{
		HX_STACK_FRAME("openfl._legacy.Memory","setI32",0x13628e0f,"openfl._legacy.Memory.setI32","openfl/_legacy/Memory.hx",292,0x38405097)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(292)
		::__hxcpp_memory_set_i32(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI32,(void))


Memory_obj::Memory_obj()
{
}

bool Memory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { outValue = len; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { outValue = gcRef; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getI32") ) { outValue = getI32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setI16") ) { outValue = setI16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setI32") ) { outValue = setI32_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { outValue = getByte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUI16") ) { outValue = getUI16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setByte") ) { outValue = setByte_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat") ) { outValue = setFloat_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setDouble") ) { outValue = setDouble_dyn(); return true;  }
	}
	return false;
}

bool Memory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { gcRef=ioValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(void *) &Memory_obj::gcRef,HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f")},
	{hx::fsInt,(void *) &Memory_obj::len,HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_MARK_MEMBER_NAME(Memory_obj::len,"len");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_VISIT_MEMBER_NAME(Memory_obj::len,"len");
};

#endif

hx::Class Memory_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("getByte","\xbe","\xce","\xa5","\x13"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getI32","\x52","\x12","\x1f","\xa3"),
	HX_HCSTRING("getUI16","\xcf","\x35","\x10","\x20"),
	HX_HCSTRING("setByte","\xca","\x5f","\xa7","\x06"),
	HX_HCSTRING("setDouble","\x53","\xa0","\x72","\x92"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("setI16","\x0c","\x65","\x67","\x6f"),
	HX_HCSTRING("setI32","\xc6","\x66","\x67","\x6f"),
	::String(null()) };

void Memory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.Memory","\x05","\xaa","\x45","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Memory_obj::__GetStatic;
	__mClass->mSetStaticField = &Memory_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Memory_obj >;
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

} // end namespace openfl
} // end namespace _legacy
