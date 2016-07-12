#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_GradientType
#include <openfl/_legacy/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IGraphicsData
#include <openfl/_legacy/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#include <openfl/_legacy/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_SpreadMethod
#include <openfl/_legacy/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TriangleCulling
#include <openfl/_legacy/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

Void Graphics_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("openfl._legacy.display.Graphics","new",0xc2447aed,"openfl._legacy.display.Graphics.new","openfl/_legacy/display/Graphics.hx",31,0x485def00)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(31)
	this->__handle = handle;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(handle);
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphics_obj::arcTo( Float controlX,Float controlY,Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","arcTo",0xc4de283a,"openfl._legacy.display.Graphics.arcTo","openfl/_legacy/display/Graphics.hx",36,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(38)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		Float tmp1 = controlX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		Float tmp2 = controlY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_arc_to(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,arcTo,(void))

Void Graphics_obj::beginBitmapFill( ::openfl::_legacy::display::BitmapData bitmap,::openfl::_legacy::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.Graphics","beginBitmapFill",0x925493a8,"openfl._legacy.display.Graphics.beginBitmapFill","openfl/_legacy/display/Graphics.hx",43,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(45)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		Dynamic tmp1 = bitmap->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = repeat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4 = smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_begin_bitmap_fill(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( int color,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("openfl._legacy.display.Graphics","beginFill",0x8ab43f99,"openfl._legacy.display.Graphics.beginFill","openfl/_legacy/display/Graphics.hx",50,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(52)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		int tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_begin_fill(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( ::openfl::_legacy::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::display::SpreadMethod spreadMethod,::openfl::_legacy::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(((Float)0.0));
	HX_STACK_FRAME("openfl._legacy.display.Graphics","beginGradientFill",0x9aa063a9,"openfl._legacy.display.Graphics.beginGradientFill","openfl/_legacy/display/Graphics.hx",57,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(59)
		bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		if ((tmp)){
			HX_STACK_LINE(61)
			::openfl::_legacy::geom::Matrix tmp1 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(61)
			matrix = tmp1;
			HX_STACK_LINE(62)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(66)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		bool tmp3 = (spreadMethod == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		if ((tmp3)){
			HX_STACK_LINE(66)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(66)
			tmp4 = spreadMethod->__Index();
		}
		HX_STACK_LINE(66)
		bool tmp5 = (interpolationMethod == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		if ((tmp5)){
			HX_STACK_LINE(66)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(66)
			tmp6 = interpolationMethod->__Index();
		}
		HX_STACK_LINE(66)
		Float tmp7 = focalPointRatio;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_begin_gradient_fill(tmp1,type->__Index(),colors,alphas,ratios,tmp2,tmp4,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","clear",0xe7b5995a,"openfl._legacy.display.Graphics.clear","openfl/_legacy/display/Graphics.hx",71,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_clear(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::_legacy::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","copyFrom",0x0c1a0212,"openfl._legacy.display.Graphics.copyFrom","openfl/_legacy/display/Graphics.hx",80,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(80)
		::openfl::_legacy::Lib_obj::notImplemented(HX_HCSTRING("Graphics.copyFrom","\xa2","\xbf","\x2d","\xd9"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","cubicCurveTo",0x0b3e23b3,"openfl._legacy.display.Graphics.cubicCurveTo","openfl/_legacy/display/Graphics.hx",87,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(87)
		::openfl::_legacy::Lib_obj::notImplemented(HX_HCSTRING("Graphics.cubicCurveTo","\x43","\xe9","\x27","\x03"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","curveTo",0x9695d517,"openfl._legacy.display.Graphics.curveTo","openfl/_legacy/display/Graphics.hx",92,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(94)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Float tmp1 = controlX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		Float tmp2 = controlY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Float tmp3 = anchorX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Float tmp4 = anchorY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_curve_to(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawCircle",0xf4725e47,"openfl._legacy.display.Graphics.drawCircle","openfl/_legacy/display/Graphics.hx",99,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(101)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		Float tmp1 = (x - radius);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		Float tmp2 = (y - radius);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		Float tmp3 = (radius * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		Float tmp4 = (radius * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(101)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_ellipse(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawEllipse",0x057004c7,"openfl._legacy.display.Graphics.drawEllipse","openfl/_legacy/display/Graphics.hx",106,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(108)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_ellipse(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::Dynamic > graphicsData){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawGraphicsData",0x7b52ac0c,"openfl._legacy.display.Graphics.drawGraphicsData","openfl/_legacy/display/Graphics.hx",113,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(115)
		cpp::ArrayBase handles = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(handles,"handles");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				bool tmp = (_g < graphicsData->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(117)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(117)
				if ((tmp1)){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				::openfl::_legacy::display::IGraphicsData tmp2 = graphicsData->__get(_g).StaticCast< ::openfl::_legacy::display::IGraphicsData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(117)
				::openfl::_legacy::display::IGraphicsData datum = tmp2;		HX_STACK_VAR(datum,"datum");
				HX_STACK_LINE(117)
				++(_g);
				HX_STACK_LINE(119)
				Dynamic tmp3 = datum->__handle;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(119)
				handles->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
			}
		}
		HX_STACK_LINE(123)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_data(tmp,handles);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawGraphicsDatum( ::openfl::_legacy::display::IGraphicsData graphicsDatum){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawGraphicsDatum",0x6d03f04d,"openfl._legacy.display.Graphics.drawGraphicsDatum","openfl/_legacy/display/Graphics.hx",128,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsDatum,"graphicsDatum")
		HX_STACK_LINE(130)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		Dynamic tmp1 = graphicsDatum->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_datum(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsDatum,(void))

Void Graphics_obj::drawPoints( Array< Float > xy,Array< int > pointRGBA,hx::Null< int >  __o_defaultRGBA,hx::Null< Float >  __o_size){
int defaultRGBA = __o_defaultRGBA.Default(-1);
Float size = __o_size.Default(((Float)-1.0));
	HX_STACK_FRAME("openfl._legacy.display.Graphics","drawPoints",0x9592fe5a,"openfl._legacy.display.Graphics.drawPoints","openfl/_legacy/display/Graphics.hx",135,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xy,"xy")
	HX_STACK_ARG(pointRGBA,"pointRGBA")
	HX_STACK_ARG(defaultRGBA,"defaultRGBA")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(137)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		int tmp1 = defaultRGBA;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		Float tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_points(tmp,xy,pointRGBA,tmp1,false,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawPoints,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawRect",0xa3c9ed9b,"openfl._legacy.display.Graphics.drawRect","openfl/_legacy/display/Graphics.hx",142,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(144)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(144)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_rect(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float radiusX,Dynamic radiusY){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawRoundRect",0x1e5500bb,"openfl._legacy.display.Graphics.drawRoundRect","openfl/_legacy/display/Graphics.hx",149,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(radiusX,"radiusX")
		HX_STACK_ARG(radiusY,"radiusY")
		HX_STACK_LINE(151)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(151)
		Float tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		Float tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		Float tmp5 = radiusX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		bool tmp6 = (radiusY == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		if ((tmp6)){
			HX_STACK_LINE(151)
			tmp7 = radiusX;
		}
		else{
			HX_STACK_LINE(151)
			tmp7 = radiusY;
		}
		HX_STACK_LINE(151)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_round_rect(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawRoundRectComplex",0x9ee6eab5,"openfl._legacy.display.Graphics.drawRoundRectComplex","openfl/_legacy/display/Graphics.hx",158,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(158)
		::openfl::_legacy::Lib_obj::notImplemented(HX_HCSTRING("Graphics.drawRoundRectComplex","\x45","\xc0","\x68","\x95"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::String winding){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","drawPath",0xa274861c,"openfl._legacy.display.Graphics.drawPath","openfl/_legacy/display/Graphics.hx",163,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(commands,"commands")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(165)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = (winding == HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_path(tmp,commands,data,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawTiles( ::openfl::_legacy::display::Tilesheet sheet,Array< Float > data,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._legacy.display.Graphics","drawTiles",0xd65ec52e,"openfl._legacy.display.Graphics.drawTiles","openfl/_legacy/display/Graphics.hx",170,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(172)
		::openfl::_legacy::display::BitmapData tmp = sheet->__bitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = smooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		this->beginBitmapFill(tmp,null(),false,tmp1);
		HX_STACK_LINE(174)
		bool tmp2 = smooth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		if ((tmp2)){
			HX_STACK_LINE(176)
			hx::OrEq(flags,(int)4096);
		}
		HX_STACK_LINE(180)
		Dynamic tmp3 = this->__handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		Dynamic tmp4 = sheet->__handle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		int tmp5 = flags;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		int tmp6 = count;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_tiles(tmp3,tmp4,data,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::_legacy::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  __o_blendMode){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("openfl._legacy.display.Graphics","drawTriangles",0x1a1280d4,"openfl._legacy.display.Graphics.drawTriangles","openfl/_legacy/display/Graphics.hx",184,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(186)
		bool tmp = (culling == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		if ((tmp)){
			HX_STACK_LINE(186)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(186)
			tmp1 = (culling->__Index() - (int)1);
		}
		HX_STACK_LINE(186)
		int cull = tmp1;		HX_STACK_VAR(cull,"cull");
		HX_STACK_LINE(187)
		Dynamic tmp2 = this->__handle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		int tmp3 = cull;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		int tmp4 = blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_draw_triangles(tmp2,vertices,indices,uvtData,tmp3,colors,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","endFill",0xededfd0b,"openfl._legacy.display.Graphics.endFill","openfl/_legacy/display/Graphics.hx",192,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_end_fill(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::_legacy::display::BitmapData bitmap,::openfl::_legacy::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl._legacy.display.Graphics","lineBitmapStyle",0x6d6e093b,"openfl._legacy.display.Graphics.lineBitmapStyle","openfl/_legacy/display/Graphics.hx",199,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(201)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		Dynamic tmp1 = bitmap->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		bool tmp3 = repeat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		bool tmp4 = smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_line_bitmap_fill(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( ::openfl::_legacy::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::openfl::_legacy::geom::Matrix matrix,::openfl::_legacy::display::SpreadMethod spreadMethod,::openfl::_legacy::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(((Float)0.0));
	HX_STACK_FRAME("openfl._legacy.display.Graphics","lineGradientStyle",0x2e8f4bda,"openfl._legacy.display.Graphics.lineGradientStyle","openfl/_legacy/display/Graphics.hx",206,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(208)
		bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		if ((tmp)){
			HX_STACK_LINE(210)
			::openfl::_legacy::geom::Matrix tmp1 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			matrix = tmp1;
			HX_STACK_LINE(211)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(215)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		::openfl::_legacy::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		bool tmp3 = (spreadMethod == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		if ((tmp3)){
			HX_STACK_LINE(215)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(215)
			tmp4 = spreadMethod->__Index();
		}
		HX_STACK_LINE(215)
		bool tmp5 = (interpolationMethod == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(215)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		if ((tmp5)){
			HX_STACK_LINE(215)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(215)
			tmp6 = interpolationMethod->__Index();
		}
		HX_STACK_LINE(215)
		Float tmp7 = focalPointRatio;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_line_gradient_fill(tmp1,type->__Index(),colors,alphas,ratios,tmp2,tmp4,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,::openfl::_legacy::display::LineScaleMode scaleMode,::openfl::_legacy::display::CapsStyle caps,::openfl::_legacy::display::JointStyle joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(((Float)1.0));
bool pixelHinting = __o_pixelHinting.Default(false);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_FRAME("openfl._legacy.display.Graphics","lineStyle",0xc9373aea,"openfl._legacy.display.Graphics.lineStyle","openfl/_legacy/display/Graphics.hx",220,0x485def00)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(pixelHinting,"pixelHinting")
	HX_STACK_ARG(scaleMode,"scaleMode")
	HX_STACK_ARG(caps,"caps")
	HX_STACK_ARG(joints,"joints")
	HX_STACK_ARG(miterLimit,"miterLimit")
{
		HX_STACK_LINE(222)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		Dynamic tmp1 = thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		int tmp2 = color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		bool tmp4 = pixelHinting;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		bool tmp5 = (scaleMode == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		if ((tmp5)){
			HX_STACK_LINE(222)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(222)
			tmp6 = scaleMode->__Index();
		}
		HX_STACK_LINE(222)
		bool tmp7 = (caps == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		if ((tmp7)){
			HX_STACK_LINE(222)
			tmp8 = (int)0;
		}
		else{
			HX_STACK_LINE(222)
			tmp8 = caps->__Index();
		}
		HX_STACK_LINE(222)
		bool tmp9 = (joints == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		if ((tmp9)){
			HX_STACK_LINE(222)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(222)
			tmp10 = joints->__Index();
		}
		HX_STACK_LINE(222)
		Float tmp11 = miterLimit;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_line_style(tmp,tmp1,tmp2,tmp3,tmp4,tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","lineTo",0xbc28f222,"openfl._legacy.display.Graphics.lineTo","openfl/_legacy/display/Graphics.hx",227,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(229)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_line_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._legacy.display.Graphics","moveTo",0x9c357e7f,"openfl._legacy.display.Graphics.moveTo","openfl/_legacy/display/Graphics.hx",234,0x485def00)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(236)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		::openfl::_legacy::display::Graphics_obj::lime_gfx_move_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_SMOOTH;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;

int Graphics_obj::RGBA( int rgb,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("openfl._legacy.display.Graphics","RGBA",0x270e2987,"openfl._legacy.display.Graphics.RGBA","openfl/_legacy/display/Graphics.hx",241,0x485def00)
	HX_STACK_ARG(rgb,"rgb")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(243)
		int tmp = rgb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		int tmp1 = (int(alpha) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(243)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,RGBA,return )

Dynamic Graphics_obj::lime_gfx_clear;

Dynamic Graphics_obj::lime_gfx_begin_fill;

Dynamic Graphics_obj::lime_gfx_begin_bitmap_fill;

Dynamic Graphics_obj::lime_gfx_line_bitmap_fill;

Dynamic Graphics_obj::lime_gfx_begin_gradient_fill;

Dynamic Graphics_obj::lime_gfx_line_gradient_fill;

Dynamic Graphics_obj::lime_gfx_end_fill;

Dynamic Graphics_obj::lime_gfx_line_style;

Dynamic Graphics_obj::lime_gfx_move_to;

Dynamic Graphics_obj::lime_gfx_line_to;

Dynamic Graphics_obj::lime_gfx_curve_to;

Dynamic Graphics_obj::lime_gfx_arc_to;

Dynamic Graphics_obj::lime_gfx_draw_ellipse;

Dynamic Graphics_obj::lime_gfx_draw_data;

Dynamic Graphics_obj::lime_gfx_draw_datum;

Dynamic Graphics_obj::lime_gfx_draw_rect;

Dynamic Graphics_obj::lime_gfx_draw_path;

Dynamic Graphics_obj::lime_gfx_draw_tiles;

Dynamic Graphics_obj::lime_gfx_draw_points;

Dynamic Graphics_obj::lime_gfx_draw_round_rect;

Dynamic Graphics_obj::lime_gfx_draw_triangles;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPoints") ) { return drawPoints_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphicsDatum") ) { return drawGraphicsDatum_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { outValue = RGBA_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gfx_clear") ) { outValue = lime_gfx_clear; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gfx_arc_to") ) { outValue = lime_gfx_arc_to; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gfx_move_to") ) { outValue = lime_gfx_move_to; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_to") ) { outValue = lime_gfx_line_to; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gfx_end_fill") ) { outValue = lime_gfx_end_fill; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_curve_to") ) { outValue = lime_gfx_curve_to; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_data") ) { outValue = lime_gfx_draw_data; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_rect") ) { outValue = lime_gfx_draw_rect; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_path") ) { outValue = lime_gfx_draw_path; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_fill") ) { outValue = lime_gfx_begin_fill; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_style") ) { outValue = lime_gfx_line_style; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_datum") ) { outValue = lime_gfx_draw_datum; return true;  }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_tiles") ) { outValue = lime_gfx_draw_tiles; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_points") ) { outValue = lime_gfx_draw_points; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_ellipse") ) { outValue = lime_gfx_draw_ellipse; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_triangles") ) { outValue = lime_gfx_draw_triangles; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_round_rect") ) { outValue = lime_gfx_draw_round_rect; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_bitmap_fill") ) { outValue = lime_gfx_line_bitmap_fill; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_bitmap_fill") ) { outValue = lime_gfx_begin_bitmap_fill; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_gradient_fill") ) { outValue = lime_gfx_line_gradient_fill; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_gradient_fill") ) { outValue = lime_gfx_begin_gradient_fill; return true;  }
	}
	return false;
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gfx_clear") ) { lime_gfx_clear=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gfx_arc_to") ) { lime_gfx_arc_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gfx_move_to") ) { lime_gfx_move_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_to") ) { lime_gfx_line_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gfx_end_fill") ) { lime_gfx_end_fill=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_curve_to") ) { lime_gfx_curve_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_data") ) { lime_gfx_draw_data=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_rect") ) { lime_gfx_draw_rect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_path") ) { lime_gfx_draw_path=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_fill") ) { lime_gfx_begin_fill=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_style") ) { lime_gfx_line_style=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_datum") ) { lime_gfx_draw_datum=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_tiles") ) { lime_gfx_draw_tiles=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_points") ) { lime_gfx_draw_points=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_ellipse") ) { lime_gfx_draw_ellipse=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_triangles") ) { lime_gfx_draw_triangles=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_round_rect") ) { lime_gfx_draw_round_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_bitmap_fill") ) { lime_gfx_line_bitmap_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_bitmap_fill") ) { lime_gfx_begin_bitmap_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_gradient_fill") ) { lime_gfx_line_gradient_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_gradient_fill") ) { lime_gfx_begin_gradient_fill=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Graphics_obj,__handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Graphics_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_SMOOTH,HX_HCSTRING("TILE_SMOOTH","\x5f","\x14","\xe0","\x50")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_clear,HX_HCSTRING("lime_gfx_clear","\x1d","\x3a","\x84","\x5a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_begin_fill,HX_HCSTRING("lime_gfx_begin_fill","\x09","\xb9","\xce","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_begin_bitmap_fill,HX_HCSTRING("lime_gfx_begin_bitmap_fill","\x4d","\xca","\xdb","\xd0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_line_bitmap_fill,HX_HCSTRING("lime_gfx_line_bitmap_fill","\x78","\x7d","\x1a","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_begin_gradient_fill,HX_HCSTRING("lime_gfx_begin_gradient_fill","\x2c","\x3f","\xa0","\x55")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_line_gradient_fill,HX_HCSTRING("lime_gfx_line_gradient_fill","\x17","\x53","\x52","\x49")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_end_fill,HX_HCSTRING("lime_gfx_end_fill","\x17","\xfe","\x4f","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_line_style,HX_HCSTRING("lime_gfx_line_style","\xd6","\xa0","\x7e","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_move_to,HX_HCSTRING("lime_gfx_move_to","\xb9","\x25","\xec","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_line_to,HX_HCSTRING("lime_gfx_line_to","\xb6","\xe0","\xfd","\xa3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_curve_to,HX_HCSTRING("lime_gfx_curve_to","\xbb","\xf7","\x86","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_arc_to,HX_HCSTRING("lime_gfx_arc_to","\xf8","\x71","\x8b","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_ellipse,HX_HCSTRING("lime_gfx_draw_ellipse","\xd3","\xd3","\xe0","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_data,HX_HCSTRING("lime_gfx_draw_data","\x15","\x88","\x32","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_datum,HX_HCSTRING("lime_gfx_draw_datum","\x24","\x9c","\x04","\xee")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_rect,HX_HCSTRING("lime_gfx_draw_rect","\x0f","\x7f","\x76","\x87")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_path,HX_HCSTRING("lime_gfx_draw_path","\x90","\x17","\x21","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_tiles,HX_HCSTRING("lime_gfx_draw_tiles","\x3a","\x79","\xb1","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_points,HX_HCSTRING("lime_gfx_draw_points","\xce","\xd4","\x9d","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_round_rect,HX_HCSTRING("lime_gfx_draw_round_rect","\x20","\x8a","\x83","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::lime_gfx_draw_triangles,HX_HCSTRING("lime_gfx_draw_triangles","\xe0","\x2a","\x9e","\x87")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("arcTo","\x6d","\x00","\x84","\x25"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawGraphicsData","\xb9","\xaa","\x6e","\x60"),
	HX_HCSTRING("drawGraphicsDatum","\x00","\xc9","\x66","\x00"),
	HX_HCSTRING("drawPoints","\x47","\x8d","\xf1","\x38"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawRoundRectComplex","\xe2","\x43","\x2c","\x11"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SMOOTH,"TILE_SMOOTH");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_clear,"lime_gfx_clear");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_begin_fill,"lime_gfx_begin_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_begin_bitmap_fill,"lime_gfx_begin_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_bitmap_fill,"lime_gfx_line_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_begin_gradient_fill,"lime_gfx_begin_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_gradient_fill,"lime_gfx_line_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_end_fill,"lime_gfx_end_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_style,"lime_gfx_line_style");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_move_to,"lime_gfx_move_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_to,"lime_gfx_line_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_curve_to,"lime_gfx_curve_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_arc_to,"lime_gfx_arc_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_ellipse,"lime_gfx_draw_ellipse");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_data,"lime_gfx_draw_data");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_datum,"lime_gfx_draw_datum");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_rect,"lime_gfx_draw_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_path,"lime_gfx_draw_path");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_tiles,"lime_gfx_draw_tiles");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_points,"lime_gfx_draw_points");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_round_rect,"lime_gfx_draw_round_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_triangles,"lime_gfx_draw_triangles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SMOOTH,"TILE_SMOOTH");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_clear,"lime_gfx_clear");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_begin_fill,"lime_gfx_begin_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_begin_bitmap_fill,"lime_gfx_begin_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_bitmap_fill,"lime_gfx_line_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_begin_gradient_fill,"lime_gfx_begin_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_gradient_fill,"lime_gfx_line_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_end_fill,"lime_gfx_end_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_style,"lime_gfx_line_style");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_move_to,"lime_gfx_move_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_to,"lime_gfx_line_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_curve_to,"lime_gfx_curve_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_arc_to,"lime_gfx_arc_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_ellipse,"lime_gfx_draw_ellipse");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_data,"lime_gfx_draw_data");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_datum,"lime_gfx_draw_datum");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_rect,"lime_gfx_draw_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_path,"lime_gfx_draw_path");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_tiles,"lime_gfx_draw_tiles");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_points,"lime_gfx_draw_points");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_round_rect,"lime_gfx_draw_round_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_triangles,"lime_gfx_draw_triangles");
};

#endif

hx::Class Graphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_SMOOTH","\x5f","\x14","\xe0","\x50"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("lime_gfx_clear","\x1d","\x3a","\x84","\x5a"),
	HX_HCSTRING("lime_gfx_begin_fill","\x09","\xb9","\xce","\xe9"),
	HX_HCSTRING("lime_gfx_begin_bitmap_fill","\x4d","\xca","\xdb","\xd0"),
	HX_HCSTRING("lime_gfx_line_bitmap_fill","\x78","\x7d","\x1a","\x31"),
	HX_HCSTRING("lime_gfx_begin_gradient_fill","\x2c","\x3f","\xa0","\x55"),
	HX_HCSTRING("lime_gfx_line_gradient_fill","\x17","\x53","\x52","\x49"),
	HX_HCSTRING("lime_gfx_end_fill","\x17","\xfe","\x4f","\xaa"),
	HX_HCSTRING("lime_gfx_line_style","\xd6","\xa0","\x7e","\x30"),
	HX_HCSTRING("lime_gfx_move_to","\xb9","\x25","\xec","\xce"),
	HX_HCSTRING("lime_gfx_line_to","\xb6","\xe0","\xfd","\xa3"),
	HX_HCSTRING("lime_gfx_curve_to","\xbb","\xf7","\x86","\x31"),
	HX_HCSTRING("lime_gfx_arc_to","\xf8","\x71","\x8b","\x7f"),
	HX_HCSTRING("lime_gfx_draw_ellipse","\xd3","\xd3","\xe0","\xd9"),
	HX_HCSTRING("lime_gfx_draw_data","\x15","\x88","\x32","\x7e"),
	HX_HCSTRING("lime_gfx_draw_datum","\x24","\x9c","\x04","\xee"),
	HX_HCSTRING("lime_gfx_draw_rect","\x0f","\x7f","\x76","\x87"),
	HX_HCSTRING("lime_gfx_draw_path","\x90","\x17","\x21","\x86"),
	HX_HCSTRING("lime_gfx_draw_tiles","\x3a","\x79","\xb1","\x29"),
	HX_HCSTRING("lime_gfx_draw_points","\xce","\xd4","\x9d","\x2a"),
	HX_HCSTRING("lime_gfx_draw_round_rect","\x20","\x8a","\x83","\x5d"),
	HX_HCSTRING("lime_gfx_draw_triangles","\xe0","\x2a","\x9e","\x87"),
	::String(null()) };

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.display.Graphics","\x7b","\x80","\x7f","\x5b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_SMOOTH= (int)4096;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	lime_gfx_clear= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_clear","\xfb","\xb5","\xab","\xa2"),(int)1);
	lime_gfx_begin_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_begin_fill","\x6b","\x78","\xe3","\x5c"),(int)3);
	lime_gfx_begin_bitmap_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_begin_bitmap_fill","\x2b","\x9b","\xbc","\x30"),(int)5);
	lime_gfx_line_bitmap_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_line_bitmap_fill","\x5a","\xf2","\xff","\x99"),(int)5);
	lime_gfx_begin_gradient_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_begin_gradient_fill","\x8a","\x83","\xfd","\x0b"),(int)-1);
	lime_gfx_line_gradient_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_line_gradient_fill","\x79","\x44","\x28","\xce"),(int)-1);
	lime_gfx_end_fill= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_end_fill","\xf9","\xc0","\x84","\x94"),(int)1);
	lime_gfx_line_style= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_line_style","\x38","\x60","\x93","\xa3"),(int)-1);
	lime_gfx_move_to= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_move_to","\x17","\xd5","\xd0","\x0c"),(int)3);
	lime_gfx_line_to= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_line_to","\x14","\x90","\xe2","\xe1"),(int)3);
	lime_gfx_curve_to= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_curve_to","\x9d","\xba","\xbb","\x1b"),(int)5);
	lime_gfx_arc_to= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_arc_to","\x5a","\x58","\xf0","\x59"),(int)5);
	lime_gfx_draw_ellipse= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_ellipse","\xb5","\xaf","\x2d","\xcb"),(int)5);
	lime_gfx_draw_data= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_data","\xf3","\x4a","\x28","\x82"),(int)2);
	lime_gfx_draw_datum= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_datum","\x86","\x5b","\x19","\x61"),(int)2);
	lime_gfx_draw_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_rect","\xed","\x41","\x6c","\x8b"),(int)5);
	lime_gfx_draw_path= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_path","\x6e","\xda","\x16","\x8a"),(int)4);
	lime_gfx_draw_tiles= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_tiles","\x9c","\x38","\xc6","\x9c"),(int)5);
	lime_gfx_draw_points= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_points","\x2c","\x8b","\xb0","\x69"),(int)-1);
	lime_gfx_draw_round_rect= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_round_rect","\x7e","\xc7","\xd3","\x9a"),(int)-1);
	lime_gfx_draw_triangles= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_gfx_draw_triangles","\x42","\x43","\xc3","\x0a"),(int)-1);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
