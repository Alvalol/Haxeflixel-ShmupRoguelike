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
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTilesItem
#include <flixel/graphics/tile/FlxDrawTilesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
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
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
namespace flixel{

Void FlxCamera_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{
HX_STACK_FRAME("flixel.FlxCamera","new",0x0e8a9f77,"flixel.FlxCamera.new","flixel/FlxCamera.hx",35,0xe7aeb95a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_Zoom,"Zoom")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float Zoom = __o_Zoom.Default(0);
{
	HX_STACK_LINE(332)
	this->_helperMatrix = ::flixel::math::FlxMatrix_obj::__new(null(),null(),null(),null(),null(),null());
	struct _Function_1_1{
		inline static ::flixel::math::FlxRect Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",314,0xe7aeb95a)
			{
				HX_STACK_LINE(314)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(314)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(314)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(314)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(314)
				::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(314)
				{
					HX_STACK_LINE(314)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(314)
					::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(314)
					::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(314)
					_this->x = X;
					HX_STACK_LINE(314)
					_this->y = Y;
					HX_STACK_LINE(314)
					_this->width = Width;
					HX_STACK_LINE(314)
					_this->height = Height;
					HX_STACK_LINE(314)
					tmp = _this;
				}
				HX_STACK_LINE(314)
				::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(314)
				rect->_inPool = false;
				HX_STACK_LINE(314)
				return rect;
			}
			return null();
		}
	};
	HX_STACK_LINE(314)
	this->_bounds = _Function_1_1::Block();
	HX_STACK_LINE(309)
	this->_scrollRect = ::openfl::_legacy::display::Sprite_obj::__new();
	HX_STACK_LINE(295)
	this->initialZoom = ((Float)1);
	struct _Function_1_2{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",286,0xe7aeb95a)
			{
				HX_STACK_LINE(286)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(286)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(286)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(286)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(286)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(286)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(286)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(286)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(286)
				point->_inPool = false;
				HX_STACK_LINE(286)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(286)
	this->_point = _Function_1_2::Block();
	HX_STACK_LINE(282)
	this->_fxShakeAxes = ::flixel::util::FlxAxes_obj::XY;
	struct _Function_1_3{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",278,0xe7aeb95a)
			{
				HX_STACK_LINE(278)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(278)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(278)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(278)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(278)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(278)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(278)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(278)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(278)
				point->_inPool = false;
				HX_STACK_LINE(278)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(278)
	this->_fxShakeOffset = _Function_1_3::Block();
	HX_STACK_LINE(270)
	this->_fxShakeDuration = ((Float)0);
	HX_STACK_LINE(266)
	this->_fxShakeIntensity = ((Float)0);
	HX_STACK_LINE(262)
	this->_fxFadeAlpha = ((Float)0);
	HX_STACK_LINE(258)
	this->_fxFadeCompleted = true;
	HX_STACK_LINE(257)
	this->_fxFadeComplete = null();
	HX_STACK_LINE(253)
	this->_fxFadeIn = false;
	HX_STACK_LINE(249)
	this->_fxFadeDuration = ((Float)0);
	struct _Function_1_4{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",245,0xe7aeb95a)
			{
				HX_STACK_LINE(245)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(245)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(245)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(245)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(245)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(245)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(245)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(245)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(245)
				point->_inPool = false;
				HX_STACK_LINE(245)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(245)
	this->_scrollTarget = _Function_1_4::Block();
	HX_STACK_LINE(237)
	this->_fxFadeColor = (int)0;
	HX_STACK_LINE(233)
	this->_fxFlashAlpha = ((Float)0);
	HX_STACK_LINE(229)
	this->_fxFlashComplete = null();
	HX_STACK_LINE(225)
	this->_fxFlashDuration = ((Float)0);
	HX_STACK_LINE(221)
	this->_fxFlashColor = (int)0;
	struct _Function_1_5{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",217,0xe7aeb95a)
			{
				HX_STACK_LINE(217)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(217)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(217)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(217)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(217)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(217)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(217)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(217)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(217)
				point->_inPool = false;
				HX_STACK_LINE(217)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(217)
	this->_flashOffset = _Function_1_5::Block();
	HX_STACK_LINE(213)
	this->_flashPoint = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(204)
	this->filtersEnabled = true;
	struct _Function_1_6{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",200,0xe7aeb95a)
			{
				HX_STACK_LINE(200)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(200)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(200)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(200)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(200)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(200)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(200)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(200)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(200)
				point->_inPool = false;
				HX_STACK_LINE(200)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(200)
	this->followLead = _Function_1_6::Block();
	HX_STACK_LINE(196)
	this->antialiasing = false;
	HX_STACK_LINE(191)
	this->color = (int)-1;
	HX_STACK_LINE(186)
	this->angle = ((Float)0);
	HX_STACK_LINE(181)
	this->alpha = ((Float)1);
	HX_STACK_LINE(172)
	this->height = (int)0;
	HX_STACK_LINE(168)
	this->width = (int)0;
	HX_STACK_LINE(155)
	this->flashSprite = ::openfl::_legacy::display::Sprite_obj::__new();
	HX_STACK_LINE(149)
	this->useBgAlphaBlending = false;
	HX_STACK_LINE(131)
	this->regen = false;
	struct _Function_1_7{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",122,0xe7aeb95a)
			{
				HX_STACK_LINE(122)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(122)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(122)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(122)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(122)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(122)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(122)
				point->_inPool = false;
				HX_STACK_LINE(122)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(122)
	this->scroll = _Function_1_7::Block();
	struct _Function_1_8{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",95,0xe7aeb95a)
			{
				HX_STACK_LINE(95)
				int tmp = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(95)
				return (Float((int)60) / Float(tmp));
			}
			return null();
		}
	};
	HX_STACK_LINE(95)
	this->followLerp = _Function_1_8::Block();
	struct _Function_1_9{
		inline static ::flixel::math::FlxPoint Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",89,0xe7aeb95a)
			{
				HX_STACK_LINE(89)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(89)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(89)
				::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(89)
				::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(89)
				Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(89)
				Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(89)
				::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(89)
				::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(89)
				point->_inPool = false;
				HX_STACK_LINE(89)
				return point;
			}
			return null();
		}
	};
	HX_STACK_LINE(89)
	this->targetOffset = _Function_1_9::Block();
	HX_STACK_LINE(57)
	this->y = ((Float)0);
	HX_STACK_LINE(52)
	this->x = ((Float)0);
	HX_STACK_LINE(667)
	super::__construct();
	HX_STACK_LINE(669)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	this->set_x(tmp);
	HX_STACK_LINE(670)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(670)
	this->set_y(tmp1);
	HX_STACK_LINE(673)
	bool tmp2 = (Width <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(673)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(673)
	if ((tmp2)){
		HX_STACK_LINE(673)
		tmp3 = ::flixel::FlxG_obj::width;
	}
	else{
		HX_STACK_LINE(673)
		tmp3 = Width;
	}
	HX_STACK_LINE(673)
	this->set_width(tmp3);
	HX_STACK_LINE(674)
	bool tmp4 = (Height <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(674)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(674)
	if ((tmp4)){
		HX_STACK_LINE(674)
		tmp5 = ::flixel::FlxG_obj::height;
	}
	else{
		HX_STACK_LINE(674)
		tmp5 = Height;
	}
	HX_STACK_LINE(674)
	this->set_height(tmp5);
	HX_STACK_LINE(675)
	int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(675)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(675)
	::openfl::_legacy::geom::Rectangle tmp8 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(675)
	this->_flashRect = tmp8;
	HX_STACK_LINE(677)
	::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(677)
	::openfl::_legacy::display::Sprite tmp10 = this->_scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(677)
	tmp9->addChild(tmp10);
	HX_STACK_LINE(678)
	::openfl::_legacy::display::Sprite tmp11 = this->_scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(678)
	::openfl::_legacy::geom::Rectangle tmp12 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(678)
	tmp11->set_scrollRect(tmp12);
	HX_STACK_LINE(680)
	bool tmp13 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(680)
	this->pixelPerfectRender = tmp13;
	HX_STACK_LINE(682)
	bool tmp14 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(682)
	if ((tmp14)){
		HX_STACK_LINE(684)
		::flixel::FlxSprite tmp15 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(684)
		this->screen = tmp15;
		HX_STACK_LINE(685)
		int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(685)
		int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(685)
		::openfl::_legacy::display::BitmapData tmp18 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp16,tmp17,true,(int)0,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(685)
		this->buffer = tmp18;
		HX_STACK_LINE(686)
		::flixel::FlxSprite tmp19 = this->screen;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(686)
		::openfl::_legacy::display::BitmapData tmp20 = this->buffer;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(686)
		tmp19->set_pixels(tmp20);
		HX_STACK_LINE(687)
		::flixel::FlxSprite tmp21 = this->screen;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(687)
		tmp21->origin->set(null(),null());
		HX_STACK_LINE(688)
		::openfl::_legacy::display::BitmapData tmp22 = this->buffer;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(688)
		::openfl::_legacy::display::Bitmap tmp23 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp22,null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(688)
		this->_flashBitmap = tmp23;
		HX_STACK_LINE(689)
		::openfl::_legacy::display::Sprite tmp24 = this->_scrollRect;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(689)
		::openfl::_legacy::display::Bitmap tmp25 = this->_flashBitmap;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(689)
		tmp24->addChild(tmp25);
		HX_STACK_LINE(690)
		int tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(690)
		int tmp27 = this->height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(690)
		::openfl::_legacy::display::BitmapData tmp28 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp26,tmp27,true,(int)0,null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(690)
		this->_fill = tmp28;
	}
	else{
		HX_STACK_LINE(694)
		::openfl::_legacy::display::Sprite tmp15 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(694)
		this->canvas = tmp15;
		HX_STACK_LINE(695)
		::openfl::_legacy::display::Sprite tmp16 = this->_scrollRect;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(695)
		::openfl::_legacy::display::Sprite tmp17 = this->canvas;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(695)
		tmp16->addChild(tmp17);
		HX_STACK_LINE(696)
		::openfl::_legacy::geom::Matrix tmp18 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(696)
		this->_transform = tmp18;
	}
	HX_STACK_LINE(704)
	this->set_color((int)-1);
	HX_STACK_LINE(706)
	Float tmp15 = Zoom;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(706)
	this->set_zoom(tmp15);
	HX_STACK_LINE(707)
	Float tmp16 = this->zoom;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(707)
	this->initialZoom = tmp16;
	HX_STACK_LINE(709)
	this->updateScrollRect();
	HX_STACK_LINE(710)
	this->updateFlashOffset();
	HX_STACK_LINE(711)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(712)
	this->updateInternalSpritePositions();
	HX_STACK_LINE(714)
	::flixel::_system::frontEnds::CameraFrontEnd tmp17 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(714)
	int tmp18 = tmp17->__Field(HX_HCSTRING("get_bgColor","\x75","\xe1","\x7d","\x7d"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(714)
	this->bgColor = tmp18;
}
;
	return null();
}

//FlxCamera_obj::~FlxCamera_obj() { }

Dynamic FlxCamera_obj::__CreateEmpty() { return  new FlxCamera_obj; }
hx::ObjectPtr< FlxCamera_obj > FlxCamera_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_Zoom);
	return _result_;}

Dynamic FlxCamera_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxCamera_obj > _result_ = new FlxCamera_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::flixel::graphics::tile::FlxDrawTilesItem FlxCamera_obj::startQuadBatch( ::flixel::graphics::FlxGraphic graphic,bool colored,hx::Null< bool >  __o_hasColorOffsets,::openfl::_legacy::display::BlendMode blend,hx::Null< bool >  __o_smooth){
bool hasColorOffsets = __o_hasColorOffsets.Default(false);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","startQuadBatch",0xe17326fa,"flixel.FlxCamera.startQuadBatch","flixel/FlxCamera.hx",370,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(colored,"colored")
	HX_STACK_ARG(hasColorOffsets,"hasColorOffsets")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(374)
		::flixel::graphics::tile::FlxDrawTilesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(375)
		::openfl::_legacy::display::BlendMode tmp = blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		int tmp1 = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		int blendInt = tmp1;		HX_STACK_VAR(blendInt,"blendInt");
		HX_STACK_LINE(377)
		::flixel::graphics::tile::FlxDrawBaseItem tmp2 = this->_currentDrawItem;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		if ((tmp4)){
			HX_STACK_LINE(377)
			::flixel::graphics::tile::FlxDrawBaseItem tmp6 = this->_currentDrawItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(377)
			::flixel::graphics::tile::FlxDrawBaseItem tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			::flixel::graphics::tile::FlxDrawBaseItem tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			::flixel::graphics::tile::FlxDrawItemType tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(377)
			tmp5 = (tmp9 == ::flixel::graphics::tile::FlxDrawItemType_obj::TILES);
		}
		else{
			HX_STACK_LINE(377)
			tmp5 = false;
		}
		HX_STACK_LINE(377)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(377)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(377)
		if ((tmp6)){
			HX_STACK_LINE(378)
			::flixel::graphics::tile::FlxDrawTilesItem tmp8 = this->_headTiles;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(378)
			::flixel::graphics::tile::FlxDrawTilesItem tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(378)
			::flixel::graphics::tile::FlxDrawTilesItem tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(378)
			::flixel::graphics::FlxGraphic tmp11 = tmp10->graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(378)
			::flixel::graphics::FlxGraphic tmp12 = graphic;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(378)
			tmp7 = (tmp11 == tmp12);
		}
		else{
			HX_STACK_LINE(377)
			tmp7 = false;
		}
		HX_STACK_LINE(377)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(377)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(377)
		if ((tmp8)){
			HX_STACK_LINE(379)
			::flixel::graphics::tile::FlxDrawTilesItem tmp10 = this->_headTiles;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(379)
			::flixel::graphics::tile::FlxDrawTilesItem tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(379)
			::flixel::graphics::tile::FlxDrawTilesItem tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(379)
			bool tmp13 = tmp12->colored;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(379)
			bool tmp14 = colored;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(379)
			tmp9 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(377)
			tmp9 = false;
		}
		HX_STACK_LINE(377)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(377)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(377)
		if ((tmp10)){
			HX_STACK_LINE(380)
			::flixel::graphics::tile::FlxDrawTilesItem tmp12 = this->_headTiles;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(380)
			::flixel::graphics::tile::FlxDrawTilesItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(380)
			::flixel::graphics::tile::FlxDrawTilesItem tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(380)
			bool tmp15 = tmp14->hasColorOffsets;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(380)
			bool tmp16 = hasColorOffsets;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(380)
			tmp11 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(377)
			tmp11 = false;
		}
		HX_STACK_LINE(377)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(377)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(377)
		if ((tmp12)){
			HX_STACK_LINE(381)
			::flixel::graphics::tile::FlxDrawTilesItem tmp14 = this->_headTiles;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(381)
			::flixel::graphics::tile::FlxDrawTilesItem tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(381)
			::flixel::graphics::tile::FlxDrawTilesItem tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(381)
			int tmp17 = tmp16->blending;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(381)
			int tmp18 = blendInt;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(381)
			tmp13 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(377)
			tmp13 = false;
		}
		HX_STACK_LINE(377)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(377)
		if ((tmp13)){
			HX_STACK_LINE(382)
			::flixel::graphics::tile::FlxDrawTilesItem tmp15 = this->_headTiles;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(382)
			::flixel::graphics::tile::FlxDrawTilesItem tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(382)
			bool tmp17 = tmp16->antialiasing;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(382)
			bool tmp18 = smooth;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(382)
			tmp14 = (tmp17 == tmp18);
		}
		else{
			HX_STACK_LINE(377)
			tmp14 = false;
		}
		HX_STACK_LINE(377)
		if ((tmp14)){
			HX_STACK_LINE(384)
			::flixel::graphics::tile::FlxDrawTilesItem tmp15 = this->_headTiles;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(384)
			return tmp15;
		}
		HX_STACK_LINE(387)
		::flixel::graphics::tile::FlxDrawTilesItem tmp15 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(387)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(387)
		if ((tmp16)){
			HX_STACK_LINE(389)
			::flixel::graphics::tile::FlxDrawTilesItem tmp17 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(389)
			itemToReturn = tmp17;
			HX_STACK_LINE(390)
			::flixel::graphics::tile::FlxDrawTilesItem tmp18 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(390)
			::flixel::graphics::tile::FlxDrawTilesItem newHead = tmp18->nextTyped;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(391)
			itemToReturn->reset();
			HX_STACK_LINE(392)
			::flixel::FlxCamera_obj::_storageTilesHead = newHead;
		}
		else{
			HX_STACK_LINE(396)
			::flixel::graphics::tile::FlxDrawTilesItem tmp17 = ::flixel::graphics::tile::FlxDrawTilesItem_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(396)
			itemToReturn = tmp17;
		}
		HX_STACK_LINE(399)
		itemToReturn->graphics = graphic;
		HX_STACK_LINE(400)
		itemToReturn->antialiasing = smooth;
		HX_STACK_LINE(401)
		itemToReturn->colored = colored;
		HX_STACK_LINE(402)
		itemToReturn->hasColorOffsets = hasColorOffsets;
		HX_STACK_LINE(403)
		itemToReturn->blending = blendInt;
		HX_STACK_LINE(405)
		::flixel::graphics::tile::FlxDrawTilesItem tmp17 = this->_headTiles;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(405)
		itemToReturn->nextTyped = tmp17;
		HX_STACK_LINE(406)
		this->_headTiles = itemToReturn;
		HX_STACK_LINE(408)
		::flixel::graphics::tile::FlxDrawBaseItem tmp18 = this->_headOfDrawStack;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(408)
		bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(408)
		if ((tmp19)){
			HX_STACK_LINE(410)
			this->_headOfDrawStack = itemToReturn;
		}
		HX_STACK_LINE(413)
		::flixel::graphics::tile::FlxDrawBaseItem tmp20 = this->_currentDrawItem;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(413)
		bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(413)
		if ((tmp21)){
			HX_STACK_LINE(415)
			::flixel::graphics::tile::FlxDrawBaseItem tmp22 = this->_currentDrawItem;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(415)
			tmp22->next = itemToReturn;
		}
		HX_STACK_LINE(418)
		this->_currentDrawItem = itemToReturn;
		HX_STACK_LINE(420)
		::flixel::graphics::tile::FlxDrawTilesItem tmp22 = itemToReturn;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(420)
		return tmp22;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,startQuadBatch,return )

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::startTrianglesBatch( ::flixel::graphics::FlxGraphic graphic,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_isColored,::openfl::_legacy::display::BlendMode blend){
bool smoothing = __o_smoothing.Default(false);
bool isColored = __o_isColored.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","startTrianglesBatch",0xb3a3b828,"flixel.FlxCamera.startTrianglesBatch","flixel/FlxCamera.hx",427,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(isColored,"isColored")
	HX_STACK_ARG(blend,"blend")
{
		HX_STACK_LINE(428)
		::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(429)
		::openfl::_legacy::display::BlendMode tmp = blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		int tmp1 = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		int blendInt = tmp1;		HX_STACK_VAR(blendInt,"blendInt");
		HX_STACK_LINE(431)
		::flixel::graphics::tile::FlxDrawBaseItem tmp2 = this->_currentDrawItem;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(431)
		if ((tmp4)){
			HX_STACK_LINE(431)
			::flixel::graphics::tile::FlxDrawBaseItem tmp6 = this->_currentDrawItem;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(431)
			::flixel::graphics::tile::FlxDrawBaseItem tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(431)
			::flixel::graphics::tile::FlxDrawBaseItem tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(431)
			::flixel::graphics::tile::FlxDrawItemType tmp9 = tmp8->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(431)
			tmp5 = (tmp9 == ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES);
		}
		else{
			HX_STACK_LINE(431)
			tmp5 = false;
		}
		HX_STACK_LINE(431)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(431)
		if ((tmp6)){
			HX_STACK_LINE(432)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp8 = this->_headTriangles;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(432)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(432)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(432)
			::flixel::graphics::FlxGraphic tmp11 = tmp10->graphics;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(432)
			::flixel::graphics::FlxGraphic tmp12 = graphic;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(432)
			tmp7 = (tmp11 == tmp12);
		}
		else{
			HX_STACK_LINE(431)
			tmp7 = false;
		}
		HX_STACK_LINE(431)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(431)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(431)
		if ((tmp8)){
			HX_STACK_LINE(433)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp10 = this->_headTriangles;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(433)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(433)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(433)
			bool tmp13 = tmp12->antialiasing;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(433)
			bool tmp14 = smoothing;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(433)
			tmp9 = (tmp13 == tmp14);
		}
		else{
			HX_STACK_LINE(431)
			tmp9 = false;
		}
		HX_STACK_LINE(431)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(431)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(431)
		if ((tmp10)){
			HX_STACK_LINE(434)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp12 = this->_headTriangles;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(434)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(434)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(434)
			bool tmp15 = tmp14->colored;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(434)
			bool tmp16 = isColored;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(434)
			tmp11 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(431)
			tmp11 = false;
		}
		HX_STACK_LINE(431)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(431)
		if ((tmp11)){
			HX_STACK_LINE(435)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp13 = this->_headTriangles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(435)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(435)
			int tmp15 = tmp14->blending;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(435)
			int tmp16 = blendInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(435)
			tmp12 = (tmp15 == tmp16);
		}
		else{
			HX_STACK_LINE(431)
			tmp12 = false;
		}
		HX_STACK_LINE(431)
		if ((tmp12)){
			HX_STACK_LINE(437)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp13 = this->_headTriangles;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(437)
			return tmp13;
		}
		HX_STACK_LINE(440)
		::flixel::graphics::FlxGraphic tmp13 = graphic;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(440)
		bool tmp14 = smoothing;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(440)
		bool tmp15 = isColored;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(440)
		::openfl::_legacy::display::BlendMode tmp16 = blend;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(440)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp17 = this->getNewDrawTrianglesItem(tmp13,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(440)
		return tmp17;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,startTrianglesBatch,return )

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::getNewDrawTrianglesItem( ::flixel::graphics::FlxGraphic graphic,hx::Null< bool >  __o_smoothing,hx::Null< bool >  __o_isColored,::openfl::_legacy::display::BlendMode blend){
bool smoothing = __o_smoothing.Default(false);
bool isColored = __o_isColored.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","getNewDrawTrianglesItem",0xcd894887,"flixel.FlxCamera.getNewDrawTrianglesItem","flixel/FlxCamera.hx",446,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(isColored,"isColored")
	HX_STACK_ARG(blend,"blend")
{
		HX_STACK_LINE(447)
		::flixel::graphics::tile::FlxDrawTrianglesItem itemToReturn = null();		HX_STACK_VAR(itemToReturn,"itemToReturn");
		HX_STACK_LINE(448)
		::openfl::_legacy::display::BlendMode tmp = blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		int tmp1 = ::flixel::graphics::tile::FlxDrawBaseItem_obj::blendToInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		int blendInt = tmp1;		HX_STACK_VAR(blendInt,"blendInt");
		HX_STACK_LINE(450)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp2 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(450)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(450)
		if ((tmp3)){
			HX_STACK_LINE(452)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(452)
			itemToReturn = tmp4;
			HX_STACK_LINE(453)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp5 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(453)
			::flixel::graphics::tile::FlxDrawTrianglesItem newHead = tmp5->nextTyped;		HX_STACK_VAR(newHead,"newHead");
			HX_STACK_LINE(454)
			itemToReturn->reset();
			HX_STACK_LINE(455)
			::flixel::FlxCamera_obj::_storageTrianglesHead = newHead;
		}
		else{
			HX_STACK_LINE(459)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(459)
			itemToReturn = tmp4;
		}
		HX_STACK_LINE(462)
		itemToReturn->graphics = graphic;
		HX_STACK_LINE(463)
		itemToReturn->antialiasing = smoothing;
		HX_STACK_LINE(464)
		itemToReturn->colored = isColored;
		HX_STACK_LINE(465)
		itemToReturn->blending = blendInt;
		HX_STACK_LINE(467)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = this->_headTriangles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(467)
		itemToReturn->nextTyped = tmp4;
		HX_STACK_LINE(468)
		this->_headTriangles = itemToReturn;
		HX_STACK_LINE(470)
		::flixel::graphics::tile::FlxDrawBaseItem tmp5 = this->_headOfDrawStack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(470)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(470)
		if ((tmp6)){
			HX_STACK_LINE(472)
			this->_headOfDrawStack = itemToReturn;
		}
		HX_STACK_LINE(475)
		::flixel::graphics::tile::FlxDrawBaseItem tmp7 = this->_currentDrawItem;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(475)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(475)
		if ((tmp8)){
			HX_STACK_LINE(477)
			::flixel::graphics::tile::FlxDrawBaseItem tmp9 = this->_currentDrawItem;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(477)
			tmp9->next = itemToReturn;
		}
		HX_STACK_LINE(480)
		this->_currentDrawItem = itemToReturn;
		HX_STACK_LINE(482)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp9 = itemToReturn;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,getNewDrawTrianglesItem,return )

Void FlxCamera_obj::clearDrawStack( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","clearDrawStack",0x8d7c5ba0,"flixel.FlxCamera.clearDrawStack","flixel/FlxCamera.hx",487,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		::flixel::graphics::tile::FlxDrawTilesItem tmp = this->_headTiles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		::flixel::graphics::tile::FlxDrawTilesItem currTiles = tmp;		HX_STACK_VAR(currTiles,"currTiles");
		HX_STACK_LINE(489)
		::flixel::graphics::tile::FlxDrawTilesItem newTilesHead;		HX_STACK_VAR(newTilesHead,"newTilesHead");
		HX_STACK_LINE(491)
		while((true)){
			HX_STACK_LINE(491)
			bool tmp1 = (currTiles != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(491)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(491)
			if ((tmp2)){
				HX_STACK_LINE(491)
				break;
			}
			HX_STACK_LINE(493)
			newTilesHead = currTiles->nextTyped;
			HX_STACK_LINE(494)
			currTiles->reset();
			HX_STACK_LINE(495)
			::flixel::graphics::tile::FlxDrawTilesItem tmp3 = ::flixel::FlxCamera_obj::_storageTilesHead;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(495)
			currTiles->nextTyped = tmp3;
			HX_STACK_LINE(496)
			::flixel::FlxCamera_obj::_storageTilesHead = currTiles;
			HX_STACK_LINE(497)
			currTiles = newTilesHead;
		}
		HX_STACK_LINE(500)
		::flixel::graphics::tile::FlxDrawTrianglesItem tmp1 = this->_headTriangles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		::flixel::graphics::tile::FlxDrawTrianglesItem currTriangles = tmp1;		HX_STACK_VAR(currTriangles,"currTriangles");
		HX_STACK_LINE(501)
		::flixel::graphics::tile::FlxDrawTrianglesItem newTrianglesHead;		HX_STACK_VAR(newTrianglesHead,"newTrianglesHead");
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			bool tmp2 = (currTriangles != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(503)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(503)
			if ((tmp3)){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(505)
			newTrianglesHead = currTriangles->nextTyped;
			HX_STACK_LINE(506)
			currTriangles->reset();
			HX_STACK_LINE(507)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp4 = ::flixel::FlxCamera_obj::_storageTrianglesHead;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			currTriangles->nextTyped = tmp4;
			HX_STACK_LINE(508)
			::flixel::FlxCamera_obj::_storageTrianglesHead = currTriangles;
			HX_STACK_LINE(509)
			currTriangles = newTrianglesHead;
		}
		HX_STACK_LINE(512)
		this->_currentDrawItem = null();
		HX_STACK_LINE(513)
		this->_headOfDrawStack = null();
		HX_STACK_LINE(514)
		this->_headTiles = null();
		HX_STACK_LINE(515)
		this->_headTriangles = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,clearDrawStack,(void))

Void FlxCamera_obj::render( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","render",0x1f11e49f,"flixel.FlxCamera.render","flixel/FlxCamera.hx",520,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(521)
		::flixel::graphics::tile::FlxDrawBaseItem tmp = this->_headOfDrawStack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		::flixel::graphics::tile::FlxDrawBaseItem currItem = tmp;		HX_STACK_VAR(currItem,"currItem");
		HX_STACK_LINE(522)
		while((true)){
			HX_STACK_LINE(522)
			bool tmp1 = (currItem != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(522)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(522)
			if ((tmp2)){
				HX_STACK_LINE(522)
				break;
			}
			HX_STACK_LINE(524)
			currItem->render(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(525)
			currItem = currItem->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,render,(void))

Void FlxCamera_obj::drawPixels( ::flixel::graphics::frames::FlxFrame frame,::openfl::_legacy::display::BitmapData pixels,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform,::openfl::_legacy::display::BlendMode blend,Dynamic __o_smoothing){
Dynamic smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","drawPixels",0x80c6bc1a,"flixel.FlxCamera.drawPixels","flixel/FlxCamera.hx",531,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(pixels,"pixels")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(532)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		if ((tmp)){
			HX_STACK_LINE(534)
			::openfl::_legacy::display::BitmapData tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(534)
			::openfl::_legacy::display::BitmapData tmp2 = pixels;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(534)
			::flixel::math::FlxMatrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(534)
			::openfl::_legacy::display::BlendMode tmp4 = blend;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(534)
			Dynamic tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(534)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(534)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(534)
			if ((tmp6)){
				HX_STACK_LINE(534)
				tmp7 = this->antialiasing;
			}
			else{
				HX_STACK_LINE(534)
				tmp7 = true;
			}
			HX_STACK_LINE(534)
			tmp1->draw(tmp2,tmp3,null(),tmp4,null(),tmp7);
		}
		else{
			HX_STACK_LINE(538)
			bool tmp1 = (transform != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(538)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(538)
			if ((tmp1)){
				HX_STACK_LINE(538)
				::openfl::_legacy::geom::ColorTransform tmp3 = transform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(538)
				::openfl::_legacy::geom::ColorTransform tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(538)
				tmp2 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(tmp4);
			}
			else{
				HX_STACK_LINE(538)
				tmp2 = false;
			}
			HX_STACK_LINE(538)
			bool isColored = tmp2;		HX_STACK_VAR(isColored,"isColored");
			HX_STACK_LINE(539)
			bool tmp3 = (transform != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(539)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(539)
			if ((tmp3)){
				HX_STACK_LINE(539)
				::openfl::_legacy::geom::ColorTransform tmp5 = transform;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(539)
				::openfl::_legacy::geom::ColorTransform tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(539)
				tmp4 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp6);
			}
			else{
				HX_STACK_LINE(539)
				tmp4 = false;
			}
			HX_STACK_LINE(539)
			bool hasColorOffsets = tmp4;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
			HX_STACK_LINE(542)
			::flixel::graphics::FlxGraphic tmp5 = frame->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(542)
			bool tmp6 = isColored;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(542)
			bool tmp7 = hasColorOffsets;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(542)
			::openfl::_legacy::display::BlendMode tmp8 = blend;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(542)
			Dynamic tmp9 = smoothing;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(542)
			::flixel::graphics::tile::FlxDrawTilesItem tmp10 = this->startQuadBatch(tmp5,tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(542)
			::flixel::graphics::tile::FlxDrawTilesItem drawItem = tmp10;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(546)
			::flixel::graphics::frames::FlxFrame tmp11 = frame;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(546)
			::flixel::math::FlxMatrix tmp12 = matrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(546)
			::openfl::_legacy::geom::ColorTransform tmp13 = transform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(546)
			drawItem->addQuad(tmp11,tmp12,tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxCamera_obj,drawPixels,(void))

Void FlxCamera_obj::copyPixels( ::flixel::graphics::frames::FlxFrame frame,::openfl::_legacy::display::BitmapData pixels,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::geom::ColorTransform transform,::openfl::_legacy::display::BlendMode blend,Dynamic __o_smoothing){
Dynamic smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","copyPixels",0xf4c7a68b,"flixel.FlxCamera.copyPixels","flixel/FlxCamera.hx",552,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_ARG(pixels,"pixels")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(transform,"transform")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(553)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(553)
		if ((tmp)){
			HX_STACK_LINE(555)
			bool tmp1 = (pixels != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(555)
			if ((tmp1)){
				HX_STACK_LINE(557)
				::openfl::_legacy::display::BitmapData tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(557)
				::openfl::_legacy::display::BitmapData tmp3 = pixels;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(557)
				::openfl::_legacy::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(557)
				::openfl::_legacy::geom::Point tmp5 = destPoint;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(557)
				tmp2->copyPixels(tmp3,tmp4,tmp5,null(),null(),true);
			}
			else{
				HX_STACK_LINE(559)
				bool tmp2 = (frame != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(559)
				if ((tmp2)){
					HX_STACK_LINE(561)
					::openfl::_legacy::display::BitmapData tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(561)
					::openfl::_legacy::geom::Point tmp4 = destPoint;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(561)
					frame->paint(tmp3,tmp4,true,null());
				}
			}
		}
		else{
			HX_STACK_LINE(566)
			::flixel::math::FlxMatrix tmp1 = this->_helperMatrix;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(566)
			tmp1->identity();
			HX_STACK_LINE(567)
			::flixel::math::FlxMatrix tmp2 = this->_helperMatrix;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(567)
			Float tmp3 = destPoint->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(567)
			Float tmp4 = frame->offset->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(567)
			Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(567)
			Float tmp6 = destPoint->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(567)
			Float tmp7 = frame->offset->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(567)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(567)
			tmp2->translate(tmp5,tmp8);
			HX_STACK_LINE(569)
			bool tmp9 = (transform != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(569)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(569)
			if ((tmp9)){
				HX_STACK_LINE(569)
				::openfl::_legacy::geom::ColorTransform tmp11 = transform;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(569)
				::openfl::_legacy::geom::ColorTransform tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(569)
				tmp10 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(tmp12);
			}
			else{
				HX_STACK_LINE(569)
				tmp10 = false;
			}
			HX_STACK_LINE(569)
			bool isColored = tmp10;		HX_STACK_VAR(isColored,"isColored");
			HX_STACK_LINE(570)
			bool tmp11 = (transform != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(570)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(570)
			if ((tmp11)){
				HX_STACK_LINE(570)
				::openfl::_legacy::geom::ColorTransform tmp13 = transform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(570)
				::openfl::_legacy::geom::ColorTransform tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(570)
				tmp12 = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(tmp14);
			}
			else{
				HX_STACK_LINE(570)
				tmp12 = false;
			}
			HX_STACK_LINE(570)
			bool hasColorOffsets = tmp12;		HX_STACK_VAR(hasColorOffsets,"hasColorOffsets");
			HX_STACK_LINE(573)
			::flixel::graphics::FlxGraphic tmp13 = frame->parent;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(573)
			bool tmp14 = isColored;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(573)
			bool tmp15 = hasColorOffsets;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(573)
			::openfl::_legacy::display::BlendMode tmp16 = blend;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(573)
			Dynamic tmp17 = smoothing;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(573)
			::flixel::graphics::tile::FlxDrawTilesItem tmp18 = this->startQuadBatch(tmp13,tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(573)
			::flixel::graphics::tile::FlxDrawTilesItem drawItem = tmp18;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(577)
			::flixel::graphics::frames::FlxFrame tmp19 = frame;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(577)
			::flixel::math::FlxMatrix tmp20 = this->_helperMatrix;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(577)
			::openfl::_legacy::geom::ColorTransform tmp21 = transform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(577)
			drawItem->addQuad(tmp19,tmp20,tmp21);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(FlxCamera_obj,copyPixels,(void))

Void FlxCamera_obj::drawTriangles( ::flixel::graphics::FlxGraphic graphic,Array< Float > vertices,Array< int > indices,Array< Float > uvtData,Array< int > colors,::flixel::math::FlxPoint position,::openfl::_legacy::display::BlendMode blend,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smoothing){
bool repeat = __o_repeat.Default(false);
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","drawTriangles",0x78d375de,"flixel.FlxCamera.drawTriangles","flixel/FlxCamera.hx",584,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(blend,"blend")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(585)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(585)
		if ((tmp)){
			HX_STACK_LINE(587)
			bool tmp1 = (position == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(587)
			if ((tmp1)){
				HX_STACK_LINE(588)
				::flixel::math::FlxPoint tmp2 = ::flixel::FlxCamera_obj::renderPoint;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(588)
				::flixel::math::FlxPoint tmp3 = tmp2->set(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(588)
				position = tmp3;
			}
			HX_STACK_LINE(590)
			{
				HX_STACK_LINE(590)
				::flixel::math::FlxRect tmp2 = this->_bounds;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(590)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(590)
				_this->x = (int)0;
				HX_STACK_LINE(590)
				_this->y = (int)0;
				HX_STACK_LINE(590)
				int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(590)
				_this->width = tmp3;
				HX_STACK_LINE(590)
				int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(590)
				_this->height = tmp4;
				HX_STACK_LINE(590)
				_this;
			}
			HX_STACK_LINE(592)
			int verticesLength = vertices->length;		HX_STACK_VAR(verticesLength,"verticesLength");
			HX_STACK_LINE(593)
			int currentVertexPosition = (int)0;		HX_STACK_VAR(currentVertexPosition,"currentVertexPosition");
			HX_STACK_LINE(595)
			Float tempX;		HX_STACK_VAR(tempX,"tempX");
			HX_STACK_LINE(595)
			Float tempY;		HX_STACK_VAR(tempY,"tempY");
			HX_STACK_LINE(596)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(597)
			::flixel::math::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(597)
				::flixel::math::FlxRect tmp3 = ::flixel::FlxCamera_obj::renderRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(597)
				::flixel::math::FlxRect _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(597)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(597)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(597)
				Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
				HX_STACK_LINE(597)
				Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
				HX_STACK_LINE(597)
				_this->x = X;
				HX_STACK_LINE(597)
				_this->y = Y;
				HX_STACK_LINE(597)
				_this->width = Width;
				HX_STACK_LINE(597)
				_this->height = Height;
				HX_STACK_LINE(597)
				tmp2 = _this;
			}
			HX_STACK_LINE(597)
			::flixel::math::FlxRect bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(598)
			Array< Float > tmp3 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(598)
			Array< Float > tmp4 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(598)
			int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(598)
			tmp3->splice((int)0,tmp5);
			HX_STACK_LINE(600)
			while((true)){
				HX_STACK_LINE(600)
				bool tmp6 = (i < verticesLength);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(600)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(600)
				if ((tmp7)){
					HX_STACK_LINE(600)
					break;
				}
				HX_STACK_LINE(602)
				Float tmp8 = position->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(602)
				Float tmp9 = vertices->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(602)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(602)
				tempX = tmp10;
				HX_STACK_LINE(603)
				Float tmp11 = position->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(603)
				int tmp12 = (i + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(603)
				Float tmp13 = vertices->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(603)
				Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(603)
				tempY = tmp14;
				HX_STACK_LINE(605)
				{
					HX_STACK_LINE(605)
					int tmp15 = (currentVertexPosition)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(605)
					int index = tmp15;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(605)
					Array< Float > tmp16 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(605)
					Float tmp17 = tempX;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(605)
					tmp16[index] = tmp17;
				}
				HX_STACK_LINE(606)
				{
					HX_STACK_LINE(606)
					int tmp15 = (currentVertexPosition)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(606)
					int index = tmp15;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(606)
					Array< Float > tmp16 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(606)
					Float tmp17 = tempY;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(606)
					tmp16[index] = tmp17;
				}
				HX_STACK_LINE(608)
				bool tmp15 = (i == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(608)
				if ((tmp15)){
					HX_STACK_LINE(610)
					bounds->x = tempX;
					HX_STACK_LINE(610)
					bounds->y = tempY;
					HX_STACK_LINE(610)
					bounds->width = (int)0;
					HX_STACK_LINE(610)
					bounds->height = (int)0;
					HX_STACK_LINE(610)
					bounds;
				}
				else{
					HX_STACK_LINE(614)
					bool tmp16 = (tempX < bounds->x);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(614)
					if ((tmp16)){
						HX_STACK_LINE(614)
						Float tmp17 = (bounds->x - tempX);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(614)
						hx::AddEq(bounds->width,tmp17);
						HX_STACK_LINE(614)
						bounds->x = tempX;
					}
					HX_STACK_LINE(614)
					bool tmp17 = (tempY < bounds->y);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(614)
					if ((tmp17)){
						HX_STACK_LINE(614)
						Float tmp18 = (bounds->y - tempY);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(614)
						hx::AddEq(bounds->height,tmp18);
						HX_STACK_LINE(614)
						bounds->y = tempY;
					}
					HX_STACK_LINE(614)
					Float tmp18 = tempX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(614)
					Float tmp19 = (bounds->x + bounds->width);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(614)
					bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(614)
					if ((tmp20)){
						HX_STACK_LINE(614)
						Float tmp21 = (tempX - bounds->x);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(614)
						bounds->width = tmp21;
					}
					HX_STACK_LINE(614)
					Float tmp21 = tempY;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(614)
					Float tmp22 = (bounds->y + bounds->height);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(614)
					bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(614)
					if ((tmp23)){
						HX_STACK_LINE(614)
						Float tmp24 = (tempY - bounds->y);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(614)
						bounds->height = tmp24;
					}
					HX_STACK_LINE(614)
					bounds;
				}
				HX_STACK_LINE(617)
				hx::AddEq(i,(int)2);
			}
			HX_STACK_LINE(620)
			{
				HX_STACK_LINE(620)
				bool tmp6 = position->_weak;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(620)
				if ((tmp6)){
					HX_STACK_LINE(620)
					position->put();
				}
			}
			HX_STACK_LINE(622)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(622)
			{
				HX_STACK_LINE(622)
				::flixel::math::FlxRect tmp7 = this->_bounds;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(622)
				::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(622)
				Float tmp8 = (bounds->x + bounds->width);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(622)
				Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(622)
				bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(622)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(622)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(622)
				if ((tmp11)){
					HX_STACK_LINE(622)
					Float tmp13 = bounds->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(622)
					Float tmp14 = (_this->x + _this->width);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(622)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(622)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(622)
					tmp12 = (tmp13 < tmp16);
				}
				else{
					HX_STACK_LINE(622)
					tmp12 = false;
				}
				HX_STACK_LINE(622)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(622)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(622)
				if ((tmp13)){
					HX_STACK_LINE(622)
					Float tmp15 = (bounds->y + bounds->height);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(622)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(622)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(622)
					Float tmp18 = _this->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(622)
					tmp14 = (tmp17 > tmp18);
				}
				else{
					HX_STACK_LINE(622)
					tmp14 = false;
				}
				HX_STACK_LINE(622)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(622)
				if ((tmp14)){
					HX_STACK_LINE(622)
					Float tmp16 = bounds->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(622)
					Float tmp17 = (_this->y + _this->height);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(622)
					Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(622)
					tmp15 = (tmp16 < tmp18);
				}
				else{
					HX_STACK_LINE(622)
					tmp15 = false;
				}
				HX_STACK_LINE(622)
				bool result = tmp15;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					bool tmp16 = bounds->_weak;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(622)
					if ((tmp16)){
						HX_STACK_LINE(622)
						bool tmp17 = bounds->_inPool;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(622)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(622)
						if ((tmp18)){
							HX_STACK_LINE(622)
							bounds->_inPool = true;
							HX_STACK_LINE(622)
							bounds->_weak = false;
							HX_STACK_LINE(622)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp19 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(622)
							::flixel::math::FlxRect tmp20 = bounds;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(622)
							tmp19->putUnsafe(tmp20);
						}
					}
				}
				HX_STACK_LINE(622)
				tmp6 = result;
			}
			HX_STACK_LINE(622)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(622)
			if ((tmp7)){
				HX_STACK_LINE(624)
				Array< Float > tmp8 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(624)
				Array< Float > tmp9 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(624)
				int tmp10 = tmp9->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(624)
				int tmp11 = verticesLength;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(624)
				int tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(624)
				int tmp13 = verticesLength;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(624)
				tmp8->splice(tmp12,tmp13);
			}
			else{
				HX_STACK_LINE(628)
				::openfl::_legacy::display::Sprite tmp8 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(628)
				::openfl::_legacy::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(628)
				tmp9->clear();
				HX_STACK_LINE(629)
				::openfl::_legacy::display::Sprite tmp10 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(629)
				::openfl::_legacy::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(629)
				::openfl::_legacy::display::BitmapData tmp12 = graphic->bitmap;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(629)
				bool tmp13 = repeat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(629)
				bool tmp14 = smoothing;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(629)
				tmp11->beginBitmapFill(tmp12,null(),tmp13,tmp14);
				HX_STACK_LINE(630)
				::openfl::_legacy::display::Sprite tmp15 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(630)
				::openfl::_legacy::display::Graphics tmp16 = tmp15->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(630)
				Array< Float > tmp17 = ::flixel::FlxCamera_obj::drawVertices;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(630)
				tmp16->drawTriangles(tmp17,indices,uvtData,null(),null(),null());
				HX_STACK_LINE(631)
				::openfl::_legacy::display::Sprite tmp18 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(631)
				::openfl::_legacy::display::Graphics tmp19 = tmp18->get_graphics();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(631)
				tmp19->endFill();
				HX_STACK_LINE(632)
				::openfl::_legacy::display::BitmapData tmp20 = this->buffer;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(632)
				::openfl::_legacy::display::Sprite tmp21 = ::flixel::FlxCamera_obj::trianglesSprite;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(632)
				tmp20->draw(tmp21,null(),null(),null(),null(),null());
			}
			HX_STACK_LINE(645)
			{
				HX_STACK_LINE(645)
				bool tmp8 = bounds->_inPool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(645)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(645)
				if ((tmp9)){
					HX_STACK_LINE(645)
					bounds->_inPool = true;
					HX_STACK_LINE(645)
					bounds->_weak = false;
					HX_STACK_LINE(645)
					::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(645)
					::flixel::math::FlxRect tmp11 = bounds;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(645)
					tmp10->putUnsafe(tmp11);
				}
			}
		}
		else{
			HX_STACK_LINE(649)
			{
				HX_STACK_LINE(649)
				::flixel::math::FlxRect tmp1 = this->_bounds;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(649)
				::flixel::math::FlxRect _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(649)
				_this->x = (int)0;
				HX_STACK_LINE(649)
				_this->y = (int)0;
				HX_STACK_LINE(649)
				int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(649)
				_this->width = tmp2;
				HX_STACK_LINE(649)
				int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(649)
				_this->height = tmp3;
				HX_STACK_LINE(649)
				_this;
			}
			HX_STACK_LINE(650)
			bool tmp1 = (colors != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(650)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(650)
			if ((tmp1)){
				HX_STACK_LINE(650)
				tmp2 = (colors->length != (int)0);
			}
			else{
				HX_STACK_LINE(650)
				tmp2 = false;
			}
			HX_STACK_LINE(650)
			bool isColored = tmp2;		HX_STACK_VAR(isColored,"isColored");
			HX_STACK_LINE(651)
			::flixel::graphics::FlxGraphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(651)
			bool tmp4 = smoothing;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(651)
			bool tmp5 = isColored;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(651)
			::openfl::_legacy::display::BlendMode tmp6 = blend;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(651)
			::flixel::graphics::tile::FlxDrawTrianglesItem tmp7 = this->startTrianglesBatch(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(651)
			::flixel::graphics::tile::FlxDrawTrianglesItem drawItem = tmp7;		HX_STACK_VAR(drawItem,"drawItem");
			HX_STACK_LINE(652)
			::flixel::math::FlxPoint tmp8 = position;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(652)
			::flixel::math::FlxRect tmp9 = this->_bounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(652)
			drawItem->addTriangles(vertices,indices,uvtData,colors,tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(FlxCamera_obj,drawTriangles,(void))

Void FlxCamera_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","destroy",0xb607d391,"flixel.FlxCamera.destroy","flixel/FlxCamera.hx",721,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(722)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(722)
		::openfl::_legacy::display::Sprite tmp1 = this->_scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(722)
		::flixel::util::FlxDestroyUtil_obj::removeChild(tmp,tmp1);
		HX_STACK_LINE(724)
		bool tmp2 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(724)
		if ((tmp2)){
			HX_STACK_LINE(726)
			::openfl::_legacy::display::Sprite tmp3 = this->_scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(726)
			::openfl::_legacy::display::Bitmap tmp4 = this->_flashBitmap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(726)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp3,tmp4);
			HX_STACK_LINE(727)
			::flixel::FlxSprite tmp5 = this->screen;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(727)
			::flixel::FlxSprite tmp6 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(727)
			this->screen = tmp6;
			HX_STACK_LINE(728)
			this->buffer = null();
			HX_STACK_LINE(729)
			this->_flashBitmap = null();
			HX_STACK_LINE(730)
			::openfl::_legacy::display::BitmapData tmp7 = this->_fill;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(730)
			::openfl::_legacy::display::BitmapData tmp8 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(730)
			this->_fill = tmp8;
		}
		else{
			HX_STACK_LINE(739)
			::openfl::_legacy::display::Sprite tmp3 = this->_scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(739)
			::openfl::_legacy::display::Sprite tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			::flixel::util::FlxDestroyUtil_obj::removeChild(tmp3,tmp4);
			HX_STACK_LINE(740)
			::openfl::_legacy::display::Sprite tmp5 = this->canvas;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(740)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(740)
			if ((tmp6)){
				HX_STACK_LINE(742)
				{
					HX_STACK_LINE(742)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(742)
					::openfl::_legacy::display::Sprite tmp7 = this->canvas;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(742)
					int tmp8 = tmp7->get_numChildren();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(742)
					int _g = tmp8;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(742)
					while((true)){
						HX_STACK_LINE(742)
						bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(742)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(742)
						if ((tmp10)){
							HX_STACK_LINE(742)
							break;
						}
						HX_STACK_LINE(742)
						int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(742)
						int i = tmp11;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(744)
						::openfl::_legacy::display::Sprite tmp12 = this->canvas;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(744)
						tmp12->removeChildAt((int)0);
					}
				}
				HX_STACK_LINE(746)
				this->canvas = null();
			}
			HX_STACK_LINE(749)
			::flixel::graphics::tile::FlxDrawBaseItem tmp7 = this->_headOfDrawStack;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(749)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(749)
			if ((tmp8)){
				HX_STACK_LINE(751)
				this->clearDrawStack();
			}
			HX_STACK_LINE(754)
			this->_transform = null();
			HX_STACK_LINE(755)
			this->_helperMatrix = null();
		}
		HX_STACK_LINE(758)
		this->_bounds = null();
		HX_STACK_LINE(759)
		::flixel::math::FlxPoint tmp3 = this->scroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		::flixel::math::FlxPoint tmp4 = ::flixel::util::FlxDestroyUtil_obj::put(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(759)
		this->scroll = tmp4;
		HX_STACK_LINE(760)
		::flixel::math::FlxPoint tmp5 = this->targetOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(760)
		::flixel::math::FlxPoint tmp6 = ::flixel::util::FlxDestroyUtil_obj::put(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(760)
		this->targetOffset = tmp6;
		HX_STACK_LINE(761)
		::flixel::math::FlxRect tmp7 = this->deadzone;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(761)
		::flixel::math::FlxRect tmp8 = ::flixel::util::FlxDestroyUtil_obj::put(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(761)
		this->deadzone = tmp8;
		HX_STACK_LINE(763)
		this->target = null();
		HX_STACK_LINE(764)
		this->flashSprite = null();
		HX_STACK_LINE(765)
		this->_scrollRect = null();
		HX_STACK_LINE(766)
		this->_flashRect = null();
		HX_STACK_LINE(767)
		this->_flashPoint = null();
		HX_STACK_LINE(768)
		this->_fxFlashComplete = null();
		HX_STACK_LINE(769)
		this->_fxFadeComplete = null();
		HX_STACK_LINE(770)
		this->_fxShakeComplete = null();
		HX_STACK_LINE(771)
		this->_fxShakeOffset = null();
		HX_STACK_LINE(773)
		this->super::destroy();
	}
return null();
}


Void FlxCamera_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","update",0xa0edff52,"flixel.FlxCamera.update","flixel/FlxCamera.hx",780,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(782)
		::flixel::FlxObject tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(782)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(782)
		if ((tmp1)){
			HX_STACK_LINE(784)
			this->updateFollow();
		}
		HX_STACK_LINE(787)
		this->updateScroll();
		HX_STACK_LINE(788)
		Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(788)
		this->updateFlash(tmp2);
		HX_STACK_LINE(789)
		Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(789)
		this->updateFade(tmp3);
		HX_STACK_LINE(790)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(790)
		this->updateShake(tmp4);
		HX_STACK_LINE(792)
		::openfl::_legacy::display::Sprite tmp5 = this->flashSprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(792)
		bool tmp6 = this->filtersEnabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(792)
		tmp5->set_filters((  ((tmp6)) ? Array< ::Dynamic >(this->_filters) : Array< ::Dynamic >(null()) ));
		HX_STACK_LINE(794)
		this->updateFlashSpritePosition();
	}
return null();
}


Void FlxCamera_obj::updateScroll( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScroll",0x3fd094ff,"flixel.FlxCamera.updateScroll","flixel/FlxCamera.hx",801,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(803)
		::flixel::math::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(803)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(803)
			::flixel::math::FlxPoint tmp2 = this->scroll;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(803)
			Float Value = tmp2->x;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(803)
			Dynamic tmp3 = this->minScrollX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(803)
			Dynamic Min = tmp3;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(803)
			Dynamic tmp4 = this->maxScrollX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(803)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(803)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(803)
			if ((tmp5)){
				HX_STACK_LINE(803)
				Dynamic tmp7 = this->maxScrollX;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(803)
				int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(803)
				tmp6 = (tmp7 - tmp8);
			}
			else{
				HX_STACK_LINE(803)
				tmp6 = null();
			}
			HX_STACK_LINE(803)
			Dynamic Max = tmp6;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(803)
			bool tmp7 = (Min != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(803)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(803)
			if ((tmp7)){
				HX_STACK_LINE(803)
				tmp8 = (Value < Min);
			}
			else{
				HX_STACK_LINE(803)
				tmp8 = false;
			}
			HX_STACK_LINE(803)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(803)
			if ((tmp8)){
				HX_STACK_LINE(803)
				tmp9 = Min;
			}
			else{
				HX_STACK_LINE(803)
				tmp9 = Value;
			}
			HX_STACK_LINE(803)
			Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(803)
			bool tmp10 = (Max != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(803)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(803)
			if ((tmp10)){
				HX_STACK_LINE(803)
				tmp11 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(803)
				tmp11 = false;
			}
			HX_STACK_LINE(803)
			if ((tmp11)){
				HX_STACK_LINE(803)
				tmp1 = Max;
			}
			else{
				HX_STACK_LINE(803)
				tmp1 = lowerBound;
			}
		}
		HX_STACK_LINE(803)
		tmp->set_x(tmp1);
		HX_STACK_LINE(804)
		::flixel::math::FlxPoint tmp2 = this->scroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(804)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(804)
		{
			HX_STACK_LINE(804)
			::flixel::math::FlxPoint tmp4 = this->scroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(804)
			Float Value = tmp4->y;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(804)
			Dynamic tmp5 = this->minScrollY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(804)
			Dynamic Min = tmp5;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(804)
			Dynamic tmp6 = this->maxScrollY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(804)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(804)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(804)
			if ((tmp7)){
				HX_STACK_LINE(804)
				Dynamic tmp9 = this->maxScrollY;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(804)
				int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(804)
				tmp8 = (tmp9 - tmp10);
			}
			else{
				HX_STACK_LINE(804)
				tmp8 = null();
			}
			HX_STACK_LINE(804)
			Dynamic Max = tmp8;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(804)
			bool tmp9 = (Min != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(804)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(804)
			if ((tmp9)){
				HX_STACK_LINE(804)
				tmp10 = (Value < Min);
			}
			else{
				HX_STACK_LINE(804)
				tmp10 = false;
			}
			HX_STACK_LINE(804)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(804)
			if ((tmp10)){
				HX_STACK_LINE(804)
				tmp11 = Min;
			}
			else{
				HX_STACK_LINE(804)
				tmp11 = Value;
			}
			HX_STACK_LINE(804)
			Float lowerBound = tmp11;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(804)
			bool tmp12 = (Max != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(804)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(804)
			if ((tmp12)){
				HX_STACK_LINE(804)
				tmp13 = (lowerBound > Max);
			}
			else{
				HX_STACK_LINE(804)
				tmp13 = false;
			}
			HX_STACK_LINE(804)
			if ((tmp13)){
				HX_STACK_LINE(804)
				tmp3 = Max;
			}
			else{
				HX_STACK_LINE(804)
				tmp3 = lowerBound;
			}
		}
		HX_STACK_LINE(804)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScroll,(void))

Void FlxCamera_obj::updateFollow( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFollow",0xf2024e63,"flixel.FlxCamera.updateFollow","flixel/FlxCamera.hx",808,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(811)
		::flixel::math::FlxRect tmp = this->deadzone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(811)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(811)
		if ((tmp1)){
			HX_STACK_LINE(813)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(813)
			::flixel::math::FlxPoint tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(813)
			tmp2->getMidpoint(tmp3);
			HX_STACK_LINE(814)
			::flixel::math::FlxPoint tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(814)
			::flixel::math::FlxPoint tmp5 = this->targetOffset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(814)
			tmp4->addPoint(tmp5);
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp6 = this->_point;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(815)
				::flixel::math::FlxPoint tmp7 = this->scroll;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(815)
				Float tmp8 = point->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(815)
				int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(815)
				Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(815)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(815)
				Float tmp12 = point->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(815)
				int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(815)
				Float tmp14 = (tmp13 * ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(815)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(815)
				tmp7->set(tmp11,tmp15);
				HX_STACK_LINE(815)
				{
					HX_STACK_LINE(815)
					bool tmp16 = point->_weak;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(815)
					if ((tmp16)){
						HX_STACK_LINE(815)
						point->put();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(819)
			Float edge;		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(820)
			::flixel::FlxObject tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(820)
			Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			::flixel::math::FlxPoint tmp4 = this->targetOffset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			Float targetX = tmp6;		HX_STACK_VAR(targetX,"targetX");
			HX_STACK_LINE(821)
			::flixel::FlxObject tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(821)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(821)
			::flixel::math::FlxPoint tmp9 = this->targetOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(821)
			Float targetY = tmp11;		HX_STACK_VAR(targetY,"targetY");
			HX_STACK_LINE(823)
			::flixel::FlxCameraFollowStyle tmp12 = this->style;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(823)
			bool tmp13 = (tmp12 == ::flixel::FlxCameraFollowStyle_obj::SCREEN_BY_SCREEN);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(823)
			if ((tmp13)){
				HX_STACK_LINE(825)
				Float tmp14 = targetX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(825)
				::flixel::math::FlxPoint tmp15 = this->scroll;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(825)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(825)
				int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(825)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(825)
				bool tmp19 = (tmp14 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(825)
				if ((tmp19)){
					HX_STACK_LINE(827)
					::flixel::math::FlxPoint tmp20 = this->_scrollTarget;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(827)
					::flixel::math::FlxPoint _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(827)
					Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(827)
					int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(827)
					Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(827)
					_g->set_x(tmp23);
				}
				else{
					HX_STACK_LINE(829)
					Float tmp20 = targetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(829)
					::flixel::math::FlxPoint tmp21 = this->scroll;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(829)
					Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(829)
					bool tmp23 = (tmp20 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(829)
					if ((tmp23)){
						HX_STACK_LINE(831)
						::flixel::math::FlxPoint tmp24 = this->_scrollTarget;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(831)
						::flixel::math::FlxPoint _g = tmp24;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(831)
						Float tmp25 = _g->x;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(831)
						int tmp26 = this->width;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(831)
						Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(831)
						_g->set_x(tmp27);
					}
				}
				HX_STACK_LINE(834)
				Float tmp20 = targetY;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(834)
				::flixel::math::FlxPoint tmp21 = this->scroll;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(834)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(834)
				int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(834)
				Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(834)
				bool tmp25 = (tmp20 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(834)
				if ((tmp25)){
					HX_STACK_LINE(836)
					::flixel::math::FlxPoint tmp26 = this->_scrollTarget;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(836)
					::flixel::math::FlxPoint _g = tmp26;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(836)
					Float tmp27 = _g->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(836)
					int tmp28 = this->height;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(836)
					Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(836)
					_g->set_y(tmp29);
				}
				else{
					HX_STACK_LINE(838)
					Float tmp26 = targetY;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(838)
					::flixel::math::FlxPoint tmp27 = this->scroll;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(838)
					Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(838)
					bool tmp29 = (tmp26 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(838)
					if ((tmp29)){
						HX_STACK_LINE(840)
						::flixel::math::FlxPoint tmp30 = this->_scrollTarget;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(840)
						::flixel::math::FlxPoint _g = tmp30;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(840)
						Float tmp31 = _g->y;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(840)
						int tmp32 = this->height;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(840)
						Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(840)
						_g->set_y(tmp33);
					}
				}
			}
			else{
				HX_STACK_LINE(845)
				Float tmp14 = targetX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(845)
				::flixel::math::FlxRect tmp15 = this->deadzone;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(845)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(845)
				Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(845)
				edge = tmp17;
				HX_STACK_LINE(846)
				::flixel::math::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(846)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(846)
				Float tmp20 = edge;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(846)
				bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(846)
				if ((tmp21)){
					HX_STACK_LINE(848)
					::flixel::math::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(848)
					Float tmp23 = edge;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(848)
					tmp22->set_x(tmp23);
				}
				HX_STACK_LINE(850)
				Float tmp22 = targetX;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(850)
				::flixel::FlxObject tmp23 = this->target;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(850)
				Float tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(850)
				Float tmp25 = (tmp22 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(850)
				::flixel::math::FlxRect tmp26 = this->deadzone;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(850)
				Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(850)
				Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(850)
				::flixel::math::FlxRect tmp29 = this->deadzone;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(850)
				Float tmp30 = tmp29->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(850)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(850)
				edge = tmp31;
				HX_STACK_LINE(851)
				::flixel::math::FlxPoint tmp32 = this->_scrollTarget;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(851)
				Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(851)
				Float tmp34 = edge;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(851)
				bool tmp35 = (tmp33 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(851)
				if ((tmp35)){
					HX_STACK_LINE(853)
					::flixel::math::FlxPoint tmp36 = this->_scrollTarget;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(853)
					Float tmp37 = edge;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(853)
					tmp36->set_x(tmp37);
				}
				HX_STACK_LINE(856)
				Float tmp36 = targetY;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(856)
				::flixel::math::FlxRect tmp37 = this->deadzone;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(856)
				Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(856)
				Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(856)
				edge = tmp39;
				HX_STACK_LINE(857)
				::flixel::math::FlxPoint tmp40 = this->_scrollTarget;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(857)
				Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(857)
				Float tmp42 = edge;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(857)
				bool tmp43 = (tmp41 > tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(857)
				if ((tmp43)){
					HX_STACK_LINE(859)
					::flixel::math::FlxPoint tmp44 = this->_scrollTarget;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(859)
					Float tmp45 = edge;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(859)
					tmp44->set_y(tmp45);
				}
				HX_STACK_LINE(861)
				Float tmp44 = targetY;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(861)
				::flixel::FlxObject tmp45 = this->target;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(861)
				Float tmp46 = tmp45->get_height();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(861)
				Float tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(861)
				::flixel::math::FlxRect tmp48 = this->deadzone;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(861)
				Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(861)
				Float tmp50 = (tmp47 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(861)
				::flixel::math::FlxRect tmp51 = this->deadzone;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(861)
				Float tmp52 = tmp51->height;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(861)
				Float tmp53 = (tmp50 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(861)
				edge = tmp53;
				HX_STACK_LINE(862)
				::flixel::math::FlxPoint tmp54 = this->_scrollTarget;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(862)
				Float tmp55 = tmp54->y;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(862)
				Float tmp56 = edge;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(862)
				bool tmp57 = (tmp55 < tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(862)
				if ((tmp57)){
					HX_STACK_LINE(864)
					::flixel::math::FlxPoint tmp58 = this->_scrollTarget;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(864)
					Float tmp59 = edge;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(864)
					tmp58->set_y(tmp59);
				}
			}
			HX_STACK_LINE(868)
			::flixel::FlxObject tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(868)
			bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::flixel::FlxSprite >());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(868)
			if ((tmp15)){
				HX_STACK_LINE(870)
				::flixel::math::FlxPoint tmp16 = this->_lastTargetPosition;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(870)
				bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(870)
				if ((tmp17)){
					HX_STACK_LINE(872)
					::flixel::math::FlxPoint tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(872)
					{
						HX_STACK_LINE(872)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp19 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(872)
						::flixel::math::FlxPoint tmp20 = tmp19->get();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(872)
						::flixel::FlxObject tmp21 = this->target;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(872)
						Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(872)
						::flixel::FlxObject tmp23 = this->target;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(872)
						Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(872)
						::flixel::math::FlxPoint tmp25 = tmp20->set(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(872)
						::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(872)
						point->_inPool = false;
						HX_STACK_LINE(872)
						tmp18 = point;
					}
					HX_STACK_LINE(872)
					this->_lastTargetPosition = tmp18;
				}
				HX_STACK_LINE(874)
				{
					HX_STACK_LINE(874)
					::flixel::math::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(874)
					::flixel::math::FlxPoint _g = tmp18;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(874)
					Float tmp19 = _g->x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(874)
					::flixel::FlxObject tmp20 = this->target;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(874)
					Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(874)
					::flixel::math::FlxPoint tmp22 = this->_lastTargetPosition;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(874)
					Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(874)
					Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(874)
					::flixel::math::FlxPoint tmp25 = this->followLead;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(874)
					Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(874)
					Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(874)
					Float tmp28 = (tmp19 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(874)
					_g->set_x(tmp28);
				}
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					::flixel::math::FlxPoint tmp18 = this->_scrollTarget;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(875)
					::flixel::math::FlxPoint _g = tmp18;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(875)
					Float tmp19 = _g->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(875)
					::flixel::FlxObject tmp20 = this->target;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(875)
					Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(875)
					::flixel::math::FlxPoint tmp22 = this->_lastTargetPosition;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(875)
					Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(875)
					Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(875)
					::flixel::math::FlxPoint tmp25 = this->followLead;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(875)
					Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(875)
					Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(875)
					Float tmp28 = (tmp19 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(875)
					_g->set_y(tmp28);
				}
				HX_STACK_LINE(877)
				::flixel::math::FlxPoint tmp18 = this->_lastTargetPosition;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(877)
				::flixel::FlxObject tmp19 = this->target;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(877)
				Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(877)
				tmp18->set_x(tmp20);
				HX_STACK_LINE(878)
				::flixel::math::FlxPoint tmp21 = this->_lastTargetPosition;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(878)
				::flixel::FlxObject tmp22 = this->target;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(878)
				Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(878)
				tmp21->set_y(tmp23);
			}
			HX_STACK_LINE(881)
			Float tmp16 = this->followLerp;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(881)
			int tmp17 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(881)
			Float tmp18 = (Float((int)60) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(881)
			bool tmp19 = (tmp16 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(881)
			if ((tmp19)){
				HX_STACK_LINE(883)
				::flixel::math::FlxPoint tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(883)
				::flixel::math::FlxPoint _this = tmp20;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(883)
				::flixel::math::FlxPoint tmp21 = this->_scrollTarget;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(883)
				::flixel::math::FlxPoint point = tmp21;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(883)
				Float tmp22 = point->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(883)
				_this->set_x(tmp22);
				HX_STACK_LINE(883)
				Float tmp23 = point->y;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(883)
				_this->set_y(tmp23);
				HX_STACK_LINE(883)
				{
					HX_STACK_LINE(883)
					bool tmp24 = point->_weak;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(883)
					if ((tmp24)){
						HX_STACK_LINE(883)
						point->put();
					}
				}
				HX_STACK_LINE(883)
				_this;
			}
			else{
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					::flixel::math::FlxPoint tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(887)
					::flixel::math::FlxPoint _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(887)
					Float tmp21 = _g->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(887)
					::flixel::math::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(887)
					Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(887)
					::flixel::math::FlxPoint tmp24 = this->scroll;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(887)
					Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(887)
					Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(887)
					Float tmp27 = this->followLerp;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(887)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(887)
					int tmp29 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(887)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(887)
					Float tmp31 = (Float(tmp30) / Float((int)60));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(887)
					Float tmp32 = (tmp21 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(887)
					_g->set_x(tmp32);
				}
				HX_STACK_LINE(888)
				{
					HX_STACK_LINE(888)
					::flixel::math::FlxPoint tmp20 = this->scroll;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(888)
					::flixel::math::FlxPoint _g = tmp20;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(888)
					Float tmp21 = _g->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(888)
					::flixel::math::FlxPoint tmp22 = this->_scrollTarget;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(888)
					Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(888)
					::flixel::math::FlxPoint tmp24 = this->scroll;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(888)
					Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(888)
					Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(888)
					Float tmp27 = this->followLerp;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(888)
					Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(888)
					int tmp29 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(888)
					Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(888)
					Float tmp31 = (Float(tmp30) / Float((int)60));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(888)
					Float tmp32 = (tmp21 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(888)
					_g->set_y(tmp32);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFollow,(void))

Void FlxCamera_obj::updateFlash( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlash",0x43f2dcfe,"flixel.FlxCamera.updateFlash","flixel/FlxCamera.hx",894,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(896)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(896)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(896)
		if ((tmp1)){
			HX_STACK_LINE(898)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(898)
			Float tmp3 = this->_fxFlashDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(898)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(898)
			hx::SubEq(this->_fxFlashAlpha,tmp4);
			HX_STACK_LINE(899)
			Float tmp5 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(899)
			bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(899)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(899)
			if ((tmp6)){
				HX_STACK_LINE(899)
				Dynamic tmp8 = this->_fxFlashComplete_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(899)
				Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(899)
				tmp7 = (tmp9 != null());
			}
			else{
				HX_STACK_LINE(899)
				tmp7 = false;
			}
			HX_STACK_LINE(899)
			if ((tmp7)){
				HX_STACK_LINE(901)
				this->_fxFlashComplete();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFlash,(void))

Void FlxCamera_obj::updateFade( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFade",0xaec3f1ee,"flixel.FlxCamera.updateFade","flixel/FlxCamera.hx",907,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(908)
		bool tmp = this->_fxFadeCompleted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(908)
		if ((tmp)){
			HX_STACK_LINE(909)
			return null();
		}
		HX_STACK_LINE(911)
		bool tmp1 = this->_fxFadeIn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(911)
		if ((tmp1)){
			HX_STACK_LINE(913)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(913)
			Float tmp3 = this->_fxFadeDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(913)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(913)
			hx::SubEq(this->_fxFadeAlpha,tmp4);
			HX_STACK_LINE(914)
			Float tmp5 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(914)
			bool tmp6 = (tmp5 <= ((Float)0.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(914)
			if ((tmp6)){
				HX_STACK_LINE(916)
				this->_fxFadeAlpha = ((Float)0.0);
				HX_STACK_LINE(917)
				this->completeFade();
			}
		}
		else{
			HX_STACK_LINE(922)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(922)
			Float tmp3 = this->_fxFadeDuration;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(922)
			Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(922)
			hx::AddEq(this->_fxFadeAlpha,tmp4);
			HX_STACK_LINE(923)
			Float tmp5 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(923)
			bool tmp6 = (tmp5 >= ((Float)1.0));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(923)
			if ((tmp6)){
				HX_STACK_LINE(925)
				this->_fxFadeAlpha = ((Float)1.0);
				HX_STACK_LINE(926)
				this->completeFade();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateFade,(void))

Void FlxCamera_obj::completeFade( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","completeFade",0xb02048de,"flixel.FlxCamera.completeFade","flixel/FlxCamera.hx",932,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(933)
		this->_fxFadeCompleted = true;
		HX_STACK_LINE(934)
		Dynamic tmp = this->_fxFadeComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(934)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(934)
		if ((tmp1)){
			HX_STACK_LINE(935)
			this->_fxFadeComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,completeFade,(void))

Void FlxCamera_obj::updateShake( Float elapsed){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateShake",0xbd838614,"flixel.FlxCamera.updateShake","flixel/FlxCamera.hx",939,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(940)
		Float tmp = this->_fxShakeDuration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(940)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(940)
		if ((tmp1)){
			HX_STACK_LINE(942)
			hx::SubEq(this->_fxShakeDuration,elapsed);
			HX_STACK_LINE(943)
			Float tmp2 = this->_fxShakeDuration;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(943)
			bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(943)
			if ((tmp3)){
				HX_STACK_LINE(945)
				::flixel::math::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(945)
				tmp4->set(null(),null());
				HX_STACK_LINE(946)
				Dynamic tmp5 = this->_fxShakeComplete_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(946)
				bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(946)
				if ((tmp6)){
					HX_STACK_LINE(948)
					this->_fxShakeComplete();
				}
			}
			else{
				HX_STACK_LINE(953)
				::flixel::util::FlxAxes tmp4 = this->_fxShakeAxes;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(953)
				bool tmp5 = (tmp4 != ::flixel::util::FlxAxes_obj::Y);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(953)
				if ((tmp5)){
					HX_STACK_LINE(955)
					::flixel::math::FlxPoint tmp6 = this->_fxShakeOffset;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(955)
					::flixel::math::FlxRandom tmp7 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(955)
					Float tmp8 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(955)
					Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(955)
					int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(955)
					Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(955)
					Float tmp12 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(955)
					int tmp13 = this->width;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(955)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(955)
					Float tmp15 = tmp7->_float(tmp11,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(955)
					Float tmp16 = this->zoom;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(955)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(955)
					tmp6->set_x(tmp17);
				}
				HX_STACK_LINE(957)
				::flixel::util::FlxAxes tmp6 = this->_fxShakeAxes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(957)
				bool tmp7 = (tmp6 != ::flixel::util::FlxAxes_obj::X);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(957)
				if ((tmp7)){
					HX_STACK_LINE(959)
					::flixel::math::FlxPoint tmp8 = this->_fxShakeOffset;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(959)
					::flixel::math::FlxRandom tmp9 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(959)
					Float tmp10 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(959)
					Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(959)
					int tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(959)
					Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(959)
					Float tmp14 = this->_fxShakeIntensity;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(959)
					int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(959)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(959)
					Float tmp17 = tmp9->_float(tmp13,tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(959)
					Float tmp18 = this->zoom;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(959)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(959)
					tmp8->set_y(tmp19);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,updateShake,(void))

Void FlxCamera_obj::updateFlashSpritePosition( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashSpritePosition",0x5aef376c,"flixel.FlxCamera.updateFlashSpritePosition","flixel/FlxCamera.hx",966,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(967)
		::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(967)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(967)
		if ((tmp1)){
			HX_STACK_LINE(969)
			::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(969)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(969)
			::flixel::_system::scaleModes::BaseScaleMode tmp4 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(969)
			Float tmp5 = tmp4->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(969)
			Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(969)
			::flixel::math::FlxPoint tmp7 = this->_flashOffset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(969)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(969)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(969)
			tmp2->set_x(tmp9);
			HX_STACK_LINE(970)
			::openfl::_legacy::display::Sprite tmp10 = this->flashSprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(970)
			Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(970)
			::flixel::_system::scaleModes::BaseScaleMode tmp12 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(970)
			Float tmp13 = tmp12->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(970)
			Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(970)
			::flixel::math::FlxPoint tmp15 = this->_flashOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(970)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(970)
			Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(970)
			tmp10->set_y(tmp17);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashSpritePosition,(void))

Void FlxCamera_obj::updateFlashOffset( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateFlashOffset",0x0e9fbb31,"flixel.FlxCamera.updateFlashOffset","flixel/FlxCamera.hx",975,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(976)
		::flixel::math::FlxPoint tmp = this->_flashOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(976)
		int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(976)
		Float tmp2 = (tmp1 * ((Float)0.5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(976)
		::flixel::_system::scaleModes::BaseScaleMode tmp3 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(976)
		Float tmp4 = tmp3->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(976)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(976)
		Float tmp6 = this->initialZoom;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(976)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(976)
		tmp->set_x(tmp7);
		HX_STACK_LINE(977)
		::flixel::math::FlxPoint tmp8 = this->_flashOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(977)
		int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(977)
		Float tmp10 = (tmp9 * ((Float)0.5));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(977)
		::flixel::_system::scaleModes::BaseScaleMode tmp11 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(977)
		Float tmp12 = tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(977)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(977)
		Float tmp14 = this->initialZoom;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(977)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(977)
		tmp8->set_y(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateFlashOffset,(void))

Void FlxCamera_obj::updateScrollRect( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateScrollRect",0xbf58f9c3,"flixel.FlxCamera.updateScrollRect","flixel/FlxCamera.hx",981,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(982)
		::openfl::_legacy::display::Sprite tmp = this->_scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(982)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(982)
		::openfl::_legacy::geom::Rectangle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(982)
		if ((tmp1)){
			HX_STACK_LINE(982)
			::openfl::_legacy::display::Sprite tmp3 = this->_scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(982)
			tmp2 = tmp3->get_scrollRect();
		}
		else{
			HX_STACK_LINE(982)
			tmp2 = null();
		}
		HX_STACK_LINE(982)
		::openfl::_legacy::geom::Rectangle rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(984)
		bool tmp3 = (rect != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(984)
		if ((tmp3)){
			HX_STACK_LINE(986)
			Float tmp4 = rect->y = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(986)
			rect->x = tmp4;
			HX_STACK_LINE(987)
			int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(987)
			Float tmp6 = this->initialZoom;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(987)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(987)
			::flixel::_system::scaleModes::BaseScaleMode tmp8 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(987)
			Float tmp9 = tmp8->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(987)
			Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(987)
			rect->width = tmp10;
			HX_STACK_LINE(988)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(988)
			Float tmp12 = this->initialZoom;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(988)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(988)
			::flixel::_system::scaleModes::BaseScaleMode tmp14 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(988)
			Float tmp15 = tmp14->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(988)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(988)
			rect->height = tmp16;
			HX_STACK_LINE(989)
			::openfl::_legacy::display::Sprite tmp17 = this->_scrollRect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(989)
			::openfl::_legacy::geom::Rectangle tmp18 = rect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(989)
			tmp17->set_scrollRect(tmp18);
			HX_STACK_LINE(990)
			::openfl::_legacy::display::Sprite tmp19 = this->_scrollRect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(990)
			Float tmp20 = ((Float)-0.5);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(990)
			Float tmp21 = rect->width;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(990)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(990)
			tmp19->set_x(tmp22);
			HX_STACK_LINE(991)
			::openfl::_legacy::display::Sprite tmp23 = this->_scrollRect;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(991)
			Float tmp24 = ((Float)-0.5);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(991)
			Float tmp25 = rect->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(991)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(991)
			tmp23->set_y(tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateScrollRect,(void))

Void FlxCamera_obj::updateInternalSpritePositions( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","updateInternalSpritePositions",0x7d5baef6,"flixel.FlxCamera.updateInternalSpritePositions","flixel/FlxCamera.hx",996,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(997)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(997)
		if ((tmp)){
			HX_STACK_LINE(999)
			::openfl::_legacy::display::Bitmap tmp1 = this->_flashBitmap;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(999)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(999)
			if ((tmp2)){
				HX_STACK_LINE(1001)
				bool tmp3 = this->regen;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1001)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1001)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1001)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1001)
				if ((tmp5)){
					HX_STACK_LINE(1001)
					int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1001)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1001)
					int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1001)
					::openfl::_legacy::display::BitmapData tmp10 = this->buffer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1001)
					::openfl::_legacy::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1001)
					::openfl::_legacy::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1001)
					int tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1001)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1001)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1001)
					tmp6 = (tmp9 != tmp15);
				}
				else{
					HX_STACK_LINE(1001)
					tmp6 = true;
				}
				HX_STACK_LINE(1001)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1001)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1001)
				if ((tmp7)){
					HX_STACK_LINE(1001)
					int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1001)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1001)
					::openfl::_legacy::display::BitmapData tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1001)
					::openfl::_legacy::display::BitmapData tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1001)
					int tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1001)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1001)
					tmp8 = (tmp10 != tmp14);
				}
				else{
					HX_STACK_LINE(1001)
					tmp8 = true;
				}
				HX_STACK_LINE(1001)
				this->regen = tmp8;
				HX_STACK_LINE(1003)
				::openfl::_legacy::display::Bitmap tmp9 = this->_flashBitmap;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1003)
				Float tmp10 = ((Float)-0.5);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1003)
				int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1003)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1003)
				Float tmp13 = this->scaleX;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1003)
				Float tmp14 = this->initialZoom;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1003)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1003)
				Float tmp16 = (tmp12 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1003)
				::flixel::_system::scaleModes::BaseScaleMode tmp17 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1003)
				Float tmp18 = tmp17->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1003)
				Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1003)
				tmp9->set_x(tmp19);
				HX_STACK_LINE(1004)
				::openfl::_legacy::display::Bitmap tmp20 = this->_flashBitmap;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1004)
				Float tmp21 = ((Float)-0.5);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1004)
				int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1004)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1004)
				Float tmp24 = this->scaleY;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1004)
				Float tmp25 = this->initialZoom;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1004)
				Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1004)
				Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1004)
				::flixel::_system::scaleModes::BaseScaleMode tmp28 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1004)
				Float tmp29 = tmp28->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(1004)
				Float tmp30 = (tmp27 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1004)
				tmp20->set_y(tmp30);
			}
		}
		else{
			HX_STACK_LINE(1009)
			::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1009)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1009)
			if ((tmp2)){
				HX_STACK_LINE(1011)
				::openfl::_legacy::display::Sprite tmp3 = this->canvas;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1011)
				Float tmp4 = ((Float)-0.5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1011)
				int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1011)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1011)
				Float tmp7 = this->scaleX;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1011)
				Float tmp8 = this->initialZoom;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1011)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1011)
				Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1011)
				::flixel::_system::scaleModes::BaseScaleMode tmp11 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1011)
				Float tmp12 = tmp11->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1011)
				Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1011)
				tmp3->set_x(tmp13);
				HX_STACK_LINE(1012)
				::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1012)
				Float tmp15 = ((Float)-0.5);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1012)
				int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1012)
				Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1012)
				Float tmp18 = this->scaleY;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1012)
				Float tmp19 = this->initialZoom;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1012)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1012)
				Float tmp21 = (tmp17 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1012)
				::flixel::_system::scaleModes::BaseScaleMode tmp22 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1012)
				Float tmp23 = tmp22->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1012)
				Float tmp24 = (tmp21 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1012)
				tmp14->set_y(tmp24);
				HX_STACK_LINE(1014)
				::openfl::_legacy::display::Sprite tmp25 = this->canvas;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1014)
				Float tmp26 = this->totalScaleX;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1014)
				tmp25->set_scaleX(tmp26);
				HX_STACK_LINE(1015)
				::openfl::_legacy::display::Sprite tmp27 = this->canvas;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1015)
				Float tmp28 = this->totalScaleY;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1015)
				tmp27->set_scaleY(tmp28);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,updateInternalSpritePositions,(void))

Void FlxCamera_obj::follow( ::flixel::FlxObject Target,::flixel::FlxCameraFollowStyle Style,Dynamic Lerp){
{
		HX_STACK_FRAME("flixel.FlxCamera","follow",0x137f0aba,"flixel.FlxCamera.follow","flixel/FlxCamera.hx",1040,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Style,"Style")
		HX_STACK_ARG(Lerp,"Lerp")
		HX_STACK_LINE(1041)
		bool tmp = (Style == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1041)
		if ((tmp)){
			HX_STACK_LINE(1042)
			Style = ::flixel::FlxCameraFollowStyle_obj::LOCKON;
		}
		HX_STACK_LINE(1044)
		bool tmp1 = (Lerp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		if ((tmp1)){
			HX_STACK_LINE(1045)
			int tmp2 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1045)
			Float tmp3 = (Float((int)60) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1045)
			Lerp = tmp3;
		}
		HX_STACK_LINE(1047)
		this->style = Style;
		HX_STACK_LINE(1048)
		this->target = Target;
		HX_STACK_LINE(1049)
		Dynamic tmp2 = Lerp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1049)
		this->set_followLerp(tmp2);
		HX_STACK_LINE(1050)
		Float helper;		HX_STACK_VAR(helper,"helper");
		HX_STACK_LINE(1051)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(1052)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(1053)
		this->_lastTargetPosition = null();
		HX_STACK_LINE(1055)
		bool tmp3 = (Style != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1055)
		if ((tmp3)){
			HX_STACK_LINE(1055)
			switch( (int)(Style->__Index())){
				case (int)0: {
					HX_STACK_LINE(1058)
					::flixel::FlxObject tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1058)
					bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1058)
					if ((tmp5)){
						HX_STACK_LINE(1060)
						::flixel::FlxObject tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1060)
						Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1060)
						w = tmp7;
						HX_STACK_LINE(1061)
						::flixel::FlxObject tmp8 = this->target;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1061)
						Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1061)
						h = tmp9;
					}
					HX_STACK_LINE(1063)
					::flixel::math::FlxRect tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1063)
					{
						HX_STACK_LINE(1063)
						::flixel::math::FlxRect tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1063)
						{
							HX_STACK_LINE(1063)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp8 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1063)
							::flixel::math::FlxRect tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1063)
							::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1063)
							int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1063)
							Float tmp11 = w;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1063)
							Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1063)
							Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1063)
							_this->x = tmp13;
							HX_STACK_LINE(1063)
							int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1063)
							Float tmp15 = h;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1063)
							Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1063)
							Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1063)
							Float tmp18 = (h * ((Float)0.25));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1063)
							Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1063)
							_this->y = tmp19;
							HX_STACK_LINE(1063)
							_this->width = w;
							HX_STACK_LINE(1063)
							_this->height = h;
							HX_STACK_LINE(1063)
							tmp7 = _this;
						}
						HX_STACK_LINE(1063)
						::flixel::math::FlxRect rect = tmp7;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1063)
						rect->_inPool = false;
						HX_STACK_LINE(1063)
						tmp6 = rect;
					}
					HX_STACK_LINE(1063)
					this->deadzone = tmp6;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1066)
					int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1066)
					Float tmp5 = (Float(tmp4) / Float((int)8));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1066)
					Float w1 = tmp5;		HX_STACK_VAR(w1,"w1");
					HX_STACK_LINE(1067)
					int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1067)
					Float tmp7 = (Float(tmp6) / Float((int)3));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1067)
					Float h1 = tmp7;		HX_STACK_VAR(h1,"h1");
					HX_STACK_LINE(1068)
					::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1068)
					{
						HX_STACK_LINE(1068)
						::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1068)
						{
							HX_STACK_LINE(1068)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1068)
							::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1068)
							::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1068)
							int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1068)
							Float tmp13 = w1;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1068)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1068)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1068)
							_this->x = tmp15;
							HX_STACK_LINE(1068)
							int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1068)
							Float tmp17 = h1;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1068)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1068)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1068)
							Float tmp20 = (h1 * ((Float)0.25));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1068)
							Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1068)
							_this->y = tmp21;
							HX_STACK_LINE(1068)
							_this->width = w1;
							HX_STACK_LINE(1068)
							_this->height = h1;
							HX_STACK_LINE(1068)
							tmp9 = _this;
						}
						HX_STACK_LINE(1068)
						::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1068)
						rect->_inPool = false;
						HX_STACK_LINE(1068)
						tmp8 = rect;
					}
					HX_STACK_LINE(1068)
					this->deadzone = tmp8;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(1071)
					int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1071)
					int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1071)
					Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1071)
					Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1071)
					helper = tmp7;
					HX_STACK_LINE(1072)
					::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1072)
					{
						HX_STACK_LINE(1072)
						::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1072)
						{
							HX_STACK_LINE(1072)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1072)
							::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1072)
							::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1072)
							int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1072)
							Float tmp13 = helper;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1072)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1072)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1072)
							_this->x = tmp15;
							HX_STACK_LINE(1072)
							int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1072)
							Float tmp17 = helper;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1072)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1072)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1072)
							_this->y = tmp19;
							HX_STACK_LINE(1072)
							_this->width = helper;
							HX_STACK_LINE(1072)
							_this->height = helper;
							HX_STACK_LINE(1072)
							tmp9 = _this;
						}
						HX_STACK_LINE(1072)
						::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1072)
						rect->_inPool = false;
						HX_STACK_LINE(1072)
						tmp8 = rect;
					}
					HX_STACK_LINE(1072)
					this->deadzone = tmp8;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(1075)
					int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1075)
					int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1075)
					Float tmp6 = ::Math_obj::max(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1075)
					Float tmp7 = (Float(tmp6) / Float((int)8));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1075)
					helper = tmp7;
					HX_STACK_LINE(1076)
					::flixel::math::FlxRect tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1076)
						::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1076)
						{
							HX_STACK_LINE(1076)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp10 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1076)
							::flixel::math::FlxRect tmp11 = tmp10->get();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1076)
							::flixel::math::FlxRect _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1076)
							int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1076)
							Float tmp13 = helper;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1076)
							Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1076)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1076)
							_this->x = tmp15;
							HX_STACK_LINE(1076)
							int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1076)
							Float tmp17 = helper;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1076)
							Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1076)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1076)
							_this->y = tmp19;
							HX_STACK_LINE(1076)
							_this->width = helper;
							HX_STACK_LINE(1076)
							_this->height = helper;
							HX_STACK_LINE(1076)
							tmp9 = _this;
						}
						HX_STACK_LINE(1076)
						::flixel::math::FlxRect rect = tmp9;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1076)
						rect->_inPool = false;
						HX_STACK_LINE(1076)
						tmp8 = rect;
					}
					HX_STACK_LINE(1076)
					this->deadzone = tmp8;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(1079)
					::flixel::math::FlxRect tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1079)
					{
						HX_STACK_LINE(1079)
						::flixel::math::FlxRect tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1079)
						{
							HX_STACK_LINE(1079)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp6 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1079)
							::flixel::math::FlxRect tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1079)
							::flixel::math::FlxRect _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1079)
							_this->x = (int)0;
							HX_STACK_LINE(1079)
							_this->y = (int)0;
							HX_STACK_LINE(1079)
							int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1079)
							_this->width = tmp8;
							HX_STACK_LINE(1079)
							int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1079)
							_this->height = tmp9;
							HX_STACK_LINE(1079)
							tmp5 = _this;
						}
						HX_STACK_LINE(1079)
						::flixel::math::FlxRect rect = tmp5;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(1079)
						rect->_inPool = false;
						HX_STACK_LINE(1079)
						tmp4 = rect;
					}
					HX_STACK_LINE(1079)
					this->deadzone = tmp4;
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(1082)
					this->deadzone = null();
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxCamera_obj,follow,(void))

