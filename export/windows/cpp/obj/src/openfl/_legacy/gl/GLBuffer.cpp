#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
namespace openfl{
namespace _legacy{
namespace gl{

Void GLBuffer_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._legacy.gl.GLBuffer","new",0x8a9a38fc,"openfl._legacy.gl.GLBuffer.new","openfl/_legacy/gl/GLBuffer.hx",7,0x58b2d015)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(9)
	int tmp = version;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	Dynamic tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//GLBuffer_obj::~GLBuffer_obj() { }

Dynamic GLBuffer_obj::__CreateEmpty() { return  new GLBuffer_obj; }
hx::ObjectPtr< GLBuffer_obj > GLBuffer_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLBuffer_obj > _result_ = new GLBuffer_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBuffer_obj > _result_ = new GLBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLBuffer_obj::getType( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLBuffer","getType",0xc3a8890c,"openfl._legacy.gl.GLBuffer.getType","openfl/_legacy/gl/GLBuffer.hx",16,0x58b2d015)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return HX_HCSTRING("Buffer","\x20","\x31","\x29","\x05");
}



GLBuffer_obj::GLBuffer_obj()
{
}

Dynamic GLBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBuffer_obj::__mClass;

void GLBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLBuffer","\x0a","\x4b","\xdb","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBuffer_obj >;
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
