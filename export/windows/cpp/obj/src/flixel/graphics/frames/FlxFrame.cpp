#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
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
namespace graphics{
namespace frames{

Void FlxFrame_obj::__construct(::flixel::graphics::FlxGraphic parent,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",20,0x6c7f608b)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(__o_angle,"angle")
HX_STACK_ARG(__o_flipX,"flipX")
HX_STACK_ARG(__o_flipY,"flipY")
int angle = __o_angle.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
{
	HX_STACK_LINE(25)
	this->matrix = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(24)
	this->rect = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(23)
	this->point2 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(22)
	this->point1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(86)
	this->parent = parent;
	HX_STACK_LINE(87)
	this->angle = angle;
	HX_STACK_LINE(88)
	this->flipX = flipX;
	HX_STACK_LINE(89)
	this->flipY = flipY;
	HX_STACK_LINE(91)
	this->type = (int)0;
	HX_STACK_LINE(93)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(93)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(93)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(93)
		point->_inPool = false;
		HX_STACK_LINE(93)
		tmp = point;
	}
	HX_STACK_LINE(93)
	this->sourceSize = tmp;
	HX_STACK_LINE(94)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(94)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(94)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(94)
		point->_inPool = false;
		HX_STACK_LINE(94)
		tmp1 = point;
	}
	HX_STACK_LINE(94)
	this->offset = tmp1;
	HX_STACK_LINE(96)
	Array< Float > tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		Array< Float > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(96)
		this1 = Array_obj< Float >::__new();
		HX_STACK_LINE(96)
		this1->__SetSizeExact((int)6);
		HX_STACK_LINE(96)
		tmp2 = this1;
	}
	HX_STACK_LINE(96)
	this->blitMatrix = tmp2;
	HX_STACK_LINE(97)
	bool tmp3 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	if ((tmp3)){
		HX_STACK_LINE(99)
		Array< Float > tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(99)
			this1 = Array_obj< Float >::__new();
			HX_STACK_LINE(99)
			this1->__SetSizeExact((int)6);
			HX_STACK_LINE(99)
			tmp4 = this1;
		}
		HX_STACK_LINE(99)
		this->tileMatrix = tmp4;
	}
}
;
	return null();
}

//FlxFrame_obj::~FlxFrame_obj() { }

Dynamic FlxFrame_obj::__CreateEmpty() { return  new FlxFrame_obj; }
hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new(::flixel::graphics::FlxGraphic parent,hx::Null< int >  __o_angle,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY)
{  hx::ObjectPtr< FlxFrame_obj > _result_ = new FlxFrame_obj();
	_result_->__construct(parent,__o_angle,__o_flipX,__o_flipY);
	return _result_;}