Void FlxCamera_obj::snapToTarget( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","snapToTarget",0x8eeb1d9f,"flixel.FlxCamera.snapToTarget","flixel/FlxCamera.hx",1091,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1092)
		this->updateFollow();
		HX_STACK_LINE(1093)
		{
			HX_STACK_LINE(1093)
			::flixel::math::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1093)
			::flixel::math::FlxPoint _this = tmp;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1093)
			::flixel::math::FlxPoint tmp1 = this->_scrollTarget;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1093)
			::flixel::math::FlxPoint point = tmp1;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1093)
			Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1093)
			_this->set_x(tmp2);
			HX_STACK_LINE(1093)
			Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1093)
			_this->set_y(tmp3);
			HX_STACK_LINE(1093)
			{
				HX_STACK_LINE(1093)
				bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1093)
				if ((tmp4)){
					HX_STACK_LINE(1093)
					point->put();
				}
			}
			HX_STACK_LINE(1093)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,snapToTarget,(void))

Void FlxCamera_obj::focusOn( ::flixel::math::FlxPoint point){
{
		HX_STACK_FRAME("flixel.FlxCamera","focusOn",0xd304f1ae,"flixel.FlxCamera.focusOn","flixel/FlxCamera.hx",1102,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(1103)
		::flixel::math::FlxPoint tmp = this->scroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1103)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1103)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1103)
		Float tmp3 = (tmp2 * ((Float)0.5));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1103)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1103)
		Float tmp5 = point->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1103)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1103)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1103)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1103)
		tmp->set(tmp4,tmp8);
		HX_STACK_LINE(1104)
		{
			HX_STACK_LINE(1104)
			bool tmp9 = point->_weak;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1104)
			if ((tmp9)){
				HX_STACK_LINE(1104)
				point->put();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,focusOn,(void))

