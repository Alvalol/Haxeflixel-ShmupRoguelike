#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLRenderbuffer
#include <openfl/_legacy/gl/GLRenderbuffer.h>
#endif
namespace openfl{
namespace _legacy{
namespace gl{

Void GLRenderbuffer_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._legacy.gl.GLRenderbuffer","new",0x36dc4f52,"openfl._legacy.gl.GLRenderbuffer.new","openfl/_legacy/gl/GLRenderbuffer.hx",7,0xa2cf253f)
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

//GLRenderbuffer_obj::~GLRenderbuffer_obj() { }

Dynamic GLRenderbuffer_obj::__CreateEmpty() { return  new GLRenderbuffer_obj; }
hx::ObjectPtr< GLRenderbuffer_obj > GLRenderbuffer_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLRenderbuffer_obj > _result_ = new GLRenderbuffer_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLRenderbuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderbuffer_obj > _result_ = new GLRenderbuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLRenderbuffer_obj::getType( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLRenderbuffer","getType",0x0e238262,"openfl._legacy.gl.GLRenderbuffer.getType","openfl/_legacy/gl/GLRenderbuffer.hx",16,0xa2cf253f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return HX_HCSTRING("Renderbuffer","\xf6","\x98","\x68","\xd3");
}



GLRenderbuffer_obj::GLRenderbuffer_obj()
{
}

Dynamic GLRenderbuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(GLRenderbuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderbuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderbuffer_obj::__mClass;

void GLRenderbuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLRenderbuffer","\x60","\xfe","\xd1","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderbuffer_obj >;
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
