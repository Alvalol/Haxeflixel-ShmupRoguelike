#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
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
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",42,0x448feb74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(115)
	this->_scaledTileHeight = ((Float)0);
	HX_STACK_LINE(114)
	this->_scaledTileWidth = ((Float)0);
	HX_STACK_LINE(112)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(108)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(91)
	this->blend = null();
	HX_STACK_LINE(84)
	this->alpha = ((Float)1.0);
	HX_STACK_LINE(79)
	this->color = (int)16777215;
	HX_STACK_LINE(55)
	this->useScaleHack = true;
	HX_STACK_LINE(153)
	super::__construct();
	HX_STACK_LINE(155)
	this->_buffers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(156)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	this->_flashPoint = tmp;
	HX_STACK_LINE(157)
	::openfl::_legacy::geom::Rectangle tmp1 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	this->_flashRect = tmp1;
	HX_STACK_LINE(159)
	bool tmp2 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	if ((tmp2)){
		HX_STACK_LINE(161)
		::openfl::_legacy::geom::Point tmp3 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		this->_helperPoint = tmp3;
		HX_STACK_LINE(162)
		::flixel::math::FlxMatrix tmp4 = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(162)
		this->_matrix = tmp4;
	}
	HX_STACK_LINE(165)
	::openfl::_legacy::geom::ColorTransform tmp3 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	this->colorTransform = tmp3;
	HX_STACK_LINE(167)
	Dynamic tmp4 = this->setScaleXCallback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(167)
	Dynamic tmp5 = this->setScaleYCallback_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(167)
	Dynamic tmp6 = this->setScaleXYCallback_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(167)
	::flixel::math::FlxCallbackPoint tmp7 = ::flixel::math::FlxCallbackPoint_obj::__new(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(167)
	this->scale = tmp7;
	HX_STACK_LINE(168)
	::flixel::math::FlxPoint tmp8 = this->scale;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(168)
	tmp8->set((int)1,(int)1);
	HX_STACK_LINE(170)
	::flixel::math::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(170)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(170)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp10 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(170)
		::flixel::math::FlxPoint tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(170)
		Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(170)
		Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(170)
		::flixel::math::FlxPoint tmp14 = tmp11->set(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(170)
		::flixel::math::FlxPoint point = tmp14;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(170)
		point->_inPool = false;
		HX_STACK_LINE(170)
		tmp9 = point;
	}
	HX_STACK_LINE(170)
	this->offset = tmp9;
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		::flixel::_system::frontEnds::SignalFrontEnd tmp10 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(172)
		Dynamic tmp11 = this->onGameResize_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		tmp10->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp11);
	}
}
;
	return null();
}

//FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > _result_ = new FlxTilemap_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > _result_ = new FlxTilemap_obj();
	_result_->__construct();
	return _result_;}

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",185,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		this->_flashPoint = null();
		HX_STACK_LINE(187)
		this->_flashRect = null();
		HX_STACK_LINE(188)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(189)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(191)
		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
		HX_STACK_LINE(192)
		this->_buffers = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
		HX_STACK_LINE(194)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		if ((tmp)){
		}
		else{
			HX_STACK_LINE(205)
			this->_helperPoint = null();
			HX_STACK_LINE(206)
			this->_matrix = null();
		}
		HX_STACK_LINE(209)
		this->set_frames(null());
		HX_STACK_LINE(210)
		this->set_graphic(null());
		HX_STACK_LINE(213)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		::flixel::math::FlxPoint tmp2 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		this->scale = tmp2;
		HX_STACK_LINE(215)
		::flixel::math::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(215)
		this->offset = tmp4;
		HX_STACK_LINE(217)
		this->colorTransform = null();
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			::flixel::_system::frontEnds::SignalFrontEnd tmp5 = ::flixel::FlxG_obj::signals;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			Dynamic tmp6 = this->onGameResize_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			tmp5->__Field(HX_HCSTRING("gameResized","\x1e","\xd2","\x29","\x48"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(227)
		this->super::destroy();
	}
return null();
}


::flixel::graphics::frames::FlxFramesCollection FlxTilemap_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_frames",0xb39c4aa7,"flixel.tile.FlxTilemap.set_frames","flixel/tile/FlxTilemap.hx",231,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	this->frames = value;
	HX_STACK_LINE(234)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	if ((tmp)){
		HX_STACK_LINE(236)
		::flixel::graphics::frames::FlxFrame tmp1 = value->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		Float tmp2 = tmp1->sourceSize->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		this->_tileWidth = tmp3;
		HX_STACK_LINE(237)
		::flixel::graphics::frames::FlxFrame tmp4 = value->frames->__get((int)0).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(237)
		Float tmp5 = tmp4->sourceSize->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(237)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		this->_tileHeight = tmp6;
		HX_STACK_LINE(238)
		::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(238)
		int tmp8 = this->_tileWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(238)
		int tmp9 = this->_tileHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		tmp7->setTo((int)0,(int)0,tmp8,tmp9);
		HX_STACK_LINE(239)
		::flixel::graphics::FlxGraphic tmp10 = value->parent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(239)
		this->set_graphic(tmp10);
		HX_STACK_LINE(240)
		this->postGraphicLoad();
	}
	HX_STACK_LINE(243)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_frames,return )

Void FlxTilemap_obj::cacheGraphics( int TileWidth,int TileHeight,Dynamic TileGraphic){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","cacheGraphics",0x759126e9,"flixel.tile.FlxTilemap.cacheGraphics","flixel/tile/FlxTilemap.hx",247,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TileWidth,"TileWidth")
		HX_STACK_ARG(TileHeight,"TileHeight")
		HX_STACK_ARG(TileGraphic,"TileGraphic")
		HX_STACK_LINE(248)
		Dynamic tmp = TileGraphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::flixel::graphics::frames::FlxFramesCollection >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(250)
			::flixel::graphics::frames::FlxFramesCollection tmp2 = ((::flixel::graphics::frames::FlxFramesCollection)(TileGraphic));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(250)
			this->set_frames(tmp2);
			HX_STACK_LINE(251)
			return null();
		}
		HX_STACK_LINE(254)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp2 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(254)
		Dynamic tmp3 = TileGraphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(254)
		::flixel::graphics::FlxGraphic tmp4 = tmp2->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		::flixel::graphics::FlxGraphic graph = tmp4;		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(255)
		bool tmp5 = (graph == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		if ((tmp5)){
			HX_STACK_LINE(257)
			return null();
		}
		HX_STACK_LINE(260)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(262)
		int tmp6 = this->_tileWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(262)
		bool tmp7 = (tmp6 <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		if ((tmp7)){
			HX_STACK_LINE(264)
			this->_tileWidth = graph->height;
		}
		HX_STACK_LINE(267)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(269)
		int tmp8 = this->_tileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(269)
		bool tmp9 = (tmp8 <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(269)
		if ((tmp9)){
			HX_STACK_LINE(271)
			int tmp10 = this->_tileWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(271)
			this->_tileHeight = tmp10;
		}
		HX_STACK_LINE(274)
		::flixel::graphics::FlxGraphic tmp10 = graph;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(274)
		::flixel::math::FlxPoint tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp12 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(274)
			::flixel::math::FlxPoint tmp13 = tmp12->get();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(274)
			int tmp14 = this->_tileWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(274)
			int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(274)
			::flixel::math::FlxPoint tmp16 = tmp13->set(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(274)
			::flixel::math::FlxPoint point = tmp16;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(274)
			point->_inPool = false;
			HX_STACK_LINE(274)
			tmp11 = point;
		}
		HX_STACK_LINE(274)
		::flixel::graphics::frames::FlxTileFrames tmp12 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(274)
		this->set_frames(tmp12);
	}
return null();
}


Void FlxTilemap_obj::initTileObjects( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","initTileObjects",0xb20b6ad2,"flixel.tile.FlxTilemap.initTileObjects","flixel/tile/FlxTilemap.hx",278,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(279)
		::flixel::graphics::frames::FlxFramesCollection tmp = this->frames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(279)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		if ((tmp1)){
			HX_STACK_LINE(281)
			return null();
		}
		HX_STACK_LINE(284)
		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
		HX_STACK_LINE(286)
		this->_tileObjects = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(288)
		::flixel::graphics::frames::FlxFramesCollection tmp2 = this->frames;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(288)
		int tmp3 = tmp2->frames->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(288)
		int length = tmp3;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(289)
		int tmp4 = this->_startingIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		hx::AddEq(length,tmp4);
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			while((true)){
				HX_STACK_LINE(291)
				bool tmp5 = (_g < length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(291)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(291)
				if ((tmp6)){
					HX_STACK_LINE(291)
					break;
				}
				HX_STACK_LINE(291)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(291)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(293)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(293)
				int tmp9 = this->_tileWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(293)
				int tmp10 = this->_tileHeight;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(293)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				int tmp12 = this->_drawIndex;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(293)
				bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(293)
				int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(293)
				int tmp15 = this->_collideIndex;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(293)
				bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(293)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(293)
				if ((tmp16)){
					HX_STACK_LINE(293)
					tmp17 = this->allowCollisions;
				}
				else{
					HX_STACK_LINE(293)
					tmp17 = (int)0;
				}
				HX_STACK_LINE(293)
				::flixel::tile::FlxTile tmp18 = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp8,tmp9,tmp10,tmp13,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(293)
				hx::IndexRef((this->_tileObjects).mPtr,i) = tmp18;
			}
		}
	}
return null();
}


Void FlxTilemap_obj::computeDimensions( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","computeDimensions",0x3602f860,"flixel.tile.FlxTilemap.computeDimensions","flixel/tile/FlxTilemap.hx",308,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(309)
		this->_scaledTileWidth = tmp3;
		HX_STACK_LINE(310)
		int tmp4 = this->_tileHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		::flixel::math::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		this->_scaledTileHeight = tmp7;
		HX_STACK_LINE(313)
		int tmp8 = this->widthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		Float tmp9 = this->_scaledTileWidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(313)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(313)
		this->set_width(tmp10);
		HX_STACK_LINE(314)
		int tmp11 = this->heightInTiles;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(314)
		Float tmp12 = this->_scaledTileHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(314)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(314)
		this->set_height(tmp13);
	}
return null();
}


Void FlxTilemap_obj::updateMap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateMap",0x271f1fcf,"flixel.tile.FlxTilemap.updateMap","flixel/tile/FlxTilemap.hx",318,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(326)
		int tmp = this->_tileObjects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		int numTiles = tmp;		HX_STACK_VAR(numTiles,"numTiles");
		HX_STACK_LINE(327)
		{
			HX_STACK_LINE(327)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(327)
			while((true)){
				HX_STACK_LINE(327)
				bool tmp1 = (_g < numTiles);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(327)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(327)
				if ((tmp2)){
					HX_STACK_LINE(327)
					break;
				}
				HX_STACK_LINE(327)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(327)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(329)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(329)
				this->updateTile(tmp4);
			}
		}
	}
return null();
}


