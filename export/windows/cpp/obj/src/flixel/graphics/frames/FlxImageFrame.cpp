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
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxBitmapDataUtil
#include <flixel/util/FlxBitmapDataUtil.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxImageFrame_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","new",0xda56055f,"flixel.graphics.frames.FlxImageFrame.new","flixel/graphics/frames/FlxImageFrame.hx",27,0x94146112)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(28)
	::flixel::graphics::FlxGraphic tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::flixel::math::FlxPoint tmp1 = border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	super::__construct(tmp,::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE,tmp1);
}
;
	return null();
}

//FlxImageFrame_obj::~FlxImageFrame_obj() { }

Dynamic FlxImageFrame_obj::__CreateEmpty() { return  new FlxImageFrame_obj; }
hx::ObjectPtr< FlxImageFrame_obj > FlxImageFrame_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxImageFrame_obj > _result_ = new FlxImageFrame_obj();
	_result_->__construct(parent,border);
	return _result_;}

Dynamic FlxImageFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxImageFrame_obj > _result_ = new FlxImageFrame_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool FlxImageFrame_obj::equals( ::flixel::math::FlxRect rect,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","equals",0x9ad6a2a0,"flixel.graphics.frames.FlxImageFrame.equals","flixel/graphics/frames/FlxImageFrame.hx",222,0x94146112)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(223)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::flixel::graphics::frames::FlxFrame tmp1 = this->get_frame();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		::flixel::graphics::frames::FlxFrame tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::flixel::math::FlxRect rect1 = tmp2->frame;		HX_STACK_VAR(rect1,"rect1");
		HX_STACK_LINE(223)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(223)
			Float tmp4 = (rect->x - rect1->x);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(223)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			Float tmp12 = aDiff;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			tmp3 = tmp13;
		}
		HX_STACK_LINE(223)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		bool tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		if ((tmp6)){
			HX_STACK_LINE(223)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(223)
			Float tmp7 = (rect->y - rect1->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(223)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(223)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(223)
			Float tmp18 = aDiff;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(223)
			bool tmp19 = (tmp17 <= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(223)
			tmp5 = tmp19;
		}
		else{
			HX_STACK_LINE(223)
			tmp5 = false;
		}
		HX_STACK_LINE(223)
		bool tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(223)
		if ((tmp9)){
			HX_STACK_LINE(223)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(223)
			Float tmp10 = (rect->width - rect1->width);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(223)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(223)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(223)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(223)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(223)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(223)
			Float tmp21 = aDiff;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(223)
			bool tmp22 = (tmp20 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(223)
			tmp8 = tmp22;
		}
		else{
			HX_STACK_LINE(223)
			tmp8 = false;
		}
		HX_STACK_LINE(223)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		bool tmp11 = tmp8;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		if ((tmp11)){
			HX_STACK_LINE(223)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(223)
			Float tmp12 = (rect->height - rect1->height);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(223)
			Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(223)
			Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(223)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(223)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(223)
			Float tmp20 = aDiff;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(223)
			bool tmp21 = (tmp19 <= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(223)
			tmp10 = tmp21;
		}
		else{
			HX_STACK_LINE(223)
			tmp10 = false;
		}
		HX_STACK_LINE(223)
		bool result = tmp10;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			bool tmp12 = rect1->_weak;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			if ((tmp13)){
				HX_STACK_LINE(223)
				bool tmp14 = rect1->_inPool;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(223)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(223)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(223)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(223)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(223)
				if ((tmp18)){
					HX_STACK_LINE(223)
					rect1->_inPool = true;
					HX_STACK_LINE(223)
					rect1->_weak = false;
					HX_STACK_LINE(223)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp19 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(223)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(223)
					::flixel::math::FlxRect tmp21 = rect1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(223)
					::flixel::math::FlxRect tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(223)
					tmp20->putUnsafe(tmp22);
				}
			}
		}
		HX_STACK_LINE(223)
		tmp = result;
	}
	HX_STACK_LINE(223)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	if ((tmp)){
		HX_STACK_LINE(223)
		::flixel::math::FlxPoint tmp2 = this->border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::flixel::math::FlxPoint tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		::flixel::math::FlxPoint point = tmp3;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(223)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(223)
			Float tmp5 = (border->x - point->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(223)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			Float tmp13 = aDiff;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			bool tmp14 = (tmp12 <= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			tmp4 = tmp14;
		}
		HX_STACK_LINE(223)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		bool tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		if ((tmp6)){
			HX_STACK_LINE(223)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(223)
			Float tmp7 = (border->y - point->y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(223)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(223)
			Float tmp15 = aDiff;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(223)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(223)
			tmp5 = tmp16;
		}
		else{
			HX_STACK_LINE(223)
			tmp5 = false;
		}
		HX_STACK_LINE(223)
		bool result = tmp5;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			bool tmp7 = point->_weak;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			if ((tmp8)){
				HX_STACK_LINE(223)
				point->put();
			}
		}
		HX_STACK_LINE(223)
		tmp1 = result;
	}
	else{
		HX_STACK_LINE(223)
		tmp1 = false;
	}
	HX_STACK_LINE(223)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,equals,return )

::flixel::graphics::frames::FlxFramesCollection FlxImageFrame_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","addBorder",0x2bc1002c,"flixel.graphics.frames.FlxImageFrame.addBorder","flixel/graphics/frames/FlxImageFrame.hx",253,0x94146112)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(254)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(254)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(254)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(254)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(254)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(254)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(254)
			point->_inPool = false;
			HX_STACK_LINE(254)
			tmp1 = point;
		}
		HX_STACK_LINE(254)
		::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(254)
		point->_weak = true;
		HX_STACK_LINE(254)
		tmp = point;
	}
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint tmp2 = tmp->addPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint tmp4 = tmp2->addPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint resultBorder = tmp4;		HX_STACK_VAR(resultBorder,"resultBorder");
	HX_STACK_LINE(256)
	::flixel::graphics::FlxGraphic tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(256)
	::flixel::graphics::frames::FlxFrame tmp6 = this->get_frame();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(256)
	::flixel::math::FlxRect tmp7 = tmp6->frame;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(256)
	::flixel::math::FlxPoint tmp8 = resultBorder;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(256)
	::flixel::graphics::frames::FlxImageFrame tmp9 = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(tmp5,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(256)
	::flixel::graphics::frames::FlxImageFrame imageFrame = tmp9;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(257)
	bool tmp10 = (imageFrame != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(257)
	if ((tmp10)){
		HX_STACK_LINE(259)
		::flixel::graphics::frames::FlxImageFrame tmp11 = imageFrame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(259)
		return tmp11;
	}
	HX_STACK_LINE(262)
	::flixel::graphics::FlxGraphic tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(262)
	::flixel::math::FlxPoint tmp12 = resultBorder;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(262)
	::flixel::graphics::frames::FlxImageFrame tmp13 = ::flixel::graphics::frames::FlxImageFrame_obj::__new(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(262)
	imageFrame = tmp13;
	HX_STACK_LINE(263)
	::flixel::graphics::frames::FlxFrame tmp14 = this->get_frame();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(263)
	::flixel::math::FlxPoint tmp15 = border;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(263)
	::flixel::graphics::frames::FlxFrame tmp16 = tmp14->setBorderTo(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(263)
	imageFrame->pushFrame(tmp16);
	HX_STACK_LINE(264)
	::flixel::graphics::frames::FlxImageFrame tmp17 = imageFrame;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(264)
	return tmp17;
}


Void FlxImageFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","destroy",0xd0e04d79,"flixel.graphics.frames.FlxImageFrame.destroy","flixel/graphics/frames/FlxImageFrame.hx",268,0x94146112)
		HX_STACK_THIS(this)
		HX_STACK_LINE(269)
		this->super::destroy();
		HX_STACK_LINE(270)
		::flixel::graphics::frames::FlxFrame tmp = this->get_frame();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		::flixel::graphics::frames::FlxFrame tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		this->frame = tmp1;
	}
return null();
}


::flixel::graphics::frames::FlxFrame FlxImageFrame_obj::get_frame( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","get_frame",0x59af52c3,"flixel.graphics.frames.FlxImageFrame.get_frame","flixel/graphics/frames/FlxImageFrame.hx",274,0x94146112)
	HX_STACK_THIS(this)
	HX_STACK_LINE(275)
	::flixel::graphics::frames::FlxFrame tmp = this->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxImageFrame_obj,get_frame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromEmptyFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect frameRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromEmptyFrame",0x20331dcb,"flixel.graphics.frames.FlxImageFrame.fromEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",39,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(frameRect,"frameRect")
	HX_STACK_LINE(40)
	bool tmp = (graphic == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	if ((tmp1)){
		HX_STACK_LINE(40)
		tmp2 = (frameRect == null());
	}
	else{
		HX_STACK_LINE(40)
		tmp2 = true;
	}
	HX_STACK_LINE(40)
	if ((tmp2)){
		HX_STACK_LINE(40)
		return null();
	}
	HX_STACK_LINE(43)
	::flixel::graphics::FlxGraphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	::flixel::math::FlxRect tmp4 = frameRect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	::flixel::graphics::frames::FlxImageFrame tmp5 = ::flixel::graphics::frames::FlxImageFrame_obj::findEmptyFrame(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	::flixel::graphics::frames::FlxImageFrame imageFrame = tmp5;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(44)
	bool tmp6 = (imageFrame != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	if ((tmp6)){
		HX_STACK_LINE(46)
		::flixel::graphics::frames::FlxImageFrame tmp7 = imageFrame;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		return tmp7;
	}
	HX_STACK_LINE(50)
	::flixel::graphics::frames::FlxImageFrame tmp7 = ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(50)
	imageFrame = tmp7;
	HX_STACK_LINE(51)
	::flixel::math::FlxRect tmp8 = frameRect;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	imageFrame->addEmptyFrame(tmp8);
	HX_STACK_LINE(52)
	::flixel::graphics::frames::FlxImageFrame tmp9 = imageFrame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(52)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromEmptyFrame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrame( ::flixel::graphics::frames::FlxFrame source){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromFrame",0xca8ee0a2,"flixel.graphics.frames.FlxImageFrame.fromFrame","flixel/graphics/frames/FlxImageFrame.hx",62,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(63)
	::flixel::graphics::FlxGraphic graphic = source->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(64)
	::flixel::math::FlxRect rect = source->frame;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(66)
	::flixel::graphics::FlxGraphic tmp = graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::flixel::math::FlxRect tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	::flixel::graphics::frames::FlxImageFrame tmp2 = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	::flixel::graphics::frames::FlxImageFrame imageFrame = tmp2;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(67)
	bool tmp3 = (imageFrame != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	if ((tmp3)){
		HX_STACK_LINE(69)
		::flixel::graphics::frames::FlxImageFrame tmp4 = imageFrame;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		return tmp4;
	}
	HX_STACK_LINE(72)
	::flixel::graphics::frames::FlxImageFrame tmp4 = ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	imageFrame = tmp4;
	HX_STACK_LINE(73)
	::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(73)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(73)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(73)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(73)
			::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(73)
				_this->x = X;
				HX_STACK_LINE(73)
				_this->y = Y;
				HX_STACK_LINE(73)
				_this->width = Width;
				HX_STACK_LINE(73)
				_this->height = Height;
				HX_STACK_LINE(73)
				tmp7 = _this;
			}
			HX_STACK_LINE(73)
			::flixel::math::FlxRect rect1 = tmp7;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(73)
			rect1->_inPool = false;
			HX_STACK_LINE(73)
			tmp6 = rect1;
		}
		HX_STACK_LINE(73)
		::flixel::math::FlxRect Rect = tmp6;		HX_STACK_VAR(Rect,"Rect");
		HX_STACK_LINE(73)
		Rect->x = rect->x;
		HX_STACK_LINE(73)
		Rect->y = rect->y;
		HX_STACK_LINE(73)
		Rect->width = rect->width;
		HX_STACK_LINE(73)
		Rect->height = rect->height;
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			bool tmp7 = Rect->_weak;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(73)
			if ((tmp7)){
				HX_STACK_LINE(73)
				bool tmp8 = Rect->_inPool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(73)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(73)
				if ((tmp9)){
					HX_STACK_LINE(73)
					Rect->_inPool = true;
					HX_STACK_LINE(73)
					Rect->_weak = false;
					HX_STACK_LINE(73)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(73)
					::flixel::math::FlxRect tmp11 = Rect;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(73)
					tmp10->putUnsafe(tmp11);
				}
			}
		}
		HX_STACK_LINE(73)
		tmp5 = Rect;
	}
	HX_STACK_LINE(73)
	imageFrame->addSpriteSheetFrame(tmp5);
	HX_STACK_LINE(74)
	::flixel::graphics::frames::FlxImageFrame tmp6 = imageFrame;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(74)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromFrame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromImage( Dynamic source){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromImage",0x817487d0,"flixel.graphics.frames.FlxImageFrame.fromImage","flixel/graphics/frames/FlxImageFrame.hx",84,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(85)
	Dynamic tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::flixel::graphics::frames::FlxImageFrame tmp1 = ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxImageFrame_obj,fromImage,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromGraphic",0xe0158a5d,"flixel.graphics.frames.FlxImageFrame.fromGraphic","flixel/graphics/frames/FlxImageFrame.hx",96,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(97)
	bool tmp = (graphic == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	if ((tmp)){
		HX_STACK_LINE(98)
		return null();
	}
	HX_STACK_LINE(101)
	::flixel::math::FlxRect checkRegion = region;		HX_STACK_VAR(checkRegion,"checkRegion");
	HX_STACK_LINE(103)
	bool tmp1 = (checkRegion == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	if ((tmp1)){
		HX_STACK_LINE(104)
		::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::flixel::math::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				{
					HX_STACK_LINE(104)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp5 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(104)
					::flixel::math::FlxRect tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(104)
					::flixel::math::FlxRect _this = tmp6;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(104)
					_this->x = (int)0;
					HX_STACK_LINE(104)
					_this->y = (int)0;
					HX_STACK_LINE(104)
					_this->width = graphic->width;
					HX_STACK_LINE(104)
					_this->height = graphic->height;
					HX_STACK_LINE(104)
					tmp4 = _this;
				}
				HX_STACK_LINE(104)
				::flixel::math::FlxRect rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(104)
				rect->_inPool = false;
				HX_STACK_LINE(104)
				tmp3 = rect;
			}
			HX_STACK_LINE(104)
			::flixel::math::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(104)
			rect->_weak = true;
			HX_STACK_LINE(104)
			tmp2 = rect;
		}
		HX_STACK_LINE(104)
		checkRegion = tmp2;
	}
	HX_STACK_LINE(106)
	::flixel::graphics::FlxGraphic tmp2 = graphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	::flixel::math::FlxRect tmp3 = checkRegion;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	::flixel::graphics::frames::FlxImageFrame tmp4 = ::flixel::graphics::frames::FlxImageFrame_obj::findFrame(tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	::flixel::graphics::frames::FlxImageFrame imageFrame = tmp4;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(107)
	bool tmp5 = (imageFrame != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(107)
	if ((tmp5)){
		HX_STACK_LINE(109)
		::flixel::graphics::frames::FlxImageFrame tmp6 = imageFrame;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		return tmp6;
	}
	HX_STACK_LINE(113)
	::flixel::graphics::frames::FlxImageFrame tmp6 = ::flixel::graphics::frames::FlxImageFrame_obj::__new(graphic,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(113)
	imageFrame = tmp6;
	HX_STACK_LINE(115)
	bool tmp7 = (region == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	if ((tmp7)){
		HX_STACK_LINE(117)
		::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(117)
				::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(117)
				::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(117)
				_this->x = (int)0;
				HX_STACK_LINE(117)
				_this->y = (int)0;
				HX_STACK_LINE(117)
				_this->width = graphic->width;
				HX_STACK_LINE(117)
				_this->height = graphic->height;
				HX_STACK_LINE(117)
				tmp9 = _this;
			}
			HX_STACK_LINE(117)
			::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(117)
			rect->_inPool = false;
			HX_STACK_LINE(117)
			tmp8 = rect;
		}
		HX_STACK_LINE(117)
		region = tmp8;
	}
	else{
		HX_STACK_LINE(121)
		bool tmp8 = (region->width == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		if ((tmp8)){
			HX_STACK_LINE(123)
			Float tmp9 = (graphic->width - region->x);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			region->width = tmp9;
		}
		HX_STACK_LINE(126)
		bool tmp9 = (region->height == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		if ((tmp9)){
			HX_STACK_LINE(128)
			Float tmp10 = (graphic->height - region->y);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(128)
			region->height = tmp10;
		}
	}
	HX_STACK_LINE(132)
	::flixel::math::FlxRect tmp8 = region;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(132)
	imageFrame->addSpriteSheetFrame(tmp8);
	HX_STACK_LINE(133)
	::flixel::graphics::frames::FlxImageFrame tmp9 = imageFrame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(133)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromGraphic,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromRectangle( Dynamic source,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromRectangle",0x493e1b24,"flixel.graphics.frames.FlxImageFrame.fromRectangle","flixel/graphics/frames/FlxImageFrame.hx",144,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(145)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(146)
	::flixel::graphics::FlxGraphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(146)
	::flixel::math::FlxRect tmp4 = region;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(146)
	::flixel::graphics::frames::FlxImageFrame tmp5 = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(146)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromRectangle,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromBitmapAddSpacesAndBorders( Dynamic source,::flixel::math::FlxPoint border,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromBitmapAddSpacesAndBorders",0x2600d1c4,"flixel.graphics.frames.FlxImageFrame.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",160,0x94146112)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(border,"border")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(161)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(162)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	if ((tmp3)){
		HX_STACK_LINE(162)
		return null();
	}
	HX_STACK_LINE(164)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	::String tmp5 = graphic->key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	::flixel::math::FlxPoint tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(164)
	::flixel::math::FlxRect tmp7 = region;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	::String tmp8 = tmp4->__Field(HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"), hx::paccDynamic )(tmp5,null(),null(),tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(164)
	::String key = tmp8;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(165)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp9 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(165)
	::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(165)
	::flixel::graphics::FlxGraphic tmp11 = tmp9->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(165)
	::flixel::graphics::FlxGraphic result = tmp11;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(166)
	bool tmp12 = (result == null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(166)
	if ((tmp12)){
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData tmp13 = graphic->bitmap;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		::flixel::math::FlxPoint tmp14 = border;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(168)
		::flixel::math::FlxRect tmp15 = region;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData tmp16 = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(tmp13,null(),null(),tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(168)
		::openfl::_legacy::display::BitmapData bitmap = tmp16;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(169)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp17 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(169)
		::openfl::_legacy::display::BitmapData tmp18 = bitmap;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(169)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(169)
		::flixel::graphics::FlxGraphic tmp20 = tmp17->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp18,false,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(169)
		result = tmp20;
	}
	HX_STACK_LINE(172)
	Float tmp13 = border->x;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(172)
	int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(172)
	int borderX = tmp14;		HX_STACK_VAR(borderX,"borderX");
	HX_STACK_LINE(173)
	Float tmp15 = border->y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(173)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(173)
	int borderY = tmp16;		HX_STACK_VAR(borderY,"borderY");
	HX_STACK_LINE(175)
	::flixel::graphics::FlxGraphic tmp17 = graphic;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(175)
	::flixel::graphics::frames::FlxImageFrame tmp18 = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(175)
	::flixel::graphics::frames::FlxImageFrame imageFrame = tmp18;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(176)
	::flixel::math::FlxPoint tmp19 = border;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(176)
	::flixel::graphics::frames::FlxImageFrame tmp20 = hx::TCast< ::flixel::graphics::frames::FlxImageFrame >::cast(imageFrame->addBorder(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(176)
	return tmp20;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,fromBitmapAddSpacesAndBorders,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","fromFrameAddSpacesAndBorders",0x6359dbfc,"flixel.graphics.frames.FlxImageFrame.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxImageFrame.hx",188,0x94146112)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(189)
	::openfl::_legacy::display::BitmapData tmp = frame->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	::openfl::_legacy::display::BitmapData bitmap = tmp;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(190)
	::openfl::_legacy::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	::flixel::math::FlxPoint tmp2 = border;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	::flixel::graphics::frames::FlxImageFrame tmp3 = ::flixel::graphics::frames::FlxImageFrame_obj::fromBitmapAddSpacesAndBorders(tmp1,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,fromFrameAddSpacesAndBorders,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect frameRect,::flixel::math::FlxPoint frameBorder){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","findFrame",0x04fd2773,"flixel.graphics.frames.FlxImageFrame.findFrame","flixel/graphics/frames/FlxImageFrame.hx",201,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(frameRect,"frameRect")
	HX_STACK_ARG(frameBorder,"frameBorder")
	HX_STACK_LINE(202)
	bool tmp = (frameBorder == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(203)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(203)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(203)
			::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			{
				HX_STACK_LINE(203)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp3 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(203)
				::flixel::math::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(203)
				Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(203)
				Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(203)
				::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(203)
				::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(203)
				point->_inPool = false;
				HX_STACK_LINE(203)
				tmp2 = point;
			}
			HX_STACK_LINE(203)
			::flixel::math::FlxPoint point = tmp2;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(203)
			point->_weak = true;
			HX_STACK_LINE(203)
			tmp1 = point;
		}
		HX_STACK_LINE(203)
		frameBorder = tmp1;
	}
	HX_STACK_LINE(205)
	Array< ::Dynamic > imageFrames;		HX_STACK_VAR(imageFrames,"imageFrames");
	struct _Function_1_1{
		inline static cpp::ArrayBase Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",205,0x94146112)
			{
				HX_STACK_LINE(205)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(205)
				::flixel::graphics::frames::FlxFrameCollectionType tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(205)
				cpp::ArrayBase collections = ((cpp::ArrayBase)(graphic->frameCollections->get(tmp1)));		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(205)
				bool tmp2 = (collections == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(205)
				if ((tmp2)){
					HX_STACK_LINE(205)
					collections = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(205)
					::flixel::graphics::frames::FlxFrameCollectionType tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(205)
					graphic->frameCollections->set(tmp3,collections);
				}
				HX_STACK_LINE(205)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(205)
	imageFrames = ((Array< ::Dynamic >)(_Function_1_1::Block(graphic)));
	HX_STACK_LINE(206)
	::flixel::graphics::frames::FlxImageFrame imageFrame;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		while((true)){
			HX_STACK_LINE(207)
			bool tmp1 = (_g < imageFrames->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(207)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			if ((tmp2)){
				HX_STACK_LINE(207)
				break;
			}
			HX_STACK_LINE(207)
			::flixel::graphics::frames::FlxImageFrame tmp3 = imageFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxImageFrame >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			::flixel::graphics::frames::FlxImageFrame imageFrame1 = tmp3;		HX_STACK_VAR(imageFrame1,"imageFrame1");
			HX_STACK_LINE(207)
			++(_g);
			HX_STACK_LINE(209)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(209)
				::flixel::graphics::frames::FlxFrame tmp5 = imageFrame1->get_frame();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(209)
				::flixel::graphics::frames::FlxFrame tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(209)
				::flixel::math::FlxRect rect = tmp6->frame;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(209)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(209)
					Float tmp8 = (frameRect->x - rect->x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(209)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(209)
					Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(209)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					Float tmp13 = ::Math_obj::abs(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(209)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(209)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(209)
					Float tmp16 = aDiff;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					bool tmp17 = (tmp15 <= tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					tmp7 = tmp17;
				}
				HX_STACK_LINE(209)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(209)
				if ((tmp10)){
					HX_STACK_LINE(209)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(209)
					Float tmp11 = (frameRect->y - rect->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(209)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(209)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(209)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(209)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					Float tmp22 = aDiff;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					bool tmp23 = (tmp21 <= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					tmp9 = tmp23;
				}
				else{
					HX_STACK_LINE(209)
					tmp9 = false;
				}
				HX_STACK_LINE(209)
				bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(209)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(209)
				bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(209)
				if ((tmp13)){
					HX_STACK_LINE(209)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(209)
					Float tmp14 = (frameRect->width - rect->width);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(209)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(209)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(209)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					Float tmp25 = aDiff;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					bool tmp26 = (tmp24 <= tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(209)
					tmp12 = tmp26;
				}
				else{
					HX_STACK_LINE(209)
					tmp12 = false;
				}
				HX_STACK_LINE(209)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(209)
				bool tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(209)
				if ((tmp15)){
					HX_STACK_LINE(209)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(209)
					Float tmp16 = (frameRect->height - rect->height);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(209)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					Float tmp24 = aDiff;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					bool tmp25 = (tmp23 <= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(209)
					tmp14 = tmp25;
				}
				else{
					HX_STACK_LINE(209)
					tmp14 = false;
				}
				HX_STACK_LINE(209)
				bool result = tmp14;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					bool tmp16 = rect->_weak;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					if ((tmp17)){
						HX_STACK_LINE(209)
						bool tmp18 = rect->_inPool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(209)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(209)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(209)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(209)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(209)
						if ((tmp22)){
							HX_STACK_LINE(209)
							rect->_inPool = true;
							HX_STACK_LINE(209)
							rect->_weak = false;
							HX_STACK_LINE(209)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp23 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(209)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(209)
							::flixel::math::FlxRect tmp25 = rect;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(209)
							::flixel::math::FlxRect tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(209)
							tmp24->putUnsafe(tmp26);
						}
					}
				}
				HX_STACK_LINE(209)
				tmp4 = result;
			}
			HX_STACK_LINE(209)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			if ((tmp5)){
				HX_STACK_LINE(209)
				::flixel::math::FlxPoint point = imageFrame1->border;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(209)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(209)
					Float tmp8 = (frameBorder->x - point->x);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(209)
					Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(209)
					Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(209)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(209)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(209)
					Float tmp15 = ::Math_obj::abs(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(209)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(209)
					Float tmp19 = aDiff;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					bool tmp20 = (tmp18 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					tmp7 = tmp21;
				}
				HX_STACK_LINE(209)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(209)
				if ((tmp10)){
					HX_STACK_LINE(209)
					Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(209)
					Float tmp11 = (frameBorder->y - point->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(209)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(209)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(209)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(209)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(209)
					Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(209)
					Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(209)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(209)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(209)
					Float tmp22 = aDiff;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(209)
					bool tmp23 = (tmp21 <= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(209)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(209)
					tmp8 = tmp24;
				}
				else{
					HX_STACK_LINE(209)
					tmp8 = false;
				}
				HX_STACK_LINE(209)
				bool result = tmp8;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(209)
					bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(209)
					if ((tmp13)){
						HX_STACK_LINE(209)
						point->put();
					}
				}
				HX_STACK_LINE(209)
				tmp6 = result;
			}
			else{
				HX_STACK_LINE(209)
				tmp6 = false;
			}
			HX_STACK_LINE(209)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			if ((tmp6)){
				HX_STACK_LINE(209)
				::flixel::graphics::frames::FlxFrame tmp8 = imageFrame1->get_frame();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				::flixel::graphics::frames::FlxFrame tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				int tmp10 = tmp9->type;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(209)
				tmp7 = (tmp10 != (int)2);
			}
			else{
				HX_STACK_LINE(209)
				tmp7 = false;
			}
			HX_STACK_LINE(209)
			if ((tmp7)){
				HX_STACK_LINE(211)
				::flixel::graphics::frames::FlxImageFrame tmp8 = imageFrame1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(211)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(215)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxImageFrame_obj,findFrame,return )

::flixel::graphics::frames::FlxImageFrame FlxImageFrame_obj::findEmptyFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxRect frameRect){
	HX_STACK_FRAME("flixel.graphics.frames.FlxImageFrame","findEmptyFrame",0xe2dd815a,"flixel.graphics.frames.FlxImageFrame.findEmptyFrame","flixel/graphics/frames/FlxImageFrame.hx",234,0x94146112)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(frameRect,"frameRect")
	HX_STACK_LINE(235)
	Array< ::Dynamic > imageFrames;		HX_STACK_VAR(imageFrames,"imageFrames");
	struct _Function_1_1{
		inline static cpp::ArrayBase Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxImageFrame.hx",235,0x94146112)
			{
				HX_STACK_LINE(235)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::IMAGE;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(235)
				::flixel::graphics::frames::FlxFrameCollectionType tmp = type;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(235)
				cpp::ArrayBase collections = ((cpp::ArrayBase)(graphic->frameCollections->get(tmp)));		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(235)
				bool tmp1 = (collections == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(235)
				if ((tmp1)){
					HX_STACK_LINE(235)
					collections = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(235)
					::flixel::graphics::frames::FlxFrameCollectionType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(235)
					graphic->frameCollections->set(tmp2,collections);
				}
				HX_STACK_LINE(235)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(235)
	imageFrames = ((Array< ::Dynamic >)(_Function_1_1::Block(graphic)));
	HX_STACK_LINE(236)
	::flixel::graphics::frames::FlxImageFrame imageFrame;		HX_STACK_VAR(imageFrame,"imageFrame");
	HX_STACK_LINE(237)
	::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		while((true)){
			HX_STACK_LINE(239)
			bool tmp = (_g < imageFrames->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(239)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(239)
			if ((tmp1)){
				HX_STACK_LINE(239)
				break;
			}
			HX_STACK_LINE(239)
			::flixel::graphics::frames::FlxImageFrame tmp2 = imageFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxImageFrame >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(239)
			::flixel::graphics::frames::FlxImageFrame imageFrame1 = tmp2;		HX_STACK_VAR(imageFrame1,"imageFrame1");
			HX_STACK_LINE(239)
			++(_g);
			HX_STACK_LINE(241)
			::flixel::graphics::frames::FlxFrame tmp3 = imageFrame1->get_frame();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			frame = tmp3;
			HX_STACK_LINE(243)
			Float tmp4 = frame->sourceSize->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(243)
			Float tmp5 = frameRect->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(243)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(243)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(243)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(243)
			if ((tmp7)){
				HX_STACK_LINE(243)
				Float tmp9 = frame->sourceSize->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(243)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(243)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(243)
				Float tmp12 = frameRect->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(243)
				tmp8 = (tmp11 == tmp12);
			}
			else{
				HX_STACK_LINE(243)
				tmp8 = false;
			}
			HX_STACK_LINE(243)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(243)
			if ((tmp8)){
				HX_STACK_LINE(243)
				tmp9 = (frame->type == (int)2);
			}
			else{
				HX_STACK_LINE(243)
				tmp9 = false;
			}
			HX_STACK_LINE(243)
			if ((tmp9)){
				HX_STACK_LINE(245)
				::flixel::graphics::frames::FlxImageFrame tmp10 = imageFrame1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(245)
				return tmp10;
			}
		}
	}
	HX_STACK_LINE(249)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxImageFrame_obj,findEmptyFrame,return )


FlxImageFrame_obj::FlxImageFrame_obj()
{
}

void FlxImageFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxImageFrame);
	HX_MARK_MEMBER_NAME(frame,"frame");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxImageFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frame,"frame");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxImageFrame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return inCallProp == hx::paccAlways ? get_frame() : frame; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxImageFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromEmptyFrame") ) { outValue = fromEmptyFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"findEmptyFrame") ) { outValue = findEmptyFrame_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxImageFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxImageFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxImageFrame_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxImageFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxImageFrame_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxImageFrame_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromEmptyFrame","\x6a","\xa0","\x02","\x7f"),
	HX_HCSTRING("fromFrame","\x63","\x62","\x0c","\xbb"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("fromGraphic","\x5e","\xbe","\x47","\x0c"),
	HX_HCSTRING("fromRectangle","\x65","\x11","\x66","\x8d"),
	HX_HCSTRING("fromBitmapAddSpacesAndBorders","\x05","\x1a","\xdd","\xf3"),
	HX_HCSTRING("fromFrameAddSpacesAndBorders","\xdb","\x16","\xd1","\xbd"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	HX_HCSTRING("findEmptyFrame","\xf9","\x03","\xad","\x41"),
	::String(null()) };

void FlxImageFrame_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxImageFrame","\xed","\x69","\xba","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxImageFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxImageFrame_obj >;
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
