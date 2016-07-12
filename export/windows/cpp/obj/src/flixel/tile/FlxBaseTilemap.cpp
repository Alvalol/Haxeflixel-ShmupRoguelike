#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
namespace flixel{
namespace tile{

Void FlxBaseTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","new",0x601e788b,"flixel.tile.FlxBaseTilemap.new","flixel/tile/FlxBaseTilemap.hx",12,0x0139d8e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(76)
	this->_collideIndex = (int)0;
	HX_STACK_LINE(75)
	this->_drawIndex = (int)0;
	HX_STACK_LINE(69)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(64)
	this->_tileObjects = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(23)
	this->totalTiles = (int)0;
	HX_STACK_LINE(21)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(19)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(17)
	this->_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF;
	HX_STACK_LINE(137)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(139)
	this->flixelType = (int)3;
	HX_STACK_LINE(140)
	this->set_immovable(true);
	HX_STACK_LINE(141)
	this->set_moves(false);
}
;
	return null();
}

//FlxBaseTilemap_obj::~FlxBaseTilemap_obj() { }

Dynamic FlxBaseTilemap_obj::__CreateEmpty() { return  new FlxBaseTilemap_obj; }
hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__new()
{  hx::ObjectPtr< FlxBaseTilemap_obj > _result_ = new FlxBaseTilemap_obj();
	_result_->__construct();
	return _result_;}

Dynamic FlxBaseTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBaseTilemap_obj > _result_ = new FlxBaseTilemap_obj();
	_result_->__construct();
	return _result_;}

