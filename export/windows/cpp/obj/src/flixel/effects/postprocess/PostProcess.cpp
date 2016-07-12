#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_postprocess_PostProcess
#include <flixel/effects/postprocess/PostProcess.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess_Shader
#include <flixel/effects/postprocess/Shader.h>
#endif
#ifndef INCLUDED_flixel_effects_postprocess__PostProcess_Uniform
#include <flixel/effects/postprocess/_PostProcess/Uniform.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLFramebuffer
#include <openfl/_legacy/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLRenderbuffer
#include <openfl/_legacy/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
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
namespace flixel{
namespace effects{
namespace postprocess{

Void PostProcess_obj::__construct(::String fragmentShader)
{
HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","new",0x00edfd24,"flixel.effects.postprocess.PostProcess.new","flixel/effects/postprocess/PostProcess.hx",28,0x6a90b60f)
HX_STACK_THIS(this)
HX_STACK_ARG(fragmentShader,"fragmentShader")
{
	HX_STACK_LINE(242)
	this->time = ((Float)0);
	HX_STACK_LINE(239)
	this->defaultFramebuffer = null();
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		tmp = tmp2;
	}
	HX_STACK_LINE(40)
	this->uniforms = tmp;
	HX_STACK_LINE(43)
	int tmp1 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	::openfl::_legacy::gl::GLFramebuffer tmp3 = ::openfl::_legacy::gl::GLFramebuffer_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	this->framebuffer = tmp3;
	HX_STACK_LINE(44)
	this->rebuild();
	HX_STACK_LINE(48)
	int tmp4 = ::openfl::_legacy::gl::GL_obj::lime_gl_check_framebuffer_status((int)36160);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	int status = tmp4;		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(50)
	int tmp5 = status;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	switch( (int)(tmp5)){
		case (int)36054: {
			HX_STACK_LINE(53)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),53,HX_HCSTRING("flixel.effects.postprocess.PostProcess","\x32","\xdb","\x9f","\x9b"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			::haxe::Log_obj::trace(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),tmp6);
		}
		;break;
		case (int)36061: {
			HX_STACK_LINE(55)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),55,HX_HCSTRING("flixel.effects.postprocess.PostProcess","\x32","\xdb","\x9f","\x9b"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			::haxe::Log_obj::trace(HX_HCSTRING("GL_FRAMEBUFFER_UNSUPPORTED","\x89","\x97","\x3b","\xc1"),tmp6);
		}
		;break;
		case (int)36053: {
		}
		;break;
		default: {
			HX_STACK_LINE(58)
			::String tmp6 = (HX_HCSTRING("Check frame buffer: ","\x71","\xd6","\x83","\xf1") + status);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),58,HX_HCSTRING("flixel.effects.postprocess.PostProcess","\x32","\xdb","\x9f","\x9b"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			::haxe::Log_obj::trace(tmp6,tmp7);
		}
	}
	HX_STACK_LINE(62)
	int tmp6 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	Dynamic tmp7 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	::openfl::_legacy::gl::GLBuffer tmp8 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	this->buffer = tmp8;
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::openfl::_legacy::gl::GLBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		::openfl::_legacy::gl::GLBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(63)
		bool tmp10 = (buffer == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		if ((tmp10)){
			HX_STACK_LINE(63)
			tmp11 = null();
		}
		else{
			HX_STACK_LINE(63)
			tmp11 = buffer->id;
		}
		HX_STACK_LINE(63)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp11);
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		Dynamic tmp9 = ((Dynamic)(Array_obj< Float >::__new().Add(((Float)-1.0)).Add(((Float)-1.0)).Add((int)0).Add((int)0).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)1.0)).Add(((Float)1.0)).Add((int)1).Add((int)1).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		::openfl::_legacy::utils::Float32Array tmp10 = ::openfl::_legacy::utils::Float32Array_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		::openfl::_legacy::utils::IMemoryRange data = tmp10;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(64)
		::openfl::_legacy::utils::ByteArray tmp11 = data->getByteBuffer();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		int tmp12 = data->getStart();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		int tmp13 = data->getLength();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(64)
		::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,tmp11,tmp12,tmp13,(int)35044);
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(65)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		if ((tmp9)){
			HX_STACK_LINE(65)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(65)
			tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
		}
		HX_STACK_LINE(65)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp10);
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/postprocess/PostProcess.hx",68,0x6a90b60f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , HX_HCSTRING("\r\n#ifdef GL_ES\r\n\tprecision mediump float;\r\n#endif\r\n\r\nattribute vec2 aVertex;\r\nattribute vec2 aTexCoord;\r\nvarying vec2 vTexCoord;\r\n\r\nvoid main() {\r\n\tvTexCoord = aTexCoord;\r\n\tgl_Position = vec4(aVertex, 0.0, 1.0);\r\n}","\x53","\x85","\xc0","\x42"),false);
				__result->Add(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	Dynamic tmp9 = _Function_1_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(69)
	::String tmp10 = fragmentShader;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(69)
	::String tmp11 = ::openfl::_legacy::Assets_obj::getText(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	struct _Function_1_2{
		inline static Dynamic Block( ::String &tmp11){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/postprocess/PostProcess.hx",69,0x6a90b60f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , tmp11,false);
				__result->Add(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	Dynamic tmp12 = _Function_1_2::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(67)
	::flixel::effects::postprocess::Shader tmp13 = ::flixel::effects::postprocess::Shader_obj::__new(cpp::ArrayBase_obj::__new().Add(tmp9).Add(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(67)
	this->postProcessShader = tmp13;
	HX_STACK_LINE(73)
	::flixel::effects::postprocess::Shader tmp14 = this->postProcessShader;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(73)
	Dynamic tmp15 = tmp14->program->id;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(73)
	Dynamic tmp16 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp15,HX_HCSTRING("uImage0","\xca","\x0a","\x76","\x34"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(73)
	this->imageUniform = ((int)(tmp16));
	HX_STACK_LINE(74)
	::flixel::effects::postprocess::Shader tmp17 = this->postProcessShader;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(74)
	Dynamic tmp18 = tmp17->program->id;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(74)
	Dynamic tmp19 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp18,HX_HCSTRING("uTime","\x22","\xd7","\xb7","\x95"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(74)
	this->timeUniform = ((int)(tmp19));
	HX_STACK_LINE(75)
	::flixel::effects::postprocess::Shader tmp20 = this->postProcessShader;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(75)
	Dynamic tmp21 = tmp20->program->id;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(75)
	Dynamic tmp22 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp21,HX_HCSTRING("uResolution","\x01","\x3e","\xa1","\x49"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(75)
	this->resolutionUniform = ((int)(tmp22));
	HX_STACK_LINE(77)
	::flixel::effects::postprocess::Shader tmp23 = this->postProcessShader;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(77)
	Dynamic tmp24 = tmp23->program->id;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(77)
	int tmp25 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp24,HX_HCSTRING("aVertex","\xa5","\x4e","\x7e","\x97"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(77)
	this->vertexSlot = tmp25;
	HX_STACK_LINE(78)
	::flixel::effects::postprocess::Shader tmp26 = this->postProcessShader;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(78)
	Dynamic tmp27 = tmp26->program->id;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(78)
	int tmp28 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp27,HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(78)
	this->texCoordSlot = tmp28;
}
;
	return null();
}

//PostProcess_obj::~PostProcess_obj() { }

Dynamic PostProcess_obj::__CreateEmpty() { return  new PostProcess_obj; }
hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__new(::String fragmentShader)
{  hx::ObjectPtr< PostProcess_obj > _result_ = new PostProcess_obj();
	_result_->__construct(fragmentShader);
	return _result_;}

Dynamic PostProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PostProcess_obj > _result_ = new PostProcess_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PostProcess_obj::setUniform( ::String uniform,Float value){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","setUniform",0x2526196e,"flixel.effects.postprocess.PostProcess.setUniform","flixel/effects/postprocess/PostProcess.hx",87,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		::String tmp1 = uniform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			::String tmp4 = uniform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			::flixel::effects::postprocess::_PostProcess::Uniform tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(90)
			::flixel::effects::postprocess::_PostProcess::Uniform uniform1 = tmp5;		HX_STACK_VAR(uniform1,"uniform1");
			HX_STACK_LINE(91)
			uniform1->value = value;
		}
		else{
			HX_STACK_LINE(95)
			::flixel::effects::postprocess::Shader tmp3 = this->postProcessShader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			Dynamic tmp4 = tmp3->program->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			::String tmp5 = uniform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			Dynamic tmp6 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			int id = ((int)(tmp6));		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(96)
			bool tmp7 = (id != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			if ((tmp7)){
				HX_STACK_LINE(98)
				::flixel::effects::postprocess::_PostProcess::Uniform tmp8 = ::flixel::effects::postprocess::_PostProcess::Uniform_obj::__new(id,value);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				::flixel::effects::postprocess::_PostProcess::Uniform value1 = tmp8;		HX_STACK_VAR(value1,"value1");
				HX_STACK_LINE(98)
				::haxe::ds::StringMap tmp9 = this->uniforms;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				::String tmp10 = uniform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				::flixel::effects::postprocess::_PostProcess::Uniform tmp11 = value1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(98)
				tmp9->set(tmp10,tmp11);
			}
			else{
				HX_STACK_LINE(102)
				::String tmp8 = (HX_HCSTRING("Uniform with name \"","\xdb","\x30","\x9f","\xc4") + uniform);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				::String tmp9 = (tmp8 + HX_HCSTRING("\" could not be found.","\xbf","\xd2","\xc9","\x28"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(102)
				HX_STACK_DO_THROW(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,setUniform,(void))

::flixel::effects::postprocess::PostProcess PostProcess_obj::set_to( ::flixel::effects::postprocess::PostProcess value){
	HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","set_to",0xe20f76f4,"flixel.effects.postprocess.PostProcess.set_to","flixel/effects/postprocess/PostProcess.hx",115,0x6a90b60f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	::openfl::_legacy::gl::GLFramebuffer tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	if ((tmp)){
		HX_STACK_LINE(116)
		tmp1 = this->defaultFramebuffer;
	}
	else{
		HX_STACK_LINE(116)
		tmp1 = value->framebuffer;
	}
	HX_STACK_LINE(116)
	this->renderTo = tmp1;
	HX_STACK_LINE(117)
	::flixel::effects::postprocess::PostProcess tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,set_to,return )

Void PostProcess_obj::rebuild( ){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","rebuild",0x732f0d5f,"flixel.effects.postprocess.PostProcess.rebuild","flixel/effects/postprocess/PostProcess.hx",124,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(125)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(125)
			bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			if ((tmp1)){
				HX_STACK_LINE(125)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(125)
				tmp2 = framebuffer->id;
			}
			HX_STACK_LINE(125)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp2);
		}
		HX_STACK_LINE(127)
		::openfl::_legacy::gl::GLTexture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		if ((tmp1)){
			HX_STACK_LINE(127)
			::openfl::_legacy::gl::GLTexture tmp2 = this->texture;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			::openfl::_legacy::gl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(127)
			Dynamic tmp3 = texture->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_texture(tmp3);
			HX_STACK_LINE(127)
			texture->invalidate();
		}
		HX_STACK_LINE(128)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		if ((tmp3)){
			HX_STACK_LINE(128)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			::openfl::_legacy::gl::GL_obj::deleteRenderbuffer(tmp4);
		}
		HX_STACK_LINE(130)
		::openfl::_legacy::display::MovieClip tmp4 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		::openfl::_legacy::display::Stage tmp5 = tmp4->get_stage();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		int tmp6 = tmp5->get_stageWidth();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		this->screenWidth = tmp6;
		HX_STACK_LINE(131)
		::openfl::_legacy::display::MovieClip tmp7 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		::openfl::_legacy::display::Stage tmp8 = tmp7->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		int tmp9 = tmp8->get_stageHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		this->screenHeight = tmp9;
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int tmp10 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			Dynamic tmp11 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(132)
			::openfl::_legacy::gl::GLTexture tmp12 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			this->texture = tmp12;
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				::openfl::_legacy::gl::GLTexture tmp13 = this->texture;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(132)
				::openfl::_legacy::gl::GLTexture texture = tmp13;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(132)
				bool tmp14 = (texture == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(132)
				Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(132)
				if ((tmp14)){
					HX_STACK_LINE(132)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(132)
					tmp15 = texture->id;
				}
				HX_STACK_LINE(132)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp15);
			}
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				int tmp13 = this->screenWidth;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(132)
				int tmp14 = this->screenHeight;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(132)
				bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(132)
				::openfl::_legacy::utils::ByteArray tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(132)
				if ((tmp15)){
					HX_STACK_LINE(132)
					tmp16 = null();
				}
				else{
					HX_STACK_LINE(132)
					tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
				}
				HX_STACK_LINE(132)
				bool tmp17 = true;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(132)
				Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(132)
				if ((tmp17)){
					HX_STACK_LINE(132)
					tmp18 = null();
				}
				else{
					HX_STACK_LINE(132)
					tmp18 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
				}
				HX_STACK_LINE(132)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6407,tmp13,tmp14,(int)0,(int)6407,(int)5121,tmp16,tmp18);
			}
			HX_STACK_LINE(132)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(132)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
			HX_STACK_LINE(132)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
			HX_STACK_LINE(132)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
			HX_STACK_LINE(132)
			{
				HX_STACK_LINE(132)
				::openfl::_legacy::gl::GLTexture tmp13 = this->texture;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(132)
				Dynamic tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(132)
				::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,tmp14,(int)0);
			}
		}
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int tmp10 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(133)
			Dynamic tmp11 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(133)
			::openfl::_legacy::gl::GLRenderbuffer tmp12 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(133)
			this->renderbuffer = tmp12;
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::openfl::_legacy::gl::GLRenderbuffer tmp13 = this->renderbuffer;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(133)
				::openfl::_legacy::gl::GLRenderbuffer renderbuffer = tmp13;		HX_STACK_VAR(renderbuffer,"renderbuffer");
				HX_STACK_LINE(133)
				bool tmp14 = (renderbuffer == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				if ((tmp14)){
					HX_STACK_LINE(133)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(133)
					tmp15 = renderbuffer->id;
				}
				HX_STACK_LINE(133)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp15);
			}
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int tmp13 = this->screenWidth;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(133)
				int tmp14 = this->screenHeight;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,tmp13,tmp14);
			}
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::openfl::_legacy::gl::GLRenderbuffer tmp13 = this->renderbuffer;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(133)
				Dynamic tmp14 = tmp13->id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,tmp14);
			}
		}
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(135)
			Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(135)
			if ((tmp10)){
				HX_STACK_LINE(135)
				tmp11 = null();
			}
			else{
				HX_STACK_LINE(135)
				tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(135)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,rebuild,(void))

Void PostProcess_obj::createRenderbuffer( int width,int height){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","createRenderbuffer",0x8a0b59ae,"flixel.effects.postprocess.PostProcess.createRenderbuffer","flixel/effects/postprocess/PostProcess.hx",139,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(141)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		this->renderbuffer = tmp2;
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			::openfl::_legacy::gl::GLRenderbuffer tmp3 = this->renderbuffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			::openfl::_legacy::gl::GLRenderbuffer renderbuffer = tmp3;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(143)
			bool tmp4 = (renderbuffer == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			if ((tmp4)){
				HX_STACK_LINE(143)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(143)
				tmp5 = renderbuffer->id;
			}
			HX_STACK_LINE(143)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp5);
		}
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,tmp3,tmp4);
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GLRenderbuffer tmp3 = this->renderbuffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createRenderbuffer,(void))

