#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
namespace openfl{
namespace display3D{

Void Program3D_obj::__construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLProgram program)
{
HX_STACK_FRAME("openfl.display3D.Program3D","new",0xcbd1926e,"openfl.display3D.Program3D.new","openfl/display3D/Program3D.hx",16,0x0a985b04)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(program,"program")
{
	HX_STACK_LINE(18)
	this->context = context;
	HX_STACK_LINE(19)
	this->glProgram = program;
}
;
	return null();
}

//Program3D_obj::~Program3D_obj() { }

Dynamic Program3D_obj::__CreateEmpty() { return  new Program3D_obj; }
hx::ObjectPtr< Program3D_obj > Program3D_obj::__new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLProgram program)
{  hx::ObjectPtr< Program3D_obj > _result_ = new Program3D_obj();
	_result_->__construct(context,program);
	return _result_;}

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program3D_obj > _result_ = new Program3D_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Program3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","dispose",0x556f61ad,"openfl.display3D.Program3D.dispose","openfl/display3D/Program3D.hx",24,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::openfl::display3D::Context3D tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		tmp->__deleteProgram(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

Void Program3D_obj::upload( ::openfl::_legacy::gl::GLShader vertexShader,::openfl::_legacy::gl::GLShader fragmentShader){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","upload",0x91a244b3,"openfl.display3D.Program3D.upload","openfl/display3D/Program3D.hx",31,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexShader,"vertexShader")
		HX_STACK_ARG(fragmentShader,"fragmentShader")
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::openfl::_legacy::gl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			::openfl::_legacy::gl::GLProgram program = tmp;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(35)
			::openfl::_legacy::gl::GLShader tmp1 = vertexShader;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(35)
			program->attach(tmp1);
			HX_STACK_LINE(35)
			Dynamic tmp2 = program->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			Dynamic tmp3 = vertexShader->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(tmp2,tmp3);
		}
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::openfl::_legacy::gl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(36)
			::openfl::_legacy::gl::GLProgram program = tmp;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(36)
			::openfl::_legacy::gl::GLShader tmp1 = fragmentShader;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			program->attach(tmp1);
			HX_STACK_LINE(36)
			Dynamic tmp2 = program->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			Dynamic tmp3 = fragmentShader->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(tmp2,tmp3);
		}
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::openfl::_legacy::gl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			Dynamic tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			::openfl::_legacy::gl::GL_obj::lime_gl_link_program(tmp1);
		}
		HX_STACK_LINE(39)
		::openfl::_legacy::gl::GLProgram tmp = this->glProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		Dynamic tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		int tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(tmp1,(int)35714);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(41)
			::openfl::_legacy::gl::GLProgram tmp4 = this->glProgram;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			Dynamic tmp5 = tmp4->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			::String tmp6 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_info_log(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			::String result = tmp6;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(42)
			bool tmp7 = (result != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(42)
			if ((tmp7)){
				HX_STACK_LINE(42)
				::String tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(42)
				HX_STACK_DO_THROW(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))


Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
}

Dynamic Program3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return glProgram; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Program3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast< ::openfl::_legacy::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Program3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::openfl::_legacy::gl::GLProgram*/ ,(int)offsetof(Program3D_obj,glProgram),HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("glProgram","\xdf","\xd6","\xb3","\xc1"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Program3D_obj::__mClass;

void Program3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program3D_obj >;
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
} // end namespace display3D
