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
#ifndef INCLUDED_openfl__legacy_utils_Int16Array
#include <openfl/_legacy/utils/Int16Array.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void Int16Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{
HX_STACK_FRAME("openfl._legacy.utils.Int16Array","new",0xdfdfba78,"openfl._legacy.utils.Int16Array.new","openfl/_legacy/utils/Int16Array.hx",19,0x50e40f95)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(elements,"elements")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(21)
	this->BYTES_PER_ELEMENT = (int)2;
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
		int tmp4 = (int(tmp3) << int((int)1));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		super::__construct(tmp4,null(),null());
		HX_STACK_LINE(26)
		Dynamic tmp5 = bufferOrArray;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		this->length = tmp6;
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
			int tmp6 = (int(tmp5) << int((int)1));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			super::__construct(tmp6,null(),null());
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				int _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(48)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(48)
					if ((tmp9)){
						HX_STACK_LINE(48)
						break;
					}
					HX_STACK_LINE(48)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(48)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(51)
					::__hxcpp_memory_set_i16(this->bytes,(int(i) << int((int)1)),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(94)
			Dynamic tmp4 = bufferOrArray;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			int tmp5 = start;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			bool tmp6 = (elements != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			if ((tmp6)){
				HX_STACK_LINE(94)
				tmp7 = (elements * (int)2);
			}
			else{
				HX_STACK_LINE(94)
				tmp7 = null();
			}
			HX_STACK_LINE(94)
			super::__construct(tmp4,tmp5,tmp7);
			HX_STACK_LINE(96)
			int tmp8 = this->byteLength;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(96)
			int tmp9 = (int(tmp8) & int((int)1));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			if ((tmp10)){
				HX_STACK_LINE(98)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid array size","\x51","\x8f","\x9a","\x6e"));
			}
			HX_STACK_LINE(102)
			int tmp11 = this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(102)
			int tmp12 = (int(tmp11) >> int((int)1));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(102)
			this->length = tmp12;
			HX_STACK_LINE(104)
			int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(104)
			int tmp14 = (int(tmp13) << int((int)1));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(104)
			int tmp15 = this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(104)
			bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(104)
			if ((tmp16)){
				HX_STACK_LINE(106)
				HX_STACK_DO_THROW(HX_HCSTRING("Invalid length multiple","\x41","\x25","\x0f","\xe4"));
			}
		}
	}
}
;
	return null();
}

//Int16Array_obj::~Int16Array_obj() { }

Dynamic Int16Array_obj::__CreateEmpty() { return  new Int16Array_obj; }
hx::ObjectPtr< Int16Array_obj > Int16Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{  hx::ObjectPtr< Int16Array_obj > _result_ = new Int16Array_obj();
	_result_->__construct(bufferOrArray,__o_start,elements);
	return _result_;}

Dynamic Int16Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int16Array_obj > _result_ = new Int16Array_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int Int16Array_obj::__get( int index){
	HX_STACK_FRAME("openfl._legacy.utils.Int16Array","__get",0xbc17818e,"openfl._legacy.utils.Int16Array.__get","openfl/_legacy/utils/Int16Array.hx",115,0x50e40f95)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(115)
	int tmp = ::__hxcpp_memory_get_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Int16Array_obj,__get,return )

Void Int16Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("openfl._legacy.utils.Int16Array","__set",0xbc209c9a,"openfl._legacy.utils.Int16Array.__set","openfl/_legacy/utils/Int16Array.hx",116,0x50e40f95)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(116)
		::__hxcpp_memory_set_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,__set,(void))

int Int16Array_obj::SBYTES_PER_ELEMENT;


Int16Array_obj::Int16Array_obj()
{
}

Dynamic Int16Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic Int16Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void Int16Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int16Array_obj,BYTES_PER_ELEMENT),HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{hx::fsInt,(int)offsetof(Int16Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int16Array_obj::SBYTES_PER_ELEMENT,HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2")},
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
	HX_MARK_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int16Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int16Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

hx::Class Int16Array_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2"),
	::String(null()) };

void Int16Array_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.Int16Array","\x86","\x5e","\x6b","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Int16Array_obj >;
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

void Int16Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)2;
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
