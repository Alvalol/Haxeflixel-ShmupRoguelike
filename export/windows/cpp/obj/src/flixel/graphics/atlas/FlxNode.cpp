#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
namespace flixel{
namespace graphics{
namespace atlas{

Void FlxNode_obj::__construct(::flixel::math::FlxRect rect,::flixel::graphics::atlas::FlxAtlas atlas,hx::Null< bool >  __o_filled,::String __o_key,hx::Null< bool >  __o_rotated)
{
HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","new",0xeedfd332,"flixel.graphics.atlas.FlxNode.new","flixel/graphics/atlas/FlxNode.hx",76,0x6d18bb9f)
HX_STACK_THIS(this)
HX_STACK_ARG(rect,"rect")
HX_STACK_ARG(atlas,"atlas")
HX_STACK_ARG(__o_filled,"filled")
HX_STACK_ARG(__o_key,"key")
HX_STACK_ARG(__o_rotated,"rotated")
bool filled = __o_filled.Default(false);
::String key = __o_key.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool rotated = __o_rotated.Default(false);
{
	HX_STACK_LINE(77)
	this->filled = filled;
	HX_STACK_LINE(78)
	this->left = null();
	HX_STACK_LINE(79)
	this->right = null();
	HX_STACK_LINE(80)
	this->rect = rect;
	HX_STACK_LINE(81)
	this->key = key;
	HX_STACK_LINE(82)
	this->atlas = atlas;
	HX_STACK_LINE(83)
	this->rotated = rotated;
}
;
	return null();
}

//FlxNode_obj::~FlxNode_obj() { }

Dynamic FlxNode_obj::__CreateEmpty() { return  new FlxNode_obj; }
hx::ObjectPtr< FlxNode_obj > FlxNode_obj::__new(::flixel::math::FlxRect rect,::flixel::graphics::atlas::FlxAtlas atlas,hx::Null< bool >  __o_filled,::String __o_key,hx::Null< bool >  __o_rotated)
{  hx::ObjectPtr< FlxNode_obj > _result_ = new FlxNode_obj();
	_result_->__construct(rect,atlas,__o_filled,__o_key,__o_rotated);
	return _result_;}

Dynamic FlxNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNode_obj > _result_ = new FlxNode_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

hx::Object *FlxNode_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

FlxNode_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< FlxNode_obj >(this); }
Void FlxNode_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","destroy",0x006100cc,"flixel.graphics.atlas.FlxNode.destroy","flixel/graphics/atlas/FlxNode.hx",87,0x6d18bb9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		this->key = null();
		HX_STACK_LINE(89)
		this->left = null();
		HX_STACK_LINE(90)
		this->right = null();
		HX_STACK_LINE(91)
		this->rect = null();
		HX_STACK_LINE(92)
		this->atlas = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,destroy,(void))

bool FlxNode_obj::canPlace( int width,int height){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","canPlace",0xb6bfba85,"flixel.graphics.atlas.FlxNode.canPlace","flixel/graphics/atlas/FlxNode.hx",99,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(100)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	if ((tmp3)){
		HX_STACK_LINE(100)
		::flixel::math::FlxRect tmp5 = this->rect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::flixel::math::FlxRect tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		int tmp8 = height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		tmp4 = (tmp7 >= tmp8);
	}
	else{
		HX_STACK_LINE(100)
		tmp4 = false;
	}
	HX_STACK_LINE(100)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNode_obj,canPlace,return )

