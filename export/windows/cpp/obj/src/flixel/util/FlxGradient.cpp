#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl__legacy_display_InterpolationMethod
#include <openfl/_legacy/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Shape
#include <openfl/_legacy/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_SpreadMethod
#include <openfl/_legacy/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace util{

Void FlxGradient_obj::__construct()
{
	return null();
}

//FlxGradient_obj::~FlxGradient_obj() { }

Dynamic FlxGradient_obj::__CreateEmpty() { return  new FlxGradient_obj; }
hx::ObjectPtr< FlxGradient_obj > FlxGradient_obj::__new()
{  hx::ObjectPtr< FlxGradient_obj > _result_ = new FlxGradient_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGradient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGradient_obj > _result_ = new FlxGradient_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxGradient_obj::createGradientMatrix( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientMatrix",0x11545e53,"flixel.util.FlxGradient.createGradientMatrix","flixel/util/FlxGradient.hx",26,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
{
		HX_STACK_LINE(27)
		::openfl::_legacy::geom::Matrix tmp = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		::openfl::_legacy::geom::Matrix gradientMatrix = tmp;		HX_STACK_VAR(gradientMatrix,"gradientMatrix");
		HX_STACK_LINE(30)
		int tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		Float rot = tmp4;		HX_STACK_VAR(rot,"rot");
		HX_STACK_LINE(33)
		int tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int _int = height;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(33)
			bool tmp7 = (_int < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			if ((tmp7)){
				HX_STACK_LINE(33)
				tmp6 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(33)
				tmp6 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(33)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int _int = chunkSize;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(33)
			bool tmp8 = (_int < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			if ((tmp8)){
				HX_STACK_LINE(33)
				tmp7 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(33)
				tmp7 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(33)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		Float tmp9 = rot;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		gradientMatrix->createGradientBox(tmp5,tmp8,tmp9,(int)0,(int)0);
		HX_STACK_LINE(36)
		Array< Float > alpha = Array_obj< Float >::__new();		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			int _g = colors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(38)
			while((true)){
				HX_STACK_LINE(38)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(38)
				if ((tmp11)){
					HX_STACK_LINE(38)
					break;
				}
				HX_STACK_LINE(38)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(38)
				int ai = tmp12;		HX_STACK_VAR(ai,"ai");
				HX_STACK_LINE(40)
				int tmp13 = colors->__get(ai);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(40)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(40)
				int tmp15 = (int(tmp14) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(40)
				int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(40)
				Float tmp17 = (Float(tmp16) / Float((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(40)
				alpha->push(tmp17);
			}
		}
		HX_STACK_LINE(43)
		Array< int > ratio = Array_obj< int >::__new();		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(45)
		bool tmp10 = (colors->length == (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		if ((tmp10)){
			HX_STACK_LINE(47)
			ratio[(int)0] = (int)0;
			HX_STACK_LINE(48)
			ratio[(int)1] = (int)255;
		}
		else{
			HX_STACK_LINE(53)
			int tmp11 = (colors->length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			Float tmp12 = (Float((int)255) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(53)
			int spread = tmp13;		HX_STACK_VAR(spread,"spread");
			HX_STACK_LINE(55)
			ratio->push((int)0);
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(57)
				int tmp14 = (colors->length - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(57)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(57)
				while((true)){
					HX_STACK_LINE(57)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(57)
					if ((tmp16)){
						HX_STACK_LINE(57)
						break;
					}
					HX_STACK_LINE(57)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(57)
					int ri = tmp17;		HX_STACK_VAR(ri,"ri");
					HX_STACK_LINE(59)
					int tmp18 = (ri * spread);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(59)
					ratio->push(tmp18);
				}
			}
			HX_STACK_LINE(62)
			ratio->push((int)255);
		}
		struct _Function_1_1{
			inline static Dynamic Block( Array< int > &ratio,Array< Float > &alpha,::openfl::_legacy::geom::Matrix &gradientMatrix){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxGradient.hx",65,0x5a5037d6)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb") , gradientMatrix,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , alpha,false);
					__result->Add(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4") , ratio,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		Dynamic tmp11 = _Function_1_1::Block(ratio,alpha,gradientMatrix);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		return tmp11;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGradient_obj,createGradientMatrix,return )

Array< int > FlxGradient_obj::createGradientArray( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientArray",0xc5836dc7,"flixel.util.FlxGradient.createGradientArray","flixel/util/FlxGradient.hx",70,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(71)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		int tmp2 = chunkSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		int tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		bool tmp4 = interpolate;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp,tmp1,colors,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		::openfl::_legacy::display::BitmapData data = tmp5;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(72)
		Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			int tmp6 = data->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				if ((tmp8)){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(74)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(74)
				int y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(76)
				int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(76)
				int tmp11 = data->getPixel32((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(76)
				result->push(tmp11);
			}
		}
		HX_STACK_LINE(79)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientArray,return )

::flixel::FlxSprite FlxGradient_obj::createGradientFlxSprite( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientFlxSprite",0xca14a545,"flixel.util.FlxGradient.createGradientFlxSprite","flixel/util/FlxGradient.hx",95,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(96)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		int tmp1 = height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		int tmp2 = chunkSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		int tmp3 = rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		bool tmp4 = interpolate;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::openfl::_legacy::display::BitmapData tmp5 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp,tmp1,colors,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		::openfl::_legacy::display::BitmapData data = tmp5;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(97)
		::flixel::FlxSprite tmp6 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		::flixel::FlxSprite dest = tmp6;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(98)
		::openfl::_legacy::display::BitmapData tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		dest->set_pixels(tmp7);
		HX_STACK_LINE(99)
		::flixel::FlxSprite tmp8 = dest;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientFlxSprite,return )

::openfl::_legacy::display::BitmapData FlxGradient_obj::createGradientBitmapData( int width,int height,Array< int > colors,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","createGradientBitmapData",0xa3b74ecb,"flixel.util.FlxGradient.createGradientBitmapData","flixel/util/FlxGradient.hx",104,0x5a5037d6)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(106)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			bool tmp1 = ((int)1 < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			bool aNeg = tmp1;		HX_STACK_VAR(aNeg,"aNeg");
			HX_STACK_LINE(106)
			bool tmp2 = (width < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			bool bNeg = tmp2;		HX_STACK_VAR(bNeg,"bNeg");
			HX_STACK_LINE(106)
			bool tmp3 = (aNeg != bNeg);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			if ((tmp3)){
				HX_STACK_LINE(106)
				tmp = aNeg;
			}
			else{
				HX_STACK_LINE(106)
				tmp = ((int)1 > width);
			}
		}
		HX_STACK_LINE(106)
		if ((tmp)){
			HX_STACK_LINE(108)
			width = (int)1;
		}
		HX_STACK_LINE(111)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		{
			HX_STACK_LINE(111)
			bool tmp2 = ((int)1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			bool aNeg = tmp2;		HX_STACK_VAR(aNeg,"aNeg");
			HX_STACK_LINE(111)
			bool tmp3 = (height < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			bool bNeg = tmp3;		HX_STACK_VAR(bNeg,"bNeg");
			HX_STACK_LINE(111)
			bool tmp4 = (aNeg != bNeg);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			if ((tmp4)){
				HX_STACK_LINE(111)
				tmp1 = aNeg;
			}
			else{
				HX_STACK_LINE(111)
				tmp1 = ((int)1 > height);
			}
		}
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(113)
			height = (int)1;
		}
		HX_STACK_LINE(116)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		Dynamic tmp6 = ::flixel::util::FlxGradient_obj::createGradientMatrix(tmp2,tmp3,colors,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		Dynamic gradient = tmp6;		HX_STACK_VAR(gradient,"gradient");
		HX_STACK_LINE(117)
		::openfl::_legacy::display::Shape tmp7 = ::openfl::_legacy::display::Shape_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		::openfl::_legacy::display::Shape shape = tmp7;		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(118)
		bool tmp8 = interpolate;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		::openfl::_legacy::display::InterpolationMethod tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		if ((tmp8)){
			HX_STACK_LINE(118)
			tmp9 = ::openfl::_legacy::display::InterpolationMethod_obj::RGB;
		}
		else{
			HX_STACK_LINE(118)
			tmp9 = ::openfl::_legacy::display::InterpolationMethod_obj::LINEAR_RGB;
		}
		HX_STACK_LINE(118)
		::openfl::_legacy::display::InterpolationMethod interpolationMethod = tmp9;		HX_STACK_VAR(interpolationMethod,"interpolationMethod");
		HX_STACK_LINE(120)
		::openfl::_legacy::display::Graphics tmp10 = shape->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		::openfl::_legacy::geom::Matrix tmp11 = gradient->__Field(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(121)
		::openfl::_legacy::display::InterpolationMethod tmp12 = interpolationMethod;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(120)
		tmp10->beginGradientFill(::openfl::_legacy::display::GradientType_obj::LINEAR,colors,gradient->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic ),gradient->__Field(HX_HCSTRING("ratio","\x0b","\x35","\x24","\xe4"), hx::paccDynamic ),tmp11,::openfl::_legacy::display::SpreadMethod_obj::PAD,tmp12,(int)0);
		HX_STACK_LINE(123)
		::openfl::_legacy::display::Graphics tmp13 = shape->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(123)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _int = width;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(123)
			bool tmp15 = (_int < (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(123)
			if ((tmp15)){
				HX_STACK_LINE(123)
				tmp14 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(123)
				tmp14 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(123)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _int = height;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(123)
			bool tmp16 = (_int < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(123)
			if ((tmp16)){
				HX_STACK_LINE(123)
				tmp15 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(123)
				tmp15 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(123)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _int = chunkSize;		HX_STACK_VAR(_int,"int");
			HX_STACK_LINE(123)
			bool tmp17 = (_int < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(123)
			if ((tmp17)){
				HX_STACK_LINE(123)
				tmp16 = (((Float)4294967296.0) + _int);
			}
			else{
				HX_STACK_LINE(123)
				tmp16 = (_int + ((Float)0.0));
			}
		}
		HX_STACK_LINE(123)
		Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(123)
		tmp13->drawRect((int)0,(int)0,tmp14,tmp17);
		HX_STACK_LINE(125)
		::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		::openfl::_legacy::display::BitmapData data = tmp18;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(127)
		bool tmp19 = (chunkSize == (int)1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(127)
		if ((tmp19)){
			HX_STACK_LINE(129)
			::openfl::_legacy::display::Shape tmp20 = shape;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(129)
			data->draw(tmp20,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(133)
			int tmp20 = width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(133)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int _int = height;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(133)
				bool tmp22 = (_int < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(133)
				if ((tmp22)){
					HX_STACK_LINE(133)
					tmp21 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(133)
					tmp21 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(133)
			Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				int _int = chunkSize;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(133)
				bool tmp23 = (_int < (int)0);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(133)
				if ((tmp23)){
					HX_STACK_LINE(133)
					tmp22 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(133)
					tmp22 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(133)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(133)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::BitmapData tmp25 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp20,tmp24,true,(int)0,null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::Bitmap tmp26 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp25,null(),null());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(133)
			::openfl::_legacy::display::Bitmap tempBitmap = tmp26;		HX_STACK_VAR(tempBitmap,"tempBitmap");
			HX_STACK_LINE(134)
			::openfl::_legacy::display::Shape tmp27 = shape;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(134)
			tempBitmap->bitmapData->draw(tmp27,null(),null(),null(),null(),null());
			HX_STACK_LINE(135)
			Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(135)
			{
				HX_STACK_LINE(135)
				int _int = chunkSize;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(135)
				bool tmp29 = (_int < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(135)
				if ((tmp29)){
					HX_STACK_LINE(135)
					tmp28 = (((Float)4294967296.0) + _int);
				}
				else{
					HX_STACK_LINE(135)
					tmp28 = (_int + ((Float)0.0));
				}
			}
			HX_STACK_LINE(135)
			tempBitmap->set_scaleY(tmp28);
			HX_STACK_LINE(137)
			::openfl::_legacy::geom::Matrix tmp29 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(137)
			::openfl::_legacy::geom::Matrix sM = tmp29;		HX_STACK_VAR(sM,"sM");
			HX_STACK_LINE(138)
			Float tmp30 = tempBitmap->get_scaleX();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(138)
			Float tmp31 = tempBitmap->get_scaleY();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(138)
			sM->scale(tmp30,tmp31);
			HX_STACK_LINE(140)
			::openfl::_legacy::display::Bitmap tmp32 = tempBitmap;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Matrix tmp33 = sM;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(140)
			data->draw(tmp32,tmp33,null(),null(),null(),null());
		}
		HX_STACK_LINE(143)
		::openfl::_legacy::display::BitmapData tmp20 = data;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(143)
		return tmp20;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxGradient_obj,createGradientBitmapData,return )

::flixel::FlxSprite FlxGradient_obj::overlayGradientOnFlxSprite( ::flixel::FlxSprite dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnFlxSprite",0xe400659e,"flixel.util.FlxGradient.overlayGradientOnFlxSprite","flixel/util/FlxGradient.hx",163,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(164)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		Float tmp1 = dest->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		if ((tmp2)){
			HX_STACK_LINE(166)
			Float tmp3 = dest->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			width = tmp4;
		}
		HX_STACK_LINE(169)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		Float tmp4 = dest->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		if ((tmp5)){
			HX_STACK_LINE(171)
			Float tmp6 = dest->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			height = tmp7;
		}
		HX_STACK_LINE(174)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		int tmp8 = chunkSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		bool tmp10 = interpolate;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		::flixel::FlxSprite tmp11 = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(tmp6,tmp7,colors,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		::flixel::FlxSprite source = tmp11;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(175)
		::flixel::FlxSprite tmp12 = source;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(175)
		int tmp13 = destX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(175)
		int tmp14 = destY;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(175)
		dest->stamp(tmp12,tmp13,tmp14);
		HX_STACK_LINE(176)
		source->destroy();
		HX_STACK_LINE(177)
		::flixel::FlxSprite tmp15 = dest;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(177)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnFlxSprite,return )

::openfl::_legacy::display::BitmapData FlxGradient_obj::overlayGradientOnBitmapData( ::openfl::_legacy::display::BitmapData dest,int width,int height,Array< int > colors,hx::Null< int >  __o_destX,hx::Null< int >  __o_destY,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_interpolate){
int destX = __o_destX.Default(0);
int destY = __o_destY.Default(0);
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(90);
bool interpolate = __o_interpolate.Default(true);
	HX_STACK_FRAME("flixel.util.FlxGradient","overlayGradientOnBitmapData",0x3813dc52,"flixel.util.FlxGradient.overlayGradientOnBitmapData","flixel/util/FlxGradient.hx",197,0x5a5037d6)
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(destX,"destX")
	HX_STACK_ARG(destY,"destY")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(interpolate,"interpolate")
{
		HX_STACK_LINE(198)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int tmp1 = dest->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		if ((tmp2)){
			HX_STACK_LINE(200)
			int tmp3 = dest->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(200)
			width = tmp3;
		}
		HX_STACK_LINE(203)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(203)
		int tmp4 = dest->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(203)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		if ((tmp5)){
			HX_STACK_LINE(205)
			int tmp6 = dest->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			height = tmp6;
		}
		HX_STACK_LINE(208)
		int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		int tmp8 = chunkSize;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(208)
		int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(208)
		bool tmp10 = interpolate;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(208)
		::openfl::_legacy::display::BitmapData tmp11 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp6,tmp7,colors,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		::openfl::_legacy::display::BitmapData source = tmp11;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(209)
		::openfl::_legacy::display::BitmapData tmp12 = source;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(209)
		int tmp13 = source->get_width();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(209)
		int tmp14 = source->get_height();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(209)
		::openfl::_legacy::geom::Rectangle tmp15 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(209)
		::openfl::_legacy::geom::Point tmp16 = ::openfl::_legacy::geom::Point_obj::__new(destX,destY);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(209)
		dest->copyPixels(tmp12,tmp15,tmp16,null(),null(),true);
		HX_STACK_LINE(210)
		source->dispose();
		HX_STACK_LINE(211)
		::openfl::_legacy::display::BitmapData tmp17 = dest;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		return tmp17;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(FlxGradient_obj,overlayGradientOnBitmapData,return )


FlxGradient_obj::FlxGradient_obj()
{
}

bool FlxGradient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createGradientArray") ) { outValue = createGradientArray_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGradientMatrix") ) { outValue = createGradientMatrix_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFlxSprite") ) { outValue = createGradientFlxSprite_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"createGradientBitmapData") ) { outValue = createGradientBitmapData_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"overlayGradientOnFlxSprite") ) { outValue = overlayGradientOnFlxSprite_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"overlayGradientOnBitmapData") ) { outValue = overlayGradientOnBitmapData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGradient_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGradient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createGradientMatrix","\x6d","\xb4","\x68","\x83"),
	HX_HCSTRING("createGradientArray","\xed","\xd8","\xac","\x37"),
	HX_HCSTRING("createGradientFlxSprite","\x6b","\x9b","\x09","\xc6"),
	HX_HCSTRING("createGradientBitmapData","\xe5","\xb9","\x19","\x1e"),
	HX_HCSTRING("overlayGradientOnFlxSprite","\x38","\x4b","\x27","\x8c"),
	HX_HCSTRING("overlayGradientOnBitmapData","\x78","\xdd","\xf5","\xb1"),
	::String(null()) };

void FlxGradient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxGradient","\x48","\x2c","\xee","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGradient_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxGradient_obj >;
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
} // end namespace util
