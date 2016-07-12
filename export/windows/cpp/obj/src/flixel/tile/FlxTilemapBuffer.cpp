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
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

Void FlxTilemapBuffer_obj::__construct(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{
HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",18,0x56d29ad4)
HX_STACK_THIS(this)
HX_STACK_ARG(TileWidth,"TileWidth")
HX_STACK_ARG(TileHeight,"TileHeight")
HX_STACK_ARG(WidthInTiles,"WidthInTiles")
HX_STACK_ARG(HeightInTiles,"HeightInTiles")
HX_STACK_ARG(Camera,"Camera")
HX_STACK_ARG(__o_ScaleX,"ScaleX")
HX_STACK_ARG(__o_ScaleY,"ScaleY")
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
{
	HX_STACK_LINE(47)
	this->columns = (int)0;
	HX_STACK_LINE(43)
	this->rows = (int)0;
	HX_STACK_LINE(39)
	this->dirty = false;
	HX_STACK_LINE(35)
	this->height = ((Float)0);
	HX_STACK_LINE(31)
	this->width = ((Float)0);
	HX_STACK_LINE(27)
	this->y = ((Float)0);
	HX_STACK_LINE(23)
	this->x = ((Float)0);
	HX_STACK_LINE(77)
	int tmp = TileWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	int tmp1 = WidthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = ScaleX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	::flixel::FlxCamera tmp3 = Camera;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	this->updateColumns(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(78)
	int tmp4 = TileHeight;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	int tmp5 = HeightInTiles;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(78)
	Float tmp6 = ScaleY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	this->updateRows(tmp4,tmp5,tmp6,tmp7);
	HX_STACK_LINE(80)
	bool tmp8 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(80)
	if ((tmp8)){
		HX_STACK_LINE(82)
		int tmp9 = this->columns;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		int tmp10 = TileWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(82)
		int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(82)
		int tmp13 = this->rows;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(82)
		int tmp14 = TileHeight;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(82)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(82)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(82)
		::openfl::_legacy::display::BitmapData tmp17 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp12,tmp16,true,(int)0,null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(82)
		this->pixels = tmp17;
		HX_STACK_LINE(83)
		::openfl::_legacy::display::BitmapData tmp18 = this->pixels;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(83)
		int tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(83)
		::openfl::_legacy::display::BitmapData tmp20 = this->pixels;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(83)
		int tmp21 = tmp20->get_height();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(83)
		::openfl::_legacy::geom::Rectangle tmp22 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(83)
		this->_flashRect = tmp22;
		HX_STACK_LINE(84)
		::openfl::_legacy::geom::Matrix tmp23 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(84)
		this->_matrix = tmp23;
	}
	HX_STACK_LINE(87)
	this->dirty = true;
}
;
	return null();
}

//FlxTilemapBuffer_obj::~FlxTilemapBuffer_obj() { }

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return  new FlxTilemapBuffer_obj; }
hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(int TileWidth,int TileHeight,int WidthInTiles,int HeightInTiles,::flixel::FlxCamera Camera,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > _result_ = new FlxTilemapBuffer_obj();
	_result_->__construct(TileWidth,TileHeight,WidthInTiles,HeightInTiles,Camera,__o_ScaleX,__o_ScaleY);
	return _result_;}

Dynamic FlxTilemapBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemapBuffer_obj > _result_ = new FlxTilemapBuffer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

hx::Object *FlxTilemapBuffer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxTilemapBuffer_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxTilemapBuffer_obj >(this); }
Void FlxTilemapBuffer_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",94,0x56d29ad4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(97)
			this->pixels = null();
			HX_STACK_LINE(98)
			this->blend = null();
			HX_STACK_LINE(99)
			this->_matrix = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