Void FlxTilemap_obj::draw( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",428,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(430)
		::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(432)
			return null();
		}
		HX_STACK_LINE(435)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(436)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(437)
		int tmp2 = this->get_cameras()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(439)
			while((true)){
				HX_STACK_LINE(439)
				bool tmp3 = (_g < l);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(439)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(439)
				if ((tmp4)){
					HX_STACK_LINE(439)
					break;
				}
				HX_STACK_LINE(439)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(439)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(441)
				::flixel::FlxCamera tmp6 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				camera = tmp6;
				HX_STACK_LINE(443)
				bool tmp7 = camera->visible;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(443)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(443)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(443)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(443)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(443)
				if ((tmp10)){
					HX_STACK_LINE(443)
					bool tmp12 = camera->exists;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(443)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(443)
					tmp11 = !(tmp13);
				}
				else{
					HX_STACK_LINE(443)
					tmp11 = true;
				}
				HX_STACK_LINE(443)
				if ((tmp11)){
					HX_STACK_LINE(445)
					continue;
				}
				HX_STACK_LINE(448)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(448)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(448)
				if ((tmp13)){
					HX_STACK_LINE(450)
					::flixel::tile::FlxTilemapBuffer tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(450)
					{
						HX_STACK_LINE(450)
						int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(450)
						int tmp16 = this->_tileHeight;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(450)
						int tmp17 = this->widthInTiles;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(450)
						int tmp18 = this->heightInTiles;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(450)
						::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(450)
						::flixel::math::FlxPoint tmp20 = this->scale;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(450)
						Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(450)
						::flixel::math::FlxPoint tmp22 = this->scale;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(450)
						Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(450)
						::flixel::tile::FlxTilemapBuffer tmp24 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp15,tmp16,tmp17,tmp18,tmp19,tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(450)
						::flixel::tile::FlxTilemapBuffer buffer1 = tmp24;		HX_STACK_VAR(buffer1,"buffer1");
						HX_STACK_LINE(450)
						Dynamic tmp25 = this->pixelPerfectRender;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(450)
						buffer1->pixelPerfectRender = tmp25;
						HX_STACK_LINE(450)
						tmp14 = buffer1;
					}
					HX_STACK_LINE(450)
					this->_buffers[i] = tmp14;
				}
				HX_STACK_LINE(453)
				::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(453)
				buffer = tmp14;
				HX_STACK_LINE(455)
				bool tmp15 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(455)
				if ((tmp15)){
					HX_STACK_LINE(457)
					{
						HX_STACK_LINE(457)
						::flixel::math::FlxPoint tmp16 = this->_point;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(457)
						::flixel::FlxCamera tmp17 = camera;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(457)
						::flixel::math::FlxPoint tmp18 = this->getScreenPosition(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(457)
						::flixel::math::FlxPoint tmp19 = this->offset;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(457)
						::flixel::math::FlxPoint tmp20 = tmp18->subtractPoint(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(457)
						::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(457)
							Float tmp21 = (_g1->x + buffer->x);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(457)
							_g1->set_x(tmp21);
						}
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(457)
							Float tmp21 = (_g1->y + buffer->y);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(457)
							_g1->set_y(tmp21);
						}
						HX_STACK_LINE(457)
						_this;
					}
					HX_STACK_LINE(458)
					bool tmp16 = buffer->dirty;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(458)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(458)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(458)
					if ((tmp18)){
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp20 = this->_point;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(458)
						Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(458)
						tmp19 = (tmp23 > (int)0);
					}
					else{
						HX_STACK_LINE(458)
						tmp19 = true;
					}
					HX_STACK_LINE(458)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(458)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(458)
					bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(458)
					if ((tmp21)){
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(458)
						Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(458)
						tmp22 = (tmp26 > (int)0);
					}
					else{
						HX_STACK_LINE(458)
						tmp22 = true;
					}
					HX_STACK_LINE(458)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(458)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(458)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(458)
					if ((tmp24)){
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp26 = this->_point;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(458)
						Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(458)
						Float tmp30 = buffer->width;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(458)
						Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(458)
						Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(458)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(458)
						int tmp34 = camera->width;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(458)
						tmp25 = (tmp33 < tmp34);
					}
					else{
						HX_STACK_LINE(458)
						tmp25 = true;
					}
					HX_STACK_LINE(458)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(458)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(458)
					if ((tmp26)){
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp28 = this->_point;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(458)
						::flixel::math::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(458)
						Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(458)
						Float tmp31 = buffer->height;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(458)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(458)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(458)
						int tmp34 = camera->height;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(458)
						tmp27 = (tmp33 < tmp34);
					}
					else{
						HX_STACK_LINE(458)
						tmp27 = true;
					}
					HX_STACK_LINE(458)
					buffer->dirty = tmp27;
					HX_STACK_LINE(460)
					bool tmp28 = buffer->dirty;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(460)
					if ((tmp28)){
						HX_STACK_LINE(462)
						::flixel::tile::FlxTilemapBuffer tmp29 = buffer;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(462)
						::flixel::FlxCamera tmp30 = camera;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(462)
						this->drawTilemap(tmp29,tmp30);
					}
					HX_STACK_LINE(465)
					{
						HX_STACK_LINE(465)
						::flixel::math::FlxPoint tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(465)
						{
							HX_STACK_LINE(465)
							::flixel::math::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(465)
							::flixel::FlxCamera tmp31 = camera;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(465)
							::flixel::math::FlxPoint tmp32 = this->getScreenPosition(tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(465)
							::flixel::math::FlxPoint tmp33 = this->offset;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(465)
							::flixel::math::FlxPoint tmp34 = tmp32->subtractPoint(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(465)
							::flixel::math::FlxPoint _this = tmp34;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(465)
							{
								HX_STACK_LINE(465)
								::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(465)
								Float tmp35 = (_g1->x + buffer->x);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(465)
								_g1->set_x(tmp35);
							}
							HX_STACK_LINE(465)
							{
								HX_STACK_LINE(465)
								::flixel::math::FlxPoint _g1 = _this;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(465)
								Float tmp35 = (_g1->y + buffer->y);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(465)
								_g1->set_y(tmp35);
							}
							HX_STACK_LINE(465)
							tmp29 = _this;
						}
						HX_STACK_LINE(465)
						::flixel::math::FlxPoint _this = tmp29;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(465)
						::openfl::_legacy::geom::Point tmp30 = this->_flashPoint;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(465)
						::openfl::_legacy::geom::Point FlashPoint = tmp30;		HX_STACK_VAR(FlashPoint,"FlashPoint");
						HX_STACK_LINE(465)
						bool tmp31 = (FlashPoint == null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(465)
						if ((tmp31)){
							HX_STACK_LINE(465)
							::openfl::_legacy::geom::Point tmp32 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(465)
							FlashPoint = tmp32;
						}
						HX_STACK_LINE(465)
						FlashPoint->x = _this->x;
						HX_STACK_LINE(465)
						FlashPoint->y = _this->y;
						HX_STACK_LINE(465)
						FlashPoint;
					}
					HX_STACK_LINE(466)
					::flixel::FlxCamera tmp29 = camera;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(466)
					::openfl::_legacy::geom::Point tmp30 = this->_flashPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(466)
					::flixel::math::FlxPoint tmp31 = this->scale;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(466)
					Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(466)
					::flixel::math::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(466)
					Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(466)
					buffer->draw(tmp29,tmp30,tmp32,tmp34);
				}
				else{
					HX_STACK_LINE(470)
					::flixel::tile::FlxTilemapBuffer tmp16 = buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(470)
					::flixel::FlxCamera tmp17 = camera;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(470)
					this->drawTilemap(tmp16,tmp17);
				}
			}
		}
	}
return null();
}


Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",492,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(492)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(492)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(492)
		while((true)){
			HX_STACK_LINE(492)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(492)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(492)
			if ((tmp1)){
				HX_STACK_LINE(492)
				break;
			}
			HX_STACK_LINE(492)
			::flixel::tile::FlxTilemapBuffer tmp2 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(492)
			::flixel::tile::FlxTilemapBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(492)
			++(_g);
			HX_STACK_LINE(494)
			buffer->dirty = true;
		}
	}