Void FlxCamera_obj::flash( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-1);
Float Duration = __o_Duration.Default(1);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","flash",0x27663887,"flixel.FlxCamera.flash","flixel/FlxCamera.hx",1116,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(1117)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1117)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1117)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1117)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1117)
		if ((tmp2)){
			HX_STACK_LINE(1117)
			Float tmp4 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1117)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1117)
			tmp3 = (tmp5 > ((Float)0.0));
		}
		else{
			HX_STACK_LINE(1117)
			tmp3 = false;
		}
		HX_STACK_LINE(1117)
		if ((tmp3)){
			HX_STACK_LINE(1119)
			return null();
		}
		HX_STACK_LINE(1121)
		this->_fxFlashColor = Color;
		HX_STACK_LINE(1122)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1122)
		if ((tmp4)){
			HX_STACK_LINE(1124)
			Duration = ((Float)0.000001);
		}
		HX_STACK_LINE(1126)
		this->_fxFlashDuration = Duration;
		HX_STACK_LINE(1127)
		this->_fxFlashComplete = OnComplete;
		HX_STACK_LINE(1128)
		this->_fxFlashAlpha = ((Float)1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,flash,(void))

Void FlxCamera_obj::fade( hx::Null< int >  __o_Color,hx::Null< Float >  __o_Duration,hx::Null< bool >  __o_FadeIn,Dynamic OnComplete,hx::Null< bool >  __o_Force){
int Color = __o_Color.Default(-16777216);
Float Duration = __o_Duration.Default(1);
bool FadeIn = __o_FadeIn.Default(false);
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","fade",0xa5741a85,"flixel.FlxCamera.fade","flixel/FlxCamera.hx",1141,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(FadeIn,"FadeIn")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(1142)
		bool tmp = this->_fxFadeCompleted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1142)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1142)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1142)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1142)
		if ((tmp2)){
			HX_STACK_LINE(1142)
			bool tmp4 = Force;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1142)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1142)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(1142)
			tmp3 = false;
		}
		HX_STACK_LINE(1142)
		if ((tmp3)){
			HX_STACK_LINE(1143)
			return null();
		}
		HX_STACK_LINE(1145)
		this->_fxFadeColor = Color;
		HX_STACK_LINE(1146)
		bool tmp4 = (Duration <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1146)
		if ((tmp4)){
			HX_STACK_LINE(1147)
			Duration = ((Float)0.000001);
		}
		HX_STACK_LINE(1149)
		this->_fxFadeIn = FadeIn;
		HX_STACK_LINE(1150)
		this->_fxFadeDuration = Duration;
		HX_STACK_LINE(1151)
		this->_fxFadeComplete = OnComplete;
		HX_STACK_LINE(1153)
		bool tmp5 = this->_fxFadeIn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1153)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1153)
		if ((tmp5)){
			HX_STACK_LINE(1153)
			tmp6 = ((Float)0.999999);
		}
		else{
			HX_STACK_LINE(1153)
			tmp6 = ((Float)0.000001);
		}
		HX_STACK_LINE(1153)
		this->_fxFadeAlpha = tmp6;
		HX_STACK_LINE(1154)
		this->_fxFadeCompleted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,fade,(void))

