#ifndef INCLUDED_flixel_FlxSprite
#define INCLUDED_flixel_FlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxSprite_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef FlxSprite_obj OBJ_;
		FlxSprite_obj();
		Void __construct(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.FlxSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxSprite_obj > __new(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSprite","\xf7","\xd5","\x84","\x45"); }

		::flixel::animation::FlxAnimationController animation;
		::openfl::_legacy::display::BitmapData framePixels;
		bool useFramePixels;
		bool antialiasing;
		bool dirty;
		::flixel::graphics::frames::FlxFrame frame;
		int frameWidth;
		int frameHeight;
		int numFrames;
		::flixel::graphics::frames::FlxFramesCollection frames;
		::flixel::graphics::FlxGraphic graphic;
		Float bakedRotationAngle;
		Float alpha;
		int facing;
		bool flipX;
		bool flipY;
		::flixel::math::FlxPoint origin;
		::flixel::math::FlxPoint offset;
		::flixel::math::FlxPoint scale;
		::openfl::_legacy::display::BlendMode blend;
		int color;
		::openfl::_legacy::geom::ColorTransform colorTransform;
		bool useColorTransform;
		::flixel::math::FlxRect clipRect;
		::flixel::graphics::frames::FlxFrame _frame;
		::flixel::graphics::FlxGraphic _frameGraphic;
		int _facingHorizontalMult;
		int _facingVerticalMult;
		::openfl::_legacy::geom::Point _flashPoint;
		::openfl::_legacy::geom::Rectangle _flashRect;
		::openfl::_legacy::geom::Rectangle _flashRect2;
		::openfl::_legacy::geom::Point _flashPointZero;
		::flixel::math::FlxMatrix _matrix;
		::flixel::math::FlxPoint _halfSize;
		Float _sinAngle;
		Float _cosAngle;
		bool _angleChanged;
		::haxe::ds::IntMap _facingFlip;
		virtual Void initVars( );

		virtual Void destroy( );

		virtual ::flixel::FlxSprite clone( );
		Dynamic clone_dyn();

		virtual ::flixel::FlxSprite loadGraphicFromSprite( ::flixel::FlxSprite Sprite);
		Dynamic loadGraphicFromSprite_dyn();

		virtual ::flixel::FlxSprite loadGraphic( Dynamic Graphic,hx::Null< bool >  Animated,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< bool >  Unique,::String Key);
		Dynamic loadGraphic_dyn();

		virtual ::flixel::FlxSprite loadRotatedGraphic( Dynamic Graphic,hx::Null< int >  Rotations,hx::Null< int >  Frame,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer,::String Key);
		Dynamic loadRotatedGraphic_dyn();

		virtual ::flixel::FlxSprite loadRotatedFrame( ::flixel::graphics::frames::FlxFrame Frame,hx::Null< int >  Rotations,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer);
		Dynamic loadRotatedFrame_dyn();

		virtual ::flixel::FlxSprite makeGraphic( int Width,int Height,hx::Null< int >  Color,hx::Null< bool >  Unique,::String Key);
		Dynamic makeGraphic_dyn();

		virtual Void graphicLoaded( );
		Dynamic graphicLoaded_dyn();

		virtual Void resetSize( );
		Dynamic resetSize_dyn();

		virtual Void resetFrameSize( );
		Dynamic resetFrameSize_dyn();

		virtual Void resetSizeFromFrame( );
		Dynamic resetSizeFromFrame_dyn();

		virtual Void resetFrame( );
		Dynamic resetFrame_dyn();

		virtual Void setGraphicSize( hx::Null< int >  Width,hx::Null< int >  Height);
		Dynamic setGraphicSize_dyn();

		virtual Void updateHitbox( );
		Dynamic updateHitbox_dyn();

		virtual Void resetHelpers( );
		Dynamic resetHelpers_dyn();

		virtual Void update( Float elapsed);

		virtual Void updateAnimation( Float elapsed);
		Dynamic updateAnimation_dyn();

		virtual Void draw( );

		virtual Void drawSimple( ::flixel::FlxCamera camera);
		Dynamic drawSimple_dyn();

		virtual Void drawComplex( ::flixel::FlxCamera camera);
		Dynamic drawComplex_dyn();

		virtual Void stamp( ::flixel::FlxSprite Brush,hx::Null< int >  X,hx::Null< int >  Y);
		Dynamic stamp_dyn();

		virtual Void drawFrame( hx::Null< bool >  Force);
		Dynamic drawFrame_dyn();

		virtual Void centerOffsets( hx::Null< bool >  AdjustPosition);
		Dynamic centerOffsets_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual Array< ::Dynamic > replaceColor( int Color,int NewColor,hx::Null< bool >  FetchPositions);
		Dynamic replaceColor_dyn();

		virtual Void setColorTransform( hx::Null< Float >  redMultiplier,hx::Null< Float >  greenMultiplier,hx::Null< Float >  blueMultiplier,hx::Null< Float >  alphaMultiplier,hx::Null< int >  redOffset,hx::Null< int >  greenOffset,hx::Null< int >  blueOffset,hx::Null< int >  alphaOffset);
		Dynamic setColorTransform_dyn();

		virtual Void updateColorTransform( );
		Dynamic updateColorTransform_dyn();

		virtual bool pixelsOverlapPoint( ::flixel::math::FlxPoint point,hx::Null< int >  Mask,::flixel::FlxCamera Camera);
		Dynamic pixelsOverlapPoint_dyn();

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);
		Dynamic calcFrame_dyn();

		virtual ::openfl::_legacy::display::BitmapData updateFramePixels( );
		Dynamic updateFramePixels_dyn();

		virtual ::flixel::math::FlxPoint getGraphicMidpoint( ::flixel::math::FlxPoint point);
		Dynamic getGraphicMidpoint_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera Camera);

		virtual bool isSimpleRender( ::flixel::FlxCamera camera);
		Dynamic isSimpleRender_dyn();

		virtual bool isSimpleRenderBlit( ::flixel::FlxCamera camera);
		Dynamic isSimpleRenderBlit_dyn();

		virtual Void setFacingFlip( int Direction,bool FlipX,bool FlipY);
		Dynamic setFacingFlip_dyn();

		virtual ::flixel::FlxSprite setFrames( ::flixel::graphics::frames::FlxFramesCollection Frames,hx::Null< bool >  saveAnimations);
		Dynamic setFrames_dyn();

		virtual ::openfl::_legacy::display::BitmapData get_pixels( );
		Dynamic get_pixels_dyn();

		virtual ::openfl::_legacy::display::BitmapData set_pixels( ::openfl::_legacy::display::BitmapData Pixels);
		Dynamic set_pixels_dyn();

		virtual ::flixel::graphics::frames::FlxFrame set_frame( ::flixel::graphics::frames::FlxFrame Value);
		Dynamic set_frame_dyn();

		virtual int set_facing( int Direction);
		Dynamic set_facing_dyn();

		virtual Float set_alpha( Float Alpha);
		Dynamic set_alpha_dyn();

		virtual int set_color( int Color);
		Dynamic set_color_dyn();

		virtual Float set_angle( Float Value);

		virtual Void updateTrig( );
		Dynamic updateTrig_dyn();

		virtual ::openfl::_legacy::display::BlendMode set_blend( ::openfl::_legacy::display::BlendMode Value);
		Dynamic set_blend_dyn();

		virtual ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic Value);
		Dynamic set_graphic_dyn();

		virtual ::flixel::math::FlxRect set_clipRect( ::flixel::math::FlxRect rect);
		Dynamic set_clipRect_dyn();

		virtual ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames);
		Dynamic set_frames_dyn();

		virtual bool set_flipX( bool Value);
		Dynamic set_flipX_dyn();

		virtual bool set_flipY( bool Value);
		Dynamic set_flipY_dyn();

		virtual bool set_antialiasing( bool value);
		Dynamic set_antialiasing_dyn();

		virtual bool set_useFramePixels( bool value);
		Dynamic set_useFramePixels_dyn();

		virtual bool checkFlipX( );
		Dynamic checkFlipX_dyn();

		virtual bool checkFlipY( );
		Dynamic checkFlipY_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxSprite */ 