return null();
}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::math::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",510,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(511)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(513)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(513)
		Float X = tmp;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(514)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(514)
		Float Y = tmp1;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(516)
		bool tmp2 = (Position != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(516)
		if ((tmp2)){
			HX_STACK_LINE(518)
			X = Position->x;
			HX_STACK_LINE(519)
			Y = Position->y;
		}
		HX_STACK_LINE(523)
		Float tmp3 = (Object->x - X);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(523)
		Float tmp4 = this->_scaledTileWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(523)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(523)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(523)
		int selectionX = tmp6;		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(524)
		Float tmp7 = (Object->y - Y);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(524)
		Float tmp8 = this->_scaledTileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(524)
		Float tmp9 = (Float(tmp7) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(524)
		int tmp10 = ::Math_obj::floor(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(524)
		int selectionY = tmp10;		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(525)
		int tmp11 = selectionX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(525)
		Float tmp12 = Object->get_width();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(525)
		Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(525)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(525)
		int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(525)
		int tmp16 = (tmp11 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(525)
		int tmp17 = (tmp16 + (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(525)
		int selectionWidth = tmp17;		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(526)
		int tmp18 = selectionY;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(526)
		Float tmp19 = Object->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(526)
		Float tmp20 = this->_scaledTileHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(526)
		Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(526)
		int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(526)
		int tmp23 = (tmp18 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(526)
		int tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(526)
		int selectionHeight = tmp24;		HX_STACK_VAR(selectionHeight,"selectionHeight");
		HX_STACK_LINE(529)
		Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			int tmp26 = this->widthInTiles;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(529)
			Dynamic Max = tmp26;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(529)
			bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(529)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(529)
			if ((tmp27)){
				HX_STACK_LINE(529)
				tmp28 = (selectionX < (int)0);
			}
			else{
				HX_STACK_LINE(529)
				tmp28 = false;
			}
			HX_STACK_LINE(529)
			Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(529)
			if ((tmp28)){
				HX_STACK_LINE(529)
				tmp29 = (int)0;
			}
			else{
				HX_STACK_LINE(529)
				tmp29 = selectionX;
			}
			HX_STACK_LINE(529)
			Float lowerBound = tmp29;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(529)
			bool tmp30 = (Max != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(529)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(529)
			if ((tmp30)){
				HX_STACK_LINE(529)
				tmp31 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(529)
				tmp31 = false;
			}
			HX_STACK_LINE(529)
			if ((tmp31)){
				HX_STACK_LINE(529)
				tmp25 = Max;
			}
			else{
				HX_STACK_LINE(529)
				tmp25 = lowerBound;
			}
		}
		HX_STACK_LINE(529)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(529)
		selectionX = tmp26;
		HX_STACK_LINE(530)
		Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			int tmp28 = this->heightInTiles;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(530)
			Dynamic Max = tmp28;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(530)
			bool tmp29 = true;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(530)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(530)
			if ((tmp29)){
				HX_STACK_LINE(530)
				tmp30 = (selectionY < (int)0);
			}
			else{
				HX_STACK_LINE(530)
				tmp30 = false;
			}
			HX_STACK_LINE(530)
			Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(530)
			if ((tmp30)){
				HX_STACK_LINE(530)
				tmp31 = (int)0;
			}
			else{
				HX_STACK_LINE(530)
				tmp31 = selectionY;
			}
			HX_STACK_LINE(530)
			Float lowerBound = tmp31;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(530)
			bool tmp32 = (Max != null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(530)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(530)
			if ((tmp32)){
				HX_STACK_LINE(530)
				tmp33 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(530)
				tmp33 = false;
			}
			HX_STACK_LINE(530)
			if ((tmp33)){
				HX_STACK_LINE(530)
				tmp27 = Max;
			}
			else{
				HX_STACK_LINE(530)
				tmp27 = lowerBound;
			}
		}
		HX_STACK_LINE(530)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(530)
		selectionY = tmp28;
		HX_STACK_LINE(531)
		Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(531)
		{
			HX_STACK_LINE(531)
			int tmp30 = this->widthInTiles;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(531)
			Dynamic Max = tmp30;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(531)
			bool tmp31 = true;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(531)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(531)
			if ((tmp31)){
				HX_STACK_LINE(531)
				tmp32 = (selectionWidth < (int)0);
			}
			else{
				HX_STACK_LINE(531)
				tmp32 = false;
			}
			HX_STACK_LINE(531)
			Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(531)
			if ((tmp32)){
				HX_STACK_LINE(531)
				tmp33 = (int)0;
			}
			else{
				HX_STACK_LINE(531)
				tmp33 = selectionWidth;
			}
			HX_STACK_LINE(531)
			Float lowerBound = tmp33;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(531)
			bool tmp34 = (Max != null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(531)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(531)
			if ((tmp34)){
				HX_STACK_LINE(531)
				tmp35 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(531)
				tmp35 = false;
			}
			HX_STACK_LINE(531)
			if ((tmp35)){
				HX_STACK_LINE(531)
				tmp29 = Max;
			}
			else{
				HX_STACK_LINE(531)
				tmp29 = lowerBound;
			}
		}
		HX_STACK_LINE(531)
		int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(531)
		selectionWidth = tmp30;
		HX_STACK_LINE(532)
		Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			int tmp32 = this->heightInTiles;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(532)
			Dynamic Max = tmp32;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(532)
			bool tmp33 = true;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(532)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(532)
			if ((tmp33)){
				HX_STACK_LINE(532)
				tmp34 = (selectionHeight < (int)0);
			}
			else{
				HX_STACK_LINE(532)
				tmp34 = false;
			}
			HX_STACK_LINE(532)
			Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(532)
			if ((tmp34)){
				HX_STACK_LINE(532)
				tmp35 = (int)0;
			}
			else{
				HX_STACK_LINE(532)
				tmp35 = selectionHeight;
			}
			HX_STACK_LINE(532)
			Float lowerBound = tmp35;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(532)
			bool tmp36 = (Max != null());		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(532)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(532)
			if ((tmp36)){
				HX_STACK_LINE(532)
				tmp37 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(532)
				tmp37 = false;
			}
			HX_STACK_LINE(532)
			if ((tmp37)){
				HX_STACK_LINE(532)
				tmp31 = Max;
			}
			else{
				HX_STACK_LINE(532)
				tmp31 = lowerBound;
			}
		}
		HX_STACK_LINE(532)
		int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(532)
		selectionHeight = tmp32;
		HX_STACK_LINE(535)
		int tmp33 = selectionY;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(535)
		int tmp34 = this->widthInTiles;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(535)
		int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(535)
		int rowStart = tmp35;		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(536)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(537)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(538)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(539)
		Float tmp36 = X;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(539)
		::flixel::math::FlxPoint tmp37 = this->last;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(539)
		Float tmp38 = tmp37->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(539)
		Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(539)
		Float deltaX = tmp39;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(540)
		Float tmp40 = Y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(540)
		::flixel::math::FlxPoint tmp41 = this->last;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(540)
		Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(540)
		Float tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(540)
		Float deltaY = tmp43;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(542)
		{
			HX_STACK_LINE(542)
			int _g = selectionY;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(542)
			while((true)){
				HX_STACK_LINE(542)
				bool tmp44 = (_g < selectionHeight);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(542)
				bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(542)
				if ((tmp45)){
					HX_STACK_LINE(542)
					break;
				}
				HX_STACK_LINE(542)
				int tmp46 = (_g)++;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(542)
				int row = tmp46;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(544)
				column = selectionX;
				HX_STACK_LINE(546)
				while((true)){
					HX_STACK_LINE(546)
					bool tmp47 = (column < selectionWidth);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(546)
					bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(546)
					if ((tmp48)){
						HX_STACK_LINE(546)
						break;
					}
					HX_STACK_LINE(548)
					int tmp49 = (rowStart + column);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(548)
					int index = tmp49;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(549)
					bool tmp50 = (index < (int)0);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(549)
					bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(549)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(549)
					if ((tmp51)){
						HX_STACK_LINE(549)
						int tmp53 = index;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(549)
						int tmp54 = this->_data->length;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(549)
						int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(549)
						int tmp56 = (tmp55 - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(549)
						int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(549)
						tmp52 = (tmp53 > tmp57);
					}
					else{
						HX_STACK_LINE(549)
						tmp52 = true;
					}
					HX_STACK_LINE(549)
					if ((tmp52)){
						HX_STACK_LINE(551)
						(column)++;
						HX_STACK_LINE(552)
						continue;
					}
					HX_STACK_LINE(555)
					int tmp53 = this->_data->__get(index);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(555)
					int dataIndex = tmp53;		HX_STACK_VAR(dataIndex,"dataIndex");
					HX_STACK_LINE(556)
					bool tmp54 = (dataIndex < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(556)
					if ((tmp54)){
						HX_STACK_LINE(558)
						(column)++;
						HX_STACK_LINE(559)
						continue;
					}
					HX_STACK_LINE(562)
					::flixel::tile::FlxTile tmp55 = this->_tileObjects->__GetItem(dataIndex);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(562)
					tile = tmp55;
					HX_STACK_LINE(563)
					Float tmp56 = this->_scaledTileWidth;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(563)
					tile->set_width(tmp56);
					HX_STACK_LINE(564)
					Float tmp57 = this->_scaledTileHeight;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(564)
					tile->set_height(tmp57);
					HX_STACK_LINE(565)
					Float tmp58 = X;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(565)
					int tmp59 = column;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(565)
					Float tmp60 = tile->get_width();		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(565)
					Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(565)
					Float tmp62 = (tmp58 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(565)
					tile->set_x(tmp62);
					HX_STACK_LINE(566)
					Float tmp63 = Y;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(566)
					int tmp64 = row;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(566)
					Float tmp65 = tile->get_height();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(566)
					Float tmp66 = (tmp64 * tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(566)
					Float tmp67 = (tmp63 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(566)
					tile->set_y(tmp67);
					HX_STACK_LINE(567)
					Float tmp68 = (tile->x - deltaX);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(567)
					tile->last->set_x(tmp68);
					HX_STACK_LINE(568)
					Float tmp69 = (tile->y - deltaY);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(568)
					tile->last->set_y(tmp69);
					HX_STACK_LINE(570)
					Float tmp70 = Object->x;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(570)
					Float tmp71 = Object->get_width();		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(570)
					Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(570)
					Float tmp73 = tile->x;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(570)
					bool tmp74 = (tmp72 > tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(570)
					bool tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(570)
					bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(570)
					if ((tmp75)){
						HX_STACK_LINE(570)
						Float tmp77 = Object->x;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(570)
						Float tmp78 = tile->x;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(570)
						Float tmp79 = tile->get_width();		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(570)
						Float tmp80 = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(570)
						Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(570)
						Float tmp82 = (tmp78 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(570)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(570)
						Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(570)
						tmp76 = (tmp77 < tmp84);
					}
					else{
						HX_STACK_LINE(570)
						tmp76 = false;
					}
					HX_STACK_LINE(570)
					bool tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(570)
					bool tmp78;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(570)
					if ((tmp77)){
						HX_STACK_LINE(571)
						Float tmp79 = Object->y;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(571)
						Float tmp80 = Object->get_height();		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(571)
						Float tmp81 = tmp80;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(571)
						Float tmp82 = tmp81;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(571)
						Float tmp83 = (tmp79 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(571)
						Float tmp84 = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(571)
						Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(571)
						Float tmp86 = tile->y;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(571)
						tmp78 = (tmp85 > tmp86);
					}
					else{
						HX_STACK_LINE(570)
						tmp78 = false;
					}
					HX_STACK_LINE(570)
					bool tmp79;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(570)
					if ((tmp78)){
						HX_STACK_LINE(571)
						Float tmp80 = Object->y;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(571)
						Float tmp81 = tile->y;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(571)
						Float tmp82 = tile->get_height();		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(571)
						Float tmp83 = tmp82;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(571)
						Float tmp84 = (tmp81 + tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(571)
						Float tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(571)
						tmp79 = (tmp80 < tmp85);
					}
					else{
						HX_STACK_LINE(570)
						tmp79 = false;
					}
					HX_STACK_LINE(570)
					overlapFound = tmp79;
					HX_STACK_LINE(573)
					bool tmp80 = (tile->allowCollisions != (int)0);		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(573)
					if ((tmp80)){
						HX_STACK_LINE(575)
						bool tmp81 = (Callback != null());		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(575)
						if ((tmp81)){
							HX_STACK_LINE(577)
							bool tmp82 = FlipCallbackParams;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(577)
							if ((tmp82)){
								HX_STACK_LINE(579)
								::flixel::FlxObject tmp83 = Object;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(579)
								::flixel::tile::FlxTile tmp84 = tile;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(579)
								bool tmp85 = Callback(tmp83,tmp84).Cast< bool >();		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(579)
								overlapFound = tmp85;
							}
							else{
								HX_STACK_LINE(583)
								::flixel::tile::FlxTile tmp83 = tile;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(583)
								::flixel::FlxObject tmp84 = Object;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(583)
								bool tmp85 = Callback(tmp83,tmp84).Cast< bool >();		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(583)
								overlapFound = tmp85;
							}
						}
					}
					HX_STACK_LINE(588)
					bool tmp81 = overlapFound;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(588)
					if ((tmp81)){
						HX_STACK_LINE(590)
						bool tmp82 = (tile->callbackFunction != null());		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(590)
						bool tmp83;		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(590)
						if ((tmp82)){
							HX_STACK_LINE(590)
							bool tmp84 = (tile->filter == null());		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(590)
							bool tmp85 = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(590)
							bool tmp86 = tmp85;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(590)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(590)
							bool tmp88 = tmp87;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(590)
							bool tmp89 = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(590)
							if ((tmp89)){
								HX_STACK_LINE(590)
								::flixel::FlxObject tmp90 = Object;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(590)
								::hx::Class tmp91 = tile->filter;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(590)
								::flixel::FlxObject tmp92 = tmp90;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(590)
								::hx::Class tmp93 = tmp91;		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(590)
								::flixel::FlxObject tmp94 = tmp92;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(590)
								::hx::Class tmp95 = tmp93;		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(590)
								tmp83 = ::Std_obj::is(tmp94,tmp95);
							}
							else{
								HX_STACK_LINE(590)
								tmp83 = true;
							}
						}
						else{
							HX_STACK_LINE(590)
							tmp83 = false;
						}
						HX_STACK_LINE(590)
						if ((tmp83)){
							HX_STACK_LINE(592)
							int tmp84 = (rowStart + column);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(592)
							tile->mapIndex = tmp84;
							HX_STACK_LINE(593)
							::flixel::tile::FlxTile tmp85 = tile;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(593)
							::flixel::FlxObject tmp86 = Object;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(593)
							tile->callbackFunction(tmp85,tmp86);
						}
						HX_STACK_LINE(596)
						bool tmp84 = (tile->allowCollisions != (int)0);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(596)
						if ((tmp84)){
							HX_STACK_LINE(598)
							results = true;
						}
					}
					HX_STACK_LINE(602)
					(column)++;
				}
				HX_STACK_LINE(605)
				int tmp47 = this->widthInTiles;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(605)
				hx::AddEq(rowStart,tmp47);
			}
		}
		HX_STACK_LINE(608)
		bool tmp44 = results;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(608)
		return tmp44;
	}
}


int FlxTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileIndexByCoords",0xb5ce22c7,"flixel.tile.FlxTilemap.getTileIndexByCoords","flixel/tile/FlxTilemap.hx",612,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Coord,"Coord")
	HX_STACK_LINE(613)
	Float tmp = Coord->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	Float tmp3 = this->_scaledTileHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(613)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(613)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(613)
	int tmp6 = this->widthInTiles;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(613)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(613)
	Float tmp8 = Coord->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(613)
	Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(613)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(613)
	Float tmp11 = this->_scaledTileWidth;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(613)
	Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(613)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(613)
	int tmp14 = (tmp7 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(613)
	int result = tmp14;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(614)
	{
		HX_STACK_LINE(614)
		bool tmp15 = Coord->_weak;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(614)
		if ((tmp15)){
			HX_STACK_LINE(614)
			Coord->put();
		}
	}
	HX_STACK_LINE(615)
	int tmp15 = result;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(615)
	return tmp15;
}


::flixel::math::FlxPoint FlxTilemap_obj::getTileCoordsByIndex( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoordsByIndex",0xe0680d7d,"flixel.tile.FlxTilemap.getTileCoordsByIndex","flixel/tile/FlxTilemap.hx",619,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(620)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(620)
			int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(620)
			int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(620)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(620)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(620)
			Float tmp6 = this->_scaledTileHeight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(620)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(620)
			Float tmp8 = (tmp1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(620)
			Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(620)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(620)
			::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(620)
			Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(620)
			int tmp12 = Index;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(620)
			int tmp13 = this->widthInTiles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(620)
			int tmp14 = hx::Mod(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(620)
			Float tmp15 = this->_scaledTileWidth;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(620)
			Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(620)
			Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(620)
			Float tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(620)
			::flixel::math::FlxPoint tmp19 = tmp10->set(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(620)
			::flixel::math::FlxPoint point = tmp19;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(620)
			point->_inPool = false;
			HX_STACK_LINE(620)
			tmp = point;
		}
		HX_STACK_LINE(620)
		::flixel::math::FlxPoint point = tmp;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(621)
		bool tmp1 = Midpoint;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		if ((tmp1)){
			HX_STACK_LINE(623)
			{
				HX_STACK_LINE(623)
				::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(623)
				Float tmp2 = _g->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(623)
				Float tmp3 = this->_scaledTileWidth;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(623)
				Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(623)
				Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(623)
				_g->set_x(tmp5);
			}
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				::flixel::math::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(624)
				Float tmp2 = _g->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(624)
				Float tmp3 = this->_scaledTileHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(624)
				Float tmp4 = (tmp3 * ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(624)
				Float tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(624)
				_g->set_y(tmp5);
			}
		}
		HX_STACK_LINE(626)
		::flixel::math::FlxPoint tmp2 = point;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		return tmp2;
	}
}


Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",637,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(638)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(640)
		::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(641)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(641)
		int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(641)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(641)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(643)
		{
			HX_STACK_LINE(643)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(643)
			while((true)){
				HX_STACK_LINE(643)
				bool tmp3 = (_g < l);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(643)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(643)
				if ((tmp4)){
					HX_STACK_LINE(643)
					break;
				}
				HX_STACK_LINE(643)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(643)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(645)
				int tmp6 = this->_data->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(645)
				int tmp7 = Index;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(645)
				bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(645)
				if ((tmp8)){
					HX_STACK_LINE(647)
					::flixel::math::FlxPoint tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(647)
					{
						HX_STACK_LINE(647)
						Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(647)
						int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(647)
						int tmp12 = this->widthInTiles;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(647)
						Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(647)
						int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(647)
						Float tmp15 = this->_scaledTileHeight;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(647)
						Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(647)
						Float tmp17 = (tmp10 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(647)
						Float Y = tmp17;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(647)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp18 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(647)
						::flixel::math::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(647)
						Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(647)
						int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(647)
						int tmp22 = this->widthInTiles;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(647)
						int tmp23 = hx::Mod(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(647)
						Float tmp24 = this->_scaledTileWidth;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(647)
						Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(647)
						Float tmp26 = (tmp20 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(647)
						Float tmp27 = Y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(647)
						::flixel::math::FlxPoint tmp28 = tmp19->set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(647)
						::flixel::math::FlxPoint point1 = tmp28;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(647)
						point1->_inPool = false;
						HX_STACK_LINE(647)
						tmp9 = point1;
					}
					HX_STACK_LINE(647)
					point = tmp9;
					HX_STACK_LINE(649)
					bool tmp10 = Midpoint;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(649)
					if ((tmp10)){
						HX_STACK_LINE(651)
						{
							HX_STACK_LINE(651)
							::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(651)
							Float tmp11 = _g1->x;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(651)
							Float tmp12 = this->_scaledTileWidth;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(651)
							Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(651)
							Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(651)
							_g1->set_x(tmp14);
						}
						HX_STACK_LINE(652)
						{
							HX_STACK_LINE(652)
							::flixel::math::FlxPoint _g1 = point;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(652)
							Float tmp11 = _g1->y;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(652)
							Float tmp12 = this->_scaledTileHeight;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(652)
							Float tmp13 = (tmp12 * ((Float)0.5));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(652)
							Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(652)
							_g1->set_y(tmp14);
						}
					}
					HX_STACK_LINE(655)
					bool tmp11 = (array == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(655)
					if ((tmp11)){
						HX_STACK_LINE(657)
						array = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(659)
					::flixel::math::FlxPoint tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(659)
					array->push(tmp12);
				}
			}
		}
		HX_STACK_LINE(663)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",674,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Border,"Border")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(675)
		bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(675)
		if ((tmp)){
			HX_STACK_LINE(677)
			::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(677)
			Camera = tmp1;
		}
		HX_STACK_LINE(680)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(680)
		int tmp2 = Border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(680)
		Float tmp3 = this->_scaledTileWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(680)
		Float tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(680)
		int tmp7 = Border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(680)
		Float tmp8 = this->_scaledTileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(680)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(680)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(680)
		Float tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(680)
		int tmp12 = Border;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(680)
		Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(680)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(680)
		Float tmp15 = (tmp14 * (int)2);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(680)
		Float tmp16 = (tmp11 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(680)
		Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(680)
		int tmp18 = Border;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(680)
		Float tmp19 = this->_scaledTileHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(680)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(680)
		Float tmp21 = (tmp20 * (int)2);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(680)
		Float tmp22 = (tmp17 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(680)
		bool tmp23 = UpdateWorld;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(680)
		Camera->setScrollBoundsRect(tmp5,tmp10,tmp16,tmp22,tmp23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

bool FlxTilemap_obj::ray( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,::flixel::math::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",694,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(695)
		Float tmp = this->_scaledTileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(695)
		Float step = tmp;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(697)
		Float tmp1 = this->_scaledTileHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		Float tmp2 = this->_scaledTileWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(697)
		if ((tmp3)){
			HX_STACK_LINE(699)
			Float tmp4 = this->_scaledTileHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(699)
			step = tmp4;
		}
		HX_STACK_LINE(702)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(703)
		Float tmp4 = (End->x - Start->x);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(703)
		Float deltaX = tmp4;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(704)
		Float tmp5 = (End->y - Start->y);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(704)
		Float deltaY = tmp5;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(705)
		Float tmp6 = (deltaX * deltaX);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(705)
		Float tmp7 = (deltaY * deltaY);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(705)
		Float tmp9 = ::Math_obj::sqrt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(705)
		Float distance = tmp9;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(706)
		Float tmp10 = (Float(distance) / Float(step));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(706)
		int tmp11 = ::Math_obj::ceil(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(706)
		int steps = tmp11;		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(707)
		Float tmp12 = (Float(deltaX) / Float(steps));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(707)
		Float stepX = tmp12;		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(708)
		Float tmp13 = (Float(deltaY) / Float(steps));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(708)
		Float stepY = tmp13;		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(709)
		Float tmp14 = (Start->x - stepX);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(709)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(709)
		Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(709)
		Float curX = tmp16;		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(710)
		Float tmp17 = (Start->y - stepY);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(710)
		Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(710)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(710)
		Float curY = tmp19;		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(711)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(712)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(713)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(715)
		{
			HX_STACK_LINE(715)
			bool tmp20 = Start->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(715)
			if ((tmp20)){
				HX_STACK_LINE(715)
				Start->put();
			}
		}
		HX_STACK_LINE(716)
		{
			HX_STACK_LINE(716)
			bool tmp20 = End->_weak;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(716)
			if ((tmp20)){
				HX_STACK_LINE(716)
				End->put();
			}
		}
		HX_STACK_LINE(718)
		while((true)){
			HX_STACK_LINE(718)
			bool tmp20 = (i < steps);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(718)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(718)
			if ((tmp21)){
				HX_STACK_LINE(718)
				break;
			}
			HX_STACK_LINE(720)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(721)
			hx::AddEq(curY,stepY);
			HX_STACK_LINE(723)
			bool tmp22 = (curX < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(723)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(723)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(723)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(723)
			if ((tmp24)){
				HX_STACK_LINE(723)
				Float tmp26 = curX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(723)
				Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(723)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(723)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(723)
				tmp25 = (tmp26 > tmp29);
			}
			else{
				HX_STACK_LINE(723)
				tmp25 = true;
			}
			HX_STACK_LINE(723)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(723)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(723)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(723)
			if ((tmp27)){
				HX_STACK_LINE(723)
				tmp28 = (curY < (int)0);
			}
			else{
				HX_STACK_LINE(723)
				tmp28 = true;
			}
			HX_STACK_LINE(723)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(723)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(723)
			if ((tmp29)){
				HX_STACK_LINE(723)
				Float tmp31 = curY;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(723)
				Float tmp32 = this->get_height();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(723)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(723)
				tmp30 = (tmp31 > tmp33);
			}
			else{
				HX_STACK_LINE(723)
				tmp30 = true;
			}
			HX_STACK_LINE(723)
			if ((tmp30)){
				HX_STACK_LINE(725)
				(i)++;
				HX_STACK_LINE(726)
				continue;
			}
			HX_STACK_LINE(729)
			Float tmp31 = curX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(729)
			Float tmp32 = this->_scaledTileWidth;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(729)
			Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(729)
			int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(729)
			tileX = tmp34;
			HX_STACK_LINE(730)
			Float tmp35 = curY;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(730)
			Float tmp36 = this->_scaledTileHeight;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(730)
			Float tmp37 = (Float(tmp35) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(730)
			int tmp38 = ::Math_obj::floor(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(730)
			tileY = tmp38;
			HX_STACK_LINE(732)
			int tmp39 = tileY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(732)
			int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(732)
			int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(732)
			int tmp42 = tileX;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(732)
			int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(732)
			int tmp44 = this->_data->__get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(732)
			::flixel::tile::FlxTile tmp45 = this->_tileObjects->__GetItem(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(732)
			int tmp46 = tmp45->allowCollisions;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(732)
			bool tmp47 = (tmp46 != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(732)
			if ((tmp47)){
				HX_STACK_LINE(735)
				Float tmp48 = this->_scaledTileWidth;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(735)
				int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(735)
				hx::MultEq(tileX,tmp49);
				HX_STACK_LINE(736)
				Float tmp50 = this->_scaledTileHeight;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(736)
				int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(736)
				hx::MultEq(tileY,tmp51);
				HX_STACK_LINE(737)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(738)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(739)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(740)
				Float tmp52 = (curX - stepX);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(740)
				Float lx = tmp52;		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(741)
				Float tmp53 = (curY - stepY);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(741)
				Float ly = tmp53;		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(744)
				q = tileX;
				HX_STACK_LINE(746)
				bool tmp54 = (deltaX < (int)0);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(746)
				if ((tmp54)){
					HX_STACK_LINE(748)
					Float tmp55 = this->_scaledTileWidth;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(748)
					hx::AddEq(q,tmp55);
				}
				HX_STACK_LINE(751)
				rx = q;
				HX_STACK_LINE(752)
				Float tmp55 = ly;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(752)
				Float tmp56 = stepY;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(752)
				Float tmp57 = (q - lx);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(752)
				Float tmp58 = stepX;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(752)
				Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(752)
				Float tmp60 = (tmp56 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(752)
				Float tmp61 = (tmp55 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(752)
				ry = tmp61;
				HX_STACK_LINE(754)
				bool tmp62 = (ry >= tileY);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(754)
				bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(754)
				if ((tmp62)){
					HX_STACK_LINE(754)
					Float tmp64 = ry;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(754)
					int tmp65 = tileY;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(754)
					Float tmp66 = this->_scaledTileHeight;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(754)
					Float tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(754)
					Float tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(754)
					Float tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(754)
					tmp63 = (tmp64 <= tmp69);
				}
				else{
					HX_STACK_LINE(754)
					tmp63 = false;
				}
				HX_STACK_LINE(754)
				if ((tmp63)){
					HX_STACK_LINE(756)
					bool tmp64 = (Result == null());		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(756)
					if ((tmp64)){
						HX_STACK_LINE(758)
						::flixel::math::FlxPoint tmp65;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(758)
						{
							HX_STACK_LINE(758)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(758)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(758)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp66 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(758)
							::flixel::math::FlxPoint tmp67 = tmp66->get();		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(758)
							Float tmp68 = X;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(758)
							Float tmp69 = Y;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(758)
							::flixel::math::FlxPoint tmp70 = tmp67->set(tmp68,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(758)
							::flixel::math::FlxPoint point = tmp70;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(758)
							point->_inPool = false;
							HX_STACK_LINE(758)
							tmp65 = point;
						}
						HX_STACK_LINE(758)
						Result = tmp65;
					}
					HX_STACK_LINE(761)
					Float tmp65 = rx;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(761)
					Float tmp66 = ry;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(761)
					Result->set(tmp65,tmp66);
					HX_STACK_LINE(762)
					return false;
				}
				HX_STACK_LINE(766)
				q = tileY;
				HX_STACK_LINE(768)
				bool tmp64 = (deltaY < (int)0);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(768)
				if ((tmp64)){
					HX_STACK_LINE(770)
					Float tmp65 = this->_scaledTileHeight;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(770)
					hx::AddEq(q,tmp65);
				}
				HX_STACK_LINE(773)
				Float tmp65 = lx;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(773)
				Float tmp66 = stepX;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(773)
				Float tmp67 = (q - ly);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(773)
				Float tmp68 = stepY;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(773)
				Float tmp69 = (Float(tmp67) / Float(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(773)
				Float tmp70 = (tmp66 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(773)
				Float tmp71 = (tmp65 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(773)
				rx = tmp71;
				HX_STACK_LINE(774)
				ry = q;
				HX_STACK_LINE(776)
				bool tmp72 = (rx >= tileX);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(776)
				bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(776)
				if ((tmp72)){
					HX_STACK_LINE(776)
					Float tmp74 = rx;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(776)
					int tmp75 = tileX;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(776)
					Float tmp76 = this->_scaledTileWidth;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(776)
					Float tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(776)
					Float tmp78 = (tmp75 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(776)
					Float tmp79 = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(776)
					tmp73 = (tmp74 <= tmp79);
				}
				else{
					HX_STACK_LINE(776)
					tmp73 = false;
				}
				HX_STACK_LINE(776)
				if ((tmp73)){
					HX_STACK_LINE(778)
					bool tmp74 = (Result == null());		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(778)
					if ((tmp74)){
						HX_STACK_LINE(780)
						::flixel::math::FlxPoint tmp75;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(780)
						{
							HX_STACK_LINE(780)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(780)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(780)
							::flixel::util::FlxPool_flixel_math_FlxPoint tmp76 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(780)
							::flixel::math::FlxPoint tmp77 = tmp76->get();		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(780)
							Float tmp78 = X;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(780)
							Float tmp79 = Y;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(780)
							::flixel::math::FlxPoint tmp80 = tmp77->set(tmp78,tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(780)
							::flixel::math::FlxPoint point = tmp80;		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(780)
							point->_inPool = false;
							HX_STACK_LINE(780)
							tmp75 = point;
						}
						HX_STACK_LINE(780)
						Result = tmp75;
					}
					HX_STACK_LINE(783)
					Float tmp75 = rx;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(783)
					Float tmp76 = ry;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(783)
					Result->set(tmp75,tmp76);
					HX_STACK_LINE(784)
					return false;
				}
				HX_STACK_LINE(787)
				return true;
			}
			HX_STACK_LINE(789)
			(i)++;
		}
		HX_STACK_LINE(792)
		return true;
	}
}


::flixel::FlxSprite FlxTilemap_obj::tileToSprite( int X,int Y,hx::Null< int >  __o_NewTile,Dynamic SpriteFactory){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tileToSprite",0xe7482ef2,"flixel.tile.FlxTilemap.tileToSprite","flixel/tile/FlxTilemap.hx",806,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(NewTile,"NewTile")
	HX_STACK_ARG(SpriteFactory,"SpriteFactory")
{
		HX_STACK_LINE(807)
		bool tmp = (SpriteFactory == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		if ((tmp)){
			HX_STACK_LINE(809)
			Dynamic tmp1 = this->defaultTileToSprite_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(809)
			SpriteFactory = tmp1;
		}
		HX_STACK_LINE(812)
		int tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		int tmp2 = Y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(812)
		int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(812)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(812)
		int tmp5 = (tmp1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(812)
		int rowIndex = tmp5;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(813)
		int tmp6 = this->_data->__get(rowIndex);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(813)
		::flixel::tile::FlxTile tmp7 = this->_tileObjects->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(813)
		::flixel::tile::FlxTile tile = tmp7;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(814)
		::flixel::graphics::frames::FlxImageFrame image = null();		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(816)
		bool tmp8 = (tile != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(816)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(816)
		if ((tmp8)){
			HX_STACK_LINE(816)
			tmp9 = tile->visible;
		}
		else{
			HX_STACK_LINE(816)
			tmp9 = false;
		}
		HX_STACK_LINE(816)
		if ((tmp9)){
			HX_STACK_LINE(818)
			::flixel::graphics::frames::FlxFrame tmp10 = tile->frame;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(818)
			::flixel::graphics::frames::FlxImageFrame tmp11 = ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(818)
			image = tmp11;
		}
		else{
			HX_STACK_LINE(822)
			::flixel::graphics::FlxGraphic tmp10 = this->graphic;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(822)
			::flixel::math::FlxRect tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(822)
			{
				HX_STACK_LINE(822)
				::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(822)
				{
					HX_STACK_LINE(822)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp13 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(822)
					::flixel::math::FlxRect tmp14 = tmp13->get();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(822)
					::flixel::math::FlxRect _this = tmp14;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(822)
					_this->x = (int)0;
					HX_STACK_LINE(822)
					_this->y = (int)0;
					HX_STACK_LINE(822)
					int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(822)
					_this->width = tmp15;
					HX_STACK_LINE(822)
					int tmp16 = this->_tileHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(822)
					_this->height = tmp16;
					HX_STACK_LINE(822)
					tmp12 = _this;
				}
				HX_STACK_LINE(822)
				::flixel::math::FlxRect rect = tmp12;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(822)
				rect->_inPool = false;
				HX_STACK_LINE(822)
				tmp11 = rect;
			}
			HX_STACK_LINE(822)
			::flixel::graphics::frames::FlxImageFrame tmp12 = ::flixel::graphics::frames::FlxImageFrame_obj::fromEmptyFrame(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(822)
			image = tmp12;
		}
		HX_STACK_LINE(825)
		int tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(825)
		int tmp11 = this->_tileWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(825)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(825)
		::flixel::math::FlxPoint tmp13 = this->scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(825)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(825)
		Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(825)
		Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(825)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(825)
		Float tileX = tmp17;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(826)
		int tmp18 = Y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(826)
		int tmp19 = this->_tileHeight;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(826)
		int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(826)
		::flixel::math::FlxPoint tmp21 = this->scale;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(826)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(826)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(826)
		Float tmp24 = this->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(826)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(826)
		Float tileY = tmp25;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(827)
		::flixel::graphics::frames::FlxImageFrame tmp26 = image;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(827)
		Float tmp27 = tileX;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(827)
		Float tmp28 = tileY;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(827)
		::flixel::math::FlxPoint tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(827)
		{
			HX_STACK_LINE(827)
			::flixel::math::FlxPoint tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(827)
			{
				HX_STACK_LINE(827)
				Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
				HX_STACK_LINE(827)
				Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
				HX_STACK_LINE(827)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp31 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(827)
				::flixel::math::FlxPoint tmp32 = tmp31->get();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(827)
				Float tmp33 = X1;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(827)
				Float tmp34 = Y1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(827)
				::flixel::math::FlxPoint tmp35 = tmp32->set(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(827)
				::flixel::math::FlxPoint point = tmp35;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(827)
				point->_inPool = false;
				HX_STACK_LINE(827)
				tmp30 = point;
			}
			HX_STACK_LINE(827)
			::flixel::math::FlxPoint _this = tmp30;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(827)
			::flixel::math::FlxPoint tmp31 = this->scale;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(827)
			::flixel::math::FlxPoint point = tmp31;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(827)
			Float tmp32 = point->x;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(827)
			_this->set_x(tmp32);
			HX_STACK_LINE(827)
			Float tmp33 = point->y;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(827)
			_this->set_y(tmp33);
			HX_STACK_LINE(827)
			{
				HX_STACK_LINE(827)
				bool tmp34 = point->_weak;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(827)
				if ((tmp34)){
					HX_STACK_LINE(827)
					point->put();
				}
			}
			HX_STACK_LINE(827)
			tmp29 = _this;
		}
		HX_STACK_LINE(827)
		Float tmp30 = this->alpha;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(827)
		::openfl::_legacy::display::BlendMode tmp31 = this->blend;		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp28,::flixel::graphics::frames::FlxImageFrame &tmp26,::openfl::_legacy::display::BlendMode &tmp31,Float &tmp27,::flixel::math::FlxPoint &tmp29,Float &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",827,0x448feb74)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74") , tmp26,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp27,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp28,false);
					__result->Add(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78") , tmp29,false);
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , tmp30,false);
					__result->Add(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4") , tmp31,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(827)
		Dynamic tmp32 = _Function_1_1::Block(tmp28,tmp26,tmp31,tmp27,tmp29,tmp30);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(827)
		::flixel::FlxSprite tmp33 = SpriteFactory(tmp32).Cast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(827)
		::flixel::FlxSprite tileSprite = tmp33;		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(829)
		bool tmp34 = (NewTile >= (int)0);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(829)
		if ((tmp34)){
			HX_STACK_LINE(831)
			int tmp35 = X;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(831)
			int tmp36 = Y;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(831)
			int tmp37 = NewTile;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(831)
			this->setTile(tmp35,tmp36,tmp37,null());
		}
		HX_STACK_LINE(834)
		::flixel::FlxSprite tmp35 = tileSprite;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(834)
		return tmp35;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,tileToSprite,return )

Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",841,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(842)
		this->_buffers = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
		HX_STACK_LINE(843)
		this->_buffers = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",853,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Buffer,"Buffer")
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(854)
		Float tmp = this->alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(854)
		bool tmp1 = (tmp != (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(854)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(854)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(854)
		if ((tmp2)){
			HX_STACK_LINE(854)
			int tmp4 = this->color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(854)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(854)
			tmp3 = (tmp5 != (int)16777215);
		}
		else{
			HX_STACK_LINE(854)
			tmp3 = true;
		}
		HX_STACK_LINE(854)
		bool isColored = tmp3;		HX_STACK_VAR(isColored,"isColored");
		HX_STACK_LINE(857)
		Float drawX = (int)0;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(858)
		Float drawY = (int)0;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(859)
		Float scaledWidth = (int)0;		HX_STACK_VAR(scaledWidth,"scaledWidth");
		HX_STACK_LINE(860)
		Float scaledHeight = (int)0;		HX_STACK_VAR(scaledHeight,"scaledHeight");
		HX_STACK_LINE(861)
		::flixel::graphics::tile::FlxDrawTilesItem drawItem = null();		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(863)
		bool tmp4 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(863)
		if ((tmp4)){
			HX_STACK_LINE(865)
			Buffer->fill(null());
		}
		else{
			HX_STACK_LINE(869)
			{
				HX_STACK_LINE(869)
				::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(869)
				::flixel::FlxCamera tmp6 = Camera;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(869)
				::flixel::math::FlxPoint tmp7 = this->getScreenPosition(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(869)
				::flixel::math::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(869)
				::flixel::math::FlxPoint tmp9 = tmp7->subtractPoint(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(869)
				::flixel::math::FlxPoint _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(869)
				::openfl::_legacy::geom::Point tmp10 = this->_helperPoint;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(869)
				::openfl::_legacy::geom::Point FlashPoint = tmp10;		HX_STACK_VAR(FlashPoint,"FlashPoint");
				HX_STACK_LINE(869)
				bool tmp11 = (FlashPoint == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(869)
				if ((tmp11)){
					HX_STACK_LINE(869)
					::openfl::_legacy::geom::Point tmp12 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(869)
					FlashPoint = tmp12;
				}
				HX_STACK_LINE(869)
				FlashPoint->x = _this->x;
				HX_STACK_LINE(869)
				FlashPoint->y = _this->y;
				HX_STACK_LINE(869)
				FlashPoint;
			}
			HX_STACK_LINE(871)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(871)
			bool tmp6 = this->isPixelPerfectRender(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(871)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(871)
			if ((tmp6)){
				HX_STACK_LINE(871)
				::openfl::_legacy::geom::Point tmp8 = this->_helperPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(871)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(871)
				tmp7 = ::Math_obj::floor(tmp9);
			}
			else{
				HX_STACK_LINE(871)
				::openfl::_legacy::geom::Point tmp8 = this->_helperPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(871)
				tmp7 = tmp8->x;
			}
			HX_STACK_LINE(871)
			::openfl::_legacy::geom::Point tmp8 = this->_helperPoint;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(871)
			tmp8->x = tmp7;
			HX_STACK_LINE(872)
			::flixel::FlxCamera tmp9 = Camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(872)
			bool tmp10 = this->isPixelPerfectRender(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(872)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(872)
			if ((tmp10)){
				HX_STACK_LINE(872)
				::openfl::_legacy::geom::Point tmp12 = this->_helperPoint;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(872)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(872)
				tmp11 = ::Math_obj::floor(tmp13);
			}
			else{
				HX_STACK_LINE(872)
				::openfl::_legacy::geom::Point tmp12 = this->_helperPoint;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(872)
				tmp11 = tmp12->y;
			}
			HX_STACK_LINE(872)
			::openfl::_legacy::geom::Point tmp12 = this->_helperPoint;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(872)
			tmp12->y = tmp11;
			HX_STACK_LINE(874)
			Float tmp13 = this->_scaledTileWidth;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(874)
			scaledWidth = tmp13;
			HX_STACK_LINE(875)
			Float tmp14 = this->_scaledTileHeight;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(875)
			scaledHeight = tmp14;
			HX_STACK_LINE(877)
			::openfl::_legacy::geom::ColorTransform tmp15 = this->colorTransform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(877)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(877)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(877)
			if ((tmp16)){
				HX_STACK_LINE(877)
				::openfl::_legacy::geom::ColorTransform tmp18 = this->colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(877)
				::openfl::_legacy::geom::ColorTransform tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(877)
				::openfl::_legacy::geom::ColorTransform tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(877)
				tmp17 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp20);
			}
			else{
				HX_STACK_LINE(877)
				tmp17 = false;
			}
			HX_STACK_LINE(877)
			bool hasColorOffsets = tmp17;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
			HX_STACK_LINE(878)
			::flixel::graphics::FlxGraphic tmp18 = this->graphic;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(878)
			bool tmp19 = isColored;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(878)
			bool tmp20 = hasColorOffsets;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(878)
			::openfl::_legacy::display::BlendMode tmp21 = this->blend;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(878)
			::flixel::graphics::tile::FlxDrawTilesItem tmp22 = Camera->startQuadBatch(tmp18,tmp19,tmp20,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(878)
			drawItem = tmp22;
		}
		HX_STACK_LINE(882)
		::flixel::math::FlxPoint tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(882)
		Float tmp6 = Camera->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(882)
		::flixel::math::FlxPoint tmp7 = this->scrollFactor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(882)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(882)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(882)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(882)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(882)
		::flixel::math::FlxPoint tmp12 = this->offset;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(882)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(882)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(882)
		tmp5->set_x(tmp14);
		HX_STACK_LINE(883)
		::flixel::math::FlxPoint tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(883)
		Float tmp16 = Camera->scroll->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(883)
		::flixel::math::FlxPoint tmp17 = this->scrollFactor;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(883)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(883)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(883)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(883)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(883)
		::flixel::math::FlxPoint tmp22 = this->offset;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(883)
		Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(883)
		Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(883)
		tmp15->set_y(tmp24);
		HX_STACK_LINE(885)
		::flixel::math::FlxPoint tmp25 = this->_point;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(885)
		Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(885)
		Float tmp27 = this->_scaledTileWidth;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(885)
		Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(885)
		int tmp29 = ::Math_obj::floor(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(885)
		int screenXInTiles = tmp29;		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(886)
		::flixel::math::FlxPoint tmp30 = this->_point;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(886)
		Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(886)
		Float tmp32 = this->_scaledTileHeight;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(886)
		Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(886)
		int tmp34 = ::Math_obj::floor(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(886)
		int screenYInTiles = tmp34;		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(887)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(888)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(891)
		Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(891)
		{
			HX_STACK_LINE(891)
			int tmp36 = this->widthInTiles;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(891)
			int tmp37 = screenColumns;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(891)
			int tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(891)
			Dynamic Max = tmp38;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(891)
			bool tmp39 = true;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(891)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(891)
			if ((tmp39)){
				HX_STACK_LINE(891)
				tmp40 = (screenXInTiles < (int)0);
			}
			else{
				HX_STACK_LINE(891)
				tmp40 = false;
			}
			HX_STACK_LINE(891)
			Float tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(891)
			if ((tmp40)){
				HX_STACK_LINE(891)
				tmp41 = (int)0;
			}
			else{
				HX_STACK_LINE(891)
				tmp41 = screenXInTiles;
			}
			HX_STACK_LINE(891)
			Float lowerBound = tmp41;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(891)
			bool tmp42 = (Max != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(891)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(891)
			if ((tmp42)){
				HX_STACK_LINE(891)
				tmp43 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(891)
				tmp43 = false;
			}
			HX_STACK_LINE(891)
			if ((tmp43)){
				HX_STACK_LINE(891)
				tmp35 = Max;
			}
			else{
				HX_STACK_LINE(891)
				tmp35 = lowerBound;
			}
		}
		HX_STACK_LINE(891)
		int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(891)
		screenXInTiles = tmp36;
		HX_STACK_LINE(892)
		Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(892)
		{
			HX_STACK_LINE(892)
			int tmp38 = this->heightInTiles;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(892)
			int tmp39 = screenRows;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(892)
			int tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(892)
			Dynamic Max = tmp40;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(892)
			bool tmp41 = true;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(892)
			bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(892)
			if ((tmp41)){
				HX_STACK_LINE(892)
				tmp42 = (screenYInTiles < (int)0);
			}
			else{
				HX_STACK_LINE(892)
				tmp42 = false;
			}
			HX_STACK_LINE(892)
			Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(892)
			if ((tmp42)){
				HX_STACK_LINE(892)
				tmp43 = (int)0;
			}
			else{
				HX_STACK_LINE(892)
				tmp43 = screenYInTiles;
			}
			HX_STACK_LINE(892)
			Float lowerBound = tmp43;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(892)
			bool tmp44 = (Max != null());		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(892)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(892)
			if ((tmp44)){
				HX_STACK_LINE(892)
				tmp45 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(892)
				tmp45 = false;
			}
			HX_STACK_LINE(892)
			if ((tmp45)){
				HX_STACK_LINE(892)
				tmp37 = Max;
			}
			else{
				HX_STACK_LINE(892)
				tmp37 = lowerBound;
			}
		}
		HX_STACK_LINE(892)
		int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(892)
		screenYInTiles = tmp38;
		HX_STACK_LINE(894)
		int tmp39 = screenYInTiles;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(894)
		int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(894)
		int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(894)
		int tmp42 = screenXInTiles;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(894)
		int tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(894)
		int rowIndex = tmp43;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(895)
		::openfl::_legacy::geom::Point tmp44 = this->_flashPoint;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(895)
		tmp44->y = (int)0;
		HX_STACK_LINE(896)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(897)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(898)
		::flixel::graphics::frames::FlxFrame frame;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(904)
		{
			HX_STACK_LINE(904)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(904)
			while((true)){
				HX_STACK_LINE(904)
				bool tmp45 = (_g < screenRows);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(904)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(904)
				if ((tmp46)){
					HX_STACK_LINE(904)
					break;
				}
				HX_STACK_LINE(904)
				int tmp47 = (_g)++;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(904)
				int row = tmp47;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(906)
				columnIndex = rowIndex;
				HX_STACK_LINE(907)
				::openfl::_legacy::geom::Point tmp48 = this->_flashPoint;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(907)
				tmp48->x = (int)0;
				HX_STACK_LINE(909)
				{
					HX_STACK_LINE(909)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(909)
					while((true)){
						HX_STACK_LINE(909)
						bool tmp49 = (_g1 < screenColumns);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(909)
						bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(909)
						if ((tmp50)){
							HX_STACK_LINE(909)
							break;
						}
						HX_STACK_LINE(909)
						int tmp51 = (_g1)++;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(909)
						int column = tmp51;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(911)
						int tmp52 = this->_data->__get(columnIndex);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(911)
						::flixel::tile::FlxTile tmp53 = this->_tileObjects->__GetItem(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(911)
						tile = tmp53;
						HX_STACK_LINE(913)
						bool tmp54 = (tile != null());		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(913)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(913)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(913)
						if ((tmp55)){
							HX_STACK_LINE(913)
							tmp56 = tile->visible;
						}
						else{
							HX_STACK_LINE(913)
							tmp56 = false;
						}
						HX_STACK_LINE(913)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(913)
						if ((tmp56)){
							HX_STACK_LINE(913)
							int tmp58 = tile->frame->type;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(913)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(913)
							tmp57 = (tmp59 != (int)2);
						}
						else{
							HX_STACK_LINE(913)
							tmp57 = false;
						}
						HX_STACK_LINE(913)
						if ((tmp57)){
							HX_STACK_LINE(915)
							frame = tile->frame;
							HX_STACK_LINE(917)
							bool tmp58 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(917)
							if ((tmp58)){
								HX_STACK_LINE(919)
								::openfl::_legacy::display::BitmapData tmp59 = Buffer->pixels;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(919)
								::openfl::_legacy::geom::Point tmp60 = this->_flashPoint;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(919)
								frame->paint(tmp59,tmp60,true,null());
							}
							else{
								HX_STACK_LINE(948)
								::openfl::_legacy::geom::Point tmp59 = this->_helperPoint;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(948)
								Float tmp60 = tmp59->x;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(948)
								int tmp61 = columnIndex;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(948)
								int tmp62 = this->widthInTiles;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(948)
								int tmp63 = hx::Mod(tmp61,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(948)
								Float tmp64 = scaledWidth;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(948)
								Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(948)
								Float tmp66 = (tmp60 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(948)
								drawX = tmp66;
								HX_STACK_LINE(949)
								::openfl::_legacy::geom::Point tmp67 = this->_helperPoint;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(949)
								Float tmp68 = tmp67->y;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(949)
								int tmp69 = columnIndex;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(949)
								int tmp70 = this->widthInTiles;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(949)
								Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(949)
								int tmp72 = ::Math_obj::floor(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(949)
								Float tmp73 = scaledHeight;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(949)
								Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(949)
								Float tmp75 = (tmp68 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(949)
								drawY = tmp75;
								HX_STACK_LINE(951)
								::flixel::math::FlxMatrix tmp76 = this->_matrix;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(951)
								tmp76->identity();
								HX_STACK_LINE(953)
								bool tmp77 = (frame->angle != (int)0);		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(953)
								if ((tmp77)){
									HX_STACK_LINE(955)
									::flixel::math::FlxMatrix tmp78 = this->_matrix;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(955)
									frame->prepareMatrix(tmp78,null(),null(),null());
								}
								HX_STACK_LINE(958)
								::flixel::math::FlxPoint tmp78 = this->scale;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(958)
								Float scaleX = tmp78->x;		HX_STACK_VAR(scaleX,"scaleX");
								HX_STACK_LINE(959)
								::flixel::math::FlxPoint tmp79 = this->scale;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(959)
								Float scaleY = tmp79->y;		HX_STACK_VAR(scaleY,"scaleY");
								HX_STACK_LINE(961)
								bool tmp80 = this->useScaleHack;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(961)
								if ((tmp80)){
									HX_STACK_LINE(963)
									Float tmp81 = frame->sourceSize->x;		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(963)
									Float tmp82 = Camera->totalScaleX;		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(963)
									Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(963)
									Float tmp84 = (Float((int)1) / Float(tmp83));		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(963)
									hx::AddEq(scaleX,tmp84);
									HX_STACK_LINE(964)
									Float tmp85 = frame->sourceSize->y;		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(964)
									Float tmp86 = Camera->totalScaleY;		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(964)
									Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(964)
									Float tmp88 = (Float((int)1) / Float(tmp87));		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(964)
									hx::AddEq(scaleY,tmp88);
								}
								HX_STACK_LINE(967)
								::flixel::math::FlxMatrix tmp81 = this->_matrix;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(967)
								Float tmp82 = scaleX;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(967)
								Float tmp83 = scaleY;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(967)
								tmp81->scale(tmp82,tmp83);
								HX_STACK_LINE(968)
								::flixel::math::FlxMatrix tmp84 = this->_matrix;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(968)
								Float tmp85 = drawX;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(968)
								Float tmp86 = drawY;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(968)
								tmp84->translate(tmp85,tmp86);
								HX_STACK_LINE(970)
								::flixel::graphics::frames::FlxFrame tmp87 = frame;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(970)
								::flixel::math::FlxMatrix tmp88 = this->_matrix;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(970)
								::openfl::_legacy::geom::ColorTransform tmp89 = this->colorTransform;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(970)
								drawItem->addQuad(tmp87,tmp88,tmp89);
							}
						}
						HX_STACK_LINE(974)
						bool tmp58 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(974)
						if ((tmp58)){
							HX_STACK_LINE(976)
							int tmp59 = this->_tileWidth;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(976)
							::openfl::_legacy::geom::Point tmp60 = this->_flashPoint;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(976)
							hx::AddEq(tmp60->x,tmp59);
						}
						HX_STACK_LINE(978)
						(columnIndex)++;
					}
				}
				HX_STACK_LINE(981)
				bool tmp49 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(981)
				if ((tmp49)){
					HX_STACK_LINE(983)
					int tmp50 = this->_tileHeight;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(983)
					::openfl::_legacy::geom::Point tmp51 = this->_flashPoint;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(983)
					hx::AddEq(tmp51->y,tmp50);
				}
				HX_STACK_LINE(985)
				int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(985)
				hx::AddEq(rowIndex,tmp50);
			}
		}
		HX_STACK_LINE(988)
		int tmp45 = screenXInTiles;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(988)
		Float tmp46 = this->_scaledTileWidth;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(988)
		Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(988)
		Buffer->x = tmp47;
		HX_STACK_LINE(989)
		int tmp48 = screenYInTiles;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(989)
		Float tmp49 = this->_scaledTileHeight;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(989)
		Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(989)
		Buffer->y = tmp50;
		HX_STACK_LINE(991)
		bool tmp51 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(991)
		if ((tmp51)){
			HX_STACK_LINE(993)
			bool tmp52 = isColored;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(993)
			if ((tmp52)){
				HX_STACK_LINE(995)
				::openfl::_legacy::geom::ColorTransform tmp53 = this->colorTransform;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(995)
				Buffer->colorTransform(tmp53);
			}
			HX_STACK_LINE(997)
			::openfl::_legacy::display::BlendMode tmp53 = this->blend;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(997)
			Buffer->blend = tmp53;
		}
		HX_STACK_LINE(1000)
		Buffer->dirty = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",1038,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(1039)
		::flixel::tile::FlxTile tmp = this->_tileObjects->__GetItem(Index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1039)
		::flixel::tile::FlxTile tile = tmp;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1041)
		bool tmp1 = (tile == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1041)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1041)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1041)
		if ((tmp2)){
			HX_STACK_LINE(1041)
			bool tmp4 = tile->visible;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1041)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1041)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(1041)
			tmp3 = true;
		}
		HX_STACK_LINE(1041)
		if ((tmp3)){
			HX_STACK_LINE(1043)
			return null();
		}
		HX_STACK_LINE(1046)
		::flixel::graphics::frames::FlxFramesCollection tmp4 = this->frames;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1046)
		int tmp5 = Index;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1046)
		int tmp6 = this->_startingIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1046)
		int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1046)
		::flixel::graphics::frames::FlxFrame tmp8 = tmp4->frames->__get(tmp7).StaticCast< ::flixel::graphics::frames::FlxFrame >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1046)
		tile->frame = tmp8;
	}
return null();
}


::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",1050,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(1051)
	int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1051)
	int tmp1 = this->_tileHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1051)
	int tmp2 = this->widthInTiles;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1051)
	int tmp3 = this->heightInTiles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1051)
	::flixel::FlxCamera tmp4 = camera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1051)
	::flixel::math::FlxPoint tmp5 = this->scale;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1051)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1051)
	::flixel::math::FlxPoint tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1051)
	Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1051)
	::flixel::tile::FlxTilemapBuffer tmp9 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1051)
	::flixel::tile::FlxTilemapBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(1052)
	Dynamic tmp10 = this->pixelPerfectRender;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1052)
	buffer->pixelPerfectRender = tmp10;
	HX_STACK_LINE(1053)
	::flixel::tile::FlxTilemapBuffer tmp11 = buffer;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1053)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

Void FlxTilemap_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onGameResize",0x47562b49,"flixel.tile.FlxTilemap.onGameResize","flixel/tile/FlxTilemap.hx",1060,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(1061)
		::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1061)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1061)
		if ((tmp1)){
			HX_STACK_LINE(1062)
			return null();
		}
		HX_STACK_LINE(1064)
		{
			HX_STACK_LINE(1064)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1064)
			int tmp2 = this->get_cameras()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1064)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1064)
			while((true)){
				HX_STACK_LINE(1064)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1064)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1064)
				if ((tmp4)){
					HX_STACK_LINE(1064)
					break;
				}
				HX_STACK_LINE(1064)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1064)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1066)
				::flixel::FlxCamera tmp6 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1066)
				::flixel::FlxCamera camera = tmp6;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(1067)
				::flixel::tile::FlxTilemapBuffer tmp7 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1067)
				::flixel::tile::FlxTilemapBuffer buffer = tmp7;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1070)
				::flixel::tile::FlxTilemapBuffer tmp8 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1070)
				int tmp9 = this->_tileWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1070)
				int tmp10 = this->widthInTiles;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1070)
				::flixel::math::FlxPoint tmp11 = this->scale;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1070)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1070)
				::flixel::FlxCamera tmp13 = camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1070)
				tmp8->updateColumns(tmp9,tmp10,tmp12,tmp13);
				HX_STACK_LINE(1071)
				::flixel::tile::FlxTilemapBuffer tmp14 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1071)
				int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1071)
				int tmp16 = this->heightInTiles;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1071)
				::flixel::math::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1071)
				Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1071)
				::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1071)
				tmp14->updateRows(tmp15,tmp16,tmp18,tmp19);
				HX_STACK_LINE(1074)
				bool tmp20 = (buffer == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1074)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1074)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1074)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1074)
				if ((tmp22)){
					HX_STACK_LINE(1074)
					::flixel::tile::FlxTilemapBuffer tmp24 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1074)
					::flixel::tile::FlxTilemapBuffer tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1074)
					::flixel::tile::FlxTilemapBuffer tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1074)
					int tmp27 = tmp26->columns;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1074)
					int tmp28 = buffer->columns;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1074)
					tmp23 = (tmp27 != tmp28);
				}
				else{
					HX_STACK_LINE(1074)
					tmp23 = true;
				}
				HX_STACK_LINE(1074)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1074)
				bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1074)
				if ((tmp24)){
					HX_STACK_LINE(1074)
					::flixel::tile::FlxTilemapBuffer tmp26 = ::flixel::tile::FlxTilemap_obj::_helperBuffer;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1074)
					::flixel::tile::FlxTilemapBuffer tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1074)
					int tmp28 = tmp27->rows;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1074)
					int tmp29 = buffer->rows;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1074)
					tmp25 = (tmp28 != tmp29);
				}
				else{
					HX_STACK_LINE(1074)
					tmp25 = true;
				}
				HX_STACK_LINE(1074)
				if ((tmp25)){
					HX_STACK_LINE(1076)
					bool tmp26 = (buffer != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1076)
					if ((tmp26)){
						HX_STACK_LINE(1077)
						buffer->destroy();
					}
					HX_STACK_LINE(1079)
					::flixel::tile::FlxTilemapBuffer tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1079)
					{
						HX_STACK_LINE(1079)
						int tmp28 = this->_tileWidth;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1079)
						int tmp29 = this->_tileHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1079)
						int tmp30 = this->widthInTiles;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1079)
						int tmp31 = this->heightInTiles;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1079)
						::flixel::FlxCamera tmp32 = camera;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1079)
						::flixel::math::FlxPoint tmp33 = this->scale;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1079)
						Float tmp34 = tmp33->x;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1079)
						::flixel::math::FlxPoint tmp35 = this->scale;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(1079)
						Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(1079)
						::flixel::tile::FlxTilemapBuffer tmp37 = ::flixel::tile::FlxTilemapBuffer_obj::__new(tmp28,tmp29,tmp30,tmp31,tmp32,tmp34,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(1079)
						::flixel::tile::FlxTilemapBuffer buffer1 = tmp37;		HX_STACK_VAR(buffer1,"buffer1");
						HX_STACK_LINE(1079)
						Dynamic tmp38 = this->pixelPerfectRender;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(1079)
						buffer1->pixelPerfectRender = tmp38;
						HX_STACK_LINE(1079)
						tmp27 = buffer1;
					}
					HX_STACK_LINE(1079)
					this->_buffers[i] = tmp27;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResize,(void))