Void FlxCamera_obj::shake( hx::Null< Float >  __o_Intensity,hx::Null< Float >  __o_Duration,Dynamic OnComplete,hx::Null< bool >  __o_Force,::flixel::util::FlxAxes Axes){
Float Intensity = __o_Intensity.Default(((Float)0.05));
Float Duration = __o_Duration.Default(((Float)0.5));
bool Force = __o_Force.Default(true);
	HX_STACK_FRAME("flixel.FlxCamera","shake",0xa0f6e19d,"flixel.FlxCamera.shake","flixel/FlxCamera.hx",1167,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Intensity,"Intensity")
	HX_STACK_ARG(Duration,"Duration")
	HX_STACK_ARG(OnComplete,"OnComplete")
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Axes,"Axes")
{
		HX_STACK_LINE(1168)
		bool tmp = (Axes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1168)
		if ((tmp)){
			HX_STACK_LINE(1169)
			Axes = ::flixel::util::FlxAxes_obj::XY;
		}
		HX_STACK_LINE(1171)
		bool tmp1 = Force;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1171)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1171)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1171)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1171)
		if ((tmp3)){
			HX_STACK_LINE(1171)
			::flixel::math::FlxPoint tmp5 = this->_fxShakeOffset;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1171)
			::flixel::math::FlxPoint tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1171)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1171)
			bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1171)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1171)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1171)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1171)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1171)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1171)
			if ((tmp13)){
				HX_STACK_LINE(1171)
				::flixel::math::FlxPoint tmp14 = this->_fxShakeOffset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1171)
				::flixel::math::FlxPoint tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1171)
				::flixel::math::FlxPoint tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1171)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1171)
				tmp4 = (tmp17 != (int)0);
			}
			else{
				HX_STACK_LINE(1171)
				tmp4 = true;
			}
		}
		else{
			HX_STACK_LINE(1171)
			tmp4 = false;
		}
		HX_STACK_LINE(1171)
		if ((tmp4)){
			HX_STACK_LINE(1173)
			return null();
		}
		HX_STACK_LINE(1175)
		this->_fxShakeIntensity = Intensity;
		HX_STACK_LINE(1176)
		this->_fxShakeDuration = Duration;
		HX_STACK_LINE(1177)
		this->_fxShakeComplete = OnComplete;
		HX_STACK_LINE(1178)
		this->_fxShakeAxes = Axes;
		HX_STACK_LINE(1179)
		::flixel::math::FlxPoint tmp5 = this->_fxShakeOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1179)
		tmp5->set(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,shake,(void))

