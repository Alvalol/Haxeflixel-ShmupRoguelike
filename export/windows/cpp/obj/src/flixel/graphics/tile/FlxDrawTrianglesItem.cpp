#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxTilesheet
#include <flixel/graphics/tile/FlxTilesheet.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_TriangleCulling
#include <openfl/_legacy/display/TriangleCulling.h>
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
namespace flixel{
namespace graphics{
namespace tile{

Void FlxDrawTrianglesItem_obj::__construct()
{
HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","new",0x8669d929,"flixel.graphics.tile.FlxDrawTrianglesItem.new","flixel/graphics/tile/FlxDrawTrianglesItem.hx",21,0x6492a666)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/tile/FlxDrawTrianglesItem.hx",35,0x6492a666)
			{
				HX_STACK_LINE(35)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(35)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(35)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(35)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(35)
				::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(35)
				{
					HX_STACK_LINE(35)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(35)
					::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(35)
					::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(35)
					_this->x = X;
					HX_STACK_LINE(35)
					_this->y = Y;
					HX_STACK_LINE(35)
					_this->width = Width;
					HX_STACK_LINE(35)
					_this->height = Height;
					HX_STACK_LINE(35)
					tmp = _this;
				}
				HX_STACK_LINE(35)
				::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(35)
				rect->_inPool = false;
				HX_STACK_LINE(35)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(35)
	this->bounds = _Function_1_1::Block();
	HX_STACK_LINE(33)
	this->colorsPosition = (int)0;
	HX_STACK_LINE(32)
	this->indicesPosition = (int)0;
	HX_STACK_LINE(31)
	this->verticesPosition = (int)0;
	HX_STACK_LINE(29)
	this->colors = Array_obj< int >::__new();
	HX_STACK_LINE(28)
	this->uvtData = Array_obj< Float >::__new();
	HX_STACK_LINE(27)
	this->indices = Array_obj< int >::__new();
	HX_STACK_LINE(26)
	this->vertices = Array_obj< Float >::__new();
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES;
}
;
	return null();
}

//FlxDrawTrianglesItem_obj::~FlxDrawTrianglesItem_obj() { }

Dynamic FlxDrawTrianglesItem_obj::__CreateEmpty() { return  new FlxDrawTrianglesItem_obj; }
hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__new()
{  hx::ObjectPtr< FlxDrawTrianglesItem_obj > _result_ = new FlxDrawTrianglesItem_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxDrawTrianglesItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxDrawTrianglesItem_obj > _result_ = new FlxDrawTrianglesItem_obj();
	_result_->__construct();
	return _result_;}

Void FlxDrawTrianglesItem_obj::render( ::flixel::FlxCamera camera){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","render",0xbf64462d,"flixel.graphics.tile.FlxDrawTrianglesItem.render","flixel/graphics/tile/FlxDrawTrianglesItem.hx",44,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(45)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		if ((tmp1)){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(48)
		int tmp2 = this->get_numTriangles();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		if ((tmp3)){
			HX_STACK_LINE(49)
			return null();
		}
		HX_STACK_LINE(51)
		::openfl::_legacy::display::Graphics tmp4 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		::flixel::graphics::FlxGraphic tmp5 = this->graphics;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		::openfl::_legacy::display::BitmapData tmp6 = tmp5->bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		bool tmp7 = camera->antialiasing;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		if ((tmp8)){
			HX_STACK_LINE(51)
			tmp9 = this->antialiasing;
		}
		else{
			HX_STACK_LINE(51)
			tmp9 = true;
		}
		HX_STACK_LINE(51)
		tmp4->beginBitmapFill(tmp6,null(),true,tmp9);
		HX_STACK_LINE(55)
		::openfl::_legacy::display::Graphics tmp10 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		bool tmp11 = this->colored;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		int tmp12 = this->blending;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(55)
		tmp10->drawTriangles(this->vertices,this->indices,this->uvtData,::openfl::_legacy::display::TriangleCulling_obj::NONE,(  ((tmp11)) ? Array< int >(this->colors) : Array< int >(null()) ),tmp12);
		HX_STACK_LINE(57)
		::openfl::_legacy::display::Graphics tmp13 = camera->canvas->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(57)
		tmp13->endFill();
		HX_STACK_LINE(67)
		(::flixel::graphics::tile::FlxTilesheet_obj::_DRAWCALLS)++;
	}
return null();
}


Void FlxDrawTrianglesItem_obj::reset( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","reset",0xa508d6d8,"flixel.graphics.tile.FlxDrawTrianglesItem.reset","flixel/graphics/tile/FlxDrawTrianglesItem.hx",71,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		this->super::reset();
		HX_STACK_LINE(73)
		int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		this->vertices->splice((int)0,tmp);
		HX_STACK_LINE(74)
		int tmp1 = this->indices->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		this->indices->splice((int)0,tmp1);
		HX_STACK_LINE(75)
		int tmp2 = this->uvtData->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		this->uvtData->splice((int)0,tmp2);
		HX_STACK_LINE(76)
		int tmp3 = this->colors->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		this->colors->splice((int)0,tmp3);
		HX_STACK_LINE(78)
		this->verticesPosition = (int)0;
		HX_STACK_LINE(79)
		this->indicesPosition = (int)0;
		HX_STACK_LINE(80)
		this->colorsPosition = (int)0;
	}
return null();
}