::flixel::graphics::FlxGraphic FlxTilemap_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_graphic",0xa0b86087,"flixel.tile.FlxTilemap.set_graphic","flixel/tile/FlxTilemap.hx",1103,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1105)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1105)
	::flixel::graphics::FlxGraphic tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1105)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1105)
	if ((tmp2)){
		HX_STACK_LINE(1108)
		bool tmp3 = (Value != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1108)
		if ((tmp3)){
			HX_STACK_LINE(1110)
			::flixel::graphics::FlxGraphic _g = Value;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1110)
			int tmp4 = _g->get_useCount();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1110)
			int _g1 = tmp4;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1110)
			int tmp5 = (_g1 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1110)
			_g->set_useCount(tmp5);
			HX_STACK_LINE(1110)
			_g1;
		}
		HX_STACK_LINE(1113)
		::flixel::graphics::FlxGraphic tmp4 = this->graphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1113)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1113)
		if ((tmp5)){
			HX_STACK_LINE(1115)
			::flixel::graphics::FlxGraphic tmp6 = this->graphic;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1115)
			::flixel::graphics::FlxGraphic _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1115)
			int tmp7 = _g->get_useCount();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1115)
			int _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1115)
			int tmp8 = (_g1 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1115)
			_g->set_useCount(tmp8);
			HX_STACK_LINE(1115)
			_g1;
		}
	}
	HX_STACK_LINE(1119)
	::flixel::graphics::FlxGraphic tmp3 = this->graphic = Value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1119)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_graphic,return )