Void FlxCamera_obj::stopFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","stopFX",0x29222b1d,"flixel.FlxCamera.stopFX","flixel/FlxCamera.hx",1186,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1187)
		this->_fxFlashAlpha = ((Float)0.0);
		HX_STACK_LINE(1188)
		this->_fxFadeAlpha = ((Float)0.0);
		HX_STACK_LINE(1189)
		this->_fxShakeDuration = (int)0;
		HX_STACK_LINE(1190)
		this->updateFlashSpritePosition();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,stopFX,(void))

Void FlxCamera_obj::setFilters( Array< ::Dynamic > filters){
{
		HX_STACK_FRAME("flixel.FlxCamera","setFilters",0x0e7f1802,"flixel.FlxCamera.setFilters","flixel/FlxCamera.hx",1200,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filters,"filters")
		HX_STACK_LINE(1200)
		this->_filters = filters;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,setFilters,(void))

::flixel::FlxCamera FlxCamera_obj::copyFrom( ::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.FlxCamera","copyFrom",0x88512948,"flixel.FlxCamera.copyFrom","flixel/FlxCamera.hx",1210,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(1211)
	Dynamic tmp = Camera->minScrollX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1211)
	Dynamic tmp1 = Camera->maxScrollX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1211)
	Dynamic tmp2 = Camera->minScrollY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1211)
	Dynamic tmp3 = Camera->maxScrollY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1211)
	this->setScrollBounds(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(1213)
	this->target = Camera->target;
	HX_STACK_LINE(1215)
	::flixel::FlxObject tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1215)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1215)
	if ((tmp5)){
		HX_STACK_LINE(1217)
		bool tmp6 = (Camera->deadzone == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1217)
		if ((tmp6)){
			HX_STACK_LINE(1219)
			this->deadzone = null();
		}
		else{
			HX_STACK_LINE(1223)
			::flixel::math::FlxRect tmp7 = this->deadzone;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1223)
			bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1223)
			if ((tmp8)){
				HX_STACK_LINE(1225)
				::flixel::math::FlxRect tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1225)
				{
					HX_STACK_LINE(1225)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1225)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1225)
					Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
					HX_STACK_LINE(1225)
					Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
					HX_STACK_LINE(1225)
					::flixel::math::FlxRect tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1225)
					{
						HX_STACK_LINE(1225)
						::flixel::util::FlxPool_flixel_math_FlxRect tmp11 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1225)
						::flixel::math::FlxRect tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1225)
						::flixel::math::FlxRect _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1225)
						_this->x = X;
						HX_STACK_LINE(1225)
						_this->y = Y;
						HX_STACK_LINE(1225)
						_this->width = Width;
						HX_STACK_LINE(1225)
						_this->height = Height;
						HX_STACK_LINE(1225)
						tmp10 = _this;
					}
					HX_STACK_LINE(1225)
					::flixel::math::FlxRect rect = tmp10;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(1225)
					rect->_inPool = false;
					HX_STACK_LINE(1225)
					tmp9 = rect;
				}
				HX_STACK_LINE(1225)
				this->deadzone = tmp9;
			}
			HX_STACK_LINE(1227)
			{
				HX_STACK_LINE(1227)
				::flixel::math::FlxRect tmp9 = this->deadzone;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1227)
				::flixel::math::FlxRect _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1227)
				::flixel::math::FlxRect Rect = Camera->deadzone;		HX_STACK_VAR(Rect,"Rect");
				HX_STACK_LINE(1227)
				_this->x = Rect->x;
				HX_STACK_LINE(1227)
				_this->y = Rect->y;
				HX_STACK_LINE(1227)
				_this->width = Rect->width;
				HX_STACK_LINE(1227)
				_this->height = Rect->height;
				HX_STACK_LINE(1227)
				{
					HX_STACK_LINE(1227)
					bool tmp10 = Rect->_weak;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1227)
					if ((tmp10)){
						HX_STACK_LINE(1227)
						bool tmp11 = Rect->_inPool;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1227)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1227)
						if ((tmp12)){
							HX_STACK_LINE(1227)
							Rect->_inPool = true;
							HX_STACK_LINE(1227)
							Rect->_weak = false;
							HX_STACK_LINE(1227)
							::flixel::util::FlxPool_flixel_math_FlxRect tmp13 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1227)
							::flixel::math::FlxRect tmp14 = Rect;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1227)
							tmp13->putUnsafe(tmp14);
						}
					}
				}
				HX_STACK_LINE(1227)
				_this;
			}
		}
	}
	HX_STACK_LINE(1230)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,copyFrom,return )

