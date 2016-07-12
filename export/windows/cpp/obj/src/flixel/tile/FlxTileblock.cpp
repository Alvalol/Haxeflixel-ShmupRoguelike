#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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
namespace flixel{
namespace tile{

Void FlxTileblock_obj::__construct(int X,int Y,int Width,int Height)
{
HX_STACK_FRAME("flixel.tile.FlxTileblock","new",0x8f1d69cd,"flixel.tile.FlxTileblock.new","flixel/tile/FlxTileblock.hx",30,0xecdf1de3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(31)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(32)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	this->makeGraphic(tmp2,tmp3,(int)0,true,null());
	HX_STACK_LINE(33)
	this->set_active(false);
	HX_STACK_LINE(34)
	this->set_immovable(true);
	HX_STACK_LINE(35)
	this->set_moves(false);
}
;
	return null();
}

//FlxTileblock_obj::~FlxTileblock_obj() { }

Dynamic FlxTileblock_obj::__CreateEmpty() { return  new FlxTileblock_obj; }
hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__new(int X,int Y,int Width,int Height)
{  hx::ObjectPtr< FlxTileblock_obj > _result_ = new FlxTileblock_obj();
	_result_->__construct(X,Y,Width,Height);
	return _result_;}

Dynamic FlxTileblock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTileblock_obj > _result_ = new FlxTileblock_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void FlxTileblock_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTileblock","destroy",0x5d3d80e7,"flixel.tile.FlxTileblock.destroy","flixel/tile/FlxTileblock.hx",39,0xecdf1de3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		::flixel::FlxSprite tmp = this->tileSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::flixel::FlxSprite tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		this->tileSprite = tmp1;
		HX_STACK_LINE(41)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxTileblock FlxTileblock_obj::loadFrames( ::flixel::graphics::frames::FlxTileFrames tileFrames,hx::Null< int >  __o_empties){
int empties = __o_empties.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTileblock","loadFrames",0xaeb6fc9f,"flixel.tile.FlxTileblock.loadFrames","flixel/tile/FlxTileblock.hx",52,0xecdf1de3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileFrames,"tileFrames")
	HX_STACK_ARG(empties,"empties")
{
		HX_STACK_LINE(53)
		bool tmp = (tileFrames == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		if ((tmp)){
			HX_STACK_LINE(55)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(59)
		::flixel::FlxSprite tmp1 = this->tileSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::flixel::FlxSprite tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		if ((tmp2)){
			HX_STACK_LINE(59)
			tmp3 = ::flixel::FlxSprite_obj::__new(null(),null(),null());
		}
		else{
			HX_STACK_LINE(59)
			tmp3 = this->tileSprite;
		}
		HX_STACK_LINE(59)
		this->tileSprite = tmp3;
		HX_STACK_LINE(60)
		::flixel::FlxSprite tmp4 = this->tileSprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::flixel::graphics::frames::FlxTileFrames tmp5 = tileFrames;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		tmp4->set_frames(tmp5);
		HX_STACK_LINE(61)
		::flixel::FlxSprite tmp6 = this->tileSprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		int spriteWidth = tmp8;		HX_STACK_VAR(spriteWidth,"spriteWidth");
		HX_STACK_LINE(62)
		::flixel::FlxSprite tmp9 = this->tileSprite;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		int spriteHeight = tmp11;		HX_STACK_VAR(spriteHeight,"spriteHeight");
		HX_STACK_LINE(63)
		::flixel::FlxSprite tmp12 = this->tileSprite;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(63)
		int tmp13 = tmp12->numFrames;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(63)
		int tmp14 = empties;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(63)
		int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(63)
		int total = tmp15;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(66)
		bool regen = false;		HX_STACK_VAR(regen,"regen");
		HX_STACK_LINE(68)
		Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(68)
		::flixel::FlxSprite tmp17 = this->tileSprite;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(68)
		Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(68)
		Float tmp19 = hx::Mod(tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(68)
		bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(68)
		if ((tmp20)){
			HX_STACK_LINE(70)
			Float tmp21 = this->get_width();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(70)
			int tmp22 = spriteWidth;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(70)
			Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(70)
			Float tmp24 = (tmp23 + (int)1);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(70)
			int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(70)
			int tmp26 = spriteWidth;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(70)
			int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(70)
			this->set_width(tmp27);
			HX_STACK_LINE(71)
			regen = true;
		}
		HX_STACK_LINE(74)
		Float tmp21 = this->get_height();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(74)
		::flixel::FlxSprite tmp22 = this->tileSprite;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(74)
		Float tmp23 = tmp22->get_height();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(74)
		Float tmp24 = hx::Mod(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(74)
		bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(74)
		if ((tmp25)){
			HX_STACK_LINE(76)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(76)
			int tmp27 = spriteHeight;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(76)
			Float tmp28 = (Float(tmp26) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(76)
			Float tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(76)
			int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(76)
			int tmp31 = spriteHeight;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(76)
			int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(76)
			this->set_height(tmp32);
			HX_STACK_LINE(77)
			regen = true;
		}
		HX_STACK_LINE(80)
		bool tmp26 = regen;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(80)
		if ((tmp26)){
			HX_STACK_LINE(82)
			Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(82)
			int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(82)
			Float tmp29 = this->get_height();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(82)
			int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(82)
			this->makeGraphic(tmp28,tmp30,(int)0,true,null());
		}
		else{
			HX_STACK_LINE(86)
			::flixel::util::FlxSpriteUtil_obj::fill(hx::ObjectPtr<OBJ_>(this),(int)0);
		}
		HX_STACK_LINE(90)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(91)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(92)
		int destinationX;		HX_STACK_VAR(destinationX,"destinationX");
		HX_STACK_LINE(93)
		int destinationY = (int)0;		HX_STACK_VAR(destinationY,"destinationY");
		HX_STACK_LINE(94)
		Float tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(94)
		int tmp28 = spriteWidth;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(94)
		Float tmp29 = (Float(tmp27) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(94)
		int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(94)
		int widthInTiles = tmp30;		HX_STACK_VAR(widthInTiles,"widthInTiles");
		HX_STACK_LINE(95)
		Float tmp31 = this->get_height();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(95)
		int tmp32 = spriteHeight;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(95)
		Float tmp33 = (Float(tmp31) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(95)
		int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(95)
		int heightInTiles = tmp34;		HX_STACK_VAR(heightInTiles,"heightInTiles");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp35 = (row < heightInTiles);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(97)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(97)
			if ((tmp36)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(99)
			destinationX = (int)0;
			HX_STACK_LINE(100)
			column = (int)0;
			HX_STACK_LINE(102)
			while((true)){
				HX_STACK_LINE(102)
				bool tmp37 = (column < widthInTiles);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(102)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(102)
				if ((tmp38)){
					HX_STACK_LINE(102)
					break;
				}
				HX_STACK_LINE(104)
				::flixel::math::FlxRandom tmp39 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(104)
				Float tmp40 = tmp39->_float(null(),null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(104)
				int tmp41 = total;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(104)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(104)
				int tmp43 = empties;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(104)
				bool tmp44 = (tmp42 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(104)
				if ((tmp44)){
					HX_STACK_LINE(106)
					::flixel::FlxSprite tmp45 = this->tileSprite;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(106)
					tmp45->animation->randomFrame();
					HX_STACK_LINE(107)
					::flixel::FlxSprite tmp46 = this->tileSprite;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(107)
					tmp46->drawFrame(null());
					HX_STACK_LINE(108)
					::flixel::FlxSprite tmp47 = this->tileSprite;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(108)
					int tmp48 = destinationX;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(108)
					int tmp49 = destinationY;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(108)
					this->stamp(tmp47,tmp48,tmp49);
				}
				HX_STACK_LINE(111)
				hx::AddEq(destinationX,spriteWidth);
				HX_STACK_LINE(112)
				(column)++;
			}
			HX_STACK_LINE(115)
			hx::AddEq(destinationY,spriteHeight);
			HX_STACK_LINE(116)
			(row)++;
		}
		HX_STACK_LINE(119)
		this->dirty = true;
		HX_STACK_LINE(120)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileblock_obj,loadFrames,return )

::flixel::tile::FlxTileblock FlxTileblock_obj::loadTiles( Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_Empties){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int Empties = __o_Empties.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTileblock","loadTiles",0x7f9232ac,"flixel.tile.FlxTileblock.loadTiles","flixel/tile/FlxTileblock.hx",133,0xecdf1de3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(Empties,"Empties")
{
		HX_STACK_LINE(134)
		bool tmp = (TileGraphic == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		if ((tmp)){
			HX_STACK_LINE(136)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(139)
		::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Dynamic tmp2 = TileGraphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::flixel::graphics::FlxGraphic graph = tmp3;		HX_STACK_VAR(graph,"graph");
		HX_STACK_LINE(140)
		bool tmp4 = (graph == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		if ((tmp4)){
			HX_STACK_LINE(142)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(145)
		bool tmp5 = (TileWidth == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(147)
			TileWidth = graph->height;
			HX_STACK_LINE(148)
			bool tmp6 = (TileWidth > graph->width);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			if ((tmp6)){
				HX_STACK_LINE(148)
				tmp7 = graph->width;
			}
			else{
				HX_STACK_LINE(148)
				tmp7 = TileWidth;
			}
			HX_STACK_LINE(148)
			TileWidth = tmp7;
		}
		HX_STACK_LINE(151)
		bool tmp6 = (TileHeight == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		if ((tmp6)){
			HX_STACK_LINE(153)
			TileHeight = TileWidth;
			HX_STACK_LINE(154)
			bool tmp7 = (TileHeight > graph->height);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			if ((tmp7)){
				HX_STACK_LINE(154)
				tmp8 = graph->height;
			}
			else{
				HX_STACK_LINE(154)
				tmp8 = TileHeight;
			}
			HX_STACK_LINE(154)
			TileHeight = tmp8;
		}
		HX_STACK_LINE(157)
		::flixel::graphics::FlxGraphic tmp7 = graph;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		::flixel::math::FlxPoint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp9 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(157)
			::flixel::math::FlxPoint tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(157)
			int tmp11 = TileWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			int tmp12 = TileHeight;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(157)
			::flixel::math::FlxPoint tmp13 = tmp10->set(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(157)
			::flixel::math::FlxPoint point = tmp13;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(157)
			point->_inPool = false;
			HX_STACK_LINE(157)
			tmp8 = point;
		}
		HX_STACK_LINE(157)
		::flixel::graphics::frames::FlxTileFrames tmp9 = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(tmp7,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		::flixel::graphics::frames::FlxTileFrames tileFrames = tmp9;		HX_STACK_VAR(tileFrames,"tileFrames");
		HX_STACK_LINE(158)
		::flixel::graphics::frames::FlxTileFrames tmp10 = tileFrames;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(158)
		int tmp11 = Empties;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(158)
		::flixel::tile::FlxTileblock tmp12 = this->loadFrames(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(158)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileblock_obj,loadTiles,return )

Void FlxTileblock_obj::setTile( int x,int y,int index){
{
		HX_STACK_FRAME("flixel.tile.FlxTileblock","setTile",0x4b385fdd,"flixel.tile.FlxTileblock.setTile","flixel/tile/FlxTileblock.hx",162,0xecdf1de3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(163)
		::flixel::FlxSprite tmp = this->tileSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		tmp->animation->set_frameIndex(tmp1);
		HX_STACK_LINE(164)
		::flixel::FlxSprite tmp2 = this->tileSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		::flixel::FlxSprite tmp4 = this->tileSprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(164)
		int tmp7 = (tmp3 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		::flixel::FlxSprite tmp9 = this->tileSprite;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(164)
		Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(164)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(164)
		int tmp12 = (tmp8 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		this->stamp(tmp2,tmp7,tmp12);
		HX_STACK_LINE(165)
		this->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTileblock_obj,setTile,(void))


FlxTileblock_obj::FlxTileblock_obj()
{
}

void FlxTileblock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileblock);
	HX_MARK_MEMBER_NAME(tileSprite,"tileSprite");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileblock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileSprite,"tileSprite");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTileblock_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadTiles") ) { return loadTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileSprite") ) { return tileSprite; }
		if (HX_FIELD_EQ(inName,"loadFrames") ) { return loadFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTileblock_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"tileSprite") ) { tileSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileblock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileSprite","\xd3","\xb1","\x2c","\x28"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxTileblock_obj,tileSprite),HX_HCSTRING("tileSprite","\xd3","\xb1","\x2c","\x28")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileSprite","\xd3","\xb1","\x2c","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("loadFrames","\x6c","\xde","\xb0","\x61"),
	HX_HCSTRING("loadTiles","\x7f","\x49","\x6c","\x2b"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTileblock_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTileblock_obj::__mClass;

void FlxTileblock_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.tile.FlxTileblock","\x5b","\x7f","\xbf","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTileblock_obj >;
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
