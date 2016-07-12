#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_WeakRef
#include <openfl/_legacy/utils/WeakRef.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void WeakRef_obj::__construct(Dynamic object,hx::Null< bool >  __o_makeWeak)
{
HX_STACK_FRAME("openfl._legacy.utils.WeakRef","new",0xd3105bec,"openfl._legacy.utils.WeakRef.new","openfl/_legacy/utils/WeakRef.hx",14,0x9541fd47)
HX_STACK_THIS(this)
HX_STACK_ARG(object,"object")
HX_STACK_ARG(__o_makeWeak,"makeWeak")
bool makeWeak = __o_makeWeak.Default(true);
{
	HX_STACK_LINE(16)
	bool tmp = makeWeak;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	if ((tmp)){
		HX_STACK_LINE(18)
		Dynamic tmp1 = ::openfl::_legacy::utils::WeakRef_obj::lime_weak_ref_create(hx::ObjectPtr<OBJ_>(this),object);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		this->weakRef = tmp1;
		HX_STACK_LINE(19)
		this->hardRef = null();
	}
	else{
		HX_STACK_LINE(23)
		this->weakRef = (int)-1;
		HX_STACK_LINE(24)
		this->hardRef = object;
	}
}
;
	return null();
}

//WeakRef_obj::~WeakRef_obj() { }

Dynamic WeakRef_obj::__CreateEmpty() { return  new WeakRef_obj; }
hx::ObjectPtr< WeakRef_obj > WeakRef_obj::__new(Dynamic object,hx::Null< bool >  __o_makeWeak)
{  hx::ObjectPtr< WeakRef_obj > _result_ = new WeakRef_obj();
	_result_->__construct(object,__o_makeWeak);
	return _result_;}

Dynamic WeakRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakRef_obj > _result_ = new WeakRef_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic WeakRef_obj::get( ){
	HX_STACK_FRAME("openfl._legacy.utils.WeakRef","get",0xd30b0c22,"openfl._legacy.utils.WeakRef.get","openfl/_legacy/utils/WeakRef.hx",31,0x9541fd47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	Dynamic tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(35)
		Dynamic tmp2 = this->hardRef;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		return tmp2;
	}
	HX_STACK_LINE(39)
	int tmp2 = this->weakRef;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	if ((tmp3)){
		HX_STACK_LINE(41)
		return null();
	}
	HX_STACK_LINE(45)
	Dynamic tmp4 = ::openfl::_legacy::utils::WeakRef_obj::lime_weak_ref_get(this->weakRef);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	Dynamic result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(46)
	bool tmp5 = (result == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	if ((tmp5)){
		HX_STACK_LINE(48)
		this->weakRef = (int)-1;
	}
	HX_STACK_LINE(52)
	Dynamic tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,get,return )

::String WeakRef_obj::toString( ){
	HX_STACK_FRAME("openfl._legacy.utils.WeakRef","toString",0x9150e9a0,"openfl._legacy.utils.WeakRef.toString","openfl/_legacy/utils/WeakRef.hx",57,0x9541fd47)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	Dynamic tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(61)
		Dynamic tmp2 = this->hardRef;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		return tmp4;
	}
	HX_STACK_LINE(65)
	int tmp2 = this->weakRef;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	::String tmp3 = (HX_HCSTRING("WeakRef(","\x2d","\x30","\x1b","\x73") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	::String tmp4 = (tmp3 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,toString,return )

Dynamic WeakRef_obj::lime_weak_ref_create;

Dynamic WeakRef_obj::lime_weak_ref_get;


WeakRef_obj::WeakRef_obj()
{
}

void WeakRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakRef);
	HX_MARK_MEMBER_NAME(hardRef,"hardRef");
	HX_MARK_MEMBER_NAME(weakRef,"weakRef");
	HX_MARK_END_CLASS();
}

void WeakRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hardRef,"hardRef");
	HX_VISIT_MEMBER_NAME(weakRef,"weakRef");
}

Dynamic WeakRef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { return hardRef; }
		if (HX_FIELD_EQ(inName,"weakRef") ) { return weakRef; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool WeakRef_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"lime_weak_ref_get") ) { outValue = lime_weak_ref_get; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_weak_ref_create") ) { outValue = lime_weak_ref_create; return true;  }
	}
	return false;
}

Dynamic WeakRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { hardRef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weakRef") ) { weakRef=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeakRef_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"lime_weak_ref_get") ) { lime_weak_ref_get=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_weak_ref_create") ) { lime_weak_ref_create=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void WeakRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93"));
	outFields->push(HX_HCSTRING("weakRef","\xbb","\x4f","\x5c","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WeakRef_obj,hardRef),HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93")},
	{hx::fsInt,(int)offsetof(WeakRef_obj,weakRef),HX_HCSTRING("weakRef","\xbb","\x4f","\x5c","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &WeakRef_obj::lime_weak_ref_create,HX_HCSTRING("lime_weak_ref_create","\xe5","\xa6","\x4d","\x08")},
	{hx::fsObject /*Dynamic*/ ,(void *) &WeakRef_obj::lime_weak_ref_get,HX_HCSTRING("lime_weak_ref_get","\x0d","\x25","\xb7","\x9a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93"),
	HX_HCSTRING("weakRef","\xbb","\x4f","\x5c","\xd7"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WeakRef_obj::lime_weak_ref_create,"lime_weak_ref_create");
	HX_MARK_MEMBER_NAME(WeakRef_obj::lime_weak_ref_get,"lime_weak_ref_get");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WeakRef_obj::lime_weak_ref_create,"lime_weak_ref_create");
	HX_VISIT_MEMBER_NAME(WeakRef_obj::lime_weak_ref_get,"lime_weak_ref_get");
};

#endif

hx::Class WeakRef_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_weak_ref_create","\xe5","\xa6","\x4d","\x08"),
	HX_HCSTRING("lime_weak_ref_get","\x0d","\x25","\xb7","\x9a"),
	::String(null()) };

void WeakRef_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.WeakRef","\xfa","\x35","\xe9","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WeakRef_obj::__GetStatic;
	__mClass->mSetStaticField = &WeakRef_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakRef_obj >;
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

void WeakRef_obj::__boot()
{
	lime_weak_ref_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_weak_ref_create","\x43","\x5d","\x60","\x47"),(int)2);
	lime_weak_ref_get= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_weak_ref_get","\xef","\xe7","\xeb","\x84"),(int)1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