Void PostProcess_obj::createTexture( int width,int height){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","createTexture",0xf0f6eb03,"flixel.effects.postprocess.PostProcess.createTexture","flixel/effects/postprocess/PostProcess.hx",151,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(152)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		this->texture = tmp2;
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::openfl::_legacy::gl::GLTexture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			::openfl::_legacy::gl::GLTexture texture = tmp3;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(154)
			bool tmp4 = (texture == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			if ((tmp4)){
				HX_STACK_LINE(154)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(154)
				tmp5 = texture->id;
			}
			HX_STACK_LINE(154)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp5);
		}
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			::openfl::_legacy::utils::ByteArray tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			if ((tmp5)){
				HX_STACK_LINE(155)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(155)
				tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(155)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(155)
			if ((tmp7)){
				HX_STACK_LINE(155)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(155)
				tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(155)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6407,tmp3,tmp4,(int)0,(int)6407,(int)5121,tmp6,tmp8);
		}
		HX_STACK_LINE(157)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(158)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		HX_STACK_LINE(159)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
		HX_STACK_LINE(160)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			::openfl::_legacy::gl::GLTexture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,tmp4,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createTexture,(void))

Void PostProcess_obj::capture( ){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","capture",0x78fbaf4a,"flixel.effects.postprocess.PostProcess.capture","flixel/effects/postprocess/PostProcess.hx",170,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		{
			HX_STACK_LINE(171)
			::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(171)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(171)
			bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(171)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(171)
			if ((tmp1)){
				HX_STACK_LINE(171)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(171)
				tmp2 = framebuffer->id;
			}
			HX_STACK_LINE(171)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp2);
		}
		HX_STACK_LINE(172)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear((int)16640);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,capture,(void))

