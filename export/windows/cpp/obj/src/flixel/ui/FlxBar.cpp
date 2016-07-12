#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
namespace ui{

Void FlxBar_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder)
{
HX_STACK_FRAME("flixel.ui.FlxBar","new",0xec11b05b,"flixel.ui.FlxBar.new","flixel/ui/FlxBar.hx",35,0x9c56c8d5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(direction,"direction")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(parentRef,"parentRef")
HX_STACK_ARG(__o_variable,"variable")
HX_STACK_ARG(__o_min,"min")
HX_STACK_ARG(__o_max,"max")
HX_STACK_ARG(__o_showBorder,"showBorder")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(100);
int height = __o_height.Default(10);
::String variable = __o_variable.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Float min = __o_min.Default(0);
Float max = __o_max.Default(100);
bool showBorder = __o_showBorder.Default(false);
{
	HX_STACK_LINE(53)
	this->killOnEmpty = false;
	HX_STACK_LINE(41)
	this->fixedPosition = true;
	HX_STACK_LINE(147)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(149)
	bool tmp2 = (direction == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(149)
	::flixel::ui::FlxBarFillDirection tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(149)
	if ((tmp2)){
		HX_STACK_LINE(149)
		tmp3 = ::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT;
	}
	else{
		HX_STACK_LINE(149)
		tmp3 = direction;
	}
	HX_STACK_LINE(149)
	direction = tmp3;
	HX_STACK_LINE(151)
	this->barWidth = width;
	HX_STACK_LINE(152)
	this->barHeight = height;
	HX_STACK_LINE(154)
	::openfl::_legacy::geom::Point tmp4 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	this->_filledBarPoint = tmp4;
	HX_STACK_LINE(155)
	::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(155)
	this->_filledBarRect = tmp5;
	HX_STACK_LINE(156)
	bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(156)
	if ((tmp6)){
		HX_STACK_LINE(158)
		::openfl::_legacy::geom::Point tmp7 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		this->_zeroOffset = tmp7;
		HX_STACK_LINE(159)
		::openfl::_legacy::geom::Rectangle tmp8 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(159)
		this->_emptyBarRect = tmp8;
		HX_STACK_LINE(160)
		int tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(160)
		int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(160)
		this->makeGraphic(tmp9,tmp10,(int)0,true,null());
	}
	else{
		HX_STACK_LINE(164)
		::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(164)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(164)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(164)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(164)
			::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp9 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(164)
				::flixel::math::FlxRect tmp10 = tmp9->get();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(164)
				::flixel::math::FlxRect _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(164)
				_this->x = X;
				HX_STACK_LINE(164)
				_this->y = Y;
				HX_STACK_LINE(164)
				_this->width = Width;
				HX_STACK_LINE(164)
				_this->height = Height;
				HX_STACK_LINE(164)
				tmp8 = _this;
			}
			HX_STACK_LINE(164)
			::flixel::math::FlxRect rect = tmp8;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(164)
			rect->_inPool = false;
			HX_STACK_LINE(164)
			tmp7 = rect;
		}
		HX_STACK_LINE(164)
		this->_filledFlxRect = tmp7;
	}
	HX_STACK_LINE(167)
	bool tmp7 = (parentRef != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(167)
	if ((tmp7)){
		HX_STACK_LINE(169)
		this->parent = parentRef;
		HX_STACK_LINE(170)
		this->parentVariable = variable;
	}
	HX_STACK_LINE(173)
	::flixel::ui::FlxBarFillDirection tmp8 = direction;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(173)
	this->set_fillDirection(tmp8);
	HX_STACK_LINE(174)
	bool tmp9 = showBorder;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(174)
	this->createFilledBar((int)-16756480,(int)-16714752,tmp9,null());
	HX_STACK_LINE(175)
	Float tmp10 = min;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(175)
	Float tmp11 = max;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(175)
	this->setRange(tmp10,tmp11);
}
;
	return null();
}

//FlxBar_obj::~FlxBar_obj() { }

Dynamic FlxBar_obj::__CreateEmpty() { return  new FlxBar_obj; }
hx::ObjectPtr< FlxBar_obj > FlxBar_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder)
{  hx::ObjectPtr< FlxBar_obj > _result_ = new FlxBar_obj();
	_result_->__construct(__o_x,__o_y,direction,__o_width,__o_height,parentRef,__o_variable,__o_min,__o_max,__o_showBorder);
	return _result_;}

Dynamic FlxBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBar_obj > _result_ = new FlxBar_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _result_;}

Void FlxBar_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","destroy",0x13b32675,"flixel.ui.FlxBar.destroy","flixel/ui/FlxBar.hx",179,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		::flixel::math::FlxPoint tmp = this->positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		this->positionOffset = tmp1;
		HX_STACK_LINE(182)
		bool tmp2 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(184)
			this->_frontFrame = null();
			HX_STACK_LINE(185)
			::flixel::math::FlxRect tmp3 = this->_filledFlxRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			::flixel::math::FlxRect tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(185)
			this->_filledFlxRect = tmp4;
		}
		else{
			HX_STACK_LINE(189)
			this->_emptyBarRect = null();
			HX_STACK_LINE(190)
			this->_zeroOffset = null();
			HX_STACK_LINE(191)
			::openfl::_legacy::display::BitmapData tmp3 = this->_emptyBar;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(191)
			::openfl::_legacy::display::BitmapData tmp4 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			this->_emptyBar = tmp4;
			HX_STACK_LINE(192)
			::openfl::_legacy::display::BitmapData tmp5 = this->_filledBar;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(192)
			::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			this->_filledBar = tmp6;
		}
		HX_STACK_LINE(194)
		this->_filledBarRect = null();
		HX_STACK_LINE(195)
		this->_filledBarPoint = null();
		HX_STACK_LINE(197)
		this->parent = null();
		HX_STACK_LINE(198)
		this->positionOffset = null();
		HX_STACK_LINE(199)
		this->emptyCallback = null();
		HX_STACK_LINE(200)
		this->filledCallback = null();
		HX_STACK_LINE(202)
		this->super::destroy();
	}
return null();
}


