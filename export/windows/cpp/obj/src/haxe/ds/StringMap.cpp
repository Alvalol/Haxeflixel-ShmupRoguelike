#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace haxe{
namespace ds{

Void StringMap_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.StringMap","new",0x0f13f0c6,"haxe.ds.StringMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",52,0x969b5cf0)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//StringMap_obj::~StringMap_obj() { }

Dynamic StringMap_obj::__CreateEmpty() { return  new StringMap_obj; }
hx::ObjectPtr< StringMap_obj > StringMap_obj::__new()
{  hx::ObjectPtr< StringMap_obj > _result_ = new StringMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringMap_obj > _result_ = new StringMap_obj();
	_result_->__construct();
	return _result_;}

hx::Object *StringMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

StringMap_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< StringMap_obj >(this); }
Void StringMap_obj::set( ::String key,Dynamic value){
{
		HX_STACK_FRAME("haxe.ds.StringMap","set",0x0f17bc08,"haxe.ds.StringMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",55,0x969b5cf0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(55)
		::__string_hash_set(this->h,key,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StringMap_obj,set,(void))

Dynamic StringMap_obj::get( ::String key){
	HX_STACK_FRAME("haxe.ds.StringMap","get",0x0f0ea0fc,"haxe.ds.StringMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",58,0x969b5cf0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(59)
	Dynamic tmp = ::__string_hash_get(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,get,return )

bool StringMap_obj::exists( ::String key){
	HX_STACK_FRAME("haxe.ds.StringMap","exists",0xd35fc136,"haxe.ds.StringMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",62,0x969b5cf0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(63)
	bool tmp = ::__string_hash_exists(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,exists,return )

bool StringMap_obj::remove( ::String key){
	HX_STACK_FRAME("haxe.ds.StringMap","remove",0x18083f9e,"haxe.ds.StringMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",66,0x969b5cf0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(67)
	bool tmp = ::__string_hash_remove(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,remove,return )

Dynamic StringMap_obj::keys( ){
	HX_STACK_FRAME("haxe.ds.StringMap","keys",0x20631ace,"haxe.ds.StringMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",70,0x969b5cf0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	Array< ::String > a = ::__string_hash_keys(this->h);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(72)
	Dynamic tmp = a->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,keys,return )

Dynamic StringMap_obj::iterator( ){
	HX_STACK_FRAME("haxe.ds.StringMap","iterator",0x40ccf7c8,"haxe.ds.StringMap.iterator","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",75,0x969b5cf0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	cpp::ArrayBase a = ::__string_hash_values(this->h);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(77)
	Dynamic tmp = a->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,iterator,return )


StringMap_obj::StringMap_obj()
{
}

void StringMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void StringMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

Dynamic StringMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StringMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringMap_obj::__mClass,"__mClass");
};

#endif

hx::Class StringMap_obj::__mClass;

void StringMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.StringMap","\xd4","\xd5","\xd6","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StringMap_obj >;
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

} // end namespace haxe
} // end namespace ds