Dynamic FlxFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrame_obj > _result_ = new FlxFrame_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *FlxFrame_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxFrame_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxFrame_obj >(this); }
Void FlxFrame_obj::cacheFrameMatrix( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","cacheFrameMatrix",0xffbbac28,"flixel.graphics.frames.FlxFrame.cacheFrameMatrix","flixel/graphics/frames/FlxFrame.hx",105,0x6c7f608b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::flixel::math::FlxMatrix tmp = this->matrix;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(106)
			::flixel::math::FlxMatrix mat = tmp;		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(106)
			mat->identity();
			HX_STACK_LINE(106)
			{
				HX_STACK_LINE(106)
				::flixel::math::FlxRect tmp1 = this->frame;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(106)
				Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(106)
				Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(106)
				Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(106)
				mat->translate(tmp3,tmp6);
			}
			HX_STACK_LINE(106)
			int tmp1 = this->angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			bool tmp2 = (tmp1 == (int)90);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			if ((tmp2)){
				HX_STACK_LINE(106)
				{
					HX_STACK_LINE(106)
					Float tmp3 = mat->b;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(106)
					Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(106)
					Float tmp5 = mat->a;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(106)
					Float tmp6 = mat->d;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(106)
					Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(106)
					Float tmp8 = mat->c;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(106)
					Float tmp9 = mat->ty;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(106)
					Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(106)
					Float tmp11 = mat->tx;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(106)
					mat->setTo(tmp4,tmp5,tmp7,tmp8,tmp10,tmp11);
					HX_STACK_LINE(106)
					mat;
				}
				HX_STACK_LINE(106)
				::flixel::math::FlxRect tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				Float tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				mat->translate(tmp4,(int)0);
			}
			else{
				HX_STACK_LINE(106)
				int tmp3 = this->angle;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(106)
				bool tmp4 = (tmp3 == (int)-90);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(106)
				if ((tmp4)){
					HX_STACK_LINE(106)
					{
						HX_STACK_LINE(106)
						Float tmp5 = mat->b;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(106)
						Float tmp6 = mat->a;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(106)
						Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(106)
						Float tmp8 = mat->d;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(106)
						Float tmp9 = mat->c;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(106)
						Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(106)
						Float tmp11 = mat->ty;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(106)
						Float tmp12 = mat->tx;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(106)
						Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(106)
						mat->setTo(tmp5,tmp7,tmp8,tmp10,tmp11,tmp13);
						HX_STACK_LINE(106)
						mat;
					}
					HX_STACK_LINE(106)
					::flixel::math::FlxRect tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(106)
					Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(106)
					mat->translate((int)0,tmp6);
				}
			}
			HX_STACK_LINE(106)
			::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			::flixel::math::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			mat->translate(tmp4,tmp6);
			HX_STACK_LINE(106)
			mat;
		}
		HX_STACK_LINE(107)
		Array< Float > tmp = this->blitMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::flixel::math::FlxMatrix tmp1 = this->matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		Float tmp2 = tmp1->a;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Float tmp3 = tmp->__unsafe_set((int)0,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		tmp3;
		HX_STACK_LINE(108)
		Array< Float > tmp4 = this->blitMatrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::flixel::math::FlxMatrix tmp5 = this->matrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		Float tmp6 = tmp5->b;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		Float tmp7 = tmp4->__unsafe_set((int)1,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		tmp7;
		HX_STACK_LINE(109)
		Array< Float > tmp8 = this->blitMatrix;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		::flixel::math::FlxMatrix tmp9 = this->matrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		Float tmp10 = tmp9->c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(109)
		Float tmp11 = tmp8->__unsafe_set((int)2,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(109)
		tmp11;
		HX_STACK_LINE(110)
		Array< Float > tmp12 = this->blitMatrix;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		::flixel::math::FlxMatrix tmp13 = this->matrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(110)
		Float tmp14 = tmp13->d;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(110)
		Float tmp15 = tmp12->__unsafe_set((int)3,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(110)
		tmp15;
		HX_STACK_LINE(111)
		Array< Float > tmp16 = this->blitMatrix;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(111)
		::flixel::math::FlxMatrix tmp17 = this->matrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(111)
		Float tmp18 = tmp17->tx;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(111)
		Float tmp19 = tmp16->__unsafe_set((int)4,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(111)
		tmp19;
		HX_STACK_LINE(112)
		Array< Float > tmp20 = this->blitMatrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(112)
		::flixel::math::FlxMatrix tmp21 = this->matrix;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(112)
		Float tmp22 = tmp21->ty;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(112)
		Float tmp23 = tmp20->__unsafe_set((int)5,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(112)
		tmp23;
		HX_STACK_LINE(114)
		bool tmp24 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(114)
		if ((tmp24)){
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(116)
				::flixel::math::FlxMatrix mat = tmp25;		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(116)
				mat->identity();
				HX_STACK_LINE(116)
				int tmp26 = this->angle;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(116)
				bool tmp27 = (tmp26 == (int)90);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(116)
				if ((tmp27)){
					HX_STACK_LINE(116)
					{
						HX_STACK_LINE(116)
						Float tmp28 = mat->b;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(116)
						Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(116)
						Float tmp30 = mat->a;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(116)
						Float tmp31 = mat->d;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(116)
						Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(116)
						Float tmp33 = mat->c;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(116)
						Float tmp34 = mat->ty;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(116)
						Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(116)
						Float tmp36 = mat->tx;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(116)
						mat->setTo(tmp29,tmp30,tmp32,tmp33,tmp35,tmp36);
						HX_STACK_LINE(116)
						mat;
					}
					HX_STACK_LINE(116)
					::flixel::math::FlxRect tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(116)
					Float tmp29 = tmp28->height;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(116)
					mat->translate(tmp29,(int)0);
				}
				else{
					HX_STACK_LINE(116)
					int tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(116)
					bool tmp29 = (tmp28 == (int)-90);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(116)
					if ((tmp29)){
						HX_STACK_LINE(116)
						{
							HX_STACK_LINE(116)
							Float tmp30 = mat->b;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(116)
							Float tmp31 = mat->a;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(116)
							Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(116)
							Float tmp33 = mat->d;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(116)
							Float tmp34 = mat->c;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(116)
							Float tmp35 = -(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(116)
							Float tmp36 = mat->ty;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(116)
							Float tmp37 = mat->tx;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(116)
							Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(116)
							mat->setTo(tmp30,tmp32,tmp33,tmp35,tmp36,tmp38);
							HX_STACK_LINE(116)
							mat;
						}
						HX_STACK_LINE(116)
						::flixel::math::FlxRect tmp30 = this->frame;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(116)
						Float tmp31 = tmp30->width;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(116)
						mat->translate((int)0,tmp31);
					}
				}
				HX_STACK_LINE(116)
				::flixel::math::FlxPoint tmp28 = this->offset;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(116)
				Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(116)
				::flixel::math::FlxPoint tmp30 = this->offset;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(116)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(116)
				mat->translate(tmp29,tmp31);
				HX_STACK_LINE(116)
				mat;
			}
			HX_STACK_LINE(117)
			Array< Float > tmp25 = this->tileMatrix;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(117)
			::flixel::math::FlxMatrix tmp26 = this->matrix;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(117)
			Float tmp27 = tmp26->a;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(117)
			Float tmp28 = tmp25->__unsafe_set((int)0,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(117)
			tmp28;
			HX_STACK_LINE(118)
			Array< Float > tmp29 = this->tileMatrix;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(118)
			::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(118)
			Float tmp31 = tmp30->b;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(118)
			Float tmp32 = tmp29->__unsafe_set((int)1,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(118)
			tmp32;
			HX_STACK_LINE(119)
			Array< Float > tmp33 = this->tileMatrix;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(119)
			::flixel::math::FlxMatrix tmp34 = this->matrix;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(119)
			Float tmp35 = tmp34->c;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(119)
			Float tmp36 = tmp33->__unsafe_set((int)2,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(119)
			tmp36;
			HX_STACK_LINE(120)
			Array< Float > tmp37 = this->tileMatrix;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(120)
			::flixel::math::FlxMatrix tmp38 = this->matrix;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(120)
			Float tmp39 = tmp38->d;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(120)
			Float tmp40 = tmp37->__unsafe_set((int)3,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(120)
			tmp40;
			HX_STACK_LINE(121)
			Array< Float > tmp41 = this->tileMatrix;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(121)
			::flixel::math::FlxMatrix tmp42 = this->matrix;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(121)
			Float tmp43 = tmp42->tx;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(121)
			Float tmp44 = tmp41->__unsafe_set((int)4,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(121)
			tmp44;
			HX_STACK_LINE(122)
			Array< Float > tmp45 = this->tileMatrix;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(122)
			::flixel::math::FlxMatrix tmp46 = this->matrix;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(122)
			Float tmp47 = tmp46->ty;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(122)
			Float tmp48 = tmp45->__unsafe_set((int)5,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(122)
			tmp48;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,cacheFrameMatrix,(void))

::flixel::math::FlxMatrix FlxFrame_obj::prepareBlitMatrix( ::flixel::math::FlxMatrix mat,hx::Null< bool >  __o_blit){
bool blit = __o_blit.Default(true);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareBlitMatrix",0xbf3c9041,"flixel.graphics.frames.FlxFrame.prepareBlitMatrix","flixel/graphics/frames/FlxFrame.hx",135,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(blit,"blit")
{
		HX_STACK_LINE(136)
		mat->identity();
		HX_STACK_LINE(138)
		bool tmp = blit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		if ((tmp)){
			HX_STACK_LINE(139)
			::flixel::math::FlxRect tmp1 = this->frame;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			Float tmp5 = tmp4->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			mat->translate(tmp3,tmp6);
		}
		HX_STACK_LINE(141)
		int tmp1 = this->angle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = (tmp1 == (int)90);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(143)
			{
				HX_STACK_LINE(143)
				Float tmp3 = mat->b;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(143)
				Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(143)
				Float tmp5 = mat->a;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(143)
				Float tmp6 = mat->d;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(143)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(143)
				Float tmp8 = mat->c;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				Float tmp9 = mat->ty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(143)
				Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				Float tmp11 = mat->tx;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(143)
				mat->setTo(tmp4,tmp5,tmp7,tmp8,tmp10,tmp11);
				HX_STACK_LINE(143)
				mat;
			}
			HX_STACK_LINE(144)
			::flixel::math::FlxRect tmp3 = this->frame;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			Float tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			mat->translate(tmp4,(int)0);
		}
		else{
			HX_STACK_LINE(146)
			int tmp3 = this->angle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			bool tmp4 = (tmp3 == (int)-90);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			if ((tmp4)){
				HX_STACK_LINE(148)
				{
					HX_STACK_LINE(148)
					Float tmp5 = mat->b;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(148)
					Float tmp6 = mat->a;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(148)
					Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(148)
					Float tmp8 = mat->d;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(148)
					Float tmp9 = mat->c;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(148)
					Float tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					Float tmp11 = mat->ty;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					Float tmp12 = mat->tx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(148)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(148)
					mat->setTo(tmp5,tmp7,tmp8,tmp10,tmp11,tmp13);
					HX_STACK_LINE(148)
					mat;
				}
				HX_STACK_LINE(149)
				::flixel::math::FlxRect tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(149)
				Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				mat->translate((int)0,tmp6);
			}
		}
		HX_STACK_LINE(152)
		::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		::flixel::math::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		mat->translate(tmp4,tmp6);
		HX_STACK_LINE(153)
		::flixel::math::FlxMatrix tmp7 = mat;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,prepareBlitMatrix,return )

::flixel::math::FlxMatrix FlxFrame_obj::rotateAndFlip( ::flixel::math::FlxMatrix mat,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","rotateAndFlip",0x835ac58d,"flixel.graphics.frames.FlxFrame.rotateAndFlip","flixel/graphics/frames/FlxFrame.hx",167,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(168)
		::flixel::math::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		int w = tmp2;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(169)
		::flixel::math::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		int h = tmp5;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(172)
		bool tmp6 = (rotation != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		if ((tmp6)){
			HX_STACK_LINE(174)
			int t = w;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(175)
			w = h;
			HX_STACK_LINE(176)
			h = t;
			HX_STACK_LINE(178)
			bool tmp7 = (rotation == (int)90);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(178)
			if ((tmp7)){
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					Float tmp8 = mat->b;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(180)
					Float tmp10 = mat->a;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(180)
					Float tmp11 = mat->d;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(180)
					Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(180)
					Float tmp13 = mat->c;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(180)
					Float tmp14 = mat->ty;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(180)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(180)
					Float tmp16 = mat->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(180)
					mat->setTo(tmp9,tmp10,tmp12,tmp13,tmp15,tmp16);
					HX_STACK_LINE(180)
					mat;
				}
				HX_STACK_LINE(181)
				::flixel::math::FlxPoint tmp8 = this->sourceSize;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				mat->translate(tmp9,(int)0);
			}
			else{
				HX_STACK_LINE(183)
				bool tmp8 = (rotation == (int)-90);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(183)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(183)
				if ((tmp9)){
					HX_STACK_LINE(183)
					tmp10 = (rotation == (int)-90);
				}
				else{
					HX_STACK_LINE(183)
					tmp10 = true;
				}
				HX_STACK_LINE(183)
				if ((tmp10)){
					HX_STACK_LINE(185)
					{
						HX_STACK_LINE(185)
						Float tmp11 = mat->b;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(185)
						Float tmp12 = mat->a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(185)
						Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(185)
						Float tmp14 = mat->d;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(185)
						Float tmp15 = mat->c;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(185)
						Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(185)
						Float tmp17 = mat->ty;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(185)
						Float tmp18 = mat->tx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(185)
						Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(185)
						mat->setTo(tmp11,tmp13,tmp14,tmp16,tmp17,tmp19);
						HX_STACK_LINE(185)
						mat;
					}
					HX_STACK_LINE(186)
					::flixel::math::FlxPoint tmp11 = this->sourceSize;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					mat->translate((int)0,tmp12);
				}
			}
		}
		HX_STACK_LINE(191)
		bool tmp7 = flipX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		if ((tmp7)){
			HX_STACK_LINE(193)
			mat->scale((int)-1,(int)1);
			HX_STACK_LINE(194)
			int tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(194)
			mat->translate(tmp8,(int)0);
		}
		HX_STACK_LINE(197)
		bool tmp8 = flipY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(197)
		if ((tmp8)){
			HX_STACK_LINE(199)
			mat->scale((int)1,(int)-1);
			HX_STACK_LINE(200)
			int tmp9 = h;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(200)
			mat->translate((int)0,tmp9);
		}
		HX_STACK_LINE(203)
		::flixel::math::FlxMatrix tmp9 = mat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(203)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,rotateAndFlip,return )

::flixel::math::FlxMatrix FlxFrame_obj::prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareTransformedBlitMatrix",0xc5ea2af6,"flixel.graphics.frames.FlxFrame.prepareTransformedBlitMatrix","flixel/graphics/frames/FlxFrame.hx",216,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(217)
		::flixel::math::FlxMatrix tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			Array< Float > tmp1 = this->blitMatrix;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			Float tmp2 = tmp1->__unsafe_get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			mat->a = tmp2;
			HX_STACK_LINE(217)
			Array< Float > tmp3 = this->blitMatrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			Float tmp4 = tmp3->__unsafe_get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			mat->b = tmp4;
			HX_STACK_LINE(217)
			Array< Float > tmp5 = this->blitMatrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			Float tmp6 = tmp5->__unsafe_get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			mat->c = tmp6;
			HX_STACK_LINE(217)
			Array< Float > tmp7 = this->blitMatrix;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(217)
			Float tmp8 = tmp7->__unsafe_get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(217)
			mat->d = tmp8;
			HX_STACK_LINE(217)
			Array< Float > tmp9 = this->blitMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(217)
			Float tmp10 = tmp9->__unsafe_get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(217)
			mat->tx = tmp10;
			HX_STACK_LINE(217)
			Array< Float > tmp11 = this->blitMatrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(217)
			Float tmp12 = tmp11->__unsafe_get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(217)
			mat->ty = tmp12;
			HX_STACK_LINE(217)
			tmp = mat;
		}
		HX_STACK_LINE(217)
		mat = tmp;
		HX_STACK_LINE(218)
		::flixel::math::FlxMatrix tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::flixel::math::FlxPoint tmp2 = this->sourceSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(218)
			int w = tmp4;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(218)
			::flixel::math::FlxPoint tmp5 = this->sourceSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			int h = tmp7;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(218)
			bool tmp8 = (rotation != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			if ((tmp8)){
				HX_STACK_LINE(218)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(218)
				w = h;
				HX_STACK_LINE(218)
				h = t;
				HX_STACK_LINE(218)
				bool tmp9 = (rotation == (int)90);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(218)
				if ((tmp9)){
					HX_STACK_LINE(218)
					{
						HX_STACK_LINE(218)
						Float tmp10 = mat->b;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(218)
						Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(218)
						Float tmp12 = mat->a;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(218)
						Float tmp13 = mat->d;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(218)
						Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(218)
						Float tmp15 = mat->c;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(218)
						Float tmp16 = mat->ty;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(218)
						Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(218)
						Float tmp18 = mat->tx;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(218)
						mat->setTo(tmp11,tmp12,tmp14,tmp15,tmp17,tmp18);
						HX_STACK_LINE(218)
						mat;
					}
					HX_STACK_LINE(218)
					::flixel::math::FlxPoint tmp10 = this->sourceSize;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(218)
					Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(218)
					mat->translate(tmp11,(int)0);
				}
				else{
					HX_STACK_LINE(218)
					bool tmp10 = (rotation == (int)-90);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(218)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(218)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(218)
					if ((tmp11)){
						HX_STACK_LINE(218)
						tmp12 = (rotation == (int)-90);
					}
					else{
						HX_STACK_LINE(218)
						tmp12 = true;
					}
					HX_STACK_LINE(218)
					if ((tmp12)){
						HX_STACK_LINE(218)
						{
							HX_STACK_LINE(218)
							Float tmp13 = mat->b;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(218)
							Float tmp14 = mat->a;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(218)
							Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(218)
							Float tmp16 = mat->d;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(218)
							Float tmp17 = mat->c;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(218)
							Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(218)
							Float tmp19 = mat->ty;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(218)
							Float tmp20 = mat->tx;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(218)
							Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(218)
							mat->setTo(tmp13,tmp15,tmp16,tmp18,tmp19,tmp21);
							HX_STACK_LINE(218)
							mat;
						}
						HX_STACK_LINE(218)
						::flixel::math::FlxPoint tmp13 = this->sourceSize;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(218)
						Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(218)
						mat->translate((int)0,tmp14);
					}
				}
			}
			HX_STACK_LINE(218)
			bool tmp9 = flipX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(218)
			if ((tmp9)){
				HX_STACK_LINE(218)
				mat->scale((int)-1,(int)1);
				HX_STACK_LINE(218)
				int tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(218)
				mat->translate(tmp10,(int)0);
			}
			HX_STACK_LINE(218)
			bool tmp10 = flipY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(218)
			if ((tmp10)){
				HX_STACK_LINE(218)
				mat->scale((int)1,(int)-1);
				HX_STACK_LINE(218)
				int tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(218)
				mat->translate((int)0,tmp11);
			}
			HX_STACK_LINE(218)
			tmp1 = mat;
		}
		HX_STACK_LINE(218)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareTransformedBlitMatrix,return )

::flixel::math::FlxMatrix FlxFrame_obj::prepareMatrix( ::flixel::math::FlxMatrix mat,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareMatrix",0xbf883cac,"flixel.graphics.frames.FlxFrame.prepareMatrix","flixel/graphics/frames/FlxFrame.hx",231,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
{
		HX_STACK_LINE(232)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		if ((tmp)){
			HX_STACK_LINE(234)
			mat->identity();
			HX_STACK_LINE(235)
			::flixel::math::FlxMatrix tmp1 = mat;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(235)
			return tmp1;
		}
		HX_STACK_LINE(238)
		Array< Float > tmp1 = this->tileMatrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		Float tmp2 = tmp1->__unsafe_get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		mat->a = tmp2;
		HX_STACK_LINE(239)
		Array< Float > tmp3 = this->tileMatrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		Float tmp4 = tmp3->__unsafe_get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(239)
		mat->b = tmp4;
		HX_STACK_LINE(240)
		Array< Float > tmp5 = this->tileMatrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		Float tmp6 = tmp5->__unsafe_get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		mat->c = tmp6;
		HX_STACK_LINE(241)
		Array< Float > tmp7 = this->tileMatrix;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		Float tmp8 = tmp7->__unsafe_get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(241)
		mat->d = tmp8;
		HX_STACK_LINE(242)
		Array< Float > tmp9 = this->tileMatrix;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(242)
		Float tmp10 = tmp9->__unsafe_get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		mat->tx = tmp10;
		HX_STACK_LINE(243)
		Array< Float > tmp11 = this->tileMatrix;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(243)
		Float tmp12 = tmp11->__unsafe_get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(243)
		mat->ty = tmp12;
		HX_STACK_LINE(245)
		bool tmp13 = flipX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(245)
		bool tmp14 = this->flipX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(245)
		bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(245)
		bool doFlipX = tmp15;		HX_STACK_VAR(doFlipX,"doFlipX");
		HX_STACK_LINE(246)
		bool tmp16 = flipY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(246)
		bool tmp17 = this->flipY;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(246)
		bool tmp18 = (tmp16 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(246)
		bool doFlipY = tmp18;		HX_STACK_VAR(doFlipY,"doFlipY");
		HX_STACK_LINE(248)
		bool tmp19 = (rotation == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(248)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(248)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(248)
		if ((tmp20)){
			HX_STACK_LINE(248)
			bool tmp22 = doFlipX;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(248)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(248)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(248)
			tmp21 = !(tmp24);
		}
		else{
			HX_STACK_LINE(248)
			tmp21 = false;
		}
		HX_STACK_LINE(248)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(248)
		if ((tmp21)){
			HX_STACK_LINE(248)
			bool tmp23 = doFlipY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(248)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(248)
			tmp22 = !(tmp24);
		}
		else{
			HX_STACK_LINE(248)
			tmp22 = false;
		}
		HX_STACK_LINE(248)
		if ((tmp22)){
			HX_STACK_LINE(250)
			::flixel::math::FlxMatrix tmp23 = mat;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(250)
			return tmp23;
		}
		HX_STACK_LINE(253)
		::flixel::math::FlxMatrix tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			::flixel::math::FlxPoint tmp24 = this->sourceSize;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(253)
			Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(253)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(253)
			int w = tmp26;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(253)
			::flixel::math::FlxPoint tmp27 = this->sourceSize;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(253)
			Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(253)
			int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(253)
			int h = tmp29;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(253)
			bool tmp30 = (rotation != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(253)
			if ((tmp30)){
				HX_STACK_LINE(253)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(253)
				w = h;
				HX_STACK_LINE(253)
				h = t;
				HX_STACK_LINE(253)
				bool tmp31 = (rotation == (int)90);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(253)
				if ((tmp31)){
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(253)
						Float tmp32 = mat->b;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(253)
						Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(253)
						Float tmp34 = mat->a;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(253)
						Float tmp35 = mat->d;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(253)
						Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(253)
						Float tmp37 = mat->c;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(253)
						Float tmp38 = mat->ty;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(253)
						Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(253)
						Float tmp40 = mat->tx;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(253)
						mat->setTo(tmp33,tmp34,tmp36,tmp37,tmp39,tmp40);
						HX_STACK_LINE(253)
						mat;
					}
					HX_STACK_LINE(253)
					::flixel::math::FlxPoint tmp32 = this->sourceSize;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(253)
					Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(253)
					mat->translate(tmp33,(int)0);
				}
				else{
					HX_STACK_LINE(253)
					bool tmp32 = (rotation == (int)-90);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(253)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(253)
					bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(253)
					if ((tmp33)){
						HX_STACK_LINE(253)
						tmp34 = (rotation == (int)-90);
					}
					else{
						HX_STACK_LINE(253)
						tmp34 = true;
					}
					HX_STACK_LINE(253)
					if ((tmp34)){
						HX_STACK_LINE(253)
						{
							HX_STACK_LINE(253)
							Float tmp35 = mat->b;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(253)
							Float tmp36 = mat->a;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(253)
							Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(253)
							Float tmp38 = mat->d;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(253)
							Float tmp39 = mat->c;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(253)
							Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(253)
							Float tmp41 = mat->ty;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(253)
							Float tmp42 = mat->tx;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(253)
							Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(253)
							mat->setTo(tmp35,tmp37,tmp38,tmp40,tmp41,tmp43);
							HX_STACK_LINE(253)
							mat;
						}
						HX_STACK_LINE(253)
						::flixel::math::FlxPoint tmp35 = this->sourceSize;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(253)
						Float tmp36 = tmp35->x;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(253)
						mat->translate((int)0,tmp36);
					}
				}
			}
			HX_STACK_LINE(253)
			bool tmp31 = doFlipX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(253)
			if ((tmp31)){
				HX_STACK_LINE(253)
				mat->scale((int)-1,(int)1);
				HX_STACK_LINE(253)
				int tmp32 = w;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(253)
				mat->translate(tmp32,(int)0);
			}
			HX_STACK_LINE(253)
			bool tmp32 = doFlipY;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(253)
			if ((tmp32)){
				HX_STACK_LINE(253)
				mat->scale((int)1,(int)-1);
				HX_STACK_LINE(253)
				int tmp33 = h;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(253)
				mat->translate((int)0,tmp33);
			}
			HX_STACK_LINE(253)
			tmp23 = mat;
		}
		HX_STACK_LINE(253)
		return tmp23;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareMatrix,return )

::flixel::math::FlxMatrix FlxFrame_obj::fillBlitMatrix( ::flixel::math::FlxMatrix mat){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","fillBlitMatrix",0xa3605eb5,"flixel.graphics.frames.FlxFrame.fillBlitMatrix","flixel/graphics/frames/FlxFrame.hx",257,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_LINE(258)
	Array< Float > tmp = this->blitMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	Float tmp1 = tmp->__unsafe_get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	mat->a = tmp1;
	HX_STACK_LINE(259)
	Array< Float > tmp2 = this->blitMatrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	Float tmp3 = tmp2->__unsafe_get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	mat->b = tmp3;
	HX_STACK_LINE(260)
	Array< Float > tmp4 = this->blitMatrix;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(260)
	Float tmp5 = tmp4->__unsafe_get((int)2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(260)
	mat->c = tmp5;
	HX_STACK_LINE(261)
	Array< Float > tmp6 = this->blitMatrix;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	Float tmp7 = tmp6->__unsafe_get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(261)
	mat->d = tmp7;
	HX_STACK_LINE(262)
	Array< Float > tmp8 = this->blitMatrix;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(262)
	Float tmp9 = tmp8->__unsafe_get((int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(262)
	mat->tx = tmp9;
	HX_STACK_LINE(263)
	Array< Float > tmp10 = this->blitMatrix;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(263)
	Float tmp11 = tmp10->__unsafe_get((int)5);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(263)
	mat->ty = tmp11;
	HX_STACK_LINE(264)
	::flixel::math::FlxMatrix tmp12 = mat;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(264)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,fillBlitMatrix,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::paint( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< bool >  __o_mergeAlpha,hx::Null< bool >  __o_disposeIfNotEqual){
bool mergeAlpha = __o_mergeAlpha.Default(false);
bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","paint",0x0c093522,"flixel.graphics.frames.FlxFrame.paint","flixel/graphics/frames/FlxFrame.hx",277,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
{
		HX_STACK_LINE(278)
		bool tmp = (point == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		if ((tmp)){
			HX_STACK_LINE(280)
			::openfl::_legacy::geom::Point tmp1 = this->point1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			point = tmp1;
			HX_STACK_LINE(281)
			point->setTo((int)0,(int)0);
		}
		HX_STACK_LINE(284)
		::openfl::_legacy::display::BitmapData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		{
			HX_STACK_LINE(284)
			::openfl::_legacy::display::BitmapData bmd1 = bmd;		HX_STACK_VAR(bmd1,"bmd1");
			HX_STACK_LINE(284)
			::flixel::math::FlxPoint tmp2 = this->sourceSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			int w = tmp4;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(284)
			::flixel::math::FlxPoint tmp5 = this->sourceSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(284)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			int h = tmp7;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(284)
			bool tmp8 = ((int)0 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(284)
			if ((tmp8)){
				HX_STACK_LINE(284)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(284)
				w = h;
				HX_STACK_LINE(284)
				h = t;
			}
			HX_STACK_LINE(284)
			bool tmp9 = (bmd1 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(284)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(284)
			if ((tmp9)){
				HX_STACK_LINE(284)
				tmp10 = disposeIfNotEqual;
			}
			else{
				HX_STACK_LINE(284)
				tmp10 = false;
			}
			HX_STACK_LINE(284)
			if ((tmp10)){
				HX_STACK_LINE(284)
				::openfl::_legacy::display::BitmapData tmp11 = bmd1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(284)
				int tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(284)
				int tmp13 = h;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				::openfl::_legacy::display::BitmapData tmp14 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(284)
				bmd1 = tmp14;
			}
			HX_STACK_LINE(284)
			bool tmp11 = (bmd1 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(284)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(284)
			if ((tmp11)){
				HX_STACK_LINE(284)
				bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(284)
				tmp12 = !(tmp14);
			}
			else{
				HX_STACK_LINE(284)
				tmp12 = false;
			}
			HX_STACK_LINE(284)
			if ((tmp12)){
				HX_STACK_LINE(284)
				::openfl::_legacy::geom::Rectangle tmp13 = this->rect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				Float tmp14 = point->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(284)
				Float tmp15 = point->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(284)
				int tmp16 = w;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(284)
				int tmp17 = h;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(284)
				tmp13->setTo(tmp14,tmp15,tmp16,tmp17);
				HX_STACK_LINE(284)
				::openfl::_legacy::geom::Rectangle tmp18 = this->rect;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(284)
				bmd1->fillRect(tmp18,(int)0);
			}
			else{
				HX_STACK_LINE(284)
				bool tmp13 = (bmd1 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				if ((tmp13)){
					HX_STACK_LINE(284)
					::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(284)
					bmd1 = tmp14;
				}
			}
			HX_STACK_LINE(284)
			tmp1 = bmd1;
		}
		HX_STACK_LINE(284)
		bmd = tmp1;
		HX_STACK_LINE(286)
		int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(286)
		bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(286)
		if ((tmp3)){
			HX_STACK_LINE(288)
			::openfl::_legacy::display::BitmapData tmp4 = bmd;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(288)
			return tmp4;
		}
		HX_STACK_LINE(291)
		int tmp4 = this->angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(291)
		if ((tmp5)){
			HX_STACK_LINE(293)
			{
				HX_STACK_LINE(293)
				::flixel::math::FlxPoint tmp6 = this->offset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(293)
				::flixel::math::FlxPoint _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(293)
				::openfl::_legacy::geom::Point tmp7 = this->point2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(293)
				::openfl::_legacy::geom::Point FlashPoint = tmp7;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(293)
				bool tmp8 = (FlashPoint == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				if ((tmp8)){
					HX_STACK_LINE(293)
					::openfl::_legacy::geom::Point tmp9 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(293)
					FlashPoint = tmp9;
				}
				HX_STACK_LINE(293)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(293)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(293)
				FlashPoint;
			}
			HX_STACK_LINE(294)
			::openfl::_legacy::geom::Point tmp6 = this->point2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			hx::AddEq(tmp6->x,point->x);
			HX_STACK_LINE(295)
			::openfl::_legacy::geom::Point tmp7 = this->point2;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(295)
			hx::AddEq(tmp7->y,point->y);
			HX_STACK_LINE(296)
			::flixel::graphics::FlxGraphic tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(296)
			::openfl::_legacy::display::BitmapData tmp9 = tmp8->bitmap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(296)
			::openfl::_legacy::geom::Rectangle tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				::flixel::math::FlxRect tmp11 = this->frame;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(296)
				::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(296)
				::openfl::_legacy::geom::Rectangle tmp12 = this->rect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(296)
				::openfl::_legacy::geom::Rectangle FlashRect = tmp12;		HX_STACK_VAR(FlashRect,"FlashRect");
				HX_STACK_LINE(296)
				bool tmp13 = (FlashRect == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(296)
				if ((tmp13)){
					HX_STACK_LINE(296)
					::openfl::_legacy::geom::Rectangle tmp14 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(296)
					FlashRect = tmp14;
				}
				HX_STACK_LINE(296)
				FlashRect->x = _this->x;
				HX_STACK_LINE(296)
				FlashRect->y = _this->y;
				HX_STACK_LINE(296)
				FlashRect->width = _this->width;
				HX_STACK_LINE(296)
				FlashRect->height = _this->height;
				HX_STACK_LINE(296)
				tmp10 = FlashRect;
			}
			HX_STACK_LINE(296)
			::openfl::_legacy::geom::Point tmp11 = this->point2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(296)
			bool tmp12 = mergeAlpha;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(296)
			bmd->copyPixels(tmp9,tmp10,tmp11,null(),null(),tmp12);
		}
		else{
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(300)
				::flixel::math::FlxMatrix tmp6 = this->matrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(300)
				::flixel::math::FlxMatrix mat = tmp6;		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(300)
				Array< Float > tmp7 = this->blitMatrix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(300)
				Float tmp8 = tmp7->__unsafe_get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(300)
				mat->a = tmp8;
				HX_STACK_LINE(300)
				Array< Float > tmp9 = this->blitMatrix;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(300)
				Float tmp10 = tmp9->__unsafe_get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(300)
				mat->b = tmp10;
				HX_STACK_LINE(300)
				Array< Float > tmp11 = this->blitMatrix;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(300)
				Float tmp12 = tmp11->__unsafe_get((int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(300)
				mat->c = tmp12;
				HX_STACK_LINE(300)
				Array< Float > tmp13 = this->blitMatrix;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(300)
				Float tmp14 = tmp13->__unsafe_get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(300)
				mat->d = tmp14;
				HX_STACK_LINE(300)
				Array< Float > tmp15 = this->blitMatrix;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(300)
				Float tmp16 = tmp15->__unsafe_get((int)4);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(300)
				mat->tx = tmp16;
				HX_STACK_LINE(300)
				Array< Float > tmp17 = this->blitMatrix;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(300)
				Float tmp18 = tmp17->__unsafe_get((int)5);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(300)
				mat->ty = tmp18;
				HX_STACK_LINE(300)
				mat;
			}
			HX_STACK_LINE(301)
			::flixel::math::FlxMatrix tmp6 = this->matrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			Float tmp8 = point->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			tmp6->translate(tmp7,tmp8);
			HX_STACK_LINE(302)
			::openfl::_legacy::geom::Rectangle tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(302)
				::flixel::math::FlxMatrix tmp10 = this->matrix;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(302)
				::flixel::math::FlxMatrix mat = tmp10;		HX_STACK_VAR(mat,"mat");
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp13 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(302)
						::flixel::math::FlxPoint tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(302)
						::flixel::math::FlxRect tmp15 = this->frame;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(302)
						Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						::flixel::math::FlxRect tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(302)
						Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(302)
						::flixel::math::FlxPoint tmp19 = tmp14->set(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(302)
						::flixel::math::FlxPoint point1 = tmp19;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(302)
						point1->_inPool = false;
						HX_STACK_LINE(302)
						tmp12 = point1;
					}
					HX_STACK_LINE(302)
					::flixel::math::FlxPoint point1 = tmp12;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(302)
					point1->_weak = true;
					HX_STACK_LINE(302)
					tmp11 = point1;
				}
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint p1 = tmp11;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp14 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(302)
						::flixel::math::FlxPoint tmp15 = tmp14->get();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(302)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::flixel::math::FlxRect tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(302)
							::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(302)
							tmp16 = (_this->x + _this->width);
						}
						HX_STACK_LINE(302)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::flixel::math::FlxRect tmp18 = this->frame;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(302)
							::flixel::math::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(302)
							tmp17 = (_this->y + _this->height);
						}
						HX_STACK_LINE(302)
						::flixel::math::FlxPoint tmp18 = tmp15->set(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(302)
						::flixel::math::FlxPoint point1 = tmp18;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(302)
						point1->_inPool = false;
						HX_STACK_LINE(302)
						tmp13 = point1;
					}
					HX_STACK_LINE(302)
					::flixel::math::FlxPoint point1 = tmp13;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(302)
					point1->_weak = true;
					HX_STACK_LINE(302)
					tmp12 = point1;
				}
				HX_STACK_LINE(302)
				::flixel::math::FlxPoint p2 = tmp12;		HX_STACK_VAR(p2,"p2");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					Float tmp13 = (p1->x * mat->a);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					Float tmp14 = (p1->y * mat->c);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					Float tmp16 = mat->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(302)
					Float x1 = tmp17;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(302)
					Float tmp18 = (p1->x * mat->b);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					Float tmp19 = (p1->y * mat->d);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(302)
					Float tmp21 = mat->ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(302)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(302)
					Float y1 = tmp22;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(302)
					Float tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(302)
					Float tmp24 = y1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(302)
					p1->set(tmp23,tmp24);
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					Float tmp13 = (p2->x * mat->a);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(302)
					Float tmp14 = (p2->y * mat->c);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					Float tmp16 = mat->tx;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(302)
					Float x1 = tmp17;		HX_STACK_VAR(x1,"x1");
					HX_STACK_LINE(302)
					Float tmp18 = (p2->x * mat->b);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					Float tmp19 = (p2->y * mat->d);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(302)
					Float tmp21 = mat->ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(302)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(302)
					Float y1 = tmp22;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(302)
					Float tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(302)
					Float tmp24 = y1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(302)
					p2->set(tmp23,tmp24);
				}
				HX_STACK_LINE(302)
				::flixel::math::FlxRect tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::flixel::math::FlxRect tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(302)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(302)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(302)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(302)
						::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(302)
						{
							HX_STACK_LINE(302)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(302)
							::flixel::math::FlxRect tmp17 = tmp16->get();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(302)
							::flixel::math::FlxRect _this = tmp17;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(302)
							_this->x = X;
							HX_STACK_LINE(302)
							_this->y = Y;
							HX_STACK_LINE(302)
							_this->width = Width;
							HX_STACK_LINE(302)
							_this->height = Height;
							HX_STACK_LINE(302)
							tmp15 = _this;
						}
						HX_STACK_LINE(302)
						::flixel::math::FlxRect rect = tmp15;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(302)
						rect->_inPool = false;
						HX_STACK_LINE(302)
						tmp14 = rect;
					}
					HX_STACK_LINE(302)
					::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(302)
					Float tmp15 = p1->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					Float tmp16 = p2->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(302)
					Float tmp17 = ::Math_obj::min(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(302)
					Float minX = tmp17;		HX_STACK_VAR(minX,"minX");
					HX_STACK_LINE(302)
					Float tmp18 = p1->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(302)
					Float tmp19 = p2->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(302)
					Float tmp20 = ::Math_obj::min(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(302)
					Float minY = tmp20;		HX_STACK_VAR(minY,"minY");
					HX_STACK_LINE(302)
					Float tmp21 = p1->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(302)
					Float tmp22 = p2->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(302)
					Float tmp23 = ::Math_obj::max(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(302)
					Float maxX = tmp23;		HX_STACK_VAR(maxX,"maxX");
					HX_STACK_LINE(302)
					Float tmp24 = p1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(302)
					Float tmp25 = p2->y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(302)
					Float tmp26 = ::Math_obj::max(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(302)
					Float maxY = tmp26;		HX_STACK_VAR(maxY,"maxY");
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						bool tmp27 = p1->_weak;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						if ((tmp27)){
							HX_STACK_LINE(302)
							p1->put();
						}
					}
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						bool tmp27 = p2->_weak;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						if ((tmp27)){
							HX_STACK_LINE(302)
							p2->put();
						}
					}
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						_this->x = minX;
						HX_STACK_LINE(302)
						_this->y = minY;
						HX_STACK_LINE(302)
						Float tmp27 = (maxX - minX);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(302)
						_this->width = tmp27;
						HX_STACK_LINE(302)
						Float tmp28 = (maxY - minY);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(302)
						_this->height = tmp28;
						HX_STACK_LINE(302)
						tmp13 = _this;
					}
				}
				HX_STACK_LINE(302)
				::flixel::math::FlxRect flxRect = tmp13;		HX_STACK_VAR(flxRect,"flxRect");
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					::openfl::_legacy::geom::Rectangle tmp14 = this->rect;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					::openfl::_legacy::geom::Rectangle FlashRect = tmp14;		HX_STACK_VAR(FlashRect,"FlashRect");
					HX_STACK_LINE(302)
					bool tmp15 = (FlashRect == null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					if ((tmp15)){
						HX_STACK_LINE(302)
						::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						FlashRect = tmp16;
					}
					HX_STACK_LINE(302)
					FlashRect->x = flxRect->x;
					HX_STACK_LINE(302)
					FlashRect->y = flxRect->y;
					HX_STACK_LINE(302)
					FlashRect->width = flxRect->width;
					HX_STACK_LINE(302)
					FlashRect->height = flxRect->height;
					HX_STACK_LINE(302)
					FlashRect;
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					bool tmp14 = flxRect->_inPool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(302)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(302)
					if ((tmp15)){
						HX_STACK_LINE(302)
						flxRect->_inPool = true;
						HX_STACK_LINE(302)
						flxRect->_weak = false;
						HX_STACK_LINE(302)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp16 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(302)
						::flixel::math::FlxRect tmp17 = flxRect;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(302)
						tmp16->putUnsafe(tmp17);
					}
				}
				HX_STACK_LINE(302)
				tmp9 = this->rect;
			}
			HX_STACK_LINE(302)
			::openfl::_legacy::geom::Rectangle rect = tmp9;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(303)
			::flixel::graphics::FlxGraphic tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(303)
			::openfl::_legacy::display::BitmapData tmp11 = tmp10->bitmap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(303)
			::flixel::math::FlxMatrix tmp12 = this->matrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(303)
			::openfl::_legacy::geom::Rectangle tmp13 = rect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(303)
			bmd->draw(tmp11,tmp12,null(),null(),tmp13,null());
		}
		HX_STACK_LINE(306)
		::openfl::_legacy::display::BitmapData tmp6 = bmd;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,paint,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::paintRotatedAndFlipped( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_flipX,hx::Null< bool >  __o_flipY,hx::Null< bool >  __o_mergeAlpha,hx::Null< bool >  __o_disposeIfNotEqual){
int rotation = __o_rotation.Default(0);
bool flipX = __o_flipX.Default(false);
bool flipY = __o_flipY.Default(false);
bool mergeAlpha = __o_mergeAlpha.Default(false);
bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","paintRotatedAndFlipped",0x8f0fb1b2,"flixel.graphics.frames.FlxFrame.paintRotatedAndFlipped","flixel/graphics/frames/FlxFrame.hx",322,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(flipX,"flipX")
	HX_STACK_ARG(flipY,"flipY")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
{
		HX_STACK_LINE(323)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(323)
		bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(323)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(323)
		if ((tmp1)){
			HX_STACK_LINE(323)
			tmp2 = (rotation == (int)0);
		}
		else{
			HX_STACK_LINE(323)
			tmp2 = false;
		}
		HX_STACK_LINE(323)
		if ((tmp2)){
			HX_STACK_LINE(325)
			::openfl::_legacy::display::BitmapData tmp3 = bmd;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			::openfl::_legacy::geom::Point tmp4 = point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			bool tmp5 = mergeAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(325)
			bool tmp6 = disposeIfNotEqual;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(325)
			::openfl::_legacy::display::BitmapData tmp7 = this->paint(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(325)
			return tmp7;
		}
		HX_STACK_LINE(328)
		bool tmp3 = (point == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		if ((tmp3)){
			HX_STACK_LINE(330)
			::openfl::_legacy::geom::Point tmp4 = this->point2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			point = tmp4;
			HX_STACK_LINE(331)
			point->setTo((int)0,(int)0);
		}
		HX_STACK_LINE(334)
		::openfl::_legacy::display::BitmapData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		{
			HX_STACK_LINE(334)
			::openfl::_legacy::display::BitmapData bmd1 = bmd;		HX_STACK_VAR(bmd1,"bmd1");
			HX_STACK_LINE(334)
			::flixel::math::FlxPoint tmp5 = this->sourceSize;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(334)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(334)
			int w = tmp7;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(334)
			::flixel::math::FlxPoint tmp8 = this->sourceSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(334)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(334)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(334)
			int h = tmp10;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(334)
			bool tmp11 = (rotation != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(334)
			if ((tmp11)){
				HX_STACK_LINE(334)
				int t = w;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(334)
				w = h;
				HX_STACK_LINE(334)
				h = t;
			}
			HX_STACK_LINE(334)
			bool tmp12 = (bmd1 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(334)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(334)
			if ((tmp12)){
				HX_STACK_LINE(334)
				tmp13 = disposeIfNotEqual;
			}
			else{
				HX_STACK_LINE(334)
				tmp13 = false;
			}
			HX_STACK_LINE(334)
			if ((tmp13)){
				HX_STACK_LINE(334)
				::openfl::_legacy::display::BitmapData tmp14 = bmd1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(334)
				int tmp15 = w;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				int tmp16 = h;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(334)
				::openfl::_legacy::display::BitmapData tmp17 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(334)
				bmd1 = tmp17;
			}
			HX_STACK_LINE(334)
			bool tmp14 = (bmd1 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(334)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(334)
			if ((tmp14)){
				HX_STACK_LINE(334)
				bool tmp16 = mergeAlpha;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(334)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(334)
				tmp15 = !(tmp17);
			}
			else{
				HX_STACK_LINE(334)
				tmp15 = false;
			}
			HX_STACK_LINE(334)
			if ((tmp15)){
				HX_STACK_LINE(334)
				::openfl::_legacy::geom::Rectangle tmp16 = this->rect;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(334)
				Float tmp17 = point->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(334)
				Float tmp18 = point->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(334)
				int tmp19 = w;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(334)
				int tmp20 = h;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(334)
				tmp16->setTo(tmp17,tmp18,tmp19,tmp20);
				HX_STACK_LINE(334)
				::openfl::_legacy::geom::Rectangle tmp21 = this->rect;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(334)
				bmd1->fillRect(tmp21,(int)0);
			}
			else{
				HX_STACK_LINE(334)
				bool tmp16 = (bmd1 == null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(334)
				if ((tmp16)){
					HX_STACK_LINE(334)
					::openfl::_legacy::display::BitmapData tmp17 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(334)
					bmd1 = tmp17;
				}
			}
			HX_STACK_LINE(334)
			tmp4 = bmd1;
		}
		HX_STACK_LINE(334)
		bmd = tmp4;
		HX_STACK_LINE(336)
		int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		bool tmp6 = (tmp5 == (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(336)
		if ((tmp6)){
			HX_STACK_LINE(338)
			::openfl::_legacy::display::BitmapData tmp7 = bmd;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(338)
			return tmp7;
		}
		HX_STACK_LINE(341)
		bool tmp7 = flipX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(341)
		bool tmp8 = this->flipX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(341)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(341)
		bool doFlipX = tmp9;		HX_STACK_VAR(doFlipX,"doFlipX");
		HX_STACK_LINE(342)
		bool tmp10 = flipY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(342)
		bool tmp11 = this->flipY;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(342)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(342)
		bool doFlipY = tmp12;		HX_STACK_VAR(doFlipY,"doFlipY");
		HX_STACK_LINE(344)
		::flixel::math::FlxMatrix tmp13 = this->matrix;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(344)
		int tmp14 = rotation;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(344)
		bool tmp15 = doFlipX;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(344)
		bool tmp16 = doFlipY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(344)
		this->prepareTransformedBlitMatrix(tmp13,tmp14,tmp15,tmp16);
		HX_STACK_LINE(345)
		::flixel::math::FlxMatrix tmp17 = this->matrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(345)
		Float tmp18 = point->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(345)
		Float tmp19 = point->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(345)
		tmp17->translate(tmp18,tmp19);
		HX_STACK_LINE(346)
		::openfl::_legacy::geom::Rectangle tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			::flixel::math::FlxMatrix tmp21 = this->matrix;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(346)
			::flixel::math::FlxMatrix mat = tmp21;		HX_STACK_VAR(mat,"mat");
			HX_STACK_LINE(346)
			::flixel::math::FlxPoint tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp24 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(346)
					::flixel::math::FlxPoint tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(346)
					::flixel::math::FlxRect tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(346)
					Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(346)
					::flixel::math::FlxRect tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(346)
					Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(346)
					::flixel::math::FlxPoint tmp30 = tmp25->set(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(346)
					::flixel::math::FlxPoint point1 = tmp30;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(346)
					point1->_inPool = false;
					HX_STACK_LINE(346)
					tmp23 = point1;
				}
				HX_STACK_LINE(346)
				::flixel::math::FlxPoint point1 = tmp23;		HX_STACK_VAR(point1,"point1");
				HX_STACK_LINE(346)
				point1->_weak = true;
				HX_STACK_LINE(346)
				tmp22 = point1;
			}
			HX_STACK_LINE(346)
			::flixel::math::FlxPoint p1 = tmp22;		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(346)
			::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(346)
					::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(346)
					Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(346)
					{
						HX_STACK_LINE(346)
						::flixel::math::FlxRect tmp28 = this->frame;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(346)
						::flixel::math::FlxRect _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(346)
						tmp27 = (_this->x + _this->width);
					}
					HX_STACK_LINE(346)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(346)
					{
						HX_STACK_LINE(346)
						::flixel::math::FlxRect tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(346)
						::flixel::math::FlxRect _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(346)
						tmp28 = (_this->y + _this->height);
					}
					HX_STACK_LINE(346)
					::flixel::math::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(346)
					::flixel::math::FlxPoint point1 = tmp29;		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(346)
					point1->_inPool = false;
					HX_STACK_LINE(346)
					tmp24 = point1;
				}
				HX_STACK_LINE(346)
				::flixel::math::FlxPoint point1 = tmp24;		HX_STACK_VAR(point1,"point1");
				HX_STACK_LINE(346)
				point1->_weak = true;
				HX_STACK_LINE(346)
				tmp23 = point1;
			}
			HX_STACK_LINE(346)
			::flixel::math::FlxPoint p2 = tmp23;		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				Float tmp24 = (p1->x * mat->a);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(346)
				Float tmp25 = (p1->y * mat->c);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(346)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(346)
				Float tmp27 = mat->tx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(346)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(346)
				Float x1 = tmp28;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(346)
				Float tmp29 = (p1->x * mat->b);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(346)
				Float tmp30 = (p1->y * mat->d);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(346)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(346)
				Float tmp32 = mat->ty;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(346)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(346)
				Float y1 = tmp33;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(346)
				Float tmp34 = x1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(346)
				Float tmp35 = y1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(346)
				p1->set(tmp34,tmp35);
			}
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				Float tmp24 = (p2->x * mat->a);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(346)
				Float tmp25 = (p2->y * mat->c);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(346)
				Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(346)
				Float tmp27 = mat->tx;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(346)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(346)
				Float x1 = tmp28;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(346)
				Float tmp29 = (p2->x * mat->b);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(346)
				Float tmp30 = (p2->y * mat->d);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(346)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(346)
				Float tmp32 = mat->ty;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(346)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(346)
				Float y1 = tmp33;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(346)
				Float tmp34 = x1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(346)
				Float tmp35 = y1;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(346)
				p2->set(tmp34,tmp35);
			}
			HX_STACK_LINE(346)
			::flixel::math::FlxRect tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::flixel::math::FlxRect tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(346)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(346)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(346)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(346)
					::flixel::math::FlxRect tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(346)
					{
						HX_STACK_LINE(346)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp27 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(346)
						::flixel::math::FlxRect tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(346)
						::flixel::math::FlxRect _this = tmp28;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(346)
						_this->x = X;
						HX_STACK_LINE(346)
						_this->y = Y;
						HX_STACK_LINE(346)
						_this->width = Width;
						HX_STACK_LINE(346)
						_this->height = Height;
						HX_STACK_LINE(346)
						tmp26 = _this;
					}
					HX_STACK_LINE(346)
					::flixel::math::FlxRect rect = tmp26;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(346)
					rect->_inPool = false;
					HX_STACK_LINE(346)
					tmp25 = rect;
				}
				HX_STACK_LINE(346)
				::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(346)
				Float tmp26 = p1->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(346)
				Float tmp27 = p2->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(346)
				Float tmp28 = ::Math_obj::min(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(346)
				Float minX = tmp28;		HX_STACK_VAR(minX,"minX");
				HX_STACK_LINE(346)
				Float tmp29 = p1->y;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(346)
				Float tmp30 = p2->y;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(346)
				Float tmp31 = ::Math_obj::min(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(346)
				Float minY = tmp31;		HX_STACK_VAR(minY,"minY");
				HX_STACK_LINE(346)
				Float tmp32 = p1->x;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(346)
				Float tmp33 = p2->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(346)
				Float tmp34 = ::Math_obj::max(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(346)
				Float maxX = tmp34;		HX_STACK_VAR(maxX,"maxX");
				HX_STACK_LINE(346)
				Float tmp35 = p1->y;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(346)
				Float tmp36 = p2->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(346)
				Float tmp37 = ::Math_obj::max(tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(346)
				Float maxY = tmp37;		HX_STACK_VAR(maxY,"maxY");
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					bool tmp38 = p1->_weak;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(346)
					if ((tmp38)){
						HX_STACK_LINE(346)
						p1->put();
					}
				}
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					bool tmp38 = p2->_weak;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(346)
					if ((tmp38)){
						HX_STACK_LINE(346)
						p2->put();
					}
				}
				HX_STACK_LINE(346)
				{
					HX_STACK_LINE(346)
					_this->x = minX;
					HX_STACK_LINE(346)
					_this->y = minY;
					HX_STACK_LINE(346)
					Float tmp38 = (maxX - minX);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(346)
					_this->width = tmp38;
					HX_STACK_LINE(346)
					Float tmp39 = (maxY - minY);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(346)
					_this->height = tmp39;
					HX_STACK_LINE(346)
					tmp24 = _this;
				}
			}
			HX_STACK_LINE(346)
			::flixel::math::FlxRect flxRect = tmp24;		HX_STACK_VAR(flxRect,"flxRect");
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				::openfl::_legacy::geom::Rectangle tmp25 = this->rect;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(346)
				::openfl::_legacy::geom::Rectangle FlashRect = tmp25;		HX_STACK_VAR(FlashRect,"FlashRect");
				HX_STACK_LINE(346)
				bool tmp26 = (FlashRect == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(346)
				if ((tmp26)){
					HX_STACK_LINE(346)
					::openfl::_legacy::geom::Rectangle tmp27 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(346)
					FlashRect = tmp27;
				}
				HX_STACK_LINE(346)
				FlashRect->x = flxRect->x;
				HX_STACK_LINE(346)
				FlashRect->y = flxRect->y;
				HX_STACK_LINE(346)
				FlashRect->width = flxRect->width;
				HX_STACK_LINE(346)
				FlashRect->height = flxRect->height;
				HX_STACK_LINE(346)
				FlashRect;
			}
			HX_STACK_LINE(346)
			{
				HX_STACK_LINE(346)
				bool tmp25 = flxRect->_inPool;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(346)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(346)
				if ((tmp26)){
					HX_STACK_LINE(346)
					flxRect->_inPool = true;
					HX_STACK_LINE(346)
					flxRect->_weak = false;
					HX_STACK_LINE(346)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp27 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(346)
					::flixel::math::FlxRect tmp28 = flxRect;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(346)
					tmp27->putUnsafe(tmp28);
				}
			}
			HX_STACK_LINE(346)
			tmp20 = this->rect;
		}
		HX_STACK_LINE(346)
		::openfl::_legacy::geom::Rectangle rect = tmp20;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(347)
		::flixel::graphics::FlxGraphic tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(347)
		::openfl::_legacy::display::BitmapData tmp22 = tmp21->bitmap;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(347)
		::flixel::math::FlxMatrix tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(347)
		::openfl::_legacy::geom::Rectangle tmp24 = rect;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(347)
		bmd->draw(tmp22,tmp23,null(),null(),tmp24,null());
		HX_STACK_LINE(348)
		::openfl::_legacy::display::BitmapData tmp25 = bmd;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(348)
		return tmp25;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxFrame_obj,paintRotatedAndFlipped,return )

::openfl::_legacy::display::BitmapData FlxFrame_obj::checkInputBitmap( ::openfl::_legacy::display::BitmapData bmd,::openfl::_legacy::geom::Point point,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_mergeAlpha,hx::Null< bool >  __o_disposeIfNotEqual){
int rotation = __o_rotation.Default(0);
bool mergeAlpha = __o_mergeAlpha.Default(false);
bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","checkInputBitmap",0x11e1b8ad,"flixel.graphics.frames.FlxFrame.checkInputBitmap","flixel/graphics/frames/FlxFrame.hx",362,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(point,"point")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
	HX_STACK_ARG(disposeIfNotEqual,"disposeIfNotEqual")
{
		HX_STACK_LINE(363)
		::flixel::math::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(363)
		int w = tmp2;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(364)
		::flixel::math::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(364)
		int h = tmp5;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(366)
		bool tmp6 = (rotation != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(366)
		if ((tmp6)){
			HX_STACK_LINE(368)
			int t = w;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(369)
			w = h;
			HX_STACK_LINE(370)
			h = t;
		}
		HX_STACK_LINE(373)
		bool tmp7 = (bmd != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(373)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(373)
		if ((tmp7)){
			HX_STACK_LINE(373)
			tmp8 = disposeIfNotEqual;
		}
		else{
			HX_STACK_LINE(373)
			tmp8 = false;
		}
		HX_STACK_LINE(373)
		if ((tmp8)){
			HX_STACK_LINE(375)
			::openfl::_legacy::display::BitmapData tmp9 = bmd;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(375)
			int tmp10 = w;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(375)
			int tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(375)
			::openfl::_legacy::display::BitmapData tmp12 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(375)
			bmd = tmp12;
		}
		HX_STACK_LINE(378)
		bool tmp9 = (bmd != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(378)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(378)
		if ((tmp9)){
			HX_STACK_LINE(378)
			bool tmp11 = mergeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(378)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(378)
			tmp10 = !(tmp12);
		}
		else{
			HX_STACK_LINE(378)
			tmp10 = false;
		}
		HX_STACK_LINE(378)
		if ((tmp10)){
			HX_STACK_LINE(380)
			::openfl::_legacy::geom::Rectangle tmp11 = this->rect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(380)
			Float tmp12 = point->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(380)
			Float tmp13 = point->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(380)
			int tmp14 = w;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(380)
			int tmp15 = h;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(380)
			tmp11->setTo(tmp12,tmp13,tmp14,tmp15);
			HX_STACK_LINE(381)
			::openfl::_legacy::geom::Rectangle tmp16 = this->rect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(381)
			bmd->fillRect(tmp16,(int)0);
		}
		else{
			HX_STACK_LINE(383)
			bool tmp11 = (bmd == null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(383)
			if ((tmp11)){
				HX_STACK_LINE(385)
				::openfl::_legacy::display::BitmapData tmp12 = ::openfl::_legacy::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(385)
				bmd = tmp12;
			}
		}
		HX_STACK_LINE(388)
		::openfl::_legacy::display::BitmapData tmp11 = bmd;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(388)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxFrame_obj,checkInputBitmap,return )

::openfl::_legacy::geom::Rectangle FlxFrame_obj::getDrawFrameRect( ::flixel::math::FlxMatrix mat){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","getDrawFrameRect",0x7930f1d3,"flixel.graphics.frames.FlxFrame.getDrawFrameRect","flixel/graphics/frames/FlxFrame.hx",399,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_LINE(400)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(400)
	{
		HX_STACK_LINE(400)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(400)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(400)
			::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(400)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(400)
			::flixel::math::FlxRect tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(400)
			Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(400)
			::flixel::math::FlxPoint tmp8 = tmp3->set(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(400)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(400)
			point->_inPool = false;
			HX_STACK_LINE(400)
			tmp1 = point;
		}
		HX_STACK_LINE(400)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(400)
		point->_weak = true;
		HX_STACK_LINE(400)
		tmp = point;
	}
	HX_STACK_LINE(400)
	::flixel::math::FlxPoint p1 = tmp;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(401)
	::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(401)
	{
		HX_STACK_LINE(401)
		::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		{
			HX_STACK_LINE(401)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(401)
			::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(401)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				::flixel::math::FlxRect tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(401)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(401)
				tmp5 = (_this->x + _this->width);
			}
			HX_STACK_LINE(401)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(401)
				::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(401)
				tmp6 = (_this->y + _this->height);
			}
			HX_STACK_LINE(401)
			::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(401)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(401)
			point->_inPool = false;
			HX_STACK_LINE(401)
			tmp2 = point;
		}
		HX_STACK_LINE(401)
		::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(401)
		point->_weak = true;
		HX_STACK_LINE(401)
		tmp1 = point;
	}
	HX_STACK_LINE(401)
	::flixel::math::FlxPoint p2 = tmp1;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(403)
	{
		HX_STACK_LINE(403)
		Float tmp2 = (p1->x * mat->a);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		Float tmp3 = (p1->y * mat->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(403)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		Float tmp5 = mat->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		Float x1 = tmp6;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(403)
		Float tmp7 = (p1->x * mat->b);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		Float tmp8 = (p1->y * mat->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		Float tmp10 = mat->ty;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(403)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(403)
		Float y1 = tmp11;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(403)
		Float tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(403)
		Float tmp13 = y1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(403)
		p1->set(tmp12,tmp13);
	}
	HX_STACK_LINE(404)
	{
		HX_STACK_LINE(404)
		Float tmp2 = (p2->x * mat->a);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(404)
		Float tmp3 = (p2->y * mat->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		Float tmp5 = mat->tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		Float x1 = tmp6;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(404)
		Float tmp7 = (p2->x * mat->b);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(404)
		Float tmp8 = (p2->y * mat->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(404)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(404)
		Float tmp10 = mat->ty;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(404)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(404)
		Float y1 = tmp11;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(404)
		Float tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(404)
		Float tmp13 = y1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(404)
		p2->set(tmp12,tmp13);
	}
	HX_STACK_LINE(406)
	::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(406)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(406)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(406)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(406)
			::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(406)
			{
				HX_STACK_LINE(406)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(406)
				::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(406)
				::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(406)
				_this->x = X;
				HX_STACK_LINE(406)
				_this->y = Y;
				HX_STACK_LINE(406)
				_this->width = Width;
				HX_STACK_LINE(406)
				_this->height = Height;
				HX_STACK_LINE(406)
				tmp4 = _this;
			}
			HX_STACK_LINE(406)
			::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(406)
			rect->_inPool = false;
			HX_STACK_LINE(406)
			tmp3 = rect;
		}
		HX_STACK_LINE(406)
		::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(406)
		Float tmp4 = p1->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(406)
		Float tmp5 = p2->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(406)
		Float tmp6 = ::Math_obj::min(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(406)
		Float minX = tmp6;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(406)
		Float tmp7 = p1->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(406)
		Float tmp8 = p2->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		Float tmp9 = ::Math_obj::min(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(406)
		Float minY = tmp9;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(406)
		Float tmp10 = p1->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(406)
		Float tmp11 = p2->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(406)
		Float tmp12 = ::Math_obj::max(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(406)
		Float maxX = tmp12;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(406)
		Float tmp13 = p1->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(406)
		Float tmp14 = p2->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(406)
		Float tmp15 = ::Math_obj::max(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(406)
		Float maxY = tmp15;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			bool tmp16 = p1->_weak;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(406)
			if ((tmp16)){
				HX_STACK_LINE(406)
				p1->put();
			}
		}
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			bool tmp16 = p2->_weak;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(406)
			if ((tmp16)){
				HX_STACK_LINE(406)
				p2->put();
			}
		}
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			_this->x = minX;
			HX_STACK_LINE(406)
			_this->y = minY;
			HX_STACK_LINE(406)
			Float tmp16 = (maxX - minX);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(406)
			_this->width = tmp16;
			HX_STACK_LINE(406)
			Float tmp17 = (maxY - minY);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(406)
			_this->height = tmp17;
			HX_STACK_LINE(406)
			tmp2 = _this;
		}
	}
	HX_STACK_LINE(406)
	::flixel::math::FlxRect flxRect = tmp2;		HX_STACK_VAR(flxRect,"flxRect");
	HX_STACK_LINE(407)
	{
		HX_STACK_LINE(407)
		::openfl::_legacy::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(407)
		::openfl::_legacy::geom::Rectangle FlashRect = tmp3;		HX_STACK_VAR(FlashRect,"FlashRect");
		HX_STACK_LINE(407)
		bool tmp4 = (FlashRect == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(407)
		if ((tmp4)){
			HX_STACK_LINE(407)
			::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(407)
			FlashRect = tmp5;
		}
		HX_STACK_LINE(407)
		FlashRect->x = flxRect->x;
		HX_STACK_LINE(407)
		FlashRect->y = flxRect->y;
		HX_STACK_LINE(407)
		FlashRect->width = flxRect->width;
		HX_STACK_LINE(407)
		FlashRect->height = flxRect->height;
		HX_STACK_LINE(407)
		FlashRect;
	}
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		bool tmp3 = flxRect->_inPool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(408)
		if ((tmp4)){
			HX_STACK_LINE(408)
			flxRect->_inPool = true;
			HX_STACK_LINE(408)
			flxRect->_weak = false;
			HX_STACK_LINE(408)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			::flixel::math::FlxRect tmp6 = flxRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(408)
			tmp5->putUnsafe(tmp6);
		}
	}
	HX_STACK_LINE(409)
	::openfl::_legacy::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,getDrawFrameRect,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::subFrameTo( ::flixel::math::FlxRect rect,::flixel::graphics::frames::FlxFrame frameToFill){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","subFrameTo",0x37199964,"flixel.graphics.frames.FlxFrame.subFrameTo","flixel/graphics/frames/FlxFrame.hx",420,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(frameToFill,"frameToFill")
	HX_STACK_LINE(421)
	bool tmp = (frameToFill == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	if ((tmp)){
		HX_STACK_LINE(423)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		::flixel::graphics::frames::FlxFrame tmp3 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		frameToFill = tmp3;
	}
	else{
		HX_STACK_LINE(427)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(427)
		frameToFill->parent = tmp1;
		HX_STACK_LINE(428)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		frameToFill->angle = tmp2;
		HX_STACK_LINE(429)
		::flixel::math::FlxRect tmp3 = frameToFill->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(429)
		::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(429)
		frameToFill->set_frame(tmp4);
	}
	HX_STACK_LINE(432)
	Float tmp1 = rect->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(432)
	Float tmp2 = rect->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(432)
	frameToFill->sourceSize->set(tmp1,tmp2);
	HX_STACK_LINE(435)
	int tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(435)
	bool tmp4 = (tmp3 == (int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(435)
	if ((tmp4)){
		HX_STACK_LINE(437)
		frameToFill->type = (int)2;
		HX_STACK_LINE(438)
		frameToFill->offset->set((int)0,(int)0);
		HX_STACK_LINE(439)
		::flixel::graphics::frames::FlxFrame tmp5 = frameToFill;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(439)
		return tmp5;
	}
	HX_STACK_LINE(442)
	::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(442)
	{
		HX_STACK_LINE(442)
		::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(442)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(442)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(442)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(442)
			::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(442)
				::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(442)
				::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(442)
				_this->x = X;
				HX_STACK_LINE(442)
				_this->y = Y;
				HX_STACK_LINE(442)
				_this->width = Width;
				HX_STACK_LINE(442)
				_this->height = Height;
				HX_STACK_LINE(442)
				tmp7 = _this;
			}
			HX_STACK_LINE(442)
			::flixel::math::FlxRect rect1 = tmp7;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(442)
			rect1->_inPool = false;
			HX_STACK_LINE(442)
			tmp6 = rect1;
		}
		HX_STACK_LINE(442)
		::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(442)
		::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(442)
		_this->width = tmp7->width;
		HX_STACK_LINE(442)
		::flixel::math::FlxRect tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(442)
		_this->height = tmp8->height;
		HX_STACK_LINE(442)
		tmp5 = _this;
	}
	HX_STACK_LINE(442)
	::flixel::math::FlxRect clippedRect = tmp5;		HX_STACK_VAR(clippedRect,"clippedRect");
	HX_STACK_LINE(443)
	int tmp6 = this->angle;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(443)
	bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(443)
	if ((tmp7)){
		HX_STACK_LINE(445)
		::flixel::math::FlxRect tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		clippedRect->width = tmp8->height;
		HX_STACK_LINE(446)
		::flixel::math::FlxRect tmp9 = this->frame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(446)
		clippedRect->height = tmp9->width;
	}
	HX_STACK_LINE(449)
	::flixel::math::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(449)
	Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(449)
	Float tmp10 = ::Math_obj::max(tmp9,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(449)
	Float ox = tmp10;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(450)
	::flixel::math::FlxPoint tmp11 = this->offset;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(450)
	Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(450)
	Float tmp13 = ::Math_obj::max(tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(450)
	Float oy = tmp13;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(452)
	{
		HX_STACK_LINE(452)
		Float tmp14 = ox;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(452)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(452)
		hx::AddEq(rect->x,tmp15);
		HX_STACK_LINE(452)
		Float tmp16 = oy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(452)
		Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(452)
		hx::AddEq(rect->y,tmp17);
		HX_STACK_LINE(452)
		rect;
	}
	HX_STACK_LINE(453)
	::flixel::math::FlxRect tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(453)
	::flixel::math::FlxRect tmp15 = clippedRect->intersection(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(453)
	::flixel::math::FlxRect frameRect = tmp15;		HX_STACK_VAR(frameRect,"frameRect");
	HX_STACK_LINE(454)
	::flixel::math::FlxRect tmp16 = clippedRect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(454)
	::flixel::math::FlxRect tmp17 = ::flixel::util::FlxDestroyUtil_obj::put(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(454)
	clippedRect = tmp17;
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(455)
		hx::AddEq(rect->x,ox);
		HX_STACK_LINE(455)
		hx::AddEq(rect->y,oy);
		HX_STACK_LINE(455)
		rect;
	}
	HX_STACK_LINE(457)
	bool tmp18 = (frameRect->width == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(457)
	bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(457)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(457)
	if ((tmp19)){
		HX_STACK_LINE(457)
		tmp20 = (frameRect->height == (int)0);
	}
	else{
		HX_STACK_LINE(457)
		tmp20 = true;
	}
	HX_STACK_LINE(457)
	if ((tmp20)){
		HX_STACK_LINE(459)
		frameToFill->type = (int)2;
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			frameRect->x = (int)0;
			HX_STACK_LINE(460)
			frameRect->y = (int)0;
			HX_STACK_LINE(460)
			frameRect->width = (int)0;
			HX_STACK_LINE(460)
			frameRect->height = (int)0;
			HX_STACK_LINE(460)
			frameRect;
		}
		HX_STACK_LINE(461)
		::flixel::math::FlxRect tmp21 = frameRect;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(461)
		frameToFill->set_frame(tmp21);
		HX_STACK_LINE(462)
		frameToFill->offset->set((int)0,(int)0);
	}
	else{
		HX_STACK_LINE(466)
		frameToFill->type = (int)0;
		HX_STACK_LINE(467)
		::flixel::math::FlxPoint tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			Float tmp22 = frameRect->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(467)
			Float tmp23 = frameRect->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(467)
			::flixel::math::FlxPoint tmp24 = frameToFill->offset->set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(467)
			::flixel::math::FlxPoint _this = tmp24;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(467)
				Float tmp25 = (_g->x - rect->x);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(467)
				_g->set_x(tmp25);
			}
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(467)
				Float tmp25 = (_g->y - rect->y);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(467)
				_g->set_y(tmp25);
			}
			HX_STACK_LINE(467)
			tmp21 = _this;
		}
		HX_STACK_LINE(467)
		::flixel::math::FlxPoint tmp22 = this->offset;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(467)
		tmp21->addPoint(tmp22);
		HX_STACK_LINE(469)
		::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(469)
				::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(469)
				Float tmp27 = frameRect->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(469)
				Float tmp28 = frameRect->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(469)
				::flixel::math::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(469)
				::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(469)
				point->_inPool = false;
				HX_STACK_LINE(469)
				tmp24 = point;
			}
			HX_STACK_LINE(469)
			::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(469)
			point->_weak = true;
			HX_STACK_LINE(469)
			tmp23 = point;
		}
		HX_STACK_LINE(469)
		::flixel::math::FlxPoint p1 = tmp23;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(470)
		::flixel::math::FlxPoint tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(470)
		{
			HX_STACK_LINE(470)
			::flixel::math::FlxPoint tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp26 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(470)
				::flixel::math::FlxPoint tmp27 = tmp26->get();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(470)
				Float tmp28 = (frameRect->x + frameRect->width);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(470)
				Float tmp29 = (frameRect->y + frameRect->height);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(470)
				::flixel::math::FlxPoint tmp30 = tmp27->set(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(470)
				::flixel::math::FlxPoint point = tmp30;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(470)
				point->_inPool = false;
				HX_STACK_LINE(470)
				tmp25 = point;
			}
			HX_STACK_LINE(470)
			::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(470)
			point->_weak = true;
			HX_STACK_LINE(470)
			tmp24 = point;
		}
		HX_STACK_LINE(470)
		::flixel::math::FlxPoint p2 = tmp24;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(472)
		::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(472)
		tmp25->identity();
		HX_STACK_LINE(474)
		int tmp26 = this->angle;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(474)
		bool tmp27 = (tmp26 == (int)-90);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(474)
		if ((tmp27)){
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::flixel::math::FlxMatrix tmp28 = this->matrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(476)
				::flixel::math::FlxMatrix _this = tmp28;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				Float tmp29 = _this->b;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(476)
				Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(476)
				Float tmp31 = _this->a;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(476)
				Float tmp32 = _this->d;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(476)
				Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(476)
				Float tmp34 = _this->c;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(476)
				Float tmp35 = _this->ty;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(476)
				Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(476)
				Float tmp37 = _this->tx;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(476)
				_this->setTo(tmp30,tmp31,tmp33,tmp34,tmp36,tmp37);
				HX_STACK_LINE(476)
				_this;
			}
			HX_STACK_LINE(477)
			::flixel::math::FlxMatrix tmp28 = this->matrix;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(477)
			::flixel::math::FlxRect tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(477)
			Float tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(477)
			tmp28->translate(tmp30,(int)0);
		}
		else{
			HX_STACK_LINE(479)
			int tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(479)
			bool tmp29 = (tmp28 == (int)90);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(479)
			if ((tmp29)){
				HX_STACK_LINE(481)
				{
					HX_STACK_LINE(481)
					::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(481)
					::flixel::math::FlxMatrix _this = tmp30;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(481)
					Float tmp31 = _this->b;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(481)
					Float tmp32 = _this->a;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(481)
					Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(481)
					Float tmp34 = _this->d;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(481)
					Float tmp35 = _this->c;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(481)
					Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(481)
					Float tmp37 = _this->ty;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(481)
					Float tmp38 = _this->tx;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(481)
					Float tmp39 = -(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(481)
					_this->setTo(tmp31,tmp33,tmp34,tmp36,tmp37,tmp39);
					HX_STACK_LINE(481)
					_this;
				}
				HX_STACK_LINE(482)
				::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(482)
				::flixel::math::FlxRect tmp31 = this->frame;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(482)
				Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(482)
				tmp30->translate((int)0,tmp32);
			}
		}
		HX_STACK_LINE(485)
		int tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(485)
		bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(485)
		if ((tmp29)){
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(487)
				::openfl::_legacy::geom::Matrix matrix = tmp30;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(487)
				Float tmp31 = (p1->x * matrix->a);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(487)
				Float tmp32 = (p1->y * matrix->c);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(487)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(487)
				Float tmp34 = matrix->tx;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(487)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(487)
				Float x1 = tmp35;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(487)
				Float tmp36 = (p1->x * matrix->b);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(487)
				Float tmp37 = (p1->y * matrix->d);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(487)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(487)
				Float tmp39 = matrix->ty;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(487)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(487)
				Float y1 = tmp40;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(487)
				Float tmp41 = x1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(487)
				Float tmp42 = y1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(487)
				p1->set(tmp41,tmp42);
			}
			HX_STACK_LINE(488)
			{
				HX_STACK_LINE(488)
				::flixel::math::FlxMatrix tmp30 = this->matrix;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(488)
				::openfl::_legacy::geom::Matrix matrix = tmp30;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(488)
				Float tmp31 = (p2->x * matrix->a);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(488)
				Float tmp32 = (p2->y * matrix->c);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(488)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(488)
				Float tmp34 = matrix->tx;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(488)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(488)
				Float x1 = tmp35;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(488)
				Float tmp36 = (p2->x * matrix->b);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(488)
				Float tmp37 = (p2->y * matrix->d);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(488)
				Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(488)
				Float tmp39 = matrix->ty;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(488)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(488)
				Float y1 = tmp40;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(488)
				Float tmp41 = x1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(488)
				Float tmp42 = y1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(488)
				p2->set(tmp41,tmp42);
			}
		}
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			Float tmp30 = p1->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(491)
			Float tmp31 = p2->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(491)
			Float tmp32 = ::Math_obj::min(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(491)
			Float minX = tmp32;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(491)
			Float tmp33 = p1->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(491)
			Float tmp34 = p2->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(491)
			Float tmp35 = ::Math_obj::min(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(491)
			Float minY = tmp35;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(491)
			Float tmp36 = p1->x;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(491)
			Float tmp37 = p2->x;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(491)
			Float tmp38 = ::Math_obj::max(tmp36,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(491)
			Float maxX = tmp38;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(491)
			Float tmp39 = p1->y;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(491)
			Float tmp40 = p2->y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(491)
			Float tmp41 = ::Math_obj::max(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(491)
			Float maxY = tmp41;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				bool tmp42 = p1->_weak;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(491)
				if ((tmp42)){
					HX_STACK_LINE(491)
					p1->put();
				}
			}
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				bool tmp42 = p2->_weak;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(491)
				if ((tmp42)){
					HX_STACK_LINE(491)
					p2->put();
				}
			}
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				frameRect->x = minX;
				HX_STACK_LINE(491)
				frameRect->y = minY;
				HX_STACK_LINE(491)
				Float tmp42 = (maxX - minX);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(491)
				frameRect->width = tmp42;
				HX_STACK_LINE(491)
				Float tmp43 = (maxY - minY);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(491)
				frameRect->height = tmp43;
				HX_STACK_LINE(491)
				frameRect;
			}
		}
		HX_STACK_LINE(492)
		{
			HX_STACK_LINE(492)
			::flixel::math::FlxRect tmp30 = this->frame;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(492)
			hx::AddEq(frameRect->x,tmp30->x);
			HX_STACK_LINE(492)
			::flixel::math::FlxRect tmp31 = this->frame;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(492)
			hx::AddEq(frameRect->y,tmp31->y);
			HX_STACK_LINE(492)
			frameRect;
		}
		HX_STACK_LINE(493)
		::flixel::math::FlxRect tmp30 = frameRect;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(493)
		frameToFill->set_frame(tmp30);
		HX_STACK_LINE(494)
		frameToFill->cacheFrameMatrix();
	}
	HX_STACK_LINE(497)
	::flixel::graphics::frames::FlxFrame tmp21 = frameToFill;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(497)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,subFrameTo,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::setBorderTo( ::flixel::math::FlxPoint border,::flixel::graphics::frames::FlxFrame frameToFill){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","setBorderTo",0x0ba0ebcd,"flixel.graphics.frames.FlxFrame.setBorderTo","flixel/graphics/frames/FlxFrame.hx",508,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_ARG(frameToFill,"frameToFill")
	HX_STACK_LINE(509)
	::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	{
		HX_STACK_LINE(509)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp2 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(509)
			::flixel::math::FlxRect tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(509)
			::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(509)
			_this->x = border->x;
			HX_STACK_LINE(509)
			_this->y = border->y;
			HX_STACK_LINE(509)
			::flixel::math::FlxPoint tmp4 = this->sourceSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(509)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(509)
			Float tmp6 = ((int)2 * border->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(509)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(509)
			_this->width = tmp7;
			HX_STACK_LINE(509)
			::flixel::math::FlxPoint tmp8 = this->sourceSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(509)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(509)
			Float tmp10 = ((int)2 * border->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(509)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(509)
			_this->height = tmp11;
			HX_STACK_LINE(509)
			tmp1 = _this;
		}
		HX_STACK_LINE(509)
		::flixel::math::FlxRect rect = tmp1;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(509)
		rect->_inPool = false;
		HX_STACK_LINE(509)
		tmp = rect;
	}
	HX_STACK_LINE(509)
	::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(510)
	::flixel::math::FlxRect tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(510)
	::flixel::graphics::frames::FlxFrame tmp2 = frameToFill;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(510)
	::flixel::graphics::frames::FlxFrame tmp3 = this->subFrameTo(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	frameToFill = tmp3;
	HX_STACK_LINE(511)
	::String tmp4 = this->name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(511)
	frameToFill->name = tmp4;
	HX_STACK_LINE(512)
	::flixel::math::FlxRect tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(512)
	::flixel::math::FlxRect tmp6 = ::flixel::util::FlxDestroyUtil_obj::put(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(512)
	rect = tmp6;
	HX_STACK_LINE(513)
	::flixel::graphics::frames::FlxFrame tmp7 = frameToFill;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(513)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,setBorderTo,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::clipTo( ::flixel::math::FlxRect clip,::flixel::graphics::frames::FlxFrame clippedFrame){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","clipTo",0x9ecb6267,"flixel.graphics.frames.FlxFrame.clipTo","flixel/graphics/frames/FlxFrame.hx",523,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clip,"clip")
	HX_STACK_ARG(clippedFrame,"clippedFrame")
	HX_STACK_LINE(524)
	bool tmp = (clippedFrame == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	if ((tmp)){
		HX_STACK_LINE(526)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(526)
		::flixel::graphics::frames::FlxFrame tmp3 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(526)
		clippedFrame = tmp3;
	}
	else{
		HX_STACK_LINE(530)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(530)
		clippedFrame->parent = tmp1;
		HX_STACK_LINE(531)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(531)
		clippedFrame->angle = tmp2;
		HX_STACK_LINE(532)
		::flixel::math::FlxRect tmp3 = clippedFrame->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(532)
		::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(532)
		clippedFrame->set_frame(tmp4);
	}
	HX_STACK_LINE(535)
	{
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint _this = clippedFrame->sourceSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint tmp1 = this->sourceSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(535)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(535)
		_this->set_x(tmp2);
		HX_STACK_LINE(535)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		_this->set_y(tmp3);
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(535)
			if ((tmp4)){
				HX_STACK_LINE(535)
				point->put();
			}
		}
		HX_STACK_LINE(535)
		_this;
	}
	HX_STACK_LINE(536)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(536)
	clippedFrame->name = tmp1;
	HX_STACK_LINE(539)
	int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(539)
	bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(539)
	if ((tmp3)){
		HX_STACK_LINE(541)
		clippedFrame->type = (int)2;
		HX_STACK_LINE(542)
		clippedFrame->offset->set((int)0,(int)0);
		HX_STACK_LINE(543)
		::flixel::graphics::frames::FlxFrame tmp4 = clippedFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(543)
		return tmp4;
	}
	HX_STACK_LINE(546)
	::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(546)
	{
		HX_STACK_LINE(546)
		::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(546)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(546)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(546)
			::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(546)
			{
				HX_STACK_LINE(546)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp7 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(546)
				::flixel::math::FlxRect tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(546)
				::flixel::math::FlxRect _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(546)
				_this->x = (int)0;
				HX_STACK_LINE(546)
				_this->y = (int)0;
				HX_STACK_LINE(546)
				_this->width = Width;
				HX_STACK_LINE(546)
				_this->height = Height;
				HX_STACK_LINE(546)
				tmp6 = _this;
			}
			HX_STACK_LINE(546)
			::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(546)
			rect->_inPool = false;
			HX_STACK_LINE(546)
			tmp5 = rect;
		}
		HX_STACK_LINE(546)
		::flixel::math::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(546)
		::flixel::math::FlxRect tmp6 = this->frame;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		_this->width = tmp6->width;
		HX_STACK_LINE(546)
		::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		_this->height = tmp7->height;
		HX_STACK_LINE(546)
		tmp4 = _this;
	}
	HX_STACK_LINE(546)
	::flixel::math::FlxRect clippedRect = tmp4;		HX_STACK_VAR(clippedRect,"clippedRect");
	HX_STACK_LINE(547)
	int tmp5 = this->angle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(547)
	bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(547)
	if ((tmp6)){
		HX_STACK_LINE(549)
		::flixel::math::FlxRect tmp7 = this->frame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(549)
		clippedRect->width = tmp7->height;
		HX_STACK_LINE(550)
		::flixel::math::FlxRect tmp8 = this->frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(550)
		clippedRect->height = tmp8->width;
	}
	HX_STACK_LINE(553)
	{
		HX_STACK_LINE(553)
		::flixel::math::FlxPoint tmp7 = this->offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(553)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(553)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(553)
		hx::AddEq(clip->x,tmp9);
		HX_STACK_LINE(553)
		::flixel::math::FlxPoint tmp10 = this->offset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(553)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(553)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(553)
		hx::AddEq(clip->y,tmp12);
		HX_STACK_LINE(553)
		clip;
	}
	HX_STACK_LINE(554)
	::flixel::math::FlxRect tmp7 = clip;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(554)
	::flixel::math::FlxRect tmp8 = clippedRect->intersection(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(554)
	::flixel::math::FlxRect frameRect = tmp8;		HX_STACK_VAR(frameRect,"frameRect");
	HX_STACK_LINE(555)
	::flixel::math::FlxRect tmp9 = clippedRect;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(555)
	::flixel::math::FlxRect tmp10 = ::flixel::util::FlxDestroyUtil_obj::put(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(555)
	clippedRect = tmp10;
	HX_STACK_LINE(557)
	bool tmp11 = (frameRect->width == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(557)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(557)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(557)
	if ((tmp12)){
		HX_STACK_LINE(557)
		tmp13 = (frameRect->height == (int)0);
	}
	else{
		HX_STACK_LINE(557)
		tmp13 = true;
	}
	HX_STACK_LINE(557)
	if ((tmp13)){
		HX_STACK_LINE(559)
		clippedFrame->type = (int)2;
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			frameRect->x = (int)0;
			HX_STACK_LINE(560)
			frameRect->y = (int)0;
			HX_STACK_LINE(560)
			frameRect->width = (int)0;
			HX_STACK_LINE(560)
			frameRect->height = (int)0;
			HX_STACK_LINE(560)
			frameRect;
		}
		HX_STACK_LINE(561)
		::flixel::math::FlxRect tmp14 = frameRect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(561)
		clippedFrame->set_frame(tmp14);
		HX_STACK_LINE(562)
		clippedFrame->offset->set((int)0,(int)0);
	}
	else{
		HX_STACK_LINE(566)
		clippedFrame->type = (int)0;
		HX_STACK_LINE(567)
		Float tmp14 = frameRect->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(567)
		Float tmp15 = frameRect->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(567)
		::flixel::math::FlxPoint tmp16 = clippedFrame->offset->set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(567)
		::flixel::math::FlxPoint tmp17 = this->offset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(567)
		tmp16->addPoint(tmp17);
		HX_STACK_LINE(569)
		::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp20 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(569)
				::flixel::math::FlxPoint tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(569)
				Float tmp22 = frameRect->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(569)
				Float tmp23 = frameRect->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(569)
				::flixel::math::FlxPoint tmp24 = tmp21->set(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(569)
				::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(569)
				point->_inPool = false;
				HX_STACK_LINE(569)
				tmp19 = point;
			}
			HX_STACK_LINE(569)
			::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(569)
			point->_weak = true;
			HX_STACK_LINE(569)
			tmp18 = point;
		}
		HX_STACK_LINE(569)
		::flixel::math::FlxPoint p1 = tmp18;		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(570)
		::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(570)
		{
			HX_STACK_LINE(570)
			::flixel::math::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(570)
			{
				HX_STACK_LINE(570)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp21 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(570)
				::flixel::math::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(570)
				Float tmp23 = (frameRect->x + frameRect->width);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(570)
				Float tmp24 = (frameRect->y + frameRect->height);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(570)
				::flixel::math::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(570)
				::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(570)
				point->_inPool = false;
				HX_STACK_LINE(570)
				tmp20 = point;
			}
			HX_STACK_LINE(570)
			::flixel::math::FlxPoint point = tmp20;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(570)
			point->_weak = true;
			HX_STACK_LINE(570)
			tmp19 = point;
		}
		HX_STACK_LINE(570)
		::flixel::math::FlxPoint p2 = tmp19;		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(572)
		::flixel::math::FlxMatrix tmp20 = this->matrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(572)
		tmp20->identity();
		HX_STACK_LINE(574)
		int tmp21 = this->angle;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(574)
		bool tmp22 = (tmp21 == (int)-90);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(574)
		if ((tmp22)){
			HX_STACK_LINE(576)
			{
				HX_STACK_LINE(576)
				::flixel::math::FlxMatrix tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(576)
				::flixel::math::FlxMatrix _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(576)
				Float tmp24 = _this->b;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(576)
				Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(576)
				Float tmp26 = _this->a;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(576)
				Float tmp27 = _this->d;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(576)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(576)
				Float tmp29 = _this->c;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(576)
				Float tmp30 = _this->ty;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(576)
				Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(576)
				Float tmp32 = _this->tx;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(576)
				_this->setTo(tmp25,tmp26,tmp28,tmp29,tmp31,tmp32);
				HX_STACK_LINE(576)
				_this;
			}
			HX_STACK_LINE(577)
			::flixel::math::FlxMatrix tmp23 = this->matrix;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(577)
			::flixel::math::FlxRect tmp24 = this->frame;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(577)
			Float tmp25 = tmp24->width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(577)
			tmp23->translate(tmp25,(int)0);
		}
		else{
			HX_STACK_LINE(579)
			int tmp23 = this->angle;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(579)
			bool tmp24 = (tmp23 == (int)90);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(579)
			if ((tmp24)){
				HX_STACK_LINE(581)
				{
					HX_STACK_LINE(581)
					::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(581)
					::flixel::math::FlxMatrix _this = tmp25;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(581)
					Float tmp26 = _this->b;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(581)
					Float tmp27 = _this->a;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(581)
					Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(581)
					Float tmp29 = _this->d;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(581)
					Float tmp30 = _this->c;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(581)
					Float tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(581)
					Float tmp32 = _this->ty;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(581)
					Float tmp33 = _this->tx;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(581)
					Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(581)
					_this->setTo(tmp26,tmp28,tmp29,tmp31,tmp32,tmp34);
					HX_STACK_LINE(581)
					_this;
				}
				HX_STACK_LINE(582)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(582)
				::flixel::math::FlxRect tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(582)
				Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(582)
				tmp25->translate((int)0,tmp27);
			}
		}
		HX_STACK_LINE(585)
		int tmp23 = this->angle;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(585)
		bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(585)
		if ((tmp24)){
			HX_STACK_LINE(587)
			{
				HX_STACK_LINE(587)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(587)
				::openfl::_legacy::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(587)
				Float tmp26 = (p1->x * matrix->a);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(587)
				Float tmp27 = (p1->y * matrix->c);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(587)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(587)
				Float tmp29 = matrix->tx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(587)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(587)
				Float x1 = tmp30;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(587)
				Float tmp31 = (p1->x * matrix->b);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(587)
				Float tmp32 = (p1->y * matrix->d);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(587)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(587)
				Float tmp34 = matrix->ty;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(587)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(587)
				Float y1 = tmp35;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(587)
				Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(587)
				Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(587)
				p1->set(tmp36,tmp37);
			}
			HX_STACK_LINE(588)
			{
				HX_STACK_LINE(588)
				::flixel::math::FlxMatrix tmp25 = this->matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(588)
				::openfl::_legacy::geom::Matrix matrix = tmp25;		HX_STACK_VAR(matrix,"matrix");
				HX_STACK_LINE(588)
				Float tmp26 = (p2->x * matrix->a);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(588)
				Float tmp27 = (p2->y * matrix->c);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(588)
				Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(588)
				Float tmp29 = matrix->tx;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(588)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(588)
				Float x1 = tmp30;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(588)
				Float tmp31 = (p2->x * matrix->b);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(588)
				Float tmp32 = (p2->y * matrix->d);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(588)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(588)
				Float tmp34 = matrix->ty;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(588)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(588)
				Float y1 = tmp35;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(588)
				Float tmp36 = x1;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(588)
				Float tmp37 = y1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(588)
				p2->set(tmp36,tmp37);
			}
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			Float tmp25 = p1->x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(591)
			Float tmp26 = p2->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(591)
			Float tmp27 = ::Math_obj::min(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(591)
			Float minX = tmp27;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(591)
			Float tmp28 = p1->y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(591)
			Float tmp29 = p2->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(591)
			Float tmp30 = ::Math_obj::min(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(591)
			Float minY = tmp30;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(591)
			Float tmp31 = p1->x;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(591)
			Float tmp32 = p2->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(591)
			Float tmp33 = ::Math_obj::max(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(591)
			Float maxX = tmp33;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(591)
			Float tmp34 = p1->y;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(591)
			Float tmp35 = p2->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(591)
			Float tmp36 = ::Math_obj::max(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(591)
			Float maxY = tmp36;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(591)
			{
				HX_STACK_LINE(591)
				bool tmp37 = p1->_weak;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(591)
				if ((tmp37)){
					HX_STACK_LINE(591)
					p1->put();
				}
			}
			HX_STACK_LINE(591)
			{
				HX_STACK_LINE(591)
				bool tmp37 = p2->_weak;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(591)
				if ((tmp37)){
					HX_STACK_LINE(591)
					p2->put();
				}
			}
			HX_STACK_LINE(591)
			{
				HX_STACK_LINE(591)
				frameRect->x = minX;
				HX_STACK_LINE(591)
				frameRect->y = minY;
				HX_STACK_LINE(591)
				Float tmp37 = (maxX - minX);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(591)
				frameRect->width = tmp37;
				HX_STACK_LINE(591)
				Float tmp38 = (maxY - minY);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(591)
				frameRect->height = tmp38;
				HX_STACK_LINE(591)
				frameRect;
			}
		}
		HX_STACK_LINE(592)
		{
			HX_STACK_LINE(592)
			::flixel::math::FlxRect tmp25 = this->frame;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(592)
			hx::AddEq(frameRect->x,tmp25->x);
			HX_STACK_LINE(592)
			::flixel::math::FlxRect tmp26 = this->frame;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(592)
			hx::AddEq(frameRect->y,tmp26->y);
			HX_STACK_LINE(592)
			frameRect;
		}
		HX_STACK_LINE(593)
		::flixel::math::FlxRect tmp25 = frameRect;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(593)
		clippedFrame->set_frame(tmp25);
		HX_STACK_LINE(594)
		clippedFrame->cacheFrameMatrix();
	}
	HX_STACK_LINE(597)
	{
		HX_STACK_LINE(597)
		::flixel::math::FlxPoint tmp14 = this->offset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(597)
		hx::AddEq(clip->x,tmp14->x);
		HX_STACK_LINE(597)
		::flixel::math::FlxPoint tmp15 = this->offset;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(597)
		hx::AddEq(clip->y,tmp15->y);
		HX_STACK_LINE(597)
		clip;
	}
	HX_STACK_LINE(598)
	::flixel::graphics::frames::FlxFrame tmp14 = clippedFrame;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(598)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,clipTo,return )

::flixel::graphics::frames::FlxFrame FlxFrame_obj::copyTo( ::flixel::graphics::frames::FlxFrame clone){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","copyTo",0x5da6728c,"flixel.graphics.frames.FlxFrame.copyTo","flixel/graphics/frames/FlxFrame.hx",608,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clone,"clone")
	HX_STACK_LINE(609)
	bool tmp = (clone == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	if ((tmp)){
		HX_STACK_LINE(611)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		::flixel::graphics::frames::FlxFrame tmp3 = ::flixel::graphics::frames::FlxFrame_obj::__new(tmp1,tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		clone = tmp3;
	}
	else{
		HX_STACK_LINE(615)
		::flixel::graphics::FlxGraphic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		clone->parent = tmp1;
		HX_STACK_LINE(616)
		int tmp2 = this->angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(616)
		clone->angle = tmp2;
		HX_STACK_LINE(617)
		::flixel::math::FlxRect tmp3 = clone->frame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(617)
		::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		clone->set_frame(tmp4);
	}
	HX_STACK_LINE(620)
	{
		HX_STACK_LINE(620)
		::flixel::math::FlxPoint _this = clone->offset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(620)
		::flixel::math::FlxPoint tmp1 = this->offset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(620)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(620)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(620)
		_this->set_x(tmp2);
		HX_STACK_LINE(620)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		_this->set_y(tmp3);
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(620)
			if ((tmp4)){
				HX_STACK_LINE(620)
				point->put();
			}
		}
		HX_STACK_LINE(620)
		_this;
	}
	HX_STACK_LINE(621)
	bool tmp1 = this->flipX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	clone->flipX = tmp1;
	HX_STACK_LINE(622)
	bool tmp2 = this->flipY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(622)
	clone->flipY = tmp2;
	HX_STACK_LINE(623)
	{
		HX_STACK_LINE(623)
		::flixel::math::FlxPoint _this = clone->sourceSize;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(623)
		::flixel::math::FlxPoint tmp3 = this->sourceSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(623)
		::flixel::math::FlxPoint point = tmp3;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(623)
		Float tmp4 = point->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(623)
		_this->set_x(tmp4);
		HX_STACK_LINE(623)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(623)
		_this->set_y(tmp5);
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			bool tmp6 = point->_weak;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(623)
			if ((tmp6)){
				HX_STACK_LINE(623)
				point->put();
			}
		}
		HX_STACK_LINE(623)
		_this;
	}
	HX_STACK_LINE(624)
	::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(624)
	{
		HX_STACK_LINE(624)
		::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(624)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(624)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(624)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(624)
			::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp6 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(624)
				::flixel::math::FlxRect tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(624)
				::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(624)
				_this->x = X;
				HX_STACK_LINE(624)
				_this->y = Y;
				HX_STACK_LINE(624)
				_this->width = Width;
				HX_STACK_LINE(624)
				_this->height = Height;
				HX_STACK_LINE(624)
				tmp5 = _this;
			}
			HX_STACK_LINE(624)
			::flixel::math::FlxRect rect = tmp5;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(624)
			rect->_inPool = false;
			HX_STACK_LINE(624)
			tmp4 = rect;
		}
		HX_STACK_LINE(624)
		::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(624)
		::flixel::math::FlxRect tmp5 = this->frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		::flixel::math::FlxRect Rect = tmp5;		HX_STACK_VAR(Rect,"Rect");
		HX_STACK_LINE(624)
		_this->x = Rect->x;
		HX_STACK_LINE(624)
		_this->y = Rect->y;
		HX_STACK_LINE(624)
		_this->width = Rect->width;
		HX_STACK_LINE(624)
		_this->height = Rect->height;
		HX_STACK_LINE(624)
		{
			HX_STACK_LINE(624)
			bool tmp6 = Rect->_weak;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(624)
			if ((tmp6)){
				HX_STACK_LINE(624)
				bool tmp7 = Rect->_inPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(624)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(624)
				if ((tmp8)){
					HX_STACK_LINE(624)
					Rect->_inPool = true;
					HX_STACK_LINE(624)
					Rect->_weak = false;
					HX_STACK_LINE(624)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(624)
					::flixel::math::FlxRect tmp10 = Rect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(624)
					tmp9->putUnsafe(tmp10);
				}
			}
		}
		HX_STACK_LINE(624)
		tmp3 = _this;
	}
	HX_STACK_LINE(624)
	clone->set_frame(tmp3);
	HX_STACK_LINE(625)
	int tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(625)
	clone->type = tmp4;
	HX_STACK_LINE(626)
	::String tmp5 = this->name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(626)
	clone->name = tmp5;
	HX_STACK_LINE(627)
	clone->cacheFrameMatrix();
	HX_STACK_LINE(628)
	::flixel::graphics::frames::FlxFrame tmp6 = clone;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(628)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,copyTo,return )

Void FlxFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",632,0x6c7f608b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(633)
		this->name = null();
		HX_STACK_LINE(634)
		this->parent = null();
		HX_STACK_LINE(635)
		::flixel::math::FlxPoint tmp = this->sourceSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(635)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(635)
		this->sourceSize = tmp1;
		HX_STACK_LINE(636)
		::flixel::math::FlxPoint tmp2 = this->offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		this->offset = tmp3;
		HX_STACK_LINE(637)
		::flixel::math::FlxRect tmp4 = this->frame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(637)
		::flixel::math::FlxRect tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(637)
		this->set_frame(tmp5);
		HX_STACK_LINE(638)
		::flixel::math::FlxRect tmp6 = this->uv;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(638)
		::flixel::math::FlxRect tmp7 = ::flixel::util::FlxDestroyUtil_obj::put(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(638)
		this->uv = tmp7;
		HX_STACK_LINE(639)
		this->blitMatrix = null();
		HX_STACK_LINE(640)
		bool tmp8 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(640)
		if ((tmp8)){
			HX_STACK_LINE(642)
			this->tileMatrix = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",647,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(649)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	{
		HX_STACK_LINE(649)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(649)
		_this->label = HX_HCSTRING("name","\x4b","\x72","\xff","\x48");
		HX_STACK_LINE(649)
		::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(649)
		_this->value = tmp3;
		HX_STACK_LINE(649)
		tmp = _this;
	}
	HX_STACK_LINE(648)
	::String tmp1 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(648)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

::flixel::math::FlxRect FlxFrame_obj::set_frame( ::flixel::math::FlxRect value){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","set_frame",0x789f5014,"flixel.graphics.frames.FlxFrame.set_frame","flixel/graphics/frames/FlxFrame.hx",653,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(654)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(654)
	if ((tmp)){
		HX_STACK_LINE(656)
		::flixel::math::FlxRect tmp1 = this->uv;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(656)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		if ((tmp2)){
			HX_STACK_LINE(657)
			::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(657)
			{
				HX_STACK_LINE(657)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(657)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(657)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(657)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(657)
				::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(657)
				{
					HX_STACK_LINE(657)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(657)
					::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(657)
					::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(657)
					_this->x = X;
					HX_STACK_LINE(657)
					_this->y = Y;
					HX_STACK_LINE(657)
					_this->width = Width;
					HX_STACK_LINE(657)
					_this->height = Height;
					HX_STACK_LINE(657)
					tmp4 = _this;
				}
				HX_STACK_LINE(657)
				::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(657)
				rect->_inPool = false;
				HX_STACK_LINE(657)
				tmp3 = rect;
			}
			HX_STACK_LINE(657)
			this->uv = tmp3;
		}
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			::flixel::math::FlxRect tmp3 = this->uv;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(659)
			::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(659)
			Float tmp4 = value->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(659)
			::flixel::graphics::FlxGraphic tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(659)
			int tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(659)
			Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(659)
			_this->x = tmp7;
			HX_STACK_LINE(659)
			Float tmp8 = value->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(659)
			::flixel::graphics::FlxGraphic tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(659)
			int tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(659)
			Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(659)
			_this->y = tmp11;
			HX_STACK_LINE(659)
			Float tmp12 = (value->x + value->width);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(659)
			::flixel::graphics::FlxGraphic tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(659)
			int tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(659)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(659)
			_this->width = tmp15;
			HX_STACK_LINE(659)
			Float tmp16 = (value->y + value->height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(659)
			::flixel::graphics::FlxGraphic tmp17 = this->parent;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(659)
			int tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(659)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(659)
			_this->height = tmp19;
			HX_STACK_LINE(659)
			_this;
		}
	}
	HX_STACK_LINE(662)
	::flixel::math::FlxRect tmp1 = this->frame = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(662)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,set_frame,return )

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1,::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",32,0x6c7f608b)
	HX_STACK_ARG(frame1,"frame1")
	HX_STACK_ARG(frame2,"frame2")
	HX_STACK_ARG(prefixLength,"prefixLength")
	HX_STACK_ARG(postfixLength,"postfixLength")
	HX_STACK_LINE(33)
	::String name1 = frame1->name;		HX_STACK_VAR(name1,"name1");
	HX_STACK_LINE(34)
	::String name2 = frame2->name;		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(36)
	int tmp = prefixLength;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = (name1.length - postfixLength);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	::String tmp2 = name1.substring(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	int num1 = tmp3;		HX_STACK_VAR(num1,"num1");
	HX_STACK_LINE(37)
	int tmp4 = prefixLength;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	int tmp5 = (name2.length - postfixLength);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	::String tmp6 = name2.substring(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	Dynamic tmp7 = ::Std_obj::parseInt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	int num2 = tmp7;		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(39)
	int tmp8 = (num1 - num2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(point1,"point1");
	HX_MARK_MEMBER_NAME(point2,"point2");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_MARK_MEMBER_NAME(blitMatrix,"blitMatrix");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point1,"point1");
	HX_VISIT_MEMBER_NAME(point2,"point2");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_VISIT_MEMBER_NAME(blitMatrix,"blitMatrix");
}

Dynamic FlxFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return uv; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { return point1; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"clipTo") ) { return clipTo_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { return tileMatrix; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { return blitMatrix; }
		if (HX_FIELD_EQ(inName,"subFrameTo") ) { return subFrameTo_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBorderTo") ) { return setBorderTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateAndFlip") ) { return rotateAndFlip_dyn(); }
		if (HX_FIELD_EQ(inName,"prepareMatrix") ) { return prepareMatrix_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillBlitMatrix") ) { return fillBlitMatrix_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cacheFrameMatrix") ) { return cacheFrameMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"checkInputBitmap") ) { return checkInputBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getDrawFrameRect") ) { return getDrawFrameRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBlitMatrix") ) { return prepareBlitMatrix_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"paintRotatedAndFlipped") ) { return paintRotatedAndFlipped_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"prepareTransformedBlitMatrix") ) { return prepareTransformedBlitMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return set_frame(inValue);frame=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point1") ) { point1=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { tileMatrix=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { blitMatrix=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("point1","\xe1","\x11","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("uv","\x61","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("tileMatrix","\x0f","\x0c","\x5f","\x20"));
	outFields->push(HX_HCSTRING("blitMatrix","\x56","\x78","\x21","\xd8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxFrame_obj,point1),HX_HCSTRING("point1","\xe1","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxFrame_obj,point2),HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxFrame_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxFrame_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxFrame_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxFrame_obj,uv),HX_HCSTRING("uv","\x61","\x66","\x00","\x00")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFrame_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsBool,(int)offsetof(FlxFrame_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxFrame_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxFrame_obj,tileMatrix),HX_HCSTRING("tileMatrix","\x0f","\x0c","\x5f","\x20")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxFrame_obj,blitMatrix),HX_HCSTRING("blitMatrix","\x56","\x78","\x21","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("point1","\xe1","\x11","\x2e","\xf7"),
	HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("uv","\x61","\x66","\x00","\x00"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("tileMatrix","\x0f","\x0c","\x5f","\x20"),
	HX_HCSTRING("blitMatrix","\x56","\x78","\x21","\xd8"),
	HX_HCSTRING("cacheFrameMatrix","\x2c","\x83","\xfa","\x88"),
	HX_HCSTRING("prepareBlitMatrix","\xbd","\xdc","\xf9","\x4c"),
	HX_HCSTRING("rotateAndFlip","\x09","\x24","\xe1","\x45"),
	HX_HCSTRING("prepareTransformedBlitMatrix","\xfa","\x77","\x91","\xf4"),
	HX_HCSTRING("prepareMatrix","\x28","\x9b","\x0e","\x82"),
	HX_HCSTRING("fillBlitMatrix","\xb9","\xac","\x6c","\x16"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("paintRotatedAndFlipped","\xb6","\xa3","\xdf","\xc7"),
	HX_HCSTRING("checkInputBitmap","\xb1","\x8f","\x20","\x9b"),
	HX_HCSTRING("getDrawFrameRect","\xd7","\xc8","\x6f","\x02"),
	HX_HCSTRING("subFrameTo","\x68","\x95","\xdd","\xc4"),
	HX_HCSTRING("setBorderTo","\x49","\x73","\x59","\x89"),
	HX_HCSTRING("clipTo","\x6b","\x0c","\x58","\x0a"),
	HX_HCSTRING("copyTo","\x90","\x1c","\x33","\xc9"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sortByName","\xc0","\xa1","\x33","\x6b"),
	::String(null()) };

void FlxFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxFrame","\xf2","\x22","\x40","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFrame_obj >;
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
} // end namespace graphics
} // end namespace frames