bool FlxTilemap_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",1123,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1124)
	bool tmp = (this->_buffers != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1124)
	if ((tmp)){
		HX_STACK_LINE(1126)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1126)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1126)
		while((true)){
			HX_STACK_LINE(1126)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1126)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1126)
			if ((tmp2)){
				HX_STACK_LINE(1126)
				break;
			}
			HX_STACK_LINE(1126)
			::flixel::tile::FlxTilemapBuffer tmp3 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1126)
			::flixel::tile::FlxTilemapBuffer buffer = tmp3;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(1126)
			++(_g);
			HX_STACK_LINE(1128)
			buffer->pixelPerfectRender = Value;
		}
	}
	HX_STACK_LINE(1132)
	Dynamic tmp1 = this->pixelPerfectRender = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1132)
	return tmp1;
}


Float FlxTilemap_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_alpha",0xecd0277d,"flixel.tile.FlxTilemap.set_alpha","flixel/tile/FlxTilemap.hx",1136,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1137)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1137)
	{
		HX_STACK_LINE(1137)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1137)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1137)
		if ((tmp1)){
			HX_STACK_LINE(1137)
			tmp2 = (Alpha < (int)0);
		}
		else{
			HX_STACK_LINE(1137)
			tmp2 = false;
		}
		HX_STACK_LINE(1137)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1137)
		if ((tmp2)){
			HX_STACK_LINE(1137)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(1137)
			tmp3 = Alpha;
		}
		HX_STACK_LINE(1137)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1137)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1137)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1137)
		if ((tmp4)){
			HX_STACK_LINE(1137)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(1137)
			tmp5 = false;
		}
		HX_STACK_LINE(1137)
		if ((tmp5)){
			HX_STACK_LINE(1137)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(1137)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1137)
	this->alpha = ((Float)(tmp));
	HX_STACK_LINE(1138)
	this->updateColorTransform();
	HX_STACK_LINE(1139)
	Float tmp1 = this->alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1139)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_alpha,return )