Void FlxCamera_obj::fill( int Color,hx::Null< bool >  __o_BlendAlpha,hx::Null< Float >  __o_FxAlpha,::openfl::_legacy::display::Graphics graphics){
bool BlendAlpha = __o_BlendAlpha.Default(true);
Float FxAlpha = __o_FxAlpha.Default(((Float)1.0));
	HX_STACK_FRAME("flixel.FlxCamera","fill",0xa57a338c,"flixel.FlxCamera.fill","flixel/FlxCamera.hx",1240,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(BlendAlpha,"BlendAlpha")
	HX_STACK_ARG(FxAlpha,"FxAlpha")
	HX_STACK_ARG(graphics,"graphics")
{
		HX_STACK_LINE(1241)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1241)
		if ((tmp)){
			HX_STACK_LINE(1243)
			bool tmp1 = BlendAlpha;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1243)
			if ((tmp1)){
				HX_STACK_LINE(1245)
				::openfl::_legacy::display::BitmapData tmp2 = this->_fill;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1245)
				::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1245)
				int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1245)
				tmp2->fillRect(tmp3,tmp4);
				HX_STACK_LINE(1246)
				::openfl::_legacy::display::BitmapData tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1246)
				::openfl::_legacy::display::BitmapData tmp6 = this->_fill;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1246)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_flashRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1246)
				::openfl::_legacy::geom::Point tmp8 = this->_flashPoint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1246)
				bool tmp9 = BlendAlpha;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1246)
				tmp5->copyPixels(tmp6,tmp7,tmp8,null(),null(),tmp9);
			}
			else{
				HX_STACK_LINE(1250)
				::openfl::_legacy::display::BitmapData tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1250)
				::openfl::_legacy::geom::Rectangle tmp3 = this->_flashRect;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1250)
				int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1250)
				tmp2->fillRect(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(1255)
			bool tmp1 = (FxAlpha == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1255)
			if ((tmp1)){
				HX_STACK_LINE(1257)
				return null();
			}
			HX_STACK_LINE(1260)
			bool tmp2 = (graphics == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1260)
			::openfl::_legacy::display::Graphics tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1260)
			if ((tmp2)){
				HX_STACK_LINE(1260)
				::openfl::_legacy::display::Sprite tmp4 = this->canvas;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1260)
				tmp3 = tmp4->get_graphics();
			}
			else{
				HX_STACK_LINE(1260)
				tmp3 = graphics;
			}
			HX_STACK_LINE(1260)
			::openfl::_legacy::display::Graphics targetGraphics = tmp3;		HX_STACK_VAR(targetGraphics,"targetGraphics");
			HX_STACK_LINE(1261)
			int tmp4 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1261)
			Color = tmp4;
			HX_STACK_LINE(1264)
			int tmp5 = Color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1264)
			Float tmp6 = FxAlpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1264)
			targetGraphics->beginFill(tmp5,tmp6);
			HX_STACK_LINE(1267)
			int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1267)
			Float tmp8 = this->totalScaleX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1267)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1267)
			Float tmp10 = (tmp9 + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1267)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1267)
			Float tmp12 = this->totalScaleY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1267)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1267)
			Float tmp14 = (tmp13 + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1267)
			targetGraphics->drawRect((int)-1,(int)-1,tmp10,tmp14);
			HX_STACK_LINE(1268)
			targetGraphics->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,fill,(void))

Void FlxCamera_obj::drawFX( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","drawFX",0xf9beeb9f,"flixel.FlxCamera.drawFX","flixel/FlxCamera.hx",1277,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1278)
		Float alphaComponent;		HX_STACK_VAR(alphaComponent,"alphaComponent");
		HX_STACK_LINE(1281)
		Float tmp = this->_fxFlashAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1281)
		bool tmp1 = (tmp > ((Float)0.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1281)
		if ((tmp1)){
			HX_STACK_LINE(1283)
			int tmp2 = this->_fxFlashColor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1283)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1283)
			int tmp4 = (int(tmp3) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1283)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1283)
			alphaComponent = tmp5;
			HX_STACK_LINE(1285)
			bool tmp6 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1285)
			if ((tmp6)){
				HX_STACK_LINE(1287)
				bool tmp7 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1287)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1287)
				if ((tmp7)){
					HX_STACK_LINE(1287)
					tmp8 = (int)255;
				}
				else{
					HX_STACK_LINE(1287)
					tmp8 = alphaComponent;
				}
				HX_STACK_LINE(1287)
				Float tmp9 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1287)
				Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1287)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1287)
				int tmp12 = (int(tmp11) << int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1287)
				int tmp13 = this->_fxFlashColor;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1287)
				int tmp14 = (int(tmp13) & int((int)16777215));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1287)
				int tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1287)
				this->fill(tmp15,null(),null(),null());
			}
			else{
				HX_STACK_LINE(1291)
				int tmp7 = this->_fxFlashColor;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1291)
				int tmp8 = (int(tmp7) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1291)
				bool tmp9 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1291)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1291)
				if ((tmp9)){
					HX_STACK_LINE(1291)
					tmp10 = (int)255;
				}
				else{
					HX_STACK_LINE(1291)
					tmp10 = alphaComponent;
				}
				HX_STACK_LINE(1291)
				Float tmp11 = this->_fxFlashAlpha;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1291)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1291)
				Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1291)
				::openfl::_legacy::display::Sprite tmp14 = this->canvas;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1291)
				::openfl::_legacy::display::Graphics tmp15 = tmp14->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1291)
				this->fill(tmp8,true,tmp13,tmp15);
			}
		}
		HX_STACK_LINE(1296)
		Float tmp2 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1296)
		bool tmp3 = (tmp2 > ((Float)0.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1296)
		if ((tmp3)){
			HX_STACK_LINE(1298)
			int tmp4 = this->_fxFadeColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1298)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1298)
			int tmp6 = (int(tmp5) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1298)
			int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1298)
			alphaComponent = tmp7;
			HX_STACK_LINE(1300)
			bool tmp8 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1300)
			if ((tmp8)){
				HX_STACK_LINE(1302)
				bool tmp9 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1302)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1302)
				if ((tmp9)){
					HX_STACK_LINE(1302)
					tmp10 = (int)255;
				}
				else{
					HX_STACK_LINE(1302)
					tmp10 = alphaComponent;
				}
				HX_STACK_LINE(1302)
				Float tmp11 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1302)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1302)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1302)
				int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1302)
				int tmp15 = this->_fxFadeColor;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1302)
				int tmp16 = (int(tmp15) & int((int)16777215));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1302)
				int tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1302)
				this->fill(tmp17,null(),null(),null());
			}
			else{
				HX_STACK_LINE(1306)
				int tmp9 = this->_fxFadeColor;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1306)
				int tmp10 = (int(tmp9) & int((int)16777215));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1306)
				bool tmp11 = (alphaComponent <= (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1306)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1306)
				if ((tmp11)){
					HX_STACK_LINE(1306)
					tmp12 = (int)255;
				}
				else{
					HX_STACK_LINE(1306)
					tmp12 = alphaComponent;
				}
				HX_STACK_LINE(1306)
				Float tmp13 = this->_fxFadeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1306)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1306)
				Float tmp15 = (Float(tmp14) / Float((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1306)
				::openfl::_legacy::display::Sprite tmp16 = this->canvas;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1306)
				::openfl::_legacy::display::Graphics tmp17 = tmp16->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1306)
				this->fill(tmp10,true,tmp15,tmp17);
			}
		}
		HX_STACK_LINE(1310)
		::flixel::math::FlxPoint tmp4 = this->_fxShakeOffset;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1310)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1310)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1310)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1310)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1310)
		if ((tmp7)){
			HX_STACK_LINE(1310)
			::flixel::math::FlxPoint tmp9 = this->_fxShakeOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1310)
			::flixel::math::FlxPoint tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1310)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1310)
			tmp8 = (tmp11 != (int)0);
		}
		else{
			HX_STACK_LINE(1310)
			tmp8 = true;
		}
		HX_STACK_LINE(1310)
		if ((tmp8)){
			HX_STACK_LINE(1312)
			{
				HX_STACK_LINE(1312)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1312)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1312)
				Float tmp10 = _g->get_x();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1312)
				::flixel::math::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1312)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1312)
				::flixel::_system::scaleModes::BaseScaleMode tmp13 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1312)
				Float tmp14 = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1312)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1312)
				Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1312)
				_g->set_x(tmp16);
			}
			HX_STACK_LINE(1313)
			{
				HX_STACK_LINE(1313)
				::openfl::_legacy::display::Sprite tmp9 = this->flashSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1313)
				::openfl::_legacy::display::Sprite _g = tmp9;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1313)
				Float tmp10 = _g->get_y();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1313)
				::flixel::math::FlxPoint tmp11 = this->_fxShakeOffset;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1313)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1313)
				::flixel::_system::scaleModes::BaseScaleMode tmp13 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1313)
				Float tmp14 = tmp13->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1313)
				Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1313)
				Float tmp16 = (tmp10 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1313)
				_g->set_y(tmp16);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,drawFX,(void))

Void FlxCamera_obj::checkResize( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","checkResize",0x465b6af3,"flixel.FlxCamera.checkResize","flixel/FlxCamera.hx",1319,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1320)
		bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1320)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1320)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1320)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1320)
		if ((tmp2)){
			HX_STACK_LINE(1320)
			bool tmp4 = this->regen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1320)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1320)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1320)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(1320)
			tmp3 = false;
		}
		HX_STACK_LINE(1320)
		if ((tmp3)){
			HX_STACK_LINE(1321)
			return null();
		}
		HX_STACK_LINE(1323)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1323)
		::openfl::_legacy::display::BitmapData tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1323)
		int tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1323)
		bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1323)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1323)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1323)
		if ((tmp8)){
			HX_STACK_LINE(1323)
			int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1323)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1323)
			::openfl::_legacy::display::BitmapData tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1323)
			::openfl::_legacy::display::BitmapData tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1323)
			int tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1323)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1323)
			tmp9 = (tmp11 != tmp15);
		}
		else{
			HX_STACK_LINE(1323)
			tmp9 = true;
		}
		HX_STACK_LINE(1323)
		if ((tmp9)){
			HX_STACK_LINE(1325)
			::flixel::FlxSprite tmp10 = this->screen;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1325)
			::flixel::graphics::FlxGraphic oldBuffer = tmp10->graphic;		HX_STACK_VAR(oldBuffer,"oldBuffer");
			HX_STACK_LINE(1326)
			int tmp11 = this->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1326)
			int tmp12 = this->height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1326)
			::openfl::_legacy::display::BitmapData tmp13 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp11,tmp12,true,(int)0,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1326)
			this->buffer = tmp13;
			HX_STACK_LINE(1327)
			::flixel::FlxSprite tmp14 = this->screen;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1327)
			::openfl::_legacy::display::BitmapData tmp15 = this->buffer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1327)
			tmp14->set_pixels(tmp15);
			HX_STACK_LINE(1328)
			::flixel::FlxSprite tmp16 = this->screen;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1328)
			tmp16->origin->set(null(),null());
			HX_STACK_LINE(1329)
			::openfl::_legacy::display::Bitmap tmp17 = this->_flashBitmap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1329)
			::openfl::_legacy::display::BitmapData tmp18 = this->buffer;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1329)
			tmp17->set_bitmapData(tmp18);
			HX_STACK_LINE(1330)
			int tmp19 = this->width;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1330)
			::openfl::_legacy::geom::Rectangle tmp20 = this->_flashRect;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1330)
			tmp20->width = tmp19;
			HX_STACK_LINE(1331)
			int tmp21 = this->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1331)
			::openfl::_legacy::geom::Rectangle tmp22 = this->_flashRect;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1331)
			tmp22->height = tmp21;
			HX_STACK_LINE(1332)
			::openfl::_legacy::display::BitmapData tmp23 = this->_fill;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1332)
			::openfl::_legacy::display::BitmapData tmp24 = ::flixel::util::FlxDestroyUtil_obj::dispose(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1332)
			this->_fill = tmp24;
			HX_STACK_LINE(1333)
			int tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1333)
			int tmp26 = this->height;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1333)
			::openfl::_legacy::display::BitmapData tmp27 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp25,tmp26,true,(int)0,null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1333)
			this->_fill = tmp27;
			HX_STACK_LINE(1334)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp28 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1334)
			::flixel::graphics::FlxGraphic tmp29 = oldBuffer;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1334)
			tmp28->__Field(HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"), hx::paccDynamic )(tmp29);
		}
		HX_STACK_LINE(1337)
		this->regen = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,checkResize,(void))

Void FlxCamera_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxCamera","setSize",0xa359881a,"flixel.FlxCamera.setSize","flixel/FlxCamera.hx",1347,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(1348)
		int tmp = Width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1348)
		this->set_width(tmp);
		HX_STACK_LINE(1349)
		int tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1349)
		this->set_height(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setSize,(void))

Void FlxCamera_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.FlxCamera","setPosition",0x5729a882,"flixel.FlxCamera.setPosition","flixel/FlxCamera.hx",1360,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(1361)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1361)
		this->set_x(tmp);
		HX_STACK_LINE(1362)
		Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1362)
		this->set_y(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setPosition,(void))

Void FlxCamera_obj::setScrollBoundsRect( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height,hx::Null< bool >  __o_UpdateWorld){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Width = __o_Width.Default(0);
Float Height = __o_Height.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(false);
	HX_STACK_FRAME("flixel.FlxCamera","setScrollBoundsRect",0xd34a357f,"flixel.FlxCamera.setScrollBoundsRect","flixel/FlxCamera.hx",1375,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1376)
		bool tmp = UpdateWorld;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1376)
		if ((tmp)){
			HX_STACK_LINE(1378)
			::flixel::math::FlxRect tmp1 = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1378)
			::flixel::math::FlxRect _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1378)
			_this->x = X;
			HX_STACK_LINE(1378)
			_this->y = Y;
			HX_STACK_LINE(1378)
			_this->width = Width;
			HX_STACK_LINE(1378)
			_this->height = Height;
			HX_STACK_LINE(1378)
			_this;
		}
		HX_STACK_LINE(1381)
		Float tmp1 = X;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1381)
		Float tmp2 = (X + Width);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1381)
		Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1381)
		Float tmp4 = (Y + Height);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1381)
		this->setScrollBounds(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxCamera_obj,setScrollBoundsRect,(void))

Void FlxCamera_obj::setScrollBounds( Dynamic MinX,Dynamic MaxX,Dynamic MinY,Dynamic MaxY){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScrollBounds",0x4d9242bb,"flixel.FlxCamera.setScrollBounds","flixel/FlxCamera.hx",1394,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(MinX,"MinX")
		HX_STACK_ARG(MaxX,"MaxX")
		HX_STACK_ARG(MinY,"MinY")
		HX_STACK_ARG(MaxY,"MaxY")
		HX_STACK_LINE(1395)
		this->minScrollX = MinX;
		HX_STACK_LINE(1396)
		this->maxScrollX = MaxX;
		HX_STACK_LINE(1397)
		this->minScrollY = MinY;
		HX_STACK_LINE(1398)
		this->maxScrollY = MaxY;
		HX_STACK_LINE(1399)
		this->updateScroll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxCamera_obj,setScrollBounds,(void))

Void FlxCamera_obj::setScale( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.FlxCamera","setScale",0x46f35511,"flixel.FlxCamera.setScale","flixel/FlxCamera.hx",1403,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(1404)
		this->scaleX = X;
		HX_STACK_LINE(1405)
		this->scaleY = Y;
		HX_STACK_LINE(1407)
		Float tmp = this->scaleX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1407)
		::flixel::_system::scaleModes::BaseScaleMode tmp1 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1407)
		Float tmp2 = tmp1->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1407)
		Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1407)
		this->totalScaleX = tmp3;
		HX_STACK_LINE(1408)
		Float tmp4 = this->scaleY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1408)
		::flixel::_system::scaleModes::BaseScaleMode tmp5 = ::flixel::FlxG_obj::scaleMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1408)
		Float tmp6 = tmp5->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1408)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1408)
		this->totalScaleY = tmp7;
		HX_STACK_LINE(1410)
		bool tmp8 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1410)
		if ((tmp8)){
			HX_STACK_LINE(1412)
			::openfl::_legacy::display::Bitmap tmp9 = this->_flashBitmap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1412)
			Float tmp10 = this->totalScaleX;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1412)
			tmp9->set_scaleX(tmp10);
			HX_STACK_LINE(1413)
			::openfl::_legacy::display::Bitmap tmp11 = this->_flashBitmap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1413)
			Float tmp12 = this->totalScaleY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1413)
			tmp11->set_scaleY(tmp12);
		}
		else{
			HX_STACK_LINE(1417)
			::openfl::_legacy::geom::Matrix tmp9 = this->_transform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1417)
			tmp9->identity();
			HX_STACK_LINE(1418)
			::openfl::_legacy::geom::Matrix tmp10 = this->_transform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1418)
			Float tmp11 = this->totalScaleX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1418)
			Float tmp12 = this->totalScaleY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1418)
			tmp10->scale(tmp11,tmp12);
		}
		HX_STACK_LINE(1421)
		this->updateFlashSpritePosition();
		HX_STACK_LINE(1422)
		this->updateScrollRect();
		HX_STACK_LINE(1423)
		this->updateInternalSpritePositions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxCamera_obj,setScale,(void))

Void FlxCamera_obj::onResize( ){
{
		HX_STACK_FRAME("flixel.FlxCamera","onResize",0xa8186dfc,"flixel.FlxCamera.onResize","flixel/FlxCamera.hx",1427,0xe7aeb95a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1428)
		this->updateFlashOffset();
		HX_STACK_LINE(1429)
		Float tmp = this->scaleX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1429)
		Float tmp1 = this->scaleY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1429)
		this->setScale(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxCamera_obj,onResize,(void))

Float FlxCamera_obj::set_followLerp( Float Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_followLerp",0xf2f9b78e,"flixel.FlxCamera.set_followLerp","flixel/FlxCamera.hx",1433,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1434)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1434)
	{
		HX_STACK_LINE(1434)
		int tmp1 = ::flixel::FlxG_obj::updateFramerate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1434)
		Float tmp2 = (Float((int)60) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1434)
		Dynamic Max = tmp2;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(1434)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1434)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1434)
		if ((tmp3)){
			HX_STACK_LINE(1434)
			tmp4 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(1434)
			tmp4 = false;
		}
		HX_STACK_LINE(1434)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1434)
		if ((tmp4)){
			HX_STACK_LINE(1434)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(1434)
			tmp5 = Value;
		}
		HX_STACK_LINE(1434)
		Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1434)
		bool tmp6 = (Max != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1434)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1434)
		if ((tmp6)){
			HX_STACK_LINE(1434)
			tmp7 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(1434)
			tmp7 = false;
		}
		HX_STACK_LINE(1434)
		if ((tmp7)){
			HX_STACK_LINE(1434)
			tmp = Max;
		}
		else{
			HX_STACK_LINE(1434)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1434)
	Float tmp1 = this->followLerp = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1434)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_followLerp,return )

