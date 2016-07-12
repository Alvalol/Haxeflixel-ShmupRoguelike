#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl__GL_Float32Data_Impl_
#include <openfl/_legacy/gl/_GL/Float32Data_Impl_.h>
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
namespace openfl{
namespace _legacy{
namespace gl{
namespace _GL{

Void Float32Data_Impl__obj::__construct()
{
	return null();
}

//Float32Data_Impl__obj::~Float32Data_Impl__obj() { }

Dynamic Float32Data_Impl__obj::__CreateEmpty() { return  new Float32Data_Impl__obj; }
hx::ObjectPtr< Float32Data_Impl__obj > Float32Data_Impl__obj::__new()
{  hx::ObjectPtr< Float32Data_Impl__obj > _result_ = new Float32Data_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Float32Data_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Data_Impl__obj > _result_ = new Float32Data_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Float32Data_Impl__obj::_new( Dynamic data){
	HX_STACK_FRAME("openfl._legacy.gl._GL.Float32Data_Impl_","_new",0x6554cd59,"openfl._legacy.gl._GL.Float32Data_Impl_._new","openfl/_legacy/gl/GL.hx",1336,0x4e24c9f5)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1336)
	Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1336)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,_new,return )

Dynamic Float32Data_Impl__obj::toDynamic( Dynamic this1){
	HX_STACK_FRAME("openfl._legacy.gl._GL.Float32Data_Impl_","toDynamic",0x16de3c4c,"openfl._legacy.gl._GL.Float32Data_Impl_.toDynamic","openfl/_legacy/gl/GL.hx",1337,0x4e24c9f5)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1337)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1337)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,toDynamic,return )

Dynamic Float32Data_Impl__obj::fromFloat32Array( ::openfl::_legacy::utils::Float32Array f){
	HX_STACK_FRAME("openfl._legacy.gl._GL.Float32Data_Impl_","fromFloat32Array",0xaf672ae0,"openfl._legacy.gl._GL.Float32Data_Impl_.fromFloat32Array","openfl/_legacy/gl/GL.hx",1339,0x4e24c9f5)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(1339)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1339)
	{
		HX_STACK_LINE(1339)
		::openfl::_legacy::utils::ByteArray tmp1 = f->getByteBuffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1339)
		Dynamic data = tmp1;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1339)
		tmp = data;
	}
	HX_STACK_LINE(1339)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,fromFloat32Array,return )

Dynamic Float32Data_Impl__obj::fromArrayFloat( Array< Float > f){
	HX_STACK_FRAME("openfl._legacy.gl._GL.Float32Data_Impl_","fromArrayFloat",0xa5888d45,"openfl._legacy.gl._GL.Float32Data_Impl_.fromArrayFloat","openfl/_legacy/gl/GL.hx",1341,0x4e24c9f5)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(1341)
	Dynamic tmp = ((Dynamic)(f));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1341)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,fromArrayFloat,return )


Float32Data_Impl__obj::Float32Data_Impl__obj()
{
}

bool Float32Data_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromArrayFloat") ) { outValue = fromArrayFloat_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromFloat32Array") ) { outValue = fromFloat32Array_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Data_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Data_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Float32Data_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromFloat32Array","\xe8","\x5e","\x81","\x61"),
	HX_HCSTRING("fromArrayFloat","\x4d","\x2f","\xf0","\xf4"),
	::String(null()) };

void Float32Data_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl._GL.Float32Data_Impl_","\x76","\xab","\x69","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Data_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float32Data_Impl__obj >;
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
} // end namespace gl
} // end namespace _GL
