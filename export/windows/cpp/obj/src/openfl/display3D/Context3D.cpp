#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DBufferUsage
#include <openfl/display3D/Context3DBufferUsage.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#include <openfl/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFormat
#include <openfl/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#include <openfl/display3D/_Context3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace display3D{

Void Context3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D.Context3D","new",0x4f12c019,"openfl.display3D.Context3D.new","openfl/display3D/Context3D.hx",67,0xc899cbb9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(69)
	this->disposed = false;
	HX_STACK_LINE(71)
	int tmp = (int)519;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	this->stencilCompareMode = tmp;
	HX_STACK_LINE(72)
	this->stencilRef = (int)0;
	HX_STACK_LINE(73)
	this->stencilReadMask = (int)255;
	HX_STACK_LINE(75)
	this->_yFlip = (int)1;
	HX_STACK_LINE(77)
	this->vertexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(78)
	this->indexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(79)
	this->programsCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(80)
	this->texturesCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(81)
	this->samplerParameters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		int tmp1 = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			if ((tmp3)){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			::openfl::display3D::_Context3D::SamplerState tmp5 = ::openfl::display3D::_Context3D::SamplerState_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			this->samplerParameters[i] = tmp5;
			HX_STACK_LINE(86)
			::openfl::display3D::_Context3D::SamplerState tmp6 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			tmp6->wrap = ::openfl::display3D::Context3DWrapMode_obj::CLAMP;
			HX_STACK_LINE(87)
			::openfl::display3D::_Context3D::SamplerState tmp7 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			tmp7->filter = ::openfl::display3D::Context3DTextureFilter_obj::LINEAR;
			HX_STACK_LINE(88)
			::openfl::display3D::_Context3D::SamplerState tmp8 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			tmp8->mipfilter = ::openfl::display3D::Context3DMipFilter_obj::MIPNONE;
		}
	}
	HX_STACK_LINE(92)
	::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	::openfl::_legacy::display::Stage stage = tmp2;		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(94)
	::openfl::_legacy::display::OpenGLView tmp3 = ::openfl::_legacy::display::OpenGLView_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	this->ogl = tmp3;
	HX_STACK_LINE(95)
	::openfl::_legacy::display::OpenGLView tmp4 = this->ogl;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	int tmp5 = stage->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	int tmp6 = stage->get_stageHeight();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	::openfl::_legacy::geom::Rectangle tmp7 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(95)
	tmp4->set_scrollRect(tmp7);
	HX_STACK_LINE(96)
	::openfl::_legacy::display::OpenGLView tmp8 = this->ogl;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	::openfl::_legacy::geom::Rectangle tmp9 = tmp8->get_scrollRect();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	::openfl::_legacy::geom::Rectangle tmp10 = tmp9->clone();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	this->scrollRect = tmp10;
	HX_STACK_LINE(97)
	::openfl::_legacy::display::OpenGLView tmp11 = this->ogl;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(97)
	int tmp12 = stage->get_stageWidth();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(97)
	tmp11->set_width(tmp12);
	HX_STACK_LINE(98)
	::openfl::_legacy::display::OpenGLView tmp13 = this->ogl;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(98)
	int tmp14 = stage->get_stageHeight();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(98)
	tmp13->set_height(tmp14);
	HX_STACK_LINE(100)
	::openfl::_legacy::display::OpenGLView tmp15 = this->ogl;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(100)
	stage->addChildAt(tmp15,(int)0);
}
;
	return null();
}

//Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct();
	return _result_;}

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(17664);
	HX_STACK_FRAME("openfl.display3D.Context3D","clear",0xf8808186,"openfl.display3D.Context3D.clear","openfl/display3D/Context3D.hx",109,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(stencil,"stencil")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(111)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(113)
			this->__updateBlendStatus();
			HX_STACK_LINE(114)
			this->drawing = true;
		}
		HX_STACK_LINE(119)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(true);
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			Float tmp2 = red;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			Float tmp3 = green;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			Float tmp4 = blue;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			Float tmp5 = alpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear_color(tmp2,tmp3,tmp4,tmp5);
		}
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			Float tmp2 = depth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear_depth(tmp2);
		}
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int tmp2 = stencil;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear_stencil(tmp2);
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(128)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
	HX_STACK_FRAME("openfl.display3D.Context3D","configureBackBuffer",0x7210edc6,"openfl.display3D.Context3D.configureBackBuffer","openfl/display3D/Context3D.hx",136,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
{
		HX_STACK_LINE(138)
		this->backBufferDepthAndStencil = enableDepthAndStencil;
		HX_STACK_LINE(139)
		this->updateDepthAndStencilState();
		HX_STACK_LINE(142)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		this->setBackBufferViewPort(null(),null(),tmp,tmp1);
		HX_STACK_LINE(143)
		this->updateScissorRectangle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,configureBackBuffer,(void))

Void Context3D_obj::setBackBufferViewPort( Dynamic x,Dynamic y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setBackBufferViewPort",0x25ccd868,"openfl.display3D.Context3D.setBackBufferViewPort","openfl/display3D/Context3D.hx",147,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(149)
		bool tmp = (x == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		if ((tmp)){
			HX_STACK_LINE(149)
			::openfl::_legacy::geom::Rectangle tmp1 = this->scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			x = tmp3;
		}
		HX_STACK_LINE(150)
		bool tmp1 = (y == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(150)
			::openfl::_legacy::geom::Rectangle tmp2 = this->scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			y = tmp4;
		}
		HX_STACK_LINE(151)
		bool tmp2 = (width == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		if ((tmp2)){
			HX_STACK_LINE(151)
			::openfl::_legacy::geom::Rectangle tmp3 = this->scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			Float tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			width = tmp5;
		}
		HX_STACK_LINE(152)
		bool tmp3 = (height == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		if ((tmp3)){
			HX_STACK_LINE(152)
			::openfl::_legacy::geom::Rectangle tmp4 = this->scrollRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			Float tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			height = tmp6;
		}
		HX_STACK_LINE(154)
		::openfl::_legacy::geom::Rectangle tmp4 = this->scrollRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		tmp4->x = x;
		HX_STACK_LINE(155)
		::openfl::_legacy::geom::Rectangle tmp5 = this->scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		tmp5->y = y;
		HX_STACK_LINE(156)
		::openfl::_legacy::geom::Rectangle tmp6 = this->scrollRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		tmp6->width = width;
		HX_STACK_LINE(157)
		::openfl::_legacy::geom::Rectangle tmp7 = this->scrollRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		tmp7->height = height;
		HX_STACK_LINE(158)
		::openfl::_legacy::display::OpenGLView tmp8 = this->ogl;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		int tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(158)
		tmp8->set_width(tmp9);
		HX_STACK_LINE(159)
		::openfl::_legacy::display::OpenGLView tmp10 = this->ogl;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(159)
		int tmp11 = (y + height);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(159)
		tmp10->set_height(tmp11);
		HX_STACK_LINE(161)
		this->updateBackBufferViewPort();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setBackBufferViewPort,(void))

Void Context3D_obj::updateBackBufferViewPort( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","updateBackBufferViewPort",0xbe6a863d,"openfl.display3D.Context3D.updateBackBufferViewPort","openfl/display3D/Context3D.hx",165,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		bool tmp = this->renderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		if ((tmp1)){
			HX_STACK_LINE(169)
			::openfl::_legacy::geom::Rectangle tmp2 = this->scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			int x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(169)
			::openfl::_legacy::geom::Rectangle tmp5 = this->scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			int y = tmp7;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(169)
			::openfl::_legacy::geom::Rectangle tmp8 = this->scrollRect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			Float tmp9 = tmp8->width;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			int width = tmp10;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(169)
			::openfl::_legacy::geom::Rectangle tmp11 = this->scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			Float tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(169)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(169)
			int height = tmp13;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(169)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(169)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(169)
			int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(169)
			int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(169)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport(tmp14,tmp15,tmp16,tmp17);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,updateBackBufferViewPort,(void))

Void Context3D_obj::updateDepthAndStencilState( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","updateDepthAndStencilState",0x7630ca39,"openfl.display3D.Context3D.updateDepthAndStencilState","openfl/display3D/Context3D.hx",175,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		bool tmp = this->renderToTexture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		if ((tmp)){
			HX_STACK_LINE(178)
			tmp1 = this->rttDepthAndStencil;
		}
		else{
			HX_STACK_LINE(178)
			tmp1 = this->backBufferDepthAndStencil;
		}
		HX_STACK_LINE(178)
		bool depthAndStencil = tmp1;		HX_STACK_VAR(depthAndStencil,"depthAndStencil");
		HX_STACK_LINE(196)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2929);
		HX_STACK_LINE(197)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2960);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,updateDepthAndStencilState,(void))

::openfl::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createCubeTexture",0xbb69e843,"openfl.display3D.Context3D.createCubeTexture","openfl/display3D/Context3D.hx",201,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(203)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(203)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		::openfl::display3D::textures::CubeTexture tmp4 = ::openfl::display3D::textures::CubeTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		::openfl::display3D::textures::CubeTexture texture = tmp4;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(204)
		::openfl::display3D::textures::CubeTexture tmp5 = texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		this->texturesCreated->push(tmp5);
		HX_STACK_LINE(205)
		::openfl::display3D::textures::CubeTexture tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

::openfl::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices,::openfl::display3D::Context3DBufferUsage bufferUsage){
	HX_STACK_FRAME("openfl.display3D.Context3D","createIndexBuffer",0x3b80e18f,"openfl.display3D.Context3D.createIndexBuffer","openfl/display3D/Context3D.hx",210,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numIndices,"numIndices")
	HX_STACK_ARG(bufferUsage,"bufferUsage")
	HX_STACK_LINE(212)
	bool tmp = (bufferUsage == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	if ((tmp)){
		HX_STACK_LINE(212)
		bufferUsage = ::openfl::display3D::Context3DBufferUsage_obj::STATIC_DRAW;
	}
	HX_STACK_LINE(213)
	int tmp1 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(213)
	::openfl::_legacy::gl::GLBuffer tmp3 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(213)
	int tmp4 = numIndices;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(213)
	bool tmp5 = (bufferUsage == ::openfl::display3D::Context3DBufferUsage_obj::STATIC_DRAW);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(213)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(213)
	if ((tmp5)){
		HX_STACK_LINE(213)
		tmp6 = (int)35044;
	}
	else{
		HX_STACK_LINE(213)
		tmp6 = (int)35048;
	}
	HX_STACK_LINE(213)
	::openfl::display3D::IndexBuffer3D tmp7 = ::openfl::display3D::IndexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(213)
	::openfl::display3D::IndexBuffer3D indexBuffer = tmp7;		HX_STACK_VAR(indexBuffer,"indexBuffer");
	HX_STACK_LINE(214)
	::openfl::display3D::IndexBuffer3D tmp8 = indexBuffer;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(214)
	this->indexBuffersCreated->push(tmp8);
	HX_STACK_LINE(215)
	::openfl::display3D::IndexBuffer3D tmp9 = indexBuffer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createIndexBuffer,return )

::openfl::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_FRAME("openfl.display3D.Context3D","createProgram",0x0b5753e1,"openfl.display3D.Context3D.createProgram","openfl/display3D/Context3D.hx",220,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	::openfl::_legacy::gl::GLProgram tmp2 = ::openfl::_legacy::gl::GLProgram_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	::openfl::display3D::Program3D tmp3 = ::openfl::display3D::Program3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	::openfl::display3D::Program3D program = tmp3;		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(223)
	::openfl::display3D::Program3D tmp4 = program;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(223)
	this->programsCreated->push(tmp4);
	HX_STACK_LINE(224)
	::openfl::display3D::Program3D tmp5 = program;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(224)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::openfl::display3D::textures::RectangleTexture Context3D_obj::createRectangleTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture){
	HX_STACK_FRAME("openfl.display3D.Context3D","createRectangleTexture",0x8720f36f,"openfl.display3D.Context3D.createRectangleTexture","openfl/display3D/Context3D.hx",229,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_LINE(231)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	bool tmp3 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	::openfl::display3D::textures::RectangleTexture tmp6 = ::openfl::display3D::textures::RectangleTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(231)
	::openfl::display3D::textures::RectangleTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(232)
	::openfl::display3D::textures::RectangleTexture tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(232)
	this->texturesCreated->push(tmp7);
	HX_STACK_LINE(233)
	::openfl::display3D::textures::RectangleTexture tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(233)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createRectangleTexture,return )

::openfl::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createTexture",0xb63ed238,"openfl.display3D.Context3D.createTexture","openfl/display3D/Context3D.hx",238,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(240)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		bool tmp3 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		::openfl::display3D::textures::Texture tmp6 = ::openfl::display3D::textures::Texture_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		::openfl::display3D::textures::Texture texture = tmp6;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(241)
		::openfl::display3D::textures::Texture tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		this->texturesCreated->push(tmp7);
		HX_STACK_LINE(242)
		::openfl::display3D::textures::Texture tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::openfl::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex,::openfl::display3D::Context3DBufferUsage bufferUsage){
	HX_STACK_FRAME("openfl.display3D.Context3D","createVertexBuffer",0x49fb9507,"openfl.display3D.Context3D.createVertexBuffer","openfl/display3D/Context3D.hx",247,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numVertices,"numVertices")
	HX_STACK_ARG(data32PerVertex,"data32PerVertex")
	HX_STACK_ARG(bufferUsage,"bufferUsage")
	HX_STACK_LINE(249)
	bool tmp = (bufferUsage == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	if ((tmp)){
		HX_STACK_LINE(249)
		bufferUsage = ::openfl::display3D::Context3DBufferUsage_obj::STATIC_DRAW;
	}
	HX_STACK_LINE(250)
	int tmp1 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(250)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	::openfl::_legacy::gl::GLBuffer tmp3 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(250)
	int tmp4 = numVertices;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(250)
	int tmp5 = data32PerVertex;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(250)
	bool tmp6 = (bufferUsage == ::openfl::display3D::Context3DBufferUsage_obj::STATIC_DRAW);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(250)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(250)
	if ((tmp6)){
		HX_STACK_LINE(250)
		tmp7 = (int)35044;
	}
	else{
		HX_STACK_LINE(250)
		tmp7 = (int)35048;
	}
	HX_STACK_LINE(250)
	::openfl::display3D::VertexBuffer3D tmp8 = ::openfl::display3D::VertexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(250)
	::openfl::display3D::VertexBuffer3D vertexBuffer = tmp8;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(251)
	::openfl::display3D::VertexBuffer3D tmp9 = vertexBuffer;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(251)
	this->vertexBuffersCreated->push(tmp9);
	HX_STACK_LINE(252)
	::openfl::display3D::VertexBuffer3D tmp10 = vertexBuffer;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(252)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,createVertexBuffer,return )

Void Context3D_obj::__deleteTexture( ::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteTexture",0x1620b609,"openfl.display3D.Context3D.__deleteTexture","openfl/display3D/Context3D.hx",257,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(259)
		bool tmp = (texture->glTexture == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		if ((tmp)){
			HX_STACK_LINE(260)
			return null();
		}
		HX_STACK_LINE(261)
		::openfl::display3D::textures::TextureBase tmp1 = texture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		this->texturesCreated->remove(tmp1);
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			::openfl::_legacy::gl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(262)
			Dynamic tmp2 = texture1->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_texture(tmp2);
			HX_STACK_LINE(262)
			texture1->invalidate();
		}
		HX_STACK_LINE(263)
		texture->glTexture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteTexture,(void))

Void Context3D_obj::__deleteVertexBuffer( ::openfl::display3D::VertexBuffer3D buffer){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteVertexBuffer",0x4df93b96,"openfl.display3D.Context3D.__deleteVertexBuffer","openfl/display3D/Context3D.hx",268,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(270)
		bool tmp = (buffer->glBuffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		if ((tmp)){
			HX_STACK_LINE(271)
			return null();
		}
		HX_STACK_LINE(272)
		::openfl::display3D::VertexBuffer3D tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		this->vertexBuffersCreated->remove(tmp1);
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(273)
			Dynamic tmp2 = buffer1->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_buffer(tmp2);
			HX_STACK_LINE(273)
			buffer1->invalidate();
		}
		HX_STACK_LINE(274)
		buffer->glBuffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteVertexBuffer,(void))

Void Context3D_obj::__deleteIndexBuffer( ::openfl::display3D::IndexBuffer3D buffer){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteIndexBuffer",0xec4f81e0,"openfl.display3D.Context3D.__deleteIndexBuffer","openfl/display3D/Context3D.hx",279,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(281)
		bool tmp = (buffer->glBuffer == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		if ((tmp)){
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(283)
		::openfl::display3D::IndexBuffer3D tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		this->indexBuffersCreated->remove(tmp1);
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(284)
			Dynamic tmp2 = buffer1->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_buffer(tmp2);
			HX_STACK_LINE(284)
			buffer1->invalidate();
		}
		HX_STACK_LINE(285)
		buffer->glBuffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteIndexBuffer,(void))

Void Context3D_obj::__deleteProgram( ::openfl::display3D::Program3D program){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteProgram",0x6b3937b2,"openfl.display3D.Context3D.__deleteProgram","openfl/display3D/Context3D.hx",290,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(292)
		bool tmp = (program->glProgram == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		if ((tmp)){
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(294)
		::openfl::display3D::Program3D tmp1 = program;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		this->programsCreated->remove(tmp1);
		HX_STACK_LINE(295)
		{
			HX_STACK_LINE(295)
			::openfl::_legacy::gl::GLProgram program1 = program->glProgram;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(295)
			Dynamic tmp2 = program1->id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_program(tmp2);
			HX_STACK_LINE(295)
			program1->invalidate();
		}
		HX_STACK_LINE(296)
		program->glProgram = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteProgram,(void))

Void Context3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","dispose",0x8ad040d8,"openfl.display3D.Context3D.dispose","openfl/display3D/Context3D.hx",301,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(306)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(306)
			Array< ::Dynamic > _g1 = this->vertexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(306)
			while((true)){
				HX_STACK_LINE(306)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(306)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(306)
				if ((tmp1)){
					HX_STACK_LINE(306)
					break;
				}
				HX_STACK_LINE(306)
				::openfl::display3D::VertexBuffer3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::VertexBuffer3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(306)
				::openfl::display3D::VertexBuffer3D vertexBuffer = tmp2;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
				HX_STACK_LINE(306)
				++(_g);
				HX_STACK_LINE(308)
				vertexBuffer->dispose();
			}
		}
		HX_STACK_LINE(312)
		this->vertexBuffersCreated = null();
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(314)
			Array< ::Dynamic > _g1 = this->indexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(314)
			while((true)){
				HX_STACK_LINE(314)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(314)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(314)
				if ((tmp1)){
					HX_STACK_LINE(314)
					break;
				}
				HX_STACK_LINE(314)
				::openfl::display3D::IndexBuffer3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::IndexBuffer3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(314)
				::openfl::display3D::IndexBuffer3D indexBuffer = tmp2;		HX_STACK_VAR(indexBuffer,"indexBuffer");
				HX_STACK_LINE(314)
				++(_g);
				HX_STACK_LINE(316)
				indexBuffer->dispose();
			}
		}
		HX_STACK_LINE(320)
		this->indexBuffersCreated = null();
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(322)
			Array< ::Dynamic > _g1 = this->programsCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			while((true)){
				HX_STACK_LINE(322)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(322)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(322)
				if ((tmp1)){
					HX_STACK_LINE(322)
					break;
				}
				HX_STACK_LINE(322)
				::openfl::display3D::Program3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::Program3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(322)
				::openfl::display3D::Program3D program = tmp2;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(322)
				++(_g);
				HX_STACK_LINE(324)
				program->dispose();
			}
		}
		HX_STACK_LINE(328)
		this->programsCreated = null();
		HX_STACK_LINE(330)
		this->samplerParameters = null();
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(332)
			Array< ::Dynamic > _g1 = this->texturesCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(332)
			while((true)){
				HX_STACK_LINE(332)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(332)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(332)
				if ((tmp1)){
					HX_STACK_LINE(332)
					break;
				}
				HX_STACK_LINE(332)
				::openfl::display3D::textures::TextureBase tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::textures::TextureBase >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(332)
				::openfl::display3D::textures::TextureBase texture = tmp2;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(332)
				++(_g);
				HX_STACK_LINE(334)
				texture->dispose();
			}
		}
		HX_STACK_LINE(338)
		this->texturesCreated = null();
		HX_STACK_LINE(340)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		if ((tmp1)){
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				::openfl::_legacy::gl::GLFramebuffer tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(342)
				::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
				HX_STACK_LINE(342)
				Dynamic tmp3 = framebuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(342)
				::openfl::_legacy::gl::GL_obj::lime_gl_delete_framebuffer(tmp3);
				HX_STACK_LINE(342)
				framebuffer->invalidate();
			}
			HX_STACK_LINE(343)
			this->framebuffer = null();
		}
		HX_STACK_LINE(347)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(347)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		if ((tmp3)){
			HX_STACK_LINE(349)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			::openfl::_legacy::gl::GL_obj::deleteRenderbuffer(tmp4);
			HX_STACK_LINE(350)
			this->renderbuffer = null();
		}
		HX_STACK_LINE(354)
		this->disposed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