Void PostProcess_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","update",0xf99cabc5,"flixel.effects.postprocess.PostProcess.update","flixel/effects/postprocess/PostProcess.hx",177,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(177)
		hx::AddEq(this->time,elapsed);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,update,(void))

HX_BEGIN_DEFAULT_FUNC(__default_render,PostProcess_obj)
Void run(::openfl::_legacy::geom::Rectangle rect){
{
		HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","render",0x77c09112,"flixel.effects.postprocess.PostProcess.render","flixel/effects/postprocess/PostProcess.hx",185,0x6a90b60f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			::openfl::_legacy::gl::GLFramebuffer tmp = __this->renderTo;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(186)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(186)
			bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(186)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(186)
			if ((tmp1)){
				HX_STACK_LINE(186)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(186)
				tmp2 = framebuffer->id;
			}
			HX_STACK_LINE(186)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp2);
		}
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int tmp = __this->screenWidth;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(187)
			int tmp1 = __this->screenHeight;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport((int)0,(int)0,tmp,tmp1);
		}
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			::flixel::effects::postprocess::Shader tmp = __this->postProcessShader;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			::openfl::_legacy::gl::GLProgram program = tmp->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(189)
			bool tmp1 = (program == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			if ((tmp1)){
				HX_STACK_LINE(189)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(189)
				tmp2 = program->id;
			}
			HX_STACK_LINE(189)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp2);
		}
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int tmp = __this->vertexSlot;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(191)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp);
		}
		HX_STACK_LINE(192)
		{
			HX_STACK_LINE(192)
			int tmp = __this->texCoordSlot;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(192)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp);
		}
		HX_STACK_LINE(194)
		::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33984);
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::openfl::_legacy::gl::GLTexture tmp = __this->texture;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(195)
			::openfl::_legacy::gl::GLTexture texture = tmp;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(195)
			bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(195)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(195)
			if ((tmp1)){
				HX_STACK_LINE(195)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(195)
				tmp2 = texture->id;
			}
			HX_STACK_LINE(195)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp2);
		}
		HX_STACK_LINE(196)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3553);
		HX_STACK_LINE(198)
		{
			HX_STACK_LINE(198)
			::openfl::_legacy::gl::GLBuffer tmp = __this->buffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(198)
			::openfl::_legacy::gl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(198)
			bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(198)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			if ((tmp1)){
				HX_STACK_LINE(198)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(198)
				tmp2 = buffer->id;
			}
			HX_STACK_LINE(198)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp2);
		}
		HX_STACK_LINE(199)
		{
			HX_STACK_LINE(199)
			int tmp = __this->vertexSlot;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(199)
			::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp,(int)2,(int)5126,false,(int)16,(int)0);
		}
		HX_STACK_LINE(200)
		{
			HX_STACK_LINE(200)
			int tmp = __this->texCoordSlot;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(200)
			::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp,(int)2,(int)5126,false,(int)16,(int)8);
		}
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int tmp = __this->imageUniform;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(202)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp,(int)0);
		}
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int tmp = __this->timeUniform;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(203)
			Float tmp1 = __this->time;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp,tmp1);
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int tmp = __this->resolutionUniform;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(204)
			int tmp1 = __this->screenWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(204)
			int tmp2 = __this->screenHeight;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform2f(tmp,tmp1,tmp2);
		}
		HX_STACK_LINE(206)
		::haxe::ds::StringMap tmp = __this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		for(::cpp::FastIterator_obj< ::flixel::effects::postprocess::_PostProcess::Uniform > *__it = ::cpp::CreateFastIterator< ::flixel::effects::postprocess::_PostProcess::Uniform >(tmp1);  __it->hasNext(); ){
			::flixel::effects::postprocess::_PostProcess::Uniform u = __it->next();
			{
				HX_STACK_LINE(208)
				int tmp2 = u->id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(208)
				Float tmp3 = u->value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp2,tmp3);
			}