::flixel::graphics::frames::FlxTileFrames FlxNode_obj::getTileFrames( ::flixel::math::FlxPoint tileSize,::flixel::math::FlxPoint tileSpacing,::flixel::math::FlxPoint tileBorder){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","getTileFrames",0xf6655efc,"flixel.graphics.atlas.FlxNode.getTileFrames","flixel/graphics/atlas/FlxNode.hx",111,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileSize,"tileSize")
	HX_STACK_ARG(tileSpacing,"tileSpacing")
	HX_STACK_ARG(tileBorder,"tileBorder")
	HX_STACK_LINE(112)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	::flixel::graphics::atlas::FlxAtlas tmp1 = this->atlas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	::openfl::_legacy::display::BitmapData tmp2 = tmp1->get_bitmapData();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	::flixel::graphics::atlas::FlxAtlas tmp3 = this->atlas;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	::String tmp4 = tmp3->name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	::flixel::graphics::FlxGraphic tmp5 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,false,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	::flixel::graphics::FlxGraphic graphic = tmp5;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(113)
	::flixel::graphics::frames::FlxFrame tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(113)
	{
		HX_STACK_LINE(113)
		::flixel::graphics::atlas::FlxAtlas tmp7 = this->atlas;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		::flixel::graphics::frames::FlxAtlasFrames tmp8 = tmp7->getAtlasFrames();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(113)
		::flixel::graphics::frames::FlxAtlasFrames _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(113)
		::String tmp9 = this->key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(113)
		::flixel::graphics::frames::FlxFrame tmp10 = _this->framesHash->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(113)
		tmp6 = tmp10;
	}
	HX_STACK_LINE(113)
	::flixel::graphics::frames::FlxFrame frame = tmp6;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(115)
	bool tmp7 = (frame != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	if ((tmp7)){
		HX_STACK_LINE(117)
		::flixel::graphics::frames::FlxFrame tmp8 = frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		::flixel::math::FlxPoint tmp9 = tileSize;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		::flixel::math::FlxPoint tmp10 = tileSpacing;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		::flixel::graphics::frames::FlxTileFrames tmp11 = ::flixel::graphics::frames::FlxTileFrames_obj::fromFrame(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		::flixel::graphics::frames::FlxTileFrames tileFrames = tmp11;		HX_STACK_VAR(tileFrames,"tileFrames");
		HX_STACK_LINE(118)
		bool tmp12 = (tileBorder != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		if ((tmp12)){
			HX_STACK_LINE(120)
			::flixel::math::FlxPoint tmp13 = tileBorder;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(120)
			::flixel::graphics::frames::FlxTileFrames tmp14 = hx::TCast< ::flixel::graphics::frames::FlxTileFrames >::cast(tileFrames->addBorder(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(120)
			tileFrames = tmp14;
		}
		HX_STACK_LINE(122)
		::flixel::graphics::frames::FlxTileFrames tmp13 = tileFrames;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		return tmp13;
	}
	HX_STACK_LINE(125)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNode_obj,getTileFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxNode_obj::getImageFrame( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","getImageFrame",0xf79a185a,"flixel.graphics.atlas.FlxNode.getImageFrame","flixel/graphics/atlas/FlxNode.hx",133,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::flixel::graphics::atlas::FlxAtlas tmp1 = this->atlas;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	::openfl::_legacy::display::BitmapData tmp2 = tmp1->get_bitmapData();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	::flixel::graphics::atlas::FlxAtlas tmp3 = this->atlas;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	::String tmp4 = tmp3->name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(134)
	::flixel::graphics::FlxGraphic tmp5 = tmp->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,false,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(134)
	::flixel::graphics::FlxGraphic graphic = tmp5;		HX_STACK_VAR(graphic,"graphic");
	HX_STACK_LINE(135)
	::flixel::graphics::frames::FlxFrame tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		::flixel::graphics::atlas::FlxAtlas tmp7 = this->atlas;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(135)
		::flixel::graphics::frames::FlxAtlasFrames tmp8 = tmp7->getAtlasFrames();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		::flixel::graphics::frames::FlxAtlasFrames _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(135)
		::String tmp9 = this->key;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(135)
		::flixel::graphics::frames::FlxFrame tmp10 = _this->framesHash->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(135)
		tmp6 = tmp10;
	}
	HX_STACK_LINE(135)
	::flixel::graphics::frames::FlxFrame frame = tmp6;		HX_STACK_VAR(frame,"frame");
	HX_STACK_LINE(137)
	bool tmp7 = (frame != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(137)
	if ((tmp7)){
		HX_STACK_LINE(139)
		::flixel::graphics::frames::FlxFrame tmp8 = frame;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(139)
		::flixel::graphics::frames::FlxImageFrame tmp9 = ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		return tmp9;
	}
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,getImageFrame,return )

bool FlxNode_obj::get_isEmpty( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_isEmpty",0xd9c0632c,"flixel.graphics.atlas.FlxNode.get_isEmpty","flixel/graphics/atlas/FlxNode.hx",146,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	bool tmp = this->filled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(147)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(147)
	if ((tmp3)){
		HX_STACK_LINE(147)
		::flixel::graphics::atlas::FlxNode tmp5 = this->left;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		::flixel::graphics::atlas::FlxNode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		::flixel::graphics::atlas::FlxNode tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		tmp4 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(147)
		tmp4 = false;
	}
	HX_STACK_LINE(147)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(147)
	if ((tmp4)){
		HX_STACK_LINE(147)
		::flixel::graphics::atlas::FlxNode tmp6 = this->right;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		::flixel::graphics::atlas::FlxNode tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		tmp5 = (tmp7 == null());
	}
	else{
		HX_STACK_LINE(147)
		tmp5 = false;
	}
	HX_STACK_LINE(147)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_isEmpty,return )

int FlxNode_obj::get_x( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_x",0x3d1080a1,"flixel.graphics.atlas.FlxNode.get_x","flixel/graphics/atlas/FlxNode.hx",151,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_x,return )

int FlxNode_obj::get_y( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_y",0x3d1080a2,"flixel.graphics.atlas.FlxNode.get_y","flixel/graphics/atlas/FlxNode.hx",156,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float tmp1 = tmp->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_y,return )

int FlxNode_obj::get_width( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_width",0xb520feaf,"flixel.graphics.atlas.FlxNode.get_width","flixel/graphics/atlas/FlxNode.hx",161,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_width,return )

int FlxNode_obj::set_width( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","set_width",0x9871eabb,"flixel.graphics.atlas.FlxNode.set_width","flixel/graphics/atlas/FlxNode.hx",166,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	tmp->width = value;
	HX_STACK_LINE(168)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNode_obj,set_width,return )

int FlxNode_obj::get_height( ){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","get_height",0x7e0d531e,"flixel.graphics.atlas.FlxNode.get_height","flixel/graphics/atlas/FlxNode.hx",172,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxNode_obj,get_height,return )

int FlxNode_obj::set_height( int value){
	HX_STACK_FRAME("flixel.graphics.atlas.FlxNode","set_height",0x818af192,"flixel.graphics.atlas.FlxNode.set_height","flixel/graphics/atlas/FlxNode.hx",177,0x6d18bb9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(178)
	::flixel::math::FlxRect tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	tmp->height = value;
	HX_STACK_LINE(179)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNode_obj,set_height,return )


FlxNode_obj::FlxNode_obj()
{
}

void FlxNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNode);
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(filled,"filled");
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(isEmpty,"isEmpty");
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_END_CLASS();
}

void FlxNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(filled,"filled");
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(isEmpty,"isEmpty");
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
}

Dynamic FlxNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp == hx::paccAlways ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp == hx::paccAlways ? get_y() : y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"atlas") ) { return atlas; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { return filled; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return inCallProp == hx::paccAlways ? get_isEmpty() : isEmpty; }
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canPlace") ) { return canPlace_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return get_isEmpty_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileFrames") ) { return getTileFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getImageFrame") ) { return getImageFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::flixel::graphics::atlas::FlxNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlas") ) { atlas=inValue.Cast< ::flixel::graphics::atlas::FlxAtlas >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { filled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { isEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("filled","\xa2","\x0d","\x2f","\x85"));
	outFields->push(HX_HCSTRING("atlas","\x4b","\x4d","\xdd","\x26"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"));
	outFields->push(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxNode_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsObject /*::flixel::graphics::atlas::FlxNode*/ ,(int)offsetof(FlxNode_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxNode_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsString,(int)offsetof(FlxNode_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsBool,(int)offsetof(FlxNode_obj,filled),HX_HCSTRING("filled","\xa2","\x0d","\x2f","\x85")},
	{hx::fsObject /*::flixel::graphics::atlas::FlxAtlas*/ ,(int)offsetof(FlxNode_obj,atlas),HX_HCSTRING("atlas","\x4b","\x4d","\xdd","\x26")},
	{hx::fsInt,(int)offsetof(FlxNode_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(FlxNode_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(FlxNode_obj,isEmpty),HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c")},
	{hx::fsBool,(int)offsetof(FlxNode_obj,rotated),HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("filled","\xa2","\x0d","\x2f","\x85"),
	HX_HCSTRING("atlas","\x4b","\x4d","\xdd","\x26"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("canPlace","\x97","\x36","\x21","\x33"),
	HX_HCSTRING("getTileFrames","\xaa","\xe1","\x8e","\x6d"),
	HX_HCSTRING("getImageFrame","\x08","\x9b","\xc3","\x6e"),
	HX_HCSTRING("get_isEmpty","\x5a","\x3e","\x5a","\x92"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNode_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxNode_obj::__mClass;

void FlxNode_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.atlas.FlxNode","\x40","\x12","\x0e","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxNode_obj >;
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
} // end namespace atlas