Void FlxBaseTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","updateTile",0x4985390c,"flixel.tile.FlxBaseTilemap.updateTile","flixel/tile/FlxBaseTilemap.hx",83,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(83)
		HX_STACK_DO_THROW(HX_HCSTRING("updateTile must be implemented","\x53","\x76","\xb0","\x30"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,updateTile,(void))

Void FlxBaseTilemap_obj::cacheGraphics( int TileWidth,int TileHeight,Dynamic TileGraphic){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","cacheGraphics",0x589e0d18,"flixel.tile.FlxBaseTilemap.cacheGraphics","flixel/tile/FlxBaseTilemap.hx",88,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(TileWidth,"TileWidth")
		HX_STACK_ARG(TileHeight,"TileHeight")
		HX_STACK_ARG(TileGraphic,"TileGraphic")
		HX_STACK_LINE(88)
		HX_STACK_DO_THROW(HX_HCSTRING("cacheGraphics must be implemented","\xa9","\x10","\x20","\x38"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,cacheGraphics,(void))

Void FlxBaseTilemap_obj::initTileObjects( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","initTileObjects",0x1ec17ac1,"flixel.tile.FlxBaseTilemap.initTileObjects","flixel/tile/FlxBaseTilemap.hx",93,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		HX_STACK_DO_THROW(HX_HCSTRING("initTileObjects must be implemented","\x12","\xb8","\xa6","\x2f"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,initTileObjects,(void))

Void FlxBaseTilemap_obj::updateMap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","updateMap",0xe833827e,"flixel.tile.FlxBaseTilemap.updateMap","flixel/tile/FlxBaseTilemap.hx",98,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		HX_STACK_DO_THROW(HX_HCSTRING("updateMap must be implemented","\x8f","\xae","\x0f","\xb7"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,updateMap,(void))

Void FlxBaseTilemap_obj::computeDimensions( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","computeDimensions",0xc850220f,"flixel.tile.FlxBaseTilemap.computeDimensions","flixel/tile/FlxBaseTilemap.hx",103,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		HX_STACK_DO_THROW(HX_HCSTRING("computeDimensions must be implemented","\xa0","\x79","\xf6","\x10"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,computeDimensions,(void))

int FlxBaseTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileIndexByCoords",0x5f0cf078,"flixel.tile.FlxBaseTilemap.getTileIndexByCoords","flixel/tile/FlxBaseTilemap.hx",107,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Coord,"Coord")
	HX_STACK_LINE(108)
	HX_STACK_DO_THROW(HX_HCSTRING("getTileIndexByCoords must be implemented","\x7f","\x57","\x93","\x9c"));
	HX_STACK_LINE(109)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileIndexByCoords,return )

::flixel::math::FlxPoint FlxBaseTilemap_obj::getTileCoordsByIndex( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileCoordsByIndex",0x89a6db2e,"flixel.tile.FlxBaseTilemap.getTileCoordsByIndex","flixel/tile/FlxBaseTilemap.hx",113,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(114)
		HX_STACK_DO_THROW(HX_HCSTRING("getTileCoordsByIndex must be implemented","\x35","\x21","\x39","\x05"));
		HX_STACK_LINE(115)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTileCoordsByIndex,return )

bool FlxBaseTilemap_obj::ray( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,::flixel::math::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","ray",0x60217e15,"flixel.tile.FlxBaseTilemap.ray","flixel/tile/FlxBaseTilemap.hx",119,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(120)
		HX_STACK_DO_THROW(HX_HCSTRING("ray must be implemented","\xe6","\x31","\x5e","\x58"));
		HX_STACK_LINE(121)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,ray,return )

bool FlxBaseTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::math::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsWithCallback",0x90f43a8c,"flixel.tile.FlxBaseTilemap.overlapsWithCallback","flixel/tile/FlxBaseTilemap.hx",125,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(126)
		HX_STACK_DO_THROW(HX_HCSTRING("overlapsWithCallback must be implemented","\x93","\xa3","\xff","\x38"));
		HX_STACK_LINE(127)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,overlapsWithCallback,return )

Void FlxBaseTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setDirty",0x31f19505,"flixel.tile.FlxBaseTilemap.setDirty","flixel/tile/FlxBaseTilemap.hx",132,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(132)
		HX_STACK_DO_THROW(HX_HCSTRING("setDirty must be implemented","\x0c","\xcc","\xe0","\x5f"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,setDirty,(void))

Void FlxBaseTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","destroy",0x44ffc6a5,"flixel.tile.FlxBaseTilemap.destroy","flixel/tile/FlxBaseTilemap.hx",145,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		this->_data = null();
		HX_STACK_LINE(147)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromCSV( ::String MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFromCSV",0xbac5ecbb,"flixel.tile.FlxBaseTilemap.loadMapFromCSV","flixel/tile/FlxBaseTilemap.hx",170,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(172)
		::String tmp = MapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = ::openfl::_legacy::Assets_obj::exists(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp1)){
			HX_STACK_LINE(174)
			::String tmp2 = MapData;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			::String tmp3 = ::openfl::_legacy::Assets_obj::getText(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			MapData = tmp3;
		}
		HX_STACK_LINE(178)
		this->_data = Array_obj< int >::__new();
		HX_STACK_LINE(179)
		Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
		HX_STACK_LINE(181)
		::EReg tmp2 = ::EReg_obj::__new(HX_HCSTRING("[ \t]*((\r\n)|\r|\n)[ \t]*","\x22","\x2c","\x8d","\x6d"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		::EReg regex = tmp2;		HX_STACK_VAR(regex,"regex");
		HX_STACK_LINE(182)
		::String tmp3 = MapData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		Array< ::String > lines = regex->split(tmp3);		HX_STACK_VAR(lines,"lines");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		bool run(::String line){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/tile/FlxBaseTilemap.hx",183,0x0139d8e5)
			HX_STACK_ARG(line,"line")
			{
				HX_STACK_LINE(183)
				bool tmp4 = (line != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(183)
				return tmp4;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(183)
		Array< ::String > rows = lines->filter( Dynamic(new _Function_1_1()));		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(185)
		this->heightInTiles = rows->length;
		HX_STACK_LINE(186)
		this->widthInTiles = (int)0;
		HX_STACK_LINE(188)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(189)
		while((true)){
			HX_STACK_LINE(189)
			int tmp4 = row;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			int tmp5 = this->heightInTiles;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(189)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(189)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(189)
			if ((tmp7)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(191)
			::String tmp8 = rows->__get(row);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			::String rowString = tmp8;		HX_STACK_VAR(rowString,"rowString");
			HX_STACK_LINE(192)
			::String tmp9 = rowString;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			bool tmp10 = ::StringTools_obj::endsWith(tmp9,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			if ((tmp10)){
				HX_STACK_LINE(193)
				int tmp11 = (rowString.length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(193)
				::String tmp12 = rowString.substr((int)0,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(193)
				rowString = tmp12;
			}
			HX_STACK_LINE(194)
			columns = rowString.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			HX_STACK_LINE(196)
			bool tmp11 = (columns->length == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(196)
			if ((tmp11)){
				HX_STACK_LINE(198)
				(this->heightInTiles)--;
				HX_STACK_LINE(199)
				continue;
			}
			HX_STACK_LINE(201)
			int tmp12 = this->widthInTiles;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(201)
			bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(201)
			if ((tmp13)){
				HX_STACK_LINE(203)
				this->widthInTiles = columns->length;
			}
			HX_STACK_LINE(206)
			int column = (int)0;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(207)
			while((true)){
				HX_STACK_LINE(207)
				int tmp14 = column;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(207)
				int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(207)
				bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(207)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(207)
				if ((tmp17)){
					HX_STACK_LINE(207)
					break;
				}
				HX_STACK_LINE(210)
				::String tmp18 = columns->__get(column);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				::String columnString = tmp18;		HX_STACK_VAR(columnString,"columnString");
				HX_STACK_LINE(211)
				::String tmp19 = columnString;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				Dynamic tmp20 = ::Std_obj::parseInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				Dynamic curTile = tmp20;		HX_STACK_VAR(curTile,"curTile");
				HX_STACK_LINE(213)
				bool tmp21 = (curTile == null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(213)
				if ((tmp21)){
					HX_STACK_LINE(214)
					::String tmp22 = (HX_HCSTRING("String in row ","\xb2","\xa4","\x63","\x43") + row);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(214)
					::String tmp23 = (tmp22 + HX_HCSTRING(", column ","\x96","\xfc","\x25","\x5b"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(214)
					int tmp24 = column;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(214)
					::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(214)
					::String tmp26 = (tmp25 + HX_HCSTRING(" is not a valid integer: \"","\x44","\x67","\xcc","\x45"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(214)
					::String tmp27 = columnString;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(214)
					::String tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(214)
					::String tmp29 = (tmp28 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(214)
					HX_STACK_DO_THROW(tmp29);
				}
				HX_STACK_LINE(217)
				bool tmp22 = (curTile < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(217)
				if ((tmp22)){
					HX_STACK_LINE(218)
					curTile = (int)0;
				}
				HX_STACK_LINE(220)
				Dynamic tmp23 = curTile;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(220)
				this->_data->push(tmp23);
				HX_STACK_LINE(221)
				(column)++;
			}
			HX_STACK_LINE(224)
			(row)++;
		}
		HX_STACK_LINE(227)
		Dynamic tmp4 = TileGraphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		int tmp5 = TileWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		int tmp6 = TileHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		::flixel::tile::FlxTilemapAutoTiling tmp7 = AutoTile;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		int tmp8 = StartingIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(227)
		int tmp9 = DrawIndex;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		int tmp10 = CollideIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(227)
		this->loadMapHelper(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);
		HX_STACK_LINE(228)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFromCSV,return )

::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromArray( Array< int > MapData,int WidthInTiles,int HeightInTiles,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFromArray",0x576cd9ce,"flixel.tile.FlxBaseTilemap.loadMapFromArray","flixel/tile/FlxBaseTilemap.hx",253,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(WidthInTiles,"WidthInTiles")
	HX_STACK_ARG(HeightInTiles,"HeightInTiles")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(254)
		this->widthInTiles = WidthInTiles;
		HX_STACK_LINE(255)
		this->heightInTiles = HeightInTiles;
		HX_STACK_LINE(256)
		this->_data = MapData->copy();
		HX_STACK_LINE(258)
		Dynamic tmp = TileGraphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		int tmp1 = TileWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		int tmp2 = TileHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		::flixel::tile::FlxTilemapAutoTiling tmp3 = AutoTile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		int tmp4 = StartingIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		int tmp5 = DrawIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		int tmp6 = CollideIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(258)
		this->loadMapHelper(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(259)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC10(FlxBaseTilemap_obj,loadMapFromArray,return )

::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFrom2DArray( Array< ::Dynamic > MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapFrom2DArray",0xb01a13fc,"flixel.tile.FlxBaseTilemap.loadMapFrom2DArray","flixel/tile/FlxBaseTilemap.hx",282,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(283)
		int tmp = MapData->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		this->widthInTiles = tmp;
		HX_STACK_LINE(284)
		this->heightInTiles = MapData->length;
		HX_STACK_LINE(285)
		this->_data = ::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(MapData);
		HX_STACK_LINE(287)
		Dynamic tmp1 = TileGraphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(287)
		int tmp2 = TileWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(287)
		int tmp3 = TileHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(287)
		::flixel::tile::FlxTilemapAutoTiling tmp4 = AutoTile;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(287)
		int tmp5 = StartingIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(287)
		int tmp6 = DrawIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(287)
		int tmp7 = CollideIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(287)
		this->loadMapHelper(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(288)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFrom2DArray,return )

Void FlxBaseTilemap_obj::loadMapHelper( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,::flixel::tile::FlxTilemapAutoTiling AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","loadMapHelper",0xc59c560f,"flixel.tile.FlxBaseTilemap.loadMapHelper","flixel/tile/FlxBaseTilemap.hx",293,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(294)
		int tmp = this->_data->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		this->totalTiles = tmp;
		HX_STACK_LINE(295)
		bool tmp1 = (AutoTile == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		::flixel::tile::FlxTilemapAutoTiling tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		if ((tmp1)){
			HX_STACK_LINE(295)
			tmp2 = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF;
		}
		else{
			HX_STACK_LINE(295)
			tmp2 = AutoTile;
		}
		HX_STACK_LINE(295)
		this->_auto = tmp2;
		HX_STACK_LINE(296)
		bool tmp3 = (StartingIndex <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		if ((tmp3)){
			HX_STACK_LINE(296)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(296)
			tmp4 = StartingIndex;
		}
		HX_STACK_LINE(296)
		this->_startingIndex = tmp4;
		HX_STACK_LINE(298)
		::flixel::tile::FlxTilemapAutoTiling tmp5 = this->_auto;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		bool tmp6 = (tmp5 != ::flixel::tile::FlxTilemapAutoTiling_obj::OFF);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		if ((tmp6)){
			HX_STACK_LINE(300)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(301)
			DrawIndex = (int)1;
			HX_STACK_LINE(302)
			CollideIndex = (int)1;
		}
		HX_STACK_LINE(305)
		this->_drawIndex = DrawIndex;
		HX_STACK_LINE(306)
		this->_collideIndex = CollideIndex;
		HX_STACK_LINE(308)
		this->applyAutoTile();
		HX_STACK_LINE(309)
		this->applyCustomRemap();
		HX_STACK_LINE(310)
		this->randomizeIndices();
		HX_STACK_LINE(311)
		int tmp7 = TileWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		int tmp8 = TileHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(311)
		Dynamic tmp9 = TileGraphic;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(311)
		this->cacheGraphics(tmp7,tmp8,tmp9);
		HX_STACK_LINE(312)
		this->postGraphicLoad();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxBaseTilemap_obj,loadMapHelper,(void))

Void FlxBaseTilemap_obj::postGraphicLoad( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","postGraphicLoad",0x0dc00119,"flixel.tile.FlxBaseTilemap.postGraphicLoad","flixel/tile/FlxBaseTilemap.hx",316,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(317)
		this->initTileObjects();
		HX_STACK_LINE(318)
		this->computeDimensions();
		HX_STACK_LINE(319)
		this->updateMap();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,postGraphicLoad,(void))

Void FlxBaseTilemap_obj::applyAutoTile( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","applyAutoTile",0xcc60c5b6,"flixel.tile.FlxBaseTilemap.applyAutoTile","flixel/tile/FlxBaseTilemap.hx",323,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(325)
		::flixel::tile::FlxTilemapAutoTiling tmp = this->_auto;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		bool tmp1 = (tmp != ::flixel::tile::FlxTilemapAutoTiling_obj::OFF);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		if ((tmp1)){
			HX_STACK_LINE(327)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(328)
			while((true)){
				HX_STACK_LINE(328)
				int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(328)
				int tmp3 = this->totalTiles;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(328)
				bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(328)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(328)
				if ((tmp5)){
					HX_STACK_LINE(328)
					break;
				}
				HX_STACK_LINE(330)
				int tmp6 = (i)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(330)
				this->autoTile(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyAutoTile,(void))

Void FlxBaseTilemap_obj::applyCustomRemap( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","applyCustomRemap",0x2fd5c57f,"flixel.tile.FlxBaseTilemap.applyCustomRemap","flixel/tile/FlxBaseTilemap.hx",336,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(337)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(339)
		bool tmp = (this->customTileRemap != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		if ((tmp)){
			HX_STACK_LINE(341)
			while((true)){
				HX_STACK_LINE(341)
				int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(341)
				int tmp2 = this->totalTiles;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(341)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(341)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(341)
				if ((tmp4)){
					HX_STACK_LINE(341)
					break;
				}
				HX_STACK_LINE(343)
				int tmp5 = this->_data->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(343)
				int oldIndex = tmp5;		HX_STACK_VAR(oldIndex,"oldIndex");
				HX_STACK_LINE(344)
				int newIndex = oldIndex;		HX_STACK_VAR(newIndex,"newIndex");
				HX_STACK_LINE(345)
				int tmp6 = oldIndex;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(345)
				int tmp7 = this->customTileRemap->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(345)
				if ((tmp8)){
					HX_STACK_LINE(347)
					int tmp9 = this->customTileRemap->__get(oldIndex);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(347)
					newIndex = tmp9;
				}
				HX_STACK_LINE(349)
				int tmp9 = newIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(349)
				this->_data[i] = tmp9;
				HX_STACK_LINE(350)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyCustomRemap,(void))

Void FlxBaseTilemap_obj::randomizeIndices( ){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",356,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(357)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(359)
		bool tmp = (this->_randomIndices != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(359)
		if ((tmp)){
			HX_STACK_LINE(361)
			Dynamic tmp1 = this->_randomLambda_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			if ((tmp2)){
				HX_STACK_LINE(361)
				tmp3 = this->_randomLambda_dyn();
			}
			else{

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 0; }
				Float run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","flixel/tile/FlxBaseTilemap.hx",361,0x0139d8e5)
					{
						HX_STACK_LINE(362)
						::flixel::math::FlxRandom tmp4 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(362)
						Float tmp5 = tmp4->_float(null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(362)
						return tmp5;
					}
					return null();
				}
				HX_END_LOCAL_FUNC0(return)

				HX_STACK_LINE(361)
				tmp3 =  Dynamic(new _Function_3_1());
			}
			HX_STACK_LINE(361)
			Dynamic randLambda = tmp3;		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(365)
			while((true)){
				HX_STACK_LINE(365)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				int tmp5 = this->totalTiles;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(365)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(365)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				if ((tmp7)){
					HX_STACK_LINE(365)
					break;
				}
				HX_STACK_LINE(367)
				int tmp8 = this->_data->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(367)
				int oldIndex = tmp8;		HX_STACK_VAR(oldIndex,"oldIndex");
				HX_STACK_LINE(368)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(369)
				int newIndex = oldIndex;		HX_STACK_VAR(newIndex,"newIndex");
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(370)
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(370)
					while((true)){
						HX_STACK_LINE(370)
						bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(370)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(370)
						if ((tmp10)){
							HX_STACK_LINE(370)
							break;
						}
						HX_STACK_LINE(370)
						int tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(370)
						int rand = tmp11;		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(370)
						++(_g);
						HX_STACK_LINE(372)
						bool tmp12 = (oldIndex == rand);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(372)
						if ((tmp12)){
							HX_STACK_LINE(374)
							Float tmp13 = randLambda().Cast< Float >();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(374)
							int tmp14 = this->_randomChoices->__get(j).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(374)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(374)
							int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(374)
							int k = tmp16;		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(375)
							int tmp17 = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(375)
							newIndex = tmp17;
						}
						HX_STACK_LINE(377)
						(j)++;
					}
				}
				HX_STACK_LINE(379)
				int tmp9 = newIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(379)
				this->_data[i] = tmp9;
				HX_STACK_LINE(380)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,randomizeIndices,(void))

Void FlxBaseTilemap_obj::autoTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","autoTile",0x7a0f9632,"flixel.tile.FlxBaseTilemap.autoTile","flixel/tile/FlxBaseTilemap.hx",391,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(392)
		int tmp = this->_data->__get(Index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		if ((tmp1)){
			HX_STACK_LINE(394)
			return null();
		}
		HX_STACK_LINE(397)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(400)
		int tmp2 = Index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		int tmp3 = this->widthInTiles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(400)
		int tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(400)
		bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(400)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(400)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(400)
		if ((tmp6)){
			HX_STACK_LINE(400)
			int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(400)
			int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(400)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(400)
			int tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(400)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(400)
			int tmp13 = this->_data->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(400)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(400)
			tmp7 = (tmp14 > (int)0);
		}
		else{
			HX_STACK_LINE(400)
			tmp7 = true;
		}
		HX_STACK_LINE(400)
		if ((tmp7)){
			HX_STACK_LINE(402)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(405)
		int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(405)
		int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(405)
		int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(405)
		int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(405)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(405)
		bool tmp13 = (tmp10 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(405)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(405)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(405)
		if ((tmp14)){
			HX_STACK_LINE(405)
			int tmp16 = (Index + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(405)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(405)
			int tmp18 = this->_data->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(405)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(405)
			tmp15 = (tmp19 > (int)0);
		}
		else{
			HX_STACK_LINE(405)
			tmp15 = true;
		}
		HX_STACK_LINE(405)
		if ((tmp15)){
			HX_STACK_LINE(407)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(410)
		int tmp16 = Index;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(410)
		int tmp17 = this->widthInTiles;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(410)
		int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(410)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(410)
		int tmp20 = this->totalTiles;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(410)
		bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(410)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(410)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(410)
		if ((tmp22)){
			HX_STACK_LINE(410)
			int tmp24 = Index;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(410)
			int tmp25 = this->widthInTiles;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(410)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(410)
			int tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(410)
			int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(410)
			int tmp29 = this->_data->__get(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(410)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(410)
			tmp23 = (tmp30 > (int)0);
		}
		else{
			HX_STACK_LINE(410)
			tmp23 = true;
		}
		HX_STACK_LINE(410)
		if ((tmp23)){
			HX_STACK_LINE(412)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(415)
		int tmp24 = Index;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(415)
		int tmp25 = this->widthInTiles;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(415)
		int tmp26 = hx::Mod(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(415)
		bool tmp27 = (tmp26 <= (int)0);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(415)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(415)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(415)
		if ((tmp28)){
			HX_STACK_LINE(415)
			int tmp30 = (Index - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(415)
			int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(415)
			int tmp32 = this->_data->__get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(415)
			int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(415)
			tmp29 = (tmp33 > (int)0);
		}
		else{
			HX_STACK_LINE(415)
			tmp29 = true;
		}
		HX_STACK_LINE(415)
		if ((tmp29)){
			HX_STACK_LINE(417)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(421)
		::flixel::tile::FlxTilemapAutoTiling tmp30 = this->_auto;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(421)
		bool tmp31 = (tmp30 == ::flixel::tile::FlxTilemapAutoTiling_obj::ALT);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(421)
		bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(421)
		if ((tmp31)){
			HX_STACK_LINE(421)
			int tmp33 = this->_data->__get(Index);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(421)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(421)
			tmp32 = (tmp34 == (int)15);
		}
		else{
			HX_STACK_LINE(421)
			tmp32 = false;
		}
		HX_STACK_LINE(421)
		if ((tmp32)){
			HX_STACK_LINE(424)
			int tmp33 = Index;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(424)
			int tmp34 = this->widthInTiles;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(424)
			int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(424)
			bool tmp36 = (tmp35 > (int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(424)
			bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(424)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(424)
			if ((tmp37)){
				HX_STACK_LINE(424)
				int tmp39 = Index;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(424)
				int tmp40 = this->widthInTiles;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(424)
				int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(424)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(424)
				int tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(424)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(424)
				int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(424)
				int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(424)
				int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(424)
				int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(424)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(424)
				int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(424)
				int tmp51 = this->totalTiles;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(424)
				int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(424)
				int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(424)
				tmp38 = (tmp50 < tmp53);
			}
			else{
				HX_STACK_LINE(424)
				tmp38 = false;
			}
			HX_STACK_LINE(424)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(424)
			if ((tmp38)){
				HX_STACK_LINE(424)
				int tmp40 = Index;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(424)
				int tmp41 = this->widthInTiles;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(424)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(424)
				int tmp43 = (tmp40 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(424)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(424)
				int tmp45 = (tmp44 - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(424)
				int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(424)
				int tmp47 = this->_data->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(424)
				int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(424)
				tmp39 = (tmp48 <= (int)0);
			}
			else{
				HX_STACK_LINE(424)
				tmp39 = false;
			}
			HX_STACK_LINE(424)
			if ((tmp39)){
				HX_STACK_LINE(426)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(429)
			int tmp40 = Index;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(429)
			int tmp41 = this->widthInTiles;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(429)
			int tmp42 = hx::Mod(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(429)
			bool tmp43 = (tmp42 > (int)0);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(429)
			bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(429)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(429)
			if ((tmp44)){
				HX_STACK_LINE(429)
				int tmp46 = Index;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(429)
				int tmp47 = this->widthInTiles;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(429)
				int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(429)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(429)
				int tmp50 = (tmp46 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(429)
				int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(429)
				int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(429)
				tmp45 = (tmp52 >= (int)0);
			}
			else{
				HX_STACK_LINE(429)
				tmp45 = false;
			}
			HX_STACK_LINE(429)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(429)
			if ((tmp45)){
				HX_STACK_LINE(429)
				int tmp47 = Index;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(429)
				int tmp48 = this->widthInTiles;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(429)
				int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(429)
				int tmp50 = (tmp47 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(429)
				int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(429)
				int tmp52 = (tmp51 - (int)1);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(429)
				int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(429)
				int tmp54 = this->_data->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(429)
				int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(429)
				tmp46 = (tmp55 <= (int)0);
			}
			else{
				HX_STACK_LINE(429)
				tmp46 = false;
			}
			HX_STACK_LINE(429)
			if ((tmp46)){
				HX_STACK_LINE(431)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(434)
			int tmp47 = Index;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(434)
			int tmp48 = this->widthInTiles;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(434)
			int tmp49 = hx::Mod(tmp47,tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(434)
			int tmp50 = this->widthInTiles;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(434)
			int tmp51 = (tmp50 - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(434)
			bool tmp52 = (tmp49 < tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(434)
			bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(434)
			bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(434)
			if ((tmp53)){
				HX_STACK_LINE(434)
				int tmp55 = Index;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(434)
				int tmp56 = this->widthInTiles;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(434)
				int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(434)
				int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(434)
				int tmp59 = (tmp55 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(434)
				int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(434)
				int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(434)
				tmp54 = (tmp61 >= (int)0);
			}
			else{
				HX_STACK_LINE(434)
				tmp54 = false;
			}
			HX_STACK_LINE(434)
			bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(434)
			if ((tmp54)){
				HX_STACK_LINE(434)
				int tmp56 = Index;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(434)
				int tmp57 = this->widthInTiles;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(434)
				int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(434)
				int tmp59 = (tmp56 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(434)
				int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(434)
				int tmp61 = (tmp60 + (int)1);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(434)
				int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(434)
				int tmp63 = this->_data->__get(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(434)
				int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(434)
				tmp55 = (tmp64 <= (int)0);
			}
			else{
				HX_STACK_LINE(434)
				tmp55 = false;
			}
			HX_STACK_LINE(434)
			if ((tmp55)){
				HX_STACK_LINE(436)
				this->_data[Index] = (int)4;
			}
			HX_STACK_LINE(439)
			int tmp56 = Index;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(439)
			int tmp57 = this->widthInTiles;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(439)
			int tmp58 = hx::Mod(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(439)
			int tmp59 = this->widthInTiles;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(439)
			int tmp60 = (tmp59 - (int)1);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(439)
			bool tmp61 = (tmp58 < tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(439)
			bool tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(439)
			bool tmp63;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(439)
			if ((tmp62)){
				HX_STACK_LINE(439)
				int tmp64 = Index;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(439)
				int tmp65 = this->widthInTiles;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(439)
				int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(439)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(439)
				int tmp68 = (tmp64 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(439)
				int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(439)
				int tmp70 = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(439)
				int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(439)
				int tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(439)
				int tmp73 = ::Std_obj::_int(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(439)
				int tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(439)
				int tmp75 = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(439)
				int tmp76 = this->totalTiles;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(439)
				int tmp77 = tmp76;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(439)
				int tmp78 = tmp77;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(439)
				tmp63 = (tmp75 < tmp78);
			}
			else{
				HX_STACK_LINE(439)
				tmp63 = false;
			}
			HX_STACK_LINE(439)
			bool tmp64;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(439)
			if ((tmp63)){
				HX_STACK_LINE(439)
				int tmp65 = Index;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(439)
				int tmp66 = this->widthInTiles;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(439)
				int tmp67 = tmp66;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(439)
				int tmp68 = (tmp65 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(439)
				int tmp69 = tmp68;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(439)
				int tmp70 = (tmp69 + (int)1);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(439)
				int tmp71 = tmp70;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(439)
				int tmp72 = this->_data->__get(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(439)
				int tmp73 = tmp72;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(439)
				tmp64 = (tmp73 <= (int)0);
			}
			else{
				HX_STACK_LINE(439)
				tmp64 = false;
			}
			HX_STACK_LINE(439)
			if ((tmp64)){
				HX_STACK_LINE(441)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(445)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTile,(void))

Void FlxBaseTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setCustomTileMappings",0x91d80f71,"flixel.tile.FlxBaseTilemap.setCustomTileMappings","flixel/tile/FlxBaseTilemap.hx",458,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_ARG(randomIndices,"randomIndices")
		HX_STACK_ARG(randomChoices,"randomChoices")
		HX_STACK_ARG(randomLambda,"randomLambda")
		HX_STACK_LINE(459)
		this->customTileRemap = mappings;
		HX_STACK_LINE(460)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(461)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(462)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(465)
		bool tmp = (this->_randomIndices != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		if ((tmp)){
			HX_STACK_LINE(465)
			bool tmp2 = (this->_randomChoices == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(465)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(465)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(465)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(465)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(465)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(465)
			if ((tmp7)){
				HX_STACK_LINE(465)
				int tmp8 = this->_randomChoices->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(465)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(465)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(465)
				tmp1 = (tmp10 == (int)0);
			}
			else{
				HX_STACK_LINE(465)
				tmp1 = true;
			}
		}
		else{
			HX_STACK_LINE(465)
			tmp1 = false;
		}
		HX_STACK_LINE(465)
		if ((tmp1)){
			HX_STACK_LINE(467)
			HX_STACK_DO_THROW(HX_HCSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function.","\x58","\xd6","\x21","\x51"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setCustomTileMappings,(void))

int FlxBaseTilemap_obj::getTile( int X,int Y){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTile",0x3ff9148f,"flixel.tile.FlxBaseTilemap.getTile","flixel/tile/FlxBaseTilemap.hx",479,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(480)
	int tmp = Y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	int tmp1 = this->widthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	int tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(480)
	int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(480)
	int tmp5 = this->_data->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(480)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTile,return )

int FlxBaseTilemap_obj::getTileByIndex( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileByIndex",0xf0387cec,"flixel.tile.FlxBaseTilemap.getTileByIndex","flixel/tile/FlxBaseTilemap.hx",490,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(491)
	int tmp = this->_data->__get(Index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(491)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileByIndex,return )

int FlxBaseTilemap_obj::getTileCollisions( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileCollisions",0x9ca1bd30,"flixel.tile.FlxBaseTilemap.getTileCollisions","flixel/tile/FlxBaseTilemap.hx",501,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(502)
	Dynamic tmp = this->_tileObjects->__GetItem(Index);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(502)
	int tmp1 = tmp->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(502)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileCollisions,return )

Array< int > FlxBaseTilemap_obj::getTileInstances( int Index){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getTileInstances",0xa0cac4af,"flixel.tile.FlxBaseTilemap.getTileInstances","flixel/tile/FlxBaseTilemap.hx",512,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(513)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(514)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(515)
	int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(515)
	int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(515)
	int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(515)
	int l = tmp2;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(517)
	while((true)){
		HX_STACK_LINE(517)
		bool tmp3 = (i < l);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(517)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(517)
		if ((tmp4)){
			HX_STACK_LINE(517)
			break;
		}
		HX_STACK_LINE(519)
		int tmp5 = this->_data->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(519)
		int tmp6 = Index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(519)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(519)
		if ((tmp7)){
			HX_STACK_LINE(521)
			bool tmp8 = (array == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(521)
			if ((tmp8)){
				HX_STACK_LINE(523)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(525)
			int tmp9 = i;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(525)
			array->push(tmp9);
		}
		HX_STACK_LINE(527)
		(i)++;
	}
	HX_STACK_LINE(530)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileInstances,return )

bool FlxBaseTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTile",0x32faa59b,"flixel.tile.FlxBaseTilemap.setTile","flixel/tile/FlxBaseTilemap.hx",543,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(544)
		int tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(544)
		int tmp1 = this->widthInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(544)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(544)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(544)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(544)
		if ((tmp3)){
			HX_STACK_LINE(544)
			int tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(544)
			int tmp6 = this->heightInTiles;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			tmp4 = (tmp5 >= tmp7);
		}
		else{
			HX_STACK_LINE(544)
			tmp4 = true;
		}
		HX_STACK_LINE(544)
		if ((tmp4)){
			HX_STACK_LINE(546)
			return false;
		}
		HX_STACK_LINE(549)
		int tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		int tmp6 = this->widthInTiles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(549)
		int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(549)
		int tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(549)
		int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(549)
		int tmp10 = Tile;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(549)
		bool tmp11 = UpdateGraphics;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(549)
		bool tmp12 = this->setTileByIndex(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(549)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setTile,return )

bool FlxBaseTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTileByIndex",0x10586560,"flixel.tile.FlxBaseTilemap.setTileByIndex","flixel/tile/FlxBaseTilemap.hx",561,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(562)
		int tmp = Index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(562)
		int tmp1 = this->_data->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(562)
		if ((tmp2)){
			HX_STACK_LINE(564)
			return false;
		}
		HX_STACK_LINE(567)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(568)
		int tmp3 = Tile;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(568)
		this->_data[Index] = tmp3;
		HX_STACK_LINE(570)
		bool tmp4 = UpdateGraphics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(570)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(570)
		if ((tmp5)){
			HX_STACK_LINE(572)
			bool tmp6 = ok;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(572)
			return tmp6;
		}
		HX_STACK_LINE(575)
		this->setDirty(null());
		HX_STACK_LINE(577)
		::flixel::tile::FlxTilemapAutoTiling tmp6 = this->_auto;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(577)
		bool tmp7 = (tmp6 == ::flixel::tile::FlxTilemapAutoTiling_obj::OFF);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(577)
		if ((tmp7)){
			HX_STACK_LINE(579)
			int tmp8 = this->_data->__get(Index);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(579)
			this->updateTile(tmp8);
			HX_STACK_LINE(580)
			bool tmp9 = ok;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(580)
			return tmp9;
		}
		HX_STACK_LINE(584)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(585)
		int tmp8 = Index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(585)
		int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(585)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(585)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(585)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(585)
		int row = tmp12;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(586)
		int tmp13 = (row + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(586)
		int rowLength = tmp13;		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(587)
		int tmp14 = Index;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(587)
		int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(587)
		int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(587)
		int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(587)
		int column = tmp17;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(588)
		int tmp18 = (column + (int)3);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(588)
		int columnHeight = tmp18;		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(590)
		while((true)){
			HX_STACK_LINE(590)
			bool tmp19 = (row < rowLength);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(590)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(590)
			if ((tmp20)){
				HX_STACK_LINE(590)
				break;
			}
			HX_STACK_LINE(592)
			int tmp21 = (columnHeight - (int)3);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(592)
			column = tmp21;
			HX_STACK_LINE(594)
			while((true)){
				HX_STACK_LINE(594)
				bool tmp22 = (column < columnHeight);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(594)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(594)
				if ((tmp23)){
					HX_STACK_LINE(594)
					break;
				}
				HX_STACK_LINE(596)
				bool tmp24 = (row >= (int)0);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(596)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(596)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(596)
				if ((tmp25)){
					HX_STACK_LINE(596)
					int tmp27 = row;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(596)
					int tmp28 = this->heightInTiles;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(596)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(596)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(596)
					tmp26 = (tmp27 < tmp30);
				}
				else{
					HX_STACK_LINE(596)
					tmp26 = false;
				}
				HX_STACK_LINE(596)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(596)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(596)
				if ((tmp27)){
					HX_STACK_LINE(596)
					tmp28 = (column >= (int)0);
				}
				else{
					HX_STACK_LINE(596)
					tmp28 = false;
				}
				HX_STACK_LINE(596)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(596)
				if ((tmp28)){
					HX_STACK_LINE(596)
					int tmp30 = column;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(596)
					int tmp31 = this->widthInTiles;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(596)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(596)
					tmp29 = (tmp30 < tmp32);
				}
				else{
					HX_STACK_LINE(596)
					tmp29 = false;
				}
				HX_STACK_LINE(596)
				if ((tmp29)){
					HX_STACK_LINE(598)
					int tmp30 = row;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(598)
					int tmp31 = this->widthInTiles;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(598)
					int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(598)
					int tmp33 = column;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(598)
					int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(598)
					i = tmp34;
					HX_STACK_LINE(599)
					int tmp35 = i;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(599)
					this->autoTile(tmp35);
					HX_STACK_LINE(600)
					int tmp36 = this->_data->__get(i);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(600)
					this->updateTile(tmp36);
				}
				HX_STACK_LINE(602)
				(column)++;
			}
			HX_STACK_LINE(604)
			(row)++;
		}
		HX_STACK_LINE(607)
		bool tmp19 = ok;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(607)
		return tmp19;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,setTileByIndex,return )

Void FlxBaseTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::hx::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","setTileProperties",0x2905d56e,"flixel.tile.FlxBaseTilemap.setTileProperties","flixel/tile/FlxBaseTilemap.hx",621,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(AllowCollisions,"AllowCollisions")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(CallbackFilter,"CallbackFilter")
	HX_STACK_ARG(Range,"Range")
{
		HX_STACK_LINE(622)
		bool tmp = (Range <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(622)
		if ((tmp)){
			HX_STACK_LINE(624)
			Range = (int)1;
		}
		HX_STACK_LINE(627)
		Dynamic tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(628)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(629)
		int tmp1 = (Tile + Range);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(629)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(631)
		int tmp2 = this->_tileObjects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(631)
		int maxIndex = tmp2;		HX_STACK_VAR(maxIndex,"maxIndex");
		HX_STACK_LINE(632)
		bool tmp3 = (l > maxIndex);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(632)
		if ((tmp3)){
			HX_STACK_LINE(634)
			::String tmp4 = (HX_HCSTRING("Index ","\xee","\x88","\x87","\xc8") + l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(634)
			::String tmp5 = (tmp4 + HX_HCSTRING(" exceeds the maximum tile index of ","\xd9","\x51","\x06","\xf4"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(634)
			int tmp6 = maxIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(634)
			::String tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(634)
			::String tmp8 = (tmp7 + HX_HCSTRING(". Please verfiy the Tile (","\xee","\x52","\xa5","\x6c"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(634)
			int tmp9 = Tile;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(634)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(634)
			::String tmp11 = (tmp10 + HX_HCSTRING(") and Range (","\x25","\xce","\x96","\x19"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(634)
			int tmp12 = Range;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(634)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(634)
			::String tmp14 = (tmp13 + HX_HCSTRING(") parameters.","\xcd","\xe3","\x29","\x61"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(634)
			HX_STACK_DO_THROW(tmp14);
		}
		HX_STACK_LINE(637)
		while((true)){
			HX_STACK_LINE(637)
			bool tmp4 = (i < l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(637)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(637)
			if ((tmp5)){
				HX_STACK_LINE(637)
				break;
			}
			HX_STACK_LINE(639)
			int tmp6 = (i)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(639)
			Dynamic tmp7 = this->_tileObjects->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(639)
			tile = tmp7;
			HX_STACK_LINE(640)
			int tmp8 = AllowCollisions;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(640)
			tile->__Field(HX_HCSTRING("set_allowCollisions","\xcd","\x8b","\x81","\x21"), hx::paccDynamic )(tmp8);
			HX_STACK_LINE(641)
			tile->__FieldRef(HX_HCSTRING("callbackFunction","\xfd","\xcd","\x91","\x7e")) = Callback;
			HX_STACK_LINE(642)
			tile->__FieldRef(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")) = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,setTileProperties,(void))

Array< int > FlxBaseTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getData",0x355f9f8b,"flixel.tile.FlxBaseTilemap.getData","flixel/tile/FlxBaseTilemap.hx",654,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(655)
		bool tmp = Simple;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(655)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(655)
		if ((tmp1)){
			HX_STACK_LINE(657)
			return this->_data;
		}
		HX_STACK_LINE(660)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(661)
		int tmp2 = this->_data->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(661)
		int l = tmp2;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(662)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(663)
		int tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(663)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,tmp3);
		HX_STACK_LINE(665)
		while((true)){
			HX_STACK_LINE(665)
			bool tmp4 = (i < l);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(665)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(665)
			if ((tmp5)){
				HX_STACK_LINE(665)
				break;
			}
			HX_STACK_LINE(667)
			int tmp6 = this->_data->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(667)
			Dynamic tmp7 = this->_tileObjects->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(667)
			int tmp8 = tmp7->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(667)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(667)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(667)
			if ((tmp9)){
				HX_STACK_LINE(667)
				tmp10 = (int)1;
			}
			else{
				HX_STACK_LINE(667)
				tmp10 = (int)0;
			}
			HX_STACK_LINE(667)
			data[i] = tmp10;
			HX_STACK_LINE(668)
			(i)++;
		}
		HX_STACK_LINE(671)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getData,return )

Array< ::Dynamic > FlxBaseTilemap_obj::findPath( ::flixel::math::FlxPoint Start,::flixel::math::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< int >  __o_DiagonalPolicy){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
int DiagonalPolicy = __o_DiagonalPolicy.Default(2);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","findPath",0xe6d2ce73,"flixel.tile.FlxBaseTilemap.findPath","flixel/tile/FlxBaseTilemap.hx",686,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Simplify,"Simplify")
	HX_STACK_ARG(RaySimplify,"RaySimplify")
	HX_STACK_ARG(DiagonalPolicy,"DiagonalPolicy")
{
		HX_STACK_LINE(688)
		::flixel::math::FlxPoint tmp = Start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(688)
		int tmp1 = this->getTileIndexByCoords(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(688)
		int startIndex = tmp1;		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(689)
		::flixel::math::FlxPoint tmp2 = End;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(689)
		int tmp3 = this->getTileIndexByCoords(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(689)
		int endIndex = tmp3;		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(692)
		int tmp4 = this->_data->__get(startIndex);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(692)
		Dynamic tmp5 = this->_tileObjects->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(692)
		int tmp6 = tmp5->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(692)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(692)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(692)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(692)
		if ((tmp8)){
			HX_STACK_LINE(692)
			int tmp10 = this->_data->__get(endIndex);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(692)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(692)
			Dynamic tmp12 = this->_tileObjects->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(692)
			Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(692)
			int tmp14 = tmp13->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(692)
			tmp9 = (tmp14 > (int)0);
		}
		else{
			HX_STACK_LINE(692)
			tmp9 = true;
		}
		HX_STACK_LINE(692)
		if ((tmp9)){
			HX_STACK_LINE(694)
			return null();
		}
		HX_STACK_LINE(698)
		int tmp10 = startIndex;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(698)
		int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(698)
		int tmp12 = DiagonalPolicy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(698)
		Array< int > distances = this->computePathDistance(tmp10,tmp11,tmp12,null());		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(700)
		bool tmp13 = (distances == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(700)
		if ((tmp13)){
			HX_STACK_LINE(702)
			return null();
		}
		HX_STACK_LINE(706)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(707)
		int tmp14 = endIndex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(707)
		this->walkPath(distances,tmp14,points);
		HX_STACK_LINE(710)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(711)
		int tmp15 = (points->length - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(711)
		::flixel::math::FlxPoint tmp16 = points->__get(tmp15).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(711)
		node = tmp16;
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			Float tmp17 = Start->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(712)
			node->set_x(tmp17);
			HX_STACK_LINE(712)
			Float tmp18 = Start->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(712)
			node->set_y(tmp18);
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				bool tmp19 = Start->_weak;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(712)
				if ((tmp19)){
					HX_STACK_LINE(712)
					Start->put();
				}
			}
			HX_STACK_LINE(712)
			node;
		}
		HX_STACK_LINE(713)
		::flixel::math::FlxPoint tmp17 = points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(713)
		node = tmp17;
		HX_STACK_LINE(714)
		{
			HX_STACK_LINE(714)
			Float tmp18 = End->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(714)
			node->set_x(tmp18);
			HX_STACK_LINE(714)
			Float tmp19 = End->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(714)
			node->set_y(tmp19);
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				bool tmp20 = End->_weak;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(714)
				if ((tmp20)){
					HX_STACK_LINE(714)
					End->put();
				}
			}
			HX_STACK_LINE(714)
			node;
		}
		HX_STACK_LINE(717)
		bool tmp18 = Simplify;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(717)
		if ((tmp18)){
			HX_STACK_LINE(719)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(721)
		bool tmp19 = RaySimplify;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(721)
		if ((tmp19)){
			HX_STACK_LINE(723)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(727)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(728)
		int tmp20 = (points->length - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(728)
		int i = tmp20;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(730)
		while((true)){
			HX_STACK_LINE(730)
			bool tmp21 = (i >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(730)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(730)
			if ((tmp22)){
				HX_STACK_LINE(730)
				break;
			}
			HX_STACK_LINE(732)
			int tmp23 = (i)--;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(732)
			::flixel::math::FlxPoint tmp24 = points->__get(tmp23).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(732)
			node = tmp24;
			HX_STACK_LINE(734)
			bool tmp25 = (node != null());		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(734)
			if ((tmp25)){
				HX_STACK_LINE(736)
				::flixel::math::FlxPoint tmp26 = node;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(736)
				path->push(tmp26);
			}
		}
		HX_STACK_LINE(740)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,findPath,return )

Array< int > FlxBaseTilemap_obj::computePathDistance( int StartIndex,int EndIndex,int DiagonalPolicy,hx::Null< bool >  __o_StopOnEnd){
bool StopOnEnd = __o_StopOnEnd.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","computePathDistance",0x34e53a3c,"flixel.tile.FlxBaseTilemap.computePathDistance","flixel/tile/FlxBaseTilemap.hx",754,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
	HX_STACK_ARG(DiagonalPolicy,"DiagonalPolicy")
	HX_STACK_ARG(StopOnEnd,"StopOnEnd")
{
		HX_STACK_LINE(757)
		int tmp = this->widthInTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(757)
		int tmp1 = this->heightInTiles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(757)
		int tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(757)
		int mapSize = tmp2;		HX_STACK_VAR(mapSize,"mapSize");
		HX_STACK_LINE(758)
		Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(759)
		int tmp3 = mapSize;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,tmp3);
		HX_STACK_LINE(760)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			bool tmp4 = (i < mapSize);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(762)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(762)
			if ((tmp5)){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(764)
			int tmp6 = this->_data->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(764)
			Dynamic tmp7 = this->_tileObjects->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(764)
			int tmp8 = tmp7->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(764)
			bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(764)
			if ((tmp9)){
				HX_STACK_LINE(766)
				distances[i] = (int)-2;
			}
			else{
				HX_STACK_LINE(770)
				distances[i] = (int)-1;
			}
			HX_STACK_LINE(772)
			(i)++;
		}
		HX_STACK_LINE(775)
		distances[StartIndex] = (int)0;
		HX_STACK_LINE(776)
		int distance = (int)1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(777)
		Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
		HX_STACK_LINE(778)
		Array< int > current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(779)
		int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(780)
		bool left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(781)
		bool right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(782)
		bool up;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(783)
		bool down;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(784)
		int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(785)
		bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
		HX_STACK_LINE(787)
		while((true)){
			HX_STACK_LINE(787)
			bool tmp4 = (neighbors->length > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(787)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(787)
			if ((tmp5)){
				HX_STACK_LINE(787)
				break;
			}
			HX_STACK_LINE(789)
			current = neighbors;
			HX_STACK_LINE(790)
			neighbors = Array_obj< int >::__new();
			HX_STACK_LINE(792)
			i = (int)0;
			HX_STACK_LINE(793)
			currentLength = current->length;
			HX_STACK_LINE(794)
			while((true)){
				HX_STACK_LINE(794)
				bool tmp6 = (i < currentLength);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(794)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(794)
				if ((tmp7)){
					HX_STACK_LINE(794)
					break;
				}
				HX_STACK_LINE(796)
				int tmp8 = (i)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(796)
				int tmp9 = current->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(796)
				currentIndex = tmp9;
				HX_STACK_LINE(798)
				int tmp10 = currentIndex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(798)
				int tmp11 = EndIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(798)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(798)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(798)
				if ((tmp13)){
					HX_STACK_LINE(800)
					foundEnd = true;
					HX_STACK_LINE(801)
					bool tmp14 = StopOnEnd;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(801)
					if ((tmp14)){
						HX_STACK_LINE(803)
						neighbors = Array_obj< int >::__new();
						HX_STACK_LINE(804)
						break;
					}
				}
				HX_STACK_LINE(809)
				int tmp14 = currentIndex;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(809)
				int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(809)
				int tmp16 = hx::Mod(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(809)
				bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(809)
				left = tmp17;
				HX_STACK_LINE(810)
				int tmp18 = currentIndex;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(810)
				int tmp19 = this->widthInTiles;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(810)
				int tmp20 = hx::Mod(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(810)
				int tmp21 = this->widthInTiles;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(810)
				int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(810)
				bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(810)
				right = tmp23;
				HX_STACK_LINE(811)
				int tmp24 = currentIndex;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(811)
				int tmp25 = this->widthInTiles;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(811)
				Float tmp26 = (Float(tmp24) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(811)
				bool tmp27 = (tmp26 > (int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(811)
				up = tmp27;
				HX_STACK_LINE(812)
				int tmp28 = currentIndex;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(812)
				int tmp29 = this->widthInTiles;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(812)
				Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(812)
				int tmp31 = this->heightInTiles;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(812)
				int tmp32 = (tmp31 - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(812)
				bool tmp33 = (tmp30 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(812)
				down = tmp33;
				HX_STACK_LINE(814)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(816)
				bool tmp34 = up;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(816)
				if ((tmp34)){
					HX_STACK_LINE(818)
					int tmp35 = currentIndex;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(818)
					int tmp36 = this->widthInTiles;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(818)
					int tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(818)
					index = tmp37;
					HX_STACK_LINE(820)
					int tmp38 = distances->__get(index);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(820)
					bool tmp39 = (tmp38 == (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(820)
					if ((tmp39)){
						HX_STACK_LINE(822)
						int tmp40 = distance;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(822)
						distances[index] = tmp40;
						HX_STACK_LINE(823)
						int tmp41 = index;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(823)
						neighbors->push(tmp41);
					}
				}
				HX_STACK_LINE(826)
				bool tmp35 = right;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(826)
				if ((tmp35)){
					HX_STACK_LINE(828)
					int tmp36 = (currentIndex + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(828)
					index = tmp36;
					HX_STACK_LINE(830)
					int tmp37 = distances->__get(index);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(830)
					bool tmp38 = (tmp37 == (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(830)
					if ((tmp38)){
						HX_STACK_LINE(832)
						int tmp39 = distance;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(832)
						distances[index] = tmp39;
						HX_STACK_LINE(833)
						int tmp40 = index;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(833)
						neighbors->push(tmp40);
					}
				}
				HX_STACK_LINE(836)
				bool tmp36 = down;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(836)
				if ((tmp36)){
					HX_STACK_LINE(838)
					int tmp37 = currentIndex;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(838)
					int tmp38 = this->widthInTiles;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(838)
					int tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(838)
					index = tmp39;
					HX_STACK_LINE(840)
					int tmp40 = distances->__get(index);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(840)
					bool tmp41 = (tmp40 == (int)-1);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(840)
					if ((tmp41)){
						HX_STACK_LINE(842)
						int tmp42 = distance;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(842)
						distances[index] = tmp42;
						HX_STACK_LINE(843)
						int tmp43 = index;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(843)
						neighbors->push(tmp43);
					}
				}
				HX_STACK_LINE(846)
				bool tmp37 = left;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(846)
				if ((tmp37)){
					HX_STACK_LINE(848)
					int tmp38 = (currentIndex - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(848)
					index = tmp38;
					HX_STACK_LINE(850)
					int tmp39 = distances->__get(index);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(850)
					bool tmp40 = (tmp39 == (int)-1);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(850)
					if ((tmp40)){
						HX_STACK_LINE(852)
						int tmp41 = distance;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(852)
						distances[index] = tmp41;
						HX_STACK_LINE(853)
						int tmp42 = index;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(853)
						neighbors->push(tmp42);
					}
				}
				HX_STACK_LINE(857)
				bool tmp38 = (DiagonalPolicy != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(857)
				if ((tmp38)){
					HX_STACK_LINE(859)
					bool tmp39 = (DiagonalPolicy == (int)2);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(859)
					bool WideDiagonal = tmp39;		HX_STACK_VAR(WideDiagonal,"WideDiagonal");
					HX_STACK_LINE(860)
					bool tmp40 = up;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(860)
					bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(860)
					if ((tmp40)){
						HX_STACK_LINE(860)
						tmp41 = right;
					}
					else{
						HX_STACK_LINE(860)
						tmp41 = false;
					}
					HX_STACK_LINE(860)
					if ((tmp41)){
						HX_STACK_LINE(862)
						int tmp42 = currentIndex;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(862)
						int tmp43 = this->widthInTiles;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(862)
						int tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(862)
						int tmp45 = (tmp44 + (int)1);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(862)
						index = tmp45;
						HX_STACK_LINE(864)
						bool tmp46 = WideDiagonal;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(864)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(864)
						bool tmp48;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(864)
						if ((tmp47)){
							HX_STACK_LINE(864)
							int tmp49 = distances->__get(index);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(864)
							int tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(864)
							int tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(864)
							tmp48 = (tmp51 == (int)-1);
						}
						else{
							HX_STACK_LINE(864)
							tmp48 = false;
						}
						HX_STACK_LINE(864)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(864)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(864)
						if ((tmp49)){
							HX_STACK_LINE(864)
							int tmp51 = currentIndex;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(864)
							int tmp52 = this->widthInTiles;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(864)
							int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(864)
							int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(864)
							int tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(864)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(864)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(864)
							int tmp58 = distances->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(864)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(864)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(864)
							tmp50 = (tmp60 >= (int)-1);
						}
						else{
							HX_STACK_LINE(864)
							tmp50 = false;
						}
						HX_STACK_LINE(864)
						bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(864)
						if ((tmp50)){
							HX_STACK_LINE(864)
							int tmp52 = (currentIndex + (int)1);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(864)
							int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(864)
							int tmp54 = distances->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(864)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(864)
							tmp51 = (tmp55 >= (int)-1);
						}
						else{
							HX_STACK_LINE(864)
							tmp51 = false;
						}
						HX_STACK_LINE(864)
						if ((tmp51)){
							HX_STACK_LINE(866)
							int tmp52 = distance;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(866)
							distances[index] = tmp52;
							HX_STACK_LINE(867)
							int tmp53 = index;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(867)
							neighbors->push(tmp53);
						}
						else{
							HX_STACK_LINE(869)
							bool tmp52 = WideDiagonal;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(869)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(869)
							bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(869)
							bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(869)
							if ((tmp54)){
								HX_STACK_LINE(869)
								int tmp56 = distances->__get(index);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(869)
								int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(869)
								tmp55 = (tmp57 == (int)-1);
							}
							else{
								HX_STACK_LINE(869)
								tmp55 = false;
							}
							HX_STACK_LINE(869)
							if ((tmp55)){
								HX_STACK_LINE(871)
								int tmp56 = distance;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(871)
								distances[index] = tmp56;
								HX_STACK_LINE(872)
								int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(872)
								neighbors->push(tmp57);
							}
						}
					}
					HX_STACK_LINE(875)
					bool tmp42 = right;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(875)
					bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(875)
					if ((tmp42)){
						HX_STACK_LINE(875)
						tmp43 = down;
					}
					else{
						HX_STACK_LINE(875)
						tmp43 = false;
					}
					HX_STACK_LINE(875)
					if ((tmp43)){
						HX_STACK_LINE(877)
						int tmp44 = currentIndex;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(877)
						int tmp45 = this->widthInTiles;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(877)
						int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(877)
						int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(877)
						index = tmp47;
						HX_STACK_LINE(879)
						bool tmp48 = WideDiagonal;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(879)
						bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(879)
						bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(879)
						if ((tmp49)){
							HX_STACK_LINE(879)
							int tmp51 = distances->__get(index);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(879)
							int tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(879)
							int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(879)
							tmp50 = (tmp53 == (int)-1);
						}
						else{
							HX_STACK_LINE(879)
							tmp50 = false;
						}
						HX_STACK_LINE(879)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(879)
						bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(879)
						if ((tmp51)){
							HX_STACK_LINE(879)
							int tmp53 = currentIndex;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(879)
							int tmp54 = this->widthInTiles;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(879)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(879)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(879)
							int tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(879)
							int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(879)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(879)
							int tmp60 = distances->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(879)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(879)
							int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(879)
							tmp52 = (tmp62 >= (int)-1);
						}
						else{
							HX_STACK_LINE(879)
							tmp52 = false;
						}
						HX_STACK_LINE(879)
						bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(879)
						if ((tmp52)){
							HX_STACK_LINE(879)
							int tmp54 = (currentIndex + (int)1);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(879)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(879)
							int tmp56 = distances->__get(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(879)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(879)
							tmp53 = (tmp57 >= (int)-1);
						}
						else{
							HX_STACK_LINE(879)
							tmp53 = false;
						}
						HX_STACK_LINE(879)
						if ((tmp53)){
							HX_STACK_LINE(881)
							int tmp54 = distance;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(881)
							distances[index] = tmp54;
							HX_STACK_LINE(882)
							int tmp55 = index;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(882)
							neighbors->push(tmp55);
						}
						else{
							HX_STACK_LINE(884)
							bool tmp54 = WideDiagonal;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(884)
							bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(884)
							bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(884)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(884)
							if ((tmp56)){
								HX_STACK_LINE(884)
								int tmp58 = distances->__get(index);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(884)
								int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(884)
								tmp57 = (tmp59 == (int)-1);
							}
							else{
								HX_STACK_LINE(884)
								tmp57 = false;
							}
							HX_STACK_LINE(884)
							if ((tmp57)){
								HX_STACK_LINE(886)
								int tmp58 = distance;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(886)
								distances[index] = tmp58;
								HX_STACK_LINE(887)
								int tmp59 = index;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(887)
								neighbors->push(tmp59);
							}
						}
					}
					HX_STACK_LINE(890)
					bool tmp44 = left;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(890)
					bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(890)
					if ((tmp44)){
						HX_STACK_LINE(890)
						tmp45 = down;
					}
					else{
						HX_STACK_LINE(890)
						tmp45 = false;
					}
					HX_STACK_LINE(890)
					if ((tmp45)){
						HX_STACK_LINE(892)
						int tmp46 = currentIndex;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(892)
						int tmp47 = this->widthInTiles;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(892)
						int tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(892)
						int tmp49 = (tmp48 - (int)1);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(892)
						index = tmp49;
						HX_STACK_LINE(894)
						bool tmp50 = WideDiagonal;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(894)
						bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(894)
						bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(894)
						if ((tmp51)){
							HX_STACK_LINE(894)
							int tmp53 = distances->__get(index);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(894)
							int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(894)
							int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(894)
							tmp52 = (tmp55 == (int)-1);
						}
						else{
							HX_STACK_LINE(894)
							tmp52 = false;
						}
						HX_STACK_LINE(894)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(894)
						bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(894)
						if ((tmp53)){
							HX_STACK_LINE(894)
							int tmp55 = currentIndex;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(894)
							int tmp56 = this->widthInTiles;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(894)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(894)
							int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(894)
							int tmp59 = (tmp55 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(894)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(894)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(894)
							int tmp62 = distances->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(894)
							int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(894)
							int tmp64 = tmp63;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(894)
							tmp54 = (tmp64 >= (int)-1);
						}
						else{
							HX_STACK_LINE(894)
							tmp54 = false;
						}
						HX_STACK_LINE(894)
						bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(894)
						if ((tmp54)){
							HX_STACK_LINE(894)
							int tmp56 = (currentIndex - (int)1);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(894)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(894)
							int tmp58 = distances->__get(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(894)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(894)
							tmp55 = (tmp59 >= (int)-1);
						}
						else{
							HX_STACK_LINE(894)
							tmp55 = false;
						}
						HX_STACK_LINE(894)
						if ((tmp55)){
							HX_STACK_LINE(896)
							int tmp56 = distance;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(896)
							distances[index] = tmp56;
							HX_STACK_LINE(897)
							int tmp57 = index;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(897)
							neighbors->push(tmp57);
						}
						else{
							HX_STACK_LINE(899)
							bool tmp56 = WideDiagonal;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(899)
							bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(899)
							bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(899)
							bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(899)
							if ((tmp58)){
								HX_STACK_LINE(899)
								int tmp60 = distances->__get(index);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(899)
								int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(899)
								tmp59 = (tmp61 == (int)-1);
							}
							else{
								HX_STACK_LINE(899)
								tmp59 = false;
							}
							HX_STACK_LINE(899)
							if ((tmp59)){
								HX_STACK_LINE(901)
								int tmp60 = distance;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(901)
								distances[index] = tmp60;
								HX_STACK_LINE(902)
								int tmp61 = index;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(902)
								neighbors->push(tmp61);
							}
						}
					}
					HX_STACK_LINE(905)
					bool tmp46 = up;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(905)
					bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(905)
					if ((tmp46)){
						HX_STACK_LINE(905)
						tmp47 = left;
					}
					else{
						HX_STACK_LINE(905)
						tmp47 = false;
					}
					HX_STACK_LINE(905)
					if ((tmp47)){
						HX_STACK_LINE(907)
						int tmp48 = currentIndex;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(907)
						int tmp49 = this->widthInTiles;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(907)
						int tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(907)
						int tmp51 = (tmp50 - (int)1);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(907)
						index = tmp51;
						HX_STACK_LINE(909)
						bool tmp52 = WideDiagonal;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(909)
						bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(909)
						bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(909)
						if ((tmp53)){
							HX_STACK_LINE(909)
							int tmp55 = distances->__get(index);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(909)
							int tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(909)
							int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(909)
							tmp54 = (tmp57 == (int)-1);
						}
						else{
							HX_STACK_LINE(909)
							tmp54 = false;
						}
						HX_STACK_LINE(909)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(909)
						bool tmp56;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(909)
						if ((tmp55)){
							HX_STACK_LINE(909)
							int tmp57 = currentIndex;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(909)
							int tmp58 = this->widthInTiles;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(909)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(909)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(909)
							int tmp61 = (tmp57 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(909)
							int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(909)
							int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(909)
							int tmp64 = distances->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(909)
							int tmp65 = tmp64;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(909)
							int tmp66 = tmp65;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(909)
							tmp56 = (tmp66 >= (int)-1);
						}
						else{
							HX_STACK_LINE(909)
							tmp56 = false;
						}
						HX_STACK_LINE(909)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(909)
						if ((tmp56)){
							HX_STACK_LINE(909)
							int tmp58 = (currentIndex - (int)1);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(909)
							int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(909)
							int tmp60 = distances->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(909)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(909)
							tmp57 = (tmp61 >= (int)-1);
						}
						else{
							HX_STACK_LINE(909)
							tmp57 = false;
						}
						HX_STACK_LINE(909)
						if ((tmp57)){
							HX_STACK_LINE(911)
							int tmp58 = distance;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(911)
							distances[index] = tmp58;
							HX_STACK_LINE(912)
							int tmp59 = index;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(912)
							neighbors->push(tmp59);
						}
						else{
							HX_STACK_LINE(914)
							bool tmp58 = WideDiagonal;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(914)
							bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(914)
							bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(914)
							bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(914)
							if ((tmp60)){
								HX_STACK_LINE(914)
								int tmp62 = distances->__get(index);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(914)
								int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(914)
								tmp61 = (tmp63 == (int)-1);
							}
							else{
								HX_STACK_LINE(914)
								tmp61 = false;
							}
							HX_STACK_LINE(914)
							if ((tmp61)){
								HX_STACK_LINE(916)
								int tmp62 = distance;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(916)
								distances[index] = tmp62;
								HX_STACK_LINE(917)
								int tmp63 = index;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(917)
								neighbors->push(tmp63);
							}
						}
					}
				}
			}
			HX_STACK_LINE(923)
			(distance)++;
		}
		HX_STACK_LINE(925)
		bool tmp4 = foundEnd;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(925)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(925)
		if ((tmp5)){
			HX_STACK_LINE(927)
			distances = null();
		}
		HX_STACK_LINE(930)
		return distances;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathDistance,return )

Void FlxBaseTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","walkPath",0xa1980343,"flixel.tile.FlxBaseTilemap.walkPath","flixel/tile/FlxBaseTilemap.hx",941,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(942)
		int tmp = Start;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(942)
		::flixel::math::FlxPoint tmp1 = this->getTileCoordsByIndex(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(942)
		Points->push(tmp1);
		HX_STACK_LINE(944)
		int tmp2 = Data->__get(Start);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(944)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(944)
		if ((tmp3)){
			HX_STACK_LINE(946)
			return null();
		}
		HX_STACK_LINE(950)
		int tmp4 = Start;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(950)
		int tmp5 = this->widthInTiles;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(950)
		int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(950)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(950)
		bool left = tmp7;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(951)
		int tmp8 = Start;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(951)
		int tmp9 = this->widthInTiles;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(951)
		int tmp10 = hx::Mod(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(951)
		int tmp11 = this->widthInTiles;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(951)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(951)
		bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(951)
		bool right = tmp13;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(952)
		int tmp14 = Start;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(952)
		int tmp15 = this->widthInTiles;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(952)
		Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(952)
		bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(952)
		bool up = tmp17;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(953)
		int tmp18 = Start;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(953)
		int tmp19 = this->widthInTiles;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(953)
		Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(953)
		int tmp21 = this->heightInTiles;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(953)
		int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(953)
		bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(953)
		bool down = tmp23;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(955)
		int tmp24 = Data->__get(Start);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(955)
		int current = tmp24;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(956)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(958)
		bool tmp25 = up;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(958)
		if ((tmp25)){
			HX_STACK_LINE(960)
			int tmp26 = Start;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(960)
			int tmp27 = this->widthInTiles;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(960)
			int tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(960)
			i = tmp28;
			HX_STACK_LINE(962)
			bool tmp29 = (i >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(962)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(962)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(962)
			if ((tmp30)){
				HX_STACK_LINE(962)
				int tmp32 = Data->__get(i);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(962)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(962)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(962)
				tmp31 = (tmp34 >= (int)0);
			}
			else{
				HX_STACK_LINE(962)
				tmp31 = false;
			}
			HX_STACK_LINE(962)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(962)
			if ((tmp31)){
				HX_STACK_LINE(962)
				int tmp33 = Data->__get(i);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(962)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(962)
				int tmp35 = current;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(962)
				tmp32 = (tmp34 < tmp35);
			}
			else{
				HX_STACK_LINE(962)
				tmp32 = false;
			}
			HX_STACK_LINE(962)
			if ((tmp32)){
				HX_STACK_LINE(964)
				int tmp33 = i;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(964)
				this->walkPath(Data,tmp33,Points);
				HX_STACK_LINE(964)
				return null();
			}
		}
		HX_STACK_LINE(967)
		bool tmp26 = right;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(967)
		if ((tmp26)){
			HX_STACK_LINE(969)
			int tmp27 = (Start + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(969)
			i = tmp27;
			HX_STACK_LINE(971)
			bool tmp28 = (i >= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(971)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(971)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(971)
			if ((tmp29)){
				HX_STACK_LINE(971)
				int tmp31 = Data->__get(i);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(971)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(971)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(971)
				tmp30 = (tmp33 >= (int)0);
			}
			else{
				HX_STACK_LINE(971)
				tmp30 = false;
			}
			HX_STACK_LINE(971)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(971)
			if ((tmp30)){
				HX_STACK_LINE(971)
				int tmp32 = Data->__get(i);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(971)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(971)
				int tmp34 = current;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(971)
				tmp31 = (tmp33 < tmp34);
			}
			else{
				HX_STACK_LINE(971)
				tmp31 = false;
			}
			HX_STACK_LINE(971)
			if ((tmp31)){
				HX_STACK_LINE(973)
				int tmp32 = i;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(973)
				this->walkPath(Data,tmp32,Points);
				HX_STACK_LINE(973)
				return null();
			}
		}
		HX_STACK_LINE(976)
		bool tmp27 = down;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(976)
		if ((tmp27)){
			HX_STACK_LINE(978)
			int tmp28 = Start;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(978)
			int tmp29 = this->widthInTiles;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(978)
			int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(978)
			i = tmp30;
			HX_STACK_LINE(980)
			bool tmp31 = (i >= (int)0);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(980)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(980)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(980)
			if ((tmp32)){
				HX_STACK_LINE(980)
				int tmp34 = Data->__get(i);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(980)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(980)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(980)
				tmp33 = (tmp36 >= (int)0);
			}
			else{
				HX_STACK_LINE(980)
				tmp33 = false;
			}
			HX_STACK_LINE(980)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(980)
			if ((tmp33)){
				HX_STACK_LINE(980)
				int tmp35 = Data->__get(i);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(980)
				int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(980)
				int tmp37 = current;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(980)
				tmp34 = (tmp36 < tmp37);
			}
			else{
				HX_STACK_LINE(980)
				tmp34 = false;
			}
			HX_STACK_LINE(980)
			if ((tmp34)){
				HX_STACK_LINE(982)
				int tmp35 = i;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(982)
				this->walkPath(Data,tmp35,Points);
				HX_STACK_LINE(982)
				return null();
			}
		}
		HX_STACK_LINE(985)
		bool tmp28 = left;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(985)
		if ((tmp28)){
			HX_STACK_LINE(987)
			int tmp29 = (Start - (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(987)
			i = tmp29;
			HX_STACK_LINE(989)
			bool tmp30 = (i >= (int)0);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(989)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(989)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(989)
			if ((tmp31)){
				HX_STACK_LINE(989)
				int tmp33 = Data->__get(i);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(989)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(989)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(989)
				tmp32 = (tmp35 >= (int)0);
			}
			else{
				HX_STACK_LINE(989)
				tmp32 = false;
			}
			HX_STACK_LINE(989)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(989)
			if ((tmp32)){
				HX_STACK_LINE(989)
				int tmp34 = Data->__get(i);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(989)
				int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(989)
				int tmp36 = current;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(989)
				tmp33 = (tmp35 < tmp36);
			}
			else{
				HX_STACK_LINE(989)
				tmp33 = false;
			}
			HX_STACK_LINE(989)
			if ((tmp33)){
				HX_STACK_LINE(991)
				int tmp34 = i;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(991)
				this->walkPath(Data,tmp34,Points);
				HX_STACK_LINE(991)
				return null();
			}
		}
		HX_STACK_LINE(994)
		bool tmp29 = up;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(994)
		bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(994)
		if ((tmp29)){
			HX_STACK_LINE(994)
			tmp30 = right;
		}
		else{
			HX_STACK_LINE(994)
			tmp30 = false;
		}
		HX_STACK_LINE(994)
		if ((tmp30)){
			HX_STACK_LINE(996)
			int tmp31 = Start;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(996)
			int tmp32 = this->widthInTiles;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(996)
			int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(996)
			int tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(996)
			i = tmp34;
			HX_STACK_LINE(998)
			bool tmp35 = (i >= (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(998)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(998)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(998)
			if ((tmp36)){
				HX_STACK_LINE(998)
				int tmp38 = Data->__get(i);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(998)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(998)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(998)
				tmp37 = (tmp40 >= (int)0);
			}
			else{
				HX_STACK_LINE(998)
				tmp37 = false;
			}
			HX_STACK_LINE(998)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(998)
			if ((tmp37)){
				HX_STACK_LINE(998)
				int tmp39 = Data->__get(i);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(998)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(998)
				int tmp41 = current;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(998)
				tmp38 = (tmp40 < tmp41);
			}
			else{
				HX_STACK_LINE(998)
				tmp38 = false;
			}
			HX_STACK_LINE(998)
			if ((tmp38)){
				HX_STACK_LINE(1000)
				int tmp39 = i;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1000)
				this->walkPath(Data,tmp39,Points);
				HX_STACK_LINE(1000)
				return null();
			}
		}
		HX_STACK_LINE(1003)
		bool tmp31 = right;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1003)
		bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1003)
		if ((tmp31)){
			HX_STACK_LINE(1003)
			tmp32 = down;
		}
		else{
			HX_STACK_LINE(1003)
			tmp32 = false;
		}
		HX_STACK_LINE(1003)
		if ((tmp32)){
			HX_STACK_LINE(1005)
			int tmp33 = Start;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1005)
			int tmp34 = this->widthInTiles;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1005)
			int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1005)
			int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1005)
			i = tmp36;
			HX_STACK_LINE(1007)
			bool tmp37 = (i >= (int)0);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1007)
			bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1007)
			bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1007)
			if ((tmp38)){
				HX_STACK_LINE(1007)
				int tmp40 = Data->__get(i);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1007)
				int tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1007)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1007)
				tmp39 = (tmp42 >= (int)0);
			}
			else{
				HX_STACK_LINE(1007)
				tmp39 = false;
			}
			HX_STACK_LINE(1007)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1007)
			if ((tmp39)){
				HX_STACK_LINE(1007)
				int tmp41 = Data->__get(i);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1007)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1007)
				int tmp43 = current;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1007)
				tmp40 = (tmp42 < tmp43);
			}
			else{
				HX_STACK_LINE(1007)
				tmp40 = false;
			}
			HX_STACK_LINE(1007)
			if ((tmp40)){
				HX_STACK_LINE(1009)
				int tmp41 = i;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1009)
				this->walkPath(Data,tmp41,Points);
				HX_STACK_LINE(1009)
				return null();
			}
		}
		HX_STACK_LINE(1012)
		bool tmp33 = left;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1012)
		bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1012)
		if ((tmp33)){
			HX_STACK_LINE(1012)
			tmp34 = down;
		}
		else{
			HX_STACK_LINE(1012)
			tmp34 = false;
		}
		HX_STACK_LINE(1012)
		if ((tmp34)){
			HX_STACK_LINE(1014)
			int tmp35 = Start;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1014)
			int tmp36 = this->widthInTiles;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1014)
			int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1014)
			int tmp38 = (tmp37 - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1014)
			i = tmp38;
			HX_STACK_LINE(1016)
			bool tmp39 = (i >= (int)0);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1016)
			bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1016)
			bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1016)
			if ((tmp40)){
				HX_STACK_LINE(1016)
				int tmp42 = Data->__get(i);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(1016)
				int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1016)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1016)
				tmp41 = (tmp44 >= (int)0);
			}
			else{
				HX_STACK_LINE(1016)
				tmp41 = false;
			}
			HX_STACK_LINE(1016)
			bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1016)
			if ((tmp41)){
				HX_STACK_LINE(1016)
				int tmp43 = Data->__get(i);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1016)
				int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1016)
				int tmp45 = current;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1016)
				tmp42 = (tmp44 < tmp45);
			}
			else{
				HX_STACK_LINE(1016)
				tmp42 = false;
			}
			HX_STACK_LINE(1016)
			if ((tmp42)){
				HX_STACK_LINE(1018)
				int tmp43 = i;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1018)
				this->walkPath(Data,tmp43,Points);
				HX_STACK_LINE(1018)
				return null();
			}
		}
		HX_STACK_LINE(1021)
		bool tmp35 = up;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1021)
		bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1021)
		if ((tmp35)){
			HX_STACK_LINE(1021)
			tmp36 = left;
		}
		else{
			HX_STACK_LINE(1021)
			tmp36 = false;
		}
		HX_STACK_LINE(1021)
		if ((tmp36)){
			HX_STACK_LINE(1023)
			int tmp37 = Start;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1023)
			int tmp38 = this->widthInTiles;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1023)
			int tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1023)
			int tmp40 = (tmp39 - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1023)
			i = tmp40;
			HX_STACK_LINE(1025)
			bool tmp41 = (i >= (int)0);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1025)
			bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1025)
			bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1025)
			if ((tmp42)){
				HX_STACK_LINE(1025)
				int tmp44 = Data->__get(i);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1025)
				int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1025)
				int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1025)
				tmp43 = (tmp46 >= (int)0);
			}
			else{
				HX_STACK_LINE(1025)
				tmp43 = false;
			}
			HX_STACK_LINE(1025)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1025)
			if ((tmp43)){
				HX_STACK_LINE(1025)
				int tmp45 = Data->__get(i);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1025)
				int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1025)
				int tmp47 = current;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1025)
				tmp44 = (tmp46 < tmp47);
			}
			else{
				HX_STACK_LINE(1025)
				tmp44 = false;
			}
			HX_STACK_LINE(1025)
			if ((tmp44)){
				HX_STACK_LINE(1027)
				int tmp45 = i;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1027)
				this->walkPath(Data,tmp45,Points);
				HX_STACK_LINE(1027)
				return null();
			}
		}
		HX_STACK_LINE(1031)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,walkPath,(void))

Void FlxBaseTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","simplifyPath",0xe8519bc3,"flixel.tile.FlxBaseTilemap.simplifyPath","flixel/tile/FlxBaseTilemap.hx",1040,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1041)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1042)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1043)
		::flixel::math::FlxPoint tmp = Points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1043)
		::flixel::math::FlxPoint last = tmp;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1044)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1045)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1046)
		int tmp1 = (Points->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1046)
		int l = tmp1;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1048)
		while((true)){
			HX_STACK_LINE(1048)
			bool tmp2 = (i < l);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1048)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1048)
			if ((tmp3)){
				HX_STACK_LINE(1048)
				break;
			}
			HX_STACK_LINE(1050)
			::flixel::math::FlxPoint tmp4 = Points->__get(i).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1050)
			node = tmp4;
			HX_STACK_LINE(1051)
			Float tmp5 = (node->x - last->x);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1051)
			Float tmp6 = (node->y - last->y);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1051)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1051)
			deltaPrevious = tmp7;
			HX_STACK_LINE(1052)
			Float tmp8 = node->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1052)
			int tmp9 = (i + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1052)
			::flixel::math::FlxPoint tmp10 = Points->__get(tmp9).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1052)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1052)
			Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1052)
			Float tmp13 = node->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1052)
			int tmp14 = (i + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1052)
			::flixel::math::FlxPoint tmp15 = Points->__get(tmp14).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1052)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1052)
			Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1052)
			Float tmp18 = (Float(tmp12) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1052)
			deltaNext = tmp18;
			HX_STACK_LINE(1054)
			Float tmp19 = last->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1054)
			int tmp20 = (i + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1054)
			::flixel::math::FlxPoint tmp21 = Points->__get(tmp20).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1054)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1054)
			bool tmp23 = (tmp19 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1054)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1054)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1054)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1054)
			if ((tmp25)){
				HX_STACK_LINE(1054)
				Float tmp27 = last->y;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1054)
				int tmp28 = (i + (int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1054)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1054)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1054)
				::flixel::math::FlxPoint tmp31 = Points->__get(tmp30).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1054)
				::flixel::math::FlxPoint tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1054)
				::flixel::math::FlxPoint tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1054)
				Float tmp34 = tmp33->y;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(1054)
				tmp26 = (tmp27 == tmp34);
			}
			else{
				HX_STACK_LINE(1054)
				tmp26 = true;
			}
			HX_STACK_LINE(1054)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1054)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1054)
			if ((tmp27)){
				HX_STACK_LINE(1054)
				tmp28 = (deltaPrevious == deltaNext);
			}
			else{
				HX_STACK_LINE(1054)
				tmp28 = true;
			}
			HX_STACK_LINE(1054)
			if ((tmp28)){
				HX_STACK_LINE(1056)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1060)
				last = node;
			}
			HX_STACK_LINE(1063)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,simplifyPath,(void))

Void FlxBaseTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","raySimplifyPath",0x32723703,"flixel.tile.FlxBaseTilemap.raySimplifyPath","flixel/tile/FlxBaseTilemap.hx",1073,0x0139d8e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1074)
		::flixel::math::FlxPoint tmp = Points->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1074)
		::flixel::math::FlxPoint source = tmp;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1075)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1076)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1077)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1078)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1080)
		while((true)){
			HX_STACK_LINE(1080)
			bool tmp1 = (i < l);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1080)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1080)
			if ((tmp2)){
				HX_STACK_LINE(1080)
				break;
			}
			HX_STACK_LINE(1082)
			int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1082)
			::flixel::math::FlxPoint tmp4 = Points->__get(tmp3).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1082)
			node = tmp4;
			HX_STACK_LINE(1084)
			bool tmp5 = (node == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1084)
			if ((tmp5)){
				HX_STACK_LINE(1086)
				continue;
			}
			HX_STACK_LINE(1089)
			::flixel::math::FlxPoint tmp6 = source;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1089)
			::flixel::math::FlxPoint tmp7 = node;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1089)
			::flixel::math::FlxPoint tmp8 = this->_point;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1089)
			bool tmp9 = this->ray(tmp6,tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1089)
			if ((tmp9)){
				HX_STACK_LINE(1091)
				bool tmp10 = (lastIndex >= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1091)
				if ((tmp10)){
					HX_STACK_LINE(1093)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1098)
				::flixel::math::FlxPoint tmp10 = Points->__get(lastIndex).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1098)
				source = tmp10;
			}
			HX_STACK_LINE(1101)
			int tmp10 = (i - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1101)
			lastIndex = tmp10;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,raySimplifyPath,(void))

bool FlxBaseTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",1116,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1117)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1117)
		{
			HX_STACK_LINE(1117)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(1117)
			bool tmp1 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1117)
			if ((tmp1)){
				HX_STACK_LINE(1117)
				bool tmp2 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1117)
				if ((tmp2)){
					HX_STACK_LINE(1117)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(1117)
					bool tmp3 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1117)
					if ((tmp3)){
						HX_STACK_LINE(1117)
						::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
						HX_STACK_LINE(1117)
						group = spriteGroup->group;
					}
				}
			}
			HX_STACK_LINE(1117)
			tmp = group;
		}
		HX_STACK_LINE(1117)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1118)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1118)
		if ((tmp1)){
			HX_STACK_LINE(1120)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1120)
			{
				HX_STACK_LINE(1120)
				Dynamic tmp3 = this->tilemapOverlapsCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1120)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(1120)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1120)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1120)
				if ((tmp4)){
					HX_STACK_LINE(1120)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1120)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(1120)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(1120)
					while((true)){
						HX_STACK_LINE(1120)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1120)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1120)
						if ((tmp6)){
							HX_STACK_LINE(1120)
							break;
						}
						HX_STACK_LINE(1120)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1120)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1120)
						basic = tmp8;
						HX_STACK_LINE(1120)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1120)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1120)
						if ((tmp9)){
							HX_STACK_LINE(1120)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1120)
							bool tmp12 = InScreenSpace;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1120)
							::flixel::FlxCamera tmp13 = Camera;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1120)
							::flixel::FlxBasic tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1120)
							bool tmp15 = tmp12;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1120)
							::flixel::FlxCamera tmp16 = tmp13;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1120)
							tmp10 = Callback(tmp14,(int)0,(int)0,tmp15,tmp16).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1120)
							tmp10 = false;
						}
						HX_STACK_LINE(1120)
						if ((tmp10)){
							HX_STACK_LINE(1120)
							result = true;
							HX_STACK_LINE(1120)
							break;
						}
					}
				}
				HX_STACK_LINE(1120)
				tmp2 = result;
			}
			HX_STACK_LINE(1120)
			return tmp2;
		}
		else{
			HX_STACK_LINE(1122)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1122)
			{
				HX_STACK_LINE(1122)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(1122)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(1122)
				bool InScreenSpace1 = false;		HX_STACK_VAR(InScreenSpace1,"InScreenSpace1");
				HX_STACK_LINE(1122)
				bool tmp3 = (ObjectOrGroup->flixelType == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1122)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1122)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1122)
				if ((tmp4)){
					HX_STACK_LINE(1122)
					tmp5 = (ObjectOrGroup->flixelType == (int)3);
				}
				else{
					HX_STACK_LINE(1122)
					tmp5 = true;
				}
				HX_STACK_LINE(1122)
				if ((tmp5)){
					HX_STACK_LINE(1122)
					::flixel::FlxObject tmp6 = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1122)
					tmp2 = this->overlapsWithCallback(tmp6,null(),null(),null());
				}
				else{
					HX_STACK_LINE(1122)
					::flixel::FlxBasic tmp6 = ObjectOrGroup;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1122)
					bool tmp7 = InScreenSpace1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1122)
					tmp2 = this->overlaps(tmp6,tmp7,null());
				}
			}
			HX_STACK_LINE(1122)
			if ((tmp2)){
				HX_STACK_LINE(1124)
				return true;
			}
		}
		HX_STACK_LINE(1126)
		return false;
	}
}