;
		}
		HX_STACK_LINE(211)
		::openfl::_legacy::gl::GL_obj::lime_gl_draw_arrays((int)4,(int)0,(int)6);
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			if ((tmp2)){
				HX_STACK_LINE(213)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(213)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(213)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp3);
		}
		HX_STACK_LINE(214)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3553);
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(215)
			if ((tmp2)){
				HX_STACK_LINE(215)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(215)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(215)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp3);
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			int tmp2 = __this->vertexSlot;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp2);
		}
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			int tmp2 = __this->texCoordSlot;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp2);
		}
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(220)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(220)
			if ((tmp2)){
				HX_STACK_LINE(220)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(220)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(220)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp3);
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			if ((tmp2)){
				HX_STACK_LINE(222)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(222)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(222)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp3);
		}
		HX_STACK_LINE(225)
		int tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		bool tmp3 = (tmp2 == (int)1286);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		if ((tmp3)){
			HX_STACK_LINE(227)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),227,HX_HCSTRING("flixel.effects.postprocess.PostProcess","\x32","\xdb","\x9f","\x9b"),HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			::haxe::Log_obj::trace(HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION!!","\x4d","\x16","\x05","\x20"),tmp4);
		}
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

::String PostProcess_obj::vertexShader;

Array< Float > PostProcess_obj::get_vertices( ){
	HX_STACK_FRAME("flixel.effects.postprocess.PostProcess","get_vertices",0x40f38ebe,"flixel.effects.postprocess.PostProcess.get_vertices","flixel/effects/postprocess/PostProcess.hx",269,0x6a90b60f)
	HX_STACK_LINE(269)
	return Array_obj< Float >::__new().Add(((Float)-1.0)).Add(((Float)-1.0)).Add((int)0).Add((int)0).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)1.0)).Add(((Float)1.0)).Add((int)1).Add((int)1).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,get_vertices,return )


