#ifndef INCLUDED_flixel_FlxCamera
#define INCLUDED_flixel_FlxCamera

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxCameraFollowStyle)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawBaseItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTilesItem)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxDrawTrianglesItem)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxCamera_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxCamera_obj OBJ_;
		FlxCamera_obj();
		Void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.FlxCamera")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxCamera_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_Zoom);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxCamera_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxCamera","\x97","\x40","\x7b","\x39"); }

		static void __boot();
		static Float defaultZoom;
		static Array< ::Dynamic > defaultCameras;
		static ::flixel::graphics::tile::FlxDrawTilesItem _storageTilesHead;
		static ::flixel::graphics::tile::FlxDrawTrianglesItem _storageTrianglesHead;
		static Array< Float > drawVertices;
		static ::openfl::_legacy::display::Sprite trianglesSprite;
		static ::flixel::math::FlxPoint renderPoint;
		static ::flixel::math::FlxRect renderRect;
		Float x;
		Float y;
		Float scaleX;
		Float scaleY;
		Float totalScaleX;
		Float totalScaleY;
		::flixel::FlxCameraFollowStyle style;
		::flixel::FlxObject target;
		::flixel::math::FlxPoint targetOffset;
		Float followLerp;
		::flixel::math::FlxRect deadzone;
		Dynamic minScrollX;
		Dynamic maxScrollX;
		Dynamic minScrollY;
		Dynamic maxScrollY;
		::flixel::math::FlxPoint scroll;
		::openfl::_legacy::display::BitmapData buffer;
		bool regen;
		int bgColor;
		::flixel::FlxSprite screen;
		bool useBgAlphaBlending;
		::openfl::_legacy::display::Sprite flashSprite;
		bool pixelPerfectRender;
		int width;
		int height;
		Float zoom;
		Float alpha;
		Float angle;
		int color;
		bool antialiasing;
		::flixel::math::FlxPoint followLead;
		bool filtersEnabled;
		::openfl::_legacy::geom::Rectangle _flashRect;
		::openfl::_legacy::geom::Point _flashPoint;
		::flixel::math::FlxPoint _flashOffset;
		int _fxFlashColor;
		Float _fxFlashDuration;
		Dynamic _fxFlashComplete;
		Dynamic &_fxFlashComplete_dyn() { return _fxFlashComplete;}
		Float _fxFlashAlpha;
		int _fxFadeColor;
		::flixel::math::FlxPoint _lastTargetPosition;
		::flixel::math::FlxPoint _scrollTarget;
		Float _fxFadeDuration;
		bool _fxFadeIn;
		Dynamic _fxFadeComplete;
		Dynamic &_fxFadeComplete_dyn() { return _fxFadeComplete;}
		bool _fxFadeCompleted;
		Float _fxFadeAlpha;
		Float _fxShakeIntensity;
		Float _fxShakeDuration;
		Dynamic _fxShakeComplete;
		Dynamic &_fxShakeComplete_dyn() { return _fxShakeComplete;}
		::flixel::math::FlxPoint _fxShakeOffset;
		::flixel::util::FlxAxes _fxShakeAxes;
		::flixel::math::FlxPoint _point;
		Array< ::Dynamic > _filters;
		Float initialZoom;
		::openfl::_legacy::display::BitmapData _fill;
		::openfl::_legacy::display::Bitmap _flashBitmap;
		::openfl::_legacy::display::Sprite _scrollRect;
		::flixel::math::FlxRect _bounds;
		::openfl::_legacy::display::Sprite canvas;
		::openfl::_legacy::geom::Matrix _transform;
		::flixel::math::FlxMatrix _helperMatrix;
		::flixel::graphics::tile::FlxDrawBaseItem _currentDrawItem;
		::flixel::graphics::tile::FlxDrawBaseItem _headOfDrawStack;
		::flixel::graphics::tile::FlxDrawTilesItem _headTiles;
		::flixel::graphics::tile::FlxDrawTrianglesItem _headTriangles;
		virtual ::flixel::graphics::tile::FlxDrawTilesItem startQuadBatch( ::flixel::graphics::FlxGraphic graphic,bool colored,hx::Null< bool >  hasColorOffsets,::openfl::_legacy::display::BlendMode blend,hx::Null< bool >  smooth);
		Dynamic startQuadBatch_dyn();

		virtual ::flixel::graphics::tile::FlxDrawTrianglesItem startTrianglesBatch( ::flixel::graphics::FlxGraphic graphic,hx::Null< bool >  smoothing,hx::Null< bool >  isColored,::openfl::_legacy::display::BlendMode blend);
		Dynamic startTrianglesBatch_dyn();

		virtual ::flixel::graphics::tile::FlxDrawTrianglesItem getNewDrawTrianglesItem( ::flixel::graphics::FlxGraphic graphic,hx::Null< bool >  smoothing,hx::Null< bool >  isColored,::openfl::_legacy::display::BlendMode blend);
		Dynamic getNewDrawTrianglesItem_dyn();

		virtual Void clearDrawStack( );
		Dynamic clearDrawStack_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void drawPixels( ::flixel::graphics::frames::FlxFrame frame,::openfl::_legacy::display::BitmapData pixels,::flixel::math::FlxMatrix matrix,::openfl::_legacy::geom::ColorTransform transform,::openfl::_legacy::display::BlendMode blend,Dynamic smoothing);
		Dynamic drawPixels_dyn();

		virtual Void copyPixels( ::flixel::graphics::frames::FlxFrame frame,::openfl::_legacy::display::BitmapData pixels,::openfl::_legacy::geom::Rectangle sourceRect,::openfl::_legacy::geom::Point destPoint,::openfl::_legacy::geom::ColorTransform transform,::openfl::_legacy::display::BlendMode blend,Dynamic smoothing);
		Dynamic copyPixels_dyn();

		virtual Void drawTriangles( ::flixel::graphics::FlxGraphic graphic,Array< Float > vertices,Array< int > indices,Array< Float > uvtData,Array< int > colors,::flixel::math::FlxPoint position,::openfl::_legacy::display::BlendMode blend,hx::Null< bool >  repeat,hx::Null< bool >  smoothing);
		Dynamic drawTriangles_dyn();

		virtual Void destroy( );

		virtual Void update( Float elapsed);

		virtual Void updateScroll( );
		Dynamic updateScroll_dyn();

		virtual Void updateFollow( );
		Dynamic updateFollow_dyn();

		virtual Void updateFlash( Float elapsed);
		Dynamic updateFlash_dyn();

		virtual Void updateFade( Float elapsed);
		Dynamic updateFade_dyn();

		virtual Void completeFade( );
		Dynamic completeFade_dyn();

		virtual Void updateShake( Float elapsed);
		Dynamic updateShake_dyn();

		virtual Void updateFlashSpritePosition( );
		Dynamic updateFlashSpritePosition_dyn();

		virtual Void updateFlashOffset( );
		Dynamic updateFlashOffset_dyn();

		virtual Void updateScrollRect( );
		Dynamic updateScrollRect_dyn();

		virtual Void updateInternalSpritePositions( );
		Dynamic updateInternalSpritePositions_dyn();

		virtual Void follow( ::flixel::FlxObject Target,::flixel::FlxCameraFollowStyle Style,Dynamic Lerp);
		Dynamic follow_dyn();

		virtual Void snapToTarget( );
		Dynamic snapToTarget_dyn();

		virtual Void focusOn( ::flixel::math::FlxPoint point);
		Dynamic focusOn_dyn();

		virtual Void flash( hx::Null< int >  Color,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic flash_dyn();

		virtual Void fade( hx::Null< int >  Color,hx::Null< Float >  Duration,hx::Null< bool >  FadeIn,Dynamic OnComplete,hx::Null< bool >  Force);
		Dynamic fade_dyn();

		virtual Void shake( hx::Null< Float >  Intensity,hx::Null< Float >  Duration,Dynamic OnComplete,hx::Null< bool >  Force,::flixel::util::FlxAxes Axes);
		Dynamic shake_dyn();

		virtual Void stopFX( );
		Dynamic stopFX_dyn();

		virtual Void setFilters( Array< ::Dynamic > filters);
		Dynamic setFilters_dyn();

		virtual ::flixel::FlxCamera copyFrom( ::flixel::FlxCamera Camera);
		Dynamic copyFrom_dyn();

		virtual Void fill( int Color,hx::Null< bool >  BlendAlpha,hx::Null< Float >  FxAlpha,::openfl::_legacy::display::Graphics graphics);
		Dynamic fill_dyn();

		virtual Void drawFX( );
		Dynamic drawFX_dyn();

		virtual Void checkResize( );
		Dynamic checkResize_dyn();

		virtual Void setSize( int Width,int Height);
		Dynamic setSize_dyn();

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Void setScrollBoundsRect( hx::Null< Float >  X,hx::Null< Float >  Y,hx::Null< Float >  Width,hx::Null< Float >  Height,hx::Null< bool >  UpdateWorld);
		Dynamic setScrollBoundsRect_dyn();

		virtual Void setScrollBounds( Dynamic MinX,Dynamic MaxX,Dynamic MinY,Dynamic MaxY);
		Dynamic setScrollBounds_dyn();

		virtual Void setScale( Float X,Float Y);
		Dynamic setScale_dyn();

		virtual Void onResize( );
		Dynamic onResize_dyn();

		virtual Float set_followLerp( Float Value);
		Dynamic set_followLerp_dyn();

		virtual int set_width( int Value);
		Dynamic set_width_dyn();

		virtual int set_height( int Value);
		Dynamic set_height_dyn();

		virtual Float set_zoom( Float Zoom);
		Dynamic set_zoom_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		virtual Float set_angle( Float Angle);
		Dynamic set_angle_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual bool set_antialiasing( bool Antialiasing);
		Dynamic set_antialiasing_dyn();

		virtual Float set_x( Float x);
		Dynamic set_x_dyn();

		virtual Float set_y( Float y);
		Dynamic set_y_dyn();

		virtual bool set_visible( bool visible);

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxCamera */ 
