#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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

Void FlxBitmapDataUtil_obj::__construct()
{
	return null();
}

//FlxBitmapDataUtil_obj::~FlxBitmapDataUtil_obj() { }

Dynamic FlxBitmapDataUtil_obj::__CreateEmpty() { return  new FlxBitmapDataUtil_obj; }
hx::ObjectPtr< FlxBitmapDataUtil_obj > FlxBitmapDataUtil_obj::__new()
{  hx::ObjectPtr< FlxBitmapDataUtil_obj > _result_ = new FlxBitmapDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBitmapDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBitmapDataUtil_obj > _result_ = new FlxBitmapDataUtil_obj();
	_result_->__construct();
	return _result_;}

::flixel::math::FlxMatrix FlxBitmapDataUtil_obj::matrix;

Void FlxBitmapDataUtil_obj::merge( ::openfl::_legacy::display::BitmapData sourceBitmapData,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::display::BitmapData destBitmapData,::openfl::_legacy::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","merge",0x21db12bd,"flixel.util.FlxBitmapDataUtil.merge","flixel/util/FlxBitmapDataUtil.hx",34,0xf477b24b)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destBitmapData,"destBitmapData")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(38)
		Float tmp = destPoint->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = destBitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		if ((tmp4)){
			HX_STACK_LINE(39)
			Float tmp6 = destPoint->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			int tmp7 = destBitmapData->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			tmp5 = (tmp6 >= tmp9);
		}
		else{
			HX_STACK_LINE(38)
			tmp5 = true;
		}
		HX_STACK_LINE(38)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		if ((tmp7)){
			HX_STACK_LINE(40)
			Float tmp9 = sourceRect->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(40)
			int tmp10 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(40)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(40)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(40)
			tmp8 = (tmp9 >= tmp12);
		}
		else{
			HX_STACK_LINE(38)
			tmp8 = true;
		}
		HX_STACK_LINE(38)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		if ((tmp10)){
			HX_STACK_LINE(41)
			Float tmp12 = sourceRect->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(41)
			int tmp13 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(41)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(41)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(41)
			tmp11 = (tmp12 >= tmp15);
		}
		else{
			HX_STACK_LINE(38)
			tmp11 = true;
		}
		HX_STACK_LINE(38)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(38)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		if ((tmp13)){
			HX_STACK_LINE(42)
			Float tmp15 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(42)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(42)
			tmp14 = (tmp17 <= (int)0);
		}
		else{
			HX_STACK_LINE(38)
			tmp14 = true;
		}
		HX_STACK_LINE(38)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(38)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(38)
		if ((tmp15)){
			HX_STACK_LINE(43)
			Float tmp17 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(43)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(43)
			tmp16 = (tmp18 <= (int)0);
		}
		else{
			HX_STACK_LINE(38)
			tmp16 = true;
		}
		HX_STACK_LINE(38)
		if ((tmp16)){
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			Float tmp17 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(49)
			int tmp18 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(49)
			bool tmp19 = (tmp17 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(49)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(49)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(49)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(49)
			if ((tmp21)){
				HX_STACK_LINE(50)
				Float tmp23 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(50)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(50)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(50)
				int tmp26 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(50)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(50)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(50)
				tmp22 = (tmp25 > tmp28);
			}
			else{
				HX_STACK_LINE(49)
				tmp22 = true;
			}
			HX_STACK_LINE(49)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(49)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(49)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(49)
			if ((tmp24)){
				HX_STACK_LINE(51)
				tmp25 = (sourceRect->x < (int)0);
			}
			else{
				HX_STACK_LINE(49)
				tmp25 = true;
			}
			HX_STACK_LINE(49)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(49)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(49)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(49)
			if ((tmp27)){
				HX_STACK_LINE(52)
				tmp28 = (sourceRect->y < (int)0);
			}
			else{
				HX_STACK_LINE(49)
				tmp28 = true;
			}
			HX_STACK_LINE(49)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(49)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(49)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(49)
			if ((tmp30)){
				HX_STACK_LINE(53)
				tmp31 = (destPoint->x < (int)0);
			}
			else{
				HX_STACK_LINE(49)
				tmp31 = true;
			}
			HX_STACK_LINE(49)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(49)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(49)
			if ((tmp32)){
				HX_STACK_LINE(54)
				tmp33 = (destPoint->y < (int)0);
			}
			else{
				HX_STACK_LINE(49)
				tmp33 = true;
			}
			HX_STACK_LINE(49)
			bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(49)
			if ((tmp34)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(56)
			Float tmp35 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(56)
			int tmp36 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(56)
			bool tmp37 = (tmp35 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(56)
			if ((tmp37)){
				HX_STACK_LINE(56)
				int tmp38 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(56)
				Float tmp39 = sourceRect->x;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(56)
				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(56)
				sourceRect->width = tmp40;
			}
			HX_STACK_LINE(57)
			Float tmp38 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(57)
			int tmp39 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(57)
			bool tmp40 = (tmp38 > tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(57)
			if ((tmp40)){
				HX_STACK_LINE(57)
				int tmp41 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(57)
				Float tmp42 = sourceRect->y;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(57)
				Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(57)
				sourceRect->height = tmp43;
			}
			HX_STACK_LINE(59)
			bool tmp41 = (sourceRect->x < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(59)
			if ((tmp41)){
				HX_STACK_LINE(61)
				Float tmp42 = (destPoint->x - sourceRect->x);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(61)
				destPoint->x = tmp42;
				HX_STACK_LINE(62)
				Float tmp43 = (sourceRect->width + sourceRect->x);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(62)
				sourceRect->width = tmp43;
				HX_STACK_LINE(63)
				sourceRect->x = (int)0;
			}
			HX_STACK_LINE(66)
			bool tmp42 = (sourceRect->y < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(66)
			if ((tmp42)){
				HX_STACK_LINE(68)
				Float tmp43 = (destPoint->y - sourceRect->y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(68)
				destPoint->y = tmp43;
				HX_STACK_LINE(69)
				Float tmp44 = (sourceRect->height + sourceRect->y);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(69)
				sourceRect->height = tmp44;
				HX_STACK_LINE(70)
				sourceRect->y = (int)0;
			}
			HX_STACK_LINE(73)
			Float tmp43 = destPoint->x;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(73)
			int tmp44 = destBitmapData->get_width();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(73)
			bool tmp45 = (tmp43 >= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(73)
			bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(73)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(73)
			if ((tmp46)){
				HX_STACK_LINE(73)
				Float tmp48 = destPoint->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(73)
				int tmp49 = destBitmapData->get_height();		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(73)
				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(73)
				tmp47 = (tmp48 >= tmp50);
			}
			else{
				HX_STACK_LINE(73)
				tmp47 = true;
			}
			HX_STACK_LINE(73)
			if ((tmp47)){
				HX_STACK_LINE(73)
				return null();
			}
			HX_STACK_LINE(75)
			bool tmp48 = (destPoint->x < (int)0);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(75)
			if ((tmp48)){
				HX_STACK_LINE(77)
				Float tmp49 = (sourceRect->x - destPoint->x);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(77)
				sourceRect->x = tmp49;
				HX_STACK_LINE(78)
				Float tmp50 = (sourceRect->width + destPoint->x);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(78)
				sourceRect->width = tmp50;
				HX_STACK_LINE(79)
				destPoint->x = (int)0;
			}
			HX_STACK_LINE(82)
			bool tmp49 = (destPoint->y < (int)0);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(82)
			if ((tmp49)){
				HX_STACK_LINE(84)
				Float tmp50 = (sourceRect->y - destPoint->y);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(84)
				sourceRect->y = tmp50;
				HX_STACK_LINE(85)
				Float tmp51 = (sourceRect->height + destPoint->y);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(85)
				sourceRect->height = tmp51;
				HX_STACK_LINE(86)
				destPoint->y = (int)0;
			}
		}
		HX_STACK_LINE(90)
		bool tmp17 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(90)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(90)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(90)
		if ((tmp18)){
			HX_STACK_LINE(90)
			tmp19 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(90)
			tmp19 = true;
		}
		HX_STACK_LINE(90)
		if ((tmp19)){
			HX_STACK_LINE(90)
			return null();
		}
		HX_STACK_LINE(92)
		Float tmp20 = sourceRect->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(92)
		int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(92)
		int startSourceX = tmp21;		HX_STACK_VAR(startSourceX,"startSourceX");
		HX_STACK_LINE(93)
		Float tmp22 = sourceRect->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(93)
		int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(93)
		int startSourceY = tmp23;		HX_STACK_VAR(startSourceY,"startSourceY");
		HX_STACK_LINE(95)
		Float tmp24 = sourceRect->width;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(95)
		int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(95)
		int width = tmp25;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(96)
		Float tmp26 = sourceRect->height;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(96)
		int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(96)
		int height = tmp27;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(98)
		int sourceX = startSourceX;		HX_STACK_VAR(sourceX,"sourceX");
		HX_STACK_LINE(99)
		int sourceY = startSourceY;		HX_STACK_VAR(sourceY,"sourceY");
		HX_STACK_LINE(101)
		Float tmp28 = destPoint->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(101)
		int tmp29 = ::Math_obj::round(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(101)
		int destX = tmp29;		HX_STACK_VAR(destX,"destX");
		HX_STACK_LINE(102)
		Float tmp30 = destPoint->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(102)
		int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(102)
		int destY = tmp31;		HX_STACK_VAR(destY,"destY");
		HX_STACK_LINE(104)
		int currX = destX;		HX_STACK_VAR(currX,"currX");
		HX_STACK_LINE(105)
		int currY = destY;		HX_STACK_VAR(currY,"currY");
		HX_STACK_LINE(107)
		int sourceColor;		HX_STACK_VAR(sourceColor,"sourceColor");
		HX_STACK_LINE(108)
		int destColor;		HX_STACK_VAR(destColor,"destColor");
		HX_STACK_LINE(110)
		int resultRed;		HX_STACK_VAR(resultRed,"resultRed");
		HX_STACK_LINE(111)
		int resultGreen;		HX_STACK_VAR(resultGreen,"resultGreen");
		HX_STACK_LINE(112)
		int resultBlue;		HX_STACK_VAR(resultBlue,"resultBlue");
		HX_STACK_LINE(113)
		int resultAlpha;		HX_STACK_VAR(resultAlpha,"resultAlpha");
		HX_STACK_LINE(115)
		int resultColor = (int)0;		HX_STACK_VAR(resultColor,"resultColor");
		HX_STACK_LINE(116)
		destBitmapData->lock();
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				bool tmp32 = (_g < width);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(119)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(119)
				if ((tmp33)){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				int tmp34 = (_g)++;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(119)
				int i = tmp34;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(121)
					while((true)){
						HX_STACK_LINE(121)
						bool tmp35 = (_g1 < height);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(121)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(121)
						if ((tmp36)){
							HX_STACK_LINE(121)
							break;
						}
						HX_STACK_LINE(121)
						int tmp37 = (_g1)++;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(121)
						int j = tmp37;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(123)
						int tmp38 = (startSourceX + i);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(123)
						sourceX = tmp38;
						HX_STACK_LINE(124)
						int tmp39 = (startSourceY + j);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(124)
						sourceY = tmp39;
						HX_STACK_LINE(126)
						int tmp40 = (destX + i);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(126)
						currX = tmp40;
						HX_STACK_LINE(127)
						int tmp41 = (destY + j);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(127)
						currY = tmp41;
						HX_STACK_LINE(129)
						int tmp42 = sourceX;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(129)
						int tmp43 = sourceY;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(129)
						int tmp44 = sourceBitmapData->getPixel32(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(129)
						sourceColor = tmp44;
						HX_STACK_LINE(130)
						int tmp45 = currX;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(130)
						int tmp46 = currY;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(130)
						int tmp47 = destBitmapData->getPixel32(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(130)
						destColor = tmp47;
						HX_STACK_LINE(133)
						int tmp48 = (int(sourceColor) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(133)
						int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(133)
						int tmp50 = redMultiplier;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(133)
						int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(133)
						int tmp52 = (int(destColor) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(133)
						int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(133)
						int tmp54 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(133)
						int tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(133)
						int tmp56 = (tmp51 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(133)
						Float tmp57 = (Float(tmp56) / Float((int)256));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(133)
						int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(133)
						resultRed = tmp58;
						HX_STACK_LINE(134)
						int tmp59 = (int(sourceColor) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(134)
						int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(134)
						int tmp61 = greenMultiplier;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(134)
						int tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(134)
						int tmp63 = (int(destColor) >> int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(134)
						int tmp64 = (int(tmp63) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(134)
						int tmp65 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(134)
						int tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(134)
						int tmp67 = (tmp62 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(134)
						Float tmp68 = (Float(tmp67) / Float((int)256));		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(134)
						int tmp69 = ::Std_obj::_int(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(134)
						resultGreen = tmp69;
						HX_STACK_LINE(135)
						int tmp70 = (int(sourceColor) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(135)
						int tmp71 = blueMultiplier;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(135)
						int tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(135)
						int tmp73 = (int(destColor) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(135)
						int tmp74 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(135)
						int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(135)
						int tmp76 = (tmp72 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(135)
						Float tmp77 = (Float(tmp76) / Float((int)256));		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(135)
						int tmp78 = ::Std_obj::_int(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(135)
						resultBlue = tmp78;
						HX_STACK_LINE(136)
						int tmp79 = (int(sourceColor) >> int((int)24));		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(136)
						int tmp80 = (int(tmp79) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(136)
						int tmp81 = alphaMultiplier;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(136)
						int tmp82 = (tmp80 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(136)
						int tmp83 = (int(destColor) >> int((int)24));		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(136)
						int tmp84 = (int(tmp83) & int((int)255));		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(136)
						int tmp85 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(136)
						int tmp86 = (tmp84 * tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(136)
						int tmp87 = (tmp82 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(136)
						Float tmp88 = (Float(tmp87) / Float((int)256));		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(136)
						int tmp89 = ::Std_obj::_int(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(136)
						resultAlpha = tmp89;
						HX_STACK_LINE(139)
						int tmp90;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(139)
						{
							HX_STACK_LINE(139)
							int tmp91 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(139)
							int color = tmp91;		HX_STACK_VAR(color,"color");
							HX_STACK_LINE(139)
							int tmp92;		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(139)
							{
								HX_STACK_LINE(139)
								{
									HX_STACK_LINE(139)
									hx::AndEq(color,(int)-16711681);
									HX_STACK_LINE(139)
									bool tmp93 = (resultRed > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(139)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(139)
									if ((tmp93)){
										HX_STACK_LINE(139)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(139)
										bool tmp95 = (resultRed < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(139)
										if ((tmp95)){
											HX_STACK_LINE(139)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(139)
											tmp94 = resultRed;
										}
									}
									HX_STACK_LINE(139)
									int tmp95 = (int(tmp94) << int((int)16));		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(139)
									hx::OrEq(color,tmp95);
									HX_STACK_LINE(139)
									resultRed;
								}
								HX_STACK_LINE(139)
								{
									HX_STACK_LINE(139)
									hx::AndEq(color,(int)-65281);
									HX_STACK_LINE(139)
									bool tmp93 = (resultGreen > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(139)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(139)
									if ((tmp93)){
										HX_STACK_LINE(139)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(139)
										bool tmp95 = (resultGreen < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(139)
										if ((tmp95)){
											HX_STACK_LINE(139)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(139)
											tmp94 = resultGreen;
										}
									}
									HX_STACK_LINE(139)
									int tmp95 = (int(tmp94) << int((int)8));		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(139)
									hx::OrEq(color,tmp95);
									HX_STACK_LINE(139)
									resultGreen;
								}
								HX_STACK_LINE(139)
								{
									HX_STACK_LINE(139)
									hx::AndEq(color,(int)-256);
									HX_STACK_LINE(139)
									bool tmp93 = (resultBlue > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(139)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(139)
									if ((tmp93)){
										HX_STACK_LINE(139)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(139)
										bool tmp95 = (resultBlue < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(139)
										if ((tmp95)){
											HX_STACK_LINE(139)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(139)
											tmp94 = resultBlue;
										}
									}
									HX_STACK_LINE(139)
									hx::OrEq(color,tmp94);
									HX_STACK_LINE(139)
									resultBlue;
								}
								HX_STACK_LINE(139)
								{
									HX_STACK_LINE(139)
									hx::AndEq(color,(int)16777215);
									HX_STACK_LINE(139)
									bool tmp93 = (resultAlpha > (int)255);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(139)
									int tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(139)
									if ((tmp93)){
										HX_STACK_LINE(139)
										tmp94 = (int)255;
									}
									else{
										HX_STACK_LINE(139)
										bool tmp95 = (resultAlpha < (int)0);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(139)
										if ((tmp95)){
											HX_STACK_LINE(139)
											tmp94 = (int)0;
										}
										else{
											HX_STACK_LINE(139)
											tmp94 = resultAlpha;
										}
									}
									HX_STACK_LINE(139)
									int tmp95 = (int(tmp94) << int((int)24));		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(139)
									hx::OrEq(color,tmp95);
									HX_STACK_LINE(139)
									resultAlpha;
								}
								HX_STACK_LINE(139)
								tmp92 = color;
							}
							HX_STACK_LINE(139)
							tmp90 = tmp92;
						}
						HX_STACK_LINE(139)
						resultColor = tmp90;
						HX_STACK_LINE(142)
						int tmp91 = currX;		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(142)
						int tmp92 = currY;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(142)
						int tmp93 = resultColor;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(142)
						destBitmapData->setPixel32(tmp91,tmp92,tmp93);
					}
				}
			}
		}
		HX_STACK_LINE(145)
		destBitmapData->unlock(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxBitmapDataUtil_obj,merge,(void))

int FlxBitmapDataUtil_obj::mergeColorComponent( int source,int dest,int multiplier){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","mergeColorComponent",0x5b71b277,"flixel.util.FlxBitmapDataUtil.mergeColorComponent","flixel/util/FlxBitmapDataUtil.hx",150,0xf477b24b)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(dest,"dest")
	HX_STACK_ARG(multiplier,"multiplier")
	HX_STACK_LINE(151)
	int tmp = (source * multiplier);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	int tmp1 = dest;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	int tmp2 = ((int)256 - multiplier);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	int tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(151)
	Float tmp5 = (Float(tmp4) / Float((int)256));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(151)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(151)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxBitmapDataUtil_obj,mergeColorComponent,return )

Dynamic FlxBitmapDataUtil_obj::compare( ::openfl::_legacy::display::BitmapData Bitmap1,::openfl::_legacy::display::BitmapData Bitmap2){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","compare",0x217d53ea,"flixel.util.FlxBitmapDataUtil.compare","flixel/util/FlxBitmapDataUtil.hx",166,0xf477b24b)
	HX_STACK_ARG(Bitmap1,"Bitmap1")
	HX_STACK_ARG(Bitmap2,"Bitmap2")
	HX_STACK_LINE(170)
	bool tmp = (Bitmap1 == Bitmap2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	if ((tmp)){
		HX_STACK_LINE(172)
		return (int)0;
	}
	HX_STACK_LINE(174)
	int tmp1 = Bitmap1->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	int tmp2 = Bitmap2->get_width();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	if ((tmp3)){
		HX_STACK_LINE(176)
		return (int)-3;
	}
	else{
		HX_STACK_LINE(178)
		int tmp4 = Bitmap1->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		int tmp5 = Bitmap2->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		if ((tmp6)){
			HX_STACK_LINE(180)
			return (int)-4;
		}
		else{
			HX_STACK_LINE(184)
			int tmp7 = Bitmap1->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(184)
			int width = tmp7;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(185)
			int tmp8 = Bitmap1->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			int height = tmp8;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(186)
			::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(186)
			::openfl::_legacy::display::BitmapData result = tmp9;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(187)
			bool identical = true;		HX_STACK_VAR(identical,"identical");
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(189)
				while((true)){
					HX_STACK_LINE(189)
					bool tmp10 = (_g < width);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(189)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(189)
					if ((tmp11)){
						HX_STACK_LINE(189)
						break;
					}
					HX_STACK_LINE(189)
					int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(189)
					int i = tmp12;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(191)
					{
						HX_STACK_LINE(191)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(191)
						while((true)){
							HX_STACK_LINE(191)
							bool tmp13 = (_g1 < height);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(191)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(191)
							if ((tmp14)){
								HX_STACK_LINE(191)
								break;
							}
							HX_STACK_LINE(191)
							int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(191)
							int j = tmp15;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(193)
							int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(193)
							int tmp17 = j;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(193)
							int tmp18 = Bitmap1->getPixel32(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(193)
							int pixel1 = tmp18;		HX_STACK_VAR(pixel1,"pixel1");
							HX_STACK_LINE(194)
							int tmp19 = i;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(194)
							int tmp20 = j;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(194)
							int tmp21 = Bitmap2->getPixel32(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(194)
							int pixel2 = tmp21;		HX_STACK_VAR(pixel2,"pixel2");
							HX_STACK_LINE(196)
							bool tmp22 = (pixel1 != pixel2);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(196)
							if ((tmp22)){
								HX_STACK_LINE(198)
								identical = false;
								HX_STACK_LINE(200)
								int tmp23 = (int(pixel1) & int((int)16777215));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(200)
								int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(200)
								int tmp25 = (int(pixel2) & int((int)16777215));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(200)
								int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(200)
								bool tmp27 = (tmp24 != tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(200)
								if ((tmp27)){
									HX_STACK_LINE(202)
									int tmp28 = i;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(202)
									int tmp29 = j;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(202)
									int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(202)
									{
										HX_STACK_LINE(203)
										int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(203)
										{
											HX_STACK_LINE(203)
											int tmp32 = (int(pixel1) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(203)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(203)
											int tmp34 = (int(pixel2) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(203)
											int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(203)
											int tmp36 = (tmp33 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(203)
											int diff = tmp36;		HX_STACK_VAR(diff,"diff");
											HX_STACK_LINE(203)
											bool tmp37 = (diff >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(203)
											if ((tmp37)){
												HX_STACK_LINE(203)
												tmp31 = diff;
											}
											else{
												HX_STACK_LINE(203)
												tmp31 = ((int)256 + diff);
											}
										}
										HX_STACK_LINE(203)
										int Red = tmp31;		HX_STACK_VAR(Red,"Red");
										HX_STACK_LINE(204)
										int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(204)
										{
											HX_STACK_LINE(204)
											int tmp33 = (int(pixel1) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(204)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(204)
											int tmp35 = (int(pixel2) >> int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(204)
											int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(204)
											int tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(204)
											int diff = tmp37;		HX_STACK_VAR(diff,"diff");
											HX_STACK_LINE(204)
											bool tmp38 = (diff >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(204)
											if ((tmp38)){
												HX_STACK_LINE(204)
												tmp32 = diff;
											}
											else{
												HX_STACK_LINE(204)
												tmp32 = ((int)256 + diff);
											}
										}
										HX_STACK_LINE(204)
										int Green = tmp32;		HX_STACK_VAR(Green,"Green");
										HX_STACK_LINE(205)
										int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(205)
										{
											HX_STACK_LINE(205)
											int tmp34 = (int(pixel1) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(205)
											int tmp35 = (int(pixel2) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(205)
											int tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(205)
											int diff = tmp36;		HX_STACK_VAR(diff,"diff");
											HX_STACK_LINE(205)
											bool tmp37 = (diff >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(205)
											if ((tmp37)){
												HX_STACK_LINE(205)
												tmp33 = diff;
											}
											else{
												HX_STACK_LINE(205)
												tmp33 = ((int)256 + diff);
											}
										}
										HX_STACK_LINE(205)
										int Blue = tmp33;		HX_STACK_VAR(Blue,"Blue");
										HX_STACK_LINE(202)
										int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
										HX_STACK_LINE(202)
										int tmp34 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(202)
										int color = tmp34;		HX_STACK_VAR(color,"color");
										HX_STACK_LINE(202)
										int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(202)
										{
											HX_STACK_LINE(202)
											{
												HX_STACK_LINE(202)
												hx::AndEq(color,(int)-16711681);
												HX_STACK_LINE(202)
												bool tmp36 = (Red > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(202)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(202)
												if ((tmp36)){
													HX_STACK_LINE(202)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(202)
													bool tmp38 = (Red < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(202)
													if ((tmp38)){
														HX_STACK_LINE(202)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(202)
														tmp37 = Red;
													}
												}
												HX_STACK_LINE(202)
												int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(202)
												hx::OrEq(color,tmp38);
												HX_STACK_LINE(202)
												Red;
											}
											HX_STACK_LINE(202)
											{
												HX_STACK_LINE(202)
												hx::AndEq(color,(int)-65281);
												HX_STACK_LINE(202)
												bool tmp36 = (Green > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(202)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(202)
												if ((tmp36)){
													HX_STACK_LINE(202)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(202)
													bool tmp38 = (Green < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(202)
													if ((tmp38)){
														HX_STACK_LINE(202)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(202)
														tmp37 = Green;
													}
												}
												HX_STACK_LINE(202)
												int tmp38 = (int(tmp37) << int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(202)
												hx::OrEq(color,tmp38);
												HX_STACK_LINE(202)
												Green;
											}
											HX_STACK_LINE(202)
											{
												HX_STACK_LINE(202)
												hx::AndEq(color,(int)-256);
												HX_STACK_LINE(202)
												bool tmp36 = (Blue > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(202)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(202)
												if ((tmp36)){
													HX_STACK_LINE(202)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(202)
													bool tmp38 = (Blue < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(202)
													if ((tmp38)){
														HX_STACK_LINE(202)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(202)
														tmp37 = Blue;
													}
												}
												HX_STACK_LINE(202)
												hx::OrEq(color,tmp37);
												HX_STACK_LINE(202)
												Blue;
											}
											HX_STACK_LINE(202)
											{
												HX_STACK_LINE(202)
												hx::AndEq(color,(int)16777215);
												HX_STACK_LINE(202)
												bool tmp36 = (Alpha > (int)255);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(202)
												int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(202)
												if ((tmp36)){
													HX_STACK_LINE(202)
													tmp37 = (int)255;
												}
												else{
													HX_STACK_LINE(202)
													bool tmp38 = (Alpha < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
													HX_STACK_LINE(202)
													if ((tmp38)){
														HX_STACK_LINE(202)
														tmp37 = (int)0;
													}
													else{
														HX_STACK_LINE(202)
														tmp37 = Alpha;
													}
												}
												HX_STACK_LINE(202)
												int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(202)
												hx::OrEq(color,tmp38);
												HX_STACK_LINE(202)
												Alpha;
											}
											HX_STACK_LINE(202)
											tmp35 = color;
										}
										HX_STACK_LINE(202)
										tmp30 = tmp35;
									}
									HX_STACK_LINE(202)
									result->setPixel32(tmp28,tmp29,tmp30);
								}
								else{
									HX_STACK_LINE(210)
									int tmp28 = (int(pixel1) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(210)
									int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(210)
									int alpha1 = tmp29;		HX_STACK_VAR(alpha1,"alpha1");
									HX_STACK_LINE(211)
									int tmp30 = (int(pixel2) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(211)
									int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(211)
									int alpha2 = tmp31;		HX_STACK_VAR(alpha2,"alpha2");
									HX_STACK_LINE(213)
									bool tmp32 = (alpha1 != alpha2);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(213)
									if ((tmp32)){
										HX_STACK_LINE(215)
										int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(215)
										int tmp34 = j;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(215)
										int tmp35;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(216)
											int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(216)
											{
												HX_STACK_LINE(216)
												int tmp37 = (alpha1 - alpha2);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(216)
												int diff = tmp37;		HX_STACK_VAR(diff,"diff");
												HX_STACK_LINE(216)
												bool tmp38 = (diff >= (int)0);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(216)
												if ((tmp38)){
													HX_STACK_LINE(216)
													tmp36 = diff;
												}
												else{
													HX_STACK_LINE(216)
													tmp36 = ((int)256 + diff);
												}
											}
											HX_STACK_LINE(216)
											int Alpha = tmp36;		HX_STACK_VAR(Alpha,"Alpha");
											HX_STACK_LINE(215)
											int tmp37 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(215)
											int color = tmp37;		HX_STACK_VAR(color,"color");
											HX_STACK_LINE(215)
											int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													hx::AndEq(color,(int)-16711681);
													HX_STACK_LINE(215)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(215)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(215)
													if ((tmp39)){
														HX_STACK_LINE(215)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(215)
														bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(215)
														if ((tmp41)){
															HX_STACK_LINE(215)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(215)
															tmp40 = (int)255;
														}
													}
													HX_STACK_LINE(215)
													int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(215)
													hx::OrEq(color,tmp41);
													HX_STACK_LINE(215)
													(int)255;
												}
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													hx::AndEq(color,(int)-65281);
													HX_STACK_LINE(215)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(215)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(215)
													if ((tmp39)){
														HX_STACK_LINE(215)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(215)
														bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(215)
														if ((tmp41)){
															HX_STACK_LINE(215)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(215)
															tmp40 = (int)255;
														}
													}
													HX_STACK_LINE(215)
													int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(215)
													hx::OrEq(color,tmp41);
													HX_STACK_LINE(215)
													(int)255;
												}
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													hx::AndEq(color,(int)-256);
													HX_STACK_LINE(215)
													bool tmp39 = false;		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(215)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(215)
													if ((tmp39)){
														HX_STACK_LINE(215)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(215)
														bool tmp41 = false;		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(215)
														if ((tmp41)){
															HX_STACK_LINE(215)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(215)
															tmp40 = (int)255;
														}
													}
													HX_STACK_LINE(215)
													hx::OrEq(color,tmp40);
													HX_STACK_LINE(215)
													(int)255;
												}
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													hx::AndEq(color,(int)16777215);
													HX_STACK_LINE(215)
													bool tmp39 = (Alpha > (int)255);		HX_STACK_VAR(tmp39,"tmp39");
													HX_STACK_LINE(215)
													int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(215)
													if ((tmp39)){
														HX_STACK_LINE(215)
														tmp40 = (int)255;
													}
													else{
														HX_STACK_LINE(215)
														bool tmp41 = (Alpha < (int)0);		HX_STACK_VAR(tmp41,"tmp41");
														HX_STACK_LINE(215)
														if ((tmp41)){
															HX_STACK_LINE(215)
															tmp40 = (int)0;
														}
														else{
															HX_STACK_LINE(215)
															tmp40 = Alpha;
														}
													}
													HX_STACK_LINE(215)
													int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(215)
													hx::OrEq(color,tmp41);
													HX_STACK_LINE(215)
													Alpha;
												}
												HX_STACK_LINE(215)
												tmp38 = color;
											}
											HX_STACK_LINE(215)
											tmp35 = tmp38;
										}
										HX_STACK_LINE(215)
										result->setPixel32(tmp33,tmp34,tmp35);
									}
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(223)
			bool tmp10 = identical;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			if ((tmp11)){
				HX_STACK_LINE(225)
				::openfl::_legacy::display::BitmapData tmp12 = result;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				return tmp12;
			}
		}
	}
	HX_STACK_LINE(229)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,compare,return )

int FlxBitmapDataUtil_obj::getDiff( int value1,int value2){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","getDiff",0xb3004700,"flixel.util.FlxBitmapDataUtil.getDiff","flixel/util/FlxBitmapDataUtil.hx",234,0xf477b24b)
	HX_STACK_ARG(value1,"value1")
	HX_STACK_ARG(value2,"value2")
	HX_STACK_LINE(235)
	int tmp = (value1 - value2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	int diff = tmp;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(236)
	bool tmp1 = (diff >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(236)
		tmp2 = diff;
	}
	else{
		HX_STACK_LINE(236)
		tmp2 = ((int)256 + diff);
	}
	HX_STACK_LINE(236)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxBitmapDataUtil_obj,getDiff,return )

Float FlxBitmapDataUtil_obj::getMemorySize( ::openfl::_legacy::display::BitmapData bitmapData){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","getMemorySize",0x5bc2859d,"flixel.util.FlxBitmapDataUtil.getMemorySize","flixel/util/FlxBitmapDataUtil.hx",243,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(244)
	int tmp = bitmapData->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	int tmp1 = bitmapData->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxBitmapDataUtil_obj,getMemorySize,return )

Array< ::Dynamic > FlxBitmapDataUtil_obj::replaceColor( ::openfl::_legacy::display::BitmapData bitmapData,int color,int newColor,hx::Null< bool >  __o_fetchPositions,::flixel::math::FlxRect rect){
bool fetchPositions = __o_fetchPositions.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","replaceColor",0xbc41272a,"flixel.util.FlxBitmapDataUtil.replaceColor","flixel/util/FlxBitmapDataUtil.hx",259,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(newColor,"newColor")
	HX_STACK_ARG(fetchPositions,"fetchPositions")
	HX_STACK_ARG(rect,"rect")
{
		HX_STACK_LINE(260)
		Array< ::Dynamic > positions = null();		HX_STACK_VAR(positions,"positions");
		HX_STACK_LINE(261)
		bool tmp = fetchPositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		if ((tmp)){
			HX_STACK_LINE(263)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(266)
		int startX = (int)0;		HX_STACK_VAR(startX,"startX");
		HX_STACK_LINE(267)
		int startY = (int)0;		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(268)
		int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(268)
		int columns = tmp1;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(269)
		int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(269)
		int rows = tmp2;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(271)
		bool tmp3 = (rect != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		if ((tmp3)){
			HX_STACK_LINE(273)
			Float tmp4 = rect->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			startX = tmp5;
			HX_STACK_LINE(274)
			Float tmp6 = rect->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(274)
			startY = tmp7;
			HX_STACK_LINE(275)
			Float tmp8 = rect->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(275)
			columns = tmp9;
			HX_STACK_LINE(276)
			Float tmp10 = rect->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(276)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(276)
			rows = tmp11;
		}
		HX_STACK_LINE(279)
		int tmp4 = columns;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		int tmp5 = bitmapData->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		columns = tmp7;
		HX_STACK_LINE(280)
		int tmp8 = rows;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		int tmp9 = bitmapData->get_height();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(280)
		Float tmp10 = ::Math_obj::max(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(280)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(280)
		rows = tmp11;
		HX_STACK_LINE(282)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(283)
		int column = (int)0;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(284)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(284)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(286)
		bool changed = false;		HX_STACK_VAR(changed,"changed");
		HX_STACK_LINE(287)
		bitmapData->lock();
		HX_STACK_LINE(288)
		while((true)){
			HX_STACK_LINE(288)
			bool tmp12 = (row < rows);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(288)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(288)
			if ((tmp13)){
				HX_STACK_LINE(288)
				break;
			}
			HX_STACK_LINE(290)
			column = (int)0;
			HX_STACK_LINE(291)
			while((true)){
				HX_STACK_LINE(291)
				bool tmp14 = (column < columns);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(291)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(291)
				if ((tmp15)){
					HX_STACK_LINE(291)
					break;
				}
				HX_STACK_LINE(293)
				int tmp16 = (startX + column);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(293)
				x = tmp16;
				HX_STACK_LINE(294)
				int tmp17 = (startY + row);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(294)
				y = tmp17;
				HX_STACK_LINE(295)
				int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(295)
				int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(295)
				int tmp20 = bitmapData->getPixel32(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(295)
				int tmp21 = color;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(295)
				bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(295)
				if ((tmp22)){
					HX_STACK_LINE(297)
					int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(297)
					int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(297)
					int tmp25 = newColor;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(297)
					bitmapData->setPixel32(tmp23,tmp24,tmp25);
					HX_STACK_LINE(298)
					changed = true;
					HX_STACK_LINE(299)
					bool tmp26 = fetchPositions;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(299)
					if ((tmp26)){
						HX_STACK_LINE(301)
						::flixel::math::FlxPoint tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp28 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(301)
							::flixel::math::FlxPoint tmp29 = tmp28->get();		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(301)
							int tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(301)
							int tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(301)
							::flixel::math::FlxPoint tmp32 = tmp29->set(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(301)
							::flixel::math::FlxPoint point = tmp32;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(301)
							point->_inPool = false;
							HX_STACK_LINE(301)
							tmp27 = point;
						}
						HX_STACK_LINE(301)
						positions->push(tmp27);
					}
				}
				HX_STACK_LINE(304)
				(column)++;
			}
			HX_STACK_LINE(306)
			(row)++;
		}
		HX_STACK_LINE(308)
		bitmapData->unlock(null());
		HX_STACK_LINE(310)
		bool tmp12 = changed;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(310)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(310)
		if ((tmp12)){
			HX_STACK_LINE(310)
			tmp13 = (positions == null());
		}
		else{
			HX_STACK_LINE(310)
			tmp13 = false;
		}
		HX_STACK_LINE(310)
		if ((tmp13)){
			HX_STACK_LINE(312)
			positions = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(315)
		return positions;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,replaceColor,return )

::openfl::_legacy::display::BitmapData FlxBitmapDataUtil_obj::addSpacesAndBorders( ::openfl::_legacy::display::BitmapData bitmapData,::flixel::math::FlxPoint frameSize,::flixel::math::FlxPoint spacing,::flixel::math::FlxPoint border,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","addSpacesAndBorders",0xf8f1a643,"flixel.util.FlxBitmapDataUtil.addSpacesAndBorders","flixel/util/FlxBitmapDataUtil.hx",328,0xf477b24b)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(frameSize,"frameSize")
	HX_STACK_ARG(spacing,"spacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(329)
	bool tmp = (region == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	if ((tmp)){
		HX_STACK_LINE(331)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			int tmp2 = bitmapData->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(331)
			Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(331)
			int tmp3 = bitmapData->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(331)
			Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(331)
			::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(331)
			{
				HX_STACK_LINE(331)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(331)
				::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(331)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(331)
				_this->x = (int)0;
				HX_STACK_LINE(331)
				_this->y = (int)0;
				HX_STACK_LINE(331)
				_this->width = Width;
				HX_STACK_LINE(331)
				_this->height = Height;
				HX_STACK_LINE(331)
				tmp4 = _this;
			}
			HX_STACK_LINE(331)
			::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(331)
			rect->_inPool = false;
			HX_STACK_LINE(331)
			tmp1 = rect;
		}
		HX_STACK_LINE(331)
		region = tmp1;
	}
	HX_STACK_LINE(334)
	Float tmp1 = region->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(334)
	int frameWidth = tmp2;		HX_STACK_VAR(frameWidth,"frameWidth");
	HX_STACK_LINE(335)
	Float tmp3 = region->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(335)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	int frameHeight = tmp4;		HX_STACK_VAR(frameHeight,"frameHeight");
	HX_STACK_LINE(337)
	bool tmp5 = (frameSize != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(337)
	if ((tmp5)){
		HX_STACK_LINE(339)
		Float tmp6 = frameSize->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(339)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(339)
		frameWidth = tmp7;
		HX_STACK_LINE(340)
		Float tmp8 = frameSize->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(340)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(340)
		frameHeight = tmp9;
	}
	HX_STACK_LINE(343)
	Float tmp6 = (Float(region->width) / Float(frameWidth));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(343)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(343)
	int numHorizontalFrames = tmp7;		HX_STACK_VAR(numHorizontalFrames,"numHorizontalFrames");
	HX_STACK_LINE(344)
	Float tmp8 = (Float(region->height) / Float(frameHeight));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(344)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(344)
	int numVerticalFrames = tmp9;		HX_STACK_VAR(numVerticalFrames,"numVerticalFrames");
	HX_STACK_LINE(346)
	int spaceX = (int)0;		HX_STACK_VAR(spaceX,"spaceX");
	HX_STACK_LINE(347)
	int spaceY = (int)0;		HX_STACK_VAR(spaceY,"spaceY");
	HX_STACK_LINE(349)
	bool tmp10 = (spacing != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(349)
	if ((tmp10)){
		HX_STACK_LINE(351)
		Float tmp11 = spacing->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(351)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(351)
		spaceX = tmp12;
		HX_STACK_LINE(352)
		Float tmp13 = spacing->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(352)
		int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(352)
		spaceY = tmp14;
	}
	HX_STACK_LINE(355)
	int borderX = (int)0;		HX_STACK_VAR(borderX,"borderX");
	HX_STACK_LINE(356)
	int borderY = (int)0;		HX_STACK_VAR(borderY,"borderY");
	HX_STACK_LINE(358)
	bool tmp11 = (border != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(358)
	if ((tmp11)){
		HX_STACK_LINE(360)
		Float tmp12 = border->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(360)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(360)
		borderX = tmp13;
		HX_STACK_LINE(361)
		Float tmp14 = border->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(361)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(361)
		borderY = tmp15;
	}
	HX_STACK_LINE(365)
	Float tmp12 = region->width;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(365)
	int tmp13 = (numHorizontalFrames - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(365)
	int tmp14 = spaceX;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(365)
	int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(365)
	Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(365)
	int tmp17 = ((int)2 * numHorizontalFrames);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(365)
	int tmp18 = borderX;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(365)
	int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(365)
	Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(365)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(366)
	Float tmp22 = region->height;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(366)
	int tmp23 = (numVerticalFrames - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(366)
	int tmp24 = spaceY;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(366)
	int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(366)
	Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(366)
	int tmp27 = ((int)2 * numVerticalFrames);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(366)
	int tmp28 = borderY;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(366)
	int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(366)
	Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(366)
	int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(364)
	::openfl::_legacy::display::BitmapData tmp32 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp21,tmp31,true,(int)0,null());		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(364)
	::openfl::_legacy::display::BitmapData result = tmp32;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(370)
	result->lock();
	HX_STACK_LINE(371)
	::openfl::_legacy::geom::Rectangle tmp33 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(371)
	::openfl::_legacy::geom::Rectangle tempRect = tmp33;		HX_STACK_VAR(tempRect,"tempRect");
	HX_STACK_LINE(372)
	::openfl::_legacy::geom::Point tmp34 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(372)
	::openfl::_legacy::geom::Point tempPoint = tmp34;		HX_STACK_VAR(tempPoint,"tempPoint");
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(375)
		while((true)){
			HX_STACK_LINE(375)
			bool tmp35 = (_g < numHorizontalFrames);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(375)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(375)
			if ((tmp36)){
				HX_STACK_LINE(375)
				break;
			}
			HX_STACK_LINE(375)
			int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(375)
			int i = tmp37;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(377)
			int tmp38 = i;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(377)
			int tmp39 = (frameWidth + spaceX);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(377)
			int tmp40 = ((int)2 * borderX);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(377)
			int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(377)
			int tmp42 = (tmp38 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(377)
			int tmp43 = borderX;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(377)
			int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(377)
			tempPoint->x = tmp44;
			HX_STACK_LINE(378)
			int tmp45 = (i * frameWidth);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(378)
			Float tmp46 = region->x;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(378)
			Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(378)
			tempRect->x = tmp47;
			HX_STACK_LINE(380)
			{
				HX_STACK_LINE(380)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(380)
				while((true)){
					HX_STACK_LINE(380)
					bool tmp48 = (_g1 < numVerticalFrames);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(380)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(380)
					if ((tmp49)){
						HX_STACK_LINE(380)
						break;
					}
					HX_STACK_LINE(380)
					int tmp50 = (_g1)++;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(380)
					int j = tmp50;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(382)
					int tmp51 = j;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(382)
					int tmp52 = (frameHeight + spaceY);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(382)
					int tmp53 = ((int)2 * borderY);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(382)
					int tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(382)
					int tmp55 = (tmp51 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(382)
					int tmp56 = borderY;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(382)
					int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(382)
					tempPoint->y = tmp57;
					HX_STACK_LINE(383)
					int tmp58 = (j * frameHeight);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(383)
					Float tmp59 = region->y;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(383)
					Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(383)
					tempRect->y = tmp60;
					HX_STACK_LINE(384)
					::openfl::_legacy::display::BitmapData tmp61 = bitmapData;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(384)
					::openfl::_legacy::geom::Rectangle tmp62 = tempRect;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(384)
					::openfl::_legacy::geom::Point tmp63 = tempPoint;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(384)
					result->copyPixels(tmp61,tmp62,tmp63,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(389)
	tempPoint->setTo((int)0,(int)0);
	HX_STACK_LINE(390)
	int tmp35 = result->get_height();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(390)
	tempRect->setTo((int)0,(int)0,(int)1,tmp35);
	HX_STACK_LINE(391)
	{
		HX_STACK_LINE(391)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		while((true)){
			HX_STACK_LINE(391)
			bool tmp36 = (_g < numHorizontalFrames);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(391)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(391)
			if ((tmp37)){
				HX_STACK_LINE(391)
				break;
			}
			HX_STACK_LINE(391)
			int tmp38 = (_g)++;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(391)
			int i = tmp38;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(393)
			int tmp39 = i;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(393)
			int tmp40 = frameWidth;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(393)
			int tmp41 = ((int)2 * borderX);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(393)
			int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(393)
			int tmp43 = spaceX;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(393)
			int tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(393)
			int tmp45 = (tmp39 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(393)
			int tmp46 = borderX;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(393)
			int tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(393)
			tempRect->x = tmp47;
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(395)
				while((true)){
					HX_STACK_LINE(395)
					bool tmp48 = (_g1 < borderX);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(395)
					bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(395)
					if ((tmp49)){
						HX_STACK_LINE(395)
						break;
					}
					HX_STACK_LINE(395)
					int tmp50 = (_g1)++;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(395)
					int j = tmp50;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(397)
					Float tmp51 = (tempRect->x - j);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(397)
					Float tmp52 = (tmp51 - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(397)
					tempPoint->x = tmp52;
					HX_STACK_LINE(398)
					::openfl::_legacy::display::BitmapData tmp53 = result;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(398)
					::openfl::_legacy::geom::Rectangle tmp54 = tempRect;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(398)
					::openfl::_legacy::geom::Point tmp55 = tempPoint;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(398)
					result->copyPixels(tmp53,tmp54,tmp55,null(),null(),null());
				}
			}
			HX_STACK_LINE(401)
			int tmp48 = (frameWidth - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(401)
			hx::AddEq(tempRect->x,tmp48);
			HX_STACK_LINE(403)
			{
				HX_STACK_LINE(403)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(403)
				while((true)){
					HX_STACK_LINE(403)
					bool tmp49 = (_g1 < borderX);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(403)
					bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(403)
					if ((tmp50)){
						HX_STACK_LINE(403)
						break;
					}
					HX_STACK_LINE(403)
					int tmp51 = (_g1)++;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(403)
					int j = tmp51;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(405)
					Float tmp52 = (tempRect->x + j);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(405)
					Float tmp53 = (tmp52 + (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(405)
					tempPoint->x = tmp53;
					HX_STACK_LINE(406)
					::openfl::_legacy::display::BitmapData tmp54 = result;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(406)
					::openfl::_legacy::geom::Rectangle tmp55 = tempRect;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(406)
					::openfl::_legacy::geom::Point tmp56 = tempPoint;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(406)
					result->copyPixels(tmp54,tmp55,tmp56,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(410)
	tempPoint->setTo((int)0,(int)0);
	HX_STACK_LINE(411)
	int tmp36 = result->get_width();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(411)
	tempRect->setTo((int)0,(int)0,tmp36,(int)1);
	HX_STACK_LINE(412)
	{
		HX_STACK_LINE(412)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(412)
		while((true)){
			HX_STACK_LINE(412)
			bool tmp37 = (_g < numVerticalFrames);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(412)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(412)
			if ((tmp38)){
				HX_STACK_LINE(412)
				break;
			}
			HX_STACK_LINE(412)
			int tmp39 = (_g)++;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(412)
			int i = tmp39;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(414)
			int tmp40 = i;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(414)
			int tmp41 = frameHeight;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(414)
			int tmp42 = ((int)2 * borderY);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(414)
			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(414)
			int tmp44 = spaceY;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(414)
			int tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(414)
			int tmp46 = (tmp40 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(414)
			int tmp47 = borderY;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(414)
			int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(414)
			tempRect->y = tmp48;
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(416)
				while((true)){
					HX_STACK_LINE(416)
					bool tmp49 = (_g1 < borderY);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(416)
					bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(416)
					if ((tmp50)){
						HX_STACK_LINE(416)
						break;
					}
					HX_STACK_LINE(416)
					int tmp51 = (_g1)++;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(416)
					int j = tmp51;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(418)
					Float tmp52 = (tempRect->y - j);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(418)
					Float tmp53 = (tmp52 - (int)1);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(418)
					tempPoint->y = tmp53;
					HX_STACK_LINE(419)
					::openfl::_legacy::display::BitmapData tmp54 = result;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(419)
					::openfl::_legacy::geom::Rectangle tmp55 = tempRect;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(419)
					::openfl::_legacy::geom::Point tmp56 = tempPoint;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(419)
					result->copyPixels(tmp54,tmp55,tmp56,null(),null(),null());
				}
			}
			HX_STACK_LINE(422)
			int tmp49 = (frameHeight - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(422)
			hx::AddEq(tempRect->y,tmp49);
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(424)
				while((true)){
					HX_STACK_LINE(424)
					bool tmp50 = (_g1 < borderY);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(424)
					bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(424)
					if ((tmp51)){
						HX_STACK_LINE(424)
						break;
					}
					HX_STACK_LINE(424)
					int tmp52 = (_g1)++;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(424)
					int j = tmp52;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(426)
					Float tmp53 = (tempRect->y + j);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(426)
					Float tmp54 = (tmp53 + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(426)
					tempPoint->y = tmp54;
					HX_STACK_LINE(427)
					::openfl::_legacy::display::BitmapData tmp55 = result;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(427)
					::openfl::_legacy::geom::Rectangle tmp56 = tempRect;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(427)
					::openfl::_legacy::geom::Point tmp57 = tempPoint;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(427)
					result->copyPixels(tmp55,tmp56,tmp57,null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(431)
	result->unlock(null());
	HX_STACK_LINE(432)
	::openfl::_legacy::display::BitmapData tmp37 = result;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(432)
	return tmp37;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxBitmapDataUtil_obj,addSpacesAndBorders,return )

::openfl::_legacy::display::BitmapData FlxBitmapDataUtil_obj::generateRotations( ::openfl::_legacy::display::BitmapData brush,hx::Null< int >  __o_rotations,hx::Null< bool >  __o_antiAliasing,hx::Null< bool >  __o_autoBuffer){
int rotations = __o_rotations.Default(16);
bool antiAliasing = __o_antiAliasing.Default(false);
bool autoBuffer = __o_autoBuffer.Default(false);
	HX_STACK_FRAME("flixel.util.FlxBitmapDataUtil","generateRotations",0xe085af05,"flixel.util.FlxBitmapDataUtil.generateRotations","flixel/util/FlxBitmapDataUtil.hx",445,0xf477b24b)
	HX_STACK_ARG(brush,"brush")
	HX_STACK_ARG(rotations,"rotations")
	HX_STACK_ARG(antiAliasing,"antiAliasing")
	HX_STACK_ARG(autoBuffer,"autoBuffer")
{
		HX_STACK_LINE(446)
		int tmp = brush->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		int brushWidth = tmp;		HX_STACK_VAR(brushWidth,"brushWidth");
		HX_STACK_LINE(447)
		int tmp1 = brush->get_height();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(447)
		int brushHeight = tmp1;		HX_STACK_VAR(brushHeight,"brushHeight");
		HX_STACK_LINE(448)
		bool tmp2 = (brushHeight > brushWidth);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(448)
		if ((tmp2)){
			HX_STACK_LINE(448)
			tmp3 = brushHeight;
		}
		else{
			HX_STACK_LINE(448)
			tmp3 = brushWidth;
		}
		HX_STACK_LINE(448)
		int max = tmp3;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(449)
		bool tmp4 = autoBuffer;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(449)
		if ((tmp4)){
			HX_STACK_LINE(449)
			Float tmp6 = (max * ((Float)1.5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(449)
			tmp5 = ::Std_obj::_int(tmp6);
		}
		else{
			HX_STACK_LINE(449)
			tmp5 = max;
		}
		HX_STACK_LINE(449)
		max = tmp5;
		HX_STACK_LINE(451)
		int tmp6 = rotations;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(451)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(451)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(451)
		int rows = tmp8;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(452)
		Float tmp9 = (Float(rotations) / Float(rows));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(452)
		int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(452)
		int columns = tmp10;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(453)
		Float tmp11 = (Float((int)360) / Float(rotations));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(453)
		Float bakedRotationAngle = tmp11;		HX_STACK_VAR(bakedRotationAngle,"bakedRotationAngle");
		HX_STACK_LINE(455)
		int tmp12 = (max * columns);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(455)
		int width = tmp12;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(456)
		int tmp13 = (max * rows);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(456)
		int height = tmp13;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(458)
		::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(458)
		::openfl::_legacy::display::BitmapData result = tmp14;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(460)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(461)
		int column = (int)0;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(462)
		Float bakedAngle = (int)0;		HX_STACK_VAR(bakedAngle,"bakedAngle");
		HX_STACK_LINE(463)
		Float tmp15 = (brushWidth * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(463)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(463)
		int halfBrushWidth = tmp16;		HX_STACK_VAR(halfBrushWidth,"halfBrushWidth");
		HX_STACK_LINE(464)
		Float tmp17 = (brushHeight * ((Float)0.5));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(464)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(464)
		int halfBrushHeight = tmp18;		HX_STACK_VAR(halfBrushHeight,"halfBrushHeight");
		HX_STACK_LINE(465)
		Float tmp19 = (max * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(465)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(465)
		int midpointX = tmp20;		HX_STACK_VAR(midpointX,"midpointX");
		HX_STACK_LINE(466)
		Float tmp21 = (max * ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(466)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(466)
		int midpointY = tmp22;		HX_STACK_VAR(midpointY,"midpointY");
		HX_STACK_LINE(468)
		while((true)){
			HX_STACK_LINE(468)
			bool tmp23 = (row < rows);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(468)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(468)
			if ((tmp24)){
				HX_STACK_LINE(468)
				break;
			}
			HX_STACK_LINE(470)
			column = (int)0;
			HX_STACK_LINE(471)
			while((true)){
				HX_STACK_LINE(471)
				bool tmp25 = (column < columns);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(471)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(471)
				if ((tmp26)){
					HX_STACK_LINE(471)
					break;
				}
				HX_STACK_LINE(473)
				::flixel::math::FlxMatrix tmp27 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(473)
				tmp27->identity();
				HX_STACK_LINE(474)
				::flixel::math::FlxMatrix tmp28 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(474)
				int tmp29 = halfBrushWidth;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(474)
				int tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(474)
				int tmp31 = halfBrushHeight;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(474)
				int tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(474)
				tmp28->translate(tmp30,tmp32);
				HX_STACK_LINE(475)
				::flixel::math::FlxMatrix tmp33 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(475)
				Float tmp34 = bakedAngle;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(475)
				Float tmp35 = ::Math_obj::PI;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(475)
				Float tmp36 = (Float(tmp35) / Float((int)180));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(475)
				Float tmp37 = (tmp34 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(475)
				tmp33->rotate(tmp37);
				HX_STACK_LINE(476)
				::flixel::math::FlxMatrix tmp38 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(476)
				int tmp39 = (max * column);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(476)
				int tmp40 = midpointX;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(476)
				int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(476)
				int tmp42 = midpointY;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(476)
				tmp38->translate(tmp41,tmp42);
				HX_STACK_LINE(477)
				hx::AddEq(bakedAngle,bakedRotationAngle);
				HX_STACK_LINE(478)
				::openfl::_legacy::display::BitmapData tmp43 = brush;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(478)
				::flixel::math::FlxMatrix tmp44 = ::flixel::util::FlxBitmapDataUtil_obj::matrix;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(478)
				bool tmp45 = antiAliasing;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(478)
				result->draw(tmp43,tmp44,null(),null(),null(),tmp45);
				HX_STACK_LINE(479)
				(column)++;
			}
			HX_STACK_LINE(481)
			hx::AddEq(midpointY,max);
			HX_STACK_LINE(482)
			(row)++;
		}
		HX_STACK_LINE(485)
		::openfl::_legacy::display::BitmapData tmp23 = result;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(485)
		return tmp23;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxBitmapDataUtil_obj,generateRotations,return )


FlxBitmapDataUtil_obj::FlxBitmapDataUtil_obj()
{
}

bool FlxBitmapDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = matrix; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { outValue = compare_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getDiff") ) { outValue = getDiff_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceColor") ) { outValue = replaceColor_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMemorySize") ) { outValue = getMemorySize_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateRotations") ) { outValue = generateRotations_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mergeColorComponent") ) { outValue = mergeColorComponent_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"addSpacesAndBorders") ) { outValue = addSpacesAndBorders_dyn(); return true;  }
	}
	return false;
}

bool FlxBitmapDataUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=ioValue.Cast< ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(void *) &FlxBitmapDataUtil_obj::matrix,HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBitmapDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxBitmapDataUtil_obj::matrix,"matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBitmapDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxBitmapDataUtil_obj::matrix,"matrix");
};

#endif

hx::Class FlxBitmapDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("mergeColorComponent","\xb2","\x23","\x8f","\xc5"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("getDiff","\xbb","\x0b","\xec","\x14"),
	HX_HCSTRING("getMemorySize","\x98","\x08","\x07","\x4f"),
	HX_HCSTRING("replaceColor","\x8f","\x5c","\xeb","\x3d"),
	HX_HCSTRING("addSpacesAndBorders","\x7e","\x17","\x0f","\x63"),
	HX_HCSTRING("generateRotations","\x80","\xcb","\xc6","\x62"),
	::String(null()) };

void FlxBitmapDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxBitmapDataUtil","\xb3","\x4e","\x39","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBitmapDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBitmapDataUtil_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxBitmapDataUtil_obj >;
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

void FlxBitmapDataUtil_obj::__boot()
{
	matrix= ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace flixel
} // end namespace util