int FlxCamera_obj::set_width( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_width",0x2386b8c0,"flixel.FlxCamera.set_width","flixel/FlxCamera.hx",1438,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1439)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1439)
	if ((tmp)){
		HX_STACK_LINE(1441)
		this->width = Value;
		HX_STACK_LINE(1443)
		this->updateFlashOffset();
		HX_STACK_LINE(1444)
		this->updateScrollRect();
		HX_STACK_LINE(1445)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1447)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1447)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_width,return )

int FlxCamera_obj::set_height( int Value){
	HX_STACK_FRAME("flixel.FlxCamera","set_height",0xa8aa67ed,"flixel.FlxCamera.set_height","flixel/FlxCamera.hx",1451,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(1452)
	bool tmp = (Value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1452)
	if ((tmp)){
		HX_STACK_LINE(1454)
		this->height = Value;
		HX_STACK_LINE(1456)
		this->updateFlashOffset();
		HX_STACK_LINE(1457)
		this->updateScrollRect();
		HX_STACK_LINE(1458)
		this->updateInternalSpritePositions();
	}
	HX_STACK_LINE(1460)
	int tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1460)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_height,return )

Float FlxCamera_obj::set_zoom( Float Zoom){
	HX_STACK_FRAME("flixel.FlxCamera","set_zoom",0x3f00d599,"flixel.FlxCamera.set_zoom","flixel/FlxCamera.hx",1464,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Zoom,"Zoom")
	HX_STACK_LINE(1465)
	bool tmp = (Zoom == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1465)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1465)
	if ((tmp)){
		HX_STACK_LINE(1465)
		tmp1 = ::flixel::FlxCamera_obj::defaultZoom;
	}
	else{
		HX_STACK_LINE(1465)
		tmp1 = Zoom;
	}
	HX_STACK_LINE(1465)
	this->zoom = tmp1;
	HX_STACK_LINE(1466)
	Float tmp2 = this->zoom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1466)
	Float tmp3 = this->zoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1466)
	this->setScale(tmp2,tmp3);
	HX_STACK_LINE(1467)
	Float tmp4 = this->zoom;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1467)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_zoom,return )

Float FlxCamera_obj::set_alpha( Float Alpha){
	HX_STACK_FRAME("flixel.FlxCamera","set_alpha",0x7abaaa18,"flixel.FlxCamera.set_alpha","flixel/FlxCamera.hx",1471,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(1472)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1472)
	{
		HX_STACK_LINE(1472)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1472)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1472)
		if ((tmp1)){
			HX_STACK_LINE(1472)
			tmp2 = (Alpha < (int)0);
		}
		else{
			HX_STACK_LINE(1472)
			tmp2 = false;
		}
		HX_STACK_LINE(1472)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1472)
		if ((tmp2)){
			HX_STACK_LINE(1472)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(1472)
			tmp3 = Alpha;
		}
		HX_STACK_LINE(1472)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(1472)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1472)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1472)
		if ((tmp4)){
			HX_STACK_LINE(1472)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(1472)
			tmp5 = false;
		}
		HX_STACK_LINE(1472)
		if ((tmp5)){
			HX_STACK_LINE(1472)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(1472)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(1472)
	this->alpha = ((Float)(tmp));
	HX_STACK_LINE(1473)
	bool tmp1 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1473)
	if ((tmp1)){
		HX_STACK_LINE(1475)
		::openfl::_legacy::display::Bitmap tmp2 = this->_flashBitmap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1475)
		Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1475)
		tmp2->set_alpha(tmp3);
	}
	else{
		HX_STACK_LINE(1479)
		::openfl::_legacy::display::Sprite tmp2 = this->canvas;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1479)
		Float tmp3 = Alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1479)
		tmp2->set_alpha(tmp3);
	}
	HX_STACK_LINE(1481)
	Float tmp2 = Alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1481)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_alpha,return )

Float FlxCamera_obj::set_angle( Float Angle){
	HX_STACK_FRAME("flixel.FlxCamera","set_angle",0x7c06468d,"flixel.FlxCamera.set_angle","flixel/FlxCamera.hx",1485,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(1486)
	this->angle = Angle;
	HX_STACK_LINE(1487)
	::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1487)
	Float tmp1 = Angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1487)
	tmp->set_rotation(tmp1);
	HX_STACK_LINE(1488)
	Float tmp2 = Angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1488)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_angle,return )

int FlxCamera_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.FlxCamera","set_color",0xa380741d,"flixel.FlxCamera.set_color","flixel/FlxCamera.hx",1492,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(1493)
	this->color = Color;
	HX_STACK_LINE(1494)
	::openfl::_legacy::geom::ColorTransform colorTransform;		HX_STACK_VAR(colorTransform,"colorTransform");
	HX_STACK_LINE(1496)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1496)
	if ((tmp)){
		HX_STACK_LINE(1498)
		::openfl::_legacy::display::Bitmap tmp1 = this->_flashBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1498)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1498)
		if ((tmp2)){
			HX_STACK_LINE(1500)
			int tmp3 = Color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1500)
			return tmp3;
		}
		HX_STACK_LINE(1502)
		::openfl::_legacy::display::Bitmap tmp3 = this->_flashBitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1502)
		::openfl::_legacy::geom::Transform tmp4 = tmp3->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1502)
		::openfl::_legacy::geom::ColorTransform tmp5 = tmp4->get_colorTransform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1502)
		colorTransform = tmp5;
	}
	else{
		HX_STACK_LINE(1506)
		::openfl::_legacy::display::Sprite tmp1 = this->canvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1506)
		::openfl::_legacy::geom::Transform tmp2 = tmp1->get_transform();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1506)
		::openfl::_legacy::geom::ColorTransform tmp3 = tmp2->get_colorTransform();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1506)
		colorTransform = tmp3;
	}
	HX_STACK_LINE(1509)
	int tmp1 = this->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1509)
	int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1509)
	int tmp3 = (int(tmp2) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1509)
	int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1509)
	Float tmp5 = (Float(tmp4) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1509)
	colorTransform->redMultiplier = tmp5;
	HX_STACK_LINE(1510)
	int tmp6 = this->color;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1510)
	int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1510)
	int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1510)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1510)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1510)
	colorTransform->greenMultiplier = tmp10;
	HX_STACK_LINE(1511)
	int tmp11 = this->color;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1511)
	int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1511)
	int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1511)
	Float tmp14 = (Float(tmp13) / Float((int)255));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1511)
	colorTransform->blueMultiplier = tmp14;
	HX_STACK_LINE(1513)
	bool tmp15 = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1513)
	if ((tmp15)){
		HX_STACK_LINE(1515)
		::openfl::_legacy::display::Bitmap tmp16 = this->_flashBitmap;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1515)
		::openfl::_legacy::geom::Transform tmp17 = tmp16->get_transform();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1515)
		::openfl::_legacy::geom::ColorTransform tmp18 = colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1515)
		tmp17->set_colorTransform(tmp18);
	}
	else{
		HX_STACK_LINE(1519)
		::openfl::_legacy::display::Sprite tmp16 = this->canvas;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1519)
		::openfl::_legacy::geom::Transform tmp17 = tmp16->get_transform();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1519)
		::openfl::_legacy::geom::ColorTransform tmp18 = colorTransform;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1519)
		tmp17->set_colorTransform(tmp18);
	}
	HX_STACK_LINE(1522)
	int tmp16 = Color;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1522)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_color,return )

bool FlxCamera_obj::set_antialiasing( bool Antialiasing){
	HX_STACK_FRAME("flixel.FlxCamera","set_antialiasing",0x0f9a3f7a,"flixel.FlxCamera.set_antialiasing","flixel/FlxCamera.hx",1526,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Antialiasing,"Antialiasing")
	HX_STACK_LINE(1527)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(1528)
	bool tmp = ::flixel::FlxG_obj::renderBlit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1528)
	if ((tmp)){
		HX_STACK_LINE(1530)
		::openfl::_legacy::display::Bitmap tmp1 = this->_flashBitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1530)
		bool tmp2 = Antialiasing;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1530)
		tmp1->set_smoothing(tmp2);
	}
	HX_STACK_LINE(1532)
	bool tmp1 = Antialiasing;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1532)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_antialiasing,return )

Float FlxCamera_obj::set_x( Float x){
	HX_STACK_FRAME("flixel.FlxCamera","set_x",0x9f099e32,"flixel.FlxCamera.set_x","flixel/FlxCamera.hx",1536,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(1537)
	this->x = x;
	HX_STACK_LINE(1538)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1539)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1539)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_x,return )

Float FlxCamera_obj::set_y( Float y){
	HX_STACK_FRAME("flixel.FlxCamera","set_y",0x9f099e33,"flixel.FlxCamera.set_y","flixel/FlxCamera.hx",1543,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(1544)
	this->y = y;
	HX_STACK_LINE(1545)
	this->updateFlashSpritePosition();
	HX_STACK_LINE(1546)
	Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1546)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxCamera_obj,set_y,return )

bool FlxCamera_obj::set_visible( bool visible){
	HX_STACK_FRAME("flixel.FlxCamera","set_visible",0x8f5a1dac,"flixel.FlxCamera.set_visible","flixel/FlxCamera.hx",1550,0xe7aeb95a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(visible,"visible")
	HX_STACK_LINE(1551)
	::openfl::_legacy::display::Sprite tmp = this->flashSprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1551)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1551)
	if ((tmp1)){
		HX_STACK_LINE(1553)
		::openfl::_legacy::display::Sprite tmp2 = this->flashSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1553)
		bool tmp3 = visible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1553)
		tmp2->set_visible(tmp3);
	}
	HX_STACK_LINE(1555)
	bool tmp2 = this->visible = visible;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1555)
	return tmp2;
}


Float FlxCamera_obj::defaultZoom;

Array< ::Dynamic > FlxCamera_obj::defaultCameras;

::flixel::graphics::tile::FlxDrawTilesItem FlxCamera_obj::_storageTilesHead;

::flixel::graphics::tile::FlxDrawTrianglesItem FlxCamera_obj::_storageTrianglesHead;

Array< Float > FlxCamera_obj::drawVertices;

::openfl::_legacy::display::Sprite FlxCamera_obj::trianglesSprite;

::flixel::math::FlxPoint FlxCamera_obj::renderPoint;

::flixel::math::FlxRect FlxCamera_obj::renderRect;


FlxCamera_obj::FlxCamera_obj()
{
}

void FlxCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCamera);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_MARK_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(targetOffset,"targetOffset");
	HX_MARK_MEMBER_NAME(followLerp,"followLerp");
	HX_MARK_MEMBER_NAME(deadzone,"deadzone");
	HX_MARK_MEMBER_NAME(minScrollX,"minScrollX");
	HX_MARK_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_MARK_MEMBER_NAME(minScrollY,"minScrollY");
	HX_MARK_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(regen,"regen");
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(screen,"screen");
	HX_MARK_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_MARK_MEMBER_NAME(flashSprite,"flashSprite");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(followLead,"followLead");
	HX_MARK_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_MARK_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_MARK_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_MARK_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_MARK_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_MARK_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_MARK_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_MARK_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_MARK_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_MARK_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_MARK_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_MARK_MEMBER_NAME(_fxFadeCompleted,"_fxFadeCompleted");
	HX_MARK_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_MARK_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_MARK_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_MARK_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_MARK_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_MARK_MEMBER_NAME(_fxShakeAxes,"_fxShakeAxes");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_filters,"_filters");
	HX_MARK_MEMBER_NAME(initialZoom,"initialZoom");
	HX_MARK_MEMBER_NAME(_fill,"_fill");
	HX_MARK_MEMBER_NAME(_flashBitmap,"_flashBitmap");
	HX_MARK_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_helperMatrix,"_helperMatrix");
	HX_MARK_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_MARK_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_MARK_MEMBER_NAME(_headTiles,"_headTiles");
	HX_MARK_MEMBER_NAME(_headTriangles,"_headTriangles");
	::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(totalScaleX,"totalScaleX");
	HX_VISIT_MEMBER_NAME(totalScaleY,"totalScaleY");
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(targetOffset,"targetOffset");
	HX_VISIT_MEMBER_NAME(followLerp,"followLerp");
	HX_VISIT_MEMBER_NAME(deadzone,"deadzone");
	HX_VISIT_MEMBER_NAME(minScrollX,"minScrollX");
	HX_VISIT_MEMBER_NAME(maxScrollX,"maxScrollX");
	HX_VISIT_MEMBER_NAME(minScrollY,"minScrollY");
	HX_VISIT_MEMBER_NAME(maxScrollY,"maxScrollY");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(regen,"regen");
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	HX_VISIT_MEMBER_NAME(useBgAlphaBlending,"useBgAlphaBlending");
	HX_VISIT_MEMBER_NAME(flashSprite,"flashSprite");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(followLead,"followLead");
	HX_VISIT_MEMBER_NAME(filtersEnabled,"filtersEnabled");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashOffset,"_flashOffset");
	HX_VISIT_MEMBER_NAME(_fxFlashColor,"_fxFlashColor");
	HX_VISIT_MEMBER_NAME(_fxFlashDuration,"_fxFlashDuration");
	HX_VISIT_MEMBER_NAME(_fxFlashComplete,"_fxFlashComplete");
	HX_VISIT_MEMBER_NAME(_fxFlashAlpha,"_fxFlashAlpha");
	HX_VISIT_MEMBER_NAME(_fxFadeColor,"_fxFadeColor");
	HX_VISIT_MEMBER_NAME(_lastTargetPosition,"_lastTargetPosition");
	HX_VISIT_MEMBER_NAME(_scrollTarget,"_scrollTarget");
	HX_VISIT_MEMBER_NAME(_fxFadeDuration,"_fxFadeDuration");
	HX_VISIT_MEMBER_NAME(_fxFadeIn,"_fxFadeIn");
	HX_VISIT_MEMBER_NAME(_fxFadeComplete,"_fxFadeComplete");
	HX_VISIT_MEMBER_NAME(_fxFadeCompleted,"_fxFadeCompleted");
	HX_VISIT_MEMBER_NAME(_fxFadeAlpha,"_fxFadeAlpha");
	HX_VISIT_MEMBER_NAME(_fxShakeIntensity,"_fxShakeIntensity");
	HX_VISIT_MEMBER_NAME(_fxShakeDuration,"_fxShakeDuration");
	HX_VISIT_MEMBER_NAME(_fxShakeComplete,"_fxShakeComplete");
	HX_VISIT_MEMBER_NAME(_fxShakeOffset,"_fxShakeOffset");
	HX_VISIT_MEMBER_NAME(_fxShakeAxes,"_fxShakeAxes");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_filters,"_filters");
	HX_VISIT_MEMBER_NAME(initialZoom,"initialZoom");
	HX_VISIT_MEMBER_NAME(_fill,"_fill");
	HX_VISIT_MEMBER_NAME(_flashBitmap,"_flashBitmap");
	HX_VISIT_MEMBER_NAME(_scrollRect,"_scrollRect");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_helperMatrix,"_helperMatrix");
	HX_VISIT_MEMBER_NAME(_currentDrawItem,"_currentDrawItem");
	HX_VISIT_MEMBER_NAME(_headOfDrawStack,"_headOfDrawStack");
	HX_VISIT_MEMBER_NAME(_headTiles,"_headTiles");
	HX_VISIT_MEMBER_NAME(_headTriangles,"_headTriangles");
	::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxCamera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		if (HX_FIELD_EQ(inName,"fade") ) { return fade_dyn(); }
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"regen") ) { return regen; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"_fill") ) { return _fill; }
		if (HX_FIELD_EQ(inName,"flash") ) { return flash_dyn(); }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"canvas") ) { return canvas; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		if (HX_FIELD_EQ(inName,"stopFX") ) { return stopFX_dyn(); }
		if (HX_FIELD_EQ(inName,"drawFX") ) { return drawFX_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { return _bounds; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { return deadzone; }
		if (HX_FIELD_EQ(inName,"_filters") ) { return _filters; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { return _fxFadeIn; }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { return followLerp; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { return minScrollX; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { return maxScrollX; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { return minScrollY; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { return maxScrollY; }
		if (HX_FIELD_EQ(inName,"followLead") ) { return followLead; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { return _headTiles; }
		if (HX_FIELD_EQ(inName,"drawPixels") ) { return drawPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFade") ) { return updateFade_dyn(); }
		if (HX_FIELD_EQ(inName,"setFilters") ) { return setFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { return totalScaleX; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { return totalScaleY; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { return flashSprite; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { return initialZoom; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { return _scrollRect; }
		if (HX_FIELD_EQ(inName,"updateFlash") ) { return updateFlash_dyn(); }
		if (HX_FIELD_EQ(inName,"updateShake") ) { return updateShake_dyn(); }
		if (HX_FIELD_EQ(inName,"checkResize") ) { return checkResize_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { return targetOffset; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return antialiasing; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { return _flashOffset; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { return _fxFadeColor; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { return _fxFadeAlpha; }
		if (HX_FIELD_EQ(inName,"_fxShakeAxes") ) { return _fxShakeAxes; }
		if (HX_FIELD_EQ(inName,"_flashBitmap") ) { return _flashBitmap; }
		if (HX_FIELD_EQ(inName,"updateScroll") ) { return updateScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFollow") ) { return updateFollow_dyn(); }
		if (HX_FIELD_EQ(inName,"completeFade") ) { return completeFade_dyn(); }
		if (HX_FIELD_EQ(inName,"snapToTarget") ) { return snapToTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { return _fxFlashColor; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { return _fxFlashAlpha; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { return _scrollTarget; }
		if (HX_FIELD_EQ(inName,"_helperMatrix") ) { return _helperMatrix; }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { return filtersEnabled; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { return _fxShakeOffset; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { return _headTriangles; }
		if (HX_FIELD_EQ(inName,"startQuadBatch") ) { return startQuadBatch_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDrawStack") ) { return clearDrawStack_dyn(); }
		if (HX_FIELD_EQ(inName,"set_followLerp") ) { return set_followLerp_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { return _fxFadeDuration; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { return _fxFadeComplete; }
		if (HX_FIELD_EQ(inName,"setScrollBounds") ) { return setScrollBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { return _fxFlashDuration; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { return _fxFlashComplete; }
		if (HX_FIELD_EQ(inName,"_fxFadeCompleted") ) { return _fxFadeCompleted; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { return _fxShakeDuration; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { return _fxShakeComplete; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { return _currentDrawItem; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { return _headOfDrawStack; }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return updateScrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return set_antialiasing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { return _fxShakeIntensity; }
		if (HX_FIELD_EQ(inName,"updateFlashOffset") ) { return updateFlashOffset_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { return useBgAlphaBlending; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return pixelPerfectRender; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { return _lastTargetPosition; }
		if (HX_FIELD_EQ(inName,"startTrianglesBatch") ) { return startTrianglesBatch_dyn(); }
		if (HX_FIELD_EQ(inName,"setScrollBoundsRect") ) { return setScrollBoundsRect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getNewDrawTrianglesItem") ) { return getNewDrawTrianglesItem_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateFlashSpritePosition") ) { return updateFlashSpritePosition_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"updateInternalSpritePositions") ) { return updateInternalSpritePositions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxCamera_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderRect") ) { outValue = renderRect; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { outValue = defaultZoom; return true;  }
		if (HX_FIELD_EQ(inName,"renderPoint") ) { outValue = renderPoint; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertices") ) { outValue = drawVertices; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { outValue = defaultCameras; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trianglesSprite") ) { outValue = trianglesSprite; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { outValue = _storageTilesHead; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { outValue = _storageTrianglesHead; return true;  }
	}
	return false;
}

Dynamic FlxCamera_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp == hx::paccAlways) return set_zoom(inValue);zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::flixel::FlxCameraFollowStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regen") ) { regen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue);width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue);alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue);color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fill") ) { _fill=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue);height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadzone") ) { deadzone=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filters") ) { _filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_fxFadeIn") ) { _fxFadeIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"followLerp") ) { if (inCallProp == hx::paccAlways) return set_followLerp(inValue);followLerp=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollX") ) { minScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollX") ) { maxScrollX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minScrollY") ) { minScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollY") ) { maxScrollY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followLead") ) { followLead=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTiles") ) { _headTiles=inValue.Cast< ::flixel::graphics::tile::FlxDrawTilesItem >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalScaleX") ) { totalScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"totalScaleY") ) { totalScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flashSprite") ) { flashSprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initialZoom") ) { initialZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollRect") ) { _scrollRect=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"targetOffset") ) { targetOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == hx::paccAlways) return set_antialiasing(inValue);antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashOffset") ) { _flashOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeColor") ) { _fxFadeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeAlpha") ) { _fxFadeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeAxes") ) { _fxShakeAxes=inValue.Cast< ::flixel::util::FlxAxes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashBitmap") ) { _flashBitmap=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fxFlashColor") ) { _fxFlashColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashAlpha") ) { _fxFlashAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTarget") ) { _scrollTarget=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperMatrix") ) { _helperMatrix=inValue.Cast< ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"filtersEnabled") ) { filtersEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeOffset") ) { _fxShakeOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headTriangles") ) { _headTriangles=inValue.Cast< ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fxFadeDuration") ) { _fxFadeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeComplete") ) { _fxFadeComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_fxFlashDuration") ) { _fxFlashDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFlashComplete") ) { _fxFlashComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxFadeCompleted") ) { _fxFadeCompleted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeDuration") ) { _fxShakeDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fxShakeComplete") ) { _fxShakeComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentDrawItem") ) { _currentDrawItem=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_headOfDrawStack") ) { _headOfDrawStack=inValue.Cast< ::flixel::graphics::tile::FlxDrawBaseItem >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_fxShakeIntensity") ) { _fxShakeIntensity=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useBgAlphaBlending") ) { useBgAlphaBlending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_lastTargetPosition") ) { _lastTargetPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxCamera_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"renderRect") ) { renderRect=ioValue.Cast< ::flixel::math::FlxRect >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultZoom") ) { defaultZoom=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"renderPoint") ) { renderPoint=ioValue.Cast< ::flixel::math::FlxPoint >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawVertices") ) { drawVertices=ioValue.Cast< Array< Float > >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultCameras") ) { defaultCameras=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"trianglesSprite") ) { trianglesSprite=ioValue.Cast< ::openfl::_legacy::display::Sprite >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_storageTilesHead") ) { _storageTilesHead=ioValue.Cast< ::flixel::graphics::tile::FlxDrawTilesItem >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_storageTrianglesHead") ) { _storageTrianglesHead=ioValue.Cast< ::flixel::graphics::tile::FlxDrawTrianglesItem >(); return true; }
	}
	return false;
}

void FlxCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("totalScaleX","\x72","\xdd","\x5b","\x02"));
	outFields->push(HX_HCSTRING("totalScaleY","\x73","\xdd","\x5b","\x02"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("targetOffset","\xc4","\xd1","\xc3","\x1c"));
	outFields->push(HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"));
	outFields->push(HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"));
	outFields->push(HX_HCSTRING("minScrollX","\x39","\x80","\x8f","\xf6"));
	outFields->push(HX_HCSTRING("maxScrollX","\x67","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("minScrollY","\x3a","\x80","\x8f","\xf6"));
	outFields->push(HX_HCSTRING("maxScrollY","\x68","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("regen","\xbd","\x2e","\xbf","\xe6"));
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"));
	outFields->push(HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"));
	outFields->push(HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"));
	outFields->push(HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));
	outFields->push(HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"));
	outFields->push(HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"));
	outFields->push(HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"));
	outFields->push(HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"));
	outFields->push(HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"));
	outFields->push(HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"));
	outFields->push(HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"));
	outFields->push(HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"));
	outFields->push(HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"));
	outFields->push(HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"));
	outFields->push(HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"));
	outFields->push(HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"));
	outFields->push(HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"));
	outFields->push(HX_HCSTRING("_fxFadeCompleted","\x3e","\x8a","\xd9","\xa9"));
	outFields->push(HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"));
	outFields->push(HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"));
	outFields->push(HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"));
	outFields->push(HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"));
	outFields->push(HX_HCSTRING("_fxShakeAxes","\x5a","\x79","\xf0","\x5e"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"));
	outFields->push(HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d"));
	outFields->push(HX_HCSTRING("_fill","\x62","\xea","\xcc","\xf6"));
	outFields->push(HX_HCSTRING("_flashBitmap","\xc0","\xcb","\x8d","\x87"));
	outFields->push(HX_HCSTRING("_scrollRect","\xf0","\xa8","\xf0","\xdb"));
	outFields->push(HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"));
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"));
	outFields->push(HX_HCSTRING("_helperMatrix","\x2e","\x81","\xce","\xde"));
	outFields->push(HX_HCSTRING("_currentDrawItem","\x11","\x6b","\x5a","\x19"));
	outFields->push(HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"));
	outFields->push(HX_HCSTRING("_headTiles","\x06","\xac","\x50","\xff"));
	outFields->push(HX_HCSTRING("_headTriangles","\xac","\xb3","\x7c","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleX),HX_HCSTRING("totalScaleX","\x72","\xdd","\x5b","\x02")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,totalScaleY),HX_HCSTRING("totalScaleY","\x73","\xdd","\x5b","\x02")},
	{hx::fsObject /*::flixel::FlxCameraFollowStyle*/ ,(int)offsetof(FlxCamera_obj,style),HX_HCSTRING("style","\x31","\xa5","\x1d","\x84")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxCamera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,targetOffset),HX_HCSTRING("targetOffset","\xc4","\xd1","\xc3","\x1c")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,followLerp),HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxCamera_obj,deadzone),HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollX),HX_HCSTRING("minScrollX","\x39","\x80","\x8f","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollX),HX_HCSTRING("maxScrollX","\x67","\xad","\xfc","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,minScrollY),HX_HCSTRING("minScrollY","\x3a","\x80","\x8f","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,maxScrollY),HX_HCSTRING("maxScrollY","\x68","\xad","\xfc","\x9a")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,scroll),HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxCamera_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,regen),HX_HCSTRING("regen","\xbd","\x2e","\xbf","\xe6")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,bgColor),HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxCamera_obj,screen),HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,useBgAlphaBlending),HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,flashSprite),HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,pixelPerfectRender),HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,zoom),HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,antialiasing),HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,followLead),HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,filtersEnabled),HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxCamera_obj,_flashRect),HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxCamera_obj,_flashPoint),HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_flashOffset),HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFlashColor),HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashDuration),HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFlashComplete),HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFlashAlpha),HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3")},
	{hx::fsInt,(int)offsetof(FlxCamera_obj,_fxFadeColor),HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_lastTargetPosition),HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_scrollTarget),HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeDuration),HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeIn),HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxFadeComplete),HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b")},
	{hx::fsBool,(int)offsetof(FlxCamera_obj,_fxFadeCompleted),HX_HCSTRING("_fxFadeCompleted","\x3e","\x8a","\xd9","\xa9")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxFadeAlpha),HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeIntensity),HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,_fxShakeDuration),HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxCamera_obj,_fxShakeComplete),HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_fxShakeOffset),HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93")},
	{hx::fsObject /*::flixel::util::FlxAxes*/ ,(int)offsetof(FlxCamera_obj,_fxShakeAxes),HX_HCSTRING("_fxShakeAxes","\x5a","\x79","\xf0","\x5e")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxCamera_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxCamera_obj,_filters),HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42")},
	{hx::fsFloat,(int)offsetof(FlxCamera_obj,initialZoom),HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxCamera_obj,_fill),HX_HCSTRING("_fill","\x62","\xea","\xcc","\xf6")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(FlxCamera_obj,_flashBitmap),HX_HCSTRING("_flashBitmap","\xc0","\xcb","\x8d","\x87")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,_scrollRect),HX_HCSTRING("_scrollRect","\xf0","\xa8","\xf0","\xdb")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxCamera_obj,_bounds),HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxCamera_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(FlxCamera_obj,_transform),HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1")},
	{hx::fsObject /*::flixel::math::FlxMatrix*/ ,(int)offsetof(FlxCamera_obj,_helperMatrix),HX_HCSTRING("_helperMatrix","\x2e","\x81","\xce","\xde")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxCamera_obj,_currentDrawItem),HX_HCSTRING("_currentDrawItem","\x11","\x6b","\x5a","\x19")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawBaseItem*/ ,(int)offsetof(FlxCamera_obj,_headOfDrawStack),HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTilesItem*/ ,(int)offsetof(FlxCamera_obj,_headTiles),HX_HCSTRING("_headTiles","\x06","\xac","\x50","\xff")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTrianglesItem*/ ,(int)offsetof(FlxCamera_obj,_headTriangles),HX_HCSTRING("_headTriangles","\xac","\xb3","\x7c","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &FlxCamera_obj::defaultZoom,HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &FlxCamera_obj::defaultCameras,HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTilesItem*/ ,(void *) &FlxCamera_obj::_storageTilesHead,HX_HCSTRING("_storageTilesHead","\xe9","\xa8","\x61","\xaf")},
	{hx::fsObject /*::flixel::graphics::tile::FlxDrawTrianglesItem*/ ,(void *) &FlxCamera_obj::_storageTrianglesHead,HX_HCSTRING("_storageTrianglesHead","\x0f","\x09","\x78","\x17")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxCamera_obj::drawVertices,HX_HCSTRING("drawVertices","\x1d","\x4c","\x09","\x40")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &FlxCamera_obj::trianglesSprite,HX_HCSTRING("trianglesSprite","\x10","\xd3","\x45","\xab")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(void *) &FlxCamera_obj::renderPoint,HX_HCSTRING("renderPoint","\x1a","\xe1","\x40","\x92")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(void *) &FlxCamera_obj::renderRect,HX_HCSTRING("renderRect","\x9a","\x47","\xb1","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("totalScaleX","\x72","\xdd","\x5b","\x02"),
	HX_HCSTRING("totalScaleY","\x73","\xdd","\x5b","\x02"),
	HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("targetOffset","\xc4","\xd1","\xc3","\x1c"),
	HX_HCSTRING("followLerp","\x88","\xdc","\x83","\xd9"),
	HX_HCSTRING("deadzone","\xd0","\x12","\x55","\x6d"),
	HX_HCSTRING("minScrollX","\x39","\x80","\x8f","\xf6"),
	HX_HCSTRING("maxScrollX","\x67","\xad","\xfc","\x9a"),
	HX_HCSTRING("minScrollY","\x3a","\x80","\x8f","\xf6"),
	HX_HCSTRING("maxScrollY","\x68","\xad","\xfc","\x9a"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("regen","\xbd","\x2e","\xbf","\xe6"),
	HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("useBgAlphaBlending","\x23","\x25","\x12","\xb2"),
	HX_HCSTRING("flashSprite","\xd5","\xe9","\x0d","\xf4"),
	HX_HCSTRING("pixelPerfectRender","\xdd","\x59","\x4f","\x2f"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"),
	HX_HCSTRING("followLead","\xad","\xcd","\x83","\xd9"),
	HX_HCSTRING("filtersEnabled","\x06","\x08","\x9b","\x18"),
	HX_HCSTRING("_flashRect","\xb5","\xc2","\xf3","\x5d"),
	HX_HCSTRING("_flashPoint","\x9f","\x1d","\x2a","\xb7"),
	HX_HCSTRING("_flashOffset","\x64","\x53","\xc1","\xf6"),
	HX_HCSTRING("_fxFlashColor","\x64","\x98","\x14","\xdc"),
	HX_HCSTRING("_fxFlashDuration","\xf3","\x7e","\xd1","\x2d"),
	HX_HCSTRING("_fxFlashComplete","\x58","\x70","\x0b","\x99"),
	HX_HCSTRING("_fxFlashAlpha","\x5f","\xce","\x4e","\xb3"),
	HX_HCSTRING("_fxFadeColor","\x96","\x44","\xa8","\xb9"),
	HX_HCSTRING("_lastTargetPosition","\x2f","\xd6","\x08","\xc4"),
	HX_HCSTRING("_scrollTarget","\x1d","\xda","\x1d","\xc1"),
	HX_HCSTRING("_fxFadeDuration","\x01","\xfe","\xdd","\x9f"),
	HX_HCSTRING("_fxFadeIn","\xd2","\xda","\xfe","\xa8"),
	HX_HCSTRING("_fxFadeComplete","\x66","\xef","\x17","\x0b"),
	HX_HCSTRING("_fxFadeCompleted","\x3e","\x8a","\xd9","\xa9"),
	HX_HCSTRING("_fxFadeAlpha","\x91","\x7a","\xe2","\x90"),
	HX_HCSTRING("_fxShakeIntensity","\x5e","\x86","\x94","\x7a"),
	HX_HCSTRING("_fxShakeDuration","\x09","\x2e","\x72","\x36"),
	HX_HCSTRING("_fxShakeComplete","\x6e","\x1f","\xac","\xa1"),
	HX_HCSTRING("_fxShakeOffset","\x08","\x2f","\x77","\x93"),
	HX_HCSTRING("_fxShakeAxes","\x5a","\x79","\xf0","\x5e"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_filters","\x3c","\xfb","\xfe","\x42"),
	HX_HCSTRING("initialZoom","\xb7","\x71","\x1d","\x2d"),
	HX_HCSTRING("_fill","\x62","\xea","\xcc","\xf6"),
	HX_HCSTRING("_flashBitmap","\xc0","\xcb","\x8d","\x87"),
	HX_HCSTRING("_scrollRect","\xf0","\xa8","\xf0","\xdb"),
	HX_HCSTRING("_bounds","\x14","\x98","\x94","\xd4"),
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"),
	HX_HCSTRING("_helperMatrix","\x2e","\x81","\xce","\xde"),
	HX_HCSTRING("_currentDrawItem","\x11","\x6b","\x5a","\x19"),
	HX_HCSTRING("_headOfDrawStack","\xce","\xc5","\x68","\xac"),
	HX_HCSTRING("_headTiles","\x06","\xac","\x50","\xff"),
	HX_HCSTRING("_headTriangles","\xac","\xb3","\x7c","\x97"),
	HX_HCSTRING("startQuadBatch","\xb1","\xbc","\x12","\x5e"),
	HX_HCSTRING("startTrianglesBatch","\x11","\x0b","\xb7","\x6e"),
	HX_HCSTRING("getNewDrawTrianglesItem","\xf0","\xc3","\x0a","\x12"),
	HX_HCSTRING("clearDrawStack","\x57","\xf1","\x1b","\x0a"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("drawPixels","\x51","\x6a","\x6d","\xce"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateScroll","\xf6","\x7e","\x28","\x47"),
	HX_HCSTRING("updateFollow","\x5a","\x38","\x5a","\xf9"),
	HX_HCSTRING("updateFlash","\xe7","\x9e","\x24","\xe8"),
	HX_HCSTRING("updateFade","\x25","\xa0","\x6a","\xfc"),
	HX_HCSTRING("completeFade","\xd5","\x32","\x78","\xb7"),
	HX_HCSTRING("updateShake","\xfd","\x47","\xb5","\x61"),
	HX_HCSTRING("updateFlashSpritePosition","\x15","\x1f","\x55","\xdf"),
	HX_HCSTRING("updateFlashOffset","\xda","\x51","\x21","\xf5"),
	HX_HCSTRING("updateScrollRect","\x3a","\xab","\x52","\x53"),
	HX_HCSTRING("updateInternalSpritePositions","\x1f","\x1f","\xf9","\x76"),
	HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"),
	HX_HCSTRING("snapToTarget","\x96","\x07","\x43","\x96"),
	HX_HCSTRING("focusOn","\x17","\x4b","\x83","\x41"),
	HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02"),
	HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("stopFX","\xd4","\xb1","\x39","\x0f"),
	HX_HCSTRING("setFilters","\x39","\xc6","\x25","\x5c"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("drawFX","\x56","\x72","\xd6","\xdf"),
	HX_HCSTRING("checkResize","\xdc","\x2c","\x8d","\xea"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	HX_HCSTRING("setScrollBoundsRect","\x68","\x88","\x5d","\x8e"),
	HX_HCSTRING("setScrollBounds","\x24","\xad","\x95","\xdc"),
	HX_HCSTRING("setScale","\x88","\x37","\x03","\x87"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("set_followLerp","\x45","\x4d","\x99","\x6f"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("set_antialiasing","\xf1","\xf0","\x93","\xa3"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::drawVertices,"drawVertices");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::trianglesSprite,"trianglesSprite");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::renderPoint,"renderPoint");
	HX_MARK_MEMBER_NAME(FlxCamera_obj::renderRect,"renderRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultZoom,"defaultZoom");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::defaultCameras,"defaultCameras");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTilesHead,"_storageTilesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::_storageTrianglesHead,"_storageTrianglesHead");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::drawVertices,"drawVertices");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::trianglesSprite,"trianglesSprite");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::renderPoint,"renderPoint");
	HX_VISIT_MEMBER_NAME(FlxCamera_obj::renderRect,"renderRect");
};

#endif

hx::Class FlxCamera_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultZoom","\x74","\x9c","\xb7","\x22"),
	HX_HCSTRING("defaultCameras","\x6d","\xe3","\x71","\x12"),
	HX_HCSTRING("_storageTilesHead","\xe9","\xa8","\x61","\xaf"),
	HX_HCSTRING("_storageTrianglesHead","\x0f","\x09","\x78","\x17"),
	HX_HCSTRING("drawVertices","\x1d","\x4c","\x09","\x40"),
	HX_HCSTRING("trianglesSprite","\x10","\xd3","\x45","\xab"),
	HX_HCSTRING("renderPoint","\x1a","\xe1","\x40","\x92"),
	HX_HCSTRING("renderRect","\x9a","\x47","\xb1","\xe8"),
	::String(null()) };

void FlxCamera_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.FlxCamera","\x05","\x18","\xe2","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxCamera_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxCamera_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxCamera_obj >;
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

void FlxCamera_obj::__boot()
{
struct _Function_0_1{
	inline static Array< Float > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",361,0xe7aeb95a)
		{
			HX_STACK_LINE(361)
			Array< Float > this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(361)
			this1 = Array_obj< Float >::__new();
			HX_STACK_LINE(361)
			this1->__SetSizeExact(null());
			HX_STACK_LINE(361)
			return this1;
		}
		return null();
	}
};
	drawVertices= _Function_0_1::Block();
	trianglesSprite= ::openfl::_legacy::display::Sprite_obj::__new();
struct _Function_0_2{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",364,0xe7aeb95a)
		{
			HX_STACK_LINE(364)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(364)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(364)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(364)
			::flixel::math::FlxPoint tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(364)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(364)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			::flixel::math::FlxPoint tmp4 = tmp1->set(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(364)
			::flixel::math::FlxPoint point = tmp4;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(364)
			point->_inPool = false;
			HX_STACK_LINE(364)
			return point;
		}
		return null();
	}
};
	renderPoint= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::flixel::math::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxCamera.hx",365,0xe7aeb95a)
		{
			HX_STACK_LINE(365)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(365)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(365)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(365)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(365)
			::flixel::math::FlxRect tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(365)
			{
				HX_STACK_LINE(365)
				::flixel::util::FlxPool_flixel_math_FlxRect tmp1 = ::flixel::math::FlxRect_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(365)
				::flixel::math::FlxRect tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(365)
				::flixel::math::FlxRect _this = tmp2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(365)
				_this->x = X;
				HX_STACK_LINE(365)
				_this->y = Y;
				HX_STACK_LINE(365)
				_this->width = Width;
				HX_STACK_LINE(365)
				_this->height = Height;
				HX_STACK_LINE(365)
				tmp = _this;
			}
			HX_STACK_LINE(365)
			::flixel::math::FlxRect rect = tmp;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(365)
			rect->_inPool = false;
			HX_STACK_LINE(365)
			return rect;
		}
		return null();
	}
};
	renderRect= _Function_0_3::Block();
}

} // end namespace flixel