PostProcess_obj::PostProcess_obj()
{
	render = new __default_render(this);
}

void PostProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PostProcess);
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(postProcessShader,"postProcessShader");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(renderTo,"renderTo");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_MARK_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_MARK_MEMBER_NAME(imageUniform,"imageUniform");
	HX_MARK_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_MARK_MEMBER_NAME(timeUniform,"timeUniform");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	::openfl::_legacy::display::DirectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PostProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(postProcessShader,"postProcessShader");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(renderTo,"renderTo");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_VISIT_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_VISIT_MEMBER_NAME(imageUniform,"imageUniform");
	HX_VISIT_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_VISIT_MEMBER_NAME(timeUniform,"timeUniform");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	::openfl::_legacy::display::DirectRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PostProcess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_to") ) { return set_to_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rebuild") ) { return rebuild_dyn(); }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { return renderTo; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setUniform") ) { return setUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { return vertexSlot; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		if (HX_FIELD_EQ(inName,"timeUniform") ) { return timeUniform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { return texCoordSlot; }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { return imageUniform; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"postProcessShader") ) { return postProcessShader; }
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { return resolutionUniform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
	}
	return super::__Field(inName,inCallProp);
}

bool PostProcess_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { if (inCallProp == hx::paccAlways) { outValue = get_vertices(); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { outValue = get_vertices_dyn(); return true;  }
	}
	return false;
}