Void FlxTilemapBuffer_obj::fill( hx::Null< int >  __o_Color){
int Color = __o_Color.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","fill",0x99957fa7,"flixel.tile.FlxTilemapBuffer.fill","flixel/tile/FlxTilemapBuffer.hx",110,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
{
		HX_STACK_LINE(111)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(113)
			::openfl::_legacy::display::BitmapData tmp1 = this->pixels;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(113)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_flashRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			tmp1->fillRect(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,fill,(void))

Void FlxTilemapBuffer_obj::draw( ::flixel::FlxCamera Camera,::openfl::_legacy::geom::Point FlashPoint,hx::Null< Float >  __o_ScaleX,hx::Null< Float >  __o_ScaleY){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","draw",0x9849dd28,"flixel.tile.FlxTilemapBuffer.draw","flixel/tile/FlxTilemapBuffer.hx",124,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(FlashPoint,"FlashPoint")
	HX_STACK_ARG(ScaleX,"ScaleX")
	HX_STACK_ARG(ScaleY,"ScaleY")
{
		HX_STACK_LINE(125)
		::flixel::FlxCamera tmp = Camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = this->isPixelPerfectRender(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(127)
			Float tmp2 = FlashPoint->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			FlashPoint->x = tmp3;
			HX_STACK_LINE(128)
			Float tmp4 = FlashPoint->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			FlashPoint->y = tmp5;
		}
		HX_STACK_LINE(131)
		::flixel::FlxCamera tmp2 = Camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		::flixel::FlxCamera tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		bool tmp4 = this->isPixelPerfectRender(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		if ((tmp5)){
			HX_STACK_LINE(131)
			bool tmp7 = (ScaleX == ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(131)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			if ((tmp11)){
				HX_STACK_LINE(131)
				tmp6 = (ScaleY == ((Float)1.0));
			}
			else{
				HX_STACK_LINE(131)
				tmp6 = false;
			}
		}
		else{
			HX_STACK_LINE(131)
			tmp6 = false;
		}
		HX_STACK_LINE(131)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		if ((tmp6)){
			HX_STACK_LINE(131)
			::openfl::_legacy::display::BlendMode tmp8 = this->blend;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			::openfl::_legacy::display::BlendMode tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			tmp7 = (tmp9 == null());
		}
		else{
			HX_STACK_LINE(131)
			tmp7 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp7)){
			HX_STACK_LINE(133)
			::openfl::_legacy::display::BitmapData tmp8 = this->pixels;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			::openfl::_legacy::geom::Rectangle tmp9 = this->_flashRect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			::openfl::_legacy::geom::Point tmp10 = FlashPoint;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(133)
			Camera->buffer->copyPixels(tmp8,tmp9,tmp10,null(),null(),true);
		}
		else{
			HX_STACK_LINE(137)
			::openfl::_legacy::geom::Matrix tmp8 = this->_matrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			tmp8->identity();
			HX_STACK_LINE(138)
			::openfl::_legacy::geom::Matrix tmp9 = this->_matrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			Float tmp10 = ScaleX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(138)
			Float tmp11 = ScaleY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(138)
			tmp9->scale(tmp10,tmp11);
			HX_STACK_LINE(139)
			::openfl::_legacy::geom::Matrix tmp12 = this->_matrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(139)
			Float tmp13 = FlashPoint->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(139)
			Float tmp14 = FlashPoint->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(139)
			tmp12->translate(tmp13,tmp14);
			HX_STACK_LINE(140)
			::openfl::_legacy::display::BitmapData tmp15 = this->pixels;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Matrix tmp16 = this->_matrix;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(140)
			::openfl::_legacy::display::BlendMode tmp17 = this->blend;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(140)
			Camera->buffer->draw(tmp15,tmp16,null(),tmp17,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,draw,(void))

Void FlxTilemapBuffer_obj::colorTransform( ::openfl::_legacy::geom::ColorTransform Transform){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","colorTransform",0x13c7ddad,"flixel.tile.FlxTilemapBuffer.colorTransform","flixel/tile/FlxTilemapBuffer.hx",145,0x56d29ad4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Transform,"Transform")
		HX_STACK_LINE(146)
		::openfl::_legacy::display::BitmapData tmp = this->pixels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_flashRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::ColorTransform tmp2 = Transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		tmp->colorTransform(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,colorTransform,(void))

Void FlxTilemapBuffer_obj::updateColumns( int TileWidth,int WidthInTiles,hx::Null< Float >  __o_ScaleX,::flixel::FlxCamera Camera){
Float ScaleX = __o_ScaleX.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",150,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(ScaleX,"ScaleX")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(151)
		bool tmp = (WidthInTiles < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		if ((tmp)){
			HX_STACK_LINE(153)
			WidthInTiles = (int)0;
		}
		HX_STACK_LINE(156)
		bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(158)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			Camera = tmp2;
		}
		HX_STACK_LINE(161)
		int tmp2 = Camera->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		Float tmp3 = (TileWidth * ScaleX);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(161)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(161)
		this->columns = tmp6;
		HX_STACK_LINE(163)
		int tmp7 = this->columns;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(163)
		int tmp8 = WidthInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(163)
		if ((tmp9)){
			HX_STACK_LINE(165)
			this->columns = WidthInTiles;
		}
		HX_STACK_LINE(168)
		int tmp10 = this->columns;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(168)
		int tmp11 = TileWidth;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(168)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(168)
		Float tmp13 = ScaleX;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(168)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(168)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(168)
		this->width = tmp15;
		HX_STACK_LINE(170)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

Void FlxTilemapBuffer_obj::updateRows( int TileHeight,int HeightInTiles,hx::Null< Float >  __o_ScaleY,::flixel::FlxCamera Camera){
Float ScaleY = __o_ScaleY.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",174,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(ScaleY,"ScaleY")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(175)
		bool tmp = (HeightInTiles < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		if ((tmp)){
			HX_STACK_LINE(177)
			HeightInTiles = (int)0;
		}
		HX_STACK_LINE(180)
		bool tmp1 = (Camera == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(182)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			Camera = tmp2;
		}
		HX_STACK_LINE(185)
		int tmp2 = Camera->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		Float tmp3 = (TileHeight * ScaleY);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		int tmp5 = ::Math_obj::ceil(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		this->rows = tmp6;
		HX_STACK_LINE(187)
		int tmp7 = this->rows;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		int tmp8 = HeightInTiles;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(187)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(187)
		if ((tmp9)){
			HX_STACK_LINE(189)
			this->rows = HeightInTiles;
		}
		HX_STACK_LINE(192)
		int tmp10 = this->rows;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(192)
		int tmp11 = TileHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		int tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(192)
		Float tmp13 = ScaleY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(192)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(192)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(192)
		this->height = tmp15;
		HX_STACK_LINE(194)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

bool FlxTilemapBuffer_obj::isPixelPerfectRender( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemapBuffer","isPixelPerfectRender",0x7d4e558b,"flixel.tile.FlxTilemapBuffer.isPixelPerfectRender","flixel/tile/FlxTilemapBuffer.hx",201,0x56d29ad4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(202)
	bool tmp = (Camera == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(204)
		::flixel::FlxCamera tmp1 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		Camera = tmp1;
	}
	HX_STACK_LINE(206)
	Dynamic tmp1 = this->pixelPerfectRender;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(206)
	if ((tmp2)){
		HX_STACK_LINE(206)
		tmp3 = Camera->pixelPerfectRender;
	}
	else{
		HX_STACK_LINE(206)
		tmp3 = this->pixelPerfectRender;
	}
	HX_STACK_LINE(206)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,isPixelPerfectRender,return )


FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
}

Dynamic FlxTilemapBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"pixels") ) { return pixels; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"updateRows") ) { return updateRows_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return updateColumns_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return isPixelPerfectRender_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemapBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxTilemapBuffer_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTilemapBuffer_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemapBuffer_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(FlxTilemapBuffer_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("updateColumns","\xd4","\x11","\xc8","\xbe"),
	HX_HCSTRING("updateRows","\xc2","\xdf","\x63","\x04"),
	HX_HCSTRING("isPixelPerfectRender","\x67","\x1c","\xf9","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemapBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTilemapBuffer","\xca","\x41","\x20","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTilemapBuffer_obj >;
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
} // end namespace tile