Void Context3D_obj::drawToBitmapData( ::openfl::_legacy::display::BitmapData destination){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","drawToBitmapData",0x474f45df,"openfl.display3D.Context3D.drawToBitmapData","openfl/display3D/Context3D.hx",359,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_FRAME("openfl.display3D.Context3D","drawTriangles",0x0d837500,"openfl.display3D.Context3D.drawTriangles","openfl/display3D/Context3D.hx",366,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indexBuffer,"indexBuffer")
	HX_STACK_ARG(firstIndex,"firstIndex")
	HX_STACK_ARG(numTriangles,"numTriangles")
{
		HX_STACK_LINE(368)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,HX_HCSTRING("yflip","\xa6","\x43","\x3a","\xef"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(368)
		Dynamic location = tmp2;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(369)
		{
			HX_STACK_LINE(369)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(369)
			Dynamic tmp3 = location1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(369)
			Float tmp4 = this->_yFlip;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(369)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp3,tmp4);
		}
		HX_STACK_LINE(371)
		bool tmp3 = this->drawing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(371)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(371)
		if ((tmp4)){
			HX_STACK_LINE(373)
			::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Need to clear before drawing if the buffer has not been cleared since the last present() call.","\x69","\xaf","\x70","\x74"),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(373)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(377)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(379)
		bool tmp5 = (numTriangles == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(379)
		if ((tmp5)){
			HX_STACK_LINE(381)
			numIndices = indexBuffer->numIndices;
		}
		else{
			HX_STACK_LINE(385)
			int tmp6 = (numTriangles * (int)3);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(385)
			numIndices = tmp6;
		}
		HX_STACK_LINE(389)
		int tmp6 = (firstIndex * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(389)
		int byteOffset = tmp6;		HX_STACK_VAR(byteOffset,"byteOffset");
		HX_STACK_LINE(391)
		{
			HX_STACK_LINE(391)
			::openfl::_legacy::gl::GLBuffer buffer = indexBuffer->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(391)
			bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(391)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(391)
			if ((tmp7)){
				HX_STACK_LINE(391)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(391)
				tmp8 = buffer->id;
			}
			HX_STACK_LINE(391)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,tmp8);
		}
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			int tmp7 = numIndices;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(392)
			int tmp8 = byteOffset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(392)
			::openfl::_legacy::gl::GL_obj::lime_gl_draw_elements((int)4,tmp7,(int)5123,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","present",0x095ffb34,"openfl.display3D.Context3D.present","openfl/display3D/Context3D.hx",397,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(399)
		this->drawing = false;
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(400)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(400)
			if ((tmp)){
				HX_STACK_LINE(400)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(400)
				tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(400)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp1);
		}
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(402)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(402)
			if ((tmp)){
				HX_STACK_LINE(402)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(402)
				tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(402)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp1);
		}
		HX_STACK_LINE(403)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2884);
		HX_STACK_LINE(405)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		if ((tmp1)){
			HX_STACK_LINE(407)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			if ((tmp2)){
				HX_STACK_LINE(407)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(407)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(407)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp3);
		}
		HX_STACK_LINE(411)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		if ((tmp3)){
			HX_STACK_LINE(413)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(413)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(413)
			if ((tmp4)){
				HX_STACK_LINE(413)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(413)
				tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(413)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::removeRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","removeRenderMethod",0xa41ae1a2,"openfl.display3D.Context3D.removeRenderMethod","openfl/display3D/Context3D.hx",420,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(422)
		::openfl::_legacy::display::OpenGLView tmp = this->ogl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		tmp->render = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,removeRenderMethod,(void))

Void Context3D_obj::setBlendFactors( int sourceFactor,int destinationFactor){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setBlendFactors",0x86d16c6e,"openfl.display3D.Context3D.setBlendFactors","openfl/display3D/Context3D.hx",427,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceFactor,"sourceFactor")
		HX_STACK_ARG(destinationFactor,"destinationFactor")
		HX_STACK_LINE(431)
		this->blendEnabled = true;
		HX_STACK_LINE(432)
		this->blendSourceFactor = sourceFactor;
		HX_STACK_LINE(433)
		this->blendDestinationFactor = destinationFactor;
		HX_STACK_LINE(435)
		this->__updateBlendStatus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setColorMask",0xad4f5d14,"openfl.display3D.Context3D.setColorMask","openfl/display3D/Context3D.hx",442,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(442)
		bool tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(442)
		bool tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		bool tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(442)
		bool tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(442)
		::openfl::_legacy::gl::GL_obj::lime_gl_color_mask(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setCulling",0x39687055,"openfl.display3D.Context3D.setCulling","openfl/display3D/Context3D.hx",448,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull")
		HX_STACK_LINE(452)
		bool tmp = (triangleFaceToCull == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		if ((tmp)){
			HX_STACK_LINE(454)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2884);
		}
		else{
			HX_STACK_LINE(458)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2884);
			HX_STACK_LINE(460)
			int tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(460)
			switch( (int)(tmp1)){
				case (int)1029: {
					HX_STACK_LINE(462)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1029);
				}
				;break;
				case (int)1028: {
					HX_STACK_LINE(463)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1028);
				}
				;break;
				case (int)1032: {
					HX_STACK_LINE(464)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1032);
				}
				;break;
				default: {
					HX_STACK_LINE(465)
					HX_STACK_DO_THROW(HX_HCSTRING("Unknown Context3DTriangleFace type.","\x03","\x2c","\x78","\x96"));
				}
			}
		}
		HX_STACK_LINE(471)
		int tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		switch( (int)(tmp1)){
			case (int)1029: {
				HX_STACK_LINE(475)
				this->_yFlip = (int)-1;
			}
			;break;
			case (int)1028: {
				HX_STACK_LINE(479)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)1032: {
				HX_STACK_LINE(483)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(487)
				this->_yFlip = (int)1;
			}
			;break;
			default: {
				HX_STACK_LINE(491)
				::String tmp2 = (HX_HCSTRING("Unknown culling mode ","\x77","\x22","\x39","\x68") + triangleFaceToCull);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(491)
				::String tmp3 = (tmp2 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(491)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setDepthTest( bool depthMask,int passCompareMode){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setDepthTest",0x2d08b41a,"openfl.display3D.Context3D.setDepthTest","openfl/display3D/Context3D.hx",497,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depthMask,"depthMask")
		HX_STACK_ARG(passCompareMode,"passCompareMode")
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			int tmp = passCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(501)
			::openfl::_legacy::gl::GL_obj::lime_gl_depth_func(tmp);
		}
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			bool tmp = depthMask;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(502)
			::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(tmp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setGLSLProgramConstantsFromByteArray( ::String locationName,::openfl::_legacy::utils::ByteArray data,hx::Null< int >  __o_byteArrayOffset){
int byteArrayOffset = __o_byteArrayOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromByteArray",0xf444f7a3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",507,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
{
		HX_STACK_LINE(509)
		data->position = byteArrayOffset;
		HX_STACK_LINE(510)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		::String tmp2 = locationName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(510)
		Dynamic location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(511)
		{
			HX_STACK_LINE(511)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(511)
			Float tmp4 = data->readFloat();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(511)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(511)
			Float tmp5 = data->readFloat();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(511)
			Float y = tmp5;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(511)
			Float tmp6 = data->readFloat();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(511)
			Float z = tmp6;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(511)
			Float tmp7 = data->readFloat();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(511)
			Float w = tmp7;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(511)
			Dynamic tmp8 = location1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(511)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(511)
			Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(511)
			Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(511)
			Float tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(511)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(tmp8,tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromByteArray,(void))

Void Context3D_obj::setGLSLProgramConstantsFromMatrix( ::String locationName,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromMatrix",0x2c9d8ccf,"openfl.display3D.Context3D.setGLSLProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",516,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(518)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(518)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(518)
		::String tmp2 = locationName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		Dynamic location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(519)
		{
			HX_STACK_LINE(519)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(519)
			::openfl::_legacy::utils::Float32Array tmp4 = ::openfl::_legacy::utils::Float32Array_obj::__new(matrix->rawData,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(519)
			::openfl::_legacy::utils::Float32Array v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(519)
			Dynamic tmp5 = location1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(519)
			bool tmp6 = transposedMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(519)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(519)
			::openfl::_legacy::utils::ByteArray tmp8 = v->getByteBuffer();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(519)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(tmp5,tmp7,tmp8,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromMatrix,(void))

Void Context3D_obj::setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromVector4",0x24735fc3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromVector4","openfl/display3D/Context3D.hx",524,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(526)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		::String tmp2 = locationName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(526)
		Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(526)
		Dynamic location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(527)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(527)
			Dynamic tmp4 = location1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(527)
			Float tmp5 = data->__get(startIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(527)
			int tmp6 = (startIndex + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(527)
			Float tmp7 = data->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			int tmp8 = (startIndex + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			Float tmp9 = data->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(527)
			int tmp10 = (startIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(527)
			Float tmp11 = data->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(527)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(tmp4,tmp5,tmp7,tmp9,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromVector4,(void))

Void Context3D_obj::setGLSLTextureAt( ::String locationName,::openfl::display3D::textures::TextureBase texture,int textureIndex){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLTextureAt",0xd796fc95,"openfl.display3D.Context3D.setGLSLTextureAt","openfl/display3D/Context3D.hx",532,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(locationName,"locationName")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(textureIndex,"textureIndex")
		HX_STACK_LINE(534)
		int tmp = textureIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(536)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(537)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33985);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(538)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33986);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(539)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(540)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33988);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(541)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33989);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(542)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33990);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(543)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33991);
			}
			;break;
			default: {
				HX_STACK_LINE(545)
				HX_STACK_DO_THROW(HX_HCSTRING("Does not support texture8 or more","\x14","\x7f","\xab","\x80"));
			}
		}
		HX_STACK_LINE(549)
		bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		if ((tmp1)){
			HX_STACK_LINE(551)
			{
				HX_STACK_LINE(551)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(551)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(551)
				if ((tmp2)){
					HX_STACK_LINE(551)
					tmp3 = null();
				}
				else{
					HX_STACK_LINE(551)
					tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
				}
				HX_STACK_LINE(551)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp3);
			}
			HX_STACK_LINE(552)
			{
				HX_STACK_LINE(552)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(552)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(552)
				if ((tmp2)){
					HX_STACK_LINE(552)
					tmp3 = null();
				}
				else{
					HX_STACK_LINE(552)
					tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
				}
				HX_STACK_LINE(552)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp3);
			}
			HX_STACK_LINE(553)
			return null();
		}
		HX_STACK_LINE(557)
		::openfl::display3D::Program3D tmp2 = this->currentProgram;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		Dynamic tmp3 = tmp2->glProgram->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		::String tmp4 = locationName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(557)
		Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(557)
		Dynamic location = tmp5;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(559)
		::openfl::display3D::textures::TextureBase tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(559)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(559)
		if ((tmp7)){
			HX_STACK_LINE(561)
			{
				HX_STACK_LINE(561)
				::openfl::display3D::textures::Texture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(561)
				tmp8 = hx::TCast< ::openfl::display3D::textures::Texture >::cast(texture);
				HX_STACK_LINE(561)
				::openfl::_legacy::gl::GLTexture tmp9 = tmp8->glTexture;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(561)
				::openfl::_legacy::gl::GLTexture texture1 = tmp9;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(561)
				bool tmp10 = (texture1 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(561)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(561)
				if ((tmp10)){
					HX_STACK_LINE(561)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(561)
					tmp11 = texture1->id;
				}
				HX_STACK_LINE(561)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp11);
			}
			HX_STACK_LINE(562)
			{
				HX_STACK_LINE(562)
				Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
				HX_STACK_LINE(562)
				Dynamic tmp8 = location1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(562)
				int tmp9 = textureIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(562)
				::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp8,tmp9);
			}
		}
		else{
			HX_STACK_LINE(564)
			::openfl::display3D::textures::TextureBase tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(564)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(564)
			if ((tmp9)){
				HX_STACK_LINE(566)
				{
					HX_STACK_LINE(566)
					::openfl::display3D::textures::RectangleTexture tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(566)
					tmp10 = hx::TCast< ::openfl::display3D::textures::RectangleTexture >::cast(texture);
					HX_STACK_LINE(566)
					::openfl::_legacy::gl::GLTexture tmp11 = tmp10->glTexture;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(566)
					::openfl::_legacy::gl::GLTexture texture1 = tmp11;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(566)
					bool tmp12 = (texture1 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(566)
					Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(566)
					if ((tmp12)){
						HX_STACK_LINE(566)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(566)
						tmp13 = texture1->id;
					}
					HX_STACK_LINE(566)
					::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp13);
				}
				HX_STACK_LINE(567)
				{
					HX_STACK_LINE(567)
					Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
					HX_STACK_LINE(567)
					Dynamic tmp10 = location1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(567)
					int tmp11 = textureIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(567)
					::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp10,tmp11);
				}
			}
			else{
				HX_STACK_LINE(569)
				::openfl::display3D::textures::TextureBase tmp10 = texture;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(569)
				bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(569)
				if ((tmp11)){
					HX_STACK_LINE(571)
					{
						HX_STACK_LINE(571)
						::openfl::display3D::textures::CubeTexture tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(571)
						tmp12 = hx::TCast< ::openfl::display3D::textures::CubeTexture >::cast(texture);
						HX_STACK_LINE(571)
						::openfl::_legacy::gl::GLTexture tmp13 = tmp12->glTexture;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(571)
						::openfl::_legacy::gl::GLTexture texture1 = tmp13;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(571)
						bool tmp14 = (texture1 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(571)
						Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(571)
						if ((tmp14)){
							HX_STACK_LINE(571)
							tmp15 = null();
						}
						else{
							HX_STACK_LINE(571)
							tmp15 = texture1->id;
						}
						HX_STACK_LINE(571)
						::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp15);
					}
					HX_STACK_LINE(572)
					{
						HX_STACK_LINE(572)
						Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
						HX_STACK_LINE(572)
						Dynamic tmp12 = location1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(572)
						int tmp13 = textureIndex;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(572)
						::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp12,tmp13);
					}
				}
				else{
					HX_STACK_LINE(576)
					::openfl::display3D::textures::TextureBase tmp12 = texture;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(576)
					::hx::Class tmp13 = ::Type_obj::getClass(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(576)
					::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(576)
					::String tmp15 = (HX_HCSTRING("Texture of type ","\x62","\x88","\x46","\xef") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(576)
					::String tmp16 = (tmp15 + HX_HCSTRING(" not supported yet","\x49","\x2e","\x29","\x7d"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(576)
					HX_STACK_DO_THROW(tmp16);
				}
			}
		}
		HX_STACK_LINE(580)
		::openfl::display3D::_Context3D::SamplerState tmp8 = this->samplerParameters->__get(textureIndex).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(580)
		::openfl::display3D::_Context3D::SamplerState parameters = tmp8;		HX_STACK_VAR(parameters,"parameters");
		HX_STACK_LINE(582)
		bool tmp9 = (parameters != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(582)
		if ((tmp9)){
			HX_STACK_LINE(584)
			::openfl::display3D::textures::TextureBase tmp10 = texture;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(584)
			::openfl::display3D::Context3DWrapMode tmp11 = parameters->wrap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(584)
			::openfl::display3D::Context3DTextureFilter tmp12 = parameters->filter;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(584)
			::openfl::display3D::Context3DMipFilter tmp13 = parameters->mipfilter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(584)
			this->setTextureParameters(tmp10,tmp11,tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(588)
			::openfl::display3D::textures::TextureBase tmp10 = texture;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(588)
			this->setTextureParameters(tmp10,::openfl::display3D::Context3DWrapMode_obj::CLAMP,::openfl::display3D::Context3DTextureFilter_obj::NEAREST,::openfl::display3D::Context3DMipFilter_obj::MIPNONE);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLTextureAt,(void))

Void Context3D_obj::setGLSLVertexBufferAt( ::String locationName,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLVertexBufferAt",0x58133e50,"openfl.display3D.Context3D.setGLSLVertexBufferAt","openfl/display3D/Context3D.hx",595,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(597)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(597)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(597)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		if ((tmp1)){
			HX_STACK_LINE(597)
			::openfl::display3D::Program3D tmp3 = this->currentProgram;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(597)
			::openfl::display3D::Program3D tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			::openfl::_legacy::gl::GLProgram tmp5 = tmp4->glProgram;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(597)
			tmp2 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(597)
			tmp2 = false;
		}
		HX_STACK_LINE(597)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		if ((tmp2)){
			HX_STACK_LINE(597)
			::openfl::display3D::Program3D tmp4 = this->currentProgram;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			Dynamic tmp5 = tmp4->glProgram->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(597)
			::String tmp6 = locationName;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(597)
			tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(597)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(597)
		int location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(598)
		bool tmp4 = (location == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(598)
		if ((tmp4)){
			HX_STACK_LINE(598)
			return null();
		}
		HX_STACK_LINE(600)
		bool tmp5 = (buffer == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(600)
		if ((tmp5)){
			HX_STACK_LINE(602)
			bool tmp6 = (location > (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(602)
			if ((tmp6)){
				HX_STACK_LINE(604)
				{
					HX_STACK_LINE(604)
					int tmp7 = location;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(604)
					::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp7);
				}
				HX_STACK_LINE(607)
				{
					HX_STACK_LINE(607)
					bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(607)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(607)
					if ((tmp7)){
						HX_STACK_LINE(607)
						tmp8 = null();
					}
					else{
						HX_STACK_LINE(607)
						tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
					}
					HX_STACK_LINE(607)
					::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp8);
				}
			}
			HX_STACK_LINE(612)
			return null();
		}
		HX_STACK_LINE(616)
		{
			HX_STACK_LINE(616)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(616)
			bool tmp6 = (buffer1 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(616)
			Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(616)
			if ((tmp6)){
				HX_STACK_LINE(616)
				tmp7 = null();
			}
			else{
				HX_STACK_LINE(616)
				tmp7 = buffer1->id;
			}
			HX_STACK_LINE(616)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp7);
		}
		HX_STACK_LINE(618)
		int dimension = (int)4;		HX_STACK_VAR(dimension,"dimension");
		HX_STACK_LINE(619)
		int type = (int)5126;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(620)
		int numBytes = (int)4;		HX_STACK_VAR(numBytes,"numBytes");
		HX_STACK_LINE(622)
		bool tmp6 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::BYTES_4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(622)
		if ((tmp6)){
			HX_STACK_LINE(624)
			dimension = (int)4;
			HX_STACK_LINE(625)
			type = (int)5126;
			HX_STACK_LINE(626)
			numBytes = (int)4;
		}
		else{
			HX_STACK_LINE(628)
			bool tmp7 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(628)
			if ((tmp7)){
				HX_STACK_LINE(630)
				dimension = (int)1;
				HX_STACK_LINE(631)
				type = (int)5126;
				HX_STACK_LINE(632)
				numBytes = (int)4;
			}
			else{
				HX_STACK_LINE(634)
				bool tmp8 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(634)
				if ((tmp8)){
					HX_STACK_LINE(636)
					dimension = (int)2;
					HX_STACK_LINE(637)
					type = (int)5126;
					HX_STACK_LINE(638)
					numBytes = (int)4;
				}
				else{
					HX_STACK_LINE(640)
					bool tmp9 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(640)
					if ((tmp9)){
						HX_STACK_LINE(642)
						dimension = (int)3;
						HX_STACK_LINE(643)
						type = (int)5126;
						HX_STACK_LINE(644)
						numBytes = (int)4;
					}
					else{
						HX_STACK_LINE(646)
						bool tmp10 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(646)
						if ((tmp10)){
							HX_STACK_LINE(648)
							dimension = (int)4;
							HX_STACK_LINE(649)
							type = (int)5126;
							HX_STACK_LINE(650)
							numBytes = (int)4;
						}
						else{
							HX_STACK_LINE(654)
							::openfl::display3D::Context3DVertexBufferFormat tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(654)
							::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(654)
							::String tmp13 = (HX_HCSTRING("Buffer format ","\x09","\x56","\xec","\x6e") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(654)
							::String tmp14 = (tmp13 + HX_HCSTRING(" is not supported","\x4b","\x1e","\xc6","\x51"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(654)
							HX_STACK_DO_THROW(tmp14);
						}
					}
				}
			}
		}
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			int tmp7 = location;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(658)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp7);
		}
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			int tmp7 = location;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(659)
			int tmp8 = dimension;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(659)
			int tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(659)
			int tmp10 = (buffer->data32PerVertex * numBytes);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(659)
			int tmp11 = (bufferOffset * numBytes);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(659)
			::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp7,tmp8,tmp9,false,tmp10,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setGLSLVertexBufferAt,(void))

Void Context3D_obj::setProgram( ::openfl::display3D::Program3D program3D){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgram",0xd9d9d869,"openfl.display3D.Context3D.setProgram","openfl/display3D/Context3D.hx",664,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program3D,"program3D")
		HX_STACK_LINE(666)
		::openfl::_legacy::gl::GLProgram glProgram = null();		HX_STACK_VAR(glProgram,"glProgram");
		HX_STACK_LINE(668)
		bool tmp = (program3D != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		if ((tmp)){
			HX_STACK_LINE(670)
			glProgram = program3D->glProgram;
		}
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			bool tmp1 = (glProgram == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(674)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(674)
			if ((tmp1)){
				HX_STACK_LINE(674)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(674)
				tmp2 = glProgram->id;
			}
			HX_STACK_LINE(674)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp2);
		}
		HX_STACK_LINE(675)
		this->currentProgram = program3D;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( ::openfl::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::openfl::_legacy::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromByteArray",0xd8990de1,"openfl.display3D.Context3D.setProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",682,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(programType,"programType")
		HX_STACK_ARG(firstRegister,"firstRegister")
		HX_STACK_ARG(numRegisters,"numRegisters")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(684)
		data->position = byteArrayOffset;
		HX_STACK_LINE(686)
		{
			HX_STACK_LINE(686)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(686)
			while((true)){
				HX_STACK_LINE(686)
				bool tmp = (_g < numRegisters);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(686)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(686)
				if ((tmp1)){
					HX_STACK_LINE(686)
					break;
				}
				HX_STACK_LINE(686)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(686)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(688)
				::openfl::display3D::Context3DProgramType tmp3 = programType;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				int tmp4 = (firstRegister + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(688)
				::String tmp5 = this->__getUniformLocationNameFromAgalRegisterIndex(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(688)
				::String locationName = tmp5;		HX_STACK_VAR(locationName,"locationName");
				HX_STACK_LINE(689)
				::String tmp6 = locationName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(689)
				::openfl::_legacy::utils::ByteArray tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(689)
				this->setGLSLProgramConstantsFromByteArray(tmp6,tmp7,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( ::openfl::display3D::Context3DProgramType programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromMatrix",0x29e843d1,"openfl.display3D.Context3D.setProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",696,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(701)
		Array< Float > d = matrix->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(702)
		bool tmp = transposedMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(702)
		if ((tmp)){
			HX_STACK_LINE(703)
			::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(703)
			int tmp2 = firstRegister;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(703)
			Float tmp3 = d->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(703)
			Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(703)
			Float tmp5 = d->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			Float tmp7 = d->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			Float tmp9 = d->__get((int)12);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(703)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(703)
			this->setProgramConstantsFromVector(tmp1,tmp2,Array_obj< Float >::__new().Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10),(int)1);
			HX_STACK_LINE(704)
			::openfl::display3D::Context3DProgramType tmp11 = programType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(704)
			int tmp12 = (firstRegister + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(704)
			Float tmp13 = d->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(704)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(704)
			Float tmp15 = d->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(704)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(704)
			Float tmp17 = d->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(704)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(704)
			Float tmp19 = d->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(704)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(704)
			this->setProgramConstantsFromVector(tmp11,tmp12,Array_obj< Float >::__new().Add(tmp14).Add(tmp16).Add(tmp18).Add(tmp20),(int)1);
			HX_STACK_LINE(705)
			::openfl::display3D::Context3DProgramType tmp21 = programType;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(705)
			int tmp22 = (firstRegister + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(705)
			Float tmp23 = d->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(705)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(705)
			Float tmp25 = d->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(705)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(705)
			Float tmp27 = d->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(705)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(705)
			Float tmp29 = d->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(705)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(705)
			this->setProgramConstantsFromVector(tmp21,tmp22,Array_obj< Float >::__new().Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30),(int)1);
			HX_STACK_LINE(706)
			::openfl::display3D::Context3DProgramType tmp31 = programType;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(706)
			int tmp32 = (firstRegister + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(706)
			Float tmp33 = d->__get((int)3);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(706)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(706)
			Float tmp35 = d->__get((int)7);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(706)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(706)
			Float tmp37 = d->__get((int)11);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(706)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(706)
			Float tmp39 = d->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(706)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(706)
			this->setProgramConstantsFromVector(tmp31,tmp32,Array_obj< Float >::__new().Add(tmp34).Add(tmp36).Add(tmp38).Add(tmp40),(int)1);
		}
		else{
			HX_STACK_LINE(708)
			::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(708)
			int tmp2 = firstRegister;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(708)
			Float tmp3 = d->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(708)
			Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(708)
			Float tmp5 = d->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(708)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(708)
			Float tmp7 = d->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(708)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(708)
			Float tmp9 = d->__get((int)3);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(708)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(708)
			this->setProgramConstantsFromVector(tmp1,tmp2,Array_obj< Float >::__new().Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10),(int)1);
			HX_STACK_LINE(709)
			::openfl::display3D::Context3DProgramType tmp11 = programType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(709)
			int tmp12 = (firstRegister + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(709)
			Float tmp13 = d->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(709)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(709)
			Float tmp15 = d->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(709)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(709)
			Float tmp17 = d->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(709)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(709)
			Float tmp19 = d->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(709)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(709)
			this->setProgramConstantsFromVector(tmp11,tmp12,Array_obj< Float >::__new().Add(tmp14).Add(tmp16).Add(tmp18).Add(tmp20),(int)1);
			HX_STACK_LINE(710)
			::openfl::display3D::Context3DProgramType tmp21 = programType;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(710)
			int tmp22 = (firstRegister + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(710)
			Float tmp23 = d->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(710)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(710)
			Float tmp25 = d->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(710)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(710)
			Float tmp27 = d->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(710)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(710)
			Float tmp29 = d->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(710)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(710)
			this->setProgramConstantsFromVector(tmp21,tmp22,Array_obj< Float >::__new().Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30),(int)1);
			HX_STACK_LINE(711)
			::openfl::display3D::Context3DProgramType tmp31 = programType;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(711)
			int tmp32 = (firstRegister + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(711)
			Float tmp33 = d->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(711)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(711)
			Float tmp35 = d->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(711)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(711)
			Float tmp37 = d->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(711)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(711)
			Float tmp39 = d->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(711)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(711)
			this->setProgramConstantsFromVector(tmp31,tmp32,Array_obj< Float >::__new().Add(tmp34).Add(tmp36).Add(tmp38).Add(tmp40),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromVector( ::openfl::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(1);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromVector",0x057dbe53,"openfl.display3D.Context3D.setProgramConstantsFromVector","openfl/display3D/Context3D.hx",719,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(numRegisters,"numRegisters")
{
		HX_STACK_LINE(719)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(719)
		while((true)){
			HX_STACK_LINE(719)
			bool tmp = (_g < numRegisters);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(719)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(719)
			if ((tmp1)){
				HX_STACK_LINE(719)
				break;
			}
			HX_STACK_LINE(719)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(719)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(721)
			int tmp3 = (i * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(721)
			int currentIndex = tmp3;		HX_STACK_VAR(currentIndex,"currentIndex");
			HX_STACK_LINE(722)
			::openfl::display3D::Context3DProgramType tmp4 = programType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(722)
			int tmp5 = (firstRegister + i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(722)
			::String tmp6 = this->__getUniformLocationNameFromAgalRegisterIndex(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(722)
			::String locationName = tmp6;		HX_STACK_VAR(locationName,"locationName");
			HX_STACK_LINE(723)
			::String tmp7 = locationName;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			int tmp8 = currentIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(723)
			this->setGLSLProgramConstantsFromVector4(tmp7,data,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderMethod",0x286aeed2,"openfl.display3D.Context3D.setRenderMethod","openfl/display3D/Context3D.hx",730,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(734)
		::openfl::_legacy::display::OpenGLView tmp = this->ogl;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,func)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::geom::Rectangle rect){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display3D/Context3D.hx",734,0xc899cbb9)
			HX_STACK_ARG(rect,"rect")
			{
				HX_STACK_LINE(734)
				func(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(734)
		tmp->render =  Dynamic(new _Function_1_1(func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setRenderMethod,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToBackBuffer",0x6095d693,"openfl.display3D.Context3D.setRenderToBackBuffer","openfl/display3D/Context3D.hx",739,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(741)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2929);
		HX_STACK_LINE(742)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2960);
		HX_STACK_LINE(743)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3089);
		HX_STACK_LINE(744)
		{
			HX_STACK_LINE(744)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(744)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(744)
			if ((tmp)){
				HX_STACK_LINE(744)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(744)
				tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(744)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp1);
		}
		HX_STACK_LINE(746)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(746)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(746)
		if ((tmp1)){
			HX_STACK_LINE(748)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(748)
			if ((tmp2)){
				HX_STACK_LINE(748)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(748)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(748)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp3);
		}
		HX_STACK_LINE(752)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(752)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(752)
		if ((tmp3)){
			HX_STACK_LINE(754)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(754)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(754)
			if ((tmp4)){
				HX_STACK_LINE(754)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(754)
				tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(754)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp5);
		}
		HX_STACK_LINE(758)
		this->renderToTexture = false;
		HX_STACK_LINE(759)
		this->updateBackBufferViewPort();
		HX_STACK_LINE(760)
		this->updateScissorRectangle();
		HX_STACK_LINE(761)
		this->updateDepthAndStencilState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToTexture",0x25c5d54f,"openfl.display3D.Context3D.setRenderToTexture","openfl/display3D/Context3D.hx",765,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(surfaceSelector,"surfaceSelector")
{
		HX_STACK_LINE(769)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(769)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(769)
		if ((tmp1)){
			HX_STACK_LINE(771)
			int tmp2 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(771)
			Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(771)
			::openfl::_legacy::gl::GLFramebuffer tmp4 = ::openfl::_legacy::gl::GLFramebuffer_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(771)
			this->framebuffer = tmp4;
		}
		HX_STACK_LINE(775)
		{
			HX_STACK_LINE(775)
			::openfl::_legacy::gl::GLFramebuffer tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(775)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(775)
			bool tmp3 = (framebuffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(775)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(775)
			if ((tmp3)){
				HX_STACK_LINE(775)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(775)
				tmp4 = framebuffer->id;
			}
			HX_STACK_LINE(775)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp4);
		}
		HX_STACK_LINE(777)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(777)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(777)
		if ((tmp3)){
			HX_STACK_LINE(779)
			int tmp4 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(779)
			Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(779)
			::openfl::_legacy::gl::GLRenderbuffer tmp6 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(779)
			this->renderbuffer = tmp6;
		}
		HX_STACK_LINE(783)
		{
			HX_STACK_LINE(783)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(783)
			::openfl::_legacy::gl::GLRenderbuffer renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(783)
			bool tmp5 = (renderbuffer == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(783)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(783)
			if ((tmp5)){
				HX_STACK_LINE(783)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(783)
				tmp6 = renderbuffer->id;
			}
			HX_STACK_LINE(783)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp6);
		}
		HX_STACK_LINE(789)
		{
			HX_STACK_LINE(789)
			int tmp4 = texture->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(789)
			int tmp5 = texture->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(789)
			::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)6408,tmp4,tmp5);
		}
		HX_STACK_LINE(791)
		{
			HX_STACK_LINE(791)
			Dynamic tmp4 = texture->glTexture->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(791)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,tmp4,(int)0);
		}
		HX_STACK_LINE(793)
		{
			HX_STACK_LINE(793)
			int tmp4 = texture->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(793)
			int tmp5 = texture->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(793)
			::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)34041,tmp4,tmp5);
		}
		HX_STACK_LINE(794)
		{
			HX_STACK_LINE(794)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(794)
			Dynamic tmp5 = tmp4->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(794)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)33306,(int)36161,tmp5);
		}
		HX_STACK_LINE(796)
		bool tmp4 = enableDepthAndStencil;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(796)
		if ((tmp4)){
			HX_STACK_LINE(798)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2929);
			HX_STACK_LINE(799)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2960);
		}
		HX_STACK_LINE(802)
		{
			HX_STACK_LINE(802)
			::openfl::_legacy::gl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(802)
			bool tmp5 = (texture1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(802)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(802)
			if ((tmp5)){
				HX_STACK_LINE(802)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(802)
				tmp6 = texture1->id;
			}
			HX_STACK_LINE(802)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp6);
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(803)
			int tmp5 = texture->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(803)
			int tmp6 = texture->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(803)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(803)
			::openfl::_legacy::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(803)
			if ((tmp7)){
				HX_STACK_LINE(803)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(803)
				tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(803)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(803)
			Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(803)
			if ((tmp9)){
				HX_STACK_LINE(803)
				tmp10 = null();
			}
			else{
				HX_STACK_LINE(803)
				tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(803)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,tmp5,tmp6,(int)0,(int)6408,(int)5121,tmp8,tmp10);
		}
		HX_STACK_LINE(804)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(805)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9985);
		HX_STACK_LINE(807)
		{
			HX_STACK_LINE(807)
			int tmp5 = texture->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(807)
			int tmp6 = texture->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(807)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport((int)0,(int)0,tmp5,tmp6);
		}
		HX_STACK_LINE(809)
		this->renderToTexture = true;
		HX_STACK_LINE(810)
		this->rttDepthAndStencil = enableDepthAndStencil;
		HX_STACK_LINE(811)
		this->rttWidth = texture->width;
		HX_STACK_LINE(812)
		this->rttHeight = texture->height;
		HX_STACK_LINE(813)
		this->updateScissorRectangle();
		HX_STACK_LINE(814)
		this->updateDepthAndStencilState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setSamplerStateAt",0x9f8ad1f7,"openfl.display3D.Context3D.setSamplerStateAt","openfl/display3D/Context3D.hx",818,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(822)
		bool tmp = ((int)0 <= sampler);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(822)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(822)
		if ((tmp)){
			HX_STACK_LINE(822)
			int tmp2 = sampler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(822)
			int tmp3 = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(822)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(822)
			tmp1 = (tmp2 < tmp4);
		}
		else{
			HX_STACK_LINE(822)
			tmp1 = false;
		}
		HX_STACK_LINE(822)
		if ((tmp1)){
			HX_STACK_LINE(824)
			::openfl::display3D::_Context3D::SamplerState tmp2 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(824)
			tmp2->wrap = wrap;
			HX_STACK_LINE(825)
			::openfl::display3D::_Context3D::SamplerState tmp3 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(825)
			tmp3->filter = filter;
			HX_STACK_LINE(826)
			::openfl::display3D::_Context3D::SamplerState tmp4 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(826)
			tmp4->mipfilter = mipfilter;
		}
		else{
			HX_STACK_LINE(830)
			HX_STACK_DO_THROW(HX_HCSTRING("Sampler is out of bounds.","\xa0","\x80","\xe1","\x15"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setScissorRectangle( ::openfl::_legacy::geom::Rectangle rectangle){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setScissorRectangle",0x712bb5ee,"openfl.display3D.Context3D.setScissorRectangle","openfl/display3D/Context3D.hx",837,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(840)
		this->scissorRectangle = rectangle;
		HX_STACK_LINE(842)
		bool tmp = (rectangle == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(842)
		if ((tmp)){
			HX_STACK_LINE(844)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3089);
			HX_STACK_LINE(845)
			return null();
		}
		HX_STACK_LINE(849)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3089);
		HX_STACK_LINE(850)
		this->updateScissorRectangle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::updateScissorRectangle( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","updateScissorRectangle",0x9654d483,"openfl.display3D.Context3D.updateScissorRectangle","openfl/display3D/Context3D.hx",855,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(857)
		::openfl::_legacy::geom::Rectangle tmp = this->scissorRectangle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(857)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(857)
		if ((tmp1)){
			HX_STACK_LINE(858)
			return null();
		}
		HX_STACK_LINE(861)
		bool tmp2 = this->renderToTexture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(861)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(861)
		if ((tmp2)){
			HX_STACK_LINE(861)
			tmp3 = this->rttHeight;
		}
		else{
			HX_STACK_LINE(861)
			::openfl::_legacy::geom::Rectangle tmp4 = this->scrollRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(861)
			Float tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(861)
			tmp3 = ::Std_obj::_int(tmp5);
		}
		HX_STACK_LINE(861)
		int height = tmp3;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(862)
		{
			HX_STACK_LINE(862)
			::openfl::_legacy::geom::Rectangle tmp4 = this->scissorRectangle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(862)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(862)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(862)
			int x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(863)
			int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(863)
			::openfl::_legacy::geom::Rectangle tmp8 = this->scissorRectangle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(863)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(863)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(863)
			int tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(863)
			::openfl::_legacy::geom::Rectangle tmp12 = this->scissorRectangle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(863)
			Float tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(863)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(863)
			int tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(863)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(863)
			int y = tmp16;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(864)
			::openfl::_legacy::geom::Rectangle tmp17 = this->scissorRectangle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(864)
			Float tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(864)
			int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(864)
			int width = tmp19;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(865)
			::openfl::_legacy::geom::Rectangle tmp20 = this->scissorRectangle;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(865)
			Float tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(865)
			int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(865)
			int height1 = tmp22;		HX_STACK_VAR(height1,"height1");
			HX_STACK_LINE(862)
			int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(862)
			int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(862)
			int tmp25 = width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(862)
			int tmp26 = height1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(862)
			::openfl::_legacy::gl::GL_obj::lime_gl_scissor(tmp23,tmp24,tmp25,tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,updateScissorRectangle,(void))

Void Context3D_obj::setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setStencilActions",0x1fe08e1c,"openfl.display3D.Context3D.setStencilActions","openfl/display3D/Context3D.hx",870,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFace,"triangleFace")
		HX_STACK_ARG(compareMode,"compareMode")
		HX_STACK_ARG(actionOnBothPass,"actionOnBothPass")
		HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail")
		HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail")
		HX_STACK_LINE(872)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(872)
		{
			HX_STACK_LINE(872)
			int s = compareMode;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(872)
			tmp = s;
		}
		HX_STACK_LINE(872)
		this->stencilCompareMode = tmp;
		HX_STACK_LINE(873)
		{
			HX_STACK_LINE(873)
			int fail = actionOnBothPass;		HX_STACK_VAR(fail,"fail");
			HX_STACK_LINE(873)
			int zfail = actionOnDepthFail;		HX_STACK_VAR(zfail,"zfail");
			HX_STACK_LINE(873)
			int zpass = actionOnDepthPassStencilFail;		HX_STACK_VAR(zpass,"zpass");
			HX_STACK_LINE(873)
			int tmp1 = fail;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(873)
			int tmp2 = zfail;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(873)
			int tmp3 = zpass;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(873)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_op(tmp1,tmp2,tmp3);
		}
		HX_STACK_LINE(874)
		{
			HX_STACK_LINE(874)
			int tmp1 = this->stencilCompareMode;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(874)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(874)
			int tmp3 = this->stencilRef;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(874)
			int tmp4 = this->stencilReadMask;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(874)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_FRAME("openfl.display3D.Context3D","setStencilReferenceValue",0xaa284f67,"openfl.display3D.Context3D.setStencilReferenceValue","openfl/display3D/Context3D.hx",879,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(referenceValue,"referenceValue")
	HX_STACK_ARG(readMask,"readMask")
	HX_STACK_ARG(writeMask,"writeMask")
{
		HX_STACK_LINE(881)
		this->stencilReadMask = readMask;
		HX_STACK_LINE(882)
		this->stencilRef = referenceValue;
		HX_STACK_LINE(884)
		{
			HX_STACK_LINE(884)
			int tmp = this->stencilCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(884)
			int tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(884)
			int tmp2 = this->stencilRef;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(884)
			int tmp3 = this->stencilReadMask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(884)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(tmp1,tmp2,tmp3);
		}
		HX_STACK_LINE(885)
		{
			HX_STACK_LINE(885)
			int tmp = writeMask;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(885)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_mask(tmp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureAt",0x38d4bfd3,"openfl.display3D.Context3D.setTextureAt","openfl/display3D/Context3D.hx",890,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(892)
		::String tmp = (HX_HCSTRING("fs","\x4d","\x59","\x00","\x00") + sampler);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(892)
		::String locationName = tmp;		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(893)
		::String tmp1 = locationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(893)
		int tmp3 = sampler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(893)
		this->setGLSLTextureAt(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setTextureParameters( ::openfl::display3D::textures::TextureBase texture,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureParameters",0x0709098a,"openfl.display3D.Context3D.setTextureParameters","openfl/display3D/Context3D.hx",898,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(900)
		bool tmp = ::openfl::display3D::Context3D_obj::anisotropySupportTested;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(900)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(900)
		if ((tmp1)){
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",904,0xc899cbb9)
					{
						HX_STACK_LINE(904)
						Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(904)
						::openfl::_legacy::gl::GL_obj::lime_gl_get_supported_extensions(result);
						HX_STACK_LINE(904)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(904)
			int tmp2 = (_Function_2_1::Block())->indexOf(HX_HCSTRING("GL_EXT_texture_filter_anisotropic","\x66","\x5c","\x79","\xdb"),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(904)
			bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(904)
			::openfl::display3D::Context3D_obj::supportsAnisotropy = tmp3;
			HX_STACK_LINE(906)
			bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(906)
			if ((tmp4)){
				HX_STACK_LINE(910)
				int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(910)
				int tmp6 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(910)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,tmp5,tmp6);
			}
			HX_STACK_LINE(927)
			::openfl::display3D::Context3D_obj::anisotropySupportTested = true;
		}
		HX_STACK_LINE(931)
		::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(931)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(931)
		if ((tmp3)){
			HX_STACK_LINE(933)
			switch( (int)(wrap->__Index())){
				case (int)0: {
					HX_STACK_LINE(937)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
					HX_STACK_LINE(938)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(942)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)10497);
					HX_STACK_LINE(943)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)10497);
				}
				;break;
			}
			HX_STACK_LINE(950)
			switch( (int)(filter->__Index())){
				case (int)4: {
					HX_STACK_LINE(954)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
					HX_STACK_LINE(955)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(955)
					if ((tmp4)){
						HX_STACK_LINE(956)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(956)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,(int)1);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(960)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
					HX_STACK_LINE(961)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(961)
					if ((tmp4)){
						HX_STACK_LINE(962)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(962)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,(int)1);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(966)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(966)
					if ((tmp4)){
						HX_STACK_LINE(967)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(967)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(967)
						{
							HX_STACK_LINE(967)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(967)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(967)
							{
								HX_STACK_LINE(967)
								bool tmp8 = ((int)2 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(967)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(967)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(967)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(967)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(967)
								if ((tmp10)){
									HX_STACK_LINE(967)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(967)
									tmp6 = ((int)2 > a);
								}
							}
						}
						HX_STACK_LINE(967)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(967)
						if ((tmp6)){
							HX_STACK_LINE(967)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(967)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(967)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(967)
							if ((tmp9)){
								HX_STACK_LINE(967)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(967)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(967)
							tmp7 = (int)2;
						}
						HX_STACK_LINE(967)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(971)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(971)
					if ((tmp4)){
						HX_STACK_LINE(972)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(972)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(972)
						{
							HX_STACK_LINE(972)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(972)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(972)
							{
								HX_STACK_LINE(972)
								bool tmp8 = ((int)4 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(972)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(972)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(972)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(972)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(972)
								if ((tmp10)){
									HX_STACK_LINE(972)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(972)
									tmp6 = ((int)4 > a);
								}
							}
						}
						HX_STACK_LINE(972)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(972)
						if ((tmp6)){
							HX_STACK_LINE(972)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(972)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(972)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(972)
							if ((tmp9)){
								HX_STACK_LINE(972)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(972)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(972)
							tmp7 = (int)4;
						}
						HX_STACK_LINE(972)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(976)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(976)
					if ((tmp4)){
						HX_STACK_LINE(977)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(977)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(977)
						{
							HX_STACK_LINE(977)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(977)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(977)
							{
								HX_STACK_LINE(977)
								bool tmp8 = ((int)8 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(977)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(977)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(977)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(977)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(977)
								if ((tmp10)){
									HX_STACK_LINE(977)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(977)
									tmp6 = ((int)8 > a);
								}
							}
						}
						HX_STACK_LINE(977)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(977)
						if ((tmp6)){
							HX_STACK_LINE(977)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(977)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(977)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(977)
							if ((tmp9)){
								HX_STACK_LINE(977)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(977)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(977)
							tmp7 = (int)8;
						}
						HX_STACK_LINE(977)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(981)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(981)
					if ((tmp4)){
						HX_STACK_LINE(982)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(982)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(982)
						{
							HX_STACK_LINE(982)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(982)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(982)
							{
								HX_STACK_LINE(982)
								bool tmp8 = ((int)16 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(982)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(982)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(982)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(982)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(982)
								if ((tmp10)){
									HX_STACK_LINE(982)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(982)
									tmp6 = ((int)16 > a);
								}
							}
						}
						HX_STACK_LINE(982)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(982)
						if ((tmp6)){
							HX_STACK_LINE(982)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(982)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(982)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(982)
							if ((tmp9)){
								HX_STACK_LINE(982)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(982)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(982)
							tmp7 = (int)16;
						}
						HX_STACK_LINE(982)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
			}
			HX_STACK_LINE(986)
			switch( (int)(mipfilter->__Index())){
				case (int)0: {
					HX_STACK_LINE(990)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9987);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(994)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9984);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(998)
					bool tmp4 = (filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(998)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(998)
					if ((tmp4)){
						HX_STACK_LINE(998)
						tmp5 = (int)9728;
					}
					else{
						HX_STACK_LINE(998)
						tmp5 = (int)9729;
					}
					HX_STACK_LINE(998)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,tmp5);
				}
				;break;
			}
			HX_STACK_LINE(1002)
			::openfl::display3D::textures::Texture tex = ((::openfl::display3D::textures::Texture)(texture));		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(1003)
			bool tmp4 = (mipfilter != ::openfl::display3D::Context3DMipFilter_obj::MIPNONE);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1003)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1003)
			if ((tmp4)){
				HX_STACK_LINE(1003)
				bool tmp6 = tex->mipmapsGenerated;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1003)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1003)
				tmp5 = !(tmp7);
			}
			else{
				HX_STACK_LINE(1003)
				tmp5 = false;
			}
			HX_STACK_LINE(1003)
			if ((tmp5)){
				HX_STACK_LINE(1004)
				::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
				HX_STACK_LINE(1005)
				tex->mipmapsGenerated = true;
			}
		}
		else{
			HX_STACK_LINE(1009)
			::openfl::display3D::textures::TextureBase tmp4 = texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1009)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1009)
			if ((tmp5)){
				HX_STACK_LINE(1011)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
				HX_STACK_LINE(1012)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
				HX_STACK_LINE(1014)
				switch( (int)(filter->__Index())){
					case (int)4: {
						HX_STACK_LINE(1018)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
						HX_STACK_LINE(1019)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1019)
						if ((tmp6)){
							HX_STACK_LINE(1020)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1020)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,(int)1);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(1024)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
						HX_STACK_LINE(1025)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1025)
						if ((tmp6)){
							HX_STACK_LINE(1026)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1026)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,(int)1);
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(1030)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1030)
						if ((tmp6)){
							HX_STACK_LINE(1031)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1031)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1031)
							{
								HX_STACK_LINE(1031)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1031)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1031)
								{
									HX_STACK_LINE(1031)
									bool tmp10 = ((int)2 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1031)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(1031)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1031)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(1031)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1031)
									if ((tmp12)){
										HX_STACK_LINE(1031)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(1031)
										tmp8 = ((int)2 > a);
									}
								}
							}
							HX_STACK_LINE(1031)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1031)
							if ((tmp8)){
								HX_STACK_LINE(1031)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1031)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(1031)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1031)
								if ((tmp11)){
									HX_STACK_LINE(1031)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(1031)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(1031)
								tmp9 = (int)2;
							}
							HX_STACK_LINE(1031)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(1035)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1035)
						if ((tmp6)){
							HX_STACK_LINE(1036)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1036)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1036)
							{
								HX_STACK_LINE(1036)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1036)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1036)
								{
									HX_STACK_LINE(1036)
									bool tmp10 = ((int)4 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1036)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(1036)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1036)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(1036)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1036)
									if ((tmp12)){
										HX_STACK_LINE(1036)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(1036)
										tmp8 = ((int)4 > a);
									}
								}
							}
							HX_STACK_LINE(1036)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1036)
							if ((tmp8)){
								HX_STACK_LINE(1036)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1036)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(1036)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1036)
								if ((tmp11)){
									HX_STACK_LINE(1036)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(1036)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(1036)
								tmp9 = (int)4;
							}
							HX_STACK_LINE(1036)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(1040)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1040)
						if ((tmp6)){
							HX_STACK_LINE(1041)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1041)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1041)
							{
								HX_STACK_LINE(1041)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1041)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1041)
								{
									HX_STACK_LINE(1041)
									bool tmp10 = ((int)8 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1041)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(1041)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1041)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(1041)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1041)
									if ((tmp12)){
										HX_STACK_LINE(1041)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(1041)
										tmp8 = ((int)8 > a);
									}
								}
							}
							HX_STACK_LINE(1041)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1041)
							if ((tmp8)){
								HX_STACK_LINE(1041)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1041)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(1041)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1041)
								if ((tmp11)){
									HX_STACK_LINE(1041)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(1041)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(1041)
								tmp9 = (int)8;
							}
							HX_STACK_LINE(1041)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(1045)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1045)
						if ((tmp6)){
							HX_STACK_LINE(1046)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1046)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1046)
							{
								HX_STACK_LINE(1046)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1046)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1046)
								{
									HX_STACK_LINE(1046)
									bool tmp10 = ((int)16 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1046)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(1046)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1046)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(1046)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1046)
									if ((tmp12)){
										HX_STACK_LINE(1046)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(1046)
										tmp8 = ((int)16 > a);
									}
								}
							}
							HX_STACK_LINE(1046)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1046)
							if ((tmp8)){
								HX_STACK_LINE(1046)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1046)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(1046)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1046)
								if ((tmp11)){
									HX_STACK_LINE(1046)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(1046)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(1046)
								tmp9 = (int)16;
							}
							HX_STACK_LINE(1046)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
				}
				HX_STACK_LINE(1050)
				{
					HX_STACK_LINE(1050)
					bool tmp6 = (filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1050)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1050)
					if ((tmp6)){
						HX_STACK_LINE(1050)
						tmp7 = (int)9728;
					}
					else{
						HX_STACK_LINE(1050)
						tmp7 = (int)9729;
					}
					HX_STACK_LINE(1050)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,tmp7);
				}
			}
			else{
				HX_STACK_LINE(1052)
				::openfl::display3D::textures::TextureBase tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1052)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1052)
				if ((tmp7)){
					HX_STACK_LINE(1054)
					switch( (int)(wrap->__Index())){
						case (int)0: {
							HX_STACK_LINE(1058)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)33071);
							HX_STACK_LINE(1059)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)33071);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1063)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)10497);
							HX_STACK_LINE(1064)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)10497);
						}
						;break;
					}
					HX_STACK_LINE(1068)
					switch( (int)(filter->__Index())){
						case (int)4: {
							HX_STACK_LINE(1072)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9729);
							HX_STACK_LINE(1073)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1073)
							if ((tmp8)){
								HX_STACK_LINE(1074)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1074)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,(int)1);
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1078)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9728);
							HX_STACK_LINE(1079)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1079)
							if ((tmp8)){
								HX_STACK_LINE(1080)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1080)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,(int)1);
							}
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(1084)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1084)
							if ((tmp8)){
								HX_STACK_LINE(1085)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1085)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1085)
								{
									HX_STACK_LINE(1085)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1085)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1085)
									{
										HX_STACK_LINE(1085)
										bool tmp12 = ((int)2 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1085)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(1085)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1085)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(1085)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1085)
										if ((tmp14)){
											HX_STACK_LINE(1085)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(1085)
											tmp10 = ((int)2 > a);
										}
									}
								}
								HX_STACK_LINE(1085)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1085)
								if ((tmp10)){
									HX_STACK_LINE(1085)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1085)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(1085)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1085)
									if ((tmp13)){
										HX_STACK_LINE(1085)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(1085)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(1085)
									tmp11 = (int)2;
								}
								HX_STACK_LINE(1085)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1089)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1089)
							if ((tmp8)){
								HX_STACK_LINE(1090)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1090)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1090)
								{
									HX_STACK_LINE(1090)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1090)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1090)
									{
										HX_STACK_LINE(1090)
										bool tmp12 = ((int)4 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1090)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(1090)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1090)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(1090)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1090)
										if ((tmp14)){
											HX_STACK_LINE(1090)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(1090)
											tmp10 = ((int)4 > a);
										}
									}
								}
								HX_STACK_LINE(1090)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1090)
								if ((tmp10)){
									HX_STACK_LINE(1090)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1090)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(1090)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1090)
									if ((tmp13)){
										HX_STACK_LINE(1090)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(1090)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(1090)
									tmp11 = (int)4;
								}
								HX_STACK_LINE(1090)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1094)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1094)
							if ((tmp8)){
								HX_STACK_LINE(1095)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1095)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1095)
								{
									HX_STACK_LINE(1095)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1095)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1095)
									{
										HX_STACK_LINE(1095)
										bool tmp12 = ((int)8 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1095)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(1095)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1095)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(1095)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1095)
										if ((tmp14)){
											HX_STACK_LINE(1095)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(1095)
											tmp10 = ((int)8 > a);
										}
									}
								}
								HX_STACK_LINE(1095)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1095)
								if ((tmp10)){
									HX_STACK_LINE(1095)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1095)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(1095)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1095)
									if ((tmp13)){
										HX_STACK_LINE(1095)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(1095)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(1095)
									tmp11 = (int)8;
								}
								HX_STACK_LINE(1095)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1099)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1099)
							if ((tmp8)){
								HX_STACK_LINE(1100)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1100)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1100)
								{
									HX_STACK_LINE(1100)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1100)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1100)
									{
										HX_STACK_LINE(1100)
										bool tmp12 = ((int)16 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1100)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(1100)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1100)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(1100)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1100)
										if ((tmp14)){
											HX_STACK_LINE(1100)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(1100)
											tmp10 = ((int)16 > a);
										}
									}
								}
								HX_STACK_LINE(1100)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1100)
								if ((tmp10)){
									HX_STACK_LINE(1100)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1100)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(1100)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1100)
									if ((tmp13)){
										HX_STACK_LINE(1100)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(1100)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(1100)
									tmp11 = (int)16;
								}
								HX_STACK_LINE(1100)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
					}
					HX_STACK_LINE(1104)
					switch( (int)(mipfilter->__Index())){
						case (int)0: {
							HX_STACK_LINE(1108)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9987);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1112)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9984);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1116)
							bool tmp8 = (filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1116)
							int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1116)
							if ((tmp8)){
								HX_STACK_LINE(1116)
								tmp9 = (int)9728;
							}
							else{
								HX_STACK_LINE(1116)
								tmp9 = (int)9729;
							}
							HX_STACK_LINE(1116)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,tmp9);
						}
						;break;
					}
					HX_STACK_LINE(1120)
					::openfl::display3D::textures::CubeTexture cubetex = ((::openfl::display3D::textures::CubeTexture)(texture));		HX_STACK_VAR(cubetex,"cubetex");
					HX_STACK_LINE(1121)
					bool tmp8 = (mipfilter != ::openfl::display3D::Context3DMipFilter_obj::MIPNONE);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1121)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1121)
					if ((tmp8)){
						HX_STACK_LINE(1121)
						bool tmp10 = cubetex->mipmapsGenerated;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1121)
						bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1121)
						tmp9 = !(tmp11);
					}
					else{
						HX_STACK_LINE(1121)
						tmp9 = false;
					}
					HX_STACK_LINE(1121)
					if ((tmp9)){
						HX_STACK_LINE(1122)
						::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap((int)34067);
						HX_STACK_LINE(1123)
						cubetex->mipmapsGenerated = true;
					}
				}
				else{
					HX_STACK_LINE(1128)
					::openfl::display3D::textures::TextureBase tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1128)
					::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1128)
					::String tmp10 = ::Type_obj::getClassName(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1128)
					::String tmp11 = (HX_HCSTRING("Texture of type ","\x62","\x88","\x46","\xef") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1128)
					::String tmp12 = (tmp11 + HX_HCSTRING(" not supported yet","\x49","\x2e","\x29","\x7d"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1128)
					HX_STACK_DO_THROW(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setTextureParameters,(void))

Void Context3D_obj::setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setVertexBufferAt",0xbb32fa52,"openfl.display3D.Context3D.setVertexBufferAt","openfl/display3D/Context3D.hx",1135,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(1137)
		::String tmp = (HX_HCSTRING("va","\x2b","\x67","\x00","\x00") + index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1137)
		::String locationName = tmp;		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(1138)
		::String tmp1 = locationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1138)
		::openfl::display3D::VertexBuffer3D tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1138)
		int tmp3 = bufferOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1138)
		::openfl::display3D::Context3DVertexBufferFormat tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1138)
		this->setGLSLVertexBufferAt(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

::String Context3D_obj::__getUniformLocationNameFromAgalRegisterIndex( ::openfl::display3D::Context3DProgramType programType,int firstRegister){
	HX_STACK_FRAME("openfl.display3D.Context3D","__getUniformLocationNameFromAgalRegisterIndex",0x072a804f,"openfl.display3D.Context3D.__getUniformLocationNameFromAgalRegisterIndex","openfl/display3D/Context3D.hx",1143,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_LINE(1145)
	bool tmp = (programType == ::openfl::display3D::Context3DProgramType_obj::VERTEX);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1145)
	if ((tmp)){
		HX_STACK_LINE(1147)
		::String tmp1 = (HX_HCSTRING("vc","\x2d","\x67","\x00","\x00") + firstRegister);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1147)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1149)
		bool tmp1 = (programType == ::openfl::display3D::Context3DProgramType_obj::FRAGMENT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1149)
		if ((tmp1)){
			HX_STACK_LINE(1151)
			::String tmp2 = (HX_HCSTRING("fc","\x3d","\x59","\x00","\x00") + firstRegister);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1151)
			return tmp2;
		}
	}
	HX_STACK_LINE(1155)
	::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1155)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1155)
	::String tmp3 = (HX_HCSTRING("Program Type ","\x4a","\xc1","\x72","\x1b") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1155)
	::String tmp4 = (tmp3 + HX_HCSTRING(" not supported","\xc1","\x3c","\x82","\x53"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1155)
	HX_STACK_DO_THROW(tmp4);
	HX_STACK_LINE(1155)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__getUniformLocationNameFromAgalRegisterIndex,return )

