#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
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
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{
HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","new",0xc608e72f,"openfl._legacy.utils.ArrayBufferView.new","openfl/_legacy/utils/ArrayBufferView.hx",24,0xb2044664)
HX_STACK_THIS(this)
HX_STACK_ARG(lengthOrBuffer,"lengthOrBuffer")
HX_STACK_ARG(__o_byteOffset,"byteOffset")
HX_STACK_ARG(length,"length")
int byteOffset = __o_byteOffset.Default(0);
{
	HX_STACK_LINE(26)
	Dynamic tmp = lengthOrBuffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	if ((tmp1)){
		HX_STACK_LINE(28)
		Dynamic tmp2 = lengthOrBuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		this->byteLength = tmp3;
		HX_STACK_LINE(29)
		this->byteOffset = (int)0;
		HX_STACK_LINE(30)
		Dynamic tmp4 = lengthOrBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		::openfl::_legacy::utils::ByteArray tmp6 = ::openfl::_legacy::utils::ByteArray_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		this->buffer = tmp6;
	}
	else{
		HX_STACK_LINE(34)
		this->buffer = lengthOrBuffer;
		HX_STACK_LINE(36)
		::openfl::_legacy::utils::ByteArray tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid input buffer","\x3f","\x39","\x2d","\x2c"));
		}
		HX_STACK_LINE(42)
		this->byteOffset = byteOffset;
		HX_STACK_LINE(44)
		int tmp4 = byteOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::openfl::_legacy::utils::ByteArray tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		if ((tmp7)){
			HX_STACK_LINE(46)
			HX_STACK_DO_THROW(HX_HCSTRING("Invalid starting position","\x80","\xe7","\xc8","\x7a"));
		}
		HX_STACK_LINE(50)
		bool tmp8 = (length == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		if ((tmp8)){
			HX_STACK_LINE(52)
			::openfl::_legacy::utils::ByteArray tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			int tmp10 = tmp9->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(52)
			int tmp11 = byteOffset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(52)
			int tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(52)
			this->byteLength = tmp12;
		}
		else{
			HX_STACK_LINE(56)
			this->byteLength = length;
			HX_STACK_LINE(58)
			int tmp9 = this->byteLength;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(58)
			int tmp10 = byteOffset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(58)
			int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(58)
			::openfl::_legacy::utils::ByteArray tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			int tmp13 = tmp12->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(58)
			bool tmp14 = (tmp11 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(58)
			if ((tmp14)){
				HX_STACK_LINE(60)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid buffer length","\xfd","\x68","\x79","\x28"));
			}
		}
	}
	HX_STACK_LINE(68)
	::openfl::_legacy::utils::ByteArray tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	tmp2->bigEndian = false;
	HX_STACK_LINE(71)
	::openfl::_legacy::utils::ByteArray tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	this->bytes = tmp3->b;
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(lengthOrBuffer,__o_byteOffset,length);
	return _result_;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > _result_ = new ArrayBufferView_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *ArrayBufferView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_legacy::utils::IMemoryRange_obj)) return operator ::openfl::_legacy::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

ArrayBufferView_obj::operator ::openfl::_legacy::utils::IMemoryRange_obj *()
	{ return new ::openfl::_legacy::utils::IMemoryRange_delegate_< ArrayBufferView_obj >(this); }
::openfl::_legacy::utils::ByteArray ArrayBufferView_obj::getByteBuffer( ){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getByteBuffer",0x3010f1ed,"openfl._legacy.utils.ArrayBufferView.getByteBuffer","openfl/_legacy/utils/ArrayBufferView.hx",77,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	::openfl::_legacy::utils::ByteArray tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

Float ArrayBufferView_obj::getFloat32( int position){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getFloat32",0x59ee0856,"openfl._legacy.utils.ArrayBufferView.getFloat32","openfl/_legacy/utils/ArrayBufferView.hx",84,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(87)
	Float tmp = ::__hxcpp_memory_get_float(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

int ArrayBufferView_obj::getInt16( int position){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getInt16",0x25f27bef,"openfl._legacy.utils.ArrayBufferView.getInt16","openfl/_legacy/utils/ArrayBufferView.hx",96,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(99)
	int tmp = ::__hxcpp_memory_get_i16(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt16,return )

int ArrayBufferView_obj::getInt32( int position){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getInt32",0x25f27da9,"openfl._legacy.utils.ArrayBufferView.getInt32","openfl/_legacy/utils/ArrayBufferView.hx",108,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(111)
	int tmp = ::__hxcpp_memory_get_i32(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt32,return )

int ArrayBufferView_obj::getLength( ){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getLength",0x0ee2ba2b,"openfl._legacy.utils.ArrayBufferView.getLength","openfl/_legacy/utils/ArrayBufferView.hx",120,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	int tmp = this->byteLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

Dynamic ArrayBufferView_obj::getNativePointer( ){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getNativePointer",0xd6cecd41,"openfl._legacy.utils.ArrayBufferView.getNativePointer","openfl/_legacy/utils/ArrayBufferView.hx",127,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	::openfl::_legacy::utils::ByteArray tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Dynamic tmp1 = tmp->getNativePointer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getNativePointer,return )

int ArrayBufferView_obj::getStart( ){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getStart",0xebdd5ebd,"openfl._legacy.utils.ArrayBufferView.getStart","openfl/_legacy/utils/ArrayBufferView.hx",138,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	int tmp = this->byteOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

int ArrayBufferView_obj::getUInt8( int position){
	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getUInt8",0xf64839d9,"openfl._legacy.utils.ArrayBufferView.getUInt8","openfl/_legacy/utils/ArrayBufferView.hx",145,0xb2044664)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(148)
	int tmp = ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt8,return )

Void ArrayBufferView_obj::setFloat32( int position,Float value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setFloat32",0x5d6ba6ca,"openfl._legacy.utils.ArrayBufferView.setFloat32","openfl/_legacy/utils/ArrayBufferView.hx",160,0xb2044664)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(160)
		::__hxcpp_memory_set_float(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))

Void ArrayBufferView_obj::setInt16( int position,int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setInt16",0xd44fd563,"openfl._legacy.utils.ArrayBufferView.setInt16","openfl/_legacy/utils/ArrayBufferView.hx",172,0xb2044664)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(172)
		::__hxcpp_memory_set_i16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt16,(void))

Void ArrayBufferView_obj::setInt32( int position,int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setInt32",0xd44fd71d,"openfl._legacy.utils.ArrayBufferView.setInt32","openfl/_legacy/utils/ArrayBufferView.hx",184,0xb2044664)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(184)
		::__hxcpp_memory_set_i32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt32,(void))

Void ArrayBufferView_obj::setUInt8( int position,int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setUInt8",0xa4a5934d,"openfl._legacy.utils.ArrayBufferView.setUInt8","openfl/_legacy/utils/ArrayBufferView.hx",196,0xb2044664)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(196)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt8,(void))

::String ArrayBufferView_obj::invalidDataIndex;


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { return getInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt8") ) { return getUInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return setInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt8") ) { return setUInt8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNativePointer") ) { return getNativePointer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayBufferView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { outValue = invalidDataIndex; return true;  }
	}
	return false;
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayBufferView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { invalidDataIndex=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ArrayBufferView_obj::invalidDataIndex,HX_HCSTRING("invalidDataIndex","\x91","\x8a","\x9d","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getNativePointer","\x70","\x39","\x53","\x7a"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("getUInt8","\x08","\x5f","\x4d","\xee"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("setUInt8","\x7c","\xb8","\xaa","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("invalidDataIndex","\x91","\x8a","\x9d","\x3b"),
	::String(null()) };

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.ArrayBufferView","\xbd","\x23","\x44","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferView_obj::__GetStatic;
	__mClass->mSetStaticField = &ArrayBufferView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
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

void ArrayBufferView_obj::__boot()
{
	invalidDataIndex= HX_HCSTRING("Invalid data index","\x45","\x2f","\x02","\x8f");
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