int FlxTilemap_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_color",0x1595f182,"flixel.tile.FlxTilemap.set_color","flixel/tile/FlxTilemap.hx",1143,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1144)
	int tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1144)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1144)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1144)
	if ((tmp2)){
		HX_STACK_LINE(1146)
		int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1146)
		return tmp3;
	}
	HX_STACK_LINE(1148)
	this->color = Color;
	HX_STACK_LINE(1149)
	this->updateColorTransform();
	HX_STACK_LINE(1150)
	int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1150)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_color,return )

Void FlxTilemap_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateColorTransform",0x6f14b936,"flixel.tile.FlxTilemap.updateColorTransform","flixel/tile/FlxTilemap.hx",1154,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1155)
		::openfl::_legacy::geom::ColorTransform tmp = this->colorTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1155)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1155)
		if ((tmp1)){
			HX_STACK_LINE(1156)
			::openfl::_legacy::geom::ColorTransform tmp2 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1156)
			this->colorTransform = tmp2;
		}
		HX_STACK_LINE(1158)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1158)
		bool tmp3 = (tmp2 != (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1158)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1158)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1158)
		if ((tmp4)){
			HX_STACK_LINE(1158)
			int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1158)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1158)
			tmp5 = (tmp7 != (int)16777215);
		}
		else{
			HX_STACK_LINE(1158)
			tmp5 = true;
		}
		HX_STACK_LINE(1158)
		if ((tmp5)){
			HX_STACK_LINE(1160)
			int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1160)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1160)
			int tmp8 = (int(tmp7) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1160)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1160)
			Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1160)
			::openfl::_legacy::geom::ColorTransform tmp11 = this->colorTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1160)
			tmp11->redMultiplier = tmp10;
			HX_STACK_LINE(1161)
			int tmp12 = this->color;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1161)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1161)
			int tmp14 = (int(tmp13) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1161)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1161)
			Float tmp16 = (Float(tmp15) / Float((int)255));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1161)
			::openfl::_legacy::geom::ColorTransform tmp17 = this->colorTransform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1161)
			tmp17->greenMultiplier = tmp16;
			HX_STACK_LINE(1162)
			int tmp18 = this->color;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1162)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1162)
			int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1162)
			Float tmp21 = (Float(tmp20) / Float((int)255));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1162)
			::openfl::_legacy::geom::ColorTransform tmp22 = this->colorTransform;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1162)
			tmp22->blueMultiplier = tmp21;
			HX_STACK_LINE(1163)
			Float tmp23 = this->alpha;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1163)
			::openfl::_legacy::geom::ColorTransform tmp24 = this->colorTransform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1163)
			tmp24->alphaMultiplier = tmp23;
		}
		else{
			HX_STACK_LINE(1167)
			::openfl::_legacy::geom::ColorTransform tmp6 = this->colorTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1167)
			tmp6->redMultiplier = (int)1;
			HX_STACK_LINE(1168)
			::openfl::_legacy::geom::ColorTransform tmp7 = this->colorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1168)
			tmp7->greenMultiplier = (int)1;
			HX_STACK_LINE(1169)
			::openfl::_legacy::geom::ColorTransform tmp8 = this->colorTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1169)
			tmp8->blueMultiplier = (int)1;
			HX_STACK_LINE(1170)
			::openfl::_legacy::geom::ColorTransform tmp9 = this->colorTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1170)
			tmp9->alphaMultiplier = (int)1;
		}
		HX_STACK_LINE(1173)
		bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1173)
		if ((tmp6)){
			HX_STACK_LINE(1175)
			this->setDirty(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateColorTransform,(void))

::openfl::_legacy::display::BlendMode FlxTilemap_obj::set_blend( ::openfl::_legacy::display::BlendMode Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_blend",0x802e6870,"flixel.tile.FlxTilemap.set_blend","flixel/tile/FlxTilemap.hx",1180,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1181)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	if ((tmp)){
		HX_STACK_LINE(1183)
		this->setDirty(null());
	}
	HX_STACK_LINE(1185)
	::openfl::_legacy::display::BlendMode tmp1 = this->blend = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_blend,return )