bool FlxBaseTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","tilemapOverlapsCallback",0x40d17cea,"flixel.tile.FlxBaseTilemap.tilemapOverlapsCallback","flixel/tile/FlxBaseTilemap.hx",1130,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1131)
		bool tmp = (ObjectOrGroup->flixelType == (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1131)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1131)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1131)
		if ((tmp1)){
			HX_STACK_LINE(1131)
			tmp2 = (ObjectOrGroup->flixelType == (int)3);
		}
		else{
			HX_STACK_LINE(1131)
			tmp2 = true;
		}
		HX_STACK_LINE(1131)
		if ((tmp2)){
			HX_STACK_LINE(1133)
			::flixel::FlxObject tmp3 = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1133)
			bool tmp4 = this->overlapsWithCallback(tmp3,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1133)
			return tmp4;
		}
		else{
			HX_STACK_LINE(1137)
			::flixel::FlxBasic tmp3 = ObjectOrGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1137)
			bool tmp4 = InScreenSpace;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1137)
			::flixel::FlxCamera tmp5 = Camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1137)
			bool tmp6 = this->overlaps(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1137)
			return tmp6;
		}
		HX_STACK_LINE(1131)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsCallback,return )

bool FlxBaseTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1154,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1155)
		::flixel::group::FlxTypedGroup tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1155)
		{
			HX_STACK_LINE(1155)
			::flixel::group::FlxTypedGroup group = null();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(1155)
			bool tmp1 = (ObjectOrGroup != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1155)
			if ((tmp1)){
				HX_STACK_LINE(1155)
				bool tmp2 = (ObjectOrGroup->flixelType == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1155)
				if ((tmp2)){
					HX_STACK_LINE(1155)
					group = ((::flixel::group::FlxTypedGroup)(ObjectOrGroup));
				}
				else{
					HX_STACK_LINE(1155)
					bool tmp3 = (ObjectOrGroup->flixelType == (int)4);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1155)
					if ((tmp3)){
						HX_STACK_LINE(1155)
						::flixel::group::FlxTypedSpriteGroup spriteGroup = ((::flixel::group::FlxTypedSpriteGroup)(ObjectOrGroup));		HX_STACK_VAR(spriteGroup,"spriteGroup");
						HX_STACK_LINE(1155)
						group = spriteGroup->group;
					}
				}
			}
			HX_STACK_LINE(1155)
			tmp = group;
		}
		HX_STACK_LINE(1155)
		::flixel::group::FlxTypedGroup group = tmp;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(1156)
		bool tmp1 = (group != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1156)
		if ((tmp1)){
			HX_STACK_LINE(1158)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1158)
			{
				HX_STACK_LINE(1158)
				Dynamic tmp3 = this->tilemapOverlapsAtCallback_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1158)
				Dynamic Callback = tmp3;		HX_STACK_VAR(Callback,"Callback");
				HX_STACK_LINE(1158)
				bool result = false;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(1158)
				bool tmp4 = (group != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1158)
				if ((tmp4)){
					HX_STACK_LINE(1158)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1158)
					int l = group->length;		HX_STACK_VAR(l,"l");
					HX_STACK_LINE(1158)
					::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
					HX_STACK_LINE(1158)
					while((true)){
						HX_STACK_LINE(1158)
						bool tmp5 = (i < l);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1158)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1158)
						if ((tmp6)){
							HX_STACK_LINE(1158)
							break;
						}
						HX_STACK_LINE(1158)
						int tmp7 = (i)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1158)
						::flixel::FlxBasic tmp8 = group->members->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1158)
						basic = tmp8;
						HX_STACK_LINE(1158)
						bool tmp9 = (basic != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1158)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1158)
						if ((tmp9)){
							HX_STACK_LINE(1158)
							::flixel::FlxBasic tmp11 = basic;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1158)
							Float tmp12 = X;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1158)
							Float tmp13 = Y;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1158)
							bool tmp14 = InScreenSpace;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1158)
							::flixel::FlxCamera tmp15 = Camera;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1158)
							::flixel::FlxBasic tmp16 = tmp11;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1158)
							Float tmp17 = tmp12;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1158)
							Float tmp18 = tmp13;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1158)
							bool tmp19 = tmp14;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1158)
							::flixel::FlxCamera tmp20 = tmp15;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1158)
							tmp10 = Callback(tmp16,tmp17,tmp18,tmp19,tmp20).Cast< bool >();
						}
						else{
							HX_STACK_LINE(1158)
							tmp10 = false;
						}
						HX_STACK_LINE(1158)
						if ((tmp10)){
							HX_STACK_LINE(1158)
							result = true;
							HX_STACK_LINE(1158)
							break;
						}
					}
				}
				HX_STACK_LINE(1158)
				tmp2 = result;
			}
			HX_STACK_LINE(1158)
			return tmp2;
		}
		else{
			HX_STACK_LINE(1160)
			bool tmp2 = (ObjectOrGroup->flixelType == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1160)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1160)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1160)
			if ((tmp3)){
				HX_STACK_LINE(1160)
				tmp4 = (ObjectOrGroup->flixelType == (int)3);
			}
			else{
				HX_STACK_LINE(1160)
				tmp4 = true;
			}
			HX_STACK_LINE(1160)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1160)
			if ((tmp4)){
				HX_STACK_LINE(1160)
				::flixel::FlxObject tmp6 = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1160)
				::flixel::math::FlxPoint tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1160)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1160)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1160)
				::flixel::math::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1160)
				tmp5 = this->overlapsWithCallback(tmp6,null(),false,tmp10);
			}
			else{
				HX_STACK_LINE(1160)
				Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1160)
				Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1160)
				::flixel::FlxBasic tmp8 = ObjectOrGroup;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1160)
				bool tmp9 = InScreenSpace;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1160)
				::flixel::FlxCamera tmp10 = Camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1160)
				tmp5 = this->overlapsAt(tmp6,tmp7,tmp8,tmp9,tmp10);
			}
			HX_STACK_LINE(1160)
			if ((tmp5)){
				HX_STACK_LINE(1162)
				return true;
			}
		}
		HX_STACK_LINE(1165)
		return false;
	}
}