Void FlxDrawTrianglesItem_obj::dispose( ){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","dispose",0xf49121e8,"flixel.graphics.tile.FlxDrawTrianglesItem.dispose","flixel/graphics/tile/FlxDrawTrianglesItem.hx",84,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->super::dispose();
		HX_STACK_LINE(87)
		this->vertices = null();
		HX_STACK_LINE(88)
		this->indices = null();
		HX_STACK_LINE(89)
		this->uvtData = null();
		HX_STACK_LINE(90)
		this->colors = null();
		HX_STACK_LINE(91)
		this->bounds = null();
	}
return null();
}


Void FlxDrawTrianglesItem_obj::addTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,Array< int > colors,::flixel::math::FlxPoint position,::flixel::math::FlxRect cameraBounds){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","addTriangles",0xd3f66861,"flixel.graphics.tile.FlxDrawTrianglesItem.addTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",95,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(indices,"indices")
		HX_STACK_ARG(uvtData,"uvtData")
		HX_STACK_ARG(colors,"colors")
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(cameraBounds,"cameraBounds")
		HX_STACK_LINE(96)
		bool tmp = (position == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		if ((tmp)){
			HX_STACK_LINE(97)
			::flixel::math::FlxPoint tmp1 = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::point;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(97)
			::flixel::math::FlxPoint tmp2 = tmp1->set(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			position = tmp2;
		}
		HX_STACK_LINE(99)
		bool tmp1 = (cameraBounds == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(100)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::flixel::math::FlxRect tmp3 = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::rect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(100)
				_this->x = (int)0;
				HX_STACK_LINE(100)
				_this->y = (int)0;
				HX_STACK_LINE(100)
				int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				_this->width = tmp4;
				HX_STACK_LINE(100)
				int tmp5 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				_this->height = tmp5;
				HX_STACK_LINE(100)
				tmp2 = _this;
			}
			HX_STACK_LINE(100)
			cameraBounds = tmp2;
		}
		HX_STACK_LINE(102)
		int verticesLength = vertices->length;		HX_STACK_VAR(verticesLength,"verticesLength");
		HX_STACK_LINE(103)
		int tmp2 = this->vertices->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		int prevVerticesLength = tmp2;		HX_STACK_VAR(prevVerticesLength,"prevVerticesLength");
		HX_STACK_LINE(104)
		Float tmp3 = (Float(verticesLength) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		int numberOfVertices = tmp4;		HX_STACK_VAR(numberOfVertices,"numberOfVertices");
		HX_STACK_LINE(105)
		int tmp5 = this->indices->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		int prevIndicesLength = tmp5;		HX_STACK_VAR(prevIndicesLength,"prevIndicesLength");
		HX_STACK_LINE(106)
		int tmp6 = this->uvtData->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		int prevUVTDataLength = tmp6;		HX_STACK_VAR(prevUVTDataLength,"prevUVTDataLength");
		HX_STACK_LINE(107)
		int tmp7 = this->colors->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		int prevColorsLength = tmp7;		HX_STACK_VAR(prevColorsLength,"prevColorsLength");
		HX_STACK_LINE(108)
		int tmp8 = this->get_numVertices();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		int prevNumberOfVertices = tmp8;		HX_STACK_VAR(prevNumberOfVertices,"prevNumberOfVertices");
		HX_STACK_LINE(110)
		Float tempX;		HX_STACK_VAR(tempX,"tempX");
		HX_STACK_LINE(110)
		Float tempY;		HX_STACK_VAR(tempY,"tempY");
		HX_STACK_LINE(111)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(112)
		int currentVertexPosition = prevVerticesLength;		HX_STACK_VAR(currentVertexPosition,"currentVertexPosition");
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(114)
			bool tmp9 = (i < verticesLength);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			if ((tmp10)){
				HX_STACK_LINE(114)
				break;
			}
			HX_STACK_LINE(116)
			Float tmp11 = position->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			Float tmp12 = vertices->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(116)
			tempX = tmp13;
			HX_STACK_LINE(117)
			Float tmp14 = position->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			int tmp15 = (i + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(117)
			Float tmp16 = vertices->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			tempY = tmp17;
			HX_STACK_LINE(119)
			int tmp18 = (currentVertexPosition)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			Float tmp19 = tempX;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(119)
			this->vertices[tmp18] = tmp19;
			HX_STACK_LINE(120)
			int tmp20 = (currentVertexPosition)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(120)
			Float tmp21 = tempY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(120)
			this->vertices[tmp20] = tmp21;
			HX_STACK_LINE(122)
			bool tmp22 = (i == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(122)
			if ((tmp22)){
				HX_STACK_LINE(124)
				::flixel::math::FlxRect tmp23 = this->bounds;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				::flixel::math::FlxRect _this = tmp23;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(124)
				_this->x = tempX;
				HX_STACK_LINE(124)
				_this->y = tempY;
				HX_STACK_LINE(124)
				_this->width = (int)0;
				HX_STACK_LINE(124)
				_this->height = (int)0;
				HX_STACK_LINE(124)
				_this;
			}
			else{
				HX_STACK_LINE(128)
				::flixel::math::FlxRect tmp23 = this->bounds;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(128)
				::flixel::math::FlxRect bounds = tmp23;		HX_STACK_VAR(bounds,"bounds");
				HX_STACK_LINE(128)
				bool tmp24 = (tempX < bounds->x);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(128)
				if ((tmp24)){
					HX_STACK_LINE(128)
					Float tmp25 = (bounds->x - tempX);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(128)
					hx::AddEq(bounds->width,tmp25);
					HX_STACK_LINE(128)
					bounds->x = tempX;
				}
				HX_STACK_LINE(128)
				bool tmp25 = (tempY < bounds->y);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(128)
				if ((tmp25)){
					HX_STACK_LINE(128)
					Float tmp26 = (bounds->y - tempY);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(128)
					hx::AddEq(bounds->height,tmp26);
					HX_STACK_LINE(128)
					bounds->y = tempY;
				}
				HX_STACK_LINE(128)
				Float tmp26 = tempX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(128)
				Float tmp27 = (bounds->x + bounds->width);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(128)
				bool tmp28 = (tmp26 > tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(128)
				if ((tmp28)){
					HX_STACK_LINE(128)
					Float tmp29 = (tempX - bounds->x);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(128)
					bounds->width = tmp29;
				}
				HX_STACK_LINE(128)
				Float tmp29 = tempY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(128)
				Float tmp30 = (bounds->y + bounds->height);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(128)
				bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(128)
				if ((tmp31)){
					HX_STACK_LINE(128)
					Float tmp32 = (tempY - bounds->y);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(128)
					bounds->height = tmp32;
				}
				HX_STACK_LINE(128)
				bounds;
			}
			HX_STACK_LINE(131)
			hx::AddEq(i,(int)2);
		}
		HX_STACK_LINE(134)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			::flixel::math::FlxRect tmp10 = this->bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(134)
			::flixel::math::FlxRect Rect = tmp10;		HX_STACK_VAR(Rect,"Rect");
			HX_STACK_LINE(134)
			Float tmp11 = (Rect->x + Rect->width);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(134)
			Float tmp12 = cameraBounds->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(134)
			bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(134)
			if ((tmp14)){
				HX_STACK_LINE(134)
				Float tmp16 = Rect->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(134)
				Float tmp17 = (cameraBounds->x + cameraBounds->width);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(134)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				tmp15 = (tmp16 < tmp19);
			}
			else{
				HX_STACK_LINE(134)
				tmp15 = false;
			}
			HX_STACK_LINE(134)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(134)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(134)
			if ((tmp16)){
				HX_STACK_LINE(134)
				Float tmp18 = (Rect->y + Rect->height);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(134)
				Float tmp21 = cameraBounds->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(134)
				tmp17 = (tmp20 > tmp21);
			}
			else{
				HX_STACK_LINE(134)
				tmp17 = false;
			}
			HX_STACK_LINE(134)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(134)
			if ((tmp17)){
				HX_STACK_LINE(134)
				Float tmp19 = Rect->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				Float tmp20 = (cameraBounds->y + cameraBounds->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(134)
				Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(134)
				tmp18 = (tmp19 < tmp21);
			}
			else{
				HX_STACK_LINE(134)
				tmp18 = false;
			}
			HX_STACK_LINE(134)
			bool result = tmp18;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				bool tmp19 = Rect->_weak;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(134)
				if ((tmp19)){
					HX_STACK_LINE(134)
					bool tmp20 = Rect->_inPool;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(134)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(134)
					if ((tmp21)){
						HX_STACK_LINE(134)
						Rect->_inPool = true;
						HX_STACK_LINE(134)
						Rect->_weak = false;
						HX_STACK_LINE(134)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp22 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(134)
						::flixel::math::FlxRect tmp23 = Rect;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(134)
						tmp22->putUnsafe(tmp23);
					}
				}
			}
			HX_STACK_LINE(134)
			tmp9 = result;
		}
		HX_STACK_LINE(134)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		if ((tmp10)){
			HX_STACK_LINE(136)
			int tmp11 = this->vertices->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(136)
			int tmp12 = verticesLength;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(136)
			int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(136)
			int tmp14 = verticesLength;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(136)
			this->vertices->splice(tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(140)
			int uvtDataLength = uvtData->length;		HX_STACK_VAR(uvtDataLength,"uvtDataLength");
			HX_STACK_LINE(141)
			{
				HX_STACK_LINE(141)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(141)
				while((true)){
					HX_STACK_LINE(141)
					bool tmp11 = (_g < uvtDataLength);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(141)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(141)
					if ((tmp12)){
						HX_STACK_LINE(141)
						break;
					}
					HX_STACK_LINE(141)
					int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(141)
					int i1 = tmp13;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(143)
					int tmp14 = (prevUVTDataLength + i1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(143)
					Float tmp15 = uvtData->__get(i1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(143)
					this->uvtData[tmp14] = tmp15;
				}
			}
			HX_STACK_LINE(146)
			int indicesLength = indices->length;		HX_STACK_VAR(indicesLength,"indicesLength");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(147)
				while((true)){
					HX_STACK_LINE(147)
					bool tmp11 = (_g < indicesLength);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(147)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(147)
					if ((tmp12)){
						HX_STACK_LINE(147)
						break;
					}
					HX_STACK_LINE(147)
					int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(147)
					int i1 = tmp13;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(149)
					int tmp14 = (prevIndicesLength + i1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(149)
					int tmp15 = indices->__get(i1);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(149)
					int tmp16 = prevNumberOfVertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(149)
					int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(149)
					this->indices[tmp14] = tmp17;
				}
			}
			HX_STACK_LINE(152)
			bool tmp11 = this->colored;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(152)
			if ((tmp11)){
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					while((true)){
						HX_STACK_LINE(154)
						bool tmp12 = (_g < numberOfVertices);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(154)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(154)
						if ((tmp13)){
							HX_STACK_LINE(154)
							break;
						}
						HX_STACK_LINE(154)
						int tmp14 = (_g)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(154)
						int i1 = tmp14;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(156)
						int tmp15 = (prevColorsLength + i1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(156)
						int tmp16 = colors->__get(i1);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(156)
						this->colors[tmp15] = tmp16;
					}
				}
				HX_STACK_LINE(159)
				hx::AddEq(this->colorsPosition,numberOfVertices);
			}
			HX_STACK_LINE(162)
			hx::AddEq(this->verticesPosition,verticesLength);
			HX_STACK_LINE(163)
			hx::AddEq(this->indicesPosition,indicesLength);
		}
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			bool tmp11 = position->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(166)
			if ((tmp11)){
				HX_STACK_LINE(166)
				position->put();
			}
		}
		HX_STACK_LINE(167)
		{
			HX_STACK_LINE(167)
			bool tmp11 = cameraBounds->_weak;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(167)
			if ((tmp11)){
				HX_STACK_LINE(167)
				bool tmp12 = cameraBounds->_inPool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(167)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(167)
				if ((tmp13)){
					HX_STACK_LINE(167)
					cameraBounds->_inPool = true;
					HX_STACK_LINE(167)
					cameraBounds->_weak = false;
					HX_STACK_LINE(167)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp14 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(167)
					::flixel::math::FlxRect tmp15 = cameraBounds;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(167)
					tmp14->putUnsafe(tmp15);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxDrawTrianglesItem_obj,addTriangles,(void))

Void FlxDrawTrianglesItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform){
{
		HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","addQuad",0xc08c1cd1,"flixel.graphics.tile.FlxDrawTrianglesItem.addQuad","flixel/graphics/tile/FlxDrawTrianglesItem.hx",198,0x6492a666)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(transform,"transform")
		HX_STACK_LINE(199)
		int tmp = this->verticesPosition;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		int prevVerticesPos = tmp;		HX_STACK_VAR(prevVerticesPos,"prevVerticesPos");
		HX_STACK_LINE(200)
		int tmp1 = this->indicesPosition;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		int prevIndicesPos = tmp1;		HX_STACK_VAR(prevIndicesPos,"prevIndicesPos");
		HX_STACK_LINE(201)
		int tmp2 = this->colorsPosition;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		int prevColorsPos = tmp2;		HX_STACK_VAR(prevColorsPos,"prevColorsPos");
		HX_STACK_LINE(202)
		int tmp3 = this->get_numVertices();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		int prevNumberOfVertices = tmp3;		HX_STACK_VAR(prevNumberOfVertices,"prevNumberOfVertices");
		HX_STACK_LINE(204)
		::flixel::math::FlxPoint tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(204)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(204)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp5 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			::flixel::math::FlxPoint tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			Float tmp7 = X;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			Float tmp8 = Y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			::flixel::math::FlxPoint tmp9 = tmp6->set(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			::flixel::math::FlxPoint point = tmp9;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(204)
			point->_inPool = false;
			HX_STACK_LINE(204)
			tmp4 = point;
		}
		HX_STACK_LINE(204)
		::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			Float tmp5 = (point->x * matrix->a);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			Float tmp6 = (point->y * matrix->c);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(205)
			Float tmp8 = matrix->tx;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			Float x1 = tmp9;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(205)
			Float tmp10 = (point->x * matrix->b);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			Float tmp11 = (point->y * matrix->d);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(205)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(205)
			Float tmp13 = matrix->ty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(205)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(205)
			Float y1 = tmp14;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(205)
			Float tmp15 = x1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(205)
			Float tmp16 = y1;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(205)
			point->set(tmp15,tmp16);
		}
		HX_STACK_LINE(207)
		Float tmp5 = point->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		this->vertices[prevVerticesPos] = tmp5;
		HX_STACK_LINE(208)
		int tmp6 = (prevVerticesPos + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		Float tmp7 = point->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		this->vertices[tmp6] = tmp7;
		HX_STACK_LINE(210)
		Float tmp8 = frame->uv->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(210)
		this->uvtData[prevVerticesPos] = tmp8;
		HX_STACK_LINE(211)
		int tmp9 = (prevVerticesPos + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		Float tmp10 = frame->uv->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		this->uvtData[tmp9] = tmp10;
		HX_STACK_LINE(213)
		Float tmp11 = frame->frame->width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(213)
		point->set(tmp11,(int)0);
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			Float tmp12 = (point->x * matrix->a);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			Float tmp13 = (point->y * matrix->c);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(214)
			Float tmp15 = matrix->tx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(214)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(214)
			Float x1 = tmp16;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(214)
			Float tmp17 = (point->x * matrix->b);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(214)
			Float tmp18 = (point->y * matrix->d);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(214)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(214)
			Float tmp20 = matrix->ty;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(214)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(214)
			Float y1 = tmp21;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(214)
			Float tmp22 = x1;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(214)
			Float tmp23 = y1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(214)
			point->set(tmp22,tmp23);
		}
		HX_STACK_LINE(216)
		int tmp12 = (prevVerticesPos + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		Float tmp13 = point->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(216)
		this->vertices[tmp12] = tmp13;
		HX_STACK_LINE(217)
		int tmp14 = (prevVerticesPos + (int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(217)
		Float tmp15 = point->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(217)
		this->vertices[tmp14] = tmp15;
		HX_STACK_LINE(219)
		int tmp16 = (prevVerticesPos + (int)2);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(219)
		Float tmp17 = frame->uv->width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(219)
		this->uvtData[tmp16] = tmp17;
		HX_STACK_LINE(220)
		int tmp18 = (prevVerticesPos + (int)3);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(220)
		Float tmp19 = frame->uv->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(220)
		this->uvtData[tmp18] = tmp19;
		HX_STACK_LINE(222)
		Float tmp20 = frame->frame->width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(222)
		Float tmp21 = frame->frame->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(222)
		point->set(tmp20,tmp21);
		HX_STACK_LINE(223)
		{
			HX_STACK_LINE(223)
			Float tmp22 = (point->x * matrix->a);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(223)
			Float tmp23 = (point->y * matrix->c);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(223)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(223)
			Float tmp25 = matrix->tx;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(223)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(223)
			Float x1 = tmp26;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(223)
			Float tmp27 = (point->x * matrix->b);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(223)
			Float tmp28 = (point->y * matrix->d);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(223)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(223)
			Float tmp30 = matrix->ty;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(223)
			Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(223)
			Float y1 = tmp31;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(223)
			Float tmp32 = x1;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(223)
			Float tmp33 = y1;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(223)
			point->set(tmp32,tmp33);
		}
		HX_STACK_LINE(225)
		int tmp22 = (prevVerticesPos + (int)4);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(225)
		Float tmp23 = point->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(225)
		this->vertices[tmp22] = tmp23;
		HX_STACK_LINE(226)
		int tmp24 = (prevVerticesPos + (int)5);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(226)
		Float tmp25 = point->y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(226)
		this->vertices[tmp24] = tmp25;
		HX_STACK_LINE(228)
		int tmp26 = (prevVerticesPos + (int)4);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(228)
		Float tmp27 = frame->uv->width;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(228)
		this->uvtData[tmp26] = tmp27;
		HX_STACK_LINE(229)
		int tmp28 = (prevVerticesPos + (int)5);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(229)
		Float tmp29 = frame->uv->height;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(229)
		this->uvtData[tmp28] = tmp29;
		HX_STACK_LINE(231)
		Float tmp30 = frame->frame->height;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(231)
		point->set((int)0,tmp30);
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			Float tmp31 = (point->x * matrix->a);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(232)
			Float tmp32 = (point->y * matrix->c);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(232)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(232)
			Float tmp34 = matrix->tx;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(232)
			Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(232)
			Float x1 = tmp35;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(232)
			Float tmp36 = (point->x * matrix->b);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(232)
			Float tmp37 = (point->y * matrix->d);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(232)
			Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(232)
			Float tmp39 = matrix->ty;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(232)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(232)
			Float y1 = tmp40;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(232)
			Float tmp41 = x1;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(232)
			Float tmp42 = y1;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(232)
			point->set(tmp41,tmp42);
		}
		HX_STACK_LINE(234)
		int tmp31 = (prevVerticesPos + (int)6);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(234)
		Float tmp32 = point->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(234)
		this->vertices[tmp31] = tmp32;
		HX_STACK_LINE(235)
		int tmp33 = (prevVerticesPos + (int)7);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(235)
		Float tmp34 = point->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(235)
		this->vertices[tmp33] = tmp34;
		HX_STACK_LINE(237)
		point->put();
		HX_STACK_LINE(239)
		int tmp35 = (prevVerticesPos + (int)6);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(239)
		Float tmp36 = frame->uv->x;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(239)
		this->uvtData[tmp35] = tmp36;
		HX_STACK_LINE(240)
		int tmp37 = (prevVerticesPos + (int)7);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(240)
		Float tmp38 = frame->uv->height;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(240)
		this->uvtData[tmp37] = tmp38;
		HX_STACK_LINE(242)
		int tmp39 = prevNumberOfVertices;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(242)
		this->indices[prevIndicesPos] = tmp39;
		HX_STACK_LINE(243)
		int tmp40 = (prevIndicesPos + (int)1);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(243)
		int tmp41 = (prevNumberOfVertices + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(243)
		this->indices[tmp40] = tmp41;
		HX_STACK_LINE(244)
		int tmp42 = (prevIndicesPos + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(244)
		int tmp43 = (prevNumberOfVertices + (int)2);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(244)
		this->indices[tmp42] = tmp43;
		HX_STACK_LINE(245)
		int tmp44 = (prevIndicesPos + (int)3);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(245)
		int tmp45 = (prevNumberOfVertices + (int)2);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(245)
		this->indices[tmp44] = tmp45;
		HX_STACK_LINE(246)
		int tmp46 = (prevIndicesPos + (int)4);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(246)
		int tmp47 = (prevNumberOfVertices + (int)3);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(246)
		this->indices[tmp46] = tmp47;
		HX_STACK_LINE(247)
		int tmp48 = (prevIndicesPos + (int)5);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(247)
		int tmp49 = prevNumberOfVertices;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(247)
		this->indices[tmp48] = tmp49;
		HX_STACK_LINE(249)
		bool tmp50 = this->colored;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(249)
		if ((tmp50)){
			HX_STACK_LINE(251)
			Float red = ((Float)1.0);		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(252)
			Float green = ((Float)1.0);		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(253)
			Float blue = ((Float)1.0);		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(254)
			Float alpha = ((Float)1.0);		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(256)
			bool tmp51 = (transform != null());		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(256)
			if ((tmp51)){
				HX_STACK_LINE(258)
				red = transform->redMultiplier;
				HX_STACK_LINE(259)
				green = transform->greenMultiplier;
				HX_STACK_LINE(260)
				blue = transform->blueMultiplier;
				HX_STACK_LINE(263)
				alpha = transform->alphaMultiplier;
			}
			HX_STACK_LINE(267)
			int tmp52;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				int tmp53 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(267)
				int color = tmp53;		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(267)
				int tmp54;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float tmp55 = (red * (int)255);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(267)
							int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(267)
							int Value = tmp56;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(267)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(267)
							bool tmp57 = (Value > (int)255);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(267)
							int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(267)
							if ((tmp57)){
								HX_STACK_LINE(267)
								tmp58 = (int)255;
							}
							else{
								HX_STACK_LINE(267)
								bool tmp59 = (Value < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(267)
								if ((tmp59)){
									HX_STACK_LINE(267)
									tmp58 = (int)0;
								}
								else{
									HX_STACK_LINE(267)
									tmp58 = Value;
								}
							}
							HX_STACK_LINE(267)
							int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(267)
							hx::OrEq(color,tmp59);
							HX_STACK_LINE(267)
							Value;
						}
						HX_STACK_LINE(267)
						red;
					}
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float tmp55 = (green * (int)255);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(267)
							int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(267)
							int Value = tmp56;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(267)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(267)
							bool tmp57 = (Value > (int)255);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(267)
							int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(267)
							if ((tmp57)){
								HX_STACK_LINE(267)
								tmp58 = (int)255;
							}
							else{
								HX_STACK_LINE(267)
								bool tmp59 = (Value < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(267)
								if ((tmp59)){
									HX_STACK_LINE(267)
									tmp58 = (int)0;
								}
								else{
									HX_STACK_LINE(267)
									tmp58 = Value;
								}
							}
							HX_STACK_LINE(267)
							int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(267)
							hx::OrEq(color,tmp59);
							HX_STACK_LINE(267)
							Value;
						}
						HX_STACK_LINE(267)
						green;
					}
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float tmp55 = (blue * (int)255);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(267)
							int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(267)
							int Value = tmp56;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(267)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(267)
							bool tmp57 = (Value > (int)255);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(267)
							int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(267)
							if ((tmp57)){
								HX_STACK_LINE(267)
								tmp58 = (int)255;
							}
							else{
								HX_STACK_LINE(267)
								bool tmp59 = (Value < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(267)
								if ((tmp59)){
									HX_STACK_LINE(267)
									tmp58 = (int)0;
								}
								else{
									HX_STACK_LINE(267)
									tmp58 = Value;
								}
							}
							HX_STACK_LINE(267)
							hx::OrEq(color,tmp58);
							HX_STACK_LINE(267)
							Value;
						}
						HX_STACK_LINE(267)
						blue;
					}
					HX_STACK_LINE(267)
					{
						HX_STACK_LINE(267)
						{
							HX_STACK_LINE(267)
							Float tmp55 = (alpha * (int)255);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(267)
							int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(267)
							int Value = tmp56;		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(267)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(267)
							bool tmp57 = (Value > (int)255);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(267)
							int tmp58;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(267)
							if ((tmp57)){
								HX_STACK_LINE(267)
								tmp58 = (int)255;
							}
							else{
								HX_STACK_LINE(267)
								bool tmp59 = (Value < (int)0);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(267)
								if ((tmp59)){
									HX_STACK_LINE(267)
									tmp58 = (int)0;
								}
								else{
									HX_STACK_LINE(267)
									tmp58 = Value;
								}
							}
							HX_STACK_LINE(267)
							int tmp59 = (int(tmp58) << int((int)24));		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(267)
							hx::OrEq(color,tmp59);
							HX_STACK_LINE(267)
							Value;
						}
						HX_STACK_LINE(267)
						alpha;
					}
					HX_STACK_LINE(267)
					tmp54 = color;
				}
				HX_STACK_LINE(267)
				tmp52 = tmp54;
			}
			HX_STACK_LINE(267)
			int color = tmp52;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(269)
			int tmp53 = color;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(269)
			this->colors[prevColorsPos] = tmp53;
			HX_STACK_LINE(270)
			int tmp54 = (prevColorsPos + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(270)
			int tmp55 = color;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(270)
			this->colors[tmp54] = tmp55;
			HX_STACK_LINE(271)
			int tmp56 = (prevColorsPos + (int)2);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(271)
			int tmp57 = color;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(271)
			this->colors[tmp56] = tmp57;
			HX_STACK_LINE(272)
			int tmp58 = (prevColorsPos + (int)3);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(272)
			int tmp59 = color;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(272)
			this->colors[tmp58] = tmp59;
			HX_STACK_LINE(274)
			hx::AddEq(this->colorsPosition,(int)4);
		}
		HX_STACK_LINE(277)
		hx::AddEq(this->verticesPosition,(int)8);
		HX_STACK_LINE(278)
		hx::AddEq(this->indicesPosition,(int)6);
	}
return null();
}


int FlxDrawTrianglesItem_obj::get_numVertices( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","get_numVertices",0x2e325a3f,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numVertices","flixel/graphics/tile/FlxDrawTrianglesItem.hx",282,0x6492a666)
	HX_STACK_THIS(this)
	HX_STACK_LINE(283)
	int tmp = this->vertices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	return tmp2;
}


int FlxDrawTrianglesItem_obj::get_numTriangles( ){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","get_numTriangles",0x542b93a5,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",287,0x6492a666)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	int tmp = this->indices->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	Float tmp1 = (Float(tmp) / Float((int)3));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(288)
	return tmp2;
}


::flixel::math::FlxPoint FlxDrawTrianglesItem_obj::point;

::flixel::math::FlxRect FlxDrawTrianglesItem_obj::rect;

::flixel::math::FlxRect FlxDrawTrianglesItem_obj::inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y){
	HX_STACK_FRAME("flixel.graphics.tile.FlxDrawTrianglesItem","inflateBounds",0x8ece7465,"flixel.graphics.tile.FlxDrawTrianglesItem.inflateBounds","flixel/graphics/tile/FlxDrawTrianglesItem.hx",171,0x6492a666)
	HX_STACK_ARG(bounds,"bounds")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(172)
	bool tmp = (x < bounds->x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	if ((tmp)){
		HX_STACK_LINE(174)
		Float tmp1 = (bounds->x - x);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		hx::AddEq(bounds->width,tmp1);
		HX_STACK_LINE(175)
		bounds->x = x;
	}
	HX_STACK_LINE(178)
	bool tmp1 = (y < bounds->y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	if ((tmp1)){
		HX_STACK_LINE(180)
		Float tmp2 = (bounds->y - y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		hx::AddEq(bounds->height,tmp2);
		HX_STACK_LINE(181)
		bounds->y = y;
	}
	HX_STACK_LINE(184)
	Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	Float tmp3 = (bounds->x + bounds->width);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	if ((tmp4)){
		HX_STACK_LINE(186)
		Float tmp5 = (x - bounds->x);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		bounds->width = tmp5;
	}
	HX_STACK_LINE(189)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(189)
	Float tmp6 = (bounds->y + bounds->height);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(189)
	bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	if ((tmp7)){
		HX_STACK_LINE(191)
		Float tmp8 = (y - bounds->y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		bounds->height = tmp8;
	}
	HX_STACK_LINE(194)
	::flixel::math::FlxRect tmp8 = bounds;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(194)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDrawTrianglesItem_obj,inflateBounds,return )


FlxDrawTrianglesItem_obj::FlxDrawTrianglesItem_obj()
{
}

void FlxDrawTrianglesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTrianglesItem);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_MARK_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_MARK_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTrianglesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_VISIT_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_VISIT_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxDrawTrianglesItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return uvtData; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return addQuad_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTriangles") ) { return addTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { return colorsPosition; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { return indicesPosition; }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return get_numVertices_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { return verticesPosition; }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return get_numTriangles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inflateBounds") ) { outValue = inflateBounds_dyn(); return true;  }
	}
	return false;
}

Dynamic FlxDrawTrianglesItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { colorsPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { indicesPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { verticesPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxDrawTrianglesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5"));
	outFields->push(HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12"));
	outFields->push(HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,vertices),HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,uvtData),HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,verticesPosition),HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,indicesPosition),HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12")},
	{hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,colorsPosition),HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxDrawTrianglesItem_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxDrawTrianglesItem_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxDrawTrianglesItem_obj::rect,HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vertices","\xf9","\xbf","\x15","\x6a"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("uvtData","\xbd","\xa6","\x23","\x27"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("verticesPosition","\xc2","\x3d","\xe8","\xf5"),
	HX_HCSTRING("indicesPosition","\xf0","\xa2","\xe6","\x12"),
	HX_HCSTRING("colorsPosition","\x79","\x52","\xf8","\x2c"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("addTriangles","\x4a","\x52","\x95","\x7e"),
	HX_HCSTRING("addQuad","\x88","\x7b","\x47","\x87"),
	HX_HCSTRING("get_numVertices","\xf6","\xc7","\x0d","\x17"),
	HX_HCSTRING("get_numTriangles","\x0e","\x26","\x50","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#endif

hx::Class FlxDrawTrianglesItem_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("inflateBounds","\x5c","\x36","\x3c","\x2f"),
	::String(null()) };

void FlxDrawTrianglesItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxDrawTrianglesItem","\xb7","\x10","\x12","\xaf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawTrianglesItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawTrianglesItem_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxDrawTrianglesItem_obj >;
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

void FlxDrawTrianglesItem_obj::__boot()
{
struct _Function_0_1{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/tile/FlxDrawTrianglesItem.hx",23,0x6492a666)
		{
			HX_STACK_LINE(23)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(23)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(23)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(23)
			::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(23)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(23)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(23)
			point->_inPool = false;
			HX_STACK_LINE(23)
			return point;
		}
		return null();
	}
};
	point= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/tile/FlxDrawTrianglesItem.hx",24,0x6492a666)
		{
			HX_STACK_LINE(24)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(24)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(24)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(24)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(24)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(24)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(24)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(24)
				_this->x = X;
				HX_STACK_LINE(24)
				_this->y = Y;
				HX_STACK_LINE(24)
				_this->width = Width;
				HX_STACK_LINE(24)
				_this->height = Height;
				HX_STACK_LINE(24)
				tmp = _this;
			}
			HX_STACK_LINE(24)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(24)
			rect->_inPool = false;
			HX_STACK_LINE(24)
			return rect;
		}
		return null();
	}
};
	rect= _Function_0_2::Block();
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
