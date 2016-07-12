#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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

Void FlxTileFrames_obj::__construct(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","new",0xee264501,"flixel.graphics.frames.FlxTileFrames.new","flixel/graphics/frames/FlxTileFrames.hx",18,0x562d6bb0)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(border,"border")
{
	HX_STACK_LINE(40)
	this->numCols = (int)0;
	HX_STACK_LINE(38)
	this->numRows = (int)0;
	HX_STACK_LINE(44)
	::flixel::graphics::FlxGraphic tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::flixel::math::FlxPoint tmp1 = border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	super::__construct(tmp,::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES,tmp1);
}
;
	return null();
}

//FlxTileFrames_obj::~FlxTileFrames_obj() { }

Dynamic FlxTileFrames_obj::__CreateEmpty() { return  new FlxTileFrames_obj; }
hx::ObjectPtr< FlxTileFrames_obj > FlxTileFrames_obj::__new(::flixel::graphics::FlxGraphic parent,::flixel::math::FlxPoint border)
{  hx::ObjectPtr< FlxTileFrames_obj > _result_ = new FlxTileFrames_obj();
	_result_->__construct(parent,border);
	return _result_;}

Dynamic FlxTileFrames_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileFrames_obj > _result_ = new FlxTileFrames_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::flixel::graphics::frames::FlxFrame FlxTileFrames_obj::getByTilePosition( int column,int row){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","getByTilePosition",0xcc1d2a05,"flixel.graphics.frames.FlxTileFrames.getByTilePosition","flixel/graphics/frames/FlxTileFrames.hx",51,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(52)
	int tmp = row;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1 = this->numCols;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	int tmp3 = column;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	::flixel::graphics::frames::FlxFrame tmp5 = this->frames->__get(tmp4).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,getByTilePosition,return )

