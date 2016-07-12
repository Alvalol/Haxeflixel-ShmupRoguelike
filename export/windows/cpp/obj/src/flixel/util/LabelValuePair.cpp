#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
namespace flixel{
namespace util{

Void LabelValuePair_obj::__construct()
{
HX_STACK_FRAME("flixel.util.LabelValuePair","new",0x8e753503,"flixel.util.LabelValuePair.new","flixel/util/FlxStringUtil.hx",620,0x4e012e33)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LabelValuePair_obj::~LabelValuePair_obj() { }

Dynamic LabelValuePair_obj::__CreateEmpty() { return  new LabelValuePair_obj; }
hx::ObjectPtr< LabelValuePair_obj > LabelValuePair_obj::__new()
{  hx::ObjectPtr< LabelValuePair_obj > _result_ = new LabelValuePair_obj();
	_result_->__construct();
	return _result_;}

Dynamic LabelValuePair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LabelValuePair_obj > _result_ = new LabelValuePair_obj();
	_result_->__construct();
	return _result_;}

hx::Object *LabelValuePair_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

LabelValuePair_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< LabelValuePair_obj >(this); }
::flixel::util::LabelValuePair LabelValuePair_obj::create( ::String label,Dynamic value){
	HX_STACK_FRAME("flixel.util.LabelValuePair","create",0x3da24a39,"flixel.util.LabelValuePair.create","flixel/util/FlxStringUtil.hx",602,0x4e012e33)
	HX_STACK_THIS(this)
	HX_STACK_ARG(label,"label")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(603)
	this->label = label;
	HX_STACK_LINE(604)
	this->value = value;
	HX_STACK_LINE(605)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(LabelValuePair_obj,create,return )

Void LabelValuePair_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.LabelValuePair","put",0x8e76c772,"flixel.util.LabelValuePair.put","flixel/util/FlxStringUtil.hx",609,0x4e012e33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		tmp->put(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelValuePair_obj,put,(void))

Void LabelValuePair_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.LabelValuePair","destroy",0xc37a1f1d,"flixel.util.LabelValuePair.destroy","flixel/util/FlxStringUtil.hx",614,0x4e012e33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(615)
		this->label = null();
		HX_STACK_LINE(616)
		this->value = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LabelValuePair_obj,destroy,(void))

::flixel::util::FlxPool_flixel_util_LabelValuePair LabelValuePair_obj::_pool;

::flixel::util::LabelValuePair LabelValuePair_obj::weak( ::String label,Dynamic value){
	HX_STACK_FRAME("flixel.util.LabelValuePair","weak",0x1e0c0675,"flixel.util.LabelValuePair.weak","flixel/util/FlxStringUtil.hx",594,0x4e012e33)
	HX_STACK_ARG(label,"label")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(595)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(595)
	{
		HX_STACK_LINE(595)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(595)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(595)
		_this->label = label;
		HX_STACK_LINE(595)
		_this->value = value;
		HX_STACK_LINE(595)
		tmp = _this;
	}
	HX_STACK_LINE(595)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LabelValuePair_obj,weak,return )


LabelValuePair_obj::LabelValuePair_obj()
{
}

void LabelValuePair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LabelValuePair);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void LabelValuePair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(value,"value");
}

Dynamic LabelValuePair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool LabelValuePair_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"weak") ) { outValue = weak_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = _pool; return true;  }
	}
	return false;
}

Dynamic LabelValuePair_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LabelValuePair_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast< ::flixel::util::FlxPool_flixel_util_LabelValuePair >(); return true; }
	}
	return false;
}

void LabelValuePair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(LabelValuePair_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LabelValuePair_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPool_flixel_util_LabelValuePair*/ ,(void *) &LabelValuePair_obj::_pool,HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("put","\xcf","\x62","\x55","\x00"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LabelValuePair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LabelValuePair_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LabelValuePair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LabelValuePair_obj::_pool,"_pool");
};

#endif

hx::Class LabelValuePair_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_pool","\xbb","\x9c","\x6d","\xfd"),
	HX_HCSTRING("weak","\x78","\x5c","\xf5","\x4e"),
	::String(null()) };

void LabelValuePair_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.LabelValuePair","\x91","\xf7","\xd7","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LabelValuePair_obj::__GetStatic;
	__mClass->mSetStaticField = &LabelValuePair_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LabelValuePair_obj >;
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

void LabelValuePair_obj::__boot()
{
	_pool= ::flixel::util::FlxPool_flixel_util_LabelValuePair_obj::__new(hx::ClassOf< ::flixel::util::LabelValuePair >());
}

} // end namespace flixel
} // end namespace util
