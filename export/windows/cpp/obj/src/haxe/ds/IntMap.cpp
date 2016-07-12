#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace haxe{
namespace ds{

Void IntMap_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.IntMap","new",0x7222c4b6,"haxe.ds.IntMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",52,0x604d6034)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//IntMap_obj::~IntMap_obj() { }

Dynamic IntMap_obj::__CreateEmpty() { return  new IntMap_obj; }
hx::ObjectPtr< IntMap_obj > IntMap_obj::__new()
{  hx::ObjectPtr< IntMap_obj > _result_ = new IntMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic IntMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntMap_obj > _result_ = new IntMap_obj();
	_result_->__construct();
	return _result_;}

hx::Object *IntMap_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::IMap_obj)) return operator ::haxe::IMap_obj *();
	return super::__ToInterface(inType);
}

IntMap_obj::operator ::haxe::IMap_obj *()
	{ return new ::haxe::IMap_delegate_< IntMap_obj >(this); }
Void IntMap_obj::set( int key,Dynamic value){
{
		HX_STACK_FRAME("haxe.ds.IntMap","set",0x72268ff8,"haxe.ds.IntMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",55,0x604d6034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(55)
		::__int_hash_set(this->h,key,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(IntMap_obj,set,(void))

Dynamic IntMap_obj::get( int key){
	HX_STACK_FRAME("haxe.ds.IntMap","get",0x721d74ec,"haxe.ds.IntMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",58,0x604d6034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(59)
	Dynamic tmp = ::__int_hash_get(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,get,return )

bool IntMap_obj::exists( int key){
	HX_STACK_FRAME("haxe.ds.IntMap","exists",0x63ba0346,"haxe.ds.IntMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",62,0x604d6034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(63)
	bool tmp = ::__int_hash_exists(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,exists,return )

bool IntMap_obj::remove( int key){
	HX_STACK_FRAME("haxe.ds.IntMap","remove",0xa86281ae,"haxe.ds.IntMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",66,0x604d6034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(67)
	bool tmp = ::__int_hash_remove(this->h,key);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(IntMap_obj,remove,return )

Dynamic IntMap_obj::keys( ){
	HX_STACK_FRAME("haxe.ds.IntMap","keys",0x6a4db8de,"haxe.ds.IntMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/IntMap.hx",70,0x604d6034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	Array< int > a = ::__int_hash_keys(this->h);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(72)
	Dynamic tmp = a->iterator();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(IntMap_obj,keys,return )


IntMap_obj::IntMap_obj()
{
}

void IntMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void IntMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

Dynamic IntMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(IntMap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
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
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntMap_obj::__mClass,"__mClass");
};

#endif

hx::Class IntMap_obj::__mClass;

void IntMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ds.IntMap","\xc4","\xf1","\x10","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntMap_obj >;
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