bool FlxTileFrames_obj::equals( ::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","equals",0xd88c543e,"flixel.graphics.frames.FlxTileFrames.equals","flixel/graphics/frames/FlxTileFrames.hx",508,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(509)
	::flixel::math::FlxRect tmp = this->region;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(509)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	if ((tmp1)){
		HX_STACK_LINE(509)
		::flixel::graphics::frames::FlxFrame tmp3 = this->atlasFrame;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(509)
		::flixel::graphics::frames::FlxFrame tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(509)
		tmp2 = (tmp4 == null());
	}
	else{
		HX_STACK_LINE(509)
		tmp2 = false;
	}
	HX_STACK_LINE(509)
	if ((tmp2)){
		HX_STACK_LINE(511)
		return false;
	}
	HX_STACK_LINE(514)
	bool tmp3 = (atlasFrame != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(514)
	if ((tmp3)){
		HX_STACK_LINE(516)
		region = atlasFrame->frame;
	}
	HX_STACK_LINE(519)
	bool tmp4 = (region == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(519)
	if ((tmp4)){
		HX_STACK_LINE(520)
		::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(520)
		{
			HX_STACK_LINE(520)
			::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(520)
			{
				HX_STACK_LINE(520)
				::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(520)
				{
					HX_STACK_LINE(520)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(520)
					::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(520)
					::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(520)
					_this->x = (int)0;
					HX_STACK_LINE(520)
					_this->y = (int)0;
					HX_STACK_LINE(520)
					::flixel::graphics::FlxGraphic tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(520)
					_this->width = tmp10->width;
					HX_STACK_LINE(520)
					::flixel::graphics::FlxGraphic tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(520)
					_this->height = tmp11->height;
					HX_STACK_LINE(520)
					tmp7 = _this;
				}
				HX_STACK_LINE(520)
				::flixel::math::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(520)
				rect->_inPool = false;
				HX_STACK_LINE(520)
				tmp6 = rect;
			}
			HX_STACK_LINE(520)
			::flixel::math::FlxRect rect = tmp6;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(520)
			rect->_weak = true;
			HX_STACK_LINE(520)
			tmp5 = rect;
		}
		HX_STACK_LINE(520)
		region = tmp5;
	}
	HX_STACK_LINE(522)
	bool tmp5 = (tileSpacing == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(522)
	if ((tmp5)){
		HX_STACK_LINE(523)
		::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(523)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(523)
			::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(523)
				::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(523)
				Float tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(523)
				Float tmp11 = Y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(523)
				::flixel::math::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(523)
				::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(523)
				point->_inPool = false;
				HX_STACK_LINE(523)
				tmp7 = point;
			}
			HX_STACK_LINE(523)
			::flixel::math::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(523)
			point->_weak = true;
			HX_STACK_LINE(523)
			tmp6 = point;
		}
		HX_STACK_LINE(523)
		tileSpacing = tmp6;
	}
	HX_STACK_LINE(525)
	bool tmp6 = (border == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(525)
	if ((tmp6)){
		HX_STACK_LINE(526)
		::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(526)
		{
			HX_STACK_LINE(526)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(526)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(526)
			::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(526)
			{
				HX_STACK_LINE(526)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(526)
				::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(526)
				Float tmp11 = X;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(526)
				Float tmp12 = Y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(526)
				::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(526)
				::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(526)
				point->_inPool = false;
				HX_STACK_LINE(526)
				tmp8 = point;
			}
			HX_STACK_LINE(526)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(526)
			point->_weak = true;
			HX_STACK_LINE(526)
			tmp7 = point;
		}
		HX_STACK_LINE(526)
		border = tmp7;
	}
	HX_STACK_LINE(528)
	::flixel::graphics::frames::FlxFrame tmp7 = this->atlasFrame;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(528)
	::flixel::graphics::frames::FlxFrame tmp8 = atlasFrame;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(528)
	bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(528)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(528)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(528)
	if ((tmp10)){
		HX_STACK_LINE(528)
		::flixel::math::FlxRect tmp12 = this->region;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(528)
		::flixel::math::FlxRect tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(528)
		::flixel::math::FlxRect tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(528)
		::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(528)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(528)
			Float tmp16 = (_this->x - region->x);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(528)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(528)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(528)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(528)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(528)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(528)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(528)
			Float tmp23 = ::Math_obj::abs(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(528)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(528)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(528)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(528)
			Float tmp27 = aDiff;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(528)
			bool tmp28 = (tmp26 <= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(528)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(528)
			tmp15 = tmp29;
		}
		HX_STACK_LINE(528)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(528)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(528)
		bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(528)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(528)
		if ((tmp19)){
			HX_STACK_LINE(528)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(528)
			Float tmp20 = (_this->y - region->y);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(528)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(528)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(528)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(528)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(528)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(528)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(528)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(528)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(528)
			Float tmp29 = ::Math_obj::abs(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(528)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(528)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(528)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(528)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(528)
			Float tmp34 = aDiff;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(528)
			bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(528)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(528)
			tmp17 = tmp36;
		}
		else{
			HX_STACK_LINE(528)
			tmp17 = false;
		}
		HX_STACK_LINE(528)
		bool tmp20 = tmp17;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(528)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(528)
		bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(528)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(528)
		if ((tmp23)){
			HX_STACK_LINE(528)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(528)
			Float tmp24 = (_this->width - region->width);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(528)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(528)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(528)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(528)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(528)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(528)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(528)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(528)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(528)
			Float tmp33 = ::Math_obj::abs(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(528)
			Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(528)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(528)
			Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(528)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(528)
			Float tmp38 = aDiff;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(528)
			bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(528)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(528)
			tmp21 = tmp40;
		}
		else{
			HX_STACK_LINE(528)
			tmp21 = false;
		}
		HX_STACK_LINE(528)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(528)
		bool tmp25 = tmp21;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(528)
		bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(528)
		if ((tmp26)){
			HX_STACK_LINE(528)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(528)
			Float tmp27 = (_this->height - region->height);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(528)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(528)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(528)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(528)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(528)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(528)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(528)
			Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(528)
			Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(528)
			Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(528)
			Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(528)
			Float tmp38 = aDiff;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(528)
			bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(528)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(528)
			tmp24 = tmp40;
		}
		else{
			HX_STACK_LINE(528)
			tmp24 = false;
		}
		HX_STACK_LINE(528)
		bool result = tmp24;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			bool tmp27 = region->_weak;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(528)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(528)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(528)
			if ((tmp29)){
				HX_STACK_LINE(528)
				bool tmp30 = region->_inPool;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(528)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(528)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(528)
				bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(528)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(528)
				bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(528)
				bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(528)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(528)
				if ((tmp37)){
					HX_STACK_LINE(528)
					region->_inPool = true;
					HX_STACK_LINE(528)
					region->_weak = false;
					HX_STACK_LINE(528)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp38 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(528)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(528)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(528)
					::flixel::math::FlxRect tmp41 = region;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(528)
					::flixel::math::FlxRect tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(528)
					::flixel::math::FlxRect tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(528)
					tmp40->putUnsafe(tmp43);
				}
			}
		}
		HX_STACK_LINE(528)
		tmp11 = result;
	}
	else{
		HX_STACK_LINE(528)
		tmp11 = false;
	}
	HX_STACK_LINE(528)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(528)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(528)
	if ((tmp12)){
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp14 = this->tileSize;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint _this = tmp16;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(529)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(529)
			Float tmp18 = (_this->x - tileSize->x);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(529)
			Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(529)
			Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(529)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(529)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(529)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(529)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(529)
			Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(529)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(529)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(529)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(529)
			Float tmp29 = aDiff;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(529)
			bool tmp30 = (tmp28 <= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(529)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(529)
			tmp17 = tmp31;
		}
		HX_STACK_LINE(529)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(529)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(529)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(529)
		if ((tmp20)){
			HX_STACK_LINE(529)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(529)
			Float tmp21 = (_this->y - tileSize->y);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(529)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(529)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(529)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(529)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(529)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(529)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(529)
			Float tmp28 = ::Math_obj::abs(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(529)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(529)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(529)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(529)
			Float tmp32 = aDiff;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(529)
			bool tmp33 = (tmp31 <= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(529)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(529)
			tmp18 = tmp34;
		}
		else{
			HX_STACK_LINE(529)
			tmp18 = false;
		}
		HX_STACK_LINE(529)
		bool result = tmp18;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			bool tmp21 = tileSize->_weak;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(529)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(529)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(529)
			if ((tmp23)){
				HX_STACK_LINE(529)
				tileSize->put();
			}
		}
		HX_STACK_LINE(529)
		tmp13 = result;
	}
	else{
		HX_STACK_LINE(528)
		tmp13 = false;
	}
	HX_STACK_LINE(528)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(528)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(528)
	if ((tmp14)){
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp16 = this->tileSpacing;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(529)
		::flixel::math::FlxPoint _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(529)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(529)
			Float tmp20 = (_this->x - tileSpacing->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(529)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(529)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(529)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(529)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(529)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(529)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(529)
			Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(529)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(529)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(529)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(529)
			Float tmp31 = aDiff;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(529)
			bool tmp32 = (tmp30 <= tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(529)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(529)
			tmp19 = tmp33;
		}
		HX_STACK_LINE(529)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(529)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(529)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(529)
		if ((tmp22)){
			HX_STACK_LINE(529)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(529)
			Float tmp23 = (_this->y - tileSpacing->y);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(529)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(529)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(529)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(529)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(529)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(529)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(529)
			Float tmp30 = ::Math_obj::abs(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(529)
			Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(529)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(529)
			Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(529)
			Float tmp34 = aDiff;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(529)
			bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(529)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(529)
			tmp20 = tmp36;
		}
		else{
			HX_STACK_LINE(529)
			tmp20 = false;
		}
		HX_STACK_LINE(529)
		bool result = tmp20;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			bool tmp23 = tileSpacing->_weak;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(529)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(529)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(529)
			if ((tmp25)){
				HX_STACK_LINE(529)
				tileSpacing->put();
			}
		}
		HX_STACK_LINE(529)
		tmp15 = result;
	}
	else{
		HX_STACK_LINE(528)
		tmp15 = false;
	}
	HX_STACK_LINE(528)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(528)
	if ((tmp15)){
		HX_STACK_LINE(530)
		::flixel::math::FlxPoint tmp17 = this->border;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(530)
		::flixel::math::FlxPoint tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(530)
		::flixel::math::FlxPoint _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(530)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(530)
			Float tmp20 = (_this->x - border->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(530)
			Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(530)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(530)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(530)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(530)
			Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(530)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(530)
			Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(530)
			Float tmp28 = aDiff;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(530)
			bool tmp29 = (tmp27 <= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(530)
			tmp19 = tmp29;
		}
		HX_STACK_LINE(530)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(530)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(530)
		if ((tmp21)){
			HX_STACK_LINE(530)
			Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(530)
			Float tmp22 = (_this->y - border->y);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(530)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(530)
			Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(530)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(530)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(530)
			Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(530)
			Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(530)
			Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(530)
			Float tmp30 = aDiff;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(530)
			bool tmp31 = (tmp29 <= tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(530)
			tmp20 = tmp31;
		}
		else{
			HX_STACK_LINE(530)
			tmp20 = false;
		}
		HX_STACK_LINE(530)
		bool result = tmp20;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			bool tmp22 = border->_weak;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(530)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(530)
			if ((tmp23)){
				HX_STACK_LINE(530)
				border->put();
			}
		}
		HX_STACK_LINE(530)
		tmp16 = result;
	}
	else{
		HX_STACK_LINE(528)
		tmp16 = false;
	}
	HX_STACK_LINE(528)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,equals,return )

::flixel::graphics::frames::FlxFramesCollection FlxTileFrames_obj::addBorder( ::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","addBorder",0x145fa54e,"flixel.graphics.frames.FlxTileFrames.addBorder","flixel/graphics/frames/FlxTileFrames.hx",534,0x562d6bb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(535)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(535)
	{
		HX_STACK_LINE(535)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(535)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(535)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(535)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(535)
		point->_inPool = false;
		HX_STACK_LINE(535)
		tmp = point;
	}
	HX_STACK_LINE(535)
	::flixel::math::FlxPoint tmp1 = this->border;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	::flixel::math::FlxPoint tmp2 = tmp->addPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	::flixel::math::FlxPoint tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(535)
	::flixel::math::FlxPoint tmp4 = tmp2->addPoint(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(535)
	::flixel::math::FlxPoint resultBorder = tmp4;		HX_STACK_VAR(resultBorder,"resultBorder");
	HX_STACK_LINE(536)
	::flixel::math::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(536)
	{
		HX_STACK_LINE(536)
		::flixel::math::FlxPoint tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(536)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(536)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(536)
				::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(536)
				Float tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(536)
				Float tmp11 = Y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(536)
				::flixel::math::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(536)
				::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(536)
				point->_inPool = false;
				HX_STACK_LINE(536)
				tmp7 = point;
			}
			HX_STACK_LINE(536)
			::flixel::math::FlxPoint _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(536)
			::flixel::math::FlxPoint tmp8 = this->tileSize;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(536)
			Float tmp9 = point->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			_this->set_x(tmp9);
			HX_STACK_LINE(536)
			Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(536)
			_this->set_y(tmp10);
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(536)
				if ((tmp11)){
					HX_STACK_LINE(536)
					point->put();
				}
			}
			HX_STACK_LINE(536)
			tmp6 = _this;
		}
		HX_STACK_LINE(536)
		::flixel::math::FlxPoint _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(536)
			Float tmp7 = _g->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Float tmp8 = ((int)2 * border->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			_g->set_x(tmp9);
		}
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(536)
			Float tmp7 = _g->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Float tmp8 = ((int)2 * border->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(536)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(536)
			_g->set_y(tmp9);
		}
		HX_STACK_LINE(536)
		tmp5 = _this;
	}
	HX_STACK_LINE(536)
	::flixel::math::FlxPoint resultSize = tmp5;		HX_STACK_VAR(resultSize,"resultSize");
	HX_STACK_LINE(537)
	::flixel::graphics::FlxGraphic tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(537)
	::flixel::math::FlxPoint tmp7 = resultSize;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(537)
	::flixel::math::FlxRect tmp8 = this->region;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(537)
	::flixel::graphics::frames::FlxFrame tmp9 = this->atlasFrame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(537)
	::flixel::math::FlxPoint tmp10 = this->tileSpacing;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(537)
	::flixel::math::FlxPoint tmp11 = resultBorder;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(537)
	::flixel::graphics::frames::FlxTileFrames tmp12 = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(537)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp12;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(538)
	bool tmp13 = (tileFrames != null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(538)
	if ((tmp13)){
		HX_STACK_LINE(540)
		::flixel::math::FlxPoint tmp14 = resultSize;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(540)
		::flixel::math::FlxPoint tmp15 = ::flixel::util::FlxDestroyUtil_obj::put(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(540)
		resultSize = tmp15;
		HX_STACK_LINE(541)
		::flixel::graphics::frames::FlxTileFrames tmp16 = tileFrames;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(541)
		return tmp16;
	}
	HX_STACK_LINE(544)
	::flixel::graphics::FlxGraphic tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(544)
	::flixel::math::FlxPoint tmp15 = resultBorder;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(544)
	::flixel::graphics::frames::FlxTileFrames tmp16 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(544)
	tileFrames = tmp16;
	HX_STACK_LINE(545)
	::flixel::math::FlxRect tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(545)
	{
		HX_STACK_LINE(545)
		::flixel::math::FlxRect tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(545)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(545)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(545)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(545)
			::flixel::math::FlxRect tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(545)
			{
				HX_STACK_LINE(545)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp20 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(545)
				::flixel::math::FlxRect tmp21 = tmp20->get();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(545)
				::flixel::math::FlxRect _this = tmp21;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(545)
				_this->x = X;
				HX_STACK_LINE(545)
				_this->y = Y;
				HX_STACK_LINE(545)
				_this->width = Width;
				HX_STACK_LINE(545)
				_this->height = Height;
				HX_STACK_LINE(545)
				tmp19 = _this;
			}
			HX_STACK_LINE(545)
			::flixel::math::FlxRect rect = tmp19;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(545)
			rect->_inPool = false;
			HX_STACK_LINE(545)
			tmp18 = rect;
		}
		HX_STACK_LINE(545)
		::flixel::math::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(545)
		::flixel::math::FlxRect tmp19 = this->region;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(545)
		::flixel::math::FlxRect Rect = tmp19;		HX_STACK_VAR(Rect,"Rect");
		HX_STACK_LINE(545)
		_this->x = Rect->x;
		HX_STACK_LINE(545)
		_this->y = Rect->y;
		HX_STACK_LINE(545)
		_this->width = Rect->width;
		HX_STACK_LINE(545)
		_this->height = Rect->height;
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			bool tmp20 = Rect->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(545)
			if ((tmp20)){
				HX_STACK_LINE(545)
				bool tmp21 = Rect->_inPool;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(545)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(545)
				if ((tmp22)){
					HX_STACK_LINE(545)
					Rect->_inPool = true;
					HX_STACK_LINE(545)
					Rect->_weak = false;
					HX_STACK_LINE(545)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp23 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(545)
					::flixel::math::FlxRect tmp24 = Rect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(545)
					tmp23->putUnsafe(tmp24);
				}
			}
		}
		HX_STACK_LINE(545)
		tmp17 = _this;
	}
	HX_STACK_LINE(545)
	tileFrames->region = tmp17;
	HX_STACK_LINE(546)
	::flixel::graphics::frames::FlxFrame tmp18 = this->atlasFrame;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(546)
	tileFrames->atlasFrame = tmp18;
	HX_STACK_LINE(547)
	tileFrames->tileSize = resultSize;
	HX_STACK_LINE(548)
	::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(548)
	{
		HX_STACK_LINE(548)
		::flixel::math::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(548)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(548)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp21 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(548)
			::flixel::math::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(548)
			Float tmp23 = X;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(548)
			Float tmp24 = Y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(548)
			::flixel::math::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(548)
			::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(548)
			point->_inPool = false;
			HX_STACK_LINE(548)
			tmp20 = point;
		}
		HX_STACK_LINE(548)
		::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(548)
		::flixel::math::FlxPoint tmp21 = this->tileSpacing;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(548)
		::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(548)
		Float tmp22 = point->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(548)
		_this->set_x(tmp22);
		HX_STACK_LINE(548)
		Float tmp23 = point->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(548)
		_this->set_y(tmp23);
		HX_STACK_LINE(548)
		{
			HX_STACK_LINE(548)
			bool tmp24 = point->_weak;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(548)
			if ((tmp24)){
				HX_STACK_LINE(548)
				point->put();
			}
		}
		HX_STACK_LINE(548)
		tmp19 = _this;
	}
	HX_STACK_LINE(548)
	tileFrames->tileSpacing = tmp19;
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(550)
		Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(550)
		while((true)){
			HX_STACK_LINE(550)
			bool tmp20 = (_g < _g1->length);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(550)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(550)
			if ((tmp21)){
				HX_STACK_LINE(550)
				break;
			}
			HX_STACK_LINE(550)
			::flixel::graphics::frames::FlxFrame tmp22 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(550)
			::flixel::graphics::frames::FlxFrame frame = tmp22;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(550)
			++(_g);
			HX_STACK_LINE(552)
			::flixel::math::FlxPoint tmp23 = border;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(552)
			::flixel::graphics::frames::FlxFrame tmp24 = frame->setBorderTo(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(552)
			tileFrames->pushFrame(tmp24);
		}
	}
	HX_STACK_LINE(555)
	::flixel::graphics::frames::FlxTileFrames tmp20 = tileFrames;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(555)
	return tmp20;
}


Void FlxTileFrames_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","destroy",0x9226061b,"flixel.graphics.frames.FlxTileFrames.destroy","flixel/graphics/frames/FlxTileFrames.hx",559,0x562d6bb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(560)
		this->super::destroy();
		HX_STACK_LINE(561)
		this->atlasFrame = null();
		HX_STACK_LINE(562)
		::flixel::math::FlxRect tmp = this->region;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(562)
		::flixel::math::FlxRect tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		this->region = tmp1;
		HX_STACK_LINE(563)
		::flixel::math::FlxPoint tmp2 = this->tileSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(563)
		::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(563)
		this->tileSize = tmp3;
		HX_STACK_LINE(564)
		::flixel::math::FlxPoint tmp4 = this->tileSpacing;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(564)
		::flixel::math::FlxPoint tmp5 = ::flixel::util::FlxDestroyUtil_obj::put(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(564)
		this->tileSpacing = tmp5;
	}
return null();
}


::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromBitmapAddSpacesAndBorders( Dynamic source,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder,::flixel::math::FlxRect region){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromBitmapAddSpacesAndBorders",0x637393e6,"flixel.graphics.frames.FlxTileFrames.fromBitmapAddSpacesAndBorders","flixel/graphics/frames/FlxTileFrames.hx",69,0x562d6bb0)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(70)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(71)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	if ((tmp3)){
		HX_STACK_LINE(71)
		return null();
	}
	HX_STACK_LINE(73)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp4 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	::String tmp5 = graphic->key;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(73)
	::flixel::math::FlxPoint tmp6 = tileSize;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	::flixel::math::FlxPoint tmp7 = tileSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	::flixel::math::FlxPoint tmp8 = tileBorder;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(73)
	::flixel::math::FlxRect tmp9 = region;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(73)
	::String tmp10 = tmp4->__Field(HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"), hx::paccDynamic )(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(73)
	::String key = tmp10;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(74)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(74)
	::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(74)
	::flixel::graphics::FlxGraphic tmp13 = tmp11->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(74)
	::flixel::graphics::FlxGraphic result = tmp13;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(75)
	bool tmp14 = (result == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(75)
	if ((tmp14)){
		HX_STACK_LINE(77)
		::openfl::_legacy::display::BitmapData tmp15 = graphic->bitmap;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(77)
		::flixel::math::FlxPoint tmp16 = tileSize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(77)
		::flixel::math::FlxPoint tmp17 = tileSpacing;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(77)
		::flixel::math::FlxPoint tmp18 = tileBorder;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(77)
		::flixel::math::FlxRect tmp19 = region;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		::openfl::_legacy::display::BitmapData tmp20 = ::flixel::util::FlxBitmapDataUtil_obj::addSpacesAndBorders(tmp15,tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(77)
		::openfl::_legacy::display::BitmapData bitmap = tmp20;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(78)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp21 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(78)
		::openfl::_legacy::display::BitmapData tmp22 = bitmap;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(78)
		::String tmp23 = key;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(78)
		::flixel::graphics::FlxGraphic tmp24 = tmp21->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp22,false,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(78)
		result = tmp24;
	}
	HX_STACK_LINE(81)
	int borderX = (int)0;		HX_STACK_VAR(borderX,"borderX");
	HX_STACK_LINE(82)
	int borderY = (int)0;		HX_STACK_VAR(borderY,"borderY");
	HX_STACK_LINE(84)
	bool tmp15 = (tileBorder != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(84)
	if ((tmp15)){
		HX_STACK_LINE(86)
		Float tmp16 = tileBorder->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(86)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(86)
		borderX = tmp17;
		HX_STACK_LINE(87)
		Float tmp18 = tileBorder->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(87)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(87)
		borderY = tmp19;
	}
	HX_STACK_LINE(90)
	::flixel::graphics::FlxGraphic tmp16 = result;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(90)
	::flixel::math::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(90)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(90)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp19 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(90)
			::flixel::math::FlxPoint tmp20 = tmp19->get();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(90)
			Float tmp21 = X;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(90)
			Float tmp22 = Y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(90)
			::flixel::math::FlxPoint tmp23 = tmp20->set(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(90)
			::flixel::math::FlxPoint point = tmp23;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(90)
			point->_inPool = false;
			HX_STACK_LINE(90)
			tmp18 = point;
		}
		HX_STACK_LINE(90)
		::flixel::math::FlxPoint tmp19 = tileSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(90)
		::flixel::math::FlxPoint tmp20 = tmp18->addPoint(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(90)
		::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(90)
			int tmp22 = ((int)2 * borderX);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(90)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(90)
			_g->set_x(tmp23);
		}
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			Float tmp21 = _g->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(90)
			int tmp22 = ((int)2 * borderY);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(90)
			Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(90)
			_g->set_y(tmp23);
		}
		HX_STACK_LINE(90)
		tmp17 = _this;
	}
	HX_STACK_LINE(90)
	::flixel::math::FlxPoint tmp18 = tileSpacing;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(90)
	::flixel::graphics::frames::FlxTileFrames tmp19 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp16,tmp17,null(),tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(90)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp19;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(92)
	bool tmp20 = (tileBorder == null());		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(92)
	if ((tmp20)){
		HX_STACK_LINE(94)
		::flixel::graphics::frames::FlxTileFrames tmp21 = tileFrames;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(94)
		return tmp21;
	}
	HX_STACK_LINE(97)
	::flixel::math::FlxPoint tmp21 = tileBorder;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(97)
	::flixel::graphics::frames::FlxTileFrames tmp22 = hx::TCast< ::flixel::graphics::frames::FlxTileFrames >::cast(tileFrames->addBorder(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(97)
	return tmp22;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxTileFrames_obj,fromBitmapAddSpacesAndBorders,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrameAddSpacesAndBorders",0x8cf4341a,"flixel.graphics.frames.FlxTileFrames.fromFrameAddSpacesAndBorders","flixel/graphics/frames/FlxTileFrames.hx",112,0x562d6bb0)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_LINE(113)
	::openfl::_legacy::display::BitmapData tmp = frame->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	::openfl::_legacy::display::BitmapData bitmap = tmp;		HX_STACK_VAR(bitmap,"bitmap");
	HX_STACK_LINE(114)
	::openfl::_legacy::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	::flixel::math::FlxPoint tmp2 = tileSize;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	::flixel::math::FlxPoint tmp3 = tileSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	::flixel::math::FlxPoint tmp4 = tileBorder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	::flixel::graphics::frames::FlxTileFrames tmp5 = ::flixel::graphics::frames::FlxTileFrames_obj::fromBitmapAddSpacesAndBorders(tmp1,tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromFrameAddSpacesAndBorders,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrame( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrame",0xb32d85c4,"flixel.graphics.frames.FlxTileFrames.fromFrame","flixel/graphics/frames/FlxTileFrames.hx",127,0x562d6bb0)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(128)
	::flixel::graphics::FlxGraphic graphic = frame->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(130)
	::flixel::graphics::FlxGraphic tmp = graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	::flixel::math::FlxPoint tmp1 = tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	::flixel::graphics::frames::FlxFrame tmp2 = frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	::flixel::math::FlxPoint tmp3 = tileSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	::flixel::graphics::frames::FlxTileFrames tmp4 = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(tmp,tmp1,null(),tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp4;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(131)
	bool tmp5 = (tileFrames != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	if ((tmp5)){
		HX_STACK_LINE(133)
		::flixel::graphics::frames::FlxTileFrames tmp6 = tileFrames;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(133)
		return tmp6;
	}
	HX_STACK_LINE(137)
	bool tmp6 = (tileSpacing != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	if ((tmp6)){
		HX_STACK_LINE(137)
		tmp7 = tileSpacing;
	}
	else{
		HX_STACK_LINE(137)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		::flixel::math::FlxPoint tmp10 = tmp9->set((int)0,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		::flixel::math::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(137)
		point->_inPool = false;
		HX_STACK_LINE(137)
		tmp7 = point;
	}
	HX_STACK_LINE(137)
	tileSpacing = tmp7;
	HX_STACK_LINE(139)
	::flixel::graphics::frames::FlxTileFrames tmp8 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(139)
	tileFrames = tmp8;
	HX_STACK_LINE(140)
	tileFrames->atlasFrame = frame;
	HX_STACK_LINE(141)
	tileFrames->region = frame->frame;
	HX_STACK_LINE(142)
	tileFrames->tileSize = tileSize;
	HX_STACK_LINE(143)
	tileFrames->tileSpacing = tileSpacing;
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		Float tmp9 = tileSpacing->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(145)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(145)
		tileSpacing->set_x(tmp10);
		HX_STACK_LINE(145)
		Float tmp11 = tileSpacing->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(145)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(145)
		tileSpacing->set_y(tmp12);
		HX_STACK_LINE(145)
		tileSpacing;
	}
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		Float tmp9 = tileSize->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		tileSize->set_x(tmp10);
		HX_STACK_LINE(146)
		Float tmp11 = tileSize->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		tileSize->set_y(tmp12);
		HX_STACK_LINE(146)
		tileSize;
	}
	HX_STACK_LINE(148)
	Float tmp9 = (tileSize->x + tileSpacing->x);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(148)
	Float spacedWidth = tmp9;		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(149)
	Float tmp10 = (tileSize->y + tileSpacing->y);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(149)
	Float spacedHeight = tmp10;		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(151)
	bool tmp11 = (tileSize->y == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(151)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(151)
	if ((tmp11)){
		HX_STACK_LINE(151)
		tmp12 = (int)1;
	}
	else{
		HX_STACK_LINE(151)
		Float tmp13 = frame->sourceSize->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(151)
		Float tmp14 = tileSpacing->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(151)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(151)
		Float tmp16 = spacedHeight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(151)
		Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(151)
		tmp12 = ::Std_obj::_int(tmp17);
	}
	HX_STACK_LINE(151)
	int numRows = tmp12;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(152)
	bool tmp13 = (tileSize->x == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(152)
	int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(152)
	if ((tmp13)){
		HX_STACK_LINE(152)
		tmp14 = (int)1;
	}
	else{
		HX_STACK_LINE(152)
		Float tmp15 = frame->sourceSize->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(152)
		Float tmp16 = tileSpacing->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(152)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(152)
		Float tmp18 = spacedWidth;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(152)
		Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(152)
		tmp14 = ::Std_obj::_int(tmp19);
	}
	HX_STACK_LINE(152)
	int numCols = tmp14;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(154)
	::flixel::math::FlxRect tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::flixel::math::FlxRect tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp17 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(154)
			::flixel::math::FlxRect tmp18 = tmp17->get();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(154)
			::flixel::math::FlxRect _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(154)
			_this->x = (int)0;
			HX_STACK_LINE(154)
			_this->y = (int)0;
			HX_STACK_LINE(154)
			_this->width = tileSize->x;
			HX_STACK_LINE(154)
			_this->height = tileSize->y;
			HX_STACK_LINE(154)
			tmp16 = _this;
		}
		HX_STACK_LINE(154)
		::flixel::math::FlxRect rect = tmp16;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(154)
		rect->_inPool = false;
		HX_STACK_LINE(154)
		tmp15 = rect;
	}
	HX_STACK_LINE(154)
	::flixel::math::FlxRect helperRect = tmp15;		HX_STACK_VAR(helperRect,"helperRect");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			bool tmp16 = (_g < numRows);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(156)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(156)
			if ((tmp17)){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(156)
			int j = tmp18;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(158)
			{
				HX_STACK_LINE(158)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(158)
				while((true)){
					HX_STACK_LINE(158)
					bool tmp19 = (_g1 < numCols);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(158)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(158)
					if ((tmp20)){
						HX_STACK_LINE(158)
						break;
					}
					HX_STACK_LINE(158)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(158)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(160)
					Float tmp22 = (spacedWidth * i);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(160)
					helperRect->x = tmp22;
					HX_STACK_LINE(161)
					Float tmp23 = (spacedHeight * j);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(161)
					helperRect->y = tmp23;
					HX_STACK_LINE(162)
					::flixel::math::FlxRect tmp24 = helperRect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(162)
					::flixel::graphics::frames::FlxFrame tmp25 = frame->subFrameTo(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(162)
					tileFrames->pushFrame(tmp25);
				}
			}
		}
	}
	HX_STACK_LINE(166)
	::flixel::math::FlxRect tmp16 = helperRect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(166)
	::flixel::math::FlxRect tmp17 = ::flixel::util::FlxDestroyUtil_obj::put(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(166)
	helperRect = tmp17;
	HX_STACK_LINE(168)
	tileFrames->numCols = numCols;
	HX_STACK_LINE(169)
	tileFrames->numRows = numRows;
	HX_STACK_LINE(170)
	::flixel::graphics::frames::FlxTileFrames tmp18 = tileFrames;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(170)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxTileFrames_obj,fromFrame,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromFrames( Array< ::Dynamic > Frames){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromFrames",0x14a7862f,"flixel.graphics.frames.FlxTileFrames.fromFrames","flixel/graphics/frames/FlxTileFrames.hx",180,0x562d6bb0)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(181)
	::flixel::graphics::frames::FlxFrame tmp = Frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::flixel::graphics::frames::FlxFrame firstFrame = tmp;		HX_STACK_VAR(firstFrame,"firstFrame");
	HX_STACK_LINE(182)
	::flixel::graphics::FlxGraphic graphic = firstFrame->parent;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		while((true)){
			HX_STACK_LINE(184)
			bool tmp1 = (_g < Frames->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			if ((tmp2)){
				HX_STACK_LINE(184)
				break;
			}
			HX_STACK_LINE(184)
			::flixel::graphics::frames::FlxFrame tmp3 = Frames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			::flixel::graphics::frames::FlxFrame frame = tmp3;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(184)
			++(_g);
			HX_STACK_LINE(186)
			bool tmp4 = (frame->parent != firstFrame->parent);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			if ((tmp5)){
				HX_STACK_LINE(186)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(186)
				{
					HX_STACK_LINE(186)
					::flixel::math::FlxPoint _this = frame->sourceSize;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(186)
					::flixel::math::FlxPoint point = firstFrame->sourceSize;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(186)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
						HX_STACK_LINE(186)
						Float tmp9 = (_this->x - point->x);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(186)
						Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(186)
						Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(186)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(186)
						Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(186)
						Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(186)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(186)
						Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(186)
						Float tmp17 = aDiff;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(186)
						bool tmp18 = (tmp16 <= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(186)
						tmp8 = tmp18;
					}
					HX_STACK_LINE(186)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(186)
					bool tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(186)
					if ((tmp10)){
						HX_STACK_LINE(186)
						Float aDiff = ((Float)0.0000001);		HX_STACK_VAR(aDiff,"aDiff");
						HX_STACK_LINE(186)
						Float tmp11 = (_this->y - point->y);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(186)
						Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(186)
						Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(186)
						Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(186)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(186)
						Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(186)
						Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(186)
						Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(186)
						Float tmp19 = aDiff;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(186)
						bool tmp20 = (tmp18 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(186)
						tmp9 = tmp20;
					}
					else{
						HX_STACK_LINE(186)
						tmp9 = false;
					}
					HX_STACK_LINE(186)
					bool result = tmp9;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(186)
					{
						HX_STACK_LINE(186)
						bool tmp11 = point->_weak;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(186)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(186)
						if ((tmp12)){
							HX_STACK_LINE(186)
							point->put();
						}
					}
					HX_STACK_LINE(186)
					tmp7 = result;
				}
				HX_STACK_LINE(186)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				tmp6 = !(tmp8);
			}
			else{
				HX_STACK_LINE(186)
				tmp6 = true;
			}
			HX_STACK_LINE(186)
			if ((tmp6)){
				HX_STACK_LINE(189)
				return null();
			}
		}
	}
	HX_STACK_LINE(193)
	::flixel::graphics::frames::FlxTileFrames tmp1 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp1;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(195)
	tileFrames->region = null();
	HX_STACK_LINE(196)
	tileFrames->atlasFrame = null();
	HX_STACK_LINE(197)
	::flixel::math::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(197)
	{
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(197)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(197)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(197)
			::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(197)
			Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			::flixel::math::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(197)
			::flixel::math::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(197)
			point->_inPool = false;
			HX_STACK_LINE(197)
			tmp3 = point;
		}
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(197)
		::flixel::math::FlxPoint point = firstFrame->sourceSize;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(197)
		Float tmp4 = point->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(197)
		_this->set_x(tmp4);
		HX_STACK_LINE(197)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		_this->set_y(tmp5);
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			bool tmp6 = point->_weak;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			if ((tmp6)){
				HX_STACK_LINE(197)
				point->put();
			}
		}
		HX_STACK_LINE(197)
		tmp2 = _this;
	}
	HX_STACK_LINE(197)
	tileFrames->tileSize = tmp2;
	HX_STACK_LINE(198)
	::flixel::math::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	{
		HX_STACK_LINE(198)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp4 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint tmp6 = tmp5->set((int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(198)
		point->_inPool = false;
		HX_STACK_LINE(198)
		tmp3 = point;
	}
	HX_STACK_LINE(198)
	tileFrames->tileSpacing = tmp3;
	HX_STACK_LINE(199)
	tileFrames->numCols = Frames->length;
	HX_STACK_LINE(200)
	tileFrames->numRows = (int)1;
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			bool tmp4 = (_g < Frames->length);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			if ((tmp5)){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(202)
			::flixel::graphics::frames::FlxFrame tmp6 = Frames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			::flixel::graphics::frames::FlxFrame frame = tmp6;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(202)
			++(_g);
			HX_STACK_LINE(204)
			::flixel::graphics::frames::FlxFrame tmp7 = frame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			tileFrames->frames->push(tmp7);
			HX_STACK_LINE(206)
			bool tmp8 = (frame->name != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(206)
			if ((tmp8)){
				HX_STACK_LINE(208)
				::String tmp9 = frame->name;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(208)
				::flixel::graphics::frames::FlxFrame tmp10 = frame;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(208)
				tileFrames->framesHash->set(tmp9,tmp10);
			}
		}
	}
	HX_STACK_LINE(212)
	::flixel::graphics::frames::FlxTileFrames tmp4 = tileFrames;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(212)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTileFrames_obj,fromFrames,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromAtlasByPrefix( ::flixel::graphics::frames::FlxAtlasFrames Frames,::String Prefix){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromAtlasByPrefix",0x9481e7cb,"flixel.graphics.frames.FlxTileFrames.fromAtlasByPrefix","flixel/graphics/frames/FlxTileFrames.hx",225,0x562d6bb0)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(Prefix,"Prefix")
	HX_STACK_LINE(226)
	Array< ::Dynamic > framesToAdd = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(framesToAdd,"framesToAdd");
	HX_STACK_LINE(228)
	{
		HX_STACK_LINE(228)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(228)
		Array< ::Dynamic > _g1 = Frames->frames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(228)
		while((true)){
			HX_STACK_LINE(228)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(228)
			if ((tmp1)){
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(228)
			::flixel::graphics::frames::FlxFrame tmp2 = _g1->__get(_g).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::flixel::graphics::frames::FlxFrame frame = tmp2;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(228)
			++(_g);
			HX_STACK_LINE(230)
			::String tmp3 = frame->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			::String tmp4 = Prefix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(230)
			bool tmp5 = ::StringTools_obj::startsWith(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(230)
			if ((tmp5)){
				HX_STACK_LINE(232)
				::flixel::graphics::frames::FlxFrame tmp6 = frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(232)
				framesToAdd->push(tmp6);
			}
		}
	}
	HX_STACK_LINE(236)
	bool tmp = (framesToAdd->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	if ((tmp)){
		HX_STACK_LINE(238)
		::flixel::graphics::frames::FlxFrame tmp1 = framesToAdd->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(238)
		::String name = tmp1->name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(239)
		int tmp2 = Prefix.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(239)
		int tmp3 = name.indexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(239)
		int postIndex = tmp3;		HX_STACK_VAR(postIndex,"postIndex");
		HX_STACK_LINE(240)
		int tmp4 = postIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = (int)-1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(240)
		bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(240)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		if ((tmp6)){
			HX_STACK_LINE(240)
			tmp7 = name.length;
		}
		else{
			HX_STACK_LINE(240)
			tmp7 = postIndex;
		}
		HX_STACK_LINE(240)
		int tmp8 = name.length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(240)
		::String tmp9 = name.substring(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(240)
		::String postFix = tmp9;		HX_STACK_VAR(postFix,"postFix");
		HX_STACK_LINE(242)
		Dynamic tmp10 = ::flixel::graphics::frames::FlxFrame_obj::sortByName_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(242)
		int tmp11 = Prefix.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(242)
		int tmp12 = postFix.length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			Dynamic f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(242)
			int a3 = tmp11;		HX_STACK_VAR(a3,"a3");
			HX_STACK_LINE(242)
			int a4 = tmp12;		HX_STACK_VAR(a4,"a4");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_3_1,int,a3,int,a4,Dynamic,f)
			int __ArgCount() const { return 2; }
			int run(::flixel::graphics::frames::FlxFrame a1,::flixel::graphics::frames::FlxFrame a2){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/graphics/frames/FlxTileFrames.hx",242,0x562d6bb0)
				HX_STACK_ARG(a1,"a1")
				HX_STACK_ARG(a2,"a2")
				{
					HX_STACK_LINE(242)
					::flixel::graphics::frames::FlxFrame tmp14 = a1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(242)
					::flixel::graphics::frames::FlxFrame tmp15 = a2;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(242)
					int tmp16 = a3;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(242)
					int tmp17 = a4;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(242)
					int tmp18 = f(tmp14,tmp15,tmp16,tmp17).Cast< int >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(242)
					return tmp18;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(242)
			tmp13 =  Dynamic(new _Function_3_1(a3,a4,f));
		}
		HX_STACK_LINE(242)
		framesToAdd->sort(tmp13);
		HX_STACK_LINE(243)
		::flixel::graphics::frames::FlxTileFrames tmp14 = ::flixel::graphics::frames::FlxTileFrames_obj::fromFrames(framesToAdd);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(243)
		return tmp14;
	}
	HX_STACK_LINE(246)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,fromAtlasByPrefix,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromGraphic( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromGraphic",0x29813bff,"flixel.graphics.frames.FlxTileFrames.fromGraphic","flixel/graphics/frames/FlxTileFrames.hx",260,0x562d6bb0)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(262)
	::flixel::graphics::FlxGraphic tmp = graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	::flixel::math::FlxPoint tmp1 = tileSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	::flixel::math::FlxRect tmp2 = region;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	::flixel::math::FlxPoint tmp3 = tileSpacing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	::flixel::graphics::frames::FlxTileFrames tmp4 = ::flixel::graphics::frames::FlxTileFrames_obj::findFrame(tmp,tmp1,tmp2,null(),tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(262)
	::flixel::graphics::frames::FlxTileFrames tileFrames = tmp4;		HX_STACK_VAR(tileFrames,"tileFrames");
	HX_STACK_LINE(263)
	bool tmp5 = (tileFrames != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(263)
	if ((tmp5)){
		HX_STACK_LINE(265)
		::flixel::graphics::frames::FlxTileFrames tmp6 = tileFrames;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(265)
		return tmp6;
	}
	HX_STACK_LINE(269)
	bool tmp6 = (region == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	if ((tmp6)){
		HX_STACK_LINE(271)
		::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(271)
			{
				HX_STACK_LINE(271)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(271)
				::flixel::math::FlxRect tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(271)
				::flixel::math::FlxRect _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(271)
				_this->x = (int)0;
				HX_STACK_LINE(271)
				_this->y = (int)0;
				HX_STACK_LINE(271)
				_this->width = graphic->width;
				HX_STACK_LINE(271)
				_this->height = graphic->height;
				HX_STACK_LINE(271)
				tmp8 = _this;
			}
			HX_STACK_LINE(271)
			::flixel::math::FlxRect rect = tmp8;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(271)
			rect->_inPool = false;
			HX_STACK_LINE(271)
			tmp7 = rect;
		}
		HX_STACK_LINE(271)
		region = tmp7;
	}
	else{
		HX_STACK_LINE(275)
		bool tmp7 = (region->width == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(275)
		if ((tmp7)){
			HX_STACK_LINE(277)
			Float tmp8 = (graphic->width - region->x);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			region->width = tmp8;
		}
		HX_STACK_LINE(280)
		bool tmp8 = (region->height == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		if ((tmp8)){
			HX_STACK_LINE(282)
			Float tmp9 = (graphic->height - region->y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(282)
			region->height = tmp9;
		}
	}
	HX_STACK_LINE(286)
	bool tmp7 = (tileSpacing != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(286)
	::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(286)
	if ((tmp7)){
		HX_STACK_LINE(286)
		tmp8 = tileSpacing;
	}
	else{
		HX_STACK_LINE(286)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(286)
		::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(286)
		::flixel::math::FlxPoint tmp11 = tmp10->set((int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(286)
		::flixel::math::FlxPoint point = tmp11;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(286)
		point->_inPool = false;
		HX_STACK_LINE(286)
		tmp8 = point;
	}
	HX_STACK_LINE(286)
	tileSpacing = tmp8;
	HX_STACK_LINE(288)
	::flixel::graphics::frames::FlxTileFrames tmp9 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(288)
	tileFrames = tmp9;
	HX_STACK_LINE(289)
	tileFrames->region = region;
	HX_STACK_LINE(290)
	tileFrames->atlasFrame = null();
	HX_STACK_LINE(291)
	tileFrames->tileSize = tileSize;
	HX_STACK_LINE(292)
	tileFrames->tileSpacing = tileSpacing;
	HX_STACK_LINE(294)
	{
		HX_STACK_LINE(294)
		Float tmp10 = region->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(294)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(294)
		region->x = tmp11;
		HX_STACK_LINE(294)
		Float tmp12 = region->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(294)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(294)
		region->y = tmp13;
		HX_STACK_LINE(294)
		Float tmp14 = region->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(294)
		int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(294)
		region->width = tmp15;
		HX_STACK_LINE(294)
		Float tmp16 = region->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(294)
		int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(294)
		region->height = tmp17;
		HX_STACK_LINE(294)
		region;
	}
	HX_STACK_LINE(295)
	{
		HX_STACK_LINE(295)
		Float tmp10 = tileSpacing->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(295)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(295)
		tileSpacing->set_x(tmp11);
		HX_STACK_LINE(295)
		Float tmp12 = tileSpacing->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(295)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(295)
		tileSpacing->set_y(tmp13);
		HX_STACK_LINE(295)
		tileSpacing;
	}
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		Float tmp10 = tileSize->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(296)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(296)
		tileSize->set_x(tmp11);
		HX_STACK_LINE(296)
		Float tmp12 = tileSize->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(296)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(296)
		tileSize->set_y(tmp13);
		HX_STACK_LINE(296)
		tileSize;
	}
	HX_STACK_LINE(298)
	Float tmp10 = (tileSize->x + tileSpacing->x);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(298)
	Float spacedWidth = tmp10;		HX_STACK_VAR(spacedWidth,"spacedWidth");
	HX_STACK_LINE(299)
	Float tmp11 = (tileSize->y + tileSpacing->y);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(299)
	Float spacedHeight = tmp11;		HX_STACK_VAR(spacedHeight,"spacedHeight");
	HX_STACK_LINE(301)
	bool tmp12 = (tileSize->y == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(301)
	int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(301)
	if ((tmp12)){
		HX_STACK_LINE(301)
		tmp13 = (int)1;
	}
	else{
		HX_STACK_LINE(301)
		Float tmp14 = (region->height + tileSpacing->y);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		Float tmp15 = spacedHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(301)
		Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(301)
		tmp13 = ::Std_obj::_int(tmp16);
	}
	HX_STACK_LINE(301)
	int numRows = tmp13;		HX_STACK_VAR(numRows,"numRows");
	HX_STACK_LINE(302)
	bool tmp14 = (tileSize->x == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(302)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(302)
	if ((tmp14)){
		HX_STACK_LINE(302)
		tmp15 = (int)1;
	}
	else{
		HX_STACK_LINE(302)
		Float tmp16 = (region->width + tileSpacing->x);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(302)
		Float tmp17 = spacedWidth;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(302)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(302)
		tmp15 = ::Std_obj::_int(tmp18);
	}
	HX_STACK_LINE(302)
	int numCols = tmp15;		HX_STACK_VAR(numCols,"numCols");
	HX_STACK_LINE(304)
	::flixel::math::FlxRect tileRect;		HX_STACK_VAR(tileRect,"tileRect");
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(306)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(306)
		while((true)){
			HX_STACK_LINE(306)
			bool tmp16 = (_g < numRows);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(306)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(306)
			if ((tmp17)){
				HX_STACK_LINE(306)
				break;
			}
			HX_STACK_LINE(306)
			int tmp18 = (_g)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(306)
			int j = tmp18;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(308)
			{
				HX_STACK_LINE(308)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(308)
				while((true)){
					HX_STACK_LINE(308)
					bool tmp19 = (_g1 < numCols);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(308)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(308)
					if ((tmp20)){
						HX_STACK_LINE(308)
						break;
					}
					HX_STACK_LINE(308)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(308)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(310)
					::flixel::math::FlxRect tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						::flixel::math::FlxRect tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp24 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(310)
							::flixel::math::FlxRect tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(310)
							::flixel::math::FlxRect _this = tmp25;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(310)
							Float tmp26 = region->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(310)
							Float tmp27 = (i * spacedWidth);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(310)
							Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(310)
							_this->x = tmp28;
							HX_STACK_LINE(310)
							Float tmp29 = region->y;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(310)
							Float tmp30 = (j * spacedHeight);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(310)
							Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(310)
							_this->y = tmp31;
							HX_STACK_LINE(310)
							_this->width = tileSize->x;
							HX_STACK_LINE(310)
							_this->height = tileSize->y;
							HX_STACK_LINE(310)
							tmp23 = _this;
						}
						HX_STACK_LINE(310)
						::flixel::math::FlxRect rect = tmp23;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(310)
						rect->_inPool = false;
						HX_STACK_LINE(310)
						tmp22 = rect;
					}
					HX_STACK_LINE(310)
					tileRect = tmp22;
					HX_STACK_LINE(311)
					::flixel::math::FlxRect tmp23 = tileRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(311)
					tileFrames->addSpriteSheetFrame(tmp23);
				}
			}
		}
	}
	HX_STACK_LINE(315)
	tileFrames->numCols = numCols;
	HX_STACK_LINE(316)
	tileFrames->numRows = numRows;
	HX_STACK_LINE(317)
	::flixel::graphics::frames::FlxTileFrames tmp16 = tileFrames;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(317)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromGraphic,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::fromRectangle( Dynamic source,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::math::FlxPoint tileSpacing){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","fromRectangle",0x8a32f946,"flixel.graphics.frames.FlxTileFrames.fromRectangle","flixel/graphics/frames/FlxTileFrames.hx",332,0x562d6bb0)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_LINE(333)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(333)
	Dynamic tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	::flixel::graphics::FlxGraphic tmp2 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp1,false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(333)
	::flixel::graphics::FlxGraphic graphic = tmp2;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(334)
	bool tmp3 = (graphic == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(334)
	if ((tmp3)){
		HX_STACK_LINE(334)
		return null();
	}
	HX_STACK_LINE(335)
	::flixel::graphics::FlxGraphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	::flixel::math::FlxPoint tmp5 = tileSize;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	::flixel::math::FlxRect tmp6 = region;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(335)
	::flixel::math::FlxPoint tmp7 = tileSpacing;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(335)
	::flixel::graphics::frames::FlxTileFrames tmp8 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(335)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxTileFrames_obj,fromRectangle,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::combineTileSets( Array< ::Dynamic > bitmaps,::flixel::math::FlxPoint tileSize){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","combineTileSets",0x70f3189f,"flixel.graphics.frames.FlxTileFrames.combineTileSets","flixel/graphics/frames/FlxTileFrames.hx",354,0x562d6bb0)
	HX_STACK_ARG(bitmaps,"bitmaps")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_LINE(356)
	int totalArea = (int)0;		HX_STACK_VAR(totalArea,"totalArea");
	HX_STACK_LINE(357)
	int rows = (int)0;		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(358)
	int cols = (int)0;		HX_STACK_VAR(cols,"cols");
	HX_STACK_LINE(360)
	{
		HX_STACK_LINE(360)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(360)
		while((true)){
			HX_STACK_LINE(360)
			bool tmp = (_g < bitmaps->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(360)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(360)
			if ((tmp1)){
				HX_STACK_LINE(360)
				break;
			}
			HX_STACK_LINE(360)
			::openfl::_legacy::display::BitmapData tmp2 = bitmaps->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(360)
			::openfl::_legacy::display::BitmapData bitmap = tmp2;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(360)
			++(_g);
			HX_STACK_LINE(362)
			int tmp3 = bitmap->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(362)
			Float tmp4 = tileSize->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(362)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(362)
			cols = tmp6;
			HX_STACK_LINE(363)
			int tmp7 = bitmap->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(363)
			Float tmp8 = tileSize->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(363)
			Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(363)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(363)
			rows = tmp10;
			HX_STACK_LINE(364)
			Float tmp11 = (cols * tileSize->x);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(364)
			int tmp12 = rows;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(364)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(364)
			Float tmp14 = tileSize->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(364)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(364)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(364)
			hx::AddEq(totalArea,tmp16);
		}
	}
	HX_STACK_LINE(367)
	int tmp = totalArea;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	Float tmp1 = ::Math_obj::sqrt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	Float side = tmp1;		HX_STACK_VAR(side,"side");
	HX_STACK_LINE(368)
	Float tmp2 = (Float(side) / Float(tileSize->x));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	cols = tmp3;
	HX_STACK_LINE(369)
	int tmp4 = totalArea;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(369)
	Float tmp5 = (cols * tileSize->x);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(369)
	Float tmp6 = tileSize->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(369)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(369)
	Float tmp8 = (Float(tmp4) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(369)
	int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(369)
	rows = tmp9;
	HX_STACK_LINE(370)
	Float tmp10 = (cols * tileSize->x);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(370)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(370)
	int width = tmp11;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(371)
	Float tmp12 = (rows * tileSize->y);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(371)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(371)
	int height = tmp13;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(374)
	::openfl::_legacy::display::BitmapData tmp14 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(374)
	::openfl::_legacy::display::BitmapData combined = tmp14;		HX_STACK_VAR(combined,"combined");
	HX_STACK_LINE(375)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp15 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(375)
	::openfl::_legacy::display::BitmapData tmp16 = combined;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(375)
	::flixel::graphics::FlxGraphic tmp17 = tmp15->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp16,null(),null());		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(375)
	::flixel::graphics::FlxGraphic graphic = tmp17;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(376)
	::flixel::graphics::frames::FlxTileFrames tmp18 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(376)
	::flixel::graphics::frames::FlxTileFrames result = tmp18;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(378)
	::flixel::math::FlxRect tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(378)
	{
		HX_STACK_LINE(378)
		::flixel::math::FlxRect tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp21 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(378)
			::flixel::math::FlxRect tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(378)
			::flixel::math::FlxRect _this = tmp22;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(378)
			_this->x = (int)0;
			HX_STACK_LINE(378)
			_this->y = (int)0;
			HX_STACK_LINE(378)
			_this->width = width;
			HX_STACK_LINE(378)
			_this->height = height;
			HX_STACK_LINE(378)
			tmp20 = _this;
		}
		HX_STACK_LINE(378)
		::flixel::math::FlxRect rect = tmp20;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(378)
		rect->_inPool = false;
		HX_STACK_LINE(378)
		tmp19 = rect;
	}
	HX_STACK_LINE(378)
	result->region = tmp19;
	HX_STACK_LINE(379)
	result->atlasFrame = null();
	HX_STACK_LINE(380)
	::flixel::math::FlxPoint tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(380)
	{
		HX_STACK_LINE(380)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp21 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(380)
		::flixel::math::FlxPoint tmp22 = tmp21->get();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(380)
		Float tmp23 = tileSize->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(380)
		Float tmp24 = tileSize->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(380)
		::flixel::math::FlxPoint tmp25 = tmp22->set(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(380)
		::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(380)
		point->_inPool = false;
		HX_STACK_LINE(380)
		tmp20 = point;
	}
	HX_STACK_LINE(380)
	result->tileSize = tmp20;
	HX_STACK_LINE(381)
	::flixel::math::FlxPoint tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(381)
	{
		HX_STACK_LINE(381)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp22 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(381)
		::flixel::math::FlxPoint tmp23 = tmp22->get();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(381)
		::flixel::math::FlxPoint tmp24 = tmp23->set((int)0,(int)0);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(381)
		::flixel::math::FlxPoint point = tmp24;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(381)
		point->_inPool = false;
		HX_STACK_LINE(381)
		tmp21 = point;
	}
	HX_STACK_LINE(381)
	result->tileSpacing = tmp21;
	HX_STACK_LINE(382)
	result->numCols = cols;
	HX_STACK_LINE(383)
	result->numRows = rows;
	HX_STACK_LINE(385)
	::flixel::graphics::frames::FlxTileFrames frames;		HX_STACK_VAR(frames,"frames");
	HX_STACK_LINE(386)
	::openfl::_legacy::geom::Point tmp22 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(386)
	::openfl::_legacy::geom::Point point = tmp22;		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(388)
	{
		HX_STACK_LINE(388)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(388)
		while((true)){
			HX_STACK_LINE(388)
			bool tmp23 = (_g < bitmaps->length);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(388)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(388)
			if ((tmp24)){
				HX_STACK_LINE(388)
				break;
			}
			HX_STACK_LINE(388)
			::openfl::_legacy::display::BitmapData tmp25 = bitmaps->__get(_g).StaticCast< ::openfl::_legacy::display::BitmapData >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(388)
			::openfl::_legacy::display::BitmapData bitmap = tmp25;		HX_STACK_VAR(bitmap,"bitmap");
			HX_STACK_LINE(388)
			++(_g);
			HX_STACK_LINE(390)
			::openfl::_legacy::display::BitmapData tmp26 = bitmap;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(390)
			::flixel::math::FlxPoint tmp27 = tileSize;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(390)
			::flixel::graphics::frames::FlxTileFrames tmp28 = ::flixel::graphics::frames::FlxTileFrames_obj::fromRectangle(tmp26,tmp27,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(390)
			frames = tmp28;
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(392)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(392)
				Array< ::Dynamic > _g2 = frames->frames;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(392)
				while((true)){
					HX_STACK_LINE(392)
					bool tmp29 = (_g1 < _g2->length);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(392)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(392)
					if ((tmp30)){
						HX_STACK_LINE(392)
						break;
					}
					HX_STACK_LINE(392)
					::flixel::graphics::frames::FlxFrame tmp31 = _g2->__get(_g1).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(392)
					::flixel::graphics::frames::FlxFrame frame = tmp31;		HX_STACK_VAR(frame,"frame");
					HX_STACK_LINE(392)
					++(_g1);
					HX_STACK_LINE(394)
					::openfl::_legacy::display::BitmapData tmp32 = combined;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(394)
					::openfl::_legacy::geom::Point tmp33 = point;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(394)
					frame->paint(tmp32,tmp33,true,null());
					HX_STACK_LINE(395)
					::flixel::math::FlxRect tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(395)
					{
						HX_STACK_LINE(395)
						::flixel::math::FlxRect tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(395)
						{
							HX_STACK_LINE(395)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp36 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(395)
							::flixel::math::FlxRect tmp37 = tmp36->get();		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(395)
							::flixel::math::FlxRect _this = tmp37;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(395)
							_this->x = point->x;
							HX_STACK_LINE(395)
							_this->y = point->y;
							HX_STACK_LINE(395)
							_this->width = tileSize->x;
							HX_STACK_LINE(395)
							_this->height = tileSize->y;
							HX_STACK_LINE(395)
							tmp35 = _this;
						}
						HX_STACK_LINE(395)
						::flixel::math::FlxRect rect = tmp35;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(395)
						rect->_inPool = false;
						HX_STACK_LINE(395)
						tmp34 = rect;
					}
					HX_STACK_LINE(395)
					::flixel::math::FlxPoint tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(395)
					{
						HX_STACK_LINE(395)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp36 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(395)
						::flixel::math::FlxPoint tmp37 = tmp36->get();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(395)
						Float tmp38 = tileSize->x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(395)
						Float tmp39 = tileSize->y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(395)
						::flixel::math::FlxPoint tmp40 = tmp37->set(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(395)
						::flixel::math::FlxPoint point1 = tmp40;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(395)
						point1->_inPool = false;
						HX_STACK_LINE(395)
						tmp35 = point1;
					}
					HX_STACK_LINE(395)
					::flixel::math::FlxPoint tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(395)
					{
						HX_STACK_LINE(395)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp37 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(395)
						::flixel::math::FlxPoint tmp38 = tmp37->get();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(395)
						::flixel::math::FlxPoint tmp39 = tmp38->set((int)0,(int)0);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(395)
						::flixel::math::FlxPoint point1 = tmp39;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(395)
						point1->_inPool = false;
						HX_STACK_LINE(395)
						tmp36 = point1;
					}
					HX_STACK_LINE(395)
					result->addAtlasFrame(tmp34,tmp35,tmp36,null(),null(),null(),null());
					HX_STACK_LINE(396)
					hx::AddEq(point->x,tileSize->x);
					HX_STACK_LINE(398)
					Float tmp37 = point->x;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(398)
					int tmp38 = combined->get_width();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(398)
					bool tmp39 = (tmp37 >= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(398)
					if ((tmp39)){
						HX_STACK_LINE(400)
						point->x = (int)0;
						HX_STACK_LINE(401)
						hx::AddEq(point->y,tileSize->y);
					}
				}
			}
		}
	}
	HX_STACK_LINE(406)
	::flixel::graphics::frames::FlxTileFrames tmp23 = result;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(406)
	return tmp23;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxTileFrames_obj,combineTileSets,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::combineTileFrames( Array< ::Dynamic > tileframes){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","combineTileFrames",0x23605534,"flixel.graphics.frames.FlxTileFrames.combineTileFrames","flixel/graphics/frames/FlxTileFrames.hx",424,0x562d6bb0)
	HX_STACK_ARG(tileframes,"tileframes")
	HX_STACK_LINE(426)
	int totalArea = (int)0;		HX_STACK_VAR(totalArea,"totalArea");
	HX_STACK_LINE(427)
	int rows = (int)0;		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(428)
	int cols = (int)0;		HX_STACK_VAR(cols,"cols");
	HX_STACK_LINE(430)
	::flixel::graphics::frames::FlxTileFrames tmp = tileframes->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(430)
	::flixel::graphics::frames::FlxFrame tmp1 = tmp->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(430)
	Float tmp2 = tmp1->sourceSize->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(430)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(430)
	int tileWidth = tmp3;		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(431)
	::flixel::graphics::frames::FlxTileFrames tmp4 = tileframes->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(431)
	::flixel::graphics::frames::FlxFrame tmp5 = tmp4->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(431)
	Float tmp6 = tmp5->sourceSize->y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(431)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(431)
	int tileHeight = tmp7;		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(433)
		while((true)){
			HX_STACK_LINE(433)
			bool tmp8 = (_g < tileframes->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(433)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(433)
			if ((tmp9)){
				HX_STACK_LINE(433)
				break;
			}
			HX_STACK_LINE(433)
			::flixel::graphics::frames::FlxTileFrames tmp10 = tileframes->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(433)
			::flixel::graphics::frames::FlxTileFrames collection = tmp10;		HX_STACK_VAR(collection,"collection");
			HX_STACK_LINE(433)
			++(_g);
			HX_STACK_LINE(435)
			cols = collection->numCols;
			HX_STACK_LINE(436)
			rows = collection->numRows;
			HX_STACK_LINE(437)
			int tmp11 = (cols * tileWidth);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(437)
			int tmp12 = rows;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(437)
			int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(437)
			int tmp14 = tileHeight;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(437)
			int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(437)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(437)
			hx::AddEq(totalArea,tmp16);
		}
	}
	HX_STACK_LINE(440)
	int tmp8 = totalArea;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(440)
	Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(440)
	Float side = tmp9;		HX_STACK_VAR(side,"side");
	HX_STACK_LINE(441)
	Float tmp10 = (Float(side) / Float(tileWidth));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(441)
	int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(441)
	cols = tmp11;
	HX_STACK_LINE(442)
	int tmp12 = totalArea;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(442)
	int tmp13 = (cols * tileWidth);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(442)
	int tmp14 = tileHeight;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(442)
	int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(442)
	Float tmp16 = (Float(tmp12) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(442)
	int tmp17 = ::Math_obj::ceil(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(442)
	rows = tmp17;
	HX_STACK_LINE(443)
	int tmp18 = (cols * tileWidth);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(443)
	int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(443)
	int width = tmp19;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(444)
	int tmp20 = (rows * tileHeight);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(444)
	int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(444)
	int height = tmp21;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(447)
	::openfl::_legacy::display::BitmapData tmp22 = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,true,(int)0,null());		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(447)
	::openfl::_legacy::display::BitmapData combined = tmp22;		HX_STACK_VAR(combined,"combined");
	HX_STACK_LINE(448)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp23 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(448)
	::openfl::_legacy::display::BitmapData tmp24 = combined;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(448)
	::flixel::graphics::FlxGraphic tmp25 = tmp23->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp24,null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(448)
	::flixel::graphics::FlxGraphic graphic = tmp25;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(449)
	::flixel::graphics::frames::FlxTileFrames tmp26 = ::flixel::graphics::frames::FlxTileFrames_obj::__new(graphic,null());		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(449)
	::flixel::graphics::frames::FlxTileFrames result = tmp26;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(450)
	::openfl::_legacy::geom::Point tmp27 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(450)
	::openfl::_legacy::geom::Point point = tmp27;		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(452)
	::flixel::math::FlxRect tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(452)
	{
		HX_STACK_LINE(452)
		::flixel::math::FlxRect tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			::flixel::util::FlxPool_flixel_math_FlxRect tmp30 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(452)
			::flixel::math::FlxRect tmp31 = tmp30->get();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(452)
			::flixel::math::FlxRect _this = tmp31;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(452)
			_this->x = (int)0;
			HX_STACK_LINE(452)
			_this->y = (int)0;
			HX_STACK_LINE(452)
			_this->width = width;
			HX_STACK_LINE(452)
			_this->height = height;
			HX_STACK_LINE(452)
			tmp29 = _this;
		}
		HX_STACK_LINE(452)
		::flixel::math::FlxRect rect = tmp29;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(452)
		rect->_inPool = false;
		HX_STACK_LINE(452)
		tmp28 = rect;
	}
	HX_STACK_LINE(452)
	result->region = tmp28;
	HX_STACK_LINE(453)
	result->atlasFrame = null();
	HX_STACK_LINE(454)
	::flixel::math::FlxPoint tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(454)
	{
		HX_STACK_LINE(454)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp30 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(454)
		::flixel::math::FlxPoint tmp31 = tmp30->get();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(454)
		int tmp32 = tileWidth;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(454)
		int tmp33 = tileHeight;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(454)
		::flixel::math::FlxPoint tmp34 = tmp31->set(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(454)
		::flixel::math::FlxPoint point1 = tmp34;		HX_STACK_VAR(point1,"point1");
		HX_STACK_LINE(454)
		point1->_inPool = false;
		HX_STACK_LINE(454)
		tmp29 = point1;
	}
	HX_STACK_LINE(454)
	result->tileSize = tmp29;
	HX_STACK_LINE(455)
	::flixel::math::FlxPoint tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(455)
	{
		HX_STACK_LINE(455)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp31 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(455)
		::flixel::math::FlxPoint tmp32 = tmp31->get();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(455)
		::flixel::math::FlxPoint tmp33 = tmp32->set((int)0,(int)0);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(455)
		::flixel::math::FlxPoint point1 = tmp33;		HX_STACK_VAR(point1,"point1");
		HX_STACK_LINE(455)
		point1->_inPool = false;
		HX_STACK_LINE(455)
		tmp30 = point1;
	}
	HX_STACK_LINE(455)
	result->tileSpacing = tmp30;
	HX_STACK_LINE(456)
	result->numCols = cols;
	HX_STACK_LINE(457)
	result->numRows = rows;
	HX_STACK_LINE(459)
	{
		HX_STACK_LINE(459)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(459)
		while((true)){
			HX_STACK_LINE(459)
			bool tmp31 = (_g < tileframes->length);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(459)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(459)
			if ((tmp32)){
				HX_STACK_LINE(459)
				break;
			}
			HX_STACK_LINE(459)
			::flixel::graphics::frames::FlxTileFrames tmp33 = tileframes->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(459)
			::flixel::graphics::frames::FlxTileFrames collection = tmp33;		HX_STACK_VAR(collection,"collection");
			HX_STACK_LINE(459)
			++(_g);
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(461)
				Array< ::Dynamic > _g2 = collection->frames;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(461)
				while((true)){
					HX_STACK_LINE(461)
					bool tmp34 = (_g1 < _g2->length);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(461)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(461)
					if ((tmp35)){
						HX_STACK_LINE(461)
						break;
					}
					HX_STACK_LINE(461)
					::flixel::graphics::frames::FlxFrame tmp36 = _g2->__get(_g1).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(461)
					::flixel::graphics::frames::FlxFrame frame = tmp36;		HX_STACK_VAR(frame,"frame");
					HX_STACK_LINE(461)
					++(_g1);
					HX_STACK_LINE(463)
					::openfl::_legacy::display::BitmapData tmp37 = combined;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(463)
					::openfl::_legacy::geom::Point tmp38 = point;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(463)
					frame->paint(tmp37,tmp38,true,null());
					HX_STACK_LINE(464)
					::flixel::math::FlxRect tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(464)
					{
						HX_STACK_LINE(464)
						::flixel::math::FlxRect tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(464)
						{
							HX_STACK_LINE(464)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp41 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(464)
							::flixel::math::FlxRect tmp42 = tmp41->get();		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(464)
							::flixel::math::FlxRect _this = tmp42;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(464)
							_this->x = point->x;
							HX_STACK_LINE(464)
							_this->y = point->y;
							HX_STACK_LINE(464)
							_this->width = tileWidth;
							HX_STACK_LINE(464)
							_this->height = tileHeight;
							HX_STACK_LINE(464)
							tmp40 = _this;
						}
						HX_STACK_LINE(464)
						::flixel::math::FlxRect rect = tmp40;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(464)
						rect->_inPool = false;
						HX_STACK_LINE(464)
						tmp39 = rect;
					}
					HX_STACK_LINE(464)
					::flixel::math::FlxPoint tmp40;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(464)
					{
						HX_STACK_LINE(464)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp41 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(464)
						::flixel::math::FlxPoint tmp42 = tmp41->get();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(464)
						int tmp43 = tileWidth;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(464)
						int tmp44 = tileHeight;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(464)
						::flixel::math::FlxPoint tmp45 = tmp42->set(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(464)
						::flixel::math::FlxPoint point1 = tmp45;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(464)
						point1->_inPool = false;
						HX_STACK_LINE(464)
						tmp40 = point1;
					}
					HX_STACK_LINE(464)
					::flixel::math::FlxPoint tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(464)
					{
						HX_STACK_LINE(464)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp42 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(464)
						::flixel::math::FlxPoint tmp43 = tmp42->get();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(464)
						::flixel::math::FlxPoint tmp44 = tmp43->set((int)0,(int)0);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(464)
						::flixel::math::FlxPoint point1 = tmp44;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(464)
						point1->_inPool = false;
						HX_STACK_LINE(464)
						tmp41 = point1;
					}
					HX_STACK_LINE(464)
					result->addAtlasFrame(tmp39,tmp40,tmp41,null(),null(),null(),null());
					HX_STACK_LINE(465)
					hx::AddEq(point->x,tileWidth);
					HX_STACK_LINE(467)
					Float tmp42 = point->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(467)
					int tmp43 = combined->get_width();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(467)
					bool tmp44 = (tmp42 >= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(467)
					if ((tmp44)){
						HX_STACK_LINE(469)
						point->x = (int)0;
						HX_STACK_LINE(470)
						hx::AddEq(point->y,tileHeight);
					}
				}
			}
		}
	}
	HX_STACK_LINE(475)
	::flixel::graphics::frames::FlxTileFrames tmp31 = result;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(475)
	return tmp31;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTileFrames_obj,combineTileFrames,return )

::flixel::graphics::frames::FlxTileFrames FlxTileFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic,::flixel::math::FlxPoint tileSize,::flixel::math::FlxRect region,::flixel::graphics::frames::FlxFrame atlasFrame,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint border){
	HX_STACK_FRAME("flixel.graphics.frames.FlxTileFrames","findFrame",0xed9bcc95,"flixel.graphics.frames.FlxTileFrames.findFrame","flixel/graphics/frames/FlxTileFrames.hx",489,0x562d6bb0)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(region,"region")
	HX_STACK_ARG(atlasFrame,"atlasFrame")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(border,"border")
	HX_STACK_LINE(490)
	Array< ::Dynamic > tileFrames;		HX_STACK_VAR(tileFrames,"tileFrames");
	struct _Function_1_1{
		inline static cpp::ArrayBase Block( ::flixel::graphics::FlxGraphic &graphic){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxTileFrames.hx",490,0x562d6bb0)
			{
				HX_STACK_LINE(490)
				::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::TILES;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(490)
				::flixel::graphics::frames::FlxFrameCollectionType tmp = type;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(490)
				cpp::ArrayBase collections = ((cpp::ArrayBase)(graphic->frameCollections->get(tmp)));		HX_STACK_VAR(collections,"collections");
				HX_STACK_LINE(490)
				bool tmp1 = (collections == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(490)
				if ((tmp1)){
					HX_STACK_LINE(490)
					collections = Array_obj< ::Dynamic >::__new();
					HX_STACK_LINE(490)
					::flixel::graphics::frames::FlxFrameCollectionType tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(490)
					graphic->frameCollections->set(tmp2,collections);
				}
				HX_STACK_LINE(490)
				return collections;
			}
			return null();
		}
	};
	HX_STACK_LINE(490)
	tileFrames = ((Array< ::Dynamic >)(_Function_1_1::Block(graphic)));
	HX_STACK_LINE(491)
	::flixel::graphics::frames::FlxTileFrames sheet;		HX_STACK_VAR(sheet,"sheet");
	HX_STACK_LINE(493)
	{
		HX_STACK_LINE(493)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(493)
		while((true)){
			HX_STACK_LINE(493)
			bool tmp = (_g < tileFrames->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(493)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(493)
			if ((tmp1)){
				HX_STACK_LINE(493)
				break;
			}
			HX_STACK_LINE(493)
			::flixel::graphics::frames::FlxTileFrames tmp2 = tileFrames->__get(_g).StaticCast< ::flixel::graphics::frames::FlxTileFrames >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(493)
			::flixel::graphics::frames::FlxTileFrames sheet1 = tmp2;		HX_STACK_VAR(sheet1,"sheet1");
			HX_STACK_LINE(493)
			++(_g);
			HX_STACK_LINE(495)
			::flixel::math::FlxPoint tmp3 = tileSize;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(495)
			::flixel::math::FlxRect tmp4 = region;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(495)
			::flixel::math::FlxPoint tmp5 = tileSpacing;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(495)
			::flixel::math::FlxPoint tmp6 = border;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(495)
			bool tmp7 = sheet1->equals(tmp3,tmp4,null(),tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(495)
			if ((tmp7)){
				HX_STACK_LINE(497)
				::flixel::graphics::frames::FlxTileFrames tmp8 = sheet1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(497)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(501)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxTileFrames_obj,findFrame,return )


FlxTileFrames_obj::FlxTileFrames_obj()
{
}

void FlxTileFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileFrames);
	HX_MARK_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(tileSize,"tileSize");
	HX_MARK_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atlasFrame,"atlasFrame");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(tileSize,"tileSize");
	HX_VISIT_MEMBER_NAME(tileSpacing,"tileSpacing");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileFrames_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { return tileSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return addBorder_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { return atlasFrame; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { return tileSpacing; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getByTilePosition") ) { return getByTilePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTileFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { outValue = fromFrames_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"combineTileSets") ) { outValue = combineTileSets_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromAtlasByPrefix") ) { outValue = fromAtlasByPrefix_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"combineTileFrames") ) { outValue = combineTileFrames_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"fromFrameAddSpacesAndBorders") ) { outValue = fromFrameAddSpacesAndBorders_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"fromBitmapAddSpacesAndBorders") ) { outValue = fromBitmapAddSpacesAndBorders_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxTileFrames_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileSize") ) { tileSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"atlasFrame") ) { atlasFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileSpacing") ) { tileSpacing=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("atlasFrame","\xe2","\x8a","\x40","\xe9"));
	outFields->push(HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"));
	outFields->push(HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"));
	outFields->push(HX_HCSTRING("tileSpacing","\xf5","\x71","\x1f","\x31"));
	outFields->push(HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"));
	outFields->push(HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxTileFrames_obj,atlasFrame),HX_HCSTRING("atlasFrame","\xe2","\x8a","\x40","\xe9")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxTileFrames_obj,region),HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTileFrames_obj,tileSize),HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTileFrames_obj,tileSpacing),HX_HCSTRING("tileSpacing","\xf5","\x71","\x1f","\x31")},
	{hx::fsInt,(int)offsetof(FlxTileFrames_obj,numRows),HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f")},
	{hx::fsInt,(int)offsetof(FlxTileFrames_obj,numCols),HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("atlasFrame","\xe2","\x8a","\x40","\xe9"),
	HX_HCSTRING("region","\xf4","\xc0","\x8c","\x00"),
	HX_HCSTRING("tileSize","\x0f","\xc7","\x59","\x86"),
	HX_HCSTRING("tileSpacing","\xf5","\x71","\x1f","\x31"),
	HX_HCSTRING("numRows","\x7f","\x9a","\x2f","\x9f"),
	HX_HCSTRING("numCols","\x99","\x5d","\x45","\x95"),
	HX_HCSTRING("getByTilePosition","\xa4","\x3d","\x28","\x5c"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileFrames_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileFrames_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTileFrames_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBitmapAddSpacesAndBorders","\x05","\x1a","\xdd","\xf3"),
	HX_HCSTRING("fromFrameAddSpacesAndBorders","\xdb","\x16","\xd1","\xbd"),
	HX_HCSTRING("fromFrame","\x63","\x62","\x0c","\xbb"),
	HX_HCSTRING("fromFrames","\xb0","\xb4","\xc9","\xef"),
	HX_HCSTRING("fromAtlasByPrefix","\x6a","\xfb","\x8c","\x24"),
	HX_HCSTRING("fromGraphic","\x5e","\xbe","\x47","\x0c"),
	HX_HCSTRING("fromRectangle","\x65","\x11","\x66","\x8d"),
	HX_HCSTRING("combineTileSets","\x7e","\xb6","\x33","\xf9"),
	HX_HCSTRING("combineTileFrames","\xd3","\x68","\x6b","\xb3"),
	HX_HCSTRING("findFrame","\x34","\xa9","\x7a","\xf5"),
	::String(null()) };

void FlxTileFrames_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxTileFrames","\x8f","\xb0","\x85","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTileFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTileFrames_obj >;
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