Void Context3D_obj::__updateBlendStatus( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateBlendStatus",0x3fc75d73,"openfl.display3D.Context3D.__updateBlendStatus","openfl/display3D/Context3D.hx",1160,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1164)
		bool tmp = this->blendEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1164)
		if ((tmp)){
			HX_STACK_LINE(1166)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3042);
			HX_STACK_LINE(1167)
			::openfl::_legacy::gl::GL_obj::lime_gl_blend_equation((int)32774);
			HX_STACK_LINE(1168)
			{
				HX_STACK_LINE(1168)
				int tmp1 = this->blendSourceFactor;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1168)
				int tmp2 = this->blendDestinationFactor;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1168)
				::openfl::_legacy::gl::GL_obj::lime_gl_blend_func(tmp1,tmp2);
			}
		}
		else{
			HX_STACK_LINE(1172)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBlendStatus,(void))

int Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;

int Context3D_obj::MAX_SAMPLERS;

int Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT;

bool Context3D_obj::anisotropySupportTested;

bool Context3D_obj::supportsAnisotropy;

int Context3D_obj::maxSupportedAnisotropy;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_MARK_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_MARK_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_MARK_MEMBER_NAME(currentProgram,"currentProgram");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_MARK_MEMBER_NAME(ogl,"ogl");
	HX_MARK_MEMBER_NAME(programsCreated,"programsCreated");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(stencilRef,"stencilRef");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_MARK_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_MARK_MEMBER_NAME(_yFlip,"_yFlip");
	HX_MARK_MEMBER_NAME(backBufferDepthAndStencil,"backBufferDepthAndStencil");
	HX_MARK_MEMBER_NAME(rttDepthAndStencil,"rttDepthAndStencil");
	HX_MARK_MEMBER_NAME(scissorRectangle,"scissorRectangle");
	HX_MARK_MEMBER_NAME(renderToTexture,"renderToTexture");
	HX_MARK_MEMBER_NAME(rttWidth,"rttWidth");
	HX_MARK_MEMBER_NAME(rttHeight,"rttHeight");
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_VISIT_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_VISIT_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_VISIT_MEMBER_NAME(currentProgram,"currentProgram");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_VISIT_MEMBER_NAME(ogl,"ogl");
	HX_VISIT_MEMBER_NAME(programsCreated,"programsCreated");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(stencilRef,"stencilRef");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_VISIT_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_VISIT_MEMBER_NAME(_yFlip,"_yFlip");
	HX_VISIT_MEMBER_NAME(backBufferDepthAndStencil,"backBufferDepthAndStencil");
	HX_VISIT_MEMBER_NAME(rttDepthAndStencil,"rttDepthAndStencil");
	HX_VISIT_MEMBER_NAME(scissorRectangle,"scissorRectangle");
	HX_VISIT_MEMBER_NAME(renderToTexture,"renderToTexture");
	HX_VISIT_MEMBER_NAME(rttWidth,"rttWidth");
	HX_VISIT_MEMBER_NAME(rttHeight,"rttHeight");
}

