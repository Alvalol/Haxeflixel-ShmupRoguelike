#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace _legacy{
namespace gl{

Void GL_obj::__construct()
{
	return null();
}

//GL_obj::~GL_obj() { }

Dynamic GL_obj::__CreateEmpty() { return  new GL_obj; }
hx::ObjectPtr< GL_obj > GL_obj::__new()
{  hx::ObjectPtr< GL_obj > _result_ = new GL_obj();
	_result_->__construct();
	return _result_;}

Dynamic GL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GL_obj > _result_ = new GL_obj();
	_result_->__construct();
	return _result_;}

int GL_obj::DEPTH_BUFFER_BIT;

int GL_obj::STENCIL_BUFFER_BIT;

int GL_obj::COLOR_BUFFER_BIT;

int GL_obj::POINTS;

int GL_obj::LINES;

int GL_obj::LINE_LOOP;

int GL_obj::LINE_STRIP;

int GL_obj::TRIANGLES;

int GL_obj::TRIANGLE_STRIP;

int GL_obj::TRIANGLE_FAN;

int GL_obj::ZERO;

int GL_obj::ONE;

int GL_obj::SRC_COLOR;

int GL_obj::ONE_MINUS_SRC_COLOR;

int GL_obj::SRC_ALPHA;

int GL_obj::ONE_MINUS_SRC_ALPHA;

int GL_obj::DST_ALPHA;

int GL_obj::ONE_MINUS_DST_ALPHA;

int GL_obj::DST_COLOR;

int GL_obj::ONE_MINUS_DST_COLOR;

int GL_obj::SRC_ALPHA_SATURATE;

int GL_obj::FUNC_ADD;

int GL_obj::BLEND_EQUATION;

int GL_obj::BLEND_EQUATION_RGB;

int GL_obj::BLEND_EQUATION_ALPHA;

int GL_obj::FUNC_SUBTRACT;

int GL_obj::FUNC_REVERSE_SUBTRACT;

int GL_obj::BLEND_DST_RGB;

int GL_obj::BLEND_SRC_RGB;

int GL_obj::BLEND_DST_ALPHA;

int GL_obj::BLEND_SRC_ALPHA;

int GL_obj::CONSTANT_COLOR;

int GL_obj::ONE_MINUS_CONSTANT_COLOR;

int GL_obj::CONSTANT_ALPHA;

int GL_obj::ONE_MINUS_CONSTANT_ALPHA;

int GL_obj::BLEND_COLOR;

int GL_obj::ARRAY_BUFFER;

int GL_obj::ELEMENT_ARRAY_BUFFER;

int GL_obj::ARRAY_BUFFER_BINDING;

int GL_obj::ELEMENT_ARRAY_BUFFER_BINDING;

int GL_obj::STREAM_DRAW;

int GL_obj::STATIC_DRAW;

int GL_obj::DYNAMIC_DRAW;

int GL_obj::BUFFER_SIZE;

int GL_obj::BUFFER_USAGE;

int GL_obj::CURRENT_VERTEX_ATTRIB;

int GL_obj::FRONT;

int GL_obj::BACK;

int GL_obj::FRONT_AND_BACK;

int GL_obj::CULL_FACE;

int GL_obj::BLEND;

int GL_obj::DITHER;

int GL_obj::STENCIL_TEST;

int GL_obj::DEPTH_TEST;

int GL_obj::SCISSOR_TEST;

int GL_obj::POLYGON_OFFSET_FILL;

int GL_obj::SAMPLE_ALPHA_TO_COVERAGE;

int GL_obj::SAMPLE_COVERAGE;

int GL_obj::NO_ERROR;

int GL_obj::INVALID_ENUM;

int GL_obj::INVALID_VALUE;

int GL_obj::INVALID_OPERATION;

int GL_obj::OUT_OF_MEMORY;

int GL_obj::CW;

int GL_obj::CCW;

int GL_obj::LINE_WIDTH;

int GL_obj::ALIASED_POINT_SIZE_RANGE;

int GL_obj::ALIASED_LINE_WIDTH_RANGE;

int GL_obj::CULL_FACE_MODE;

int GL_obj::FRONT_FACE;

int GL_obj::DEPTH_RANGE;

int GL_obj::DEPTH_WRITEMASK;

int GL_obj::DEPTH_CLEAR_VALUE;

int GL_obj::DEPTH_FUNC;

int GL_obj::STENCIL_CLEAR_VALUE;

int GL_obj::STENCIL_FUNC;

int GL_obj::STENCIL_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_PASS_DEPTH_PASS;

int GL_obj::STENCIL_REF;

int GL_obj::STENCIL_VALUE_MASK;

int GL_obj::STENCIL_WRITEMASK;

int GL_obj::STENCIL_BACK_FUNC;

int GL_obj::STENCIL_BACK_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL;

int GL_obj::STENCIL_BACK_PASS_DEPTH_PASS;

int GL_obj::STENCIL_BACK_REF;

int GL_obj::STENCIL_BACK_VALUE_MASK;

int GL_obj::STENCIL_BACK_WRITEMASK;

int GL_obj::VIEWPORT;

int GL_obj::SCISSOR_BOX;

int GL_obj::COLOR_CLEAR_VALUE;

int GL_obj::COLOR_WRITEMASK;

int GL_obj::UNPACK_ALIGNMENT;

int GL_obj::PACK_ALIGNMENT;

int GL_obj::MAX_TEXTURE_SIZE;

int GL_obj::MAX_VIEWPORT_DIMS;

int GL_obj::SUBPIXEL_BITS;

int GL_obj::RED_BITS;

int GL_obj::GREEN_BITS;

int GL_obj::BLUE_BITS;

int GL_obj::ALPHA_BITS;

int GL_obj::DEPTH_BITS;

int GL_obj::STENCIL_BITS;

int GL_obj::POLYGON_OFFSET_UNITS;

int GL_obj::POLYGON_OFFSET_FACTOR;

int GL_obj::TEXTURE_BINDING_2D;

int GL_obj::SAMPLE_BUFFERS;

int GL_obj::SAMPLES;

int GL_obj::SAMPLE_COVERAGE_VALUE;

int GL_obj::SAMPLE_COVERAGE_INVERT;

int GL_obj::COMPRESSED_TEXTURE_FORMATS;

int GL_obj::DONT_CARE;

int GL_obj::FASTEST;

int GL_obj::NICEST;

int GL_obj::GENERATE_MIPMAP_HINT;

int GL_obj::BYTE;

int GL_obj::UNSIGNED_BYTE;

int GL_obj::SHORT;

int GL_obj::UNSIGNED_SHORT;

int GL_obj::INT;

int GL_obj::UNSIGNED_INT;

int GL_obj::FLOAT;

int GL_obj::DEPTH_COMPONENT;

int GL_obj::ALPHA;

int GL_obj::RGB;

int GL_obj::RGBA;

int GL_obj::LUMINANCE;

int GL_obj::LUMINANCE_ALPHA;

int GL_obj::UNSIGNED_SHORT_4_4_4_4;

int GL_obj::UNSIGNED_SHORT_5_5_5_1;

int GL_obj::UNSIGNED_SHORT_5_6_5;

int GL_obj::FRAGMENT_SHADER;

int GL_obj::VERTEX_SHADER;

int GL_obj::MAX_VERTEX_ATTRIBS;

int GL_obj::MAX_VERTEX_UNIFORM_VECTORS;

int GL_obj::MAX_VARYING_VECTORS;

int GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_TEXTURE_IMAGE_UNITS;

int GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS;

int GL_obj::SHADER_TYPE;

int GL_obj::DELETE_STATUS;

int GL_obj::LINK_STATUS;

int GL_obj::VALIDATE_STATUS;

int GL_obj::ATTACHED_SHADERS;

int GL_obj::ACTIVE_UNIFORMS;

int GL_obj::ACTIVE_ATTRIBUTES;

int GL_obj::SHADING_LANGUAGE_VERSION;

int GL_obj::CURRENT_PROGRAM;

int GL_obj::NEVER;

int GL_obj::LESS;

int GL_obj::EQUAL;

int GL_obj::LEQUAL;

int GL_obj::GREATER;

int GL_obj::NOTEQUAL;

int GL_obj::GEQUAL;

int GL_obj::ALWAYS;

int GL_obj::KEEP;

int GL_obj::REPLACE;

int GL_obj::INCR;

int GL_obj::DECR;

int GL_obj::INVERT;

int GL_obj::INCR_WRAP;

int GL_obj::DECR_WRAP;

int GL_obj::VENDOR;

int GL_obj::RENDERER;

int GL_obj::VERSION;

int GL_obj::NEAREST;

int GL_obj::LINEAR;

int GL_obj::NEAREST_MIPMAP_NEAREST;

int GL_obj::LINEAR_MIPMAP_NEAREST;

int GL_obj::NEAREST_MIPMAP_LINEAR;

int GL_obj::LINEAR_MIPMAP_LINEAR;

int GL_obj::TEXTURE_MAG_FILTER;

int GL_obj::TEXTURE_MIN_FILTER;

int GL_obj::TEXTURE_WRAP_S;

int GL_obj::TEXTURE_WRAP_T;

int GL_obj::TEXTURE_2D;

int GL_obj::TEXTURE;

int GL_obj::TEXTURE_CUBE_MAP;

int GL_obj::TEXTURE_BINDING_CUBE_MAP;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y;

int GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z;

int GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z;

int GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE;

int GL_obj::TEXTURE0;

int GL_obj::TEXTURE1;

int GL_obj::TEXTURE2;

int GL_obj::TEXTURE3;

int GL_obj::TEXTURE4;

int GL_obj::TEXTURE5;

int GL_obj::TEXTURE6;

int GL_obj::TEXTURE7;

int GL_obj::TEXTURE8;

int GL_obj::TEXTURE9;

int GL_obj::TEXTURE10;

int GL_obj::TEXTURE11;

int GL_obj::TEXTURE12;

int GL_obj::TEXTURE13;

int GL_obj::TEXTURE14;

int GL_obj::TEXTURE15;

int GL_obj::TEXTURE16;

int GL_obj::TEXTURE17;

int GL_obj::TEXTURE18;

int GL_obj::TEXTURE19;

int GL_obj::TEXTURE20;

int GL_obj::TEXTURE21;

int GL_obj::TEXTURE22;

int GL_obj::TEXTURE23;

int GL_obj::TEXTURE24;

int GL_obj::TEXTURE25;

int GL_obj::TEXTURE26;

int GL_obj::TEXTURE27;

int GL_obj::TEXTURE28;

int GL_obj::TEXTURE29;

int GL_obj::TEXTURE30;

int GL_obj::TEXTURE31;

int GL_obj::ACTIVE_TEXTURE;

int GL_obj::REPEAT;

int GL_obj::CLAMP_TO_EDGE;

int GL_obj::MIRRORED_REPEAT;

int GL_obj::FLOAT_VEC2;

int GL_obj::FLOAT_VEC3;

int GL_obj::FLOAT_VEC4;

int GL_obj::INT_VEC2;

int GL_obj::INT_VEC3;

int GL_obj::INT_VEC4;

int GL_obj::BOOL;

int GL_obj::BOOL_VEC2;

int GL_obj::BOOL_VEC3;

int GL_obj::BOOL_VEC4;

int GL_obj::FLOAT_MAT2;

int GL_obj::FLOAT_MAT3;

int GL_obj::FLOAT_MAT4;

int GL_obj::SAMPLER_2D;

int GL_obj::SAMPLER_CUBE;

int GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED;

int GL_obj::VERTEX_ATTRIB_ARRAY_SIZE;

int GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE;

int GL_obj::VERTEX_ATTRIB_ARRAY_TYPE;

int GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED;

int GL_obj::VERTEX_ATTRIB_ARRAY_POINTER;

int GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;

int GL_obj::VERTEX_PROGRAM_POINT_SIZE;

int GL_obj::POINT_SPRITE;

int GL_obj::COMPILE_STATUS;

int GL_obj::LOW_FLOAT;

int GL_obj::MEDIUM_FLOAT;

int GL_obj::HIGH_FLOAT;

int GL_obj::LOW_INT;

int GL_obj::MEDIUM_INT;

int GL_obj::HIGH_INT;

int GL_obj::FRAMEBUFFER;

int GL_obj::RENDERBUFFER;

int GL_obj::RGBA4;

int GL_obj::RGB5_A1;

int GL_obj::RGB565;

int GL_obj::DEPTH_COMPONENT16;

int GL_obj::STENCIL_INDEX;

int GL_obj::STENCIL_INDEX8;

int GL_obj::DEPTH_STENCIL;

int GL_obj::RENDERBUFFER_WIDTH;

int GL_obj::RENDERBUFFER_HEIGHT;

int GL_obj::RENDERBUFFER_INTERNAL_FORMAT;

int GL_obj::RENDERBUFFER_RED_SIZE;

int GL_obj::RENDERBUFFER_GREEN_SIZE;

int GL_obj::RENDERBUFFER_BLUE_SIZE;

int GL_obj::RENDERBUFFER_ALPHA_SIZE;

int GL_obj::RENDERBUFFER_DEPTH_SIZE;

int GL_obj::RENDERBUFFER_STENCIL_SIZE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;

int GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;

int GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;

int GL_obj::COLOR_ATTACHMENT0;

int GL_obj::DEPTH_ATTACHMENT;

int GL_obj::STENCIL_ATTACHMENT;

int GL_obj::DEPTH_STENCIL_ATTACHMENT;

int GL_obj::NONE;

int GL_obj::FRAMEBUFFER_COMPLETE;

int GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;

int GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS;

int GL_obj::FRAMEBUFFER_UNSUPPORTED;

int GL_obj::FRAMEBUFFER_BINDING;

int GL_obj::RENDERBUFFER_BINDING;

int GL_obj::MAX_RENDERBUFFER_SIZE;

int GL_obj::INVALID_FRAMEBUFFER_OPERATION;

int GL_obj::UNPACK_FLIP_Y_WEBGL;

int GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL;

int GL_obj::CONTEXT_LOST_WEBGL;

int GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL;

int GL_obj::BROWSER_DEFAULT_WEBGL;

int GL_obj::drawingBufferHeight;

int GL_obj::drawingBufferWidth;

int GL_obj::version;

::openfl::_legacy::gl::GLFramebuffer GL_obj::defaultFramebuffer;

