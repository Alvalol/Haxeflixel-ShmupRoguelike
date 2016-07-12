#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void UInt8Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{
HX_STACK_FRAME("openfl._legacy.utils.UInt8Array","new",0x9b7bef4e,"openfl._legacy.utils.UInt8Array.new","openfl/_legacy/utils/UInt8Array.hx",19,0x0968c77f)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(elements,"elements")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(21)
	this->BYTES_PER_ELEMENT = (int)1;
	HX_STACK_LINE(23)
	Dynamic tmp = bufferOrArray;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(25)
		Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		super::__construct(tmp3,null(),null());
		HX_STACK_LINE(26)
		Dynamic tmp4 = bufferOrArray;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		this->length = tmp5;
	}
	else{
		HX_STACK_LINE(28)
		Dynamic tmp2 = bufferOrArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		if ((tmp3)){
			HX_STACK_LINE(30)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(32)
			bool tmp4 = (elements != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			if ((tmp4)){
				HX_STACK_LINE(34)
				this->length = elements;
			}
			else{
				HX_STACK_LINE(38)
				int tmp5 = (ints->length - start);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				this->length = tmp5;
			}
			HX_STACK_LINE(42)
			int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			super::__construct(tmp5,null(),null());
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				int _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(48)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					if ((tmp8)){
						HX_STACK_LINE(48)
						break;
					}
					HX_STACK_LINE(48)
					int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(51)
					::__hxcpp_memory_set_byte(this->bytes,i,ints->__get((i + start)));
				}
			}
		}
		else{
			HX_STACK_LINE(94)
			Dynamic tmp4 = bufferOrArray;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			int tmp5 = start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			Dynamic tmp6 = elements;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			super::__construct(tmp4,tmp5,tmp6);
			HX_STACK_LINE(95)
			int tmp7 = this->byteLength;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			this->length = tmp7;
		}
	}
}
;
	return null();
}

//UInt8Array_obj::~UInt8Array_obj() { }

Dynamic UInt8Array_obj::__CreateEmpty() { return  new UInt8Array_obj; }
hx::ObjectPtr< UInt8Array_obj > UInt8Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{  hx::ObjectPtr< UInt8Array_obj > _result_ = new UInt8Array_obj();
	_result_->__construct(bufferOrArray,__o_start,elements);
	return _result_;}

Dynamic UInt8Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UInt8Array_obj > _result_ = new UInt8Array_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int UInt8Array_obj::__get( int index){
	HX_STACK_FRAME("openfl._legacy.utils.UInt8Array","__get",0xbecb17e4,"openfl._legacy.utils.UInt8Array.__get","openfl/_legacy/utils/UInt8Array.hx",102,0x0968c77f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(102)
	int tmp = ::__hxcpp_memory_get_byte(this->bytes,(index + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_obj,__get,return )

Void UInt8Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.UInt8Array","__set",0xbed432f0,"openfl._legacy.utils.UInt8Array.__set","openfl/_legacy/utils/UInt8Array.hx",103,0x0968c77f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(103)
		::__hxcpp_memory_set_byte(this->bytes,(index + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,__set,(void))

int UInt8Array_obj::SBYTES_PER_ELEMENT;


UInt8Array_obj::UInt8Array_obj()
{
}

Dynamic UInt8Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UInt8Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void UInt8Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UInt8Array_obj,BYTES_PER_ELEMENT),HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{hx::fsInt,(int)offsetof(UInt8Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &UInt8Array_obj::SBYTES_PER_ELEMENT,HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UInt8Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

hx::Class UInt8Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2"),
	::String(null()) };

void UInt8Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.UInt8Array","\x5c","\xf0","\xaa","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UInt8Array_obj >;
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

void UInt8Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)1;
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