Void FlxTilemap_obj::setScaleXYCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",1189,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1190)
		::flixel::math::FlxPoint tmp = Scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1190)
		this->setScaleXCallback(tmp);
		HX_STACK_LINE(1191)
		::flixel::math::FlxPoint tmp1 = Scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1191)
		this->setScaleYCallback(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

Void FlxTilemap_obj::setScaleXCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",1195,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1196)
		int tmp = this->_tileWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1196)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1196)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1196)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1196)
		this->_scaledTileWidth = tmp3;
		HX_STACK_LINE(1197)
		int tmp4 = this->widthInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1197)
		Float tmp5 = this->_scaledTileWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1197)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1197)
		this->set_width(tmp6);
		HX_STACK_LINE(1199)
		bool tmp7 = (this->get_cameras() != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1199)
		if ((tmp7)){
			HX_STACK_LINE(1201)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1201)
			int tmp8 = this->get_cameras()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1201)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1201)
			while((true)){
				HX_STACK_LINE(1201)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1201)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1201)
				if ((tmp10)){
					HX_STACK_LINE(1201)
					break;
				}
				HX_STACK_LINE(1201)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1201)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1203)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1203)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1203)
				if ((tmp13)){
					HX_STACK_LINE(1205)
					::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1205)
					int tmp15 = this->_tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1205)
					int tmp16 = this->widthInTiles;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1205)
					::flixel::math::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1205)
					Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1205)
					::flixel::FlxCamera tmp19 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1205)
					tmp14->updateColumns(tmp15,tmp16,tmp18,tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

Void FlxTilemap_obj::setScaleYCallback( ::flixel::math::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",1212,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(1213)
		int tmp = this->_tileHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1213)
		::flixel::math::FlxPoint tmp1 = this->scale;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1213)
		Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1213)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1213)
		this->_scaledTileHeight = tmp3;
		HX_STACK_LINE(1214)
		int tmp4 = this->heightInTiles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1214)
		Float tmp5 = this->_scaledTileHeight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1214)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1214)
		this->set_height(tmp6);
		HX_STACK_LINE(1216)
		bool tmp7 = (this->get_cameras() != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1216)
		if ((tmp7)){
			HX_STACK_LINE(1218)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1218)
			int tmp8 = this->get_cameras()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1218)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1218)
			while((true)){
				HX_STACK_LINE(1218)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1218)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1218)
				if ((tmp10)){
					HX_STACK_LINE(1218)
					break;
				}
				HX_STACK_LINE(1218)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1218)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1220)
				::flixel::tile::FlxTilemapBuffer tmp12 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1220)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1220)
				if ((tmp13)){
					HX_STACK_LINE(1222)
					::flixel::tile::FlxTilemapBuffer tmp14 = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1222)
					int tmp15 = this->_tileHeight;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1222)
					int tmp16 = this->heightInTiles;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1222)
					::flixel::math::FlxPoint tmp17 = this->scale;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1222)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1222)
					::flixel::FlxCamera tmp19 = this->get_cameras()->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1222)
					tmp14->updateRows(tmp15,tmp16,tmp18,tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

::flixel::FlxSprite FlxTilemap_obj::defaultTileToSprite( Dynamic TileProperties){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","defaultTileToSprite",0xb4e0664b,"flixel.tile.FlxTilemap.defaultTileToSprite","flixel/tile/FlxTilemap.hx",1235,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileProperties,"TileProperties")
	HX_STACK_LINE(1236)
	::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(TileProperties->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),TileProperties->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1236)
	::flixel::FlxSprite tileSprite = tmp;		HX_STACK_VAR(tileSprite,"tileSprite");
	HX_STACK_LINE(1237)
	::flixel::graphics::frames::FlxImageFrame tmp1 = TileProperties->__Field(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1237)
	tileSprite->set_frames(tmp1);
	HX_STACK_LINE(1238)
	{
		HX_STACK_LINE(1238)
		::flixel::math::FlxPoint _this = tileSprite->scale;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1238)
		::flixel::math::FlxPoint point = TileProperties->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1238)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1238)
		_this->set_x(tmp2);
		HX_STACK_LINE(1238)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1238)
		_this->set_y(tmp3);
		HX_STACK_LINE(1238)
		{
			HX_STACK_LINE(1238)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1238)
			if ((tmp4)){
				HX_STACK_LINE(1238)
				point->put();
			}
		}
		HX_STACK_LINE(1238)
		_this;
	}
	HX_STACK_LINE(1239)
	::flixel::math::FlxPoint tmp2 = TileProperties->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1239)
	::flixel::math::FlxPoint tmp3 = ::flixel::util::FlxDestroyUtil_obj::put(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1239)
	TileProperties->__FieldRef(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")) = tmp3;
	HX_STACK_LINE(1240)
	Float tmp4 = TileProperties->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1240)
	tileSprite->set_alpha(tmp4);
	HX_STACK_LINE(1241)
	::openfl::_legacy::display::BlendMode tmp5 = TileProperties->__Field(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1241)
	tileSprite->set_blend(tmp5);
	HX_STACK_LINE(1242)
	::flixel::FlxSprite tmp6 = tileSprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1242)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,defaultTileToSprite,return )