bool FlxBaseTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","tilemapOverlapsAtCallback",0xbef90c3d,"flixel.tile.FlxBaseTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxBaseTilemap.hx",1169,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1170)
	bool tmp = (ObjectOrGroup->flixelType == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1170)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1170)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1170)
	if ((tmp1)){
		HX_STACK_LINE(1171)
		tmp2 = (ObjectOrGroup->flixelType == (int)3);
	}
	else{
		HX_STACK_LINE(1170)
		tmp2 = true;
	}
	HX_STACK_LINE(1170)
	if ((tmp2)){
		HX_STACK_LINE(1173)
		::flixel::FlxObject tmp3 = ((::flixel::FlxObject)(ObjectOrGroup));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1173)
		::flixel::math::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1173)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1173)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1173)
		::flixel::math::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1173)
		bool tmp8 = this->overlapsWithCallback(tmp3,null(),false,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1173)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1177)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1177)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1177)
		::flixel::FlxBasic tmp5 = ObjectOrGroup;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1177)
		bool tmp6 = InScreenSpace;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1177)
		::flixel::FlxCamera tmp7 = Camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1177)
		bool tmp8 = this->overlapsAt(tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1177)
		return tmp8;
	}
	HX_STACK_LINE(1170)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxBaseTilemap_obj::overlapsPoint( ::flixel::math::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","overlapsPoint",0x91c6718f,"flixel.tile.FlxBaseTilemap.overlapsPoint","flixel/tile/FlxBaseTilemap.hx",1190,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WorldPoint,"WorldPoint")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1191)
		bool tmp = InScreenSpace;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1191)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1191)
		if ((tmp1)){
			HX_STACK_LINE(1193)
			::flixel::math::FlxPoint tmp2 = WorldPoint;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1193)
			int tmp3 = this->getTileIndexByCoords(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1193)
			int tmp4 = this->_data->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1193)
			Dynamic tmp5 = this->_tileObjects->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1193)
			int tmp6 = tmp5->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1193)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1193)
			return tmp7;
		}
		HX_STACK_LINE(1196)
		bool tmp2 = (Camera == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1196)
		if ((tmp2)){
			HX_STACK_LINE(1198)
			::flixel::FlxCamera tmp3 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1198)
			Camera = tmp3;
		}
		HX_STACK_LINE(1201)
		::flixel::math::FlxPoint tmp3 = Camera->scroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1201)
		WorldPoint->subtractPoint(tmp3);
		HX_STACK_LINE(1203)
		::flixel::math::FlxPoint tmp4 = WorldPoint;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1203)
		int tmp5 = this->getTileIndexByCoords(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1203)
		int tmp6 = this->_data->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1203)
		Dynamic tmp7 = this->_tileObjects->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1203)
		int tmp8 = tmp7->__Field(HX_HCSTRING("allowCollisions","\xaa","\xc9","\xd9","\x59"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1203)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1203)
		bool result = tmp9;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1204)
		{
			HX_STACK_LINE(1204)
			bool tmp10 = WorldPoint->_weak;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1204)
			if ((tmp10)){
				HX_STACK_LINE(1204)
				WorldPoint->put();
			}
		}
		HX_STACK_LINE(1205)
		bool tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1205)
		return tmp10;
	}
}


