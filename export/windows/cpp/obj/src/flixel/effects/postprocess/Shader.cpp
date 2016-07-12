#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_postprocess_Shader
#include <flixel/effects/postprocess/Shader.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
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
namespace flixel{
namespace effects{
namespace postprocess{

Void Shader_obj::__construct(cpp::ArrayBase sources)
{
HX_STACK_FRAME("flixel.effects.postprocess.Shader","new",0x5a1426b4,"flixel.effects.postprocess.Shader.new","flixel/effects/postprocess/Shader.hx",18,0x282d2ed9)
HX_STACK_THIS(this)
HX_STACK_ARG(sources,"sources")
{
	HX_STACK_LINE(19)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	::openfl::_legacy::gl::GLProgram tmp2 = ::openfl::_legacy::gl::GLProgram_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	this->program = tmp2;
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		while((true)){
			HX_STACK_LINE(21)
			bool tmp3 = (_g < sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			if ((tmp4)){
				HX_STACK_LINE(21)
				break;
			}
			HX_STACK_LINE(21)
			Dynamic tmp5 = sources->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			Dynamic source = tmp5;		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(21)
			++(_g);
			HX_STACK_LINE(23)
			::String tmp6 = source->__Field(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(23)
			bool tmp7 = source->__Field(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(23)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(23)
			if ((tmp7)){
				HX_STACK_LINE(23)
				tmp8 = (int)35632;
			}
			else{
				HX_STACK_LINE(23)
				tmp8 = (int)35633;
			}
			HX_STACK_LINE(23)
			::openfl::_legacy::gl::GLShader tmp9 = this->compile(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(23)
			::openfl::_legacy::gl::GLShader shader = tmp9;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(24)
			bool tmp10 = (shader == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(24)
			if ((tmp10)){
				HX_STACK_LINE(24)
				return null();
			}
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::openfl::_legacy::gl::GLProgram tmp11 = this->program;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(25)
				::openfl::_legacy::gl::GLProgram program = tmp11;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(25)
				::openfl::_legacy::gl::GLShader tmp12 = shader;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(25)
				program->attach(tmp12);
				HX_STACK_LINE(25)
				Dynamic tmp13 = program->id;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				Dynamic tmp14 = shader->id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(25)
				::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(tmp13,tmp14);
			}
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				Dynamic tmp11 = shader->id;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(26)
				::openfl::_legacy::gl::GL_obj::lime_gl_delete_shader(tmp11);
				HX_STACK_LINE(26)
				shader->invalidate();
			}
		}
	}
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::openfl::_legacy::gl::GLProgram tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		::openfl::_legacy::gl::GL_obj::lime_gl_link_program(tmp4);
	}
	HX_STACK_LINE(31)
	::openfl::_legacy::gl::GLProgram tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	int tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(tmp4,(int)35714);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	if ((tmp6)){
		HX_STACK_LINE(33)
		::openfl::_legacy::gl::GLProgram tmp7 = this->program;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		Dynamic tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		::String tmp9 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_info_log(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),33,HX_HCSTRING("flixel.effects.postprocess.Shader","\xc2","\xfc","\xed","\x12"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(33)
		::haxe::Log_obj::trace(tmp9,tmp10);
		HX_STACK_LINE(34)
		::openfl::_legacy::gl::GLProgram tmp11 = this->program;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		Dynamic tmp12 = tmp11->id;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		int tmp13 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(tmp12,(int)35715);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		::String tmp14 = (HX_HCSTRING("VALIDATE_STATUS: ","\x61","\x4a","\x52","\xb0") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),34,HX_HCSTRING("flixel.effects.postprocess.Shader","\xc2","\xfc","\xed","\x12"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		::haxe::Log_obj::trace(tmp14,tmp15);
		HX_STACK_LINE(35)
		int tmp16 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		::String tmp17 = (HX_HCSTRING("ERROR: ","\x4e","\x70","\xde","\x69") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(35)
		Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),35,HX_HCSTRING("flixel.effects.postprocess.Shader","\xc2","\xfc","\xed","\x12"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		::haxe::Log_obj::trace(tmp17,tmp18);
		HX_STACK_LINE(36)
		return null();
	}
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(cpp::ArrayBase sources)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(sources);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::gl::GLShader Shader_obj::compile( ::String source,int type){
	HX_STACK_FRAME("flixel.effects.postprocess.Shader","compile",0x90bb35c7,"flixel.effects.postprocess.Shader.compile","flixel/effects/postprocess/Shader.hx",46,0x282d2ed9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(47)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	int tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_shader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	::openfl::_legacy::gl::GLShader tmp3 = ::openfl::_legacy::gl::GLShader_obj::__new(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	::openfl::_legacy::gl::GLShader shader = tmp3;		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		Dynamic tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		::String tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		::openfl::_legacy::gl::GL_obj::lime_gl_shader_source(tmp4,tmp5);
	}
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		Dynamic tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::openfl::_legacy::gl::GL_obj::lime_gl_compile_shader(tmp4);
	}
	HX_STACK_LINE(51)
	Dynamic tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	int tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_parameter(tmp4,(int)35713);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	if ((tmp6)){
		HX_STACK_LINE(53)
		Dynamic tmp7 = shader->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(53)
		::String tmp8 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_info_log(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(53)
		Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("Shader.hx","\x99","\xa8","\x0b","\xd1"),53,HX_HCSTRING("flixel.effects.postprocess.Shader","\xc2","\xfc","\xed","\x12"),HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(53)
		::haxe::Log_obj::trace(tmp8,tmp9);
		HX_STACK_LINE(54)
		return null();
	}
	HX_STACK_LINE(57)
	::openfl::_legacy::gl::GLShader tmp7 = shader;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,compile,return )

int Shader_obj::attribute( ::String a){
	HX_STACK_FRAME("flixel.effects.postprocess.Shader","attribute",0xffa03d70,"flixel.effects.postprocess.Shader.attribute","flixel/effects/postprocess/Shader.hx",65,0x282d2ed9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(66)
	::openfl::_legacy::gl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Dynamic tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	::String tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	int tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,attribute,return )

int Shader_obj::uniform( ::String u){
	HX_STACK_FRAME("flixel.effects.postprocess.Shader","uniform",0xc2b05188,"flixel.effects.postprocess.Shader.uniform","flixel/effects/postprocess/Shader.hx",74,0x282d2ed9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(u,"u")
	HX_STACK_LINE(75)
	::openfl::_legacy::gl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	Dynamic tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	::String tmp2 = u;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,uniform,return )

Void Shader_obj::bind( ){
{
		HX_STACK_FRAME("flixel.effects.postprocess.Shader","bind",0x6fa228e9,"flixel.effects.postprocess.Shader.bind","flixel/effects/postprocess/Shader.hx",83,0x282d2ed9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::openfl::_legacy::gl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::openfl::_legacy::gl::GLProgram program = tmp;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(83)
		bool tmp1 = (program == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(83)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(83)
			tmp2 = program->id;
		}
		HX_STACK_LINE(83)
		::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,bind,(void))


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform") ) { return uniform_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"attribute") ) { return attribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::openfl::_legacy::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::gl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	HX_HCSTRING("attribute","\x1c","\x70","\xf0","\xfa"),
	HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.postprocess.Shader","\xc2","\xfc","\xed","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