Dynamic Context3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { return ogl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { return _yFlip; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		if (HX_FIELD_EQ(inName,"rttWidth") ) { return rttWidth; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rttHeight") ) { return rttHeight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { return stencilRef; }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { return blendEnabled; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { return stencilbuffer; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { return currentProgram; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { return programsCreated; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return stencilReadMask; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { return texturesCreated; }
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { return renderToTexture; }
		if (HX_FIELD_EQ(inName,"__deleteTexture") ) { return __deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__deleteProgram") ) { return __deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderMethod") ) { return setRenderMethod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"scissorRectangle") ) { return scissorRectangle; }
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setGLSLTextureAt") ) { return setGLSLTextureAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { return blendSourceFactor; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { return samplerParameters; }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return stencilCompareMode; }
		if (HX_FIELD_EQ(inName,"rttDepthAndStencil") ) { return rttDepthAndStencil; }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderMethod") ) { return removeRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { return indexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"__deleteIndexBuffer") ) { return __deleteIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateBlendStatus") ) { return __updateBlendStatus_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { return vertexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"__deleteVertexBuffer") ) { return __deleteVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureParameters") ) { return setTextureParameters_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setBackBufferViewPort") ) { return setBackBufferViewPort_dyn(); }
		if (HX_FIELD_EQ(inName,"setGLSLVertexBufferAt") ) { return setGLSLVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { return blendDestinationFactor; }
		if (HX_FIELD_EQ(inName,"createRectangleTexture") ) { return createRectangleTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScissorRectangle") ) { return updateScissorRectangle_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"updateBackBufferViewPort") ) { return updateBackBufferViewPort_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"backBufferDepthAndStencil") ) { return backBufferDepthAndStencil; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"updateDepthAndStencilState") ) { return updateDepthAndStencilState_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromMatrix") ) { return setGLSLProgramConstantsFromMatrix_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromVector4") ) { return setGLSLProgramConstantsFromVector4_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromByteArray") ) { return setGLSLProgramConstantsFromByteArray_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"__getUniformLocationNameFromAgalRegisterIndex") ) { return __getUniformLocationNameFromAgalRegisterIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Context3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { outValue = MAX_SAMPLERS; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { outValue = supportsAnisotropy; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { outValue = maxSupportedAnisotropy; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { outValue = anisotropySupportTested; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = MAX_TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
	}
	return false;
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { ogl=inValue.Cast< ::openfl::_legacy::display::OpenGLView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { _yFlip=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rttWidth") ) { rttWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rttHeight") ) { rttHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { stencilRef=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { blendEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { stencilbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { currentProgram=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { programsCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { texturesCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { renderToTexture=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"scissorRectangle") ) { scissorRectangle=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { blendSourceFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { samplerParameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rttDepthAndStencil") ) { rttDepthAndStencil=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { indexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { vertexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { blendDestinationFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"backBufferDepthAndStencil") ) { backBufferDepthAndStencil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Context3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { MAX_SAMPLERS=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { supportsAnisotropy=ioValue.Cast< bool >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { maxSupportedAnisotropy=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { anisotropySupportTested=ioValue.Cast< bool >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { MAX_TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"));
	outFields->push(HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"));
	outFields->push(HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77"));
	outFields->push(HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad"));
	outFields->push(HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78"));
	outFields->push(HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01"));
	outFields->push(HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86"));
	outFields->push(HX_HCSTRING("ogl","\x54","\x94","\x54","\x00"));
	outFields->push(HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	outFields->push(HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc"));
	outFields->push(HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"));
	outFields->push(HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8"));
	outFields->push(HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d"));
	outFields->push(HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d"));
	outFields->push(HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5"));
	outFields->push(HX_HCSTRING("backBufferDepthAndStencil","\x01","\xd0","\x42","\x4d"));
	outFields->push(HX_HCSTRING("rttDepthAndStencil","\x76","\xac","\x03","\xef"));
	outFields->push(HX_HCSTRING("scissorRectangle","\x73","\xa8","\x68","\x0c"));
	outFields->push(HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7"));
	outFields->push(HX_HCSTRING("rttWidth","\x34","\xa2","\x26","\x0f"));
	outFields->push(HX_HCSTRING("rttHeight","\xf9","\xc3","\xf6","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Context3D_obj,driverInfo),HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3")},
	{hx::fsBool,(int)offsetof(Context3D_obj,enableErrorChecking),HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendDestinationFactor),HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77")},
	{hx::fsBool,(int)offsetof(Context3D_obj,blendEnabled),HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendSourceFactor),HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3D_obj,currentProgram),HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01")},
	{hx::fsBool,(int)offsetof(Context3D_obj,disposed),HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27")},
	{hx::fsBool,(int)offsetof(Context3D_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(Context3D_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,indexBuffersCreated),HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86")},
	{hx::fsObject /*::openfl::_legacy::display::OpenGLView*/ ,(int)offsetof(Context3D_obj,ogl),HX_HCSTRING("ogl","\x54","\x94","\x54","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,programsCreated),HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,samplerParameters),HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,scrollRect),HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,stencilbuffer),HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilCompareMode),HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilRef),HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilReadMask),HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,texturesCreated),HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,vertexBuffersCreated),HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d")},
	{hx::fsFloat,(int)offsetof(Context3D_obj,_yFlip),HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5")},
	{hx::fsBool,(int)offsetof(Context3D_obj,backBufferDepthAndStencil),HX_HCSTRING("backBufferDepthAndStencil","\x01","\xd0","\x42","\x4d")},
	{hx::fsBool,(int)offsetof(Context3D_obj,rttDepthAndStencil),HX_HCSTRING("rttDepthAndStencil","\x76","\xac","\x03","\xef")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,scissorRectangle),HX_HCSTRING("scissorRectangle","\x73","\xa8","\x68","\x0c")},
	{hx::fsBool,(int)offsetof(Context3D_obj,renderToTexture),HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7")},
	{hx::fsInt,(int)offsetof(Context3D_obj,rttWidth),HX_HCSTRING("rttWidth","\x34","\xa2","\x26","\x0f")},
	{hx::fsInt,(int)offsetof(Context3D_obj,rttHeight),HX_HCSTRING("rttHeight","\xf9","\xc3","\xf6","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_SAMPLERS,HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3")},
	{hx::fsBool,(void *) &Context3D_obj::anisotropySupportTested,HX_HCSTRING("anisotropySupportTested","\x3e","\xcd","\x45","\xae")},
	{hx::fsBool,(void *) &Context3D_obj::supportsAnisotropy,HX_HCSTRING("supportsAnisotropy","\xa6","\x0a","\x42","\xa9")},
	{hx::fsInt,(void *) &Context3D_obj::maxSupportedAnisotropy,HX_HCSTRING("maxSupportedAnisotropy","\x8c","\xab","\x46","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"),
	HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"),
	HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77"),
	HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad"),
	HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78"),
	HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01"),
	HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86"),
	HX_HCSTRING("ogl","\x54","\x94","\x54","\x00"),
	HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0"),
	HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"),
	HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc"),
	HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"),
	HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8"),
	HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"),
	HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d"),
	HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d"),
	HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5"),
	HX_HCSTRING("backBufferDepthAndStencil","\x01","\xd0","\x42","\x4d"),
	HX_HCSTRING("rttDepthAndStencil","\x76","\xac","\x03","\xef"),
	HX_HCSTRING("scissorRectangle","\x73","\xa8","\x68","\x0c"),
	HX_HCSTRING("renderToTexture","\x6a","\x5a","\x1d","\xb7"),
	HX_HCSTRING("rttWidth","\x34","\xa2","\x26","\x0f"),
	HX_HCSTRING("rttHeight","\xf9","\xc3","\xf6","\xe8"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("configureBackBuffer","\x0d","\x3c","\x11","\x04"),
	HX_HCSTRING("setBackBufferViewPort","\x6f","\x86","\x32","\x73"),
	HX_HCSTRING("updateBackBufferViewPort","\x96","\x16","\xe6","\x25"),
	HX_HCSTRING("updateDepthAndStencilState","\xd2","\xe2","\xf3","\x5f"),
	HX_HCSTRING("createCubeTexture","\xca","\x46","\x30","\xc8"),
	HX_HCSTRING("createIndexBuffer","\x16","\x40","\x47","\x48"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRectangleTexture","\x88","\x8b","\xb3","\xf2"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createVertexBuffer","\xa0","\xec","\xc7","\x6a"),
	HX_HCSTRING("__deleteTexture","\xd0","\x94","\x1c","\x85"),
	HX_HCSTRING("__deleteVertexBuffer","\x6f","\x6b","\x3d","\x7c"),
	HX_HCSTRING("__deleteIndexBuffer","\x27","\xd0","\x4f","\x7e"),
	HX_HCSTRING("__deleteProgram","\x79","\x16","\x35","\xda"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("drawToBitmapData","\x38","\x55","\xb6","\xf4"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"),
	HX_HCSTRING("removeRenderMethod","\x3b","\x39","\xe7","\xc4"),
	HX_HCSTRING("setBlendFactors","\x35","\x4b","\xcd","\xf5"),
	HX_HCSTRING("setColorMask","\xed","\x8b","\x13","\x48"),
	HX_HCSTRING("setCulling","\xee","\x06","\x67","\xa6"),
	HX_HCSTRING("setDepthTest","\xf3","\xe2","\xcc","\xc7"),
	HX_HCSTRING("setGLSLProgramConstantsFromByteArray","\x7c","\x29","\xc4","\xae"),
	HX_HCSTRING("setGLSLProgramConstantsFromMatrix","\x56","\xa9","\x13","\x3b"),
	HX_HCSTRING("setGLSLProgramConstantsFromVector4","\x5c","\x39","\x56","\xbd"),
	HX_HCSTRING("setGLSLTextureAt","\xee","\x0b","\xfe","\x84"),
	HX_HCSTRING("setGLSLVertexBufferAt","\x57","\xec","\x78","\xa5"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setProgramConstantsFromByteArray","\x3a","\x1f","\x12","\xd4"),
	HX_HCSTRING("setProgramConstantsFromMatrix","\xd8","\xd0","\x45","\xbe"),
	HX_HCSTRING("setProgramConstantsFromVector","\x5a","\x4b","\xdb","\x99"),
	HX_HCSTRING("setRenderMethod","\x99","\xcd","\x66","\x97"),
	HX_HCSTRING("setRenderToBackBuffer","\x9a","\x84","\xfb","\xad"),
	HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"),
	HX_HCSTRING("setSamplerStateAt","\x7e","\x30","\x51","\xac"),
	HX_HCSTRING("setScissorRectangle","\x35","\x04","\x2c","\x03"),
	HX_HCSTRING("updateScissorRectangle","\x9c","\x6c","\xe7","\x01"),
	HX_HCSTRING("setStencilActions","\xa3","\xec","\xa6","\x2c"),
	HX_HCSTRING("setStencilReferenceValue","\xc0","\xdf","\xa3","\x11"),
	HX_HCSTRING("setTextureAt","\xac","\xee","\x98","\xd3"),
	HX_HCSTRING("setTextureParameters","\x63","\x39","\x4d","\x35"),
	HX_HCSTRING("setVertexBufferAt","\xd9","\x58","\xf9","\xc7"),
	HX_HCSTRING("__getUniformLocationNameFromAgalRegisterIndex","\x56","\xcb","\xdc","\xc4"),
	HX_HCSTRING("__updateBlendStatus","\xba","\xab","\xc7","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_MARK_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_VISIT_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#endif

hx::Class Context3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"),
	HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06"),
	HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3"),
	HX_HCSTRING("anisotropySupportTested","\x3e","\xcd","\x45","\xae"),
	HX_HCSTRING("supportsAnisotropy","\xa6","\x0a","\x42","\xa9"),
	HX_HCSTRING("maxSupportedAnisotropy","\x8c","\xab","\x46","\xa0"),
	::String(null()) };

void Context3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3D_obj >;
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

void Context3D_obj::__boot()
{
	TEXTURE_MAX_ANISOTROPY_EXT= (int)34046;
	MAX_SAMPLERS= (int)8;
	MAX_TEXTURE_MAX_ANISOTROPY_EXT= (int)34047;
	anisotropySupportTested= false;
	supportsAnisotropy= false;
	maxSupportedAnisotropy= (int)256;
}

} // end namespace openfl
} // end namespace display3D