::flixel::math::FlxRect FlxBaseTilemap_obj::getBounds( ::flixel::math::FlxRect Bounds){
	HX_STACK_FRAME("flixel.tile.FlxBaseTilemap","getBounds",0x47c7aa16,"flixel.tile.FlxBaseTilemap.getBounds","flixel/tile/FlxBaseTilemap.hx",1215,0x0139d8e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bounds,"Bounds")
	HX_STACK_LINE(1216)
	bool tmp = (Bounds == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1216)
	if ((tmp)){
		HX_STACK_LINE(1218)
		::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1218)
		{
			HX_STACK_LINE(1218)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1218)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1218)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(1218)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(1218)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1218)
			{
				HX_STACK_LINE(1218)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp3 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1218)
				::flixel::math::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1218)
				::flixel::math::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1218)
				_this->x = X;
				HX_STACK_LINE(1218)
				_this->y = Y;
				HX_STACK_LINE(1218)
				_this->width = Width;
				HX_STACK_LINE(1218)
				_this->height = Height;
				HX_STACK_LINE(1218)
				tmp2 = _this;
			}
			HX_STACK_LINE(1218)
			::flixel::math::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1218)
			rect->_inPool = false;
			HX_STACK_LINE(1218)
			tmp1 = rect;
		}
		HX_STACK_LINE(1218)
		Bounds = tmp1;
	}
	HX_STACK_LINE(1221)
	::flixel::math::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1221)
	{
		HX_STACK_LINE(1221)
		Float tmp2 = this->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1221)
		Float Width = tmp2;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(1221)
		Float tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1221)
		Float Height = tmp3;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(1221)
		Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1221)
		Bounds->x = tmp4;
		HX_STACK_LINE(1221)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1221)
		Bounds->y = tmp5;
		HX_STACK_LINE(1221)
		Bounds->width = Width;
		HX_STACK_LINE(1221)
		Bounds->height = Height;
		HX_STACK_LINE(1221)
		tmp1 = Bounds;
	}
	HX_STACK_LINE(1221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getBounds,return )