int FlxTilemap_obj::set_allowCollisions( int Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_allowCollisions",0x96e24689,"flixel.tile.FlxTilemap.set_allowCollisions","flixel/tile/FlxTilemap.hx",1246,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1247)
	{
		HX_STACK_LINE(1247)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1247)
		Array< ::Dynamic > _g1 = this->_tileObjects;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1247)
		while((true)){
			HX_STACK_LINE(1247)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1247)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1247)
			if ((tmp1)){
				HX_STACK_LINE(1247)
				break;
			}
			HX_STACK_LINE(1247)
			::flixel::tile::FlxTile tmp2 = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1247)
			::flixel::tile::FlxTile tile = tmp2;		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(1247)
			++(_g);
			HX_STACK_LINE(1249)
			int tmp3 = tile->index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1249)
			int tmp4 = this->_collideIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1249)
			bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1249)
			if ((tmp5)){
				HX_STACK_LINE(1250)
				int tmp6 = Value;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1250)
				tile->set_allowCollisions(tmp6);
			}
		}
	}
	HX_STACK_LINE(1252)
	int tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1252)
	int tmp1 = this->super::set_allowCollisions(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1252)
	return tmp1;
}


::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::_helperBuffer;


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	::flixel::tile::FlxBaseTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	::flixel::tile::FlxBaseTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { return useScaleHack; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"tileToSprite") ) { return tileToSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return cacheGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return initTileObjects_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return computeDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return setScaleXCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return setScaleYCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return setScaleXYCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultTileToSprite") ) { return defaultTileToSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return set_allowCollisions_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return getTileIndexByCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return getTileCoordsByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { outValue = _helperBuffer; return true;  }
	}
	return false;
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == hx::paccAlways) return set_blend(inValue);blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == hx::paccAlways) return set_frames(inValue);frames=inValue.Cast< ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == hx::paccAlways) return set_graphic(inValue);graphic=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { useScaleHack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { _helperBuffer=ioValue.Cast< ::flixel::tile::FlxTilemapBuffer >(); return true; }
	}
	return false;
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"));
	outFields->push(HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1"));
	outFields->push(HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39"));
	outFields->push(HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38"));
	outFields->push(HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86"));
	outFields->push(HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxTilemap_obj,useScaleHack),HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFramesCollection*/ ,(int)offsetof(FlxTilemap_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxTilemap_obj,graphic),HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxTilemap_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTilemap_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxTilemap_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemapBuffer*/ ,(void *) &FlxTilemap_obj::_helperBuffer,HX_HCSTRING("_helperBuffer","\xed","\x07","\x9b","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("useScaleHack","\x44","\x9c","\x16","\x98"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_buffers","\xf4","\xfc","\x48","\xeb"),
	HX_HCSTRING("_tileWidth","\xb9","\x8f","\x60","\xb1"),
	HX_HCSTRING("_tileHeight","\xd4","\xaa","\x6c","\x39"),
	HX_HCSTRING("_scaledTileWidth","\x7f","\x28","\x09","\x38"),
	HX_HCSTRING("_scaledTileHeight","\x4e","\xbf","\x49","\x86"),
	HX_HCSTRING("_helperPoint","\x03","\xe6","\x14","\xf8"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"),
	HX_HCSTRING("cacheGraphics","\x2d","\x61","\x95","\xfc"),
	HX_HCSTRING("initTileObjects","\x16","\xbe","\x45","\x2e"),
	HX_HCSTRING("computeDimensions","\xa4","\xa4","\xeb","\xf3"),
	HX_HCSTRING("updateMap","\x13","\xe8","\xdf","\x82"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("setDirty","\x10","\xb9","\x04","\xe8"),
	HX_HCSTRING("overlapsWithCallback","\x17","\xc3","\x72","\xa8"),
	HX_HCSTRING("getTileIndexByCoords","\x03","\x79","\x8b","\x76"),
	HX_HCSTRING("getTileCoordsByIndex","\xb9","\x63","\x25","\xa1"),
	HX_HCSTRING("getTileCoords","\x22","\xd6","\x8d","\x89"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("tileToSprite","\x2e","\xe9","\x26","\xc3"),
	HX_HCSTRING("updateBuffers","\x6a","\x08","\xff","\x7c"),
	HX_HCSTRING("drawTilemap","\x8a","\x34","\xd7","\x8e"),
	HX_HCSTRING("updateTile","\xd7","\xb5","\xb1","\x05"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("onGameResize","\x85","\xe5","\x34","\x23"),
	HX_HCSTRING("set_graphic","\xcb","\xc1","\x6e","\x04"),
	HX_HCSTRING("set_pixelPerfectRender","\x9a","\x4f","\x8f","\xbc"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"),
	HX_HCSTRING("setScaleXYCallback","\x6e","\xfd","\x35","\x90"),
	HX_HCSTRING("setScaleXCallback","\xb5","\x05","\xa2","\x03"),
	HX_HCSTRING("setScaleYCallback","\xb6","\x6e","\x93","\xd6"),
	HX_HCSTRING("defaultTileToSprite","\x8f","\xab","\x7f","\x3f"),
	HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#endif

hx::Class FlxTilemap_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_helperBuffer","\xed","\x07","\x9b","\xf3"),
	::String(null()) };

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemap","\x2a","\xd5","\x63","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemap_obj >;
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

void FlxTilemap_obj::__boot()
{
	_helperBuffer= ::Type_obj::createEmptyInstance(hx::ClassOf< ::flixel::tile::FlxTilemapBuffer >());
}

} // end namespace flixel
} // end namespace tile