Void GL_obj::activeTexture( int texture){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","activeTexture",0x456c22b1,"openfl._legacy.gl.GL.activeTexture","openfl/_legacy/gl/GL.hx",438,0x4e24c9f5)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(438)
		int tmp = texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		::openfl::_legacy::gl::GL_obj::lime_gl_active_texture(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,activeTexture,(void))

Void GL_obj::attachShader( ::openfl::_legacy::gl::GLProgram program,::openfl::_legacy::gl::GLShader shader){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","attachShader",0xdcddb54e,"openfl._legacy.gl.GL.attachShader","openfl/_legacy/gl/GL.hx",441,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(442)
		::openfl::_legacy::gl::GLShader tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		program->attach(tmp);
		HX_STACK_LINE(443)
		Dynamic tmp1 = program->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		Dynamic tmp2 = shader->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,attachShader,(void))

Void GL_obj::bindAttribLocation( ::openfl::_legacy::gl::GLProgram program,int index,::String name){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bindAttribLocation",0x312ac5c0,"openfl._legacy.gl.GL.bindAttribLocation","openfl/_legacy/gl/GL.hx",447,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(448)
		Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_attrib_location(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bindAttribLocation,(void))

Void GL_obj::bindBitmapDataTexture( ::openfl::_legacy::display::BitmapData texture){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bindBitmapDataTexture",0x89cc44a1,"openfl._legacy.gl.GL.bindBitmapDataTexture","openfl/_legacy/gl/GL.hx",452,0x4e24c9f5)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(453)
		Dynamic tmp = texture->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_bitmap_data_texture(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,bindBitmapDataTexture,(void))

Void GL_obj::bindBuffer( int target,::openfl::_legacy::gl::GLBuffer buffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bindBuffer",0x294b8e21,"openfl._legacy.gl.GL.bindBuffer","openfl/_legacy/gl/GL.hx",457,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(458)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(458)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(458)
		if ((tmp1)){
			HX_STACK_LINE(458)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(458)
			tmp2 = buffer->id;
		}
		HX_STACK_LINE(458)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindBuffer,(void))

Void GL_obj::bindFramebuffer( int target,::openfl::_legacy::gl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bindFramebuffer",0x96028c2c,"openfl._legacy.gl.GL.bindFramebuffer","openfl/_legacy/gl/GL.hx",462,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(466)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(466)
		bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(466)
		if ((tmp1)){
			HX_STACK_LINE(466)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(466)
			tmp2 = framebuffer->id;
		}
		HX_STACK_LINE(466)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindFramebuffer,(void))

Void GL_obj::bindRenderbuffer( int target,::openfl::_legacy::gl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bindRenderbuffer",0x32c42cb7,"openfl._legacy.gl.GL.bindRenderbuffer","openfl/_legacy/gl/GL.hx",470,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(471)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(471)
		bool tmp1 = (renderbuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		if ((tmp1)){
			HX_STACK_LINE(471)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(471)
			tmp2 = renderbuffer->id;
		}
		HX_STACK_LINE(471)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindRenderbuffer,(void))

Void GL_obj::bindTexture( int target,::openfl::_legacy::gl::GLTexture texture){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bindTexture",0xe620f49a,"openfl._legacy.gl.GL.bindTexture","openfl/_legacy/gl/GL.hx",475,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(476)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(476)
		bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		if ((tmp1)){
			HX_STACK_LINE(476)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(476)
			tmp2 = texture->id;
		}
		HX_STACK_LINE(476)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture(tmp,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,bindTexture,(void))

Void GL_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","blendColor",0x13412ed6,"openfl._legacy.gl.GL.blendColor","openfl/_legacy/gl/GL.hx",480,0x4e24c9f5)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(481)
		Float tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		Float tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		Float tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		::openfl::_legacy::gl::GL_obj::lime_gl_blend_color(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendColor,(void))

Void GL_obj::blendEquation( int mode){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","blendEquation",0xf16fa7f9,"openfl._legacy.gl.GL.blendEquation","openfl/_legacy/gl/GL.hx",485,0x4e24c9f5)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(486)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(486)
		::openfl::_legacy::gl::GL_obj::lime_gl_blend_equation(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,blendEquation,(void))

Void GL_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","blendEquationSeparate",0x018ba47c,"openfl._legacy.gl.GL.blendEquationSeparate","openfl/_legacy/gl/GL.hx",490,0x4e24c9f5)
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(491)
		int tmp = modeRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		int tmp1 = modeAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		::openfl::_legacy::gl::GL_obj::lime_gl_blend_equation_separate(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendEquationSeparate,(void))

Void GL_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","blendFunc",0xa3f3dd31,"openfl._legacy.gl.GL.blendFunc","openfl/_legacy/gl/GL.hx",495,0x4e24c9f5)
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(496)
		int tmp = sfactor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(496)
		int tmp1 = dfactor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		::openfl::_legacy::gl::GL_obj::lime_gl_blend_func(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,blendFunc,(void))

Void GL_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","blendFuncSeparate",0xf79bd1b4,"openfl._legacy.gl.GL.blendFuncSeparate","openfl/_legacy/gl/GL.hx",500,0x4e24c9f5)
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(501)
		int tmp = srcRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		int tmp1 = dstRGB;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		int tmp2 = srcAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		int tmp3 = dstAlpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		::openfl::_legacy::gl::GL_obj::lime_gl_blend_func_separate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,blendFuncSeparate,(void))

Void GL_obj::bufferData( int target,::openfl::_legacy::utils::IMemoryRange data,int usage){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bufferData",0xc400bace,"openfl._legacy.gl.GL.bufferData","openfl/_legacy/gl/GL.hx",505,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(506)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		::openfl::_legacy::utils::ByteArray tmp1 = data->getByteBuffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		int tmp2 = data->getStart();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		int tmp3 = data->getLength();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		int tmp4 = usage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferData,(void))

Void GL_obj::bufferSubData( int target,int offset,::openfl::_legacy::utils::IMemoryRange data){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","bufferSubData",0x34a705a6,"openfl._legacy.gl.GL.bufferSubData","openfl/_legacy/gl/GL.hx",510,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(511)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(511)
		int tmp1 = offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		::openfl::_legacy::utils::ByteArray tmp2 = data->getByteBuffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		int tmp3 = data->getStart();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		int tmp4 = data->getLength();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		::openfl::_legacy::gl::GL_obj::lime_gl_buffer_sub_data(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,bufferSubData,(void))

int GL_obj::checkFramebufferStatus( int target){
	HX_STACK_FRAME("openfl._legacy.gl.GL","checkFramebufferStatus",0x8f4f579b,"openfl._legacy.gl.GL.checkFramebufferStatus","openfl/_legacy/gl/GL.hx",515,0x4e24c9f5)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(516)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	int tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_check_framebuffer_status(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(516)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,checkFramebufferStatus,return )

Void GL_obj::clear( int mask){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","clear",0x3a782489,"openfl._legacy.gl.GL.clear","openfl/_legacy/gl/GL.hx",520,0x4e24c9f5)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(521)
		int tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clear,(void))

Void GL_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","clearColor",0x4ff3ac1a,"openfl._legacy.gl.GL.clearColor","openfl/_legacy/gl/GL.hx",525,0x4e24c9f5)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(526)
		Float tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		Float tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		Float tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(526)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(526)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear_color(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,clearColor,(void))

Void GL_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","clearDepth",0xdcc12bba,"openfl._legacy.gl.GL.clearDepth","openfl/_legacy/gl/GL.hx",530,0x4e24c9f5)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(531)
		Float tmp = depth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(531)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear_depth(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearDepth,(void))

Void GL_obj::clearStencil( int s){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","clearStencil",0x85e85473,"openfl._legacy.gl.GL.clearStencil","openfl/_legacy/gl/GL.hx",535,0x4e24c9f5)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(536)
		int tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(536)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear_stencil(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,clearStencil,(void))

Void GL_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","colorMask",0xc01baceb,"openfl._legacy.gl.GL.colorMask","openfl/_legacy/gl/GL.hx",540,0x4e24c9f5)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(541)
		bool tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(541)
		bool tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(541)
		bool tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(541)
		bool tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(541)
		::openfl::_legacy::gl::GL_obj::lime_gl_color_mask(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,colorMask,(void))

Void GL_obj::compileShader( ::openfl::_legacy::gl::GLShader shader){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","compileShader",0xc9747ff4,"openfl._legacy.gl.GL.compileShader","openfl/_legacy/gl/GL.hx",545,0x4e24c9f5)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(546)
		Dynamic tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(546)
		::openfl::_legacy::gl::GL_obj::lime_gl_compile_shader(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,compileShader,(void))

Void GL_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::openfl::_legacy::utils::IMemoryRange data){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","compressedTexImage2D",0x81c1e12b,"openfl._legacy.gl.GL.compressedTexImage2D","openfl/_legacy/gl/GL.hx",550,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(551)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(551)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(551)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(551)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(551)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(551)
		int tmp5 = border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(551)
		bool tmp6 = (data == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(551)
		::openfl::_legacy::utils::ByteArray tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(551)
		if ((tmp6)){
			HX_STACK_LINE(551)
			tmp7 = null();
		}
		else{
			HX_STACK_LINE(551)
			tmp7 = data->getByteBuffer();
		}
		HX_STACK_LINE(551)
		bool tmp8 = (data == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(551)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(551)
		if ((tmp8)){
			HX_STACK_LINE(551)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(551)
			tmp9 = data->getStart();
		}
		HX_STACK_LINE(551)
		::openfl::_legacy::gl::GL_obj::lime_gl_compressed_tex_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp7,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,compressedTexImage2D,(void))

Void GL_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::openfl::_legacy::utils::IMemoryRange data){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","compressedTexSubImage2D",0xf08ed7cf,"openfl._legacy.gl.GL.compressedTexSubImage2D","openfl/_legacy/gl/GL.hx",555,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(556)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(556)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(556)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(556)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(556)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(556)
		bool tmp7 = (data == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(556)
		::openfl::_legacy::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(556)
		if ((tmp7)){
			HX_STACK_LINE(556)
			tmp8 = null();
		}
		else{
			HX_STACK_LINE(556)
			tmp8 = data->getByteBuffer();
		}
		HX_STACK_LINE(556)
		bool tmp9 = (data == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(556)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(556)
		if ((tmp9)){
			HX_STACK_LINE(556)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(556)
			tmp10 = data->getStart();
		}
		HX_STACK_LINE(556)
		::openfl::_legacy::gl::GL_obj::lime_gl_compressed_tex_sub_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp8,tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,compressedTexSubImage2D,(void))

Void GL_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","copyTexImage2D",0xdf81de5f,"openfl._legacy.gl.GL.copyTexImage2D","openfl/_legacy/gl/GL.hx",560,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(561)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(561)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(561)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(561)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(561)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(561)
		int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(561)
		int tmp7 = border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(561)
		::openfl::_legacy::gl::GL_obj::lime_gl_copy_tex_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexImage2D,(void))

Void GL_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","copyTexSubImage2D",0xd18a131b,"openfl._legacy.gl.GL.copyTexSubImage2D","openfl/_legacy/gl/GL.hx",565,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(566)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(566)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(566)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(566)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(566)
		int tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(566)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(566)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(566)
		::openfl::_legacy::gl::GL_obj::lime_gl_copy_tex_sub_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GL_obj,copyTexSubImage2D,(void))

::openfl::_legacy::gl::GLBuffer GL_obj::createBuffer( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","createBuffer",0x1d4fe1a0,"openfl._legacy.gl.GL.createBuffer","openfl/_legacy/gl/GL.hx",570,0x4e24c9f5)
	HX_STACK_LINE(571)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	::openfl::_legacy::gl::GLBuffer tmp2 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(571)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createBuffer,return )

::openfl::_legacy::gl::GLFramebuffer GL_obj::createFramebuffer( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","createFramebuffer",0xf9c42c4d,"openfl._legacy.gl.GL.createFramebuffer","openfl/_legacy/gl/GL.hx",575,0x4e24c9f5)
	HX_STACK_LINE(576)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(576)
	::openfl::_legacy::gl::GLFramebuffer tmp2 = ::openfl::_legacy::gl::GLFramebuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(576)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createFramebuffer,return )

::openfl::_legacy::gl::GLProgram GL_obj::createProgram( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","createProgram",0xcafe31e4,"openfl._legacy.gl.GL.createProgram","openfl/_legacy/gl/GL.hx",580,0x4e24c9f5)
	HX_STACK_LINE(581)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(581)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(581)
	::openfl::_legacy::gl::GLProgram tmp2 = ::openfl::_legacy::gl::GLProgram_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(581)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createProgram,return )

::openfl::_legacy::gl::GLRenderbuffer GL_obj::createRenderbuffer( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","createRenderbuffer",0x186ea976,"openfl._legacy.gl.GL.createRenderbuffer","openfl/_legacy/gl/GL.hx",585,0x4e24c9f5)
	HX_STACK_LINE(586)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(586)
	::openfl::_legacy::gl::GLRenderbuffer tmp2 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(586)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createRenderbuffer,return )

::openfl::_legacy::gl::GLShader GL_obj::createShader( int type){
	HX_STACK_FRAME("openfl._legacy.gl.GL","createShader",0x69dbe3c5,"openfl._legacy.gl.GL.createShader","openfl/_legacy/gl/GL.hx",590,0x4e24c9f5)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(591)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	int tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(591)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_shader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(591)
	::openfl::_legacy::gl::GLShader tmp3 = ::openfl::_legacy::gl::GLShader_obj::__new(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(591)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,createShader,return )

::openfl::_legacy::gl::GLTexture GL_obj::createTexture( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","createTexture",0x75e5b03b,"openfl._legacy.gl.GL.createTexture","openfl/_legacy/gl/GL.hx",595,0x4e24c9f5)
	HX_STACK_LINE(596)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,createTexture,return )

Void GL_obj::cullFace( int mode){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","cullFace",0x422239f3,"openfl._legacy.gl.GL.cullFace","openfl/_legacy/gl/GL.hx",600,0x4e24c9f5)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(601)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(601)
		::openfl::_legacy::gl::GL_obj::lime_gl_cull_face(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,cullFace,(void))

Void GL_obj::deleteBuffer( ::openfl::_legacy::gl::GLBuffer buffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","deleteBuffer",0x6192c80f,"openfl._legacy.gl.GL.deleteBuffer","openfl/_legacy/gl/GL.hx",605,0x4e24c9f5)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(606)
		Dynamic tmp = buffer->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(606)
		::openfl::_legacy::gl::GL_obj::lime_gl_delete_buffer(tmp);
		HX_STACK_LINE(607)
		buffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteBuffer,(void))

Void GL_obj::deleteFramebuffer( ::openfl::_legacy::gl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","deleteFramebuffer",0x7cdc937e,"openfl._legacy.gl.GL.deleteFramebuffer","openfl/_legacy/gl/GL.hx",611,0x4e24c9f5)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(612)
		Dynamic tmp = framebuffer->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(612)
		::openfl::_legacy::gl::GL_obj::lime_gl_delete_framebuffer(tmp);
		HX_STACK_LINE(613)
		framebuffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteFramebuffer,(void))

Void GL_obj::deleteProgram( ::openfl::_legacy::gl::GLProgram program){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","deleteProgram",0x4144ec95,"openfl._legacy.gl.GL.deleteProgram","openfl/_legacy/gl/GL.hx",617,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(618)
		Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		::openfl::_legacy::gl::GL_obj::lime_gl_delete_program(tmp);
		HX_STACK_LINE(619)
		program->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteProgram,(void))

Void GL_obj::deleteRenderbuffer( ::openfl::_legacy::gl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","deleteRenderbuffer",0x4ab08d25,"openfl._legacy.gl.GL.deleteRenderbuffer","openfl/_legacy/gl/GL.hx",623,0x4e24c9f5)
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(624)
		Dynamic tmp = renderbuffer->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(624)
		::openfl::_legacy::gl::GL_obj::lime_gl_delete_render_buffer(tmp);
		HX_STACK_LINE(625)
		renderbuffer->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteRenderbuffer,(void))

Void GL_obj::deleteShader( ::openfl::_legacy::gl::GLShader shader){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","deleteShader",0xae1eca34,"openfl._legacy.gl.GL.deleteShader","openfl/_legacy/gl/GL.hx",629,0x4e24c9f5)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(630)
		Dynamic tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(630)
		::openfl::_legacy::gl::GL_obj::lime_gl_delete_shader(tmp);
		HX_STACK_LINE(631)
		shader->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteShader,(void))

Void GL_obj::deleteTexture( ::openfl::_legacy::gl::GLTexture texture){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","deleteTexture",0xec2c6aec,"openfl._legacy.gl.GL.deleteTexture","openfl/_legacy/gl/GL.hx",635,0x4e24c9f5)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(636)
		Dynamic tmp = texture->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(636)
		::openfl::_legacy::gl::GL_obj::lime_gl_delete_texture(tmp);
		HX_STACK_LINE(637)
		texture->invalidate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,deleteTexture,(void))

Void GL_obj::depthFunc( int func){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","depthFunc",0x36a026e3,"openfl._legacy.gl.GL.depthFunc","openfl/_legacy/gl/GL.hx",641,0x4e24c9f5)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(642)
		int tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(642)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_func(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthFunc,(void))

Void GL_obj::depthMask( bool flag){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","depthMask",0x3b317c8b,"openfl._legacy.gl.GL.depthMask","openfl/_legacy/gl/GL.hx",646,0x4e24c9f5)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(647)
		bool tmp = flag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(647)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,depthMask,(void))

Void GL_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","depthRange",0x7118953e,"openfl._legacy.gl.GL.depthRange","openfl/_legacy/gl/GL.hx",651,0x4e24c9f5)
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(652)
		Float tmp = zNear;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(652)
		Float tmp1 = zFar;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_range(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,depthRange,(void))

Void GL_obj::detachShader( ::openfl::_legacy::gl::GLProgram program,::openfl::_legacy::gl::GLShader shader){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","detachShader",0x1513b55c,"openfl._legacy.gl.GL.detachShader","openfl/_legacy/gl/GL.hx",656,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(657)
		Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(657)
		Dynamic tmp1 = shader->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(657)
		::openfl::_legacy::gl::GL_obj::lime_gl_detach_shader(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,detachShader,(void))

Void GL_obj::disable( int cap){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","disable",0xea44d3e4,"openfl._legacy.gl.GL.disable","openfl/_legacy/gl/GL.hx",661,0x4e24c9f5)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(662)
		int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disable,(void))

Void GL_obj::disableVertexAttribArray( int index){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","disableVertexAttribArray",0x5f610467,"openfl._legacy.gl.GL.disableVertexAttribArray","openfl/_legacy/gl/GL.hx",666,0x4e24c9f5)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(667)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(667)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,disableVertexAttribArray,(void))

Void GL_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","drawArrays",0x2a40ef62,"openfl._legacy.gl.GL.drawArrays","openfl/_legacy/gl/GL.hx",671,0x4e24c9f5)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(672)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		int tmp1 = first;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(672)
		int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(672)
		::openfl::_legacy::gl::GL_obj::lime_gl_draw_arrays(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,drawArrays,(void))

Void GL_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","drawElements",0x841da6df,"openfl._legacy.gl.GL.drawElements","openfl/_legacy/gl/GL.hx",676,0x4e24c9f5)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(677)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(677)
		int tmp1 = count;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(677)
		int tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(677)
		::openfl::_legacy::gl::GL_obj::lime_gl_draw_elements(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,drawElements,(void))

Void GL_obj::enable( int cap){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","enable",0xdf879807,"openfl._legacy.gl.GL.enable","openfl/_legacy/gl/GL.hx",681,0x4e24c9f5)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(682)
		int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(682)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enable,(void))

Void GL_obj::enableVertexAttribArray( int index){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","enableVertexAttribArray",0x666b68e4,"openfl._legacy.gl.GL.enableVertexAttribArray","openfl/_legacy/gl/GL.hx",686,0x4e24c9f5)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(687)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(687)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,enableVertexAttribArray,(void))

Void GL_obj::finish( ){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","finish",0x6d7f29d7,"openfl._legacy.gl.GL.finish","openfl/_legacy/gl/GL.hx",692,0x4e24c9f5)
		HX_STACK_LINE(692)
		::openfl::_legacy::gl::GL_obj::lime_gl_finish();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,finish,(void))

Void GL_obj::flush( ){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","flush",0xf4b815c0,"openfl._legacy.gl.GL.flush","openfl/_legacy/gl/GL.hx",697,0x4e24c9f5)
		HX_STACK_LINE(697)
		::openfl::_legacy::gl::GL_obj::lime_gl_flush();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,flush,(void))

Void GL_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::openfl::_legacy::gl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","framebufferRenderbuffer",0xf0c3ff5f,"openfl._legacy.gl.GL.framebufferRenderbuffer","openfl/_legacy/gl/GL.hx",701,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(702)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(702)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(702)
		int tmp2 = renderbuffertarget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(702)
		Dynamic tmp3 = renderbuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,framebufferRenderbuffer,(void))

Void GL_obj::framebufferTexture2D( int target,int attachment,int textarget,::openfl::_legacy::gl::GLTexture texture,int level){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","framebufferTexture2D",0x81866f44,"openfl._legacy.gl.GL.framebufferTexture2D","openfl/_legacy/gl/GL.hx",706,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(707)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(707)
		int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(707)
		int tmp2 = textarget;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(707)
		Dynamic tmp3 = texture->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(707)
		int tmp4 = level;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(707)
		::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,framebufferTexture2D,(void))

Void GL_obj::frontFace( int mode){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","frontFace",0x1d18e2e2,"openfl._legacy.gl.GL.frontFace","openfl/_legacy/gl/GL.hx",711,0x4e24c9f5)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(712)
		int tmp = mode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(712)
		::openfl::_legacy::gl::GL_obj::lime_gl_front_face(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,frontFace,(void))

Void GL_obj::generateMipmap( int target){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","generateMipmap",0x5618e421,"openfl._legacy.gl.GL.generateMipmap","openfl/_legacy/gl/GL.hx",716,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(717)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(717)
		::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,generateMipmap,(void))

Dynamic GL_obj::getActiveAttrib( ::openfl::_legacy::gl::GLProgram program,int index){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getActiveAttrib",0x11c35162,"openfl._legacy.gl.GL.getActiveAttrib","openfl/_legacy/gl/GL.hx",721,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(722)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(722)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(722)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_active_attrib(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(722)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveAttrib,return )

Dynamic GL_obj::getActiveUniform( ::openfl::_legacy::gl::GLProgram program,int index){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getActiveUniform",0xf55aac1c,"openfl._legacy.gl.GL.getActiveUniform","openfl/_legacy/gl/GL.hx",726,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(727)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(727)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_active_uniform(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(727)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getActiveUniform,return )

Array< ::Dynamic > GL_obj::getAttachedShaders( ::openfl::_legacy::gl::GLProgram program){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getAttachedShaders",0xa6714e38,"openfl._legacy.gl.GL.getAttachedShaders","openfl/_legacy/gl/GL.hx",732,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(732)
	return program->getShaders();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getAttachedShaders,return )

int GL_obj::getAttribLocation( ::openfl::_legacy::gl::GLProgram program,::String name){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getAttribLocation",0x89eb57d1,"openfl._legacy.gl.GL.getAttribLocation","openfl/_legacy/gl/GL.hx",736,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(737)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(737)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(737)
	int tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(737)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getAttribLocation,return )

Dynamic GL_obj::getBufferParameter( int target,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getBufferParameter",0x27ae7817,"openfl._legacy.gl.GL.getBufferParameter","openfl/_legacy/gl/GL.hx",741,0x4e24c9f5)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(742)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(742)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(742)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_buffer_paramerter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(742)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getBufferParameter,return )

Dynamic GL_obj::getContextAttributes( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getContextAttributes",0x0b45e2b4,"openfl._legacy.gl.GL.getContextAttributes","openfl/_legacy/gl/GL.hx",746,0x4e24c9f5)
	HX_STACK_LINE(747)
	Dynamic tmp = ::openfl::_legacy::gl::GL_obj::lime_gl_get_context_attributes();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(747)
	Dynamic base = tmp;		HX_STACK_VAR(base,"base");
	HX_STACK_LINE(748)
	base->__FieldRef(HX_HCSTRING("premultipliedAlpha","\x28","\x8e","\x5c","\x1a")) = false;
	HX_STACK_LINE(749)
	base->__FieldRef(HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b")) = false;
	HX_STACK_LINE(750)
	Dynamic tmp1 = base;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(750)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getContextAttributes,return )

int GL_obj::getError( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getError",0x68f12dd6,"openfl._legacy.gl.GL.getError","openfl/_legacy/gl/GL.hx",754,0x4e24c9f5)
	HX_STACK_LINE(755)
	int tmp = ::openfl::_legacy::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(755)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getError,return )

Dynamic GL_obj::getExtension( ::String name){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getExtension",0x1ecd148d,"openfl._legacy.gl.GL.getExtension","openfl/_legacy/gl/GL.hx",761,0x4e24c9f5)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(761)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getExtension,return )

Dynamic GL_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getFramebufferAttachmentParameter",0xdfa3b48b,"openfl._legacy.gl.GL.getFramebufferAttachmentParameter","openfl/_legacy/gl/GL.hx",765,0x4e24c9f5)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(766)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(766)
	int tmp1 = attachment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(766)
	int tmp2 = pname;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(766)
	Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_framebuffer_attachment_parameter(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(766)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,getFramebufferAttachmentParameter,return )

Dynamic GL_obj::getParameter( int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getParameter",0x826cb6b7,"openfl._legacy.gl.GL.getParameter","openfl/_legacy/gl/GL.hx",770,0x4e24c9f5)
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(771)
	int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(771)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_parameter(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(771)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getParameter,return )

::String GL_obj::getProgramInfoLog( ::openfl::_legacy::gl::GLProgram program){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getProgramInfoLog",0xface2ec4,"openfl._legacy.gl.GL.getProgramInfoLog","openfl/_legacy/gl/GL.hx",775,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(776)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(776)
	::String tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_info_log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(776)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getProgramInfoLog,return )

int GL_obj::getProgramParameter( ::openfl::_legacy::gl::GLProgram program,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getProgramParameter",0x1e7e3737,"openfl._legacy.gl.GL.getProgramParameter","openfl/_legacy/gl/GL.hx",780,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(781)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(781)
	int tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(781)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getProgramParameter,return )

Dynamic GL_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getRenderbufferParameter",0x51c45c01,"openfl._legacy.gl.GL.getRenderbufferParameter","openfl/_legacy/gl/GL.hx",785,0x4e24c9f5)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(786)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(786)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_render_buffer_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(786)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getRenderbufferParameter,return )

::String GL_obj::getShaderInfoLog( ::openfl::_legacy::gl::GLShader shader){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getShaderInfoLog",0x11d5341f,"openfl._legacy.gl.GL.getShaderInfoLog","openfl/_legacy/gl/GL.hx",790,0x4e24c9f5)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(791)
	Dynamic tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(791)
	::String tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_info_log(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(791)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderInfoLog,return )

int GL_obj::getShaderParameter( ::openfl::_legacy::gl::GLShader shader,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getShaderParameter",0x49558952,"openfl._legacy.gl.GL.getShaderParameter","openfl/_legacy/gl/GL.hx",795,0x4e24c9f5)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(796)
	Dynamic tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(796)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(796)
	int tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(796)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderParameter,return )

Dynamic GL_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getShaderPrecisionFormat",0xe3bc537e,"openfl._legacy.gl.GL.getShaderPrecisionFormat","openfl/_legacy/gl/GL.hx",800,0x4e24c9f5)
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(801)
	int tmp = shadertype;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(801)
	int tmp1 = precisiontype;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(801)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_precision_format(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(801)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getShaderPrecisionFormat,return )

::String GL_obj::getShaderSource( ::openfl::_legacy::gl::GLShader shader){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getShaderSource",0x73a56992,"openfl._legacy.gl.GL.getShaderSource","openfl/_legacy/gl/GL.hx",805,0x4e24c9f5)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(806)
	Dynamic tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(806)
	::String tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_source(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(806)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,getShaderSource,return )

Array< ::String > GL_obj::getSupportedExtensions( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getSupportedExtensions",0x2647aa70,"openfl._legacy.gl.GL.getSupportedExtensions","openfl/_legacy/gl/GL.hx",810,0x4e24c9f5)
	HX_STACK_LINE(811)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(812)
	::openfl::_legacy::gl::GL_obj::lime_gl_get_supported_extensions(result);
	HX_STACK_LINE(813)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,getSupportedExtensions,return )

Dynamic GL_obj::getTexParameter( int target,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getTexParameter",0x81745e74,"openfl._legacy.gl.GL.getTexParameter","openfl/_legacy/gl/GL.hx",817,0x4e24c9f5)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(818)
	int tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(818)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_tex_parameter(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(818)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getTexParameter,return )

Dynamic GL_obj::getUniform( ::openfl::_legacy::gl::GLProgram program,Dynamic location){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getUniform",0x3552c2c2,"openfl._legacy.gl.GL.getUniform","openfl/_legacy/gl/GL.hx",822,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(823)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	Dynamic tmp1 = location;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(823)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(823)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniform,return )

Dynamic GL_obj::getUniformLocation( ::openfl::_legacy::gl::GLProgram program,::String name){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getUniformLocation",0x62ce7f17,"openfl._legacy.gl.GL.getUniformLocation","openfl/_legacy/gl/GL.hx",827,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(828)
	Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(828)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(828)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getUniformLocation,return )

Dynamic GL_obj::getVertexAttrib( int index,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getVertexAttrib",0x51bcf580,"openfl._legacy.gl.GL.getVertexAttrib","openfl/_legacy/gl/GL.hx",832,0x4e24c9f5)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(833)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(833)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(833)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_vertex_attrib(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(833)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttrib,return )

int GL_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_FRAME("openfl._legacy.gl.GL","getVertexAttribOffset",0xb0f22133,"openfl._legacy.gl.GL.getVertexAttribOffset","openfl/_legacy/gl/GL.hx",837,0x4e24c9f5)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(838)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(838)
	int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(838)
	int tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_vertex_attrib_offset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(838)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,getVertexAttribOffset,return )

Void GL_obj::hint( int target,int mode){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","hint",0xf939fe0b,"openfl._legacy.gl.GL.hint","openfl/_legacy/gl/GL.hx",842,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(843)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(843)
		int tmp1 = mode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(843)
		::openfl::_legacy::gl::GL_obj::lime_gl_hint(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,hint,(void))

bool GL_obj::isBuffer( ::openfl::_legacy::gl::GLBuffer buffer){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isBuffer",0xbeeeab0e,"openfl._legacy.gl.GL.isBuffer","openfl/_legacy/gl/GL.hx",847,0x4e24c9f5)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(848)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(848)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(848)
	if ((tmp)){
		HX_STACK_LINE(848)
		Dynamic tmp2 = buffer->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(848)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(848)
		tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_buffer(tmp3);
	}
	else{
		HX_STACK_LINE(848)
		tmp1 = false;
	}
	HX_STACK_LINE(848)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isBuffer,return )

bool GL_obj::isEnabled( int cap){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isEnabled",0x1e8762b3,"openfl._legacy.gl.GL.isEnabled","openfl/_legacy/gl/GL.hx",854,0x4e24c9f5)
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(855)
	int tmp = cap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(855)
	bool tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_enabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(855)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isEnabled,return )

bool GL_obj::isFramebuffer( ::openfl::_legacy::gl::GLFramebuffer framebuffer){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isFramebuffer",0x722e741f,"openfl._legacy.gl.GL.isFramebuffer","openfl/_legacy/gl/GL.hx",859,0x4e24c9f5)
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(860)
	bool tmp = (framebuffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(860)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(860)
	if ((tmp)){
		HX_STACK_LINE(860)
		Dynamic tmp2 = framebuffer->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(860)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(860)
		tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_framebuffer(tmp3);
	}
	else{
		HX_STACK_LINE(860)
		tmp1 = false;
	}
	HX_STACK_LINE(860)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isFramebuffer,return )

bool GL_obj::isProgram( ::openfl::_legacy::gl::GLProgram program){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isProgram",0x944fa8b6,"openfl._legacy.gl.GL.isProgram","openfl/_legacy/gl/GL.hx",864,0x4e24c9f5)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(865)
	bool tmp = (program != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(865)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(865)
	if ((tmp)){
		HX_STACK_LINE(865)
		Dynamic tmp2 = program->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(865)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(865)
		tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_program(tmp3);
	}
	else{
		HX_STACK_LINE(865)
		tmp1 = false;
	}
	HX_STACK_LINE(865)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isProgram,return )

bool GL_obj::isRenderbuffer( ::openfl::_legacy::gl::GLRenderbuffer renderbuffer){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isRenderbuffer",0xfd033964,"openfl._legacy.gl.GL.isRenderbuffer","openfl/_legacy/gl/GL.hx",869,0x4e24c9f5)
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(870)
	bool tmp = (renderbuffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(870)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(870)
	if ((tmp)){
		HX_STACK_LINE(870)
		Dynamic tmp2 = renderbuffer->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(870)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(870)
		tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_renderbuffer(tmp3);
	}
	else{
		HX_STACK_LINE(870)
		tmp1 = false;
	}
	HX_STACK_LINE(870)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isRenderbuffer,return )

bool GL_obj::isShader( ::openfl::_legacy::gl::GLShader shader){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isShader",0x0b7aad33,"openfl._legacy.gl.GL.isShader","openfl/_legacy/gl/GL.hx",874,0x4e24c9f5)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(875)
	bool tmp = (shader != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(875)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(875)
	if ((tmp)){
		HX_STACK_LINE(875)
		Dynamic tmp2 = shader->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(875)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(875)
		tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_shader(tmp3);
	}
	else{
		HX_STACK_LINE(875)
		tmp1 = false;
	}
	HX_STACK_LINE(875)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isShader,return )

bool GL_obj::isTexture( ::openfl::_legacy::gl::GLTexture texture){
	HX_STACK_FRAME("openfl._legacy.gl.GL","isTexture",0x3f37270d,"openfl._legacy.gl.GL.isTexture","openfl/_legacy/gl/GL.hx",879,0x4e24c9f5)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(880)
	bool tmp = (texture != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(880)
	if ((tmp)){
		HX_STACK_LINE(880)
		Dynamic tmp2 = texture->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(880)
		tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_is_texture(tmp3);
	}
	else{
		HX_STACK_LINE(880)
		tmp1 = false;
	}
	HX_STACK_LINE(880)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,isTexture,return )

Void GL_obj::lineWidth( Float width){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","lineWidth",0xadb59a6e,"openfl._legacy.gl.GL.lineWidth","openfl/_legacy/gl/GL.hx",884,0x4e24c9f5)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(885)
		Float tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(885)
		::openfl::_legacy::gl::GL_obj::lime_gl_line_width(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,lineWidth,(void))

Void GL_obj::linkProgram( ::openfl::_legacy::gl::GLProgram program){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","linkProgram",0xd44ac5a6,"openfl._legacy.gl.GL.linkProgram","openfl/_legacy/gl/GL.hx",889,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(890)
		Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(890)
		::openfl::_legacy::gl::GL_obj::lime_gl_link_program(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,linkProgram,(void))

Dynamic GL_obj::load( ::String inName,int inArgCount){
	HX_STACK_FRAME("openfl._legacy.gl.GL","load",0xfbe35aaa,"openfl._legacy.gl.GL.load","openfl/_legacy/gl/GL.hx",895,0x4e24c9f5)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(inArgCount,"inArgCount")
	HX_STACK_LINE(895)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(897)
		::String tmp = inName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(897)
		int tmp1 = inArgCount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(897)
		Dynamic tmp2 = ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(897)
		return tmp2;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(901)
				Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(901)
				Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("GL.hx","\xb9","\xa9","\xd2","\x13"),901,HX_HCSTRING("openfl._legacy.gl.GL","\x6a","\x6e","\xc8","\xd6"),HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(901)
				::haxe::Log_obj::trace(tmp,tmp1);
				HX_STACK_LINE(902)
				return null();
			}
		}
	}
	HX_STACK_LINE(895)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,load,return )

Void GL_obj::pixelStorei( int pname,int param){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","pixelStorei",0xcb974c8a,"openfl._legacy.gl.GL.pixelStorei","openfl/_legacy/gl/GL.hx",907,0x4e24c9f5)
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(908)
		int tmp = pname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		int tmp1 = param;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(908)
		::openfl::_legacy::gl::GL_obj::lime_gl_pixel_storei(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,pixelStorei,(void))

Void GL_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","polygonOffset",0x550f34a9,"openfl._legacy.gl.GL.polygonOffset","openfl/_legacy/gl/GL.hx",912,0x4e24c9f5)
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(913)
		Float tmp = factor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(913)
		Float tmp1 = units;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		::openfl::_legacy::gl::GL_obj::lime_gl_polygon_offset(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,polygonOffset,(void))

Void GL_obj::readPixels( int x,int y,int width,int height,int format,int type,::openfl::_legacy::utils::ByteArray pixels){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","readPixels",0xb6b2cea7,"openfl._legacy.gl.GL.readPixels","openfl/_legacy/gl/GL.hx",917,0x4e24c9f5)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(918)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(918)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(918)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(918)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(918)
		int tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(918)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(918)
		bool tmp6 = (pixels == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(918)
		::openfl::_legacy::utils::ByteArray tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(918)
		if ((tmp6)){
			HX_STACK_LINE(918)
			tmp7 = null();
		}
		else{
			HX_STACK_LINE(918)
			tmp7 = pixels->getByteBuffer();
		}
		HX_STACK_LINE(918)
		bool tmp8 = (pixels == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(918)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(918)
		if ((tmp8)){
			HX_STACK_LINE(918)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(918)
			tmp9 = pixels->getStart();
		}
		HX_STACK_LINE(918)
		::openfl::_legacy::gl::GL_obj::lime_gl_read_pixels(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp7,tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(GL_obj,readPixels,(void))

Void GL_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","renderbufferStorage",0x0f521501,"openfl._legacy.gl.GL.renderbufferStorage","openfl/_legacy/gl/GL.hx",922,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(923)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(923)
		int tmp1 = internalformat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(923)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(923)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(923)
		::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,renderbufferStorage,(void))

Void GL_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","sampleCoverage",0x368c75b6,"openfl._legacy.gl.GL.sampleCoverage","openfl/_legacy/gl/GL.hx",927,0x4e24c9f5)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(928)
		Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(928)
		bool tmp1 = invert;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(928)
		::openfl::_legacy::gl::GL_obj::lime_gl_sample_coverage(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,sampleCoverage,(void))

Void GL_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","scissor",0x3dd39218,"openfl._legacy.gl.GL.scissor","openfl/_legacy/gl/GL.hx",932,0x4e24c9f5)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(933)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(933)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(933)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(933)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(933)
		::openfl::_legacy::gl::GL_obj::lime_gl_scissor(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,scissor,(void))

Void GL_obj::shaderSource( ::openfl::_legacy::gl::GLShader shader,::String source){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","shaderSource",0xcc803264,"openfl._legacy.gl.GL.shaderSource","openfl/_legacy/gl/GL.hx",937,0x4e24c9f5)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(938)
		Dynamic tmp = shader->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(938)
		::String tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(938)
		::openfl::_legacy::gl::GL_obj::lime_gl_shader_source(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,shaderSource,(void))

Void GL_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","stencilFunc",0x8b8d9b5c,"openfl._legacy.gl.GL.stencilFunc","openfl/_legacy/gl/GL.hx",942,0x4e24c9f5)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(943)
		int tmp = func;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		int tmp1 = ref;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(943)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilFunc,(void))

Void GL_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","stencilFuncSeparate",0x3ab032df,"openfl._legacy.gl.GL.stencilFuncSeparate","openfl/_legacy/gl/GL.hx",947,0x4e24c9f5)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(948)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(948)
		int tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(948)
		int tmp2 = ref;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(948)
		int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(948)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func_separate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilFuncSeparate,(void))

Void GL_obj::stencilMask( int mask){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","stencilMask",0x901ef104,"openfl._legacy.gl.GL.stencilMask","openfl/_legacy/gl/GL.hx",952,0x4e24c9f5)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(953)
		int tmp = mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(953)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_mask(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,stencilMask,(void))

Void GL_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","stencilMaskSeparate",0x4e8b7087,"openfl._legacy.gl.GL.stencilMaskSeparate","openfl/_legacy/gl/GL.hx",957,0x4e24c9f5)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(958)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(958)
		int tmp1 = mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(958)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_mask_separate(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,stencilMaskSeparate,(void))

Void GL_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","stencilOp",0xf3445b39,"openfl._legacy.gl.GL.stencilOp","openfl/_legacy/gl/GL.hx",962,0x4e24c9f5)
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(963)
		int tmp = fail;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(963)
		int tmp1 = zfail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(963)
		int tmp2 = zpass;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(963)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_op(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,stencilOp,(void))

Void GL_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","stencilOpSeparate",0x802597bc,"openfl._legacy.gl.GL.stencilOpSeparate","openfl/_legacy/gl/GL.hx",967,0x4e24c9f5)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(968)
		int tmp = face;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(968)
		int tmp1 = fail;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(968)
		int tmp2 = zfail;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(968)
		int tmp3 = zpass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(968)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_op_separate(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,stencilOpSeparate,(void))

Void GL_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::openfl::_legacy::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","texImage2D",0xe9f4784a,"openfl._legacy.gl.GL.texImage2D","openfl/_legacy/gl/GL.hx",972,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(973)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(973)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(973)
		int tmp2 = internalformat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(973)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(973)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(973)
		int tmp5 = border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(973)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(973)
		int tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(973)
		bool tmp8 = (pixels == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(973)
		::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(973)
		if ((tmp8)){
			HX_STACK_LINE(973)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(973)
			tmp9 = pixels->getByteBuffer();
		}
		HX_STACK_LINE(973)
		bool tmp10 = (pixels == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(973)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(973)
		if ((tmp10)){
			HX_STACK_LINE(973)
			tmp11 = null();
		}
		else{
			HX_STACK_LINE(973)
			tmp11 = pixels->getStart();
		}
		HX_STACK_LINE(973)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp9,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texImage2D,(void))

Void GL_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","texParameterf",0x2af33660,"openfl._legacy.gl.GL.texParameterf","openfl/_legacy/gl/GL.hx",977,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(978)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(978)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(978)
		Float tmp2 = param;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(978)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameterf,(void))

Void GL_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","texParameteri",0x2af33663,"openfl._legacy.gl.GL.texParameteri","openfl/_legacy/gl/GL.hx",982,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(983)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(983)
		int tmp1 = pname;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(983)
		int tmp2 = param;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(983)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,texParameteri,(void))

Void GL_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::openfl::_legacy::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","texSubImage2D",0x17523e10,"openfl._legacy.gl.GL.texSubImage2D","openfl/_legacy/gl/GL.hx",987,0x4e24c9f5)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(988)
		int tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(988)
		int tmp1 = level;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(988)
		int tmp2 = xoffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(988)
		int tmp3 = yoffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(988)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(988)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(988)
		int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(988)
		int tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(988)
		bool tmp8 = (pixels == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(988)
		::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(988)
		if ((tmp8)){
			HX_STACK_LINE(988)
			tmp9 = null();
		}
		else{
			HX_STACK_LINE(988)
			tmp9 = pixels->getByteBuffer();
		}
		HX_STACK_LINE(988)
		bool tmp10 = (pixels == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(988)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(988)
		if ((tmp10)){
			HX_STACK_LINE(988)
			tmp11 = null();
		}
		else{
			HX_STACK_LINE(988)
			tmp11 = pixels->getStart();
		}
		HX_STACK_LINE(988)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_sub_image_2d(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp9,tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(GL_obj,texSubImage2D,(void))

Void GL_obj::uniform1f( Dynamic location,Float x){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform1f",0xa4360245,"openfl._legacy.gl.GL.uniform1f","openfl/_legacy/gl/GL.hx",992,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(993)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(993)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(993)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1f,(void))

Void GL_obj::uniform1fv( Dynamic location,Dynamic x){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform1fv",0x0b0bfa91,"openfl._legacy.gl.GL.uniform1fv","openfl/_legacy/gl/GL.hx",997,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(998)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(998)
		Dynamic tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(998)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform1fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1fv,(void))

Void GL_obj::uniform1i( Dynamic location,int x){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform1i",0xa4360248,"openfl._legacy.gl.GL.uniform1i","openfl/_legacy/gl/GL.hx",1002,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1003)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1003)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1003)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1i,(void))

Void GL_obj::uniform1iv( Dynamic location,Array< int > v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform1iv",0x0b0bfd2e,"openfl._legacy.gl.GL.uniform1iv","openfl/_legacy/gl/GL.hx",1007,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1008)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1008)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform1iv(tmp,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform1iv,(void))

Void GL_obj::uniform2f( Dynamic location,Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform2f",0xa4360324,"openfl._legacy.gl.GL.uniform2f","openfl/_legacy/gl/GL.hx",1012,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1013)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1013)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1013)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1013)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform2f(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2f,(void))

Void GL_obj::uniform2fv( Dynamic location,Dynamic v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform2fv",0x0b0cbcd2,"openfl._legacy.gl.GL.uniform2fv","openfl/_legacy/gl/GL.hx",1017,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1018)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1018)
		Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1018)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform2fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2fv,(void))

Void GL_obj::uniform2i( Dynamic location,int x,int y){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform2i",0xa4360327,"openfl._legacy.gl.GL.uniform2i","openfl/_legacy/gl/GL.hx",1022,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1023)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1023)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1023)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1023)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform2i(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniform2i,(void))

Void GL_obj::uniform2iv( Dynamic location,Array< int > v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform2iv",0x0b0cbf6f,"openfl._legacy.gl.GL.uniform2iv","openfl/_legacy/gl/GL.hx",1027,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1028)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1028)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform2iv(tmp,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform2iv,(void))

Void GL_obj::uniform3f( Dynamic location,Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform3f",0xa4360403,"openfl._legacy.gl.GL.uniform3f","openfl/_legacy/gl/GL.hx",1032,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1033)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1033)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1033)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1033)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1033)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3f,(void))

Void GL_obj::uniform3fv( Dynamic location,Dynamic v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform3fv",0x0b0d7f13,"openfl._legacy.gl.GL.uniform3fv","openfl/_legacy/gl/GL.hx",1037,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1038)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1038)
		Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1038)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform3fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3fv,(void))

Void GL_obj::uniform3i( Dynamic location,int x,int y,int z){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform3i",0xa4360406,"openfl._legacy.gl.GL.uniform3i","openfl/_legacy/gl/GL.hx",1042,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1043)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1043)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1043)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1043)
		int tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1043)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform3i(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,uniform3i,(void))

Void GL_obj::uniform3iv( Dynamic location,Array< int > v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform3iv",0x0b0d81b0,"openfl._legacy.gl.GL.uniform3iv","openfl/_legacy/gl/GL.hx",1047,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1048)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1048)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform3iv(tmp,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform3iv,(void))

Void GL_obj::uniform4f( Dynamic location,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform4f",0xa43604e2,"openfl._legacy.gl.GL.uniform4f","openfl/_legacy/gl/GL.hx",1052,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1053)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1053)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1053)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1053)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1053)
		Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1053)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4f,(void))

Void GL_obj::uniform4fv( Dynamic location,Dynamic v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform4fv",0x0b0e4154,"openfl._legacy.gl.GL.uniform4fv","openfl/_legacy/gl/GL.hx",1057,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1058)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1058)
		Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1058)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform4fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4fv,(void))

Void GL_obj::uniform4i( Dynamic location,int x,int y,int z,int w){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform4i",0xa43604e5,"openfl._legacy.gl.GL.uniform4i","openfl/_legacy/gl/GL.hx",1062,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1063)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1063)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1063)
		int tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1063)
		int tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1063)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform4i(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,uniform4i,(void))

Void GL_obj::uniform4iv( Dynamic location,Dynamic v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniform4iv",0x0b0e43f1,"openfl._legacy.gl.GL.uniform4iv","openfl/_legacy/gl/GL.hx",1067,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1068)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1068)
		Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1068)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform4iv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,uniform4iv,(void))

Void GL_obj::uniformMatrix2fv( Dynamic location,bool transpose,::openfl::_legacy::utils::Float32Array v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniformMatrix2fv",0xe3660111,"openfl._legacy.gl.GL.uniformMatrix2fv","openfl/_legacy/gl/GL.hx",1072,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1078)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1078)
		bool tmp1 = transpose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1078)
		::openfl::_legacy::utils::ByteArray tmp2 = v->getByteBuffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1078)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(tmp,tmp1,tmp2,(int)2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix2fv,(void))

Void GL_obj::uniformMatrix3fv( Dynamic location,bool transpose,::openfl::_legacy::utils::Float32Array v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniformMatrix3fv",0xe366c352,"openfl._legacy.gl.GL.uniformMatrix3fv","openfl/_legacy/gl/GL.hx",1082,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1088)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1088)
		bool tmp1 = transpose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		::openfl::_legacy::utils::ByteArray tmp2 = v->getByteBuffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1088)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(tmp,tmp1,tmp2,(int)3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3fv,(void))

Void GL_obj::uniformMatrix4fv( Dynamic location,bool transpose,::openfl::_legacy::utils::Float32Array v){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniformMatrix4fv",0xe3678593,"openfl._legacy.gl.GL.uniformMatrix4fv","openfl/_legacy/gl/GL.hx",1093,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1099)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1099)
		bool tmp1 = transpose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1099)
		::openfl::_legacy::utils::ByteArray tmp2 = v->getByteBuffer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1099)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(tmp,tmp1,tmp2,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix4fv,(void))

Void GL_obj::uniformMatrix3D( Dynamic location,bool transpose,::openfl::geom::Matrix3D matrix){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","uniformMatrix3D",0xcd5c4c82,"openfl._legacy.gl.GL.uniformMatrix3D","openfl/_legacy/gl/GL.hx",1103,0x4e24c9f5)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(1104)
		Dynamic tmp = location;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1104)
		bool tmp1 = transpose;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1104)
		::openfl::geom::Matrix3D tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1104)
		::openfl::_legacy::utils::Float32Array tmp3 = ::openfl::_legacy::utils::Float32Array_obj::fromMatrix(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1104)
		::openfl::_legacy::utils::ByteArray tmp4 = tmp3->getByteBuffer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1104)
		::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(tmp,tmp1,tmp4,(int)4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,uniformMatrix3D,(void))

Void GL_obj::useProgram( ::openfl::_legacy::gl::GLProgram program){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","useProgram",0x27396881,"openfl._legacy.gl.GL.useProgram","openfl/_legacy/gl/GL.hx",1108,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1109)
		bool tmp = (program == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1109)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1109)
		if ((tmp)){
			HX_STACK_LINE(1109)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1109)
			tmp1 = program->id;
		}
		HX_STACK_LINE(1109)
		::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,useProgram,(void))

Void GL_obj::validateProgram( ::openfl::_legacy::gl::GLProgram program){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","validateProgram",0x9db0468a,"openfl._legacy.gl.GL.validateProgram","openfl/_legacy/gl/GL.hx",1113,0x4e24c9f5)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1114)
		Dynamic tmp = program->id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1114)
		::openfl::_legacy::gl::GL_obj::lime_gl_validate_program(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GL_obj,validateProgram,(void))

Void GL_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib1f",0x4ec1a1e7,"openfl._legacy.gl.GL.vertexAttrib1f","openfl/_legacy/gl/GL.hx",1118,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1119)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1119)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1119)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib1f(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1f,(void))

Void GL_obj::vertexAttrib1fv( int indx,Dynamic values){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib1fv",0x9aac08af,"openfl._legacy.gl.GL.vertexAttrib1fv","openfl/_legacy/gl/GL.hx",1123,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1124)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1124)
		Dynamic tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1124)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib1fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib1fv,(void))

Void GL_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib2f",0x4ec1a2c6,"openfl._legacy.gl.GL.vertexAttrib2f","openfl/_legacy/gl/GL.hx",1128,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1129)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1129)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1129)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1129)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib2f(tmp,tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GL_obj,vertexAttrib2f,(void))

Void GL_obj::vertexAttrib2fv( int indx,Dynamic values){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib2fv",0x9aaccaf0,"openfl._legacy.gl.GL.vertexAttrib2fv","openfl/_legacy/gl/GL.hx",1133,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1134)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1134)
		Dynamic tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1134)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib2fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib2fv,(void))

Void GL_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib3f",0x4ec1a3a5,"openfl._legacy.gl.GL.vertexAttrib3f","openfl/_legacy/gl/GL.hx",1138,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1139)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1139)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1139)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1139)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1139)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib3f(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,vertexAttrib3f,(void))

Void GL_obj::vertexAttrib3fv( int indx,Dynamic values){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib3fv",0x9aad8d31,"openfl._legacy.gl.GL.vertexAttrib3fv","openfl/_legacy/gl/GL.hx",1143,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1144)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1144)
		Dynamic tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1144)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib3fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib3fv,(void))

Void GL_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib4f",0x4ec1a484,"openfl._legacy.gl.GL.vertexAttrib4f","openfl/_legacy/gl/GL.hx",1148,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1149)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1149)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1149)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1149)
		Float tmp3 = z;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1149)
		Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1149)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib4f(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GL_obj,vertexAttrib4f,(void))

Void GL_obj::vertexAttrib4fv( int indx,Dynamic values){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttrib4fv",0x9aae4f72,"openfl._legacy.gl.GL.vertexAttrib4fv","openfl/_legacy/gl/GL.hx",1153,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1154)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1154)
		Dynamic tmp1 = values;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1154)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib4fv(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GL_obj,vertexAttrib4fv,(void))

Void GL_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","vertexAttribPointer",0xc797788b,"openfl._legacy.gl.GL.vertexAttribPointer","openfl/_legacy/gl/GL.hx",1158,0x4e24c9f5)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1159)
		int tmp = indx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1159)
		int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1159)
		int tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1159)
		bool tmp3 = normalized;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1159)
		int tmp4 = stride;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1159)
		int tmp5 = offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1159)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(GL_obj,vertexAttribPointer,(void))

Void GL_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("openfl._legacy.gl.GL","viewport",0x32959eea,"openfl._legacy.gl.GL.viewport","openfl/_legacy/gl/GL.hx",1163,0x4e24c9f5)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1164)
		int tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1164)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1164)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1164)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1164)
		::openfl::_legacy::gl::GL_obj::lime_gl_viewport(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GL_obj,viewport,(void))

int GL_obj::get_drawingBufferHeight( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","get_drawingBufferHeight",0xc31cde18,"openfl._legacy.gl.GL.get_drawingBufferHeight","openfl/_legacy/gl/GL.hx",1175,0x4e24c9f5)
	HX_STACK_LINE(1175)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1175)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1175)
	int tmp2 = tmp1->get_stageHeight();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1175)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_drawingBufferHeight,return )

int GL_obj::get_drawingBufferWidth( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","get_drawingBufferWidth",0xa9f570f5,"openfl._legacy.gl.GL.get_drawingBufferWidth","openfl/_legacy/gl/GL.hx",1176,0x4e24c9f5)
	HX_STACK_LINE(1176)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1176)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1176)
	int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1176)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_drawingBufferWidth,return )

int GL_obj::get_version( ){
	HX_STACK_FRAME("openfl._legacy.gl.GL","get_version",0x4dbb5f2b,"openfl._legacy.gl.GL.get_version","openfl/_legacy/gl/GL.hx",1177,0x4e24c9f5)
	HX_STACK_LINE(1177)
	int tmp = ::openfl::_legacy::gl::GL_obj::lime_gl_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1177)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GL_obj,get_version,return )

Dynamic GL_obj::lime_gl_active_texture;

Dynamic GL_obj::lime_gl_attach_shader;

Dynamic GL_obj::lime_gl_bind_attrib_location;

Dynamic GL_obj::lime_gl_bind_bitmap_data_texture;

Dynamic GL_obj::lime_gl_bind_buffer;

Dynamic GL_obj::lime_gl_bind_framebuffer;

Dynamic GL_obj::lime_gl_bind_renderbuffer;

Dynamic GL_obj::lime_gl_bind_texture;

Dynamic GL_obj::lime_gl_blend_color;

Dynamic GL_obj::lime_gl_blend_equation;

Dynamic GL_obj::lime_gl_blend_equation_separate;

Dynamic GL_obj::lime_gl_blend_func;

Dynamic GL_obj::lime_gl_blend_func_separate;

Dynamic GL_obj::lime_gl_buffer_data;

Dynamic GL_obj::lime_gl_buffer_sub_data;

Dynamic GL_obj::lime_gl_check_framebuffer_status;

Dynamic GL_obj::lime_gl_clear;

Dynamic GL_obj::lime_gl_clear_color;

Dynamic GL_obj::lime_gl_clear_depth;

Dynamic GL_obj::lime_gl_clear_stencil;

Dynamic GL_obj::lime_gl_color_mask;

Dynamic GL_obj::lime_gl_compile_shader;

Dynamic GL_obj::lime_gl_compressed_tex_image_2d;

Dynamic GL_obj::lime_gl_compressed_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_copy_tex_image_2d;

Dynamic GL_obj::lime_gl_copy_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_create_buffer;

Dynamic GL_obj::lime_gl_create_framebuffer;

Dynamic GL_obj::lime_gl_create_program;

Dynamic GL_obj::lime_gl_create_render_buffer;

Dynamic GL_obj::lime_gl_create_shader;

Dynamic GL_obj::lime_gl_create_texture;

Dynamic GL_obj::lime_gl_cull_face;

Dynamic GL_obj::lime_gl_delete_buffer;

Dynamic GL_obj::lime_gl_delete_framebuffer;

Dynamic GL_obj::lime_gl_delete_program;

Dynamic GL_obj::lime_gl_delete_render_buffer;

Dynamic GL_obj::lime_gl_delete_shader;

Dynamic GL_obj::lime_gl_delete_texture;

Dynamic GL_obj::lime_gl_depth_func;

Dynamic GL_obj::lime_gl_depth_mask;

Dynamic GL_obj::lime_gl_depth_range;

Dynamic GL_obj::lime_gl_detach_shader;

Dynamic GL_obj::lime_gl_disable;

Dynamic GL_obj::lime_gl_disable_vertex_attrib_array;

Dynamic GL_obj::lime_gl_draw_arrays;

Dynamic GL_obj::lime_gl_draw_elements;

Dynamic GL_obj::lime_gl_enable;

Dynamic GL_obj::lime_gl_enable_vertex_attrib_array;

Dynamic GL_obj::lime_gl_finish;

Dynamic GL_obj::lime_gl_flush;

Dynamic GL_obj::lime_gl_framebuffer_renderbuffer;

Dynamic GL_obj::lime_gl_framebuffer_texture2D;

Dynamic GL_obj::lime_gl_front_face;

Dynamic GL_obj::lime_gl_generate_mipmap;

Dynamic GL_obj::lime_gl_get_active_attrib;

Dynamic GL_obj::lime_gl_get_active_uniform;

Dynamic GL_obj::lime_gl_get_attrib_location;

Dynamic GL_obj::lime_gl_get_buffer_paramerter;

Dynamic GL_obj::lime_gl_get_context_attributes;

Dynamic GL_obj::lime_gl_get_error;

Dynamic GL_obj::lime_gl_get_framebuffer_attachment_parameter;

Dynamic GL_obj::lime_gl_get_parameter;

Dynamic GL_obj::lime_gl_get_program_info_log;

Dynamic GL_obj::lime_gl_get_program_parameter;

Dynamic GL_obj::lime_gl_get_render_buffer_parameter;

Dynamic GL_obj::lime_gl_get_shader_info_log;

Dynamic GL_obj::lime_gl_get_shader_parameter;

Dynamic GL_obj::lime_gl_get_shader_precision_format;

Dynamic GL_obj::lime_gl_get_shader_source;

Dynamic GL_obj::lime_gl_get_supported_extensions;

Dynamic GL_obj::lime_gl_get_tex_parameter;

Dynamic GL_obj::lime_gl_get_uniform;

Dynamic GL_obj::lime_gl_get_uniform_location;

Dynamic GL_obj::lime_gl_get_vertex_attrib;

Dynamic GL_obj::lime_gl_get_vertex_attrib_offset;

Dynamic GL_obj::lime_gl_hint;

Dynamic GL_obj::lime_gl_is_buffer;

Dynamic GL_obj::lime_gl_is_enabled;

Dynamic GL_obj::lime_gl_is_framebuffer;

Dynamic GL_obj::lime_gl_is_program;

Dynamic GL_obj::lime_gl_is_renderbuffer;

Dynamic GL_obj::lime_gl_is_shader;

Dynamic GL_obj::lime_gl_is_texture;

Dynamic GL_obj::lime_gl_line_width;

Dynamic GL_obj::lime_gl_link_program;

Dynamic GL_obj::lime_gl_pixel_storei;

Dynamic GL_obj::lime_gl_polygon_offset;

Dynamic GL_obj::lime_gl_read_pixels;

Dynamic GL_obj::lime_gl_renderbuffer_storage;

Dynamic GL_obj::lime_gl_sample_coverage;

Dynamic GL_obj::lime_gl_scissor;

Dynamic GL_obj::lime_gl_shader_source;

Dynamic GL_obj::lime_gl_stencil_func;

Dynamic GL_obj::lime_gl_stencil_func_separate;

Dynamic GL_obj::lime_gl_stencil_mask;

Dynamic GL_obj::lime_gl_stencil_mask_separate;

Dynamic GL_obj::lime_gl_stencil_op;

Dynamic GL_obj::lime_gl_stencil_op_separate;

Dynamic GL_obj::lime_gl_tex_image_2d;

Dynamic GL_obj::lime_gl_tex_parameterf;

Dynamic GL_obj::lime_gl_tex_parameteri;

Dynamic GL_obj::lime_gl_tex_sub_image_2d;

Dynamic GL_obj::lime_gl_uniform1f;

Dynamic GL_obj::lime_gl_uniform1fv;

Dynamic GL_obj::lime_gl_uniform1i;

Dynamic GL_obj::lime_gl_uniform1iv;

Dynamic GL_obj::lime_gl_uniform2f;

Dynamic GL_obj::lime_gl_uniform2fv;

Dynamic GL_obj::lime_gl_uniform2i;

Dynamic GL_obj::lime_gl_uniform2iv;

Dynamic GL_obj::lime_gl_uniform3f;

Dynamic GL_obj::lime_gl_uniform3fv;

Dynamic GL_obj::lime_gl_uniform3i;

Dynamic GL_obj::lime_gl_uniform3iv;

Dynamic GL_obj::lime_gl_uniform4f;

Dynamic GL_obj::lime_gl_uniform4fv;

Dynamic GL_obj::lime_gl_uniform4i;

Dynamic GL_obj::lime_gl_uniform4iv;

Dynamic GL_obj::lime_gl_uniform_matrix;

Dynamic GL_obj::lime_gl_use_program;

Dynamic GL_obj::lime_gl_validate_program;

Dynamic GL_obj::lime_gl_version;

Dynamic GL_obj::lime_gl_vertex_attrib1f;

Dynamic GL_obj::lime_gl_vertex_attrib1fv;

Dynamic GL_obj::lime_gl_vertex_attrib2f;

Dynamic GL_obj::lime_gl_vertex_attrib2fv;

Dynamic GL_obj::lime_gl_vertex_attrib3f;

Dynamic GL_obj::lime_gl_vertex_attrib3fv;

Dynamic GL_obj::lime_gl_vertex_attrib4f;

Dynamic GL_obj::lime_gl_vertex_attrib4fv;

Dynamic GL_obj::lime_gl_vertex_attrib_pointer;

Dynamic GL_obj::lime_gl_viewport;


GL_obj::GL_obj()
{
}

bool GL_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hint") ) { outValue = hint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = inCallProp == hx::paccAlways ? get_version() : version; return true; }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scissor") ) { outValue = scissor_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cullFace") ) { outValue = cullFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getError") ) { outValue = getError_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { outValue = isBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isShader") ) { outValue = isShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"viewport") ) { outValue = viewport_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendFunc") ) { outValue = blendFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"colorMask") ) { outValue = colorMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { outValue = depthFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthMask") ) { outValue = depthMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"frontFace") ) { outValue = frontFace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { outValue = isEnabled_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isProgram") ) { outValue = isProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isTexture") ) { outValue = isTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { outValue = lineWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { outValue = stencilOp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { outValue = uniform1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { outValue = uniform1i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { outValue = uniform2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { outValue = uniform2i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { outValue = uniform3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { outValue = uniform3i_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { outValue = uniform4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { outValue = uniform4i_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { outValue = bindBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendColor") ) { outValue = blendColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferData") ) { outValue = bufferData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearColor") ) { outValue = clearColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { outValue = clearDepth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"depthRange") ) { outValue = depthRange_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { outValue = drawArrays_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniform") ) { outValue = getUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"readPixels") ) { outValue = readPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { outValue = texImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { outValue = uniform1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { outValue = uniform1iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { outValue = uniform2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { outValue = uniform2iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { outValue = uniform3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { outValue = uniform3iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { outValue = uniform4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { outValue = uniform4iv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"useProgram") ) { outValue = useProgram_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindTexture") ) { outValue = bindTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { outValue = linkProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { outValue = pixelStorei_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { outValue = stencilFunc_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { outValue = stencilMask_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachShader") ) { outValue = attachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { outValue = clearStencil_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { outValue = createBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createShader") ) { outValue = createShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { outValue = deleteBuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { outValue = deleteShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"detachShader") ) { outValue = detachShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"drawElements") ) { outValue = drawElements_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getExtension") ) { outValue = getExtension_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getParameter") ) { outValue = getParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { outValue = shaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { outValue = lime_gl_hint; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeTexture") ) { outValue = activeTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { outValue = blendEquation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { outValue = bufferSubData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createTexture") ) { outValue = createTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { outValue = deleteProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { outValue = deleteTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { outValue = isFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { outValue = polygonOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { outValue = texParameterf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { outValue = texParameteri_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { outValue = texSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { outValue = lime_gl_clear; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { outValue = lime_gl_flush; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { outValue = copyTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { outValue = generateMipmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { outValue = isRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { outValue = sampleCoverage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { outValue = vertexAttrib1f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { outValue = vertexAttrib2f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { outValue = vertexAttrib3f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { outValue = vertexAttrib4f_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { outValue = lime_gl_enable; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { outValue = lime_gl_finish; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { outValue = bindFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { outValue = getActiveAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { outValue = getShaderSource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { outValue = getTexParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { outValue = getVertexAttrib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3D") ) { outValue = uniformMatrix3D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { outValue = validateProgram_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { outValue = vertexAttrib1fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { outValue = vertexAttrib2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { outValue = vertexAttrib3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { outValue = vertexAttrib4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { outValue = lime_gl_disable; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { outValue = lime_gl_scissor; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_version") ) { outValue = lime_gl_version; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { outValue = bindRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { outValue = getActiveUniform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { outValue = getShaderInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { outValue = uniformMatrix2fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { outValue = uniformMatrix3fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { outValue = uniformMatrix4fv_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { outValue = lime_gl_viewport; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { outValue = blendFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { outValue = copyTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { outValue = createFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { outValue = deleteFramebuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { outValue = getAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { outValue = getProgramInfoLog_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { outValue = stencilOpSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_cull_face") ) { outValue = lime_gl_cull_face; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { outValue = lime_gl_get_error; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { outValue = lime_gl_is_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { outValue = lime_gl_is_shader; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { outValue = lime_gl_uniform1f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { outValue = lime_gl_uniform1i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { outValue = lime_gl_uniform2f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { outValue = lime_gl_uniform2i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { outValue = lime_gl_uniform3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { outValue = lime_gl_uniform3i; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { outValue = lime_gl_uniform4f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { outValue = lime_gl_uniform4i; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawingBufferWidth") ) { outValue = inCallProp == hx::paccAlways ? get_drawingBufferWidth() : drawingBufferWidth; return true; }
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { outValue = defaultFramebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { outValue = bindAttribLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { outValue = createRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { outValue = deleteRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { outValue = getAttachedShaders_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { outValue = getBufferParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { outValue = getShaderParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { outValue = getUniformLocation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { outValue = lime_gl_blend_func; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { outValue = lime_gl_color_mask; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { outValue = lime_gl_depth_func; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { outValue = lime_gl_depth_mask; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { outValue = lime_gl_front_face; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { outValue = lime_gl_is_enabled; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { outValue = lime_gl_is_program; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { outValue = lime_gl_is_texture; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { outValue = lime_gl_line_width; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { outValue = lime_gl_stencil_op; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { outValue = lime_gl_uniform1fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { outValue = lime_gl_uniform1iv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { outValue = lime_gl_uniform2fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { outValue = lime_gl_uniform2iv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { outValue = lime_gl_uniform3fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { outValue = lime_gl_uniform3iv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { outValue = lime_gl_uniform4fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { outValue = lime_gl_uniform4iv; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawingBufferHeight") ) { outValue = inCallProp == hx::paccAlways ? get_drawingBufferHeight() : drawingBufferHeight; return true; }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { outValue = getProgramParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { outValue = renderbufferStorage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { outValue = stencilFuncSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { outValue = stencilMaskSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { outValue = vertexAttribPointer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { outValue = lime_gl_bind_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { outValue = lime_gl_blend_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { outValue = lime_gl_buffer_data; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { outValue = lime_gl_clear_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depth") ) { outValue = lime_gl_clear_depth; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_range") ) { outValue = lime_gl_depth_range; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { outValue = lime_gl_draw_arrays; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform") ) { outValue = lime_gl_get_uniform; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { outValue = lime_gl_read_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { outValue = lime_gl_use_program; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { outValue = compressedTexImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { outValue = framebufferTexture2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { outValue = getContextAttributes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { outValue = lime_gl_bind_texture; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { outValue = lime_gl_link_program; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { outValue = lime_gl_pixel_storei; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { outValue = lime_gl_stencil_func; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { outValue = lime_gl_stencil_mask; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { outValue = lime_gl_tex_image_2d; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"bindBitmapDataTexture") ) { outValue = bindBitmapDataTexture_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { outValue = blendEquationSeparate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { outValue = getVertexAttribOffset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { outValue = lime_gl_attach_shader; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { outValue = lime_gl_clear_stencil; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { outValue = lime_gl_create_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { outValue = lime_gl_create_shader; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { outValue = lime_gl_delete_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { outValue = lime_gl_delete_shader; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { outValue = lime_gl_detach_shader; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { outValue = lime_gl_draw_elements; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_parameter") ) { outValue = lime_gl_get_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { outValue = lime_gl_shader_source; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { outValue = checkFramebufferStatus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { outValue = getSupportedExtensions_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_drawingBufferWidth") ) { outValue = get_drawingBufferWidth_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { outValue = lime_gl_active_texture; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { outValue = lime_gl_blend_equation; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { outValue = lime_gl_compile_shader; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { outValue = lime_gl_create_program; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { outValue = lime_gl_create_texture; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { outValue = lime_gl_delete_program; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { outValue = lime_gl_delete_texture; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { outValue = lime_gl_is_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { outValue = lime_gl_polygon_offset; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { outValue = lime_gl_tex_parameterf; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { outValue = lime_gl_tex_parameteri; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix") ) { outValue = lime_gl_uniform_matrix; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { outValue = compressedTexSubImage2D_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { outValue = enableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { outValue = framebufferRenderbuffer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_drawingBufferHeight") ) { outValue = get_drawingBufferHeight_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { outValue = lime_gl_buffer_sub_data; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { outValue = lime_gl_generate_mipmap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { outValue = lime_gl_is_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { outValue = lime_gl_sample_coverage; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { outValue = lime_gl_vertex_attrib1f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { outValue = lime_gl_vertex_attrib2f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { outValue = lime_gl_vertex_attrib3f; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { outValue = lime_gl_vertex_attrib4f; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { outValue = disableVertexAttribArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { outValue = getRenderbufferParameter_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { outValue = getShaderPrecisionFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { outValue = lime_gl_bind_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { outValue = lime_gl_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { outValue = lime_gl_validate_program; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { outValue = lime_gl_vertex_attrib1fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { outValue = lime_gl_vertex_attrib2fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { outValue = lime_gl_vertex_attrib3fv; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { outValue = lime_gl_vertex_attrib4fv; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { outValue = lime_gl_bind_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { outValue = lime_gl_copy_tex_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { outValue = lime_gl_get_active_attrib; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { outValue = lime_gl_get_shader_source; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameter") ) { outValue = lime_gl_get_tex_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib") ) { outValue = lime_gl_get_vertex_attrib; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { outValue = lime_gl_create_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_framebuffer") ) { outValue = lime_gl_delete_framebuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { outValue = lime_gl_get_active_uniform; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { outValue = lime_gl_blend_func_separate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { outValue = lime_gl_get_attrib_location; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { outValue = lime_gl_get_shader_info_log; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { outValue = lime_gl_stencil_op_separate; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { outValue = lime_gl_bind_attrib_location; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_create_render_buffer") ) { outValue = lime_gl_create_render_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_render_buffer") ) { outValue = lime_gl_delete_render_buffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { outValue = lime_gl_get_program_info_log; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_parameter") ) { outValue = lime_gl_get_shader_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { outValue = lime_gl_get_uniform_location; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { outValue = lime_gl_renderbuffer_storage; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { outValue = lime_gl_copy_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { outValue = lime_gl_framebuffer_texture2D; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_paramerter") ) { outValue = lime_gl_get_buffer_paramerter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_parameter") ) { outValue = lime_gl_get_program_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { outValue = lime_gl_stencil_func_separate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { outValue = lime_gl_stencil_mask_separate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { outValue = lime_gl_vertex_attrib_pointer; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { outValue = lime_gl_get_context_attributes; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { outValue = lime_gl_blend_equation_separate; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { outValue = lime_gl_compressed_tex_image_2d; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_bitmap_data_texture") ) { outValue = lime_gl_bind_bitmap_data_texture; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { outValue = lime_gl_check_framebuffer_status; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { outValue = lime_gl_framebuffer_renderbuffer; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_supported_extensions") ) { outValue = lime_gl_get_supported_extensions; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_offset") ) { outValue = lime_gl_get_vertex_attrib_offset; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { outValue = getFramebufferAttachmentParameter_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { outValue = lime_gl_enable_vertex_attrib_array; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { outValue = lime_gl_compressed_tex_sub_image_2d; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { outValue = lime_gl_disable_vertex_attrib_array; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_render_buffer_parameter") ) { outValue = lime_gl_get_render_buffer_parameter; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { outValue = lime_gl_get_shader_precision_format; return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameter") ) { outValue = lime_gl_get_framebuffer_attachment_parameter; return true;  }
	}
	return false;
}

bool GL_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lime_gl_hint") ) { lime_gl_hint=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lime_gl_clear") ) { lime_gl_clear=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_flush") ) { lime_gl_flush=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gl_enable") ) { lime_gl_enable=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_finish") ) { lime_gl_finish=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gl_disable") ) { lime_gl_disable=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_scissor") ) { lime_gl_scissor=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_version") ) { lime_gl_version=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gl_viewport") ) { lime_gl_viewport=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gl_cull_face") ) { lime_gl_cull_face=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_error") ) { lime_gl_get_error=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_buffer") ) { lime_gl_is_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_shader") ) { lime_gl_is_shader=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1f") ) { lime_gl_uniform1f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1i") ) { lime_gl_uniform1i=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2f") ) { lime_gl_uniform2f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2i") ) { lime_gl_uniform2i=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3f") ) { lime_gl_uniform3f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3i") ) { lime_gl_uniform3i=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4f") ) { lime_gl_uniform4f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4i") ) { lime_gl_uniform4i=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawingBufferWidth") ) { drawingBufferWidth=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=ioValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func") ) { lime_gl_blend_func=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_color_mask") ) { lime_gl_color_mask=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_func") ) { lime_gl_depth_func=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_mask") ) { lime_gl_depth_mask=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_front_face") ) { lime_gl_front_face=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_enabled") ) { lime_gl_is_enabled=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_program") ) { lime_gl_is_program=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_texture") ) { lime_gl_is_texture=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_line_width") ) { lime_gl_line_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op") ) { lime_gl_stencil_op=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1fv") ) { lime_gl_uniform1fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform1iv") ) { lime_gl_uniform1iv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2fv") ) { lime_gl_uniform2fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform2iv") ) { lime_gl_uniform2iv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3fv") ) { lime_gl_uniform3fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform3iv") ) { lime_gl_uniform3iv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4fv") ) { lime_gl_uniform4fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform4iv") ) { lime_gl_uniform4iv=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"drawingBufferHeight") ) { drawingBufferHeight=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_bind_buffer") ) { lime_gl_bind_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_color") ) { lime_gl_blend_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_data") ) { lime_gl_buffer_data=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_color") ) { lime_gl_clear_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_depth") ) { lime_gl_clear_depth=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_depth_range") ) { lime_gl_depth_range=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_arrays") ) { lime_gl_draw_arrays=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform") ) { lime_gl_get_uniform=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_read_pixels") ) { lime_gl_read_pixels=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_use_program") ) { lime_gl_use_program=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_texture") ) { lime_gl_bind_texture=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_link_program") ) { lime_gl_link_program=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_pixel_storei") ) { lime_gl_pixel_storei=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func") ) { lime_gl_stencil_func=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask") ) { lime_gl_stencil_mask=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_image_2d") ) { lime_gl_tex_image_2d=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gl_attach_shader") ) { lime_gl_attach_shader=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_clear_stencil") ) { lime_gl_clear_stencil=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_buffer") ) { lime_gl_create_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_shader") ) { lime_gl_create_shader=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_buffer") ) { lime_gl_delete_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_shader") ) { lime_gl_delete_shader=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_detach_shader") ) { lime_gl_detach_shader=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_draw_elements") ) { lime_gl_draw_elements=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_parameter") ) { lime_gl_get_parameter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_shader_source") ) { lime_gl_shader_source=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_gl_active_texture") ) { lime_gl_active_texture=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation") ) { lime_gl_blend_equation=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_compile_shader") ) { lime_gl_compile_shader=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_program") ) { lime_gl_create_program=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_texture") ) { lime_gl_create_texture=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_program") ) { lime_gl_delete_program=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_texture") ) { lime_gl_delete_texture=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_framebuffer") ) { lime_gl_is_framebuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_polygon_offset") ) { lime_gl_polygon_offset=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameterf") ) { lime_gl_tex_parameterf=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_parameteri") ) { lime_gl_tex_parameteri=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_uniform_matrix") ) { lime_gl_uniform_matrix=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gl_buffer_sub_data") ) { lime_gl_buffer_sub_data=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_generate_mipmap") ) { lime_gl_generate_mipmap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_is_renderbuffer") ) { lime_gl_is_renderbuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_sample_coverage") ) { lime_gl_sample_coverage=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1f") ) { lime_gl_vertex_attrib1f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2f") ) { lime_gl_vertex_attrib2f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3f") ) { lime_gl_vertex_attrib3f=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4f") ) { lime_gl_vertex_attrib4f=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_framebuffer") ) { lime_gl_bind_framebuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_tex_sub_image_2d") ) { lime_gl_tex_sub_image_2d=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_validate_program") ) { lime_gl_validate_program=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib1fv") ) { lime_gl_vertex_attrib1fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib2fv") ) { lime_gl_vertex_attrib2fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib3fv") ) { lime_gl_vertex_attrib3fv=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib4fv") ) { lime_gl_vertex_attrib4fv=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_renderbuffer") ) { lime_gl_bind_renderbuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_image_2d") ) { lime_gl_copy_tex_image_2d=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_attrib") ) { lime_gl_get_active_attrib=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_source") ) { lime_gl_get_shader_source=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_tex_parameter") ) { lime_gl_get_tex_parameter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib") ) { lime_gl_get_vertex_attrib=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gl_create_framebuffer") ) { lime_gl_create_framebuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_framebuffer") ) { lime_gl_delete_framebuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_active_uniform") ) { lime_gl_get_active_uniform=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_func_separate") ) { lime_gl_blend_func_separate=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_attrib_location") ) { lime_gl_get_attrib_location=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_info_log") ) { lime_gl_get_shader_info_log=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_op_separate") ) { lime_gl_stencil_op_separate=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_attrib_location") ) { lime_gl_bind_attrib_location=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_create_render_buffer") ) { lime_gl_create_render_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_delete_render_buffer") ) { lime_gl_delete_render_buffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_info_log") ) { lime_gl_get_program_info_log=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_parameter") ) { lime_gl_get_shader_parameter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_uniform_location") ) { lime_gl_get_uniform_location=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_renderbuffer_storage") ) { lime_gl_renderbuffer_storage=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_gl_copy_tex_sub_image_2d") ) { lime_gl_copy_tex_sub_image_2d=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_texture2D") ) { lime_gl_framebuffer_texture2D=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_buffer_paramerter") ) { lime_gl_get_buffer_paramerter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_program_parameter") ) { lime_gl_get_program_parameter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_func_separate") ) { lime_gl_stencil_func_separate=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_stencil_mask_separate") ) { lime_gl_stencil_mask_separate=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_vertex_attrib_pointer") ) { lime_gl_vertex_attrib_pointer=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_gl_get_context_attributes") ) { lime_gl_get_context_attributes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_gl_blend_equation_separate") ) { lime_gl_blend_equation_separate=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_image_2d") ) { lime_gl_compressed_tex_image_2d=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_gl_bind_bitmap_data_texture") ) { lime_gl_bind_bitmap_data_texture=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_check_framebuffer_status") ) { lime_gl_check_framebuffer_status=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_framebuffer_renderbuffer") ) { lime_gl_framebuffer_renderbuffer=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_supported_extensions") ) { lime_gl_get_supported_extensions=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_vertex_attrib_offset") ) { lime_gl_get_vertex_attrib_offset=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_gl_enable_vertex_attrib_array") ) { lime_gl_enable_vertex_attrib_array=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_gl_compressed_tex_sub_image_2d") ) { lime_gl_compressed_tex_sub_image_2d=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_disable_vertex_attrib_array") ) { lime_gl_disable_vertex_attrib_array=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_render_buffer_parameter") ) { lime_gl_get_render_buffer_parameter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gl_get_shader_precision_format") ) { lime_gl_get_shader_precision_format=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"lime_gl_get_framebuffer_attachment_parameter") ) { lime_gl_get_framebuffer_attachment_parameter=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GL_obj::DEPTH_BUFFER_BIT,HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BUFFER_BIT,HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde")},
	{hx::fsInt,(void *) &GL_obj::COLOR_BUFFER_BIT,HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb")},
	{hx::fsInt,(void *) &GL_obj::POINTS,HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9")},
	{hx::fsInt,(void *) &GL_obj::LINES,HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2")},
	{hx::fsInt,(void *) &GL_obj::LINE_LOOP,HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16")},
	{hx::fsInt,(void *) &GL_obj::LINE_STRIP,HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLES,HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLE_STRIP,HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6")},
	{hx::fsInt,(void *) &GL_obj::TRIANGLE_FAN,HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91")},
	{hx::fsInt,(void *) &GL_obj::ZERO,HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(void *) &GL_obj::ONE,HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(void *) &GL_obj::SRC_COLOR,HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_SRC_COLOR,HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48")},
	{hx::fsInt,(void *) &GL_obj::SRC_ALPHA,HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_SRC_ALPHA,HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20")},
	{hx::fsInt,(void *) &GL_obj::DST_ALPHA,HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_DST_ALPHA,HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0")},
	{hx::fsInt,(void *) &GL_obj::DST_COLOR,HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_DST_COLOR,HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8")},
	{hx::fsInt,(void *) &GL_obj::SRC_ALPHA_SATURATE,HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33")},
	{hx::fsInt,(void *) &GL_obj::FUNC_ADD,HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION,HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION_RGB,HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90")},
	{hx::fsInt,(void *) &GL_obj::BLEND_EQUATION_ALPHA,HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37")},
	{hx::fsInt,(void *) &GL_obj::FUNC_SUBTRACT,HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17")},
	{hx::fsInt,(void *) &GL_obj::FUNC_REVERSE_SUBTRACT,HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3")},
	{hx::fsInt,(void *) &GL_obj::BLEND_DST_RGB,HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec")},
	{hx::fsInt,(void *) &GL_obj::BLEND_SRC_RGB,HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c")},
	{hx::fsInt,(void *) &GL_obj::BLEND_DST_ALPHA,HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74")},
	{hx::fsInt,(void *) &GL_obj::BLEND_SRC_ALPHA,HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4")},
	{hx::fsInt,(void *) &GL_obj::CONSTANT_COLOR,HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_CONSTANT_COLOR,HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06")},
	{hx::fsInt,(void *) &GL_obj::CONSTANT_ALPHA,HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f")},
	{hx::fsInt,(void *) &GL_obj::ONE_MINUS_CONSTANT_ALPHA,HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde")},
	{hx::fsInt,(void *) &GL_obj::BLEND_COLOR,HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67")},
	{hx::fsInt,(void *) &GL_obj::ARRAY_BUFFER,HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4")},
	{hx::fsInt,(void *) &GL_obj::ELEMENT_ARRAY_BUFFER,HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d")},
	{hx::fsInt,(void *) &GL_obj::ARRAY_BUFFER_BINDING,HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79")},
	{hx::fsInt,(void *) &GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2")},
	{hx::fsInt,(void *) &GL_obj::STREAM_DRAW,HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15")},
	{hx::fsInt,(void *) &GL_obj::STATIC_DRAW,HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{hx::fsInt,(void *) &GL_obj::DYNAMIC_DRAW,HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsInt,(void *) &GL_obj::BUFFER_SIZE,HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(void *) &GL_obj::BUFFER_USAGE,HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_VERTEX_ATTRIB,HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab")},
	{hx::fsInt,(void *) &GL_obj::FRONT,HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsInt,(void *) &GL_obj::BACK,HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(void *) &GL_obj::FRONT_AND_BACK,HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsInt,(void *) &GL_obj::CULL_FACE,HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf")},
	{hx::fsInt,(void *) &GL_obj::BLEND,HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32")},
	{hx::fsInt,(void *) &GL_obj::DITHER,HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_TEST,HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_TEST,HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28")},
	{hx::fsInt,(void *) &GL_obj::SCISSOR_TEST,HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_FILL,HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_ALPHA_TO_COVERAGE,HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE,HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1")},
	{hx::fsInt,(void *) &GL_obj::NO_ERROR,HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(void *) &GL_obj::INVALID_ENUM,HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(void *) &GL_obj::INVALID_VALUE,HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(void *) &GL_obj::INVALID_OPERATION,HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(void *) &GL_obj::OUT_OF_MEMORY,HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(void *) &GL_obj::CW,HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00")},
	{hx::fsInt,(void *) &GL_obj::CCW,HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00")},
	{hx::fsInt,(void *) &GL_obj::LINE_WIDTH,HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23")},
	{hx::fsInt,(void *) &GL_obj::ALIASED_POINT_SIZE_RANGE,HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b")},
	{hx::fsInt,(void *) &GL_obj::ALIASED_LINE_WIDTH_RANGE,HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a")},
	{hx::fsInt,(void *) &GL_obj::CULL_FACE_MODE,HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1")},
	{hx::fsInt,(void *) &GL_obj::FRONT_FACE,HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_RANGE,HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_WRITEMASK,HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_CLEAR_VALUE,HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_FUNC,HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_CLEAR_VALUE,HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_FUNC,HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_FAIL,HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_REF,HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_VALUE_MASK,HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_WRITEMASK,HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_FUNC,HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_FAIL,HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_REF,HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_VALUE_MASK,HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BACK_WRITEMASK,HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2")},
	{hx::fsInt,(void *) &GL_obj::VIEWPORT,HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6")},
	{hx::fsInt,(void *) &GL_obj::SCISSOR_BOX,HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55")},
	{hx::fsInt,(void *) &GL_obj::COLOR_CLEAR_VALUE,HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8")},
	{hx::fsInt,(void *) &GL_obj::COLOR_WRITEMASK,HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_ALIGNMENT,HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b")},
	{hx::fsInt,(void *) &GL_obj::PACK_ALIGNMENT,HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_SIZE,HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb")},
	{hx::fsInt,(void *) &GL_obj::MAX_VIEWPORT_DIMS,HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08")},
	{hx::fsInt,(void *) &GL_obj::SUBPIXEL_BITS,HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a")},
	{hx::fsInt,(void *) &GL_obj::RED_BITS,HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96")},
	{hx::fsInt,(void *) &GL_obj::GREEN_BITS,HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94")},
	{hx::fsInt,(void *) &GL_obj::BLUE_BITS,HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1")},
	{hx::fsInt,(void *) &GL_obj::ALPHA_BITS,HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_BITS,HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_BITS,HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_UNITS,HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6")},
	{hx::fsInt,(void *) &GL_obj::POLYGON_OFFSET_FACTOR,HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_2D,HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_BUFFERS,HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(void *) &GL_obj::SAMPLES,HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE_VALUE,HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69")},
	{hx::fsInt,(void *) &GL_obj::SAMPLE_COVERAGE_INVERT,HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd")},
	{hx::fsInt,(void *) &GL_obj::COMPRESSED_TEXTURE_FORMATS,HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12")},
	{hx::fsInt,(void *) &GL_obj::DONT_CARE,HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf")},
	{hx::fsInt,(void *) &GL_obj::FASTEST,HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e")},
	{hx::fsInt,(void *) &GL_obj::NICEST,HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64")},
	{hx::fsInt,(void *) &GL_obj::GENERATE_MIPMAP_HINT,HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83")},
	{hx::fsInt,(void *) &GL_obj::BYTE,HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_BYTE,HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01")},
	{hx::fsInt,(void *) &GL_obj::SHORT,HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT,HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb")},
	{hx::fsInt,(void *) &GL_obj::INT,HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_INT,HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{hx::fsInt,(void *) &GL_obj::FLOAT,HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT,HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f")},
	{hx::fsInt,(void *) &GL_obj::ALPHA,HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(void *) &GL_obj::RGB,HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{hx::fsInt,(void *) &GL_obj::RGBA,HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(void *) &GL_obj::LUMINANCE,HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63")},
	{hx::fsInt,(void *) &GL_obj::LUMINANCE_ALPHA,HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_4_4_4_4,HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_5_5_5_1,HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38")},
	{hx::fsInt,(void *) &GL_obj::UNSIGNED_SHORT_5_6_5,HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c")},
	{hx::fsInt,(void *) &GL_obj::FRAGMENT_SHADER,HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_SHADER,HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_ATTRIBS,HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_UNIFORM_VECTORS,HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a")},
	{hx::fsInt,(void *) &GL_obj::MAX_VARYING_VECTORS,HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37")},
	{hx::fsInt,(void *) &GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77")},
	{hx::fsInt,(void *) &GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b")},
	{hx::fsInt,(void *) &GL_obj::MAX_TEXTURE_IMAGE_UNITS,HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54")},
	{hx::fsInt,(void *) &GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a")},
	{hx::fsInt,(void *) &GL_obj::SHADER_TYPE,HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87")},
	{hx::fsInt,(void *) &GL_obj::DELETE_STATUS,HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e")},
	{hx::fsInt,(void *) &GL_obj::LINK_STATUS,HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45")},
	{hx::fsInt,(void *) &GL_obj::VALIDATE_STATUS,HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6")},
	{hx::fsInt,(void *) &GL_obj::ATTACHED_SHADERS,HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_UNIFORMS,HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_ATTRIBUTES,HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a")},
	{hx::fsInt,(void *) &GL_obj::SHADING_LANGUAGE_VERSION,HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70")},
	{hx::fsInt,(void *) &GL_obj::CURRENT_PROGRAM,HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f")},
	{hx::fsInt,(void *) &GL_obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(void *) &GL_obj::LESS,HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(void *) &GL_obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &GL_obj::LEQUAL,HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53")},
	{hx::fsInt,(void *) &GL_obj::GREATER,HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(void *) &GL_obj::NOTEQUAL,HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8")},
	{hx::fsInt,(void *) &GL_obj::GEQUAL,HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53")},
	{hx::fsInt,(void *) &GL_obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(void *) &GL_obj::KEEP,HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsInt,(void *) &GL_obj::REPLACE,HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a")},
	{hx::fsInt,(void *) &GL_obj::INCR,HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30")},
	{hx::fsInt,(void *) &GL_obj::DECR,HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d")},
	{hx::fsInt,(void *) &GL_obj::INVERT,HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsInt,(void *) &GL_obj::INCR_WRAP,HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c")},
	{hx::fsInt,(void *) &GL_obj::DECR_WRAP,HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a")},
	{hx::fsInt,(void *) &GL_obj::VENDOR,HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(void *) &GL_obj::RENDERER,HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(void *) &GL_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &GL_obj::NEAREST,HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{hx::fsInt,(void *) &GL_obj::LINEAR,HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsInt,(void *) &GL_obj::NEAREST_MIPMAP_NEAREST,HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e")},
	{hx::fsInt,(void *) &GL_obj::LINEAR_MIPMAP_NEAREST,HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65")},
	{hx::fsInt,(void *) &GL_obj::NEAREST_MIPMAP_LINEAR,HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b")},
	{hx::fsInt,(void *) &GL_obj::LINEAR_MIPMAP_LINEAR,HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MAG_FILTER,HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_MIN_FILTER,HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_S,HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_WRAP_T,HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_2D,HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE,HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP,HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_BINDING_CUBE_MAP,HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b")},
	{hx::fsInt,(void *) &GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE0,HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE1,HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE2,HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE3,HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE4,HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE5,HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE6,HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE7,HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE8,HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE9,HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE10,HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE11,HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE12,HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE13,HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE14,HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE15,HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE16,HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE17,HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE18,HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE19,HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE20,HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE21,HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE22,HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE23,HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE24,HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE25,HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE26,HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE27,HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE28,HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE29,HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE30,HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::TEXTURE31,HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa")},
	{hx::fsInt,(void *) &GL_obj::ACTIVE_TEXTURE,HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce")},
	{hx::fsInt,(void *) &GL_obj::REPEAT,HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsInt,(void *) &GL_obj::CLAMP_TO_EDGE,HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96")},
	{hx::fsInt,(void *) &GL_obj::MIRRORED_REPEAT,HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC2,HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC3,HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_VEC4,HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC2,HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC3,HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::INT_VEC4,HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d")},
	{hx::fsInt,(void *) &GL_obj::BOOL,HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC2,HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC3,HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::BOOL_VEC4,HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT2,HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT3,HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::FLOAT_MAT4,HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_2D,HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")},
	{hx::fsInt,(void *) &GL_obj::SAMPLER_CUBE,HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97")},
	{hx::fsInt,(void *) &GL_obj::VERTEX_PROGRAM_POINT_SIZE,HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34")},
	{hx::fsInt,(void *) &GL_obj::POINT_SPRITE,HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14")},
	{hx::fsInt,(void *) &GL_obj::COMPILE_STATUS,HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c")},
	{hx::fsInt,(void *) &GL_obj::LOW_FLOAT,HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4")},
	{hx::fsInt,(void *) &GL_obj::MEDIUM_FLOAT,HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9")},
	{hx::fsInt,(void *) &GL_obj::HIGH_FLOAT,HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47")},
	{hx::fsInt,(void *) &GL_obj::LOW_INT,HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45")},
	{hx::fsInt,(void *) &GL_obj::MEDIUM_INT,HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f")},
	{hx::fsInt,(void *) &GL_obj::HIGH_INT,HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER,HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER,HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9")},
	{hx::fsInt,(void *) &GL_obj::RGBA4,HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65")},
	{hx::fsInt,(void *) &GL_obj::RGB5_A1,HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8")},
	{hx::fsInt,(void *) &GL_obj::RGB565,HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_COMPONENT16,HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_INDEX,HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_INDEX8,HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_STENCIL,HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_WIDTH,HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_HEIGHT,HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_INTERNAL_FORMAT,HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_RED_SIZE,HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_GREEN_SIZE,HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_BLUE_SIZE,HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_ALPHA_SIZE,HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_DEPTH_SIZE,HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_STENCIL_SIZE,HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a")},
	{hx::fsInt,(void *) &GL_obj::COLOR_ATTACHMENT0,HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_ATTACHMENT,HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9")},
	{hx::fsInt,(void *) &GL_obj::STENCIL_ATTACHMENT,HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01")},
	{hx::fsInt,(void *) &GL_obj::DEPTH_STENCIL_ATTACHMENT,HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f")},
	{hx::fsInt,(void *) &GL_obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_COMPLETE,HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_UNSUPPORTED,HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8")},
	{hx::fsInt,(void *) &GL_obj::FRAMEBUFFER_BINDING,HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5")},
	{hx::fsInt,(void *) &GL_obj::RENDERBUFFER_BINDING,HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23")},
	{hx::fsInt,(void *) &GL_obj::MAX_RENDERBUFFER_SIZE,HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65")},
	{hx::fsInt,(void *) &GL_obj::INVALID_FRAMEBUFFER_OPERATION,HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_FLIP_Y_WEBGL,HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6")},
	{hx::fsInt,(void *) &GL_obj::CONTEXT_LOST_WEBGL,HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45")},
	{hx::fsInt,(void *) &GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9")},
	{hx::fsInt,(void *) &GL_obj::BROWSER_DEFAULT_WEBGL,HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0")},
	{hx::fsInt,(void *) &GL_obj::drawingBufferHeight,HX_HCSTRING("drawingBufferHeight","\x85","\x15","\xb6","\x00")},
	{hx::fsInt,(void *) &GL_obj::drawingBufferWidth,HX_HCSTRING("drawingBufferWidth","\x28","\xc6","\x86","\xcb")},
	{hx::fsInt,(void *) &GL_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(void *) &GL_obj::defaultFramebuffer,HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_active_texture,HX_HCSTRING("lime_gl_active_texture","\x52","\xdf","\x77","\xb3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_attach_shader,HX_HCSTRING("lime_gl_attach_shader","\x6f","\x78","\x09","\x06")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_bind_attrib_location,HX_HCSTRING("lime_gl_bind_attrib_location","\x78","\xd0","\x23","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_bind_bitmap_data_texture,HX_HCSTRING("lime_gl_bind_bitmap_data_texture","\x84","\x86","\x5b","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_bind_buffer,HX_HCSTRING("lime_gl_bind_buffer","\x52","\x57","\xd9","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_bind_framebuffer,HX_HCSTRING("lime_gl_bind_framebuffer","\x5b","\xd1","\x58","\x70")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_bind_renderbuffer,HX_HCSTRING("lime_gl_bind_renderbuffer","\xa8","\x70","\xea","\x63")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_bind_texture,HX_HCSTRING("lime_gl_bind_texture","\x49","\x36","\xa3","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_blend_color,HX_HCSTRING("lime_gl_blend_color","\x85","\xd0","\xce","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_blend_equation,HX_HCSTRING("lime_gl_blend_equation","\xaa","\xfd","\x08","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_blend_equation_separate,HX_HCSTRING("lime_gl_blend_equation_separate","\xd8","\x13","\x95","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_blend_func,HX_HCSTRING("lime_gl_blend_func","\x62","\x46","\x02","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_blend_func_separate,HX_HCSTRING("lime_gl_blend_func_separate","\x20","\xf4","\xb8","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_buffer_data,HX_HCSTRING("lime_gl_buffer_data","\xd9","\x31","\x40","\x74")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_buffer_sub_data,HX_HCSTRING("lime_gl_buffer_sub_data","\xb8","\x37","\x6c","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_check_framebuffer_status,HX_HCSTRING("lime_gl_check_framebuffer_status","\x0b","\x35","\xe1","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_clear,HX_HCSTRING("lime_gl_clear","\x5d","\x92","\x00","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_clear_color,HX_HCSTRING("lime_gl_clear_color","\xc1","\xee","\x49","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_clear_depth,HX_HCSTRING("lime_gl_clear_depth","\x61","\x6e","\x17","\xa7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_clear_stencil,HX_HCSTRING("lime_gl_clear_stencil","\xda","\xce","\x51","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_color_mask,HX_HCSTRING("lime_gl_color_mask","\xb8","\xf1","\xa7","\x79")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_compile_shader,HX_HCSTRING("lime_gl_compile_shader","\xe1","\xd4","\x68","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_compressed_tex_image_2d,HX_HCSTRING("lime_gl_compressed_tex_image_2d","\xbc","\x70","\xb8","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_compressed_tex_sub_image_2d,HX_HCSTRING("lime_gl_compressed_tex_sub_image_2d","\x9b","\x19","\x2d","\x07")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_copy_tex_image_2d,HX_HCSTRING("lime_gl_copy_tex_image_2d","\x08","\x15","\x17","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_copy_tex_sub_image_2d,HX_HCSTRING("lime_gl_copy_tex_sub_image_2d","\xe7","\xd3","\x21","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_create_buffer,HX_HCSTRING("lime_gl_create_buffer","\xf3","\xef","\xe7","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_create_framebuffer,HX_HCSTRING("lime_gl_create_framebuffer","\x1a","\x51","\xd8","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_create_program,HX_HCSTRING("lime_gl_create_program","\x31","\xac","\x72","\x42")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_create_render_buffer,HX_HCSTRING("lime_gl_create_render_buffer","\x76","\x7b","\xe1","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_create_shader,HX_HCSTRING("lime_gl_create_shader","\x18","\xf2","\x73","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_create_texture,HX_HCSTRING("lime_gl_create_texture","\x88","\x2a","\x5a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_cull_face,HX_HCSTRING("lime_gl_cull_face","\x5a","\x6e","\xd7","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_delete_buffer,HX_HCSTRING("lime_gl_delete_buffer","\xa4","\xaa","\x2e","\x01")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_delete_framebuffer,HX_HCSTRING("lime_gl_delete_framebuffer","\xc9","\x34","\x1a","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_delete_program,HX_HCSTRING("lime_gl_delete_program","\x60","\x4c","\x0f","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_delete_render_buffer,HX_HCSTRING("lime_gl_delete_render_buffer","\xe5","\xe8","\x26","\xca")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_delete_shader,HX_HCSTRING("lime_gl_delete_shader","\xc9","\xac","\xba","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_delete_texture,HX_HCSTRING("lime_gl_delete_texture","\xb7","\xca","\xf6","\xf4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_depth_func,HX_HCSTRING("lime_gl_depth_func","\x70","\x78","\x16","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_depth_mask,HX_HCSTRING("lime_gl_depth_mask","\x18","\xce","\xa7","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_depth_range,HX_HCSTRING("lime_gl_depth_range","\x11","\x9f","\x29","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_detach_shader,HX_HCSTRING("lime_gl_detach_shader","\xa1","\x84","\x13","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_disable,HX_HCSTRING("lime_gl_disable","\xb8","\x5e","\x23","\x70")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_disable_vertex_attrib_array,HX_HCSTRING("lime_gl_disable_vertex_attrib_array","\x58","\xba","\x8e","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_draw_arrays,HX_HCSTRING("lime_gl_draw_arrays","\xa5","\x43","\x0c","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_draw_elements,HX_HCSTRING("lime_gl_draw_elements","\xe2","\xd1","\x98","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_enable,HX_HCSTRING("lime_gl_enable","\xb3","\x43","\x5f","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_enable_vertex_attrib_array,HX_HCSTRING("lime_gl_enable_vertex_attrib_array","\xd3","\x1e","\xa2","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_finish,HX_HCSTRING("lime_gl_finish","\x83","\xd5","\x56","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_flush,HX_HCSTRING("lime_gl_flush","\x94","\x83","\x40","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_framebuffer_renderbuffer,HX_HCSTRING("lime_gl_framebuffer_renderbuffer","\xd8","\x1b","\x4b","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_framebuffer_texture2D,HX_HCSTRING("lime_gl_framebuffer_texture2D","\x2b","\xbd","\x7d","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_front_face,HX_HCSTRING("lime_gl_front_face","\x63","\xa0","\x73","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_generate_mipmap,HX_HCSTRING("lime_gl_generate_mipmap","\x62","\xa5","\x38","\xe6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_active_attrib,HX_HCSTRING("lime_gl_get_active_attrib","\x0a","\x40","\xb7","\xd1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_active_uniform,HX_HCSTRING("lime_gl_get_active_uniform","\x74","\x90","\xd7","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_attrib_location,HX_HCSTRING("lime_gl_get_attrib_location","\xf1","\x00","\xcb","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_buffer_paramerter,HX_HCSTRING("lime_gl_get_buffer_paramerter","\xad","\x9b","\x49","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_context_attributes,HX_HCSTRING("lime_gl_get_context_attributes","\xe0","\xc6","\xc6","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_error,HX_HCSTRING("lime_gl_get_error","\xef","\xf0","\xe0","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_framebuffer_attachment_parameter,HX_HCSTRING("lime_gl_get_framebuffer_attachment_parameter","\x18","\x53","\xfb","\x61")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_parameter,HX_HCSTRING("lime_gl_get_parameter","\x50","\x7a","\xfe","\x3a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_program_info_log,HX_HCSTRING("lime_gl_get_program_info_log","\x87","\x8b","\x1c","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_program_parameter,HX_HCSTRING("lime_gl_get_program_parameter","\x95","\x8c","\xe9","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_render_buffer_parameter,HX_HCSTRING("lime_gl_get_render_buffer_parameter","\x9a","\x8b","\x13","\xf8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_shader_info_log,HX_HCSTRING("lime_gl_get_shader_info_log","\x74","\x08","\x6b","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_shader_parameter,HX_HCSTRING("lime_gl_get_shader_parameter","\x08","\x5f","\x48","\xc5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_shader_precision_format,HX_HCSTRING("lime_gl_get_shader_precision_format","\xd9","\x5f","\xb1","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_shader_source,HX_HCSTRING("lime_gl_get_shader_source","\x1c","\x86","\xa3","\xe7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_supported_extensions,HX_HCSTRING("lime_gl_get_supported_extensions","\x7e","\xb4","\x30","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_tex_parameter,HX_HCSTRING("lime_gl_get_tex_parameter","\x38","\x3a","\xff","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_uniform,HX_HCSTRING("lime_gl_get_uniform","\x1b","\x3e","\x0c","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_uniform_location,HX_HCSTRING("lime_gl_get_uniform_location","\x19","\x0c","\x33","\x6c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_vertex_attrib,HX_HCSTRING("lime_gl_get_vertex_attrib","\x2c","\x36","\x2d","\x8c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_get_vertex_attrib_offset,HX_HCSTRING("lime_gl_get_vertex_attrib_offset","\x86","\xd0","\xe7","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_hint,HX_HCSTRING("lime_gl_hint","\xb7","\x26","\x75","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_buffer,HX_HCSTRING("lime_gl_is_buffer","\xc5","\xec","\xc6","\xb4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_enabled,HX_HCSTRING("lime_gl_is_enabled","\x1c","\xa1","\xe8","\x45")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_framebuffer,HX_HCSTRING("lime_gl_is_framebuffer","\x08","\x9b","\x19","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_program,HX_HCSTRING("lime_gl_is_program","\x1f","\xe7","\xb0","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_renderbuffer,HX_HCSTRING("lime_gl_is_renderbuffer","\x5b","\x1e","\xda","\x91")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_shader,HX_HCSTRING("lime_gl_is_shader","\xea","\xee","\x52","\x01")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_is_texture,HX_HCSTRING("lime_gl_is_texture","\x76","\x65","\x98","\x66")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_line_width,HX_HCSTRING("lime_gl_line_width","\x6b","\x71","\x5f","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_link_program,HX_HCSTRING("lime_gl_link_program","\x2f","\xdf","\xcf","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_pixel_storei,HX_HCSTRING("lime_gl_pixel_storei","\x71","\xb2","\x56","\x3d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_polygon_offset,HX_HCSTRING("lime_gl_polygon_offset","\x28","\x8f","\x6c","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_read_pixels,HX_HCSTRING("lime_gl_read_pixels","\x06","\x09","\x69","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_renderbuffer_storage,HX_HCSTRING("lime_gl_renderbuffer_storage","\xc2","\x94","\xf1","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_sample_coverage,HX_HCSTRING("lime_gl_sample_coverage","\xad","\x98","\xc5","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_scissor,HX_HCSTRING("lime_gl_scissor","\xec","\x1c","\xb2","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_shader_source,HX_HCSTRING("lime_gl_shader_source","\xc5","\xd2","\xe2","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_stencil_func,HX_HCSTRING("lime_gl_stencil_func","\xd7","\xb0","\x4f","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_stencil_func_separate,HX_HCSTRING("lime_gl_stencil_func_separate","\x0b","\x13","\x77","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_stencil_mask,HX_HCSTRING("lime_gl_stencil_mask","\x7f","\x06","\xe1","\x68")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_stencil_mask_separate,HX_HCSTRING("lime_gl_stencil_mask_separate","\x63","\xc8","\x71","\x65")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_stencil_op,HX_HCSTRING("lime_gl_stencil_op","\xf4","\x8b","\x0c","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_stencil_op_separate,HX_HCSTRING("lime_gl_stencil_op_separate","\x4e","\x6c","\x36","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_tex_image_2d,HX_HCSTRING("lime_gl_tex_image_2d","\x5e","\xab","\x7a","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_tex_parameterf,HX_HCSTRING("lime_gl_tex_parameterf","\x65","\x7e","\x77","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_tex_parameteri,HX_HCSTRING("lime_gl_tex_parameteri","\x68","\x7e","\x77","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_tex_sub_image_2d,HX_HCSTRING("lime_gl_tex_sub_image_2d","\x3d","\x4d","\x7e","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform1f,HX_HCSTRING("lime_gl_uniform1f","\x19","\xea","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform1fv,HX_HCSTRING("lime_gl_uniform1fv","\x3d","\xec","\x80","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform1i,HX_HCSTRING("lime_gl_uniform1i","\x1c","\xea","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform1iv,HX_HCSTRING("lime_gl_uniform1iv","\xda","\xee","\x80","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform2f,HX_HCSTRING("lime_gl_uniform2f","\xf8","\xea","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform2fv,HX_HCSTRING("lime_gl_uniform2fv","\x7e","\xae","\x81","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform2i,HX_HCSTRING("lime_gl_uniform2i","\xfb","\xea","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform2iv,HX_HCSTRING("lime_gl_uniform2iv","\x1b","\xb1","\x81","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform3f,HX_HCSTRING("lime_gl_uniform3f","\xd7","\xeb","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform3fv,HX_HCSTRING("lime_gl_uniform3fv","\xbf","\x70","\x82","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform3i,HX_HCSTRING("lime_gl_uniform3i","\xda","\xeb","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform3iv,HX_HCSTRING("lime_gl_uniform3iv","\x5c","\x73","\x82","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform4f,HX_HCSTRING("lime_gl_uniform4f","\xb6","\xec","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform4fv,HX_HCSTRING("lime_gl_uniform4fv","\x00","\x33","\x83","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform4i,HX_HCSTRING("lime_gl_uniform4i","\xb9","\xec","\xeb","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform4iv,HX_HCSTRING("lime_gl_uniform4iv","\x9d","\x35","\x83","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_uniform_matrix,HX_HCSTRING("lime_gl_uniform_matrix","\x5c","\x9a","\xcc","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_use_program,HX_HCSTRING("lime_gl_use_program","\x1c","\x8c","\xb8","\x22")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_validate_program,HX_HCSTRING("lime_gl_validate_program","\xcb","\xeb","\x10","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_version,HX_HCSTRING("lime_gl_version","\xe8","\xdb","\xbc","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib1f,HX_HCSTRING("lime_gl_vertex_attrib1f","\x2a","\xcd","\xb2","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib1fv,HX_HCSTRING("lime_gl_vertex_attrib1fv","\x0c","\xb8","\xc0","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib2f,HX_HCSTRING("lime_gl_vertex_attrib2f","\x09","\xce","\xb2","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib2fv,HX_HCSTRING("lime_gl_vertex_attrib2fv","\x4d","\x7a","\xc1","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib3f,HX_HCSTRING("lime_gl_vertex_attrib3f","\xe8","\xce","\xb2","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib3fv,HX_HCSTRING("lime_gl_vertex_attrib3fv","\x8e","\x3c","\xc2","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib4f,HX_HCSTRING("lime_gl_vertex_attrib4f","\xc7","\xcf","\xb2","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib4fv,HX_HCSTRING("lime_gl_vertex_attrib4fv","\xcf","\xfe","\xc2","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_vertex_attrib_pointer,HX_HCSTRING("lime_gl_vertex_attrib_pointer","\x13","\xfa","\x74","\x15")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GL_obj::lime_gl_viewport,HX_HCSTRING("lime_gl_viewport","\x96","\x8d","\x70","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_MARK_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_MARK_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_MARK_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_MARK_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_MARK_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_MARK_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_MARK_MEMBER_NAME(GL_obj::CW,"CW");
	HX_MARK_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_MARK_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_MARK_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_MARK_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_MARK_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_MARK_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_MARK_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_MARK_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_MARK_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_MARK_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_MARK_MEMBER_NAME(GL_obj::INT,"INT");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_MARK_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_MARK_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_MARK_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_MARK_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_MARK_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_MARK_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_MARK_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_MARK_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_MARK_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_MARK_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_MARK_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_MARK_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_MARK_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_MARK_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_MARK_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_MARK_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_MARK_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_MARK_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_MARK_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_MARK_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_MARK_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_MARK_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_MARK_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_MARK_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_MARK_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_MARK_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_MARK_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_MARK_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_MARK_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_MARK_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_MARK_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_MARK_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_MARK_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_MARK_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_MARK_MEMBER_NAME(GL_obj::drawingBufferHeight,"drawingBufferHeight");
	HX_MARK_MEMBER_NAME(GL_obj::drawingBufferWidth,"drawingBufferWidth");
	HX_MARK_MEMBER_NAME(GL_obj::version,"version");
	HX_MARK_MEMBER_NAME(GL_obj::defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_active_texture,"lime_gl_active_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_attach_shader,"lime_gl_attach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_attrib_location,"lime_gl_bind_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_bitmap_data_texture,"lime_gl_bind_bitmap_data_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_buffer,"lime_gl_bind_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_framebuffer,"lime_gl_bind_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_renderbuffer,"lime_gl_bind_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_bind_texture,"lime_gl_bind_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_color,"lime_gl_blend_color");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_equation,"lime_gl_blend_equation");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_equation_separate,"lime_gl_blend_equation_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_func,"lime_gl_blend_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_blend_func_separate,"lime_gl_blend_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_buffer_data,"lime_gl_buffer_data");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_buffer_sub_data,"lime_gl_buffer_sub_data");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_check_framebuffer_status,"lime_gl_check_framebuffer_status");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear,"lime_gl_clear");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_color,"lime_gl_clear_color");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_depth,"lime_gl_clear_depth");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_clear_stencil,"lime_gl_clear_stencil");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_color_mask,"lime_gl_color_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compile_shader,"lime_gl_compile_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_image_2d,"lime_gl_compressed_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_sub_image_2d,"lime_gl_compressed_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_copy_tex_image_2d,"lime_gl_copy_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_copy_tex_sub_image_2d,"lime_gl_copy_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_buffer,"lime_gl_create_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_framebuffer,"lime_gl_create_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_program,"lime_gl_create_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_render_buffer,"lime_gl_create_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_shader,"lime_gl_create_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_create_texture,"lime_gl_create_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_cull_face,"lime_gl_cull_face");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_buffer,"lime_gl_delete_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_framebuffer,"lime_gl_delete_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_program,"lime_gl_delete_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_render_buffer,"lime_gl_delete_render_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_shader,"lime_gl_delete_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_delete_texture,"lime_gl_delete_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_func,"lime_gl_depth_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_mask,"lime_gl_depth_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_depth_range,"lime_gl_depth_range");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_detach_shader,"lime_gl_detach_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_disable,"lime_gl_disable");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_disable_vertex_attrib_array,"lime_gl_disable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_draw_arrays,"lime_gl_draw_arrays");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_draw_elements,"lime_gl_draw_elements");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_enable,"lime_gl_enable");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_enable_vertex_attrib_array,"lime_gl_enable_vertex_attrib_array");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_finish,"lime_gl_finish");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_flush,"lime_gl_flush");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_framebuffer_renderbuffer,"lime_gl_framebuffer_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_framebuffer_texture2D,"lime_gl_framebuffer_texture2D");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_front_face,"lime_gl_front_face");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_generate_mipmap,"lime_gl_generate_mipmap");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_active_attrib,"lime_gl_get_active_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_active_uniform,"lime_gl_get_active_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_attrib_location,"lime_gl_get_attrib_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_buffer_paramerter,"lime_gl_get_buffer_paramerter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_context_attributes,"lime_gl_get_context_attributes");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_error,"lime_gl_get_error");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_framebuffer_attachment_parameter,"lime_gl_get_framebuffer_attachment_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_parameter,"lime_gl_get_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_program_info_log,"lime_gl_get_program_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_program_parameter,"lime_gl_get_program_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_render_buffer_parameter,"lime_gl_get_render_buffer_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_info_log,"lime_gl_get_shader_info_log");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_parameter,"lime_gl_get_shader_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_precision_format,"lime_gl_get_shader_precision_format");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_shader_source,"lime_gl_get_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_supported_extensions,"lime_gl_get_supported_extensions");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_tex_parameter,"lime_gl_get_tex_parameter");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_uniform,"lime_gl_get_uniform");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_uniform_location,"lime_gl_get_uniform_location");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib,"lime_gl_get_vertex_attrib");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib_offset,"lime_gl_get_vertex_attrib_offset");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_hint,"lime_gl_hint");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_buffer,"lime_gl_is_buffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_enabled,"lime_gl_is_enabled");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_framebuffer,"lime_gl_is_framebuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_program,"lime_gl_is_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_renderbuffer,"lime_gl_is_renderbuffer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_shader,"lime_gl_is_shader");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_is_texture,"lime_gl_is_texture");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_line_width,"lime_gl_line_width");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_link_program,"lime_gl_link_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_pixel_storei,"lime_gl_pixel_storei");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_polygon_offset,"lime_gl_polygon_offset");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_read_pixels,"lime_gl_read_pixels");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_renderbuffer_storage,"lime_gl_renderbuffer_storage");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_sample_coverage,"lime_gl_sample_coverage");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_scissor,"lime_gl_scissor");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_shader_source,"lime_gl_shader_source");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_func,"lime_gl_stencil_func");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_func_separate,"lime_gl_stencil_func_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_mask,"lime_gl_stencil_mask");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_mask_separate,"lime_gl_stencil_mask_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_op,"lime_gl_stencil_op");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_stencil_op_separate,"lime_gl_stencil_op_separate");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_image_2d,"lime_gl_tex_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_parameterf,"lime_gl_tex_parameterf");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_parameteri,"lime_gl_tex_parameteri");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_tex_sub_image_2d,"lime_gl_tex_sub_image_2d");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1f,"lime_gl_uniform1f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1fv,"lime_gl_uniform1fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1i,"lime_gl_uniform1i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform1iv,"lime_gl_uniform1iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2f,"lime_gl_uniform2f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2fv,"lime_gl_uniform2fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2i,"lime_gl_uniform2i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform2iv,"lime_gl_uniform2iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3f,"lime_gl_uniform3f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3fv,"lime_gl_uniform3fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3i,"lime_gl_uniform3i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform3iv,"lime_gl_uniform3iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4f,"lime_gl_uniform4f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4fv,"lime_gl_uniform4fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4i,"lime_gl_uniform4i");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform4iv,"lime_gl_uniform4iv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_uniform_matrix,"lime_gl_uniform_matrix");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_use_program,"lime_gl_use_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_validate_program,"lime_gl_validate_program");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_version,"lime_gl_version");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1f,"lime_gl_vertex_attrib1f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1fv,"lime_gl_vertex_attrib1fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2f,"lime_gl_vertex_attrib2f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2fv,"lime_gl_vertex_attrib2fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3f,"lime_gl_vertex_attrib3f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3fv,"lime_gl_vertex_attrib3fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4f,"lime_gl_vertex_attrib4f");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4fv,"lime_gl_vertex_attrib4fv");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib_pointer,"lime_gl_vertex_attrib_pointer");
	HX_MARK_MEMBER_NAME(GL_obj::lime_gl_viewport,"lime_gl_viewport");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BUFFER_BIT,"DEPTH_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BUFFER_BIT,"STENCIL_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_BUFFER_BIT,"COLOR_BUFFER_BIT");
	HX_VISIT_MEMBER_NAME(GL_obj::POINTS,"POINTS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINES,"LINES");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_LOOP,"LINE_LOOP");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_STRIP,"LINE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLES,"TRIANGLES");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_STRIP,"TRIANGLE_STRIP");
	HX_VISIT_MEMBER_NAME(GL_obj::TRIANGLE_FAN,"TRIANGLE_FAN");
	HX_VISIT_MEMBER_NAME(GL_obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_COLOR,"SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_COLOR,"ONE_MINUS_SRC_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA,"SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_SRC_ALPHA,"ONE_MINUS_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_ALPHA,"DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_ALPHA,"ONE_MINUS_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::DST_COLOR,"DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_DST_COLOR,"ONE_MINUS_DST_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::SRC_ALPHA_SATURATE,"SRC_ALPHA_SATURATE");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_ADD,"FUNC_ADD");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION,"BLEND_EQUATION");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_RGB,"BLEND_EQUATION_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_EQUATION_ALPHA,"BLEND_EQUATION_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_SUBTRACT,"FUNC_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::FUNC_REVERSE_SUBTRACT,"FUNC_REVERSE_SUBTRACT");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_RGB,"BLEND_DST_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_RGB,"BLEND_SRC_RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_DST_ALPHA,"BLEND_DST_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_SRC_ALPHA,"BLEND_SRC_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_COLOR,"CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_COLOR,"ONE_MINUS_CONSTANT_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::CONSTANT_ALPHA,"CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::ONE_MINUS_CONSTANT_ALPHA,"ONE_MINUS_CONSTANT_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND_COLOR,"BLEND_COLOR");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER,"ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER,"ELEMENT_ARRAY_BUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::ARRAY_BUFFER_BINDING,"ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::ELEMENT_ARRAY_BUFFER_BINDING,"ELEMENT_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::STREAM_DRAW,"STREAM_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::STATIC_DRAW,"STATIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_SIZE,"BUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::BUFFER_USAGE,"BUFFER_USAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_VERTEX_ATTRIB,"CURRENT_VERTEX_ATTRIB");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(GL_obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE,"CULL_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::BLEND,"BLEND");
	HX_VISIT_MEMBER_NAME(GL_obj::DITHER,"DITHER");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_TEST,"STENCIL_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_TEST,"DEPTH_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_TEST,"SCISSOR_TEST");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FILL,"POLYGON_OFFSET_FILL");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_ALPHA_TO_COVERAGE,"SAMPLE_ALPHA_TO_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE,"SAMPLE_COVERAGE");
	HX_VISIT_MEMBER_NAME(GL_obj::NO_ERROR,"NO_ERROR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_ENUM,"INVALID_ENUM");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_VALUE,"INVALID_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_OPERATION,"INVALID_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::OUT_OF_MEMORY,"OUT_OF_MEMORY");
	HX_VISIT_MEMBER_NAME(GL_obj::CW,"CW");
	HX_VISIT_MEMBER_NAME(GL_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(GL_obj::LINE_WIDTH,"LINE_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_POINT_SIZE_RANGE,"ALIASED_POINT_SIZE_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::ALIASED_LINE_WIDTH_RANGE,"ALIASED_LINE_WIDTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::CULL_FACE_MODE,"CULL_FACE_MODE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRONT_FACE,"FRONT_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_RANGE,"DEPTH_RANGE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_WRITEMASK,"DEPTH_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_CLEAR_VALUE,"DEPTH_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_FUNC,"DEPTH_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_CLEAR_VALUE,"STENCIL_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FUNC,"STENCIL_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_FAIL,"STENCIL_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_FAIL,"STENCIL_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_PASS_DEPTH_PASS,"STENCIL_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_REF,"STENCIL_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_VALUE_MASK,"STENCIL_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_WRITEMASK,"STENCIL_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FUNC,"STENCIL_BACK_FUNC");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_FAIL,"STENCIL_BACK_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_FAIL,"STENCIL_BACK_PASS_DEPTH_FAIL");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_PASS_DEPTH_PASS,"STENCIL_BACK_PASS_DEPTH_PASS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_REF,"STENCIL_BACK_REF");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_VALUE_MASK,"STENCIL_BACK_VALUE_MASK");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BACK_WRITEMASK,"STENCIL_BACK_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::VIEWPORT,"VIEWPORT");
	HX_VISIT_MEMBER_NAME(GL_obj::SCISSOR_BOX,"SCISSOR_BOX");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_CLEAR_VALUE,"COLOR_CLEAR_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_WRITEMASK,"COLOR_WRITEMASK");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_ALIGNMENT,"UNPACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::PACK_ALIGNMENT,"PACK_ALIGNMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_SIZE,"MAX_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VIEWPORT_DIMS,"MAX_VIEWPORT_DIMS");
	HX_VISIT_MEMBER_NAME(GL_obj::SUBPIXEL_BITS,"SUBPIXEL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::RED_BITS,"RED_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::GREEN_BITS,"GREEN_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::BLUE_BITS,"BLUE_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA_BITS,"ALPHA_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_BITS,"DEPTH_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_BITS,"STENCIL_BITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_UNITS,"POLYGON_OFFSET_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::POLYGON_OFFSET_FACTOR,"POLYGON_OFFSET_FACTOR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_2D,"TEXTURE_BINDING_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_BUFFERS,"SAMPLE_BUFFERS");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLES,"SAMPLES");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_VALUE,"SAMPLE_COVERAGE_VALUE");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLE_COVERAGE_INVERT,"SAMPLE_COVERAGE_INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPRESSED_TEXTURE_FORMATS,"COMPRESSED_TEXTURE_FORMATS");
	HX_VISIT_MEMBER_NAME(GL_obj::DONT_CARE,"DONT_CARE");
	HX_VISIT_MEMBER_NAME(GL_obj::FASTEST,"FASTEST");
	HX_VISIT_MEMBER_NAME(GL_obj::NICEST,"NICEST");
	HX_VISIT_MEMBER_NAME(GL_obj::GENERATE_MIPMAP_HINT,"GENERATE_MIPMAP_HINT");
	HX_VISIT_MEMBER_NAME(GL_obj::BYTE,"BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_BYTE,"UNSIGNED_BYTE");
	HX_VISIT_MEMBER_NAME(GL_obj::SHORT,"SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT,"UNSIGNED_SHORT");
	HX_VISIT_MEMBER_NAME(GL_obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_INT,"UNSIGNED_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT,"DEPTH_COMPONENT");
	HX_VISIT_MEMBER_NAME(GL_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB,"RGB");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA,"RGBA");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE,"LUMINANCE");
	HX_VISIT_MEMBER_NAME(GL_obj::LUMINANCE_ALPHA,"LUMINANCE_ALPHA");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_4_4_4_4,"UNSIGNED_SHORT_4_4_4_4");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_5_5_1,"UNSIGNED_SHORT_5_5_5_1");
	HX_VISIT_MEMBER_NAME(GL_obj::UNSIGNED_SHORT_5_6_5,"UNSIGNED_SHORT_5_6_5");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAGMENT_SHADER,"FRAGMENT_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_SHADER,"VERTEX_SHADER");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_ATTRIBS,"MAX_VERTEX_ATTRIBS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_UNIFORM_VECTORS,"MAX_VERTEX_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VARYING_VECTORS,"MAX_VARYING_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_COMBINED_TEXTURE_IMAGE_UNITS,"MAX_COMBINED_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_VERTEX_TEXTURE_IMAGE_UNITS,"MAX_VERTEX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_TEXTURE_IMAGE_UNITS,"MAX_TEXTURE_IMAGE_UNITS");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_FRAGMENT_UNIFORM_VECTORS,"MAX_FRAGMENT_UNIFORM_VECTORS");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADER_TYPE,"SHADER_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::DELETE_STATUS,"DELETE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LINK_STATUS,"LINK_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::VALIDATE_STATUS,"VALIDATE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::ATTACHED_SHADERS,"ATTACHED_SHADERS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_UNIFORMS,"ACTIVE_UNIFORMS");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_ATTRIBUTES,"ACTIVE_ATTRIBUTES");
	HX_VISIT_MEMBER_NAME(GL_obj::SHADING_LANGUAGE_VERSION,"SHADING_LANGUAGE_VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::CURRENT_PROGRAM,"CURRENT_PROGRAM");
	HX_VISIT_MEMBER_NAME(GL_obj::NEVER,"NEVER");
	HX_VISIT_MEMBER_NAME(GL_obj::LESS,"LESS");
	HX_VISIT_MEMBER_NAME(GL_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::LEQUAL,"LEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GREATER,"GREATER");
	HX_VISIT_MEMBER_NAME(GL_obj::NOTEQUAL,"NOTEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::GEQUAL,"GEQUAL");
	HX_VISIT_MEMBER_NAME(GL_obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(GL_obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(GL_obj::REPLACE,"REPLACE");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR,"INCR");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR,"DECR");
	HX_VISIT_MEMBER_NAME(GL_obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(GL_obj::INCR_WRAP,"INCR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::DECR_WRAP,"DECR_WRAP");
	HX_VISIT_MEMBER_NAME(GL_obj::VENDOR,"VENDOR");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERER,"RENDERER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST,"NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_NEAREST,"NEAREST_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_NEAREST,"LINEAR_MIPMAP_NEAREST");
	HX_VISIT_MEMBER_NAME(GL_obj::NEAREST_MIPMAP_LINEAR,"NEAREST_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::LINEAR_MIPMAP_LINEAR,"LINEAR_MIPMAP_LINEAR");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MAG_FILTER,"TEXTURE_MAG_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_MIN_FILTER,"TEXTURE_MIN_FILTER");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_S,"TEXTURE_WRAP_S");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_WRAP_T,"TEXTURE_WRAP_T");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_2D,"TEXTURE_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE,"TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP,"TEXTURE_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_BINDING_CUBE_MAP,"TEXTURE_BINDING_CUBE_MAP");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_X,"TEXTURE_CUBE_MAP_POSITIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_X,"TEXTURE_CUBE_MAP_NEGATIVE_X");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Y,"TEXTURE_CUBE_MAP_POSITIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Y,"TEXTURE_CUBE_MAP_NEGATIVE_Y");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_POSITIVE_Z,"TEXTURE_CUBE_MAP_POSITIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE_CUBE_MAP_NEGATIVE_Z,"TEXTURE_CUBE_MAP_NEGATIVE_Z");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_CUBE_MAP_TEXTURE_SIZE,"MAX_CUBE_MAP_TEXTURE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE0,"TEXTURE0");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE1,"TEXTURE1");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE2,"TEXTURE2");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE3,"TEXTURE3");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE4,"TEXTURE4");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE5,"TEXTURE5");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE6,"TEXTURE6");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE7,"TEXTURE7");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE8,"TEXTURE8");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE9,"TEXTURE9");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE10,"TEXTURE10");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE11,"TEXTURE11");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE12,"TEXTURE12");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE13,"TEXTURE13");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE14,"TEXTURE14");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE15,"TEXTURE15");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE16,"TEXTURE16");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE17,"TEXTURE17");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE18,"TEXTURE18");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE19,"TEXTURE19");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE20,"TEXTURE20");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE21,"TEXTURE21");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE22,"TEXTURE22");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE23,"TEXTURE23");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE24,"TEXTURE24");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE25,"TEXTURE25");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE26,"TEXTURE26");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE27,"TEXTURE27");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE28,"TEXTURE28");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE29,"TEXTURE29");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE30,"TEXTURE30");
	HX_VISIT_MEMBER_NAME(GL_obj::TEXTURE31,"TEXTURE31");
	HX_VISIT_MEMBER_NAME(GL_obj::ACTIVE_TEXTURE,"ACTIVE_TEXTURE");
	HX_VISIT_MEMBER_NAME(GL_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::CLAMP_TO_EDGE,"CLAMP_TO_EDGE");
	HX_VISIT_MEMBER_NAME(GL_obj::MIRRORED_REPEAT,"MIRRORED_REPEAT");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC2,"FLOAT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC3,"FLOAT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_VEC4,"FLOAT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC2,"INT_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC3,"INT_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::INT_VEC4,"INT_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC2,"BOOL_VEC2");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC3,"BOOL_VEC3");
	HX_VISIT_MEMBER_NAME(GL_obj::BOOL_VEC4,"BOOL_VEC4");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT2,"FLOAT_MAT2");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT3,"FLOAT_MAT3");
	HX_VISIT_MEMBER_NAME(GL_obj::FLOAT_MAT4,"FLOAT_MAT4");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(GL_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_ENABLED,"VERTEX_ATTRIB_ARRAY_ENABLED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_SIZE,"VERTEX_ATTRIB_ARRAY_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_STRIDE,"VERTEX_ATTRIB_ARRAY_STRIDE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_TYPE,"VERTEX_ATTRIB_ARRAY_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_NORMALIZED,"VERTEX_ATTRIB_ARRAY_NORMALIZED");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_POINTER,"VERTEX_ATTRIB_ARRAY_POINTER");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_ATTRIB_ARRAY_BUFFER_BINDING,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::VERTEX_PROGRAM_POINT_SIZE,"VERTEX_PROGRAM_POINT_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::POINT_SPRITE,"POINT_SPRITE");
	HX_VISIT_MEMBER_NAME(GL_obj::COMPILE_STATUS,"COMPILE_STATUS");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_FLOAT,"LOW_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_FLOAT,"MEDIUM_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_FLOAT,"HIGH_FLOAT");
	HX_VISIT_MEMBER_NAME(GL_obj::LOW_INT,"LOW_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::MEDIUM_INT,"MEDIUM_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::HIGH_INT,"HIGH_INT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER,"FRAMEBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER,"RENDERBUFFER");
	HX_VISIT_MEMBER_NAME(GL_obj::RGBA4,"RGBA4");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB5_A1,"RGB5_A1");
	HX_VISIT_MEMBER_NAME(GL_obj::RGB565,"RGB565");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_COMPONENT16,"DEPTH_COMPONENT16");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX,"STENCIL_INDEX");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_INDEX8,"STENCIL_INDEX8");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL,"DEPTH_STENCIL");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_WIDTH,"RENDERBUFFER_WIDTH");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_HEIGHT,"RENDERBUFFER_HEIGHT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_INTERNAL_FORMAT,"RENDERBUFFER_INTERNAL_FORMAT");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_RED_SIZE,"RENDERBUFFER_RED_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_GREEN_SIZE,"RENDERBUFFER_GREEN_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BLUE_SIZE,"RENDERBUFFER_BLUE_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_ALPHA_SIZE,"RENDERBUFFER_ALPHA_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_DEPTH_SIZE,"RENDERBUFFER_DEPTH_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_STENCIL_SIZE,"RENDERBUFFER_STENCIL_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_OBJECT_NAME,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE");
	HX_VISIT_MEMBER_NAME(GL_obj::COLOR_ATTACHMENT0,"COLOR_ATTACHMENT0");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_ATTACHMENT,"DEPTH_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::STENCIL_ATTACHMENT,"STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::DEPTH_STENCIL_ATTACHMENT,"DEPTH_STENCIL_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_COMPLETE,"FRAMEBUFFER_COMPLETE");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_INCOMPLETE_DIMENSIONS,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_UNSUPPORTED,"FRAMEBUFFER_UNSUPPORTED");
	HX_VISIT_MEMBER_NAME(GL_obj::FRAMEBUFFER_BINDING,"FRAMEBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::RENDERBUFFER_BINDING,"RENDERBUFFER_BINDING");
	HX_VISIT_MEMBER_NAME(GL_obj::MAX_RENDERBUFFER_SIZE,"MAX_RENDERBUFFER_SIZE");
	HX_VISIT_MEMBER_NAME(GL_obj::INVALID_FRAMEBUFFER_OPERATION,"INVALID_FRAMEBUFFER_OPERATION");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_FLIP_Y_WEBGL,"UNPACK_FLIP_Y_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_PREMULTIPLY_ALPHA_WEBGL,"UNPACK_PREMULTIPLY_ALPHA_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::CONTEXT_LOST_WEBGL,"CONTEXT_LOST_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::UNPACK_COLORSPACE_CONVERSION_WEBGL,"UNPACK_COLORSPACE_CONVERSION_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::BROWSER_DEFAULT_WEBGL,"BROWSER_DEFAULT_WEBGL");
	HX_VISIT_MEMBER_NAME(GL_obj::drawingBufferHeight,"drawingBufferHeight");
	HX_VISIT_MEMBER_NAME(GL_obj::drawingBufferWidth,"drawingBufferWidth");
	HX_VISIT_MEMBER_NAME(GL_obj::version,"version");
	HX_VISIT_MEMBER_NAME(GL_obj::defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_active_texture,"lime_gl_active_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_attach_shader,"lime_gl_attach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_attrib_location,"lime_gl_bind_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_bitmap_data_texture,"lime_gl_bind_bitmap_data_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_buffer,"lime_gl_bind_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_framebuffer,"lime_gl_bind_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_renderbuffer,"lime_gl_bind_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_bind_texture,"lime_gl_bind_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_color,"lime_gl_blend_color");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_equation,"lime_gl_blend_equation");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_equation_separate,"lime_gl_blend_equation_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_func,"lime_gl_blend_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_blend_func_separate,"lime_gl_blend_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_buffer_data,"lime_gl_buffer_data");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_buffer_sub_data,"lime_gl_buffer_sub_data");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_check_framebuffer_status,"lime_gl_check_framebuffer_status");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear,"lime_gl_clear");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_color,"lime_gl_clear_color");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_depth,"lime_gl_clear_depth");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_clear_stencil,"lime_gl_clear_stencil");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_color_mask,"lime_gl_color_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compile_shader,"lime_gl_compile_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_image_2d,"lime_gl_compressed_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_compressed_tex_sub_image_2d,"lime_gl_compressed_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_copy_tex_image_2d,"lime_gl_copy_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_copy_tex_sub_image_2d,"lime_gl_copy_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_buffer,"lime_gl_create_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_framebuffer,"lime_gl_create_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_program,"lime_gl_create_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_render_buffer,"lime_gl_create_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_shader,"lime_gl_create_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_create_texture,"lime_gl_create_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_cull_face,"lime_gl_cull_face");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_buffer,"lime_gl_delete_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_framebuffer,"lime_gl_delete_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_program,"lime_gl_delete_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_render_buffer,"lime_gl_delete_render_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_shader,"lime_gl_delete_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_delete_texture,"lime_gl_delete_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_func,"lime_gl_depth_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_mask,"lime_gl_depth_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_depth_range,"lime_gl_depth_range");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_detach_shader,"lime_gl_detach_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_disable,"lime_gl_disable");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_disable_vertex_attrib_array,"lime_gl_disable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_draw_arrays,"lime_gl_draw_arrays");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_draw_elements,"lime_gl_draw_elements");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_enable,"lime_gl_enable");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_enable_vertex_attrib_array,"lime_gl_enable_vertex_attrib_array");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_finish,"lime_gl_finish");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_flush,"lime_gl_flush");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_framebuffer_renderbuffer,"lime_gl_framebuffer_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_framebuffer_texture2D,"lime_gl_framebuffer_texture2D");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_front_face,"lime_gl_front_face");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_generate_mipmap,"lime_gl_generate_mipmap");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_active_attrib,"lime_gl_get_active_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_active_uniform,"lime_gl_get_active_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_attrib_location,"lime_gl_get_attrib_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_buffer_paramerter,"lime_gl_get_buffer_paramerter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_context_attributes,"lime_gl_get_context_attributes");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_error,"lime_gl_get_error");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_framebuffer_attachment_parameter,"lime_gl_get_framebuffer_attachment_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_parameter,"lime_gl_get_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_program_info_log,"lime_gl_get_program_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_program_parameter,"lime_gl_get_program_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_render_buffer_parameter,"lime_gl_get_render_buffer_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_info_log,"lime_gl_get_shader_info_log");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_parameter,"lime_gl_get_shader_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_precision_format,"lime_gl_get_shader_precision_format");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_shader_source,"lime_gl_get_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_supported_extensions,"lime_gl_get_supported_extensions");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_tex_parameter,"lime_gl_get_tex_parameter");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_uniform,"lime_gl_get_uniform");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_uniform_location,"lime_gl_get_uniform_location");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib,"lime_gl_get_vertex_attrib");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_get_vertex_attrib_offset,"lime_gl_get_vertex_attrib_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_hint,"lime_gl_hint");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_buffer,"lime_gl_is_buffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_enabled,"lime_gl_is_enabled");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_framebuffer,"lime_gl_is_framebuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_program,"lime_gl_is_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_renderbuffer,"lime_gl_is_renderbuffer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_shader,"lime_gl_is_shader");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_is_texture,"lime_gl_is_texture");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_line_width,"lime_gl_line_width");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_link_program,"lime_gl_link_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_pixel_storei,"lime_gl_pixel_storei");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_polygon_offset,"lime_gl_polygon_offset");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_read_pixels,"lime_gl_read_pixels");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_renderbuffer_storage,"lime_gl_renderbuffer_storage");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_sample_coverage,"lime_gl_sample_coverage");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_scissor,"lime_gl_scissor");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_shader_source,"lime_gl_shader_source");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_func,"lime_gl_stencil_func");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_func_separate,"lime_gl_stencil_func_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_mask,"lime_gl_stencil_mask");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_mask_separate,"lime_gl_stencil_mask_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_op,"lime_gl_stencil_op");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_stencil_op_separate,"lime_gl_stencil_op_separate");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_image_2d,"lime_gl_tex_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_parameterf,"lime_gl_tex_parameterf");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_parameteri,"lime_gl_tex_parameteri");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_tex_sub_image_2d,"lime_gl_tex_sub_image_2d");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1f,"lime_gl_uniform1f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1fv,"lime_gl_uniform1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1i,"lime_gl_uniform1i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform1iv,"lime_gl_uniform1iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2f,"lime_gl_uniform2f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2fv,"lime_gl_uniform2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2i,"lime_gl_uniform2i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform2iv,"lime_gl_uniform2iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3f,"lime_gl_uniform3f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3fv,"lime_gl_uniform3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3i,"lime_gl_uniform3i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform3iv,"lime_gl_uniform3iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4f,"lime_gl_uniform4f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4fv,"lime_gl_uniform4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4i,"lime_gl_uniform4i");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform4iv,"lime_gl_uniform4iv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_uniform_matrix,"lime_gl_uniform_matrix");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_use_program,"lime_gl_use_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_validate_program,"lime_gl_validate_program");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_version,"lime_gl_version");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1f,"lime_gl_vertex_attrib1f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib1fv,"lime_gl_vertex_attrib1fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2f,"lime_gl_vertex_attrib2f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib2fv,"lime_gl_vertex_attrib2fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3f,"lime_gl_vertex_attrib3f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib3fv,"lime_gl_vertex_attrib3fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4f,"lime_gl_vertex_attrib4f");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib4fv,"lime_gl_vertex_attrib4fv");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_vertex_attrib_pointer,"lime_gl_vertex_attrib_pointer");
	HX_VISIT_MEMBER_NAME(GL_obj::lime_gl_viewport,"lime_gl_viewport");
};

#endif

hx::Class GL_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"),
	HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"),
	HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"),
	HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"),
	HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"),
	HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"),
	HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"),
	HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),
	HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"),
	HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"),
	HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"),
	HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"),
	HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"),
	HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"),
	HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"),
	HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"),
	HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"),
	HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"),
	HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"),
	HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"),
	HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"),
	HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"),
	HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"),
	HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"),
	HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"),
	HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"),
	HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"),
	HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"),
	HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"),
	HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"),
	HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"),
	HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"),
	HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"),
	HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"),
	HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"),
	HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"),
	HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"),
	HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"),
	HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"),
	HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"),
	HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"),
	HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"),
	HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"),
	HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"),
	HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"),
	HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"),
	HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"),
	HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"),
	HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"),
	HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"),
	HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"),
	HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"),
	HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"),
	HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"),
	HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"),
	HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"),
	HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"),
	HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"),
	HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"),
	HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"),
	HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"),
	HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"),
	HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"),
	HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"),
	HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"),
	HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"),
	HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"),
	HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"),
	HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"),
	HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"),
	HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"),
	HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"),
	HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"),
	HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"),
	HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"),
	HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"),
	HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"),
	HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"),
	HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"),
	HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"),
	HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"),
	HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"),
	HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"),
	HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"),
	HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"),
	HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"),
	HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"),
	HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"),
	HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"),
	HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"),
	HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"),
	HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"),
	HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"),
	HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"),
	HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"),
	HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"),
	HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"),
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"),
	HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"),
	HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"),
	HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"),
	HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"),
	HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"),
	HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"),
	HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"),
	HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"),
	HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"),
	HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"),
	HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"),
	HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"),
	HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"),
	HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"),
	HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"),
	HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"),
	HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"),
	HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"),
	HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"),
	HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"),
	HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"),
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"),
	HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"),
	HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"),
	HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"),
	HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"),
	HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"),
	HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"),
	HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"),
	HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"),
	HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"),
	HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"),
	HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"),
	HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"),
	HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"),
	HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"),
	HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"),
	HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"),
	HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"),
	HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"),
	HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"),
	HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"),
	HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"),
	HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"),
	HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34"),
	HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14"),
	HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"),
	HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"),
	HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"),
	HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"),
	HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"),
	HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"),
	HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"),
	HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"),
	HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"),
	HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"),
	HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"),
	HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),
	HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"),
	HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"),
	HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"),
	HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"),
	HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"),
	HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"),
	HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"),
	HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"),
	HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"),
	HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"),
	HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"),
	HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"),
	HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"),
	HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"),
	HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"),
	HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"),
	HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"),
	HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"),
	HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"),
	HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"),
	HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"),
	HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"),
	HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"),
	HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"),
	HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"),
	HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"),
	HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"),
	HX_HCSTRING("drawingBufferHeight","\x85","\x15","\xb6","\x00"),
	HX_HCSTRING("drawingBufferWidth","\x28","\xc6","\x86","\xcb"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"),
	HX_HCSTRING("activeTexture","\xb5","\x13","\xaa","\x56"),
	HX_HCSTRING("attachShader","\xca","\xd0","\x77","\xb2"),
	HX_HCSTRING("bindAttribLocation","\x3c","\xa6","\x30","\x1e"),
	HX_HCSTRING("bindBitmapDataTexture","\xa5","\xd9","\xa8","\x2f"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("bindFramebuffer","\x30","\xc6","\x61","\xe7"),
	HX_HCSTRING("bindRenderbuffer","\x33","\xb6","\xb7","\x14"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("blendColor","\x52","\x33","\xb4","\xe2"),
	HX_HCSTRING("blendEquation","\xfd","\x98","\xad","\x02"),
	HX_HCSTRING("blendEquationSeparate","\x80","\x39","\x68","\xa7"),
	HX_HCSTRING("blendFunc","\x35","\xfc","\x9b","\x07"),
	HX_HCSTRING("blendFuncSeparate","\xb8","\x94","\xc0","\xca"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferSubData","\xaa","\xf6","\xe4","\x45"),
	HX_HCSTRING("checkFramebufferStatus","\x17","\x26","\x75","\x0a"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearColor","\x96","\xb0","\x66","\x1f"),
	HX_HCSTRING("clearDepth","\x36","\x30","\x34","\xac"),
	HX_HCSTRING("clearStencil","\xef","\x6f","\x82","\x5b"),
	HX_HCSTRING("colorMask","\xef","\xcb","\xc3","\x23"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("compressedTexImage2D","\xa7","\xd8","\x5d","\x24"),
	HX_HCSTRING("compressedTexSubImage2D","\xd3","\xb5","\x7d","\x36"),
	HX_HCSTRING("copyTexImage2D","\xdb","\xd0","\x76","\xe4"),
	HX_HCSTRING("copyTexSubImage2D","\x1f","\xd6","\xae","\xa4"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("createFramebuffer","\x51","\xef","\xe8","\xcc"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createShader","\x41","\xff","\x75","\x3f"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("cullFace","\x6f","\xe7","\x31","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteFramebuffer","\x82","\x56","\x01","\x50"),
	HX_HCSTRING("deleteProgram","\x99","\xdd","\x82","\x52"),
	HX_HCSTRING("deleteRenderbuffer","\xa1","\x6d","\xb6","\x37"),
	HX_HCSTRING("deleteShader","\xb0","\xe5","\xb8","\x83"),
	HX_HCSTRING("deleteTexture","\xf0","\x5b","\x6a","\xfd"),
	HX_HCSTRING("depthFunc","\xe7","\x45","\x48","\x9a"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	HX_HCSTRING("depthRange","\xba","\x99","\x8b","\x40"),
	HX_HCSTRING("detachShader","\xd8","\xd0","\xad","\xea"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("disableVertexAttribArray","\xe3","\x69","\x74","\x4a"),
	HX_HCSTRING("drawArrays","\xde","\xf3","\xb3","\xf9"),
	HX_HCSTRING("drawElements","\x5b","\xc2","\xb7","\x59"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("enableVertexAttribArray","\xe8","\x46","\x5a","\xac"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("framebufferRenderbuffer","\x63","\xdd","\xb2","\x36"),
	HX_HCSTRING("framebufferTexture2D","\xc0","\x66","\x22","\x24"),
	HX_HCSTRING("frontFace","\xe6","\x01","\xc1","\x80"),
	HX_HCSTRING("generateMipmap","\x9d","\xd6","\x0d","\x5b"),
	HX_HCSTRING("getActiveAttrib","\x66","\x8b","\x22","\x63"),
	HX_HCSTRING("getActiveUniform","\x98","\x35","\x4e","\xd7"),
	HX_HCSTRING("getAttachedShaders","\xb4","\x2e","\x77","\x93"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getBufferParameter","\x93","\x58","\xb4","\x14"),
	HX_HCSTRING("getContextAttributes","\x30","\xda","\xe1","\xad"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getExtension","\x09","\x30","\x67","\xf4"),
	HX_HCSTRING("getFramebufferAttachmentParameter","\x8f","\xbf","\x8d","\xff"),
	HX_HCSTRING("getParameter","\x33","\xd2","\x06","\x58"),
	HX_HCSTRING("getProgramInfoLog","\xc8","\xf1","\xf2","\xcd"),
	HX_HCSTRING("getProgramParameter","\x3b","\xc3","\x9c","\x96"),
	HX_HCSTRING("getRenderbufferParameter","\x7d","\xc1","\xd7","\x3c"),
	HX_HCSTRING("getShaderInfoLog","\x9b","\xbd","\xc8","\xf3"),
	HX_HCSTRING("getShaderParameter","\xce","\x69","\x5b","\x36"),
	HX_HCSTRING("getShaderPrecisionFormat","\xfa","\xb8","\xcf","\xce"),
	HX_HCSTRING("getShaderSource","\x96","\xa3","\x04","\xc5"),
	HX_HCSTRING("getSupportedExtensions","\xec","\x78","\x6d","\xa1"),
	HX_HCSTRING("getTexParameter","\x78","\x98","\xd3","\xd2"),
	HX_HCSTRING("getUniform","\x3e","\xc7","\xc5","\x04"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("getVertexAttrib","\x84","\x2f","\x1c","\xa3"),
	HX_HCSTRING("getVertexAttribOffset","\x37","\xb6","\xce","\x56"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isFramebuffer","\x23","\x65","\x6c","\x83"),
	HX_HCSTRING("isProgram","\xba","\xc7","\xf7","\xf7"),
	HX_HCSTRING("isRenderbuffer","\xe0","\x2b","\xf8","\x01"),
	HX_HCSTRING("isShader","\xaf","\x5a","\x8a","\x75"),
	HX_HCSTRING("isTexture","\x11","\x46","\xdf","\xa2"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("linkProgram","\xaa","\xad","\x7b","\x89"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("pixelStorei","\x8e","\x34","\xc8","\x80"),
	HX_HCSTRING("polygonOffset","\xad","\x25","\x4d","\x66"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("renderbufferStorage","\x05","\xa1","\x70","\x87"),
	HX_HCSTRING("sampleCoverage","\x32","\x68","\x81","\x3b"),
	HX_HCSTRING("scissor","\x1c","\x28","\xe7","\x04"),
	HX_HCSTRING("shaderSource","\xe0","\x4d","\x1a","\xa2"),
	HX_HCSTRING("stencilFunc","\x60","\x83","\xbe","\x40"),
	HX_HCSTRING("stencilFuncSeparate","\xe3","\xbe","\xce","\xb2"),
	HX_HCSTRING("stencilMask","\x08","\xd9","\x4f","\x45"),
	HX_HCSTRING("stencilMaskSeparate","\x8b","\xfc","\xa9","\xc6"),
	HX_HCSTRING("stencilOp","\x3d","\x7a","\xec","\x56"),
	HX_HCSTRING("stencilOpSeparate","\xc0","\x5a","\x4a","\x53"),
	HX_HCSTRING("texImage2D","\xc6","\x7c","\x67","\xb9"),
	HX_HCSTRING("texParameterf","\x64","\x27","\x31","\x3c"),
	HX_HCSTRING("texParameteri","\x67","\x27","\x31","\x3c"),
	HX_HCSTRING("texSubImage2D","\x14","\x2f","\x90","\x28"),
	HX_HCSTRING("uniform1f","\x49","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1fv","\x0d","\xff","\x7e","\xda"),
	HX_HCSTRING("uniform1i","\x4c","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1iv","\xaa","\x01","\x7f","\xda"),
	HX_HCSTRING("uniform2f","\x28","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2fv","\x4e","\xc1","\x7f","\xda"),
	HX_HCSTRING("uniform2i","\x2b","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2iv","\xeb","\xc3","\x7f","\xda"),
	HX_HCSTRING("uniform3f","\x07","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3fv","\x8f","\x83","\x80","\xda"),
	HX_HCSTRING("uniform3i","\x0a","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3iv","\x2c","\x86","\x80","\xda"),
	HX_HCSTRING("uniform4f","\xe6","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4fv","\xd0","\x45","\x81","\xda"),
	HX_HCSTRING("uniform4i","\xe9","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4iv","\x6d","\x48","\x81","\xda"),
	HX_HCSTRING("uniformMatrix2fv","\x8d","\x8a","\x59","\xc5"),
	HX_HCSTRING("uniformMatrix3fv","\xce","\x4c","\x5a","\xc5"),
	HX_HCSTRING("uniformMatrix4fv","\x0f","\x0f","\x5b","\xc5"),
	HX_HCSTRING("uniformMatrix3D","\x86","\x86","\xbb","\x1e"),
	HX_HCSTRING("useProgram","\xfd","\x6c","\xac","\xf6"),
	HX_HCSTRING("validateProgram","\x8e","\x80","\x0f","\xef"),
	HX_HCSTRING("vertexAttrib1f","\x63","\x94","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib1fv","\xb3","\x42","\x0b","\xec"),
	HX_HCSTRING("vertexAttrib2f","\x42","\x95","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib2fv","\xf4","\x04","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib3f","\x21","\x96","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib3fv","\x35","\xc7","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib4f","\x00","\x97","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib4fv","\x76","\x89","\x0d","\xec"),
	HX_HCSTRING("vertexAttribPointer","\x8f","\x04","\xb6","\x3f"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("get_drawingBufferHeight","\x1c","\xbc","\x0b","\x09"),
	HX_HCSTRING("get_drawingBufferWidth","\x71","\x3f","\x1b","\x25"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("lime_gl_active_texture","\x52","\xdf","\x77","\xb3"),
	HX_HCSTRING("lime_gl_attach_shader","\x6f","\x78","\x09","\x06"),
	HX_HCSTRING("lime_gl_bind_attrib_location","\x78","\xd0","\x23","\x1a"),
	HX_HCSTRING("lime_gl_bind_bitmap_data_texture","\x84","\x86","\x5b","\xff"),
	HX_HCSTRING("lime_gl_bind_buffer","\x52","\x57","\xd9","\xe2"),
	HX_HCSTRING("lime_gl_bind_framebuffer","\x5b","\xd1","\x58","\x70"),
	HX_HCSTRING("lime_gl_bind_renderbuffer","\xa8","\x70","\xea","\x63"),
	HX_HCSTRING("lime_gl_bind_texture","\x49","\x36","\xa3","\x88"),
	HX_HCSTRING("lime_gl_blend_color","\x85","\xd0","\xce","\x3a"),
	HX_HCSTRING("lime_gl_blend_equation","\xaa","\xfd","\x08","\x1f"),
	HX_HCSTRING("lime_gl_blend_equation_separate","\xd8","\x13","\x95","\x58"),
	HX_HCSTRING("lime_gl_blend_func","\x62","\x46","\x02","\xe9"),
	HX_HCSTRING("lime_gl_blend_func_separate","\x20","\xf4","\xb8","\x2e"),
	HX_HCSTRING("lime_gl_buffer_data","\xd9","\x31","\x40","\x74"),
	HX_HCSTRING("lime_gl_buffer_sub_data","\xb8","\x37","\x6c","\xab"),
	HX_HCSTRING("lime_gl_check_framebuffer_status","\x0b","\x35","\xe1","\xea"),
	HX_HCSTRING("lime_gl_clear","\x5d","\x92","\x00","\x3b"),
	HX_HCSTRING("lime_gl_clear_color","\xc1","\xee","\x49","\x1a"),
	HX_HCSTRING("lime_gl_clear_depth","\x61","\x6e","\x17","\xa7"),
	HX_HCSTRING("lime_gl_clear_stencil","\xda","\xce","\x51","\x44"),
	HX_HCSTRING("lime_gl_color_mask","\xb8","\xf1","\xa7","\x79"),
	HX_HCSTRING("lime_gl_compile_shader","\xe1","\xd4","\x68","\x7c"),
	HX_HCSTRING("lime_gl_compressed_tex_image_2d","\xbc","\x70","\xb8","\x76"),
	HX_HCSTRING("lime_gl_compressed_tex_sub_image_2d","\x9b","\x19","\x2d","\x07"),
	HX_HCSTRING("lime_gl_copy_tex_image_2d","\x08","\x15","\x17","\x3a"),
	HX_HCSTRING("lime_gl_copy_tex_sub_image_2d","\xe7","\xd3","\x21","\x4b"),
	HX_HCSTRING("lime_gl_create_buffer","\xf3","\xef","\xe7","\x8a"),
	HX_HCSTRING("lime_gl_create_framebuffer","\x1a","\x51","\xd8","\x73"),
	HX_HCSTRING("lime_gl_create_program","\x31","\xac","\x72","\x42"),
	HX_HCSTRING("lime_gl_create_render_buffer","\x76","\x7b","\xe1","\x18"),
	HX_HCSTRING("lime_gl_create_shader","\x18","\xf2","\x73","\xd7"),
	HX_HCSTRING("lime_gl_create_texture","\x88","\x2a","\x5a","\xed"),
	HX_HCSTRING("lime_gl_cull_face","\x5a","\x6e","\xd7","\xa6"),
	HX_HCSTRING("lime_gl_delete_buffer","\xa4","\xaa","\x2e","\x01"),
	HX_HCSTRING("lime_gl_delete_framebuffer","\xc9","\x34","\x1a","\xa6"),
	HX_HCSTRING("lime_gl_delete_program","\x60","\x4c","\x0f","\x4a"),
	HX_HCSTRING("lime_gl_delete_render_buffer","\xe5","\xe8","\x26","\xca"),
	HX_HCSTRING("lime_gl_delete_shader","\xc9","\xac","\xba","\x4d"),
	HX_HCSTRING("lime_gl_delete_texture","\xb7","\xca","\xf6","\xf4"),
	HX_HCSTRING("lime_gl_depth_func","\x70","\x78","\x16","\xad"),
	HX_HCSTRING("lime_gl_depth_mask","\x18","\xce","\xa7","\xb1"),
	HX_HCSTRING("lime_gl_depth_range","\x11","\x9f","\x29","\xa2"),
	HX_HCSTRING("lime_gl_detach_shader","\xa1","\x84","\x13","\xfd"),
	HX_HCSTRING("lime_gl_disable","\xb8","\x5e","\x23","\x70"),
	HX_HCSTRING("lime_gl_disable_vertex_attrib_array","\x58","\xba","\x8e","\x0a"),
	HX_HCSTRING("lime_gl_draw_arrays","\xa5","\x43","\x0c","\x17"),
	HX_HCSTRING("lime_gl_draw_elements","\xe2","\xd1","\x98","\xb9"),
	HX_HCSTRING("lime_gl_enable","\xb3","\x43","\x5f","\x56"),
	HX_HCSTRING("lime_gl_enable_vertex_attrib_array","\xd3","\x1e","\xa2","\xea"),
	HX_HCSTRING("lime_gl_finish","\x83","\xd5","\x56","\xe4"),
	HX_HCSTRING("lime_gl_flush","\x94","\x83","\x40","\xf5"),
	HX_HCSTRING("lime_gl_framebuffer_renderbuffer","\xd8","\x1b","\x4b","\x9a"),
	HX_HCSTRING("lime_gl_framebuffer_texture2D","\x2b","\xbd","\x7d","\x0a"),
	HX_HCSTRING("lime_gl_front_face","\x63","\xa0","\x73","\x7d"),
	HX_HCSTRING("lime_gl_generate_mipmap","\x62","\xa5","\x38","\xe6"),
	HX_HCSTRING("lime_gl_get_active_attrib","\x0a","\x40","\xb7","\xd1"),
	HX_HCSTRING("lime_gl_get_active_uniform","\x74","\x90","\xd7","\x2a"),
	HX_HCSTRING("lime_gl_get_attrib_location","\xf1","\x00","\xcb","\xa5"),
	HX_HCSTRING("lime_gl_get_buffer_paramerter","\xad","\x9b","\x49","\xb2"),
	HX_HCSTRING("lime_gl_get_context_attributes","\xe0","\xc6","\xc6","\x3e"),
	HX_HCSTRING("lime_gl_get_error","\xef","\xf0","\xe0","\xf5"),
	HX_HCSTRING("lime_gl_get_framebuffer_attachment_parameter","\x18","\x53","\xfb","\x61"),
	HX_HCSTRING("lime_gl_get_parameter","\x50","\x7a","\xfe","\x3a"),
	HX_HCSTRING("lime_gl_get_program_info_log","\x87","\x8b","\x1c","\x48"),
	HX_HCSTRING("lime_gl_get_program_parameter","\x95","\x8c","\xe9","\x12"),
	HX_HCSTRING("lime_gl_get_render_buffer_parameter","\x9a","\x8b","\x13","\xf8"),
	HX_HCSTRING("lime_gl_get_shader_info_log","\x74","\x08","\x6b","\x9a"),
	HX_HCSTRING("lime_gl_get_shader_parameter","\x08","\x5f","\x48","\xc5"),
	HX_HCSTRING("lime_gl_get_shader_precision_format","\xd9","\x5f","\xb1","\x89"),
	HX_HCSTRING("lime_gl_get_shader_source","\x1c","\x86","\xa3","\xe7"),
	HX_HCSTRING("lime_gl_get_supported_extensions","\x7e","\xb4","\x30","\x92"),
	HX_HCSTRING("lime_gl_get_tex_parameter","\x38","\x3a","\xff","\x30"),
	HX_HCSTRING("lime_gl_get_uniform","\x1b","\x3e","\x0c","\xb0"),
	HX_HCSTRING("lime_gl_get_uniform_location","\x19","\x0c","\x33","\x6c"),
	HX_HCSTRING("lime_gl_get_vertex_attrib","\x2c","\x36","\x2d","\x8c"),
	HX_HCSTRING("lime_gl_get_vertex_attrib_offset","\x86","\xd0","\xe7","\x4a"),
	HX_HCSTRING("lime_gl_hint","\xb7","\x26","\x75","\xcc"),
	HX_HCSTRING("lime_gl_is_buffer","\xc5","\xec","\xc6","\xb4"),
	HX_HCSTRING("lime_gl_is_enabled","\x1c","\xa1","\xe8","\x45"),
	HX_HCSTRING("lime_gl_is_framebuffer","\x08","\x9b","\x19","\xab"),
	HX_HCSTRING("lime_gl_is_program","\x1f","\xe7","\xb0","\xbb"),
	HX_HCSTRING("lime_gl_is_renderbuffer","\x5b","\x1e","\xda","\x91"),
	HX_HCSTRING("lime_gl_is_shader","\xea","\xee","\x52","\x01"),
	HX_HCSTRING("lime_gl_is_texture","\x76","\x65","\x98","\x66"),
	HX_HCSTRING("lime_gl_line_width","\x6b","\x71","\x5f","\x53"),
	HX_HCSTRING("lime_gl_link_program","\x2f","\xdf","\xcf","\x33"),
	HX_HCSTRING("lime_gl_pixel_storei","\x71","\xb2","\x56","\x3d"),
	HX_HCSTRING("lime_gl_polygon_offset","\x28","\x8f","\x6c","\xe3"),
	HX_HCSTRING("lime_gl_read_pixels","\x06","\x09","\x69","\xf5"),
	HX_HCSTRING("lime_gl_renderbuffer_storage","\xc2","\x94","\xf1","\x7b"),
	HX_HCSTRING("lime_gl_sample_coverage","\xad","\x98","\xc5","\x86"),
	HX_HCSTRING("lime_gl_scissor","\xec","\x1c","\xb2","\xc3"),
	HX_HCSTRING("lime_gl_shader_source","\xc5","\xd2","\xe2","\x7f"),
	HX_HCSTRING("lime_gl_stencil_func","\xd7","\xb0","\x4f","\x64"),
	HX_HCSTRING("lime_gl_stencil_func_separate","\x0b","\x13","\x77","\x19"),
	HX_HCSTRING("lime_gl_stencil_mask","\x7f","\x06","\xe1","\x68"),
	HX_HCSTRING("lime_gl_stencil_mask_separate","\x63","\xc8","\x71","\x65"),
	HX_HCSTRING("lime_gl_stencil_op","\xf4","\x8b","\x0c","\xa5"),
	HX_HCSTRING("lime_gl_stencil_op_separate","\x4e","\x6c","\x36","\x5e"),
	HX_HCSTRING("lime_gl_tex_image_2d","\x5e","\xab","\x7a","\x34"),
	HX_HCSTRING("lime_gl_tex_parameterf","\x65","\x7e","\x77","\x4d"),
	HX_HCSTRING("lime_gl_tex_parameteri","\x68","\x7e","\x77","\x4d"),
	HX_HCSTRING("lime_gl_tex_sub_image_2d","\x3d","\x4d","\x7e","\x52"),
	HX_HCSTRING("lime_gl_uniform1f","\x19","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform1fv","\x3d","\xec","\x80","\xc7"),
	HX_HCSTRING("lime_gl_uniform1i","\x1c","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform1iv","\xda","\xee","\x80","\xc7"),
	HX_HCSTRING("lime_gl_uniform2f","\xf8","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform2fv","\x7e","\xae","\x81","\xc7"),
	HX_HCSTRING("lime_gl_uniform2i","\xfb","\xea","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform2iv","\x1b","\xb1","\x81","\xc7"),
	HX_HCSTRING("lime_gl_uniform3f","\xd7","\xeb","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform3fv","\xbf","\x70","\x82","\xc7"),
	HX_HCSTRING("lime_gl_uniform3i","\xda","\xeb","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform3iv","\x5c","\x73","\x82","\xc7"),
	HX_HCSTRING("lime_gl_uniform4f","\xb6","\xec","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform4fv","\x00","\x33","\x83","\xc7"),
	HX_HCSTRING("lime_gl_uniform4i","\xb9","\xec","\xeb","\x46"),
	HX_HCSTRING("lime_gl_uniform4iv","\x9d","\x35","\x83","\xc7"),
	HX_HCSTRING("lime_gl_uniform_matrix","\x5c","\x9a","\xcc","\xb2"),
	HX_HCSTRING("lime_gl_use_program","\x1c","\x8c","\xb8","\x22"),
	HX_HCSTRING("lime_gl_validate_program","\xcb","\xeb","\x10","\x5b"),
	HX_HCSTRING("lime_gl_version","\xe8","\xdb","\xbc","\x3b"),
	HX_HCSTRING("lime_gl_vertex_attrib1f","\x2a","\xcd","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib1fv","\x0c","\xb8","\xc0","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib2f","\x09","\xce","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib2fv","\x4d","\x7a","\xc1","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib3f","\xe8","\xce","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib3fv","\x8e","\x3c","\xc2","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib4f","\xc7","\xcf","\xb2","\x7a"),
	HX_HCSTRING("lime_gl_vertex_attrib4fv","\xcf","\xfe","\xc2","\xe1"),
	HX_HCSTRING("lime_gl_vertex_attrib_pointer","\x13","\xfa","\x74","\x15"),
	HX_HCSTRING("lime_gl_viewport","\x96","\x8d","\x70","\xcf"),
	::String(null()) };

void GL_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.gl.GL","\x6a","\x6e","\xc8","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GL_obj::__GetStatic;
	__mClass->mSetStaticField = &GL_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GL_obj >;
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

void GL_obj::__boot()
{
	DEPTH_BUFFER_BIT= (int)256;
	STENCIL_BUFFER_BIT= (int)1024;
	COLOR_BUFFER_BIT= (int)16384;
	POINTS= (int)0;
	LINES= (int)1;
	LINE_LOOP= (int)2;
	LINE_STRIP= (int)3;
	TRIANGLES= (int)4;
	TRIANGLE_STRIP= (int)5;
	TRIANGLE_FAN= (int)6;
	ZERO= (int)0;
	ONE= (int)1;
	SRC_COLOR= (int)768;
	ONE_MINUS_SRC_COLOR= (int)769;
	SRC_ALPHA= (int)770;
	ONE_MINUS_SRC_ALPHA= (int)771;
	DST_ALPHA= (int)772;
	ONE_MINUS_DST_ALPHA= (int)773;
	DST_COLOR= (int)774;
	ONE_MINUS_DST_COLOR= (int)775;
	SRC_ALPHA_SATURATE= (int)776;
	FUNC_ADD= (int)32774;
	BLEND_EQUATION= (int)32777;
	BLEND_EQUATION_RGB= (int)32777;
	BLEND_EQUATION_ALPHA= (int)34877;
	FUNC_SUBTRACT= (int)32778;
	FUNC_REVERSE_SUBTRACT= (int)32779;
	BLEND_DST_RGB= (int)32968;
	BLEND_SRC_RGB= (int)32969;
	BLEND_DST_ALPHA= (int)32970;
	BLEND_SRC_ALPHA= (int)32971;
	CONSTANT_COLOR= (int)32769;
	ONE_MINUS_CONSTANT_COLOR= (int)32770;
	CONSTANT_ALPHA= (int)32771;
	ONE_MINUS_CONSTANT_ALPHA= (int)32772;
	BLEND_COLOR= (int)32773;
	ARRAY_BUFFER= (int)34962;
	ELEMENT_ARRAY_BUFFER= (int)34963;
	ARRAY_BUFFER_BINDING= (int)34964;
	ELEMENT_ARRAY_BUFFER_BINDING= (int)34965;
	STREAM_DRAW= (int)35040;
	STATIC_DRAW= (int)35044;
	DYNAMIC_DRAW= (int)35048;
	BUFFER_SIZE= (int)34660;
	BUFFER_USAGE= (int)34661;
	CURRENT_VERTEX_ATTRIB= (int)34342;
	FRONT= (int)1028;
	BACK= (int)1029;
	FRONT_AND_BACK= (int)1032;
	CULL_FACE= (int)2884;
	BLEND= (int)3042;
	DITHER= (int)3024;
	STENCIL_TEST= (int)2960;
	DEPTH_TEST= (int)2929;
	SCISSOR_TEST= (int)3089;
	POLYGON_OFFSET_FILL= (int)32823;
	SAMPLE_ALPHA_TO_COVERAGE= (int)32926;
	SAMPLE_COVERAGE= (int)32928;
	NO_ERROR= (int)0;
	INVALID_ENUM= (int)1280;
	INVALID_VALUE= (int)1281;
	INVALID_OPERATION= (int)1282;
	OUT_OF_MEMORY= (int)1285;
	CW= (int)2304;
	CCW= (int)2305;
	LINE_WIDTH= (int)2849;
	ALIASED_POINT_SIZE_RANGE= (int)33901;
	ALIASED_LINE_WIDTH_RANGE= (int)33902;
	CULL_FACE_MODE= (int)2885;
	FRONT_FACE= (int)2886;
	DEPTH_RANGE= (int)2928;
	DEPTH_WRITEMASK= (int)2930;
	DEPTH_CLEAR_VALUE= (int)2931;
	DEPTH_FUNC= (int)2932;
	STENCIL_CLEAR_VALUE= (int)2961;
	STENCIL_FUNC= (int)2962;
	STENCIL_FAIL= (int)2964;
	STENCIL_PASS_DEPTH_FAIL= (int)2965;
	STENCIL_PASS_DEPTH_PASS= (int)2966;
	STENCIL_REF= (int)2967;
	STENCIL_VALUE_MASK= (int)2963;
	STENCIL_WRITEMASK= (int)2968;
	STENCIL_BACK_FUNC= (int)34816;
	STENCIL_BACK_FAIL= (int)34817;
	STENCIL_BACK_PASS_DEPTH_FAIL= (int)34818;
	STENCIL_BACK_PASS_DEPTH_PASS= (int)34819;
	STENCIL_BACK_REF= (int)36003;
	STENCIL_BACK_VALUE_MASK= (int)36004;
	STENCIL_BACK_WRITEMASK= (int)36005;
	VIEWPORT= (int)2978;
	SCISSOR_BOX= (int)3088;
	COLOR_CLEAR_VALUE= (int)3106;
	COLOR_WRITEMASK= (int)3107;
	UNPACK_ALIGNMENT= (int)3317;
	PACK_ALIGNMENT= (int)3333;
	MAX_TEXTURE_SIZE= (int)3379;
	MAX_VIEWPORT_DIMS= (int)3386;
	SUBPIXEL_BITS= (int)3408;
	RED_BITS= (int)3410;
	GREEN_BITS= (int)3411;
	BLUE_BITS= (int)3412;
	ALPHA_BITS= (int)3413;
	DEPTH_BITS= (int)3414;
	STENCIL_BITS= (int)3415;
	POLYGON_OFFSET_UNITS= (int)10752;
	POLYGON_OFFSET_FACTOR= (int)32824;
	TEXTURE_BINDING_2D= (int)32873;
	SAMPLE_BUFFERS= (int)32936;
	SAMPLES= (int)32937;
	SAMPLE_COVERAGE_VALUE= (int)32938;
	SAMPLE_COVERAGE_INVERT= (int)32939;
	COMPRESSED_TEXTURE_FORMATS= (int)34467;
	DONT_CARE= (int)4352;
	FASTEST= (int)4353;
	NICEST= (int)4354;
	GENERATE_MIPMAP_HINT= (int)33170;
	BYTE= (int)5120;
	UNSIGNED_BYTE= (int)5121;
	SHORT= (int)5122;
	UNSIGNED_SHORT= (int)5123;
	INT= (int)5124;
	UNSIGNED_INT= (int)5125;
	FLOAT= (int)5126;
	DEPTH_COMPONENT= (int)6402;
	ALPHA= (int)6406;
	RGB= (int)6407;
	RGBA= (int)6408;
	LUMINANCE= (int)6409;
	LUMINANCE_ALPHA= (int)6410;
	UNSIGNED_SHORT_4_4_4_4= (int)32819;
	UNSIGNED_SHORT_5_5_5_1= (int)32820;
	UNSIGNED_SHORT_5_6_5= (int)33635;
	FRAGMENT_SHADER= (int)35632;
	VERTEX_SHADER= (int)35633;
	MAX_VERTEX_ATTRIBS= (int)34921;
	MAX_VERTEX_UNIFORM_VECTORS= (int)36347;
	MAX_VARYING_VECTORS= (int)36348;
	MAX_COMBINED_TEXTURE_IMAGE_UNITS= (int)35661;
	MAX_VERTEX_TEXTURE_IMAGE_UNITS= (int)35660;
	MAX_TEXTURE_IMAGE_UNITS= (int)34930;
	MAX_FRAGMENT_UNIFORM_VECTORS= (int)36349;
	SHADER_TYPE= (int)35663;
	DELETE_STATUS= (int)35712;
	LINK_STATUS= (int)35714;
	VALIDATE_STATUS= (int)35715;
	ATTACHED_SHADERS= (int)35717;
	ACTIVE_UNIFORMS= (int)35718;
	ACTIVE_ATTRIBUTES= (int)35721;
	SHADING_LANGUAGE_VERSION= (int)35724;
	CURRENT_PROGRAM= (int)35725;
	NEVER= (int)512;
	LESS= (int)513;
	EQUAL= (int)514;
	LEQUAL= (int)515;
	GREATER= (int)516;
	NOTEQUAL= (int)517;
	GEQUAL= (int)518;
	ALWAYS= (int)519;
	KEEP= (int)7680;
	REPLACE= (int)7681;
	INCR= (int)7682;
	DECR= (int)7683;
	INVERT= (int)5386;
	INCR_WRAP= (int)34055;
	DECR_WRAP= (int)34056;
	VENDOR= (int)7936;
	RENDERER= (int)7937;
	VERSION= (int)7938;
	NEAREST= (int)9728;
	LINEAR= (int)9729;
	NEAREST_MIPMAP_NEAREST= (int)9984;
	LINEAR_MIPMAP_NEAREST= (int)9985;
	NEAREST_MIPMAP_LINEAR= (int)9986;
	LINEAR_MIPMAP_LINEAR= (int)9987;
	TEXTURE_MAG_FILTER= (int)10240;
	TEXTURE_MIN_FILTER= (int)10241;
	TEXTURE_WRAP_S= (int)10242;
	TEXTURE_WRAP_T= (int)10243;
	TEXTURE_2D= (int)3553;
	TEXTURE= (int)5890;
	TEXTURE_CUBE_MAP= (int)34067;
	TEXTURE_BINDING_CUBE_MAP= (int)34068;
	TEXTURE_CUBE_MAP_POSITIVE_X= (int)34069;
	TEXTURE_CUBE_MAP_NEGATIVE_X= (int)34070;
	TEXTURE_CUBE_MAP_POSITIVE_Y= (int)34071;
	TEXTURE_CUBE_MAP_NEGATIVE_Y= (int)34072;
	TEXTURE_CUBE_MAP_POSITIVE_Z= (int)34073;
	TEXTURE_CUBE_MAP_NEGATIVE_Z= (int)34074;
	MAX_CUBE_MAP_TEXTURE_SIZE= (int)34076;
	TEXTURE0= (int)33984;
	TEXTURE1= (int)33985;
	TEXTURE2= (int)33986;
	TEXTURE3= (int)33987;
	TEXTURE4= (int)33988;
	TEXTURE5= (int)33989;
	TEXTURE6= (int)33990;
	TEXTURE7= (int)33991;
	TEXTURE8= (int)33992;
	TEXTURE9= (int)33993;
	TEXTURE10= (int)33994;
	TEXTURE11= (int)33995;
	TEXTURE12= (int)33996;
	TEXTURE13= (int)33997;
	TEXTURE14= (int)33998;
	TEXTURE15= (int)33999;
	TEXTURE16= (int)34000;
	TEXTURE17= (int)34001;
	TEXTURE18= (int)34002;
	TEXTURE19= (int)34003;
	TEXTURE20= (int)34004;
	TEXTURE21= (int)34005;
	TEXTURE22= (int)34006;
	TEXTURE23= (int)34007;
	TEXTURE24= (int)34008;
	TEXTURE25= (int)34009;
	TEXTURE26= (int)34010;
	TEXTURE27= (int)34011;
	TEXTURE28= (int)34012;
	TEXTURE29= (int)34013;
	TEXTURE30= (int)34014;
	TEXTURE31= (int)34015;
	ACTIVE_TEXTURE= (int)34016;
	REPEAT= (int)10497;
	CLAMP_TO_EDGE= (int)33071;
	MIRRORED_REPEAT= (int)33648;
	FLOAT_VEC2= (int)35664;
	FLOAT_VEC3= (int)35665;
	FLOAT_VEC4= (int)35666;
	INT_VEC2= (int)35667;
	INT_VEC3= (int)35668;
	INT_VEC4= (int)35669;
	BOOL= (int)35670;
	BOOL_VEC2= (int)35671;
	BOOL_VEC3= (int)35672;
	BOOL_VEC4= (int)35673;
	FLOAT_MAT2= (int)35674;
	FLOAT_MAT3= (int)35675;
	FLOAT_MAT4= (int)35676;
	SAMPLER_2D= (int)35678;
	SAMPLER_CUBE= (int)35680;
	VERTEX_ATTRIB_ARRAY_ENABLED= (int)34338;
	VERTEX_ATTRIB_ARRAY_SIZE= (int)34339;
	VERTEX_ATTRIB_ARRAY_STRIDE= (int)34340;
	VERTEX_ATTRIB_ARRAY_TYPE= (int)34341;
	VERTEX_ATTRIB_ARRAY_NORMALIZED= (int)34922;
	VERTEX_ATTRIB_ARRAY_POINTER= (int)34373;
	VERTEX_ATTRIB_ARRAY_BUFFER_BINDING= (int)34975;
	VERTEX_PROGRAM_POINT_SIZE= (int)34370;
	POINT_SPRITE= (int)34913;
	COMPILE_STATUS= (int)35713;
	LOW_FLOAT= (int)36336;
	MEDIUM_FLOAT= (int)36337;
	HIGH_FLOAT= (int)36338;
	LOW_INT= (int)36339;
	MEDIUM_INT= (int)36340;
	HIGH_INT= (int)36341;
	FRAMEBUFFER= (int)36160;
	RENDERBUFFER= (int)36161;
	RGBA4= (int)32854;
	RGB5_A1= (int)32855;
	RGB565= (int)36194;
	DEPTH_COMPONENT16= (int)33189;
	STENCIL_INDEX= (int)6401;
	STENCIL_INDEX8= (int)36168;
	DEPTH_STENCIL= (int)34041;
	RENDERBUFFER_WIDTH= (int)36162;
	RENDERBUFFER_HEIGHT= (int)36163;
	RENDERBUFFER_INTERNAL_FORMAT= (int)36164;
	RENDERBUFFER_RED_SIZE= (int)36176;
	RENDERBUFFER_GREEN_SIZE= (int)36177;
	RENDERBUFFER_BLUE_SIZE= (int)36178;
	RENDERBUFFER_ALPHA_SIZE= (int)36179;
	RENDERBUFFER_DEPTH_SIZE= (int)36180;
	RENDERBUFFER_STENCIL_SIZE= (int)36181;
	FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE= (int)36048;
	FRAMEBUFFER_ATTACHMENT_OBJECT_NAME= (int)36049;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL= (int)36050;
	FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE= (int)36051;
	COLOR_ATTACHMENT0= (int)36064;
	DEPTH_ATTACHMENT= (int)36096;
	STENCIL_ATTACHMENT= (int)36128;
	DEPTH_STENCIL_ATTACHMENT= (int)33306;
	NONE= (int)0;
	FRAMEBUFFER_COMPLETE= (int)36053;
	FRAMEBUFFER_INCOMPLETE_ATTACHMENT= (int)36054;
	FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT= (int)36055;
	FRAMEBUFFER_INCOMPLETE_DIMENSIONS= (int)36057;
	FRAMEBUFFER_UNSUPPORTED= (int)36061;
	FRAMEBUFFER_BINDING= (int)36006;
	RENDERBUFFER_BINDING= (int)36007;
	MAX_RENDERBUFFER_SIZE= (int)34024;
	INVALID_FRAMEBUFFER_OPERATION= (int)1286;
	UNPACK_FLIP_Y_WEBGL= (int)37440;
	UNPACK_PREMULTIPLY_ALPHA_WEBGL= (int)37441;
	CONTEXT_LOST_WEBGL= (int)37442;
	UNPACK_COLORSPACE_CONVERSION_WEBGL= (int)37443;
	BROWSER_DEFAULT_WEBGL= (int)37444;
	lime_gl_active_texture= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_active_texture","\x30","\x69","\x6b","\xe5"),(int)1);
	lime_gl_attach_shader= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_attach_shader","\x51","\x54","\x56","\xf7"),(int)2);
	lime_gl_bind_attrib_location= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_bind_attrib_location","\xd6","\x14","\x81","\xd0"),(int)3);
	lime_gl_bind_bitmap_data_texture= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_bind_bitmap_data_texture","\xe2","\x51","\x55","\x07"),(int)1);
	lime_gl_bind_buffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_bind_buffer","\xb4","\x16","\xee","\x55"),(int)2);
	lime_gl_bind_framebuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_bind_framebuffer","\xb9","\x0e","\xa9","\xad"),(int)2);
	lime_gl_bind_renderbuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_bind_renderbuffer","\x8a","\xe5","\xcf","\xcc"),(int)2);
	lime_gl_bind_texture= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_bind_texture","\xa7","\xec","\xb5","\xc7"),(int)2);
	lime_gl_blend_color= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_blend_color","\xe7","\x8f","\xe3","\xad"),(int)4);
	lime_gl_blend_equation= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_blend_equation","\x88","\x87","\xfc","\x50"),(int)1);
	lime_gl_blend_equation_separate= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_blend_equation_separate","\x3a","\x5e","\xfc","\x6a"),(int)2);
	lime_gl_blend_func= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_blend_func","\x40","\x09","\xf8","\xec"),(int)2);
	lime_gl_blend_func_separate= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_blend_func_separate","\x82","\xe5","\x8e","\xb3"),(int)4);
	lime_gl_buffer_data= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_buffer_data","\x3b","\xf1","\x54","\xe7"),(int)5);
	lime_gl_buffer_sub_data= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_buffer_sub_data","\x1a","\x50","\x91","\x2e"),(int)5);
	lime_gl_check_framebuffer_status= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_check_framebuffer_status","\x69","\x00","\xdb","\xf2"),(int)1);
	lime_gl_clear= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_clear","\x3f","\xbc","\x5d","\x24"),(int)1);
	lime_gl_clear_color= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_clear_color","\x23","\xae","\x5e","\x8d"),(int)4);
	lime_gl_clear_depth= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_clear_depth","\xc3","\x2d","\x2c","\x1a"),(int)1);
	lime_gl_clear_stencil= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_clear_stencil","\xbc","\xaa","\x9e","\x35"),(int)1);
	lime_gl_color_mask= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_color_mask","\x96","\xb4","\x9d","\x7d"),(int)4);
	lime_gl_compile_shader= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_compile_shader","\xbf","\x5e","\x5c","\xae"),(int)1);
	lime_gl_compressed_tex_image_2d= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_compressed_tex_image_2d","\x1e","\xbb","\x1f","\x89"),(int)-1);
	lime_gl_compressed_tex_sub_image_2d= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_compressed_tex_sub_image_2d","\xfd","\x3c","\x46","\xed"),(int)-1);
	lime_gl_copy_tex_image_2d= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_copy_tex_image_2d","\xea","\x89","\xfc","\xa2"),(int)-1);
	lime_gl_copy_tex_sub_image_2d= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_copy_tex_sub_image_2d","\xc9","\x61","\x60","\x26"),(int)-1);
	lime_gl_create_buffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_create_buffer","\xd5","\xcb","\x34","\x7c"),(int)0);
	lime_gl_create_framebuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_create_framebuffer","\xf8","\x21","\xb9","\xd3"),(int)0);
	lime_gl_create_program= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_create_program","\x0f","\x36","\x66","\x74"),(int)0);
	lime_gl_create_render_buffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_create_render_buffer","\xd4","\xbf","\x3e","\xcf"),(int)0);
	lime_gl_create_shader= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_create_shader","\xfa","\xcd","\xc0","\xc8"),(int)1);
	lime_gl_create_texture= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_create_texture","\x66","\xb4","\x4d","\x1f"),(int)0);
	lime_gl_cull_face= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_cull_face","\x3c","\x31","\x0c","\x91"),(int)1);
	lime_gl_delete_buffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_delete_buffer","\x86","\x86","\x7b","\xf2"),(int)1);
	lime_gl_delete_framebuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_delete_framebuffer","\xa7","\x05","\xfb","\x05"),(int)1);
	lime_gl_delete_program= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_delete_program","\x3e","\xd6","\x02","\x7c"),(int)1);
	lime_gl_delete_render_buffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_delete_render_buffer","\x43","\x2d","\x84","\x80"),(int)1);
	lime_gl_delete_shader= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_delete_shader","\xab","\x88","\x07","\x3f"),(int)1);
	lime_gl_delete_texture= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_delete_texture","\x95","\x54","\xea","\x26"),(int)1);
	lime_gl_depth_func= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_depth_func","\x4e","\x3b","\x0c","\xb1"),(int)1);
	lime_gl_depth_mask= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_depth_mask","\xf6","\x90","\x9d","\xb5"),(int)1);
	lime_gl_depth_range= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_depth_range","\x73","\x5e","\x3e","\x15"),(int)2);
	lime_gl_detach_shader= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_detach_shader","\x83","\x60","\x60","\xee"),(int)2);
	lime_gl_disable= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_disable","\x1a","\x45","\x88","\x4a"),(int)1);
	lime_gl_disable_vertex_attrib_array= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_disable_vertex_attrib_array","\xba","\xdd","\xa7","\xf0"),(int)1);
	lime_gl_draw_arrays= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_draw_arrays","\x07","\x03","\x21","\x8a"),(int)3);
	lime_gl_draw_elements= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_draw_elements","\xc4","\xad","\xe5","\xaa"),(int)4);
	lime_gl_enable= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_enable","\x91","\xbf","\x86","\x9e"),(int)1);
	lime_gl_enable_vertex_attrib_array= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_enable_vertex_attrib_array","\xb1","\xfd","\x2b","\x3d"),(int)1);
	lime_gl_finish= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_finish","\x61","\x51","\x7e","\x2c"),(int)0);
	lime_gl_flush= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_flush","\x76","\xad","\x9d","\xde"),(int)0);
	lime_gl_framebuffer_renderbuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_framebuffer_renderbuffer","\x36","\xe7","\x44","\xa2"),(int)4);
	lime_gl_framebuffer_texture2D= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_framebuffer_texture2D","\x0d","\x4b","\xbc","\xe5"),(int)5);
	lime_gl_front_face= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_front_face","\x41","\x63","\x69","\x81"),(int)1);
	lime_gl_generate_mipmap= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_generate_mipmap","\xc4","\xbd","\x5d","\x69"),(int)1);
	lime_gl_get_active_attrib= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_active_attrib","\xec","\xb4","\x9c","\x3a"),(int)2);
	lime_gl_get_active_uniform= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_active_uniform","\x52","\x61","\xb8","\x8a"),(int)2);
	lime_gl_get_attrib_location= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_attrib_location","\x53","\xf2","\xa0","\x2a"),(int)2);
	lime_gl_get_buffer_paramerter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_buffer_paramerter","\x8f","\x29","\x88","\x8d"),(int)2);
	lime_gl_get_context_attributes= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_context_attributes","\xbe","\x5e","\x44","\x3a"),(int)0);
	lime_gl_get_error= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_error","\xd1","\xb3","\x15","\xe0"),(int)0);
	lime_gl_get_framebuffer_attachment_parameter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_framebuffer_attachment_parameter","\x76","\xb3","\xa7","\x3b"),(int)3);
	lime_gl_get_parameter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_parameter","\x32","\x56","\x4b","\x2c"),(int)1);
	lime_gl_get_program_info_log= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_program_info_log","\xe5","\xcf","\x79","\xfe"),(int)1);
	lime_gl_get_program_parameter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_program_parameter","\x77","\x1a","\x28","\xee"),(int)2);
	lime_gl_get_render_buffer_parameter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_render_buffer_parameter","\xfc","\xae","\x2c","\xde"),(int)2);
	lime_gl_get_shader_info_log= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_shader_info_log","\xd6","\xf9","\x40","\x1f"),(int)1);
	lime_gl_get_shader_parameter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_shader_parameter","\x66","\xa3","\xa5","\x7b"),(int)2);
	lime_gl_get_shader_precision_format= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_shader_precision_format","\x3b","\x83","\xca","\x6f"),(int)2);
	lime_gl_get_shader_source= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_shader_source","\xfe","\xfa","\x88","\x50"),(int)1);
	lime_gl_get_supported_extensions= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_supported_extensions","\xdc","\x7f","\x2a","\x9a"),(int)1);
	lime_gl_get_tex_parameter= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_tex_parameter","\x1a","\xaf","\xe4","\x99"),(int)2);
	lime_gl_get_uniform= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_uniform","\x7d","\xfd","\x20","\x23"),(int)2);
	lime_gl_get_uniform_location= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_uniform_location","\x77","\x50","\x90","\x22"),(int)2);
	lime_gl_get_vertex_attrib= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_vertex_attrib","\x0e","\xab","\x12","\xf5"),(int)2);
	lime_gl_get_vertex_attrib_offset= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_get_vertex_attrib_offset","\xe4","\x9b","\xe1","\x52"),(int)2);
	lime_gl_hint= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_hint","\x15","\x4f","\x7b","\x68"),(int)2);
	lime_gl_is_buffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_buffer","\xa7","\xaf","\xfb","\x9e"),(int)1);
	lime_gl_is_enabled= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_enabled","\xfa","\x63","\xde","\x49"),(int)1);
	lime_gl_is_framebuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_framebuffer","\xe6","\x24","\x0d","\xdd"),(int)1);
	lime_gl_is_program= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_program","\xfd","\xa9","\xa6","\xbf"),(int)1);
	lime_gl_is_renderbuffer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_renderbuffer","\xbd","\x36","\xff","\x14"),(int)1);
	lime_gl_is_shader= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_shader","\xcc","\xb1","\x87","\xeb"),(int)1);
	lime_gl_is_texture= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_is_texture","\x54","\x28","\x8e","\x6a"),(int)1);
	lime_gl_line_width= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_line_width","\x49","\x34","\x55","\x57"),(int)1);
	lime_gl_link_program= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_link_program","\x8d","\x95","\xe2","\x72"),(int)1);
	lime_gl_pixel_storei= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_pixel_storei","\xcf","\x68","\x69","\x7c"),(int)2);
	lime_gl_polygon_offset= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_polygon_offset","\x06","\x19","\x60","\x15"),(int)2);
	lime_gl_read_pixels= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_read_pixels","\x68","\xc8","\x7d","\x68"),(int)-1);
	lime_gl_renderbuffer_storage= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_renderbuffer_storage","\x20","\xd9","\x4e","\x32"),(int)4);
	lime_gl_sample_coverage= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_sample_coverage","\x0f","\xb1","\xea","\x09"),(int)2);
	lime_gl_scissor= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_scissor","\x4e","\x03","\x17","\x9e"),(int)4);
	lime_gl_shader_source= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_shader_source","\xa7","\xae","\x2f","\x71"),(int)2);
	lime_gl_stencil_func= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_stencil_func","\x35","\x67","\x62","\xa3"),(int)3);
	lime_gl_stencil_func_separate= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_stencil_func_separate","\xed","\xa0","\xb5","\xf4"),(int)4);
	lime_gl_stencil_mask= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_stencil_mask","\xdd","\xbc","\xf3","\xa7"),(int)1);
	lime_gl_stencil_mask_separate= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_stencil_mask_separate","\x45","\x56","\xb0","\x40"),(int)2);
	lime_gl_stencil_op= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_stencil_op","\xd2","\x4e","\x02","\xa9"),(int)3);
	lime_gl_stencil_op_separate= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_stencil_op_separate","\xb0","\x5d","\x0c","\xe3"),(int)4);
	lime_gl_tex_image_2d= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_tex_image_2d","\xbc","\x61","\x8d","\x73"),(int)-1);
	lime_gl_tex_parameterf= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_tex_parameterf","\x43","\x08","\x6b","\x7f"),(int)3);
	lime_gl_tex_parameteri= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_tex_parameteri","\x46","\x08","\x6b","\x7f"),(int)3);
	lime_gl_tex_sub_image_2d= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_tex_sub_image_2d","\x9b","\x8a","\xce","\x8f"),(int)-1);
	lime_gl_uniform1f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform1f","\xfb","\xac","\x20","\x31"),(int)2);
	lime_gl_uniform1fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform1fv","\x1b","\xaf","\x76","\xcb"),(int)2);
	lime_gl_uniform1i= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform1i","\xfe","\xac","\x20","\x31"),(int)2);
	lime_gl_uniform1iv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform1iv","\xb8","\xb1","\x76","\xcb"),(int)2);
	lime_gl_uniform2f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform2f","\xda","\xad","\x20","\x31"),(int)3);
	lime_gl_uniform2fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform2fv","\x5c","\x71","\x77","\xcb"),(int)2);
	lime_gl_uniform2i= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform2i","\xdd","\xad","\x20","\x31"),(int)3);
	lime_gl_uniform2iv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform2iv","\xf9","\x73","\x77","\xcb"),(int)2);
	lime_gl_uniform3f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform3f","\xb9","\xae","\x20","\x31"),(int)4);
	lime_gl_uniform3fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform3fv","\x9d","\x33","\x78","\xcb"),(int)2);
	lime_gl_uniform3i= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform3i","\xbc","\xae","\x20","\x31"),(int)4);
	lime_gl_uniform3iv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform3iv","\x3a","\x36","\x78","\xcb"),(int)2);
	lime_gl_uniform4f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform4f","\x98","\xaf","\x20","\x31"),(int)5);
	lime_gl_uniform4fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform4fv","\xde","\xf5","\x78","\xcb"),(int)2);
	lime_gl_uniform4i= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform4i","\x9b","\xaf","\x20","\x31"),(int)5);
	lime_gl_uniform4iv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform4iv","\x7b","\xf8","\x78","\xcb"),(int)2);
	lime_gl_uniform_matrix= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_uniform_matrix","\x3a","\x24","\xc0","\xe4"),(int)4);
	lime_gl_use_program= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_use_program","\x7e","\x4b","\xcd","\x95"),(int)1);
	lime_gl_validate_program= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_validate_program","\x29","\x29","\x61","\x98"),(int)1);
	lime_gl_version= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_version","\x4a","\xc2","\x21","\x16"),(int)0);
	lime_gl_vertex_attrib1f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib1f","\x8c","\xe5","\xd7","\xfd"),(int)2);
	lime_gl_vertex_attrib1fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib1fv","\x6a","\xf5","\x10","\x1f"),(int)2);
	lime_gl_vertex_attrib2f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib2f","\x6b","\xe6","\xd7","\xfd"),(int)3);
	lime_gl_vertex_attrib2fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib2fv","\xab","\xb7","\x11","\x1f"),(int)2);
	lime_gl_vertex_attrib3f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib3f","\x4a","\xe7","\xd7","\xfd"),(int)4);
	lime_gl_vertex_attrib3fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib3fv","\xec","\x79","\x12","\x1f"),(int)2);
	lime_gl_vertex_attrib4f= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib4f","\x29","\xe8","\xd7","\xfd"),(int)5);
	lime_gl_vertex_attrib4fv= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib4fv","\x2d","\x3c","\x13","\x1f"),(int)2);
	lime_gl_vertex_attrib_pointer= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_vertex_attrib_pointer","\xf5","\x87","\xb3","\xf0"),(int)-1);
	lime_gl_viewport= ::openfl::_legacy::gl::GL_obj::load(HX_HCSTRING("lime_legacy_gl_viewport","\xf4","\x3c","\x55","\x0d"),(int)4);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace gl