Void FlxBar_obj::trackParent( int offsetX,int offsetY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","trackParent",0x235ed510,"flixel.ui.FlxBar.trackParent","flixel/ui/FlxBar.hx",215,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offsetX,"offsetX")
		HX_STACK_ARG(offsetY,"offsetY")
		HX_STACK_LINE(216)
		this->fixedPosition = false;
		HX_STACK_LINE(217)
		::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp1 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(217)
			::flixel::math::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			int tmp3 = offsetX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			int tmp4 = offsetY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::flixel::math::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			::flixel::math::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(217)
			point->_inPool = false;
			HX_STACK_LINE(217)
			tmp = point;
		}
		HX_STACK_LINE(217)
		this->positionOffset = tmp;
		HX_STACK_LINE(219)
		Dynamic tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(219)
		if ((tmp2)){
			HX_STACK_LINE(221)
			::flixel::math::FlxPoint tmp3 = this->scrollFactor;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			Dynamic tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			tmp3->set_x(tmp4->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ));
			HX_STACK_LINE(222)
			::flixel::math::FlxPoint tmp5 = this->scrollFactor;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			Dynamic tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			tmp5->set_y(tmp6->__Field(HX_HCSTRING("scrollFactor","\xbc","\xec","\xcf","\x3b"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,trackParent,(void))

Void FlxBar_obj::setParent( Dynamic parentRef,::String variable,hx::Null< bool >  __o_track,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY){
bool track = __o_track.Default(false);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
	HX_STACK_FRAME("flixel.ui.FlxBar","setParent",0x1ca008a7,"flixel.ui.FlxBar.setParent","flixel/ui/FlxBar.hx",236,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parentRef,"parentRef")
	HX_STACK_ARG(variable,"variable")
	HX_STACK_ARG(track,"track")
	HX_STACK_ARG(offsetX,"offsetX")
	HX_STACK_ARG(offsetY,"offsetY")
{
		HX_STACK_LINE(237)
		this->parent = parentRef;
		HX_STACK_LINE(238)
		this->parentVariable = variable;
		HX_STACK_LINE(240)
		bool tmp = track;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		if ((tmp)){
			HX_STACK_LINE(242)
			int tmp1 = offsetX;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			int tmp2 = offsetY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			this->trackParent(tmp1,tmp2);
		}
		HX_STACK_LINE(245)
		this->updateValueFromParent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,setParent,(void))

Void FlxBar_obj::stopTrackingParent( int posX,int posY){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","stopTrackingParent",0x3b6e39c8,"flixel.ui.FlxBar.stopTrackingParent","flixel/ui/FlxBar.hx",255,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(posX,"posX")
		HX_STACK_ARG(posY,"posY")
		HX_STACK_LINE(256)
		this->fixedPosition = true;
		HX_STACK_LINE(257)
		int tmp = posX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		this->set_x(tmp);
		HX_STACK_LINE(258)
		int tmp1 = posY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,stopTrackingParent,(void))

Void FlxBar_obj::setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  __o_killOnEmpty){
bool killOnEmpty = __o_killOnEmpty.Default(false);
	HX_STACK_FRAME("flixel.ui.FlxBar","setCallbacks",0x67217bb1,"flixel.ui.FlxBar.setCallbacks","flixel/ui/FlxBar.hx",271,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(onEmpty,"onEmpty")
	HX_STACK_ARG(onFilled,"onFilled")
	HX_STACK_ARG(killOnEmpty,"killOnEmpty")
{
		HX_STACK_LINE(272)
		bool tmp = (onEmpty != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		if ((tmp)){
			HX_STACK_LINE(272)
			tmp1 = onEmpty;
		}
		else{
			HX_STACK_LINE(272)
			tmp1 = this->emptyCallback_dyn();
		}
		HX_STACK_LINE(272)
		this->emptyCallback = tmp1;
		HX_STACK_LINE(273)
		bool tmp2 = (onFilled != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		if ((tmp2)){
			HX_STACK_LINE(273)
			tmp3 = onFilled;
		}
		else{
			HX_STACK_LINE(273)
			tmp3 = this->filledCallback_dyn();
		}
		HX_STACK_LINE(273)
		this->filledCallback = tmp3;
		HX_STACK_LINE(274)
		this->killOnEmpty = killOnEmpty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,setCallbacks,(void))

Void FlxBar_obj::setRange( Float min,Float max){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","setRange",0x4a8160e0,"flixel.ui.FlxBar.setRange","flixel/ui/FlxBar.hx",284,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(min,"min")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(285)
		bool tmp = (max <= min);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		if ((tmp)){
			HX_STACK_LINE(287)
			HX_STACK_DO_THROW(HX_HCSTRING("FlxBar: max cannot be less than or equal to min","\x5b","\xe6","\xe7","\x51"));
			HX_STACK_LINE(288)
			return null();
		}
		HX_STACK_LINE(291)
		this->min = min;
		HX_STACK_LINE(292)
		this->max = max;
		HX_STACK_LINE(293)
		Float tmp1 = (max - min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		this->range = tmp1;
		HX_STACK_LINE(294)
		Float tmp2 = this->range;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		Float tmp3 = (Float(tmp2) / Float((int)100));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		this->pct = tmp3;
		HX_STACK_LINE(296)
		bool tmp4 = this->_fillHorizontal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		if ((tmp4)){
			HX_STACK_LINE(296)
			int tmp6 = this->barWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			tmp5 = (Float(tmp6) / Float((int)100));
		}
		else{
			HX_STACK_LINE(296)
			int tmp6 = this->barHeight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			tmp5 = (Float(tmp6) / Float((int)100));
		}
		HX_STACK_LINE(296)
		this->pxPerPercent = tmp5;
		HX_STACK_LINE(298)
		Float tmp6 = this->get_value();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		bool tmp7 = ::Math_obj::isNaN(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(298)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		if ((tmp8)){
			HX_STACK_LINE(300)
			Float tmp9 = min;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(300)
			Float tmp10 = this->get_value();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(300)
			Float tmp11 = max;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(300)
			Float tmp12 = ::Math_obj::min(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(300)
			Float tmp13 = ::Math_obj::max(tmp9,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(300)
			this->set_value(tmp13);
		}
		else{
			HX_STACK_LINE(304)
			Float tmp9 = min;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(304)
			this->set_value(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,setRange,(void))

::flixel::ui::FlxBar FlxBar_obj::createFilledBar( int empty,int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createFilledBar",0x6a7e3330,"flixel.ui.FlxBar.createFilledBar","flixel/ui/FlxBar.hx",319,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(320)
		int tmp = empty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		int tmp2 = border;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		this->createColoredEmptyBar(tmp,tmp1,tmp2);
		HX_STACK_LINE(321)
		int tmp3 = fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		bool tmp4 = showBorder;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		int tmp5 = border;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		this->createColoredFilledBar(tmp3,tmp4,tmp5);
		HX_STACK_LINE(322)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createColoredEmptyBar( int empty,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createColoredEmptyBar",0xa6df1307,"flixel.ui.FlxBar.createColoredEmptyBar","flixel/ui/FlxBar.hx",334,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(335)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(335)
		if ((tmp)){
			HX_STACK_LINE(337)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(337)
			::String tmp2 = (HX_HCSTRING("empty: ","\x73","\xea","\xc7","\xc6") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(337)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(337)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(337)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(337)
			::String tmp6 = (tmp5 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(337)
				bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
				HX_STACK_LINE(337)
				bool tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(337)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(337)
				if ((tmp8)){
					HX_STACK_LINE(337)
					tmp9 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
				}
				else{
					HX_STACK_LINE(337)
					tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(337)
				bool tmp10 = Alpha;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(337)
				::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(337)
				if ((tmp10)){
					HX_STACK_LINE(337)
					int tmp12 = (int(empty) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(337)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(337)
					tmp11 = ::StringTools_obj::hex(tmp13,(int)2);
				}
				else{
					HX_STACK_LINE(337)
					tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(337)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(337)
				int tmp13 = (int(empty) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(337)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(337)
				::String tmp15 = ::StringTools_obj::hex(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(337)
				::String tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(337)
				int tmp17 = (int(empty) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(337)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(337)
				::String tmp19 = ::StringTools_obj::hex(tmp18,(int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(337)
				::String tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(337)
				int tmp21 = (int(empty) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(337)
				::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(337)
				tmp7 = (tmp20 + tmp22);
			}
			HX_STACK_LINE(337)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(337)
			::String emptyKey = tmp8;		HX_STACK_VAR(emptyKey,"emptyKey");
			HX_STACK_LINE(338)
			bool tmp9 = showBorder;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(338)
			if ((tmp9)){
				HX_STACK_LINE(339)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(339)
				{
					HX_STACK_LINE(339)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(339)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(339)
					bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(339)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(339)
					if ((tmp11)){
						HX_STACK_LINE(339)
						tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(339)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(339)
					bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(339)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(339)
					if ((tmp13)){
						HX_STACK_LINE(339)
						int tmp15 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(339)
						int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(339)
						tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
					}
					else{
						HX_STACK_LINE(339)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(339)
					::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(339)
					int tmp16 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(339)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(339)
					::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(339)
					::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(339)
					int tmp20 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(339)
					int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(339)
					::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(339)
					::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(339)
					int tmp24 = (int(border) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(339)
					::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(339)
					tmp10 = (tmp23 + tmp25);
				}
				HX_STACK_LINE(339)
				::String tmp11 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(339)
				hx::AddEq(emptyKey,tmp11);
			}
			HX_STACK_LINE(341)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(341)
			{
				HX_STACK_LINE(341)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(341)
				::String tmp12 = emptyKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(341)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(341)
				bool tmp14 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(341)
				if ((tmp14)){
					HX_STACK_LINE(341)
					::String tmp15 = emptyKey;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(341)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(341)
					::flixel::graphics::FlxGraphic tmp17 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(341)
					::flixel::graphics::FlxGraphic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(341)
					::flixel::graphics::FlxGraphic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(341)
					tmp10 = (tmp19 != null());
				}
				else{
					HX_STACK_LINE(341)
					tmp10 = false;
				}
			}
			HX_STACK_LINE(341)
			bool tmp11 = (tmp10 == false);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(341)
			if ((tmp11)){
				HX_STACK_LINE(343)
				::openfl::_legacy::display::BitmapData emptyBar = null();		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(345)
				bool tmp12 = showBorder;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(345)
				if ((tmp12)){
					HX_STACK_LINE(347)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(347)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(347)
					int tmp15 = border;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(347)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(347)
					emptyBar = tmp16;
					HX_STACK_LINE(348)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(348)
					int tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(348)
					int tmp19 = this->barHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(348)
					int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(348)
					::openfl::_legacy::geom::Rectangle tmp21 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(348)
					int tmp22 = empty;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(348)
					emptyBar->fillRect(tmp21,tmp22);
				}
				else{
					HX_STACK_LINE(352)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(352)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(352)
					int tmp15 = empty;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(352)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(352)
					emptyBar = tmp16;
				}
				HX_STACK_LINE(355)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(355)
				::openfl::_legacy::display::BitmapData tmp14 = emptyBar;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(355)
				::String tmp15 = emptyKey;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(355)
				tmp13->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp14,false,tmp15);
			}
			HX_STACK_LINE(358)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp12 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(358)
			::String tmp13 = emptyKey;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(358)
			::flixel::graphics::FlxGraphic tmp14 = tmp12->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(358)
			::flixel::graphics::frames::FlxImageFrame tmp15 = tmp14->get_imageFrame();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(358)
			this->set_frames(tmp15);
		}
		else{
			HX_STACK_LINE(362)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(362)
			if ((tmp1)){
				HX_STACK_LINE(364)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(364)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(364)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(364)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(364)
				this->_emptyBar = tmp5;
				HX_STACK_LINE(365)
				::openfl::_legacy::display::BitmapData tmp6 = this->_emptyBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(365)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(365)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(365)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(365)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(365)
				::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(365)
				int tmp12 = empty;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(365)
				tmp6->fillRect(tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(369)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(369)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(369)
				int tmp4 = empty;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(369)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(369)
				this->_emptyBar = tmp5;
			}
			HX_STACK_LINE(372)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_emptyBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(372)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(372)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(372)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(373)
			this->updateEmptyBar();
		}
		HX_STACK_LINE(376)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createColoredFilledBar( int fill,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createColoredFilledBar",0x03a68870,"flixel.ui.FlxBar.createColoredFilledBar","flixel/ui/FlxBar.hx",387,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(388)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		if ((tmp)){
			HX_STACK_LINE(390)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(390)
			::String tmp2 = (HX_HCSTRING("filled: ","\xc8","\x6c","\x47","\x79") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(390)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(390)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(390)
			::String tmp6 = (tmp5 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(390)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(390)
				bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(390)
				bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
				HX_STACK_LINE(390)
				bool tmp8 = Prefix;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(390)
				::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(390)
				if ((tmp8)){
					HX_STACK_LINE(390)
					tmp9 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
				}
				else{
					HX_STACK_LINE(390)
					tmp9 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(390)
				bool tmp10 = Alpha;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(390)
				::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(390)
				if ((tmp10)){
					HX_STACK_LINE(390)
					int tmp12 = (int(fill) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(390)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(390)
					tmp11 = ::StringTools_obj::hex(tmp13,(int)2);
				}
				else{
					HX_STACK_LINE(390)
					tmp11 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(390)
				::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(390)
				int tmp13 = (int(fill) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(390)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(390)
				::String tmp15 = ::StringTools_obj::hex(tmp14,(int)2);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(390)
				::String tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(390)
				int tmp17 = (int(fill) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(390)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(390)
				::String tmp19 = ::StringTools_obj::hex(tmp18,(int)2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(390)
				::String tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(390)
				int tmp21 = (int(fill) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(390)
				::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(390)
				tmp7 = (tmp20 + tmp22);
			}
			HX_STACK_LINE(390)
			::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(390)
			::String filledKey = tmp8;		HX_STACK_VAR(filledKey,"filledKey");
			HX_STACK_LINE(391)
			bool tmp9 = showBorder;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(391)
			if ((tmp9)){
				HX_STACK_LINE(392)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(392)
				{
					HX_STACK_LINE(392)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(392)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(392)
					bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					if ((tmp11)){
						HX_STACK_LINE(392)
						tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(392)
						tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(392)
					bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(392)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(392)
					if ((tmp13)){
						HX_STACK_LINE(392)
						int tmp15 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(392)
						int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(392)
						tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
					}
					else{
						HX_STACK_LINE(392)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(392)
					::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(392)
					int tmp16 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(392)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(392)
					::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(392)
					::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(392)
					int tmp20 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(392)
					int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(392)
					::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(392)
					::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(392)
					int tmp24 = (int(border) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(392)
					::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(392)
					tmp10 = (tmp23 + tmp25);
				}
				HX_STACK_LINE(392)
				::String tmp11 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(392)
				hx::AddEq(filledKey,tmp11);
			}
			HX_STACK_LINE(394)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(394)
			{
				HX_STACK_LINE(394)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp11 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(394)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp11;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(394)
				::String tmp12 = filledKey;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(394)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				bool tmp14 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(394)
				if ((tmp14)){
					HX_STACK_LINE(394)
					::String tmp15 = filledKey;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					::flixel::graphics::FlxGraphic tmp17 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(394)
					::flixel::graphics::FlxGraphic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(394)
					::flixel::graphics::FlxGraphic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(394)
					tmp10 = (tmp19 != null());
				}
				else{
					HX_STACK_LINE(394)
					tmp10 = false;
				}
			}
			HX_STACK_LINE(394)
			bool tmp11 = (tmp10 == false);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(394)
			if ((tmp11)){
				HX_STACK_LINE(396)
				::openfl::_legacy::display::BitmapData filledBar = null();		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(398)
				bool tmp12 = showBorder;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(398)
				if ((tmp12)){
					HX_STACK_LINE(400)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(400)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(400)
					int tmp15 = border;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(400)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(400)
					filledBar = tmp16;
					HX_STACK_LINE(401)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(401)
					int tmp18 = (tmp17 - (int)2);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(401)
					int tmp19 = this->barHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(401)
					int tmp20 = (tmp19 - (int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(401)
					::openfl::_legacy::geom::Rectangle tmp21 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(401)
					int tmp22 = fill;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(401)
					filledBar->fillRect(tmp21,tmp22);
				}
				else{
					HX_STACK_LINE(405)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(405)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(405)
					int tmp15 = fill;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(405)
					::openfl::_legacy::display::BitmapData tmp16 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp13,tmp14,true,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(405)
					filledBar = tmp16;
				}
				HX_STACK_LINE(408)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(408)
				::openfl::_legacy::display::BitmapData tmp14 = filledBar;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(408)
				::String tmp15 = filledKey;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(408)
				tmp13->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp14,false,tmp15);
			}
			HX_STACK_LINE(411)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp12 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(411)
			::String tmp13 = filledKey;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(411)
			::flixel::graphics::FlxGraphic tmp14 = tmp12->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			::flixel::graphics::frames::FlxImageFrame tmp15 = tmp14->get_imageFrame();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(411)
			this->set_frontFrames(tmp15);
		}
		else{
			HX_STACK_LINE(415)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			if ((tmp1)){
				HX_STACK_LINE(417)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(417)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(417)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				this->_filledBar = tmp5;
				HX_STACK_LINE(418)
				::openfl::_legacy::display::BitmapData tmp6 = this->_filledBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(418)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(418)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(418)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(418)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(418)
				::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)1,(int)1,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(418)
				int tmp12 = fill;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(418)
				tmp6->fillRect(tmp11,tmp12);
			}
			else{
				HX_STACK_LINE(422)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(422)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(422)
				int tmp4 = fill;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				this->_filledBar = tmp5;
			}
			HX_STACK_LINE(425)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_filledBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(425)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(425)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(425)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(426)
			this->updateFilledBar();
		}
		HX_STACK_LINE(428)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxBar_obj,createColoredFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientBar",0x851ca162,"flixel.ui.FlxBar.createGradientBar","flixel/ui/FlxBar.hx",444,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(445)
		int tmp = chunkSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		int tmp1 = rotation;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(445)
		bool tmp2 = showBorder;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(445)
		int tmp3 = border;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(445)
		this->createGradientEmptyBar(empty,tmp,tmp1,tmp2,tmp3);
		HX_STACK_LINE(446)
		int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(446)
		int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(446)
		bool tmp6 = showBorder;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		int tmp7 = border;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		this->createGradientFilledBar(fill,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(447)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxBar_obj,createGradientBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientEmptyBar( Array< int > empty,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientEmptyBar",0x05ffcf57,"flixel.ui.FlxBar.createGradientEmptyBar","flixel/ui/FlxBar.hx",461,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(462)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		if ((tmp)){
			HX_STACK_LINE(464)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(464)
			::String tmp2 = (HX_HCSTRING("Gradient:","\x2a","\x58","\xe6","\x6e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(464)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(464)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(464)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(464)
			::String tmp6 = (tmp5 + HX_HCSTRING(",colors:[","\xbd","\xd0","\x85","\xcb"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			::String emptyKey = tmp6;		HX_STACK_VAR(emptyKey,"emptyKey");
			HX_STACK_LINE(465)
			{
				HX_STACK_LINE(465)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(465)
				while((true)){
					HX_STACK_LINE(465)
					bool tmp7 = (_g < empty->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(465)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(465)
					if ((tmp8)){
						HX_STACK_LINE(465)
						break;
					}
					HX_STACK_LINE(465)
					int tmp9 = empty->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(465)
					int col = tmp9;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(465)
					++(_g);
					HX_STACK_LINE(467)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(467)
					{
						HX_STACK_LINE(467)
						bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
						HX_STACK_LINE(467)
						bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
						HX_STACK_LINE(467)
						bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(467)
						::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(467)
						if ((tmp11)){
							HX_STACK_LINE(467)
							tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
						}
						else{
							HX_STACK_LINE(467)
							tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(467)
						bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(467)
						::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(467)
						if ((tmp13)){
							HX_STACK_LINE(467)
							int tmp15 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(467)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(467)
							tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
						}
						else{
							HX_STACK_LINE(467)
							tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(467)
						::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(467)
						int tmp16 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(467)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(467)
						::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(467)
						::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(467)
						int tmp20 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(467)
						int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(467)
						::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(467)
						::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(467)
						int tmp24 = (int(col) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(467)
						::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(467)
						tmp10 = (tmp23 + tmp25);
					}
					HX_STACK_LINE(467)
					::String tmp11 = (tmp10 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(467)
					hx::AddEq(emptyKey,tmp11);
				}
			}
			HX_STACK_LINE(469)
			::String tmp7 = (HX_HCSTRING("],chunkSize: ","\x25","\xff","\x35","\xeb") + chunkSize);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(469)
			::String tmp8 = (tmp7 + HX_HCSTRING(",rotation: ","\x90","\x2a","\xb9","\x0a"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(469)
			int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(469)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(469)
			hx::AddEq(emptyKey,tmp10);
			HX_STACK_LINE(471)
			bool tmp11 = showBorder;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(471)
			if ((tmp11)){
				HX_STACK_LINE(473)
				::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(473)
				{
					HX_STACK_LINE(473)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(473)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(473)
					bool tmp13 = Prefix;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(473)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(473)
					if ((tmp13)){
						HX_STACK_LINE(473)
						tmp14 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(473)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(473)
					bool tmp15 = Alpha;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(473)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(473)
					if ((tmp15)){
						HX_STACK_LINE(473)
						int tmp17 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(473)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(473)
						tmp16 = ::StringTools_obj::hex(tmp18,(int)2);
					}
					else{
						HX_STACK_LINE(473)
						tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(473)
					::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(473)
					int tmp18 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(473)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(473)
					::String tmp20 = ::StringTools_obj::hex(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(473)
					::String tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(473)
					int tmp22 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(473)
					int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(473)
					::String tmp24 = ::StringTools_obj::hex(tmp23,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(473)
					::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(473)
					int tmp26 = (int(border) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(473)
					::String tmp27 = ::StringTools_obj::hex(tmp26,(int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(473)
					tmp12 = (tmp25 + tmp27);
				}
				HX_STACK_LINE(473)
				::String tmp13 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(473)
				hx::AddEq(emptyKey,tmp13);
			}
			HX_STACK_LINE(476)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(476)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				::String tmp14 = emptyKey;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(476)
				::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(476)
				bool tmp16 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(476)
				if ((tmp16)){
					HX_STACK_LINE(476)
					::String tmp17 = emptyKey;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(476)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(476)
					::flixel::graphics::FlxGraphic tmp19 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(476)
					::flixel::graphics::FlxGraphic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(476)
					::flixel::graphics::FlxGraphic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(476)
					tmp12 = (tmp21 != null());
				}
				else{
					HX_STACK_LINE(476)
					tmp12 = false;
				}
			}
			HX_STACK_LINE(476)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(476)
			if ((tmp13)){
				HX_STACK_LINE(478)
				::openfl::_legacy::display::BitmapData emptyBar = null();		HX_STACK_VAR(emptyBar,"emptyBar");
				HX_STACK_LINE(480)
				bool tmp14 = showBorder;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(480)
				if ((tmp14)){
					HX_STACK_LINE(482)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(482)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(482)
					int tmp17 = border;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(482)
					::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp15,tmp16,true,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(482)
					emptyBar = tmp18;
					HX_STACK_LINE(483)
					::openfl::_legacy::display::BitmapData tmp19 = emptyBar;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(483)
					int tmp20 = this->barWidth;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(483)
					int tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(483)
					int tmp22 = this->barHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(483)
					int tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(483)
					int tmp24 = chunkSize;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(483)
					int tmp25 = rotation;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(483)
					::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp19,tmp21,tmp23,empty,(int)1,(int)1,tmp24,tmp25,null());
				}
				else{
					HX_STACK_LINE(487)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(487)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(487)
					int tmp17 = chunkSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(487)
					int tmp18 = rotation;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(487)
					::openfl::_legacy::display::BitmapData tmp19 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp15,tmp16,empty,tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(487)
					emptyBar = tmp19;
				}
				HX_STACK_LINE(490)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp15 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(490)
				::openfl::_legacy::display::BitmapData tmp16 = emptyBar;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(490)
				::String tmp17 = emptyKey;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(490)
				tmp15->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp16,false,tmp17);
			}
			HX_STACK_LINE(493)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp14 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(493)
			::String tmp15 = emptyKey;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(493)
			::flixel::graphics::FlxGraphic tmp16 = tmp14->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(493)
			::flixel::graphics::frames::FlxImageFrame tmp17 = tmp16->get_imageFrame();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(493)
			this->set_frames(tmp17);
		}
		else{
			HX_STACK_LINE(497)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(497)
			if ((tmp1)){
				HX_STACK_LINE(499)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(499)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(499)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(499)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(499)
				this->_emptyBar = tmp5;
				HX_STACK_LINE(500)
				::openfl::_legacy::display::BitmapData tmp6 = this->_emptyBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(500)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(500)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(500)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(500)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(500)
				int tmp11 = chunkSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(500)
				int tmp12 = rotation;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(500)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp6,tmp8,tmp10,empty,(int)1,(int)1,tmp11,tmp12,null());
			}
			else{
				HX_STACK_LINE(504)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(504)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(504)
				int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(504)
				int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(504)
				::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp2,tmp3,empty,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(504)
				this->_emptyBar = tmp6;
			}
			HX_STACK_LINE(507)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_emptyBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(507)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(507)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(508)
			this->updateEmptyBar();
		}
		HX_STACK_LINE(511)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createGradientFilledBar( Array< int > fill,hx::Null< int >  __o_chunkSize,hx::Null< int >  __o_rotation,hx::Null< bool >  __o_showBorder,hx::Null< int >  __o_border){
int chunkSize = __o_chunkSize.Default(1);
int rotation = __o_rotation.Default(180);
bool showBorder = __o_showBorder.Default(false);
int border = __o_border.Default(-1);
	HX_STACK_FRAME("flixel.ui.FlxBar","createGradientFilledBar",0xe12a9220,"flixel.ui.FlxBar.createGradientFilledBar","flixel/ui/FlxBar.hx",525,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(chunkSize,"chunkSize")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(showBorder,"showBorder")
	HX_STACK_ARG(border,"border")
{
		HX_STACK_LINE(526)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		if ((tmp)){
			HX_STACK_LINE(528)
			int tmp1 = this->barWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(528)
			::String tmp2 = (HX_HCSTRING("Gradient:","\x2a","\x58","\xe6","\x6e") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(528)
			::String tmp3 = (tmp2 + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(528)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(528)
			::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(528)
			::String tmp6 = (tmp5 + HX_HCSTRING(",colors:[","\xbd","\xd0","\x85","\xcb"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(528)
			::String filledKey = tmp6;		HX_STACK_VAR(filledKey,"filledKey");
			HX_STACK_LINE(529)
			{
				HX_STACK_LINE(529)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(529)
				while((true)){
					HX_STACK_LINE(529)
					bool tmp7 = (_g < fill->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(529)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(529)
					if ((tmp8)){
						HX_STACK_LINE(529)
						break;
					}
					HX_STACK_LINE(529)
					int tmp9 = fill->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(529)
					int col = tmp9;		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(529)
					++(_g);
					HX_STACK_LINE(531)
					::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(531)
					{
						HX_STACK_LINE(531)
						bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
						HX_STACK_LINE(531)
						bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
						HX_STACK_LINE(531)
						bool tmp11 = Prefix;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(531)
						::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(531)
						if ((tmp11)){
							HX_STACK_LINE(531)
							tmp12 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
						}
						else{
							HX_STACK_LINE(531)
							tmp12 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(531)
						bool tmp13 = Alpha;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(531)
						::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(531)
						if ((tmp13)){
							HX_STACK_LINE(531)
							int tmp15 = (int(col) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(531)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(531)
							tmp14 = ::StringTools_obj::hex(tmp16,(int)2);
						}
						else{
							HX_STACK_LINE(531)
							tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(531)
						::String tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(531)
						int tmp16 = (int(col) >> int((int)16));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(531)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(531)
						::String tmp18 = ::StringTools_obj::hex(tmp17,(int)2);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(531)
						::String tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(531)
						int tmp20 = (int(col) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(531)
						int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(531)
						::String tmp22 = ::StringTools_obj::hex(tmp21,(int)2);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(531)
						::String tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(531)
						int tmp24 = (int(col) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(531)
						::String tmp25 = ::StringTools_obj::hex(tmp24,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(531)
						tmp10 = (tmp23 + tmp25);
					}
					HX_STACK_LINE(531)
					::String tmp11 = (tmp10 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(531)
					hx::AddEq(filledKey,tmp11);
				}
			}
			HX_STACK_LINE(533)
			::String tmp7 = (HX_HCSTRING("],chunkSize: ","\x25","\xff","\x35","\xeb") + chunkSize);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(533)
			::String tmp8 = (tmp7 + HX_HCSTRING(",rotation: ","\x90","\x2a","\xb9","\x0a"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(533)
			int tmp9 = rotation;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(533)
			::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(533)
			hx::AddEq(filledKey,tmp10);
			HX_STACK_LINE(535)
			bool tmp11 = showBorder;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(535)
			if ((tmp11)){
				HX_STACK_LINE(537)
				::String tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(537)
				{
					HX_STACK_LINE(537)
					bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
					HX_STACK_LINE(537)
					bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
					HX_STACK_LINE(537)
					bool tmp13 = Prefix;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(537)
					::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(537)
					if ((tmp13)){
						HX_STACK_LINE(537)
						tmp14 = HX_HCSTRING("0x","\x48","\x2a","\x00","\x00");
					}
					else{
						HX_STACK_LINE(537)
						tmp14 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(537)
					bool tmp15 = Alpha;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(537)
					::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(537)
					if ((tmp15)){
						HX_STACK_LINE(537)
						int tmp17 = (int(border) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(537)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(537)
						tmp16 = ::StringTools_obj::hex(tmp18,(int)2);
					}
					else{
						HX_STACK_LINE(537)
						tmp16 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
					}
					HX_STACK_LINE(537)
					::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(537)
					int tmp18 = (int(border) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(537)
					int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(537)
					::String tmp20 = ::StringTools_obj::hex(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(537)
					::String tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(537)
					int tmp22 = (int(border) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(537)
					int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(537)
					::String tmp24 = ::StringTools_obj::hex(tmp23,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(537)
					::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(537)
					int tmp26 = (int(border) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(537)
					::String tmp27 = ::StringTools_obj::hex(tmp26,(int)2);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(537)
					tmp12 = (tmp25 + tmp27);
				}
				HX_STACK_LINE(537)
				::String tmp13 = (HX_HCSTRING(",border: ","\xbe","\x9e","\x76","\x9a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(537)
				hx::AddEq(filledKey,tmp13);
			}
			HX_STACK_LINE(540)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp13 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(540)
				::flixel::_system::frontEnds::BitmapFrontEnd _this = tmp13;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(540)
				::String tmp14 = filledKey;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(540)
				::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(540)
				bool tmp16 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(540)
				if ((tmp16)){
					HX_STACK_LINE(540)
					::String tmp17 = filledKey;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(540)
					::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(540)
					::flixel::graphics::FlxGraphic tmp19 = _this->__Field(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"), hx::paccDynamic )->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(540)
					::flixel::graphics::FlxGraphic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(540)
					::flixel::graphics::FlxGraphic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(540)
					tmp12 = (tmp21 != null());
				}
				else{
					HX_STACK_LINE(540)
					tmp12 = false;
				}
			}
			HX_STACK_LINE(540)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(540)
			if ((tmp13)){
				HX_STACK_LINE(542)
				::openfl::_legacy::display::BitmapData filledBar = null();		HX_STACK_VAR(filledBar,"filledBar");
				HX_STACK_LINE(544)
				bool tmp14 = showBorder;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(544)
				if ((tmp14)){
					HX_STACK_LINE(546)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(546)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(546)
					int tmp17 = border;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(546)
					::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp15,tmp16,true,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(546)
					filledBar = tmp18;
					HX_STACK_LINE(547)
					::openfl::_legacy::display::BitmapData tmp19 = filledBar;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(547)
					int tmp20 = this->barWidth;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(547)
					int tmp21 = (tmp20 - (int)2);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(547)
					int tmp22 = this->barHeight;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(547)
					int tmp23 = (tmp22 - (int)2);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(547)
					int tmp24 = chunkSize;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(547)
					int tmp25 = rotation;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(547)
					::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp19,tmp21,tmp23,fill,(int)1,(int)1,tmp24,tmp25,null());
				}
				else{
					HX_STACK_LINE(551)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(551)
					int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(551)
					int tmp17 = chunkSize;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(551)
					int tmp18 = rotation;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(551)
					::openfl::_legacy::display::BitmapData tmp19 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp15,tmp16,fill,tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(551)
					filledBar = tmp19;
				}
				HX_STACK_LINE(554)
				::flixel::_system::frontEnds::BitmapFrontEnd tmp15 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(554)
				::openfl::_legacy::display::BitmapData tmp16 = filledBar;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(554)
				::String tmp17 = filledKey;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(554)
				tmp15->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp16,false,tmp17);
			}
			HX_STACK_LINE(557)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp14 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(557)
			::String tmp15 = filledKey;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(557)
			::flixel::graphics::FlxGraphic tmp16 = tmp14->__Field(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"), hx::paccDynamic )(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(557)
			::flixel::graphics::frames::FlxImageFrame tmp17 = tmp16->get_imageFrame();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(557)
			this->set_frontFrames(tmp17);
		}
		else{
			HX_STACK_LINE(561)
			bool tmp1 = showBorder;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(561)
			if ((tmp1)){
				HX_STACK_LINE(563)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(563)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(563)
				int tmp4 = border;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(563)
				::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp2,tmp3,true,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(563)
				this->_filledBar = tmp5;
				HX_STACK_LINE(564)
				::openfl::_legacy::display::BitmapData tmp6 = this->_filledBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(564)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(564)
				int tmp8 = (tmp7 - (int)2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(564)
				int tmp9 = this->barHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(564)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(564)
				int tmp11 = chunkSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(564)
				int tmp12 = rotation;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(564)
				::flixel::util::FlxGradient_obj::overlayGradientOnBitmapData(tmp6,tmp8,tmp10,fill,(int)1,(int)1,tmp11,tmp12,null());
			}
			else{
				HX_STACK_LINE(568)
				int tmp2 = this->barWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(568)
				int tmp3 = this->barHeight;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(568)
				int tmp4 = chunkSize;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(568)
				int tmp5 = rotation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(568)
				::openfl::_legacy::display::BitmapData tmp6 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(tmp2,tmp3,fill,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(568)
				this->_filledBar = tmp6;
			}
			HX_STACK_LINE(571)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_filledBarRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			int tmp3 = this->barWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(571)
			int tmp4 = this->barHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(571)
			tmp2->setTo((int)0,(int)0,tmp3,tmp4);
			HX_STACK_LINE(572)
			this->updateFilledBar();
		}
		HX_STACK_LINE(575)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBar_obj,createGradientFilledBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  __o_emptyBackground,hx::Null< int >  __o_fillBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageBar",0xf0f89039,"flixel.ui.FlxBar.createImageBar","flixel/ui/FlxBar.hx",591,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(592)
		Dynamic tmp = empty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(592)
		int tmp1 = emptyBackground;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		this->createImageEmptyBar(tmp,tmp1);
		HX_STACK_LINE(593)
		Dynamic tmp2 = fill;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(593)
		int tmp3 = fillBackground;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(593)
		this->createImageFilledBar(tmp2,tmp3);
		HX_STACK_LINE(594)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBar_obj,createImageBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageEmptyBar( Dynamic empty,hx::Null< int >  __o_emptyBackground){
int emptyBackground = __o_emptyBackground.Default(-16777216);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageEmptyBar",0xa6dfb520,"flixel.ui.FlxBar.createImageEmptyBar","flixel/ui/FlxBar.hx",605,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(empty,"empty")
	HX_STACK_ARG(emptyBackground,"emptyBackground")
{
		HX_STACK_LINE(606)
		bool tmp = (empty != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(606)
		if ((tmp)){
			HX_STACK_LINE(608)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(608)
			Dynamic tmp2 = empty;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(608)
			::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(608)
			::flixel::graphics::FlxGraphic emptyGraphic = tmp3;		HX_STACK_VAR(emptyGraphic,"emptyGraphic");
			HX_STACK_LINE(610)
			bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(610)
			if ((tmp4)){
				HX_STACK_LINE(612)
				::flixel::graphics::frames::FlxImageFrame tmp5 = emptyGraphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(612)
				this->set_frames(tmp5);
			}
			else{
				HX_STACK_LINE(616)
				::openfl::_legacy::display::BitmapData tmp5 = emptyGraphic->bitmap->clone();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(616)
				this->_emptyBar = tmp5;
				HX_STACK_LINE(618)
				::openfl::_legacy::display::BitmapData tmp6 = this->_emptyBar;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(618)
				int tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(618)
				this->barWidth = tmp7;
				HX_STACK_LINE(619)
				::openfl::_legacy::display::BitmapData tmp8 = this->_emptyBar;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(619)
				int tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(619)
				this->barHeight = tmp9;
				HX_STACK_LINE(621)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_emptyBarRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(621)
				int tmp11 = this->barWidth;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(621)
				int tmp12 = this->barHeight;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(621)
				tmp10->setTo((int)0,(int)0,tmp11,tmp12);
				HX_STACK_LINE(623)
				::flixel::graphics::FlxGraphic tmp13 = this->graphic;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(623)
				bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(623)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(623)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(623)
				if ((tmp15)){
					HX_STACK_LINE(623)
					::flixel::graphics::frames::FlxFrame tmp17 = this->frame;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(623)
					::flixel::graphics::frames::FlxFrame tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(623)
					Float tmp19 = tmp18->sourceSize->x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(623)
					Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(623)
					int tmp21 = this->barWidth;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(623)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(623)
					bool tmp23 = (tmp20 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(623)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(623)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(623)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(623)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(623)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(623)
					if ((tmp28)){
						HX_STACK_LINE(623)
						::flixel::graphics::frames::FlxFrame tmp29 = this->frame;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(623)
						::flixel::graphics::frames::FlxFrame tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(623)
						::flixel::graphics::frames::FlxFrame tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(623)
						Float tmp32 = tmp31->sourceSize->y;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(623)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(623)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(623)
						int tmp35 = this->barHeight;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(623)
						int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(623)
						int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(623)
						tmp16 = (tmp34 != tmp37);
					}
					else{
						HX_STACK_LINE(623)
						tmp16 = true;
					}
				}
				else{
					HX_STACK_LINE(623)
					tmp16 = true;
				}
				HX_STACK_LINE(623)
				if ((tmp16)){
					HX_STACK_LINE(625)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(625)
					int tmp18 = this->barHeight;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(625)
					this->makeGraphic(tmp17,tmp18,(int)0,true,null());
				}
				HX_STACK_LINE(628)
				this->updateEmptyBar();
			}
		}
		else{
			HX_STACK_LINE(633)
			int tmp1 = emptyBackground;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(633)
			this->createColoredEmptyBar(tmp1,null(),null());
		}
		HX_STACK_LINE(636)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageEmptyBar,return )

::flixel::ui::FlxBar FlxBar_obj::createImageFilledBar( Dynamic fill,hx::Null< int >  __o_fillBackground){
int fillBackground = __o_fillBackground.Default(-16711936);
	HX_STACK_FRAME("flixel.ui.FlxBar","createImageFilledBar",0x0433bc37,"flixel.ui.FlxBar.createImageFilledBar","flixel/ui/FlxBar.hx",647,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(fillBackground,"fillBackground")
{
		HX_STACK_LINE(648)
		bool tmp = (fill != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		if ((tmp)){
			HX_STACK_LINE(650)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp1 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(650)
			Dynamic tmp2 = fill;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(650)
			::flixel::graphics::FlxGraphic tmp3 = tmp1->__Field(HX_HCSTRING("add","\x21","\xf2","\x49","\x00"), hx::paccDynamic )(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(650)
			::flixel::graphics::FlxGraphic filledGraphic = tmp3;		HX_STACK_VAR(filledGraphic,"filledGraphic");
			HX_STACK_LINE(652)
			bool tmp4 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(652)
			if ((tmp4)){
				HX_STACK_LINE(654)
				::flixel::graphics::frames::FlxImageFrame tmp5 = filledGraphic->get_imageFrame();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(654)
				this->set_frontFrames(tmp5);
			}
			else{
				HX_STACK_LINE(658)
				::openfl::_legacy::display::BitmapData tmp5 = filledGraphic->bitmap->clone();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(658)
				this->_filledBar = tmp5;
				HX_STACK_LINE(660)
				::openfl::_legacy::geom::Rectangle tmp6 = this->_filledBarRect;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(660)
				int tmp7 = this->barWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(660)
				int tmp8 = this->barHeight;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(660)
				tmp6->setTo((int)0,(int)0,tmp7,tmp8);
				HX_STACK_LINE(662)
				::flixel::graphics::FlxGraphic tmp9 = this->graphic;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(662)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(662)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(662)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(662)
				if ((tmp11)){
					HX_STACK_LINE(662)
					::flixel::graphics::frames::FlxFrame tmp13 = this->frame;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(662)
					::flixel::graphics::frames::FlxFrame tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(662)
					Float tmp15 = tmp14->sourceSize->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(662)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(662)
					int tmp17 = this->barWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(662)
					int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(662)
					bool tmp19 = (tmp16 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(662)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(662)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(662)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(662)
					bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(662)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(662)
					if ((tmp24)){
						HX_STACK_LINE(662)
						::flixel::graphics::frames::FlxFrame tmp25 = this->frame;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(662)
						::flixel::graphics::frames::FlxFrame tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(662)
						::flixel::graphics::frames::FlxFrame tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(662)
						Float tmp28 = tmp27->sourceSize->y;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(662)
						Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(662)
						Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(662)
						int tmp31 = this->barHeight;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(662)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(662)
						int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(662)
						tmp12 = (tmp30 != tmp33);
					}
					else{
						HX_STACK_LINE(662)
						tmp12 = true;
					}
				}
				else{
					HX_STACK_LINE(662)
					tmp12 = true;
				}
				HX_STACK_LINE(662)
				if ((tmp12)){
					HX_STACK_LINE(664)
					int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(664)
					int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(664)
					this->makeGraphic(tmp13,tmp14,(int)0,true,null());
				}
				HX_STACK_LINE(667)
				bool tmp13 = this->_fillHorizontal;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(667)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(667)
				if ((tmp13)){
					HX_STACK_LINE(667)
					int tmp15 = this->barWidth;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(667)
					tmp14 = (Float(tmp15) / Float((int)100));
				}
				else{
					HX_STACK_LINE(667)
					int tmp15 = this->barHeight;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(667)
					tmp14 = (Float(tmp15) / Float((int)100));
				}
				HX_STACK_LINE(667)
				this->pxPerPercent = tmp14;
				HX_STACK_LINE(668)
				this->updateFilledBar();
			}
		}
		else{
			HX_STACK_LINE(673)
			int tmp1 = fillBackground;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(673)
			this->createColoredFilledBar(tmp1,null(),null());
		}
		HX_STACK_LINE(676)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBar_obj,createImageFilledBar,return )

::flixel::ui::FlxBarFillDirection FlxBar_obj::set_fillDirection( ::flixel::ui::FlxBarFillDirection direction){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_fillDirection",0x7ac2afda,"flixel.ui.FlxBar.set_fillDirection","flixel/ui/FlxBar.hx",680,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(direction,"direction")
	HX_STACK_LINE(681)
	this->fillDirection = direction;
	HX_STACK_LINE(683)
	switch( (int)(direction->__Index())){
		case (int)0: case (int)1: case (int)4: case (int)5: {
			HX_STACK_LINE(686)
			this->_fillHorizontal = true;
		}
		;break;
		case (int)2: case (int)3: case (int)6: case (int)7: {
			HX_STACK_LINE(689)
			this->_fillHorizontal = false;
		}
		;break;
	}
	HX_STACK_LINE(692)
	::flixel::ui::FlxBarFillDirection tmp = this->fillDirection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(692)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_fillDirection,return )

Void FlxBar_obj::updateValueFromParent( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateValueFromParent",0x9d60d3b7,"flixel.ui.FlxBar.updateValueFromParent","flixel/ui/FlxBar.hx",696,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(697)
		Dynamic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		::String tmp1 = this->parentVariable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		Dynamic tmp2 = ::Reflect_obj::getProperty(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		this->set_value(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateValueFromParent,(void))

Void FlxBar_obj::updateBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateBar",0x52521d85,"flixel.ui.FlxBar.updateBar","flixel/ui/FlxBar.hx",705,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(706)
		this->updateEmptyBar();
		HX_STACK_LINE(707)
		this->updateFilledBar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateBar,(void))

Void FlxBar_obj::updateEmptyBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateEmptyBar",0x77e67454,"flixel.ui.FlxBar.updateEmptyBar","flixel/ui/FlxBar.hx",714,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(715)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(715)
		if ((tmp)){
			HX_STACK_LINE(717)
			::openfl::_legacy::display::BitmapData tmp1 = this->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(717)
			::openfl::_legacy::display::BitmapData tmp2 = this->_emptyBar;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(717)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_emptyBarRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(717)
			::openfl::_legacy::geom::Point tmp4 = this->_zeroOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(717)
			tmp1->copyPixels(tmp2,tmp3,tmp4,null(),null(),null());
			HX_STACK_LINE(718)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateEmptyBar,(void))

Void FlxBar_obj::updateFilledBar( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","updateFilledBar",0x19144a83,"flixel.ui.FlxBar.updateFilledBar","flixel/ui/FlxBar.hx",726,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(727)
		int tmp = this->barWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(727)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_filledBarRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(727)
		tmp1->width = tmp;
		HX_STACK_LINE(728)
		int tmp2 = this->barHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(728)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_filledBarRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(728)
		tmp3->height = tmp2;
		HX_STACK_LINE(730)
		bool tmp4 = this->_fillHorizontal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(730)
		if ((tmp4)){
			HX_STACK_LINE(732)
			Float tmp5 = this->get_percent();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(732)
			Float tmp6 = this->pxPerPercent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(732)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(732)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(732)
			::openfl::_legacy::geom::Rectangle tmp9 = this->_filledBarRect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(732)
			tmp9->width = tmp8;
		}
		else{
			HX_STACK_LINE(736)
			Float tmp5 = this->get_percent();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(736)
			Float tmp6 = this->pxPerPercent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(736)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(736)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(736)
			::openfl::_legacy::geom::Rectangle tmp9 = this->_filledBarRect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(736)
			tmp9->height = tmp8;
		}
		HX_STACK_LINE(739)
		Float tmp5 = this->get_percent();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(739)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(739)
		if ((tmp6)){
			HX_STACK_LINE(741)
			{
				HX_STACK_LINE(741)
				::flixel::ui::FlxBarFillDirection tmp7 = this->fillDirection;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(741)
				::flixel::ui::FlxBarFillDirection _g = tmp7;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(741)
				switch( (int)(_g->__Index())){
					case (int)0: case (int)2: {
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(747)
						int tmp8 = this->barHeight;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(747)
						::openfl::_legacy::geom::Rectangle tmp9 = this->_filledBarRect;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(747)
						Float tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(747)
						Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(747)
						::openfl::_legacy::geom::Rectangle tmp12 = this->_filledBarRect;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(747)
						tmp12->y = tmp11;
						HX_STACK_LINE(748)
						int tmp13 = this->barHeight;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(748)
						::openfl::_legacy::geom::Rectangle tmp14 = this->_filledBarRect;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(748)
						Float tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(748)
						Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(748)
						::openfl::_legacy::geom::Point tmp17 = this->_filledBarPoint;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(748)
						tmp17->y = tmp16;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(751)
						int tmp8 = this->barWidth;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(751)
						::openfl::_legacy::geom::Rectangle tmp9 = this->_filledBarRect;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(751)
						Float tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(751)
						Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(751)
						::openfl::_legacy::geom::Rectangle tmp12 = this->_filledBarRect;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(751)
						tmp12->x = tmp11;
						HX_STACK_LINE(752)
						int tmp13 = this->barWidth;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(752)
						::openfl::_legacy::geom::Rectangle tmp14 = this->_filledBarRect;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(752)
						Float tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(752)
						Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(752)
						::openfl::_legacy::geom::Point tmp17 = this->_filledBarPoint;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(752)
						tmp17->x = tmp16;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(755)
						int tmp8 = this->barWidth;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(755)
						Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(755)
						::openfl::_legacy::geom::Rectangle tmp10 = this->_filledBarRect;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(755)
						Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(755)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(755)
						Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(755)
						int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(755)
						::openfl::_legacy::geom::Rectangle tmp15 = this->_filledBarRect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(755)
						tmp15->x = tmp14;
						HX_STACK_LINE(756)
						int tmp16 = this->barWidth;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(756)
						Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(756)
						::openfl::_legacy::geom::Rectangle tmp18 = this->_filledBarRect;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(756)
						Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(756)
						Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(756)
						Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(756)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(756)
						::openfl::_legacy::geom::Point tmp23 = this->_filledBarPoint;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(756)
						tmp23->x = tmp22;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(759)
						Float tmp8 = this->get_percent();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(759)
						Float tmp9 = this->pxPerPercent;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(759)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(759)
						Float tmp11 = ((int)100 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(759)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(759)
						::openfl::_legacy::geom::Rectangle tmp13 = this->_filledBarRect;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(759)
						tmp13->width = tmp12;
						HX_STACK_LINE(760)
						int tmp14 = this->barWidth;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(760)
						::openfl::_legacy::geom::Rectangle tmp15 = this->_filledBarRect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(760)
						Float tmp16 = tmp15->width;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(760)
						Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(760)
						Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(760)
						int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(760)
						::openfl::_legacy::geom::Point tmp20 = this->_filledBarPoint;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(760)
						tmp20->x = tmp19;
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(763)
						int tmp8 = this->barHeight;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(763)
						Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(763)
						::openfl::_legacy::geom::Rectangle tmp10 = this->_filledBarRect;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(763)
						Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(763)
						Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(763)
						Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(763)
						int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(763)
						::openfl::_legacy::geom::Rectangle tmp15 = this->_filledBarRect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(763)
						tmp15->y = tmp14;
						HX_STACK_LINE(764)
						int tmp16 = this->barHeight;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(764)
						Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(764)
						::openfl::_legacy::geom::Rectangle tmp18 = this->_filledBarRect;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(764)
						Float tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(764)
						Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(764)
						Float tmp21 = (tmp17 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(764)
						int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(764)
						::openfl::_legacy::geom::Point tmp23 = this->_filledBarPoint;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(764)
						tmp23->y = tmp22;
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(767)
						Float tmp8 = this->get_percent();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(767)
						Float tmp9 = this->pxPerPercent;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(767)
						Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(767)
						Float tmp11 = ((int)100 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(767)
						int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(767)
						::openfl::_legacy::geom::Rectangle tmp13 = this->_filledBarRect;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(767)
						tmp13->height = tmp12;
						HX_STACK_LINE(768)
						int tmp14 = this->barHeight;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(768)
						::openfl::_legacy::geom::Rectangle tmp15 = this->_filledBarRect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(768)
						Float tmp16 = tmp15->height;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(768)
						Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(768)
						Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(768)
						int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(768)
						::openfl::_legacy::geom::Point tmp20 = this->_filledBarPoint;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(768)
						tmp20->y = tmp19;
					}
					;break;
				}
			}
			HX_STACK_LINE(771)
			bool tmp7 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(771)
			if ((tmp7)){
				HX_STACK_LINE(773)
				::openfl::_legacy::display::BitmapData tmp8 = this->get_pixels();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(773)
				::openfl::_legacy::display::BitmapData tmp9 = this->_filledBar;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(773)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_filledBarRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(773)
				::openfl::_legacy::geom::Point tmp11 = this->_filledBarPoint;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(773)
				tmp8->copyPixels(tmp9,tmp10,tmp11,null(),null(),true);
			}
			else{
				HX_STACK_LINE(777)
				::flixel::graphics::frames::FlxImageFrame tmp8 = this->get_frontFrames();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(777)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(777)
				if ((tmp9)){
					HX_STACK_LINE(779)
					Float tmp10 = this->get_percent();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(779)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(779)
					int prct = tmp11;		HX_STACK_VAR(prct,"prct");
					HX_STACK_LINE(780)
					{
						HX_STACK_LINE(780)
						::flixel::math::FlxRect tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(780)
						{
							HX_STACK_LINE(780)
							::flixel::math::FlxRect tmp13 = this->_filledFlxRect;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(780)
							::flixel::math::FlxRect _this = tmp13;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(780)
							::openfl::_legacy::geom::Rectangle tmp14 = this->_filledBarRect;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(780)
							::openfl::_legacy::geom::Rectangle FlashRect = tmp14;		HX_STACK_VAR(FlashRect,"FlashRect");
							HX_STACK_LINE(780)
							_this->x = FlashRect->x;
							HX_STACK_LINE(780)
							_this->y = FlashRect->y;
							HX_STACK_LINE(780)
							_this->width = FlashRect->width;
							HX_STACK_LINE(780)
							_this->height = FlashRect->height;
							HX_STACK_LINE(780)
							tmp12 = _this;
						}
						HX_STACK_LINE(780)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(780)
						Float tmp13 = _this->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(780)
						int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(780)
						_this->x = tmp14;
						HX_STACK_LINE(780)
						Float tmp15 = _this->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(780)
						int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(780)
						_this->y = tmp16;
						HX_STACK_LINE(780)
						Float tmp17 = _this->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(780)
						int tmp18 = ::Math_obj::round(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(780)
						_this->width = tmp18;
						HX_STACK_LINE(780)
						Float tmp19 = _this->height;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(780)
						int tmp20 = ::Math_obj::round(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(780)
						_this->height = tmp20;
						HX_STACK_LINE(780)
						_this;
					}
					HX_STACK_LINE(781)
					bool tmp12 = (prct > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(781)
					if ((tmp12)){
						HX_STACK_LINE(783)
						::flixel::graphics::frames::FlxImageFrame tmp13 = this->get_frontFrames();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(783)
						::flixel::graphics::frames::FlxFrame tmp14 = tmp13->get_frame();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(783)
						::flixel::math::FlxRect tmp15 = this->_filledFlxRect;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(783)
						::flixel::graphics::frames::FlxFrame tmp16 = this->_frontFrame;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(783)
						::flixel::graphics::frames::FlxFrame tmp17 = tmp14->clipTo(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(783)
						this->_frontFrame = tmp17;
					}
				}
			}
		}
		HX_STACK_LINE(789)
		bool tmp7 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(789)
		if ((tmp7)){
			HX_STACK_LINE(791)
			this->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,updateFilledBar,(void))

Void FlxBar_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","update",0xdbe594ee,"flixel.ui.FlxBar.update","flixel/ui/FlxBar.hx",796,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(797)
		Dynamic tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(797)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(797)
		if ((tmp1)){
			HX_STACK_LINE(799)
			Dynamic tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(799)
			::String tmp3 = this->parentVariable;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(799)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(799)
			Float tmp5 = this->get_value();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(799)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(799)
			if ((tmp6)){
				HX_STACK_LINE(801)
				this->updateValueFromParent();
			}
			HX_STACK_LINE(804)
			bool tmp7 = this->fixedPosition;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(804)
			bool tmp8 = (tmp7 == false);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(804)
			if ((tmp8)){
				HX_STACK_LINE(806)
				Dynamic tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(806)
				::flixel::math::FlxPoint tmp10 = this->positionOffset;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(806)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(806)
				Dynamic tmp12 = (tmp9->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ) + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(806)
				this->set_x(tmp12);
				HX_STACK_LINE(807)
				Dynamic tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(807)
				::flixel::math::FlxPoint tmp14 = this->positionOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(807)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(807)
				Dynamic tmp16 = (tmp13->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ) + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(807)
				this->set_y(tmp16);
			}
		}
		HX_STACK_LINE(811)
		Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(811)
		this->super::update(tmp2);
	}
return null();
}


Void FlxBar_obj::draw( ){
{
		HX_STACK_FRAME("flixel.ui.FlxBar","draw",0x9cd647a9,"flixel.ui.FlxBar.draw","flixel/ui/FlxBar.hx",815,0x9c56c8d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(816)
		this->super::draw();
		HX_STACK_LINE(818)
		bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(818)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(818)
		if ((tmp1)){
			HX_STACK_LINE(819)
			return null();
		}
		HX_STACK_LINE(821)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(821)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(821)
		if ((tmp3)){
			HX_STACK_LINE(822)
			return null();
		}
		HX_STACK_LINE(824)
		Float tmp4 = this->get_percent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(824)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(824)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(824)
		if ((tmp5)){
			HX_STACK_LINE(824)
			::flixel::graphics::frames::FlxFrame tmp7 = this->_frontFrame;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(824)
			::flixel::graphics::frames::FlxFrame tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(824)
			int tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(824)
			tmp6 = (tmp9 != (int)2);
		}
		else{
			HX_STACK_LINE(824)
			tmp6 = false;
		}
		HX_STACK_LINE(824)
		if ((tmp6)){
			HX_STACK_LINE(826)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(826)
			Array< ::Dynamic > _g1 = this->get_cameras();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(826)
			while((true)){
				HX_STACK_LINE(826)
				bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(826)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(826)
				if ((tmp8)){
					HX_STACK_LINE(826)
					break;
				}
				HX_STACK_LINE(826)
				::flixel::FlxCamera tmp9 = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(826)
				::flixel::FlxCamera camera = tmp9;		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(826)
				++(_g);
				HX_STACK_LINE(828)
				bool tmp10 = camera->visible;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(828)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(828)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(828)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(828)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(828)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(828)
				if ((tmp14)){
					HX_STACK_LINE(828)
					bool tmp16 = camera->exists;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(828)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(828)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(828)
					tmp15 = !(tmp18);
				}
				else{
					HX_STACK_LINE(828)
					tmp15 = true;
				}
				HX_STACK_LINE(828)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(828)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(828)
				if ((tmp16)){
					HX_STACK_LINE(828)
					::flixel::FlxCamera tmp18 = camera;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(828)
					::flixel::FlxCamera tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(828)
					bool tmp20 = this->isOnScreen(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(828)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(828)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(828)
					tmp17 = !(tmp22);
				}
				else{
					HX_STACK_LINE(828)
					tmp17 = true;
				}
				HX_STACK_LINE(828)
				if ((tmp17)){
					HX_STACK_LINE(830)
					continue;
				}
				HX_STACK_LINE(833)
				::flixel::math::FlxPoint tmp18 = this->_point;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(833)
				::flixel::FlxCamera tmp19 = camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(833)
				::flixel::math::FlxPoint tmp20 = this->getScreenPosition(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(833)
				::flixel::math::FlxPoint tmp21 = this->offset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(833)
				tmp20->subtractPoint(tmp21);
				HX_STACK_LINE(835)
				::flixel::graphics::frames::FlxFrame tmp22 = this->_frontFrame;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(835)
				::flixel::math::FlxMatrix tmp23 = this->_matrix;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(835)
				bool tmp24 = this->flipX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(835)
				bool tmp25 = this->flipY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(835)
				tmp22->prepareMatrix(tmp23,(int)0,tmp24,tmp25);
				HX_STACK_LINE(836)
				::flixel::math::FlxMatrix tmp26 = this->_matrix;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(836)
				::flixel::math::FlxPoint tmp27 = this->origin;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(836)
				Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(836)
				Float tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(836)
				::flixel::math::FlxPoint tmp30 = this->origin;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(836)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(836)
				Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(836)
				tmp26->translate(tmp29,tmp32);
				HX_STACK_LINE(837)
				::flixel::math::FlxMatrix tmp33 = this->_matrix;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(837)
				::flixel::math::FlxPoint tmp34 = this->scale;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(837)
				Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(837)
				::flixel::math::FlxPoint tmp36 = this->scale;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(837)
				Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(837)
				tmp33->scale(tmp35,tmp37);
				HX_STACK_LINE(840)
				Float tmp38 = this->angle;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(840)
				bool tmp39 = (tmp38 != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(840)
				if ((tmp39)){
					HX_STACK_LINE(842)
					::flixel::math::FlxMatrix tmp40 = this->_matrix;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(842)
					::flixel::math::FlxMatrix _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(842)
					Float tmp41 = this->_cosAngle;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(842)
					Float cos = tmp41;		HX_STACK_VAR(cos,"cos");
					HX_STACK_LINE(842)
					Float tmp42 = this->_sinAngle;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(842)
					Float sin = tmp42;		HX_STACK_VAR(sin,"sin");
					HX_STACK_LINE(842)
					Float tmp43 = (_this->a * cos);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(842)
					Float tmp44 = (_this->b * sin);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(842)
					Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(842)
					Float a1 = tmp45;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(842)
					Float tmp46 = (_this->a * sin);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(842)
					Float tmp47 = (_this->b * cos);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(842)
					Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(842)
					_this->b = tmp48;
					HX_STACK_LINE(842)
					_this->a = a1;
					HX_STACK_LINE(842)
					Float tmp49 = (_this->c * cos);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(842)
					Float tmp50 = (_this->d * sin);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(842)
					Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(842)
					Float c1 = tmp51;		HX_STACK_VAR(c1,"c1");
					HX_STACK_LINE(842)
					Float tmp52 = (_this->c * sin);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(842)
					Float tmp53 = (_this->d * cos);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(842)
					Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(842)
					_this->d = tmp54;
					HX_STACK_LINE(842)
					_this->c = c1;
					HX_STACK_LINE(842)
					Float tmp55 = (_this->tx * cos);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(842)
					Float tmp56 = (_this->ty * sin);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(842)
					Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(842)
					Float tx1 = tmp57;		HX_STACK_VAR(tx1,"tx1");
					HX_STACK_LINE(842)
					Float tmp58 = (_this->tx * sin);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(842)
					Float tmp59 = (_this->ty * cos);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(842)
					Float tmp60 = (tmp58 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(842)
					_this->ty = tmp60;
					HX_STACK_LINE(842)
					_this->tx = tx1;
					HX_STACK_LINE(842)
					_this;
				}
				HX_STACK_LINE(845)
				{
					HX_STACK_LINE(845)
					::flixel::math::FlxPoint tmp40 = this->_point;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(845)
					::flixel::math::FlxPoint _this = tmp40;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(845)
					{
						HX_STACK_LINE(845)
						::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(845)
						Float tmp41 = _g2->x;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(845)
						::flixel::math::FlxPoint tmp42 = this->origin;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(845)
						Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(845)
						Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(845)
						_g2->set_x(tmp44);
					}
					HX_STACK_LINE(845)
					{
						HX_STACK_LINE(845)
						::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(845)
						Float tmp41 = _g2->y;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(845)
						::flixel::math::FlxPoint tmp42 = this->origin;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(845)
						Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(845)
						Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(845)
						_g2->set_y(tmp44);
					}
					HX_STACK_LINE(845)
					_this;
				}
				HX_STACK_LINE(846)
				::flixel::FlxCamera tmp40 = camera;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(846)
				bool tmp41 = this->isPixelPerfectRender(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(846)
				if ((tmp41)){
					HX_STACK_LINE(848)
					::flixel::math::FlxPoint tmp42 = this->_point;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(848)
					::flixel::math::FlxPoint _this = tmp42;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(848)
					Float tmp43 = _this->x;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(848)
					int tmp44 = ::Math_obj::floor(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(848)
					_this->set_x(tmp44);
					HX_STACK_LINE(848)
					Float tmp45 = _this->y;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(848)
					int tmp46 = ::Math_obj::floor(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(848)
					_this->set_y(tmp46);
					HX_STACK_LINE(848)
					_this;
				}
				HX_STACK_LINE(851)
				::flixel::math::FlxMatrix tmp42 = this->_matrix;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(851)
				::flixel::math::FlxPoint tmp43 = this->_point;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(851)
				Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(851)
				::flixel::math::FlxPoint tmp45 = this->_point;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(851)
				Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(851)
				tmp42->translate(tmp44,tmp46);
				HX_STACK_LINE(852)
				::flixel::graphics::frames::FlxFrame tmp47 = this->_frontFrame;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(852)
				::flixel::math::FlxMatrix tmp48 = this->_matrix;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(852)
				::openfl::_legacy::geom::ColorTransform tmp49 = this->colorTransform;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(852)
				::openfl::_legacy::display::BlendMode tmp50 = this->blend;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(852)
				bool tmp51 = this->antialiasing;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(852)
				camera->drawPixels(tmp47,null(),tmp48,tmp49,tmp50,tmp51);
			}
		}
	}
return null();
}


::openfl::_legacy::display::BitmapData FlxBar_obj::set_pixels( ::openfl::_legacy::display::BitmapData Pixels){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_pixels",0x3c70e2cf,"flixel.ui.FlxBar.set_pixels","flixel/ui/FlxBar.hx",858,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Pixels,"Pixels")
	HX_STACK_LINE(859)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(859)
	if ((tmp)){
		HX_STACK_LINE(861)
		::openfl::_legacy::display::BitmapData tmp1 = Pixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		return tmp1;
	}
	else{
		HX_STACK_LINE(865)
		::openfl::_legacy::display::BitmapData tmp1 = Pixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(865)
		::openfl::_legacy::display::BitmapData tmp2 = this->super::set_pixels(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(865)
		return tmp2;
	}
	HX_STACK_LINE(859)
	return null();
}


::String FlxBar_obj::toString( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","toString",0x909c22d1,"flixel.ui.FlxBar.toString","flixel/ui/FlxBar.hx",870,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(872)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(872)
	{
		HX_STACK_LINE(872)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp1 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(872)
		::flixel::util::LabelValuePair tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(872)
		::flixel::util::LabelValuePair _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(872)
		_this->label = HX_HCSTRING("min","\x92","\x11","\x53","\x00");
		HX_STACK_LINE(872)
		Float tmp3 = this->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(872)
		_this->value = tmp3;
		HX_STACK_LINE(872)
		tmp = _this;
	}
	HX_STACK_LINE(873)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(873)
	{
		HX_STACK_LINE(873)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(873)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(873)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(873)
		_this->label = HX_HCSTRING("max","\xa4","\x0a","\x53","\x00");
		HX_STACK_LINE(873)
		Float tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(873)
		_this->value = tmp4;
		HX_STACK_LINE(873)
		tmp1 = _this;
	}
	HX_STACK_LINE(874)
	::flixel::util::LabelValuePair tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(874)
	{
		HX_STACK_LINE(874)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp3 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(874)
		::flixel::util::LabelValuePair tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(874)
		::flixel::util::LabelValuePair _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(874)
		_this->label = HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4");
		HX_STACK_LINE(874)
		Float tmp5 = this->range;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(874)
		_this->value = tmp5;
		HX_STACK_LINE(874)
		tmp2 = _this;
	}
	HX_STACK_LINE(875)
	::flixel::util::LabelValuePair tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(875)
	{
		HX_STACK_LINE(875)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp4 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(875)
		::flixel::util::LabelValuePair tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(875)
		::flixel::util::LabelValuePair _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(875)
		_this->label = HX_HCSTRING("%","\x25","\x00","\x00","\x00");
		HX_STACK_LINE(875)
		Float tmp6 = this->pct;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(875)
		_this->value = tmp6;
		HX_STACK_LINE(875)
		tmp3 = _this;
	}
	HX_STACK_LINE(876)
	::flixel::util::LabelValuePair tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(876)
	{
		HX_STACK_LINE(876)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp5 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(876)
		::flixel::util::LabelValuePair tmp6 = tmp5->get();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(876)
		::flixel::util::LabelValuePair _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(876)
		_this->label = HX_HCSTRING("px/%","\x1e","\x1d","\x63","\x4a");
		HX_STACK_LINE(876)
		Float tmp7 = this->pxPerPercent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(876)
		_this->value = tmp7;
		HX_STACK_LINE(876)
		tmp4 = _this;
	}
	HX_STACK_LINE(877)
	::flixel::util::LabelValuePair tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(877)
	{
		HX_STACK_LINE(877)
		Float tmp6 = this->get_value();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(877)
		Dynamic value = tmp6;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(877)
		{
			HX_STACK_LINE(877)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp7 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(877)
			::flixel::util::LabelValuePair tmp8 = tmp7->get();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(877)
			::flixel::util::LabelValuePair _this = tmp8;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(877)
			_this->label = HX_HCSTRING("value","\x71","\x7f","\xb8","\x31");
			HX_STACK_LINE(877)
			_this->value = value;
			HX_STACK_LINE(877)
			tmp5 = _this;
		}
	}
	HX_STACK_LINE(871)
	::String tmp6 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3).Add(tmp4).Add(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(871)
	return tmp6;
}


Float FlxBar_obj::get_percent( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_percent",0x8cbbddd7,"flixel.ui.FlxBar.get_percent","flixel/ui/FlxBar.hx",881,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(889)
	Float tmp = this->get_value();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(889)
	Float tmp1 = this->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(889)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(889)
	if ((tmp2)){
		HX_STACK_LINE(891)
		return (int)100;
	}
	HX_STACK_LINE(894)
	Float tmp3 = this->get_value();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(894)
	Float tmp4 = this->range;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(894)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(894)
	Float tmp6 = (tmp5 * (int)100);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(894)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(894)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_percent,return )

Float FlxBar_obj::set_percent( Float newPct){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_percent",0x9728e4e3,"flixel.ui.FlxBar.set_percent","flixel/ui/FlxBar.hx",898,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newPct,"newPct")
	HX_STACK_LINE(899)
	bool tmp = (newPct >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(899)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(899)
	if ((tmp)){
		HX_STACK_LINE(899)
		tmp1 = (newPct <= (int)100);
	}
	else{
		HX_STACK_LINE(899)
		tmp1 = false;
	}
	HX_STACK_LINE(899)
	if ((tmp1)){
		HX_STACK_LINE(901)
		Float tmp2 = this->pct;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(901)
		Float tmp3 = newPct;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(901)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(901)
		this->set_value(tmp4);
	}
	HX_STACK_LINE(903)
	Float tmp2 = newPct;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(903)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_percent,return )

Float FlxBar_obj::set_value( Float newValue){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_value",0x282d560f,"flixel.ui.FlxBar.set_value","flixel/ui/FlxBar.hx",907,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(908)
	Float tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(908)
	Float tmp1 = newValue;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	Float tmp2 = this->max;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(908)
	Float tmp3 = ::Math_obj::min(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(908)
	Float tmp4 = ::Math_obj::max(tmp,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(908)
	this->value = tmp4;
	HX_STACK_LINE(910)
	Float tmp5 = this->get_value();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(910)
	Float tmp6 = this->min;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(910)
	bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(910)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(910)
	if ((tmp7)){
		HX_STACK_LINE(910)
		Dynamic tmp9 = this->emptyCallback_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(910)
		Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(910)
		tmp8 = (tmp10 != null());
	}
	else{
		HX_STACK_LINE(910)
		tmp8 = false;
	}
	HX_STACK_LINE(910)
	if ((tmp8)){
		HX_STACK_LINE(912)
		this->emptyCallback();
	}
	HX_STACK_LINE(915)
	Float tmp9 = this->get_value();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(915)
	Float tmp10 = this->max;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(915)
	bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(915)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(915)
	if ((tmp11)){
		HX_STACK_LINE(915)
		Dynamic tmp13 = this->filledCallback_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(915)
		Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(915)
		tmp12 = (tmp14 != null());
	}
	else{
		HX_STACK_LINE(915)
		tmp12 = false;
	}
	HX_STACK_LINE(915)
	if ((tmp12)){
		HX_STACK_LINE(917)
		this->filledCallback();
	}
	HX_STACK_LINE(920)
	Float tmp13 = this->get_value();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(920)
	Float tmp14 = this->min;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(920)
	bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(920)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(920)
	if ((tmp15)){
		HX_STACK_LINE(920)
		tmp16 = this->killOnEmpty;
	}
	else{
		HX_STACK_LINE(920)
		tmp16 = false;
	}
	HX_STACK_LINE(920)
	if ((tmp16)){
		HX_STACK_LINE(922)
		this->kill();
	}
	HX_STACK_LINE(925)
	this->updateBar();
	HX_STACK_LINE(926)
	Float tmp17 = newValue;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(926)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_value,return )

Float FlxBar_obj::get_value( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_value",0x44dc6a03,"flixel.ui.FlxBar.get_value","flixel/ui/FlxBar.hx",930,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(931)
	Float tmp = this->value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(931)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_value,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::get_frontFrames( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_frontFrames",0xa222c541,"flixel.ui.FlxBar.get_frontFrames","flixel/ui/FlxBar.hx",935,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(936)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(936)
	if ((tmp)){
		HX_STACK_LINE(938)
		::flixel::graphics::frames::FlxImageFrame tmp1 = this->frontFrames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(938)
		return tmp1;
	}
	HX_STACK_LINE(940)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_frontFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::set_frontFrames( ::flixel::graphics::frames::FlxImageFrame value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_frontFrames",0x9dee424d,"flixel.ui.FlxBar.set_frontFrames","flixel/ui/FlxBar.hx",944,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(945)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(945)
	if ((tmp)){
		HX_STACK_LINE(947)
		this->frontFrames = value;
		HX_STACK_LINE(948)
		bool tmp1 = (value != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(948)
		::flixel::graphics::frames::FlxFrame tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(948)
		if ((tmp1)){
			HX_STACK_LINE(948)
			::flixel::graphics::frames::FlxFrame tmp3 = value->get_frame();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(948)
			::flixel::graphics::frames::FlxFrame tmp4 = this->_frontFrame;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(948)
			tmp2 = tmp3->copyTo(tmp4);
		}
		else{
			HX_STACK_LINE(948)
			tmp2 = null();
		}
		HX_STACK_LINE(948)
		this->_frontFrame = tmp2;
	}
	else{
		HX_STACK_LINE(952)
		::flixel::graphics::frames::FlxFrame tmp1 = value->get_frame();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(952)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(952)
		this->createImageFilledBar(tmp2,null());
	}
	HX_STACK_LINE(955)
	::flixel::graphics::frames::FlxImageFrame tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(955)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_frontFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::get_backFrames( ){
	HX_STACK_FRAME("flixel.ui.FlxBar","get_backFrames",0x7b96195b,"flixel.ui.FlxBar.get_backFrames","flixel/ui/FlxBar.hx",959,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(960)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(960)
	if ((tmp)){
		HX_STACK_LINE(962)
		::flixel::graphics::frames::FlxFramesCollection tmp1 = this->frames;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(962)
		::flixel::graphics::frames::FlxImageFrame tmp2 = ((::flixel::graphics::frames::FlxImageFrame)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(962)
		return tmp2;
	}
	HX_STACK_LINE(964)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBar_obj,get_backFrames,return )

::flixel::graphics::frames::FlxImageFrame FlxBar_obj::set_backFrames( ::flixel::graphics::frames::FlxImageFrame value){
	HX_STACK_FRAME("flixel.ui.FlxBar","set_backFrames",0x9bb601cf,"flixel.ui.FlxBar.set_backFrames","flixel/ui/FlxBar.hx",968,0x9c56c8d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(969)
	bool tmp = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(969)
	if ((tmp)){
		HX_STACK_LINE(971)
		::flixel::graphics::frames::FlxImageFrame tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(971)
		this->set_frames(tmp1);
	}
	else{
		HX_STACK_LINE(975)
		::flixel::graphics::frames::FlxFrame tmp1 = value->get_frame();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(975)
		::openfl::_legacy::display::BitmapData tmp2 = tmp1->paint(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(975)
		this->createImageEmptyBar(tmp2,null());
	}
	HX_STACK_LINE(977)
	::flixel::graphics::frames::FlxImageFrame tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(977)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBar_obj,set_backFrames,return )


FlxBar_obj::FlxBar_obj()
{
}

void FlxBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBar);
	HX_MARK_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_MARK_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_MARK_MEMBER_NAME(positionOffset,"positionOffset");
	HX_MARK_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(pct,"pct");
	HX_MARK_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_MARK_MEMBER_NAME(filledCallback,"filledCallback");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(parentVariable,"parentVariable");
	HX_MARK_MEMBER_NAME(barWidth,"barWidth");
	HX_MARK_MEMBER_NAME(barHeight,"barHeight");
	HX_MARK_MEMBER_NAME(frontFrames,"frontFrames");
	HX_MARK_MEMBER_NAME(fillDirection,"fillDirection");
	HX_MARK_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_MARK_MEMBER_NAME(_frontFrame,"_frontFrame");
	HX_MARK_MEMBER_NAME(_filledFlxRect,"_filledFlxRect");
	HX_MARK_MEMBER_NAME(_emptyBar,"_emptyBar");
	HX_MARK_MEMBER_NAME(_emptyBarRect,"_emptyBarRect");
	HX_MARK_MEMBER_NAME(_filledBar,"_filledBar");
	HX_MARK_MEMBER_NAME(_zeroOffset,"_zeroOffset");
	HX_MARK_MEMBER_NAME(_filledBarRect,"_filledBarRect");
	HX_MARK_MEMBER_NAME(_filledBarPoint,"_filledBarPoint");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixedPosition,"fixedPosition");
	HX_VISIT_MEMBER_NAME(pxPerPercent,"pxPerPercent");
	HX_VISIT_MEMBER_NAME(positionOffset,"positionOffset");
	HX_VISIT_MEMBER_NAME(killOnEmpty,"killOnEmpty");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(pct,"pct");
	HX_VISIT_MEMBER_NAME(emptyCallback,"emptyCallback");
	HX_VISIT_MEMBER_NAME(filledCallback,"filledCallback");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(parentVariable,"parentVariable");
	HX_VISIT_MEMBER_NAME(barWidth,"barWidth");
	HX_VISIT_MEMBER_NAME(barHeight,"barHeight");
	HX_VISIT_MEMBER_NAME(frontFrames,"frontFrames");
	HX_VISIT_MEMBER_NAME(fillDirection,"fillDirection");
	HX_VISIT_MEMBER_NAME(_fillHorizontal,"_fillHorizontal");
	HX_VISIT_MEMBER_NAME(_frontFrame,"_frontFrame");
	HX_VISIT_MEMBER_NAME(_filledFlxRect,"_filledFlxRect");
	HX_VISIT_MEMBER_NAME(_emptyBar,"_emptyBar");
	HX_VISIT_MEMBER_NAME(_emptyBarRect,"_emptyBarRect");
	HX_VISIT_MEMBER_NAME(_filledBar,"_filledBar");
	HX_VISIT_MEMBER_NAME(_zeroOffset,"_zeroOffset");
	HX_VISIT_MEMBER_NAME(_filledBarRect,"_filledBarRect");
	HX_VISIT_MEMBER_NAME(_filledBarPoint,"_filledBarPoint");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"pct") ) { return pct; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return inCallProp == hx::paccAlways ? get_value() : value; }
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return get_percent(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { return barWidth; }
		if (HX_FIELD_EQ(inName,"setRange") ) { return setRange_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { return barHeight; }
		if (HX_FIELD_EQ(inName,"_emptyBar") ) { return _emptyBar; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBar") ) { return updateBar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backFrames") ) { if (inCallProp == hx::paccAlways) return get_backFrames(); }
		if (HX_FIELD_EQ(inName,"_filledBar") ) { return _filledBar; }
		if (HX_FIELD_EQ(inName,"set_pixels") ) { return set_pixels_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { return killOnEmpty; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { return inCallProp == hx::paccAlways ? get_frontFrames() : frontFrames; }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { return _frontFrame; }
		if (HX_FIELD_EQ(inName,"_zeroOffset") ) { return _zeroOffset; }
		if (HX_FIELD_EQ(inName,"trackParent") ) { return trackParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { return pxPerPercent; }
		if (HX_FIELD_EQ(inName,"setCallbacks") ) { return setCallbacks_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { return fixedPosition; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { return emptyCallback; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { return fillDirection; }
		if (HX_FIELD_EQ(inName,"_emptyBarRect") ) { return _emptyBarRect; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { return positionOffset; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { return filledCallback; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { return parentVariable; }
		if (HX_FIELD_EQ(inName,"_filledFlxRect") ) { return _filledFlxRect; }
		if (HX_FIELD_EQ(inName,"_filledBarRect") ) { return _filledBarRect; }
		if (HX_FIELD_EQ(inName,"createImageBar") ) { return createImageBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEmptyBar") ) { return updateEmptyBar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backFrames") ) { return get_backFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backFrames") ) { return set_backFrames_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { return _fillHorizontal; }
		if (HX_FIELD_EQ(inName,"_filledBarPoint") ) { return _filledBarPoint; }
		if (HX_FIELD_EQ(inName,"createFilledBar") ) { return createFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFilledBar") ) { return updateFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frontFrames") ) { return get_frontFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frontFrames") ) { return set_frontFrames_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBar") ) { return createGradientBar_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fillDirection") ) { return set_fillDirection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stopTrackingParent") ) { return stopTrackingParent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createImageEmptyBar") ) { return createImageEmptyBar_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createImageFilledBar") ) { return createImageFilledBar_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createColoredEmptyBar") ) { return createColoredEmptyBar_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValueFromParent") ) { return updateValueFromParent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createColoredFilledBar") ) { return createColoredFilledBar_dyn(); }
		if (HX_FIELD_EQ(inName,"createGradientEmptyBar") ) { return createGradientEmptyBar_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"createGradientFilledBar") ) { return createGradientFilledBar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pct") ) { pct=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp == hx::paccAlways) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return set_percent(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"barWidth") ) { barWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"barHeight") ) { barHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_emptyBar") ) { _emptyBar=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backFrames") ) { if (inCallProp == hx::paccAlways) return set_backFrames(inValue); }
		if (HX_FIELD_EQ(inName,"_filledBar") ) { _filledBar=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"killOnEmpty") ) { killOnEmpty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontFrames") ) { if (inCallProp == hx::paccAlways) return set_frontFrames(inValue);frontFrames=inValue.Cast< ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frontFrame") ) { _frontFrame=inValue.Cast< ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zeroOffset") ) { _zeroOffset=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pxPerPercent") ) { pxPerPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedPosition") ) { fixedPosition=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyCallback") ) { emptyCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillDirection") ) { if (inCallProp == hx::paccAlways) return set_fillDirection(inValue);fillDirection=inValue.Cast< ::flixel::ui::FlxBarFillDirection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_emptyBarRect") ) { _emptyBarRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"positionOffset") ) { positionOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filledCallback") ) { filledCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentVariable") ) { parentVariable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledFlxRect") ) { _filledFlxRect=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarRect") ) { _filledBarRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fillHorizontal") ) { _fillHorizontal=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filledBarPoint") ) { _filledBarPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12"));
	outFields->push(HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b"));
	outFields->push(HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"));
	outFields->push(HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"));
	outFields->push(HX_HCSTRING("pct","\x21","\x53","\x55","\x00"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30"));
	outFields->push(HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99"));
	outFields->push(HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27"));
	outFields->push(HX_HCSTRING("frontFrames","\x2f","\xa1","\xf5","\xbc"));
	outFields->push(HX_HCSTRING("backFrames","\x2d","\x95","\x0f","\xeb"));
	outFields->push(HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1"));
	outFields->push(HX_HCSTRING("_fillHorizontal","\xe6","\x79","\x6f","\x9d"));
	outFields->push(HX_HCSTRING("_frontFrame","\xe3","\x97","\xe5","\x05"));
	outFields->push(HX_HCSTRING("_filledFlxRect","\x75","\x41","\xba","\xea"));
	outFields->push(HX_HCSTRING("_emptyBar","\xa5","\x7c","\xc1","\x6f"));
	outFields->push(HX_HCSTRING("_emptyBarRect","\x69","\xac","\xcd","\xcb"));
	outFields->push(HX_HCSTRING("_filledBar","\x12","\x89","\xe0","\x00"));
	outFields->push(HX_HCSTRING("_zeroOffset","\xfa","\xb5","\x5e","\xc4"));
	outFields->push(HX_HCSTRING("_filledBarRect","\x56","\xf3","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("_filledBarPoint","\xde","\x79","\xb8","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxBar_obj,fixedPosition),HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pxPerPercent),HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxBar_obj,positionOffset),HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,killOnEmpty),HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,range),HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4")},
	{hx::fsFloat,(int)offsetof(FlxBar_obj,pct),HX_HCSTRING("pct","\x21","\x53","\x55","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,emptyCallback),HX_HCSTRING("emptyCallback","\x72","\x65","\x53","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,filledCallback),HX_HCSTRING("filledCallback","\x87","\xd5","\x00","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBar_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(FlxBar_obj,parentVariable),HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barWidth),HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99")},
	{hx::fsInt,(int)offsetof(FlxBar_obj,barHeight),HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27")},
	{hx::fsObject /*::flixel::graphics::frames::FlxImageFrame*/ ,(int)offsetof(FlxBar_obj,frontFrames),HX_HCSTRING("frontFrames","\x2f","\xa1","\xf5","\xbc")},
	{hx::fsObject /*::flixel::ui::FlxBarFillDirection*/ ,(int)offsetof(FlxBar_obj,fillDirection),HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1")},
	{hx::fsBool,(int)offsetof(FlxBar_obj,_fillHorizontal),HX_HCSTRING("_fillHorizontal","\xe6","\x79","\x6f","\x9d")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(FlxBar_obj,_frontFrame),HX_HCSTRING("_frontFrame","\xe3","\x97","\xe5","\x05")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxBar_obj,_filledFlxRect),HX_HCSTRING("_filledFlxRect","\x75","\x41","\xba","\xea")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,_emptyBar),HX_HCSTRING("_emptyBar","\xa5","\x7c","\xc1","\x6f")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,_emptyBarRect),HX_HCSTRING("_emptyBarRect","\x69","\xac","\xcd","\xcb")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxBar_obj,_filledBar),HX_HCSTRING("_filledBar","\x12","\x89","\xe0","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,_zeroOffset),HX_HCSTRING("_zeroOffset","\xfa","\xb5","\x5e","\xc4")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxBar_obj,_filledBarRect),HX_HCSTRING("_filledBarRect","\x56","\xf3","\x0f","\x6a")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxBar_obj,_filledBarPoint),HX_HCSTRING("_filledBarPoint","\xde","\x79","\xb8","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fixedPosition","\x3d","\xea","\xd2","\x12"),
	HX_HCSTRING("pxPerPercent","\x90","\xc3","\x28","\x3b"),
	HX_HCSTRING("positionOffset","\x1c","\x11","\x32","\xb5"),
	HX_HCSTRING("killOnEmpty","\xf0","\x70","\x0b","\xae"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("range","\xbd","\xa5","\x1f","\xe4"),
	HX_HCSTRING("pct","\x21","\x53","\x55","\x00"),
	HX_HCSTRING("emptyCallback","\x72","\x65","\x53","\x13"),
	HX_HCSTRING("filledCallback","\x87","\xd5","\x00","\xe4"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("parentVariable","\x86","\x0d","\xe5","\x30"),
	HX_HCSTRING("barWidth","\x33","\xf7","\x30","\x99"),
	HX_HCSTRING("barHeight","\x1a","\xce","\xf6","\x27"),
	HX_HCSTRING("frontFrames","\x2f","\xa1","\xf5","\xbc"),
	HX_HCSTRING("fillDirection","\x3c","\x0b","\x89","\xf1"),
	HX_HCSTRING("_fillHorizontal","\xe6","\x79","\x6f","\x9d"),
	HX_HCSTRING("_frontFrame","\xe3","\x97","\xe5","\x05"),
	HX_HCSTRING("_filledFlxRect","\x75","\x41","\xba","\xea"),
	HX_HCSTRING("_emptyBar","\xa5","\x7c","\xc1","\x6f"),
	HX_HCSTRING("_emptyBarRect","\x69","\xac","\xcd","\xcb"),
	HX_HCSTRING("_filledBar","\x12","\x89","\xe0","\x00"),
	HX_HCSTRING("_zeroOffset","\xfa","\xb5","\x5e","\xc4"),
	HX_HCSTRING("_filledBarRect","\x56","\xf3","\x0f","\x6a"),
	HX_HCSTRING("_filledBarPoint","\xde","\x79","\xb8","\x43"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("trackParent","\x15","\x02","\x78","\x95"),
	HX_HCSTRING("setParent","\x6c","\x7a","\x25","\x4d"),
	HX_HCSTRING("stopTrackingParent","\x63","\xe7","\x80","\x2a"),
	HX_HCSTRING("setCallbacks","\x0c","\xb3","\x0f","\xcb"),
	HX_HCSTRING("setRange","\xbb","\x0e","\x54","\xf2"),
	HX_HCSTRING("createFilledBar","\xb5","\xc6","\x32","\x46"),
	HX_HCSTRING("createColoredEmptyBar","\x4c","\x98","\x6a","\xaf"),
	HX_HCSTRING("createColoredFilledBar","\x8b","\x9f","\x2f","\x75"),
	HX_HCSTRING("createGradientBar","\x27","\xe0","\xc0","\x25"),
	HX_HCSTRING("createGradientEmptyBar","\x72","\xe6","\x88","\x77"),
	HX_HCSTRING("createGradientFilledBar","\xa5","\xb2","\x95","\xc7"),
	HX_HCSTRING("createImageBar","\x54","\x94","\x67","\xd6"),
	HX_HCSTRING("createImageEmptyBar","\x25","\xef","\x24","\xe8"),
	HX_HCSTRING("createImageFilledBar","\x92","\x46","\x81","\xdf"),
	HX_HCSTRING("set_fillDirection","\x9f","\xee","\x66","\x1b"),
	HX_HCSTRING("updateValueFromParent","\xfc","\x58","\xec","\xa5"),
	HX_HCSTRING("updateBar","\x4a","\x8f","\xd7","\x82"),
	HX_HCSTRING("updateEmptyBar","\x6f","\x78","\x55","\x5d"),
	HX_HCSTRING("updateFilledBar","\x08","\xde","\xc8","\xf4"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("set_pixels","\x6a","\xfd","\xae","\x80"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_percent","\xdc","\x0a","\xd5","\xfe"),
	HX_HCSTRING("set_percent","\xe8","\x11","\x42","\x09"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("get_frontFrames","\xc6","\x58","\xd7","\x7d"),
	HX_HCSTRING("set_frontFrames","\xd2","\xd5","\xa2","\x79"),
	HX_HCSTRING("get_backFrames","\x76","\x1d","\x05","\x61"),
	HX_HCSTRING("set_backFrames","\xea","\x05","\x25","\x81"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBar_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxBar_obj::__mClass;

void FlxBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.ui.FlxBar","\xe9","\xe6","\x0d","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxBar_obj >;
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
} // end namespace ui
