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
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#include <openfl/_legacy/utils/Float32Array.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void Float32Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{
HX_STACK_FRAME("openfl._legacy.utils.Float32Array","new",0xd627f831,"openfl._legacy.utils.Float32Array.new","openfl/_legacy/utils/Float32Array.hx",21,0x72368d3c)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(elements,"elements")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(23)
	this->BYTES_PER_ELEMENT = (int)4;
	HX_STACK_LINE(25)
	Dynamic tmp = bufferOrArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(27)
		Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		int tmp4 = this->BYTES_PER_ELEMENT;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		super::__construct(tmp5,null(),null());
		HX_STACK_LINE(28)
		Dynamic tmp6 = bufferOrArray;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		this->length = tmp7;
	}
	else{
		HX_STACK_LINE(30)
		Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp3)){
			HX_STACK_LINE(32)
			Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
			HX_STACK_LINE(34)
			bool tmp4 = (elements != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			if ((tmp4)){
				HX_STACK_LINE(36)
				this->length = elements;
			}
			else{
				HX_STACK_LINE(40)
				int tmp5 = (floats->length - start);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(40)
				this->length = tmp5;
			}
			HX_STACK_LINE(44)
			int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			int tmp6 = (int(tmp5) << int((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			super::__construct(tmp6,null(),null());
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(50)
				int _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(50)
				while((true)){
					HX_STACK_LINE(50)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(50)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(50)
					if ((tmp9)){
						HX_STACK_LINE(50)
						break;
					}
					HX_STACK_LINE(50)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(50)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(53)
					::__hxcpp_memory_set_float(this->bytes,(int(i) << int((int)2)),floats->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(96)
			Dynamic tmp4 = bufferOrArray;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			int tmp5 = start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			bool tmp6 = (elements != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			if ((tmp6)){
				HX_STACK_LINE(96)
				tmp7 = (elements * (int)4);
			}
			else{
				HX_STACK_LINE(96)
				tmp7 = null();
			}
			HX_STACK_LINE(96)
			super::__construct(tmp4,tmp5,tmp7);
			HX_STACK_LINE(98)
			int tmp8 = this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			int tmp9 = (int(tmp8) & int((int)3));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			if ((tmp10)){
				HX_STACK_LINE(100)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid array size","\x51","\x8f","\x9a","\x6e"));
			}
			HX_STACK_LINE(104)
			int tmp11 = this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			int tmp12 = (int(tmp11) >> int((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(104)
			this->length = tmp12;
			HX_STACK_LINE(106)
			int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(106)
			int tmp14 = (int(tmp13) << int((int)2));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			int tmp15 = this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			if ((tmp16)){
				HX_STACK_LINE(108)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid length multiple","\x41","\x25","\x0f","\xe4"));
			}
		}
	}
}
;
	return null();
}

//Float32Array_obj::~Float32Array_obj() { }

Dynamic Float32Array_obj::__CreateEmpty() { return  new Float32Array_obj; }
hx::ObjectPtr< Float32Array_obj > Float32Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{  hx::ObjectPtr< Float32Array_obj > _result_ = new Float32Array_obj();
	_result_->__construct(bufferOrArray,__o_start,elements);
	return _result_;}

Dynamic Float32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Array_obj > _result_ = new Float32Array_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Float32Array_obj::__setLength( int nbFloat){
{
		HX_STACK_FRAME("openfl._legacy.utils.Float32Array","__setLength",0xf4c533d9,"openfl._legacy.utils.Float32Array.__setLength","openfl/_legacy/utils/Float32Array.hx",116,0x72368d3c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nbFloat,"nbFloat")
		HX_STACK_LINE(117)
		this->length = nbFloat;
		HX_STACK_LINE(118)
		int tmp = (int(nbFloat) << int((int)2));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		this->byteLength = tmp;
		HX_STACK_LINE(119)
		::openfl::_legacy::utils::ByteArray tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		int tmp2 = this->byteLength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		tmp1->setLength(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__setLength,(void))

Float Float32Array_obj::__get( int index){
	HX_STACK_FRAME("openfl._legacy.utils.Float32Array","__get",0x03355f87,"openfl._legacy.utils.Float32Array.__get","openfl/_legacy/utils/Float32Array.hx",129,0x72368d3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(129)
	Float tmp = ::__hxcpp_memory_get_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__get,return )

Void Float32Array_obj::__set( int index,Float value){
{
		HX_STACK_FRAME("openfl._legacy.utils.Float32Array","__set",0x033e7a93,"openfl._legacy.utils.Float32Array.__set","openfl/_legacy/utils/Float32Array.hx",130,0x72368d3c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(130)
		::__hxcpp_memory_set_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,__set,(void))

int Float32Array_obj::SBYTES_PER_ELEMENT;

::openfl::_legacy::utils::Float32Array Float32Array_obj::fromMatrix( ::openfl::geom::Matrix3D matrix){
	HX_STACK_FRAME("openfl._legacy.utils.Float32Array","fromMatrix",0xad4a1f9a,"openfl._legacy.utils.Float32Array.fromMatrix","openfl/_legacy/utils/Float32Array.hx",122,0x72368d3c)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(124)
	::openfl::_legacy::utils::Float32Array tmp = ::openfl::_legacy::utils::Float32Array_obj::__new(matrix->rawData,null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,fromMatrix,return )


Float32Array_obj::Float32Array_obj()
{
}

Dynamic Float32Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__setLength") ) { return __setLength_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

bool Float32Array_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { outValue = fromMatrix_dyn(); return true;  }
	}
	return false;
}

Dynamic Float32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Float32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Float32Array_obj,BYTES_PER_ELEMENT),HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{hx::fsInt,(int)offsetof(Float32Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Float32Array_obj::SBYTES_PER_ELEMENT,HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("__setLength","\x08","\x53","\xdb","\x2c"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Float32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Float32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

hx::Class Float32Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2"),
	HX_HCSTRING("fromMatrix","\x4b","\x3b","\x0c","\xff"),
	::String(null()) };

void Float32Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.Float32Array","\xbf","\x0b","\x82","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Array_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Float32Array_obj >;
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

void Float32Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)4;
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
