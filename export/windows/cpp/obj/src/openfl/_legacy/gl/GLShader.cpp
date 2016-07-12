#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif
namespace openfl{
namespace _legacy{
namespace gl{

Void GLShader_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._legacy.gl.GLShader","new",0x2822b1a1,"openfl._legacy.gl.GLShader.new","openfl/_legacy/gl/GLShader.hx",7,0xd688f310)
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

//GLShader_obj::~GLShader_obj() { }

Dynamic GLShader_obj::__CreateEmpty() { return  new GLShader_obj; }
hx::ObjectPtr< GLShader_obj > GLShader_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLShader_obj > _result_ = new GLShader_obj();
	_result_->__construct(version,id);
	return _result_;}

Dynamic GLShader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLShader_obj > _result_ = new GLShader_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String GLShader_obj::getType( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLShader","getType",0xdbeab831,"openfl._legacy.gl.GLShader.getType","openfl/_legacy/gl/GLShader.hx",16,0xd688f310)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51");
}


bool GLShader_obj::isValid( ){
	HX_STACK_FRAME("openfl._legacy.gl.GLShader","isValid",0x8a9d2e73,"openfl._legacy.gl.GLShader.isValid","openfl/_legacy/gl/GLShader.hx",21,0xd688f310)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	Dynamic tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	if ((tmp2)){
		HX_STACK_LINE(23)
		Dynamic tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		tmp3 = (tmp6 != null());
	}
	else{
		HX_STACK_LINE(23)
		tmp3 = false;
	}
	HX_STACK_LINE(23)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	if ((tmp3)){
		HX_STACK_LINE(23)
		int tmp5 = this->version;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		int tmp7 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(23)
		tmp4 = (tmp6 == tmp8);
	}
	else{
		HX_STACK_LINE(23)
		tmp4 = false;
	}
	HX_STACK_LINE(23)
	return tmp4;
}



GLShader_obj::GLShader_obj()
{
}

Dynamic GLShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShader_obj::__mClass;

void GLShader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GLShader","\x2f","\x4d","\x67","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLShader_obj >;
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