FlxBaseTilemap_obj::FlxBaseTilemap_obj()
{
}

void FlxBaseTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseTilemap);
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_MARK_MEMBER_NAME(_collideIndex,"_collideIndex");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBaseTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_VISIT_MEMBER_NAME(_collideIndex,"_collideIndex");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBaseTilemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return updateMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { return _drawIndex; }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { return _collideIndex; }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return cacheGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMapHelper") ) { return loadMapHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"applyAutoTile") ) { return applyAutoTile_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return loadMapFromCSV_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return initTileObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"postGraphicLoad") ) { return postGraphicLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return loadMapFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"applyCustomRemap") ) { return applyCustomRemap_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeIndices") ) { return randomizeIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return computeDimensions_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return loadMapFrom2DArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return getTileIndexByCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return getTileCoordsByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return tilemapOverlapsCallback_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return tilemapOverlapsAtCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBaseTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< ::flixel::tile::FlxTilemapAutoTiling >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { _drawIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { _collideIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"));
	outFields->push(HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"));
	outFields->push(HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"));
	outFields->push(HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16"));
	outFields->push(HX_HCSTRING("customTileRemap","\xca","\x70","\xd3","\x8a"));
	outFields->push(HX_HCSTRING("_randomIndices","\xa5","\xd3","\x07","\x36"));
	outFields->push(HX_HCSTRING("_randomChoices","\x70","\x42","\xcb","\x2b"));
	outFields->push(HX_HCSTRING("_tileObjects","\x47","\x55","\xbd","\x87"));
	outFields->push(HX_HCSTRING("_startingIndex","\x73","\xa1","\x49","\x3d"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("_drawIndex","\x2f","\x4c","\xc2","\xe1"));
	outFields->push(HX_HCSTRING("_collideIndex","\x93","\x05","\x8a","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTilemapAutoTiling*/ ,(int)offsetof(FlxBaseTilemap_obj,_auto),HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,widthInTiles),HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,heightInTiles),HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,totalTiles),HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,customTileRemap),HX_HCSTRING("customTileRemap","\xca","\x70","\xd3","\x8a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomIndices),HX_HCSTRING("_randomIndices","\xa5","\xd3","\x07","\x36")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomChoices),HX_HCSTRING("_randomChoices","\x70","\x42","\xcb","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBaseTilemap_obj,_randomLambda),HX_HCSTRING("_randomLambda","\x49","\x40","\x18","\x0b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxBaseTilemap_obj,_tileObjects),HX_HCSTRING("_tileObjects","\x47","\x55","\xbd","\x87")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_startingIndex),HX_HCSTRING("_startingIndex","\x73","\xa1","\x49","\x3d")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxBaseTilemap_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_drawIndex),HX_HCSTRING("_drawIndex","\x2f","\x4c","\xc2","\xe1")},
	{hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_collideIndex),HX_HCSTRING("_collideIndex","\x93","\x05","\x8a","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40"),
	HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"),
	HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"),
	HX_HCSTRING("totalTiles","\x21","\xf3","\xd5","\x16"),
	HX_HCSTRING("customTileRemap","\xca","\x70","\xd3","\x8a"),
	HX_HCSTRING("_randomIndices","\xa5","\xd3","\x07","\x36"),
	HX_HCSTRING("_randomChoices","\x70","\x42","\xcb","\x2b"),
	HX_HCSTRING("_randomLambda","\x49","\x40","\x18","\x0b"),
	HX_HCSTRING("_tileObjects","\x47","\x55","\xbd","\x87"),
	HX_HCSTRING("_startingIndex","\x73","\xa1","\x49","\x3d"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("_drawIndex","\x2f","\x4c","\xc2","\xe1"),
	HX_HCSTRING("_collideIndex","\x93","\x05","\x8a","\xb4"),
	HX_HCSTRING("updateTile","\xd7","\xb5","\xb1","\x05"),
	HX_HCSTRING("cacheGraphics","\x2d","\x61","\x95","\xfc"),
	HX_HCSTRING("initTileObjects","\x16","\xbe","\x45","\x2e"),
	HX_HCSTRING("updateMap","\x13","\xe8","\xdf","\x82"),
	HX_HCSTRING("computeDimensions","\xa4","\xa4","\xeb","\xf3"),
	HX_HCSTRING("getTileIndexByCoords","\x03","\x79","\x8b","\x76"),
	HX_HCSTRING("getTileCoordsByIndex","\xb9","\x63","\x25","\xa1"),
	HX_HCSTRING("ray","\xea","\xd5","\x56","\x00"),
	HX_HCSTRING("overlapsWithCallback","\x17","\xc3","\x72","\xa8"),
	HX_HCSTRING("setDirty","\x10","\xb9","\x04","\xe8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("loadMapFromCSV","\x06","\x2b","\x38","\x8f"),
	HX_HCSTRING("loadMapFromArray","\xd9","\x80","\xa3","\xdb"),
	HX_HCSTRING("loadMapFrom2DArray","\xc7","\xd3","\x90","\xac"),
	HX_HCSTRING("loadMapHelper","\x24","\xaa","\x93","\x69"),
	HX_HCSTRING("postGraphicLoad","\x6e","\x44","\x44","\x1d"),
	HX_HCSTRING("applyAutoTile","\xcb","\x19","\x58","\x70"),
	HX_HCSTRING("applyCustomRemap","\x8a","\x6c","\x0c","\xb4"),
	HX_HCSTRING("randomizeIndices","\xf6","\x8d","\x4c","\x14"),
	HX_HCSTRING("autoTile","\x3d","\xba","\x22","\x30"),
	HX_HCSTRING("setCustomTileMappings","\x86","\x00","\x11","\x09"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("getTileByIndex","\x37","\xbb","\xaa","\xc4"),
	HX_HCSTRING("getTileCollisions","\xc5","\x3f","\x3d","\xc8"),
	HX_HCSTRING("getTileInstances","\xba","\x6b","\x01","\x25"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	HX_HCSTRING("setTileByIndex","\xab","\xa3","\xca","\xe4"),
	HX_HCSTRING("setTileProperties","\x03","\x58","\xa1","\x54"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("findPath","\x7e","\xf2","\xe5","\x9c"),
	HX_HCSTRING("computePathDistance","\x11","\x4c","\x56","\x20"),
	HX_HCSTRING("walkPath","\x4e","\x27","\xab","\x57"),
	HX_HCSTRING("simplifyPath","\x4e","\x21","\x2f","\x66"),
	HX_HCSTRING("raySimplifyPath","\x58","\x7a","\xf6","\x41"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("tilemapOverlapsCallback","\x3f","\x9d","\xf8","\xac"),
	HX_HCSTRING("overlapsAt","\x1f","\xe7","\xce","\x03"),
	HX_HCSTRING("tilemapOverlapsAtCallback","\xd2","\xab","\x68","\xdb"),
	HX_HCSTRING("overlapsPoint","\xa4","\xc5","\xbd","\x35"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBaseTilemap_obj::__mClass;

void FlxBaseTilemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxBaseTilemap","\x19","\xd7","\xa6","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBaseTilemap_obj >;
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