Dynamic PostProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { if (inCallProp == hx::paccAlways) return set_to(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_legacy::gl::GLBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::openfl::_legacy::gl::GLTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { renderTo=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { vertexSlot=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeUniform") ) { timeUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { texCoordSlot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { imageUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"postProcessShader") ) { postProcessShader=inValue.Cast< ::flixel::effects::postprocess::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { resolutionUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81"));
	outFields->push(HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf"));
	outFields->push(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("postProcessShader","\x74","\x62","\x84","\x07"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("vertexSlot","\x82","\x67","\x12","\xdd"));
	outFields->push(HX_HCSTRING("texCoordSlot","\x6c","\xd0","\x32","\x2f"));
	outFields->push(HX_HCSTRING("imageUniform","\x19","\xbb","\x2c","\xa5"));
	outFields->push(HX_HCSTRING("resolutionUniform","\x68","\x71","\xd8","\x86"));
	outFields->push(HX_HCSTRING("timeUniform","\xa7","\xe8","\xb9","\x27"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PostProcess_obj,screenWidth),HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,screenHeight),HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PostProcess_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(PostProcess_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{hx::fsObject /*::openfl::_legacy::gl::GLTexture*/ ,(int)offsetof(PostProcess_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::flixel::effects::postprocess::Shader*/ ,(int)offsetof(PostProcess_obj,postProcessShader),HX_HCSTRING("postProcessShader","\x74","\x62","\x84","\x07")},
	{hx::fsObject /*::openfl::_legacy::gl::GLBuffer*/ ,(int)offsetof(PostProcess_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,renderTo),HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,defaultFramebuffer),HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39")},
	{hx::fsFloat,(int)offsetof(PostProcess_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,vertexSlot),HX_HCSTRING("vertexSlot","\x82","\x67","\x12","\xdd")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,texCoordSlot),HX_HCSTRING("texCoordSlot","\x6c","\xd0","\x32","\x2f")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,imageUniform),HX_HCSTRING("imageUniform","\x19","\xbb","\x2c","\xa5")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,resolutionUniform),HX_HCSTRING("resolutionUniform","\x68","\x71","\xd8","\x86")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,timeUniform),HX_HCSTRING("timeUniform","\xa7","\xe8","\xb9","\x27")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(PostProcess_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &PostProcess_obj::vertexShader,HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81"),
	HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf"),
	HX_HCSTRING("setUniform","\xb2","\x65","\x43","\x08"),
	HX_HCSTRING("set_to","\x38","\x51","\x78","\x6f"),
	HX_HCSTRING("rebuild","\x9b","\x2e","\x85","\xa1"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("capture","\x86","\xd0","\x51","\xa7"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("postProcessShader","\x74","\x62","\x84","\x07"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2"),
	HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("vertexSlot","\x82","\x67","\x12","\xdd"),
	HX_HCSTRING("texCoordSlot","\x6c","\xd0","\x32","\x2f"),
	HX_HCSTRING("imageUniform","\x19","\xbb","\x2c","\xa5"),
	HX_HCSTRING("resolutionUniform","\x68","\x71","\xd8","\x86"),
	HX_HCSTRING("timeUniform","\xa7","\xe8","\xb9","\x27"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

#endif

hx::Class PostProcess_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd"),
	HX_HCSTRING("get_vertices","\x02","\x74","\x2f","\x1f"),
	::String(null()) };

void PostProcess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.postprocess.PostProcess","\x32","\xdb","\x9f","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PostProcess_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PostProcess_obj >;
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

void PostProcess_obj::__boot()
{
	vertexShader= HX_HCSTRING("\r\n#ifdef GL_ES\r\n\tprecision mediump float;\r\n#endif\r\n\r\nattribute vec2 aVertex;\r\nattribute vec2 aTexCoord;\r\nvarying vec2 vTexCoord;\r\n\r\nvoid main() {\r\n\tvTexCoord = aTexCoord;\r\n\tgl_Position = vec4(aVertex, 0.0, 1.0);\r\n}","\x53","\x85","\xc0","\x42");
}

} // end namespace flixel
} // end namespace effects
} // end namespace postprocess
