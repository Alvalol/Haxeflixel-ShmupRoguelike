#ifndef INCLUDED_flixel_ui_FlxBar
#define INCLUDED_flixel_ui_FlxBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxBarFillDirection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace flixel{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxBar_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxBar_obj OBJ_;
		FlxBar_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.ui.FlxBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxBar_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::flixel::ui::FlxBarFillDirection direction,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic parentRef,::String __o_variable,hx::Null< Float >  __o_min,hx::Null< Float >  __o_max,hx::Null< bool >  __o_showBorder);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxBar_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxBar","\xa1","\xec","\xc5","\x7b"); }

		bool fixedPosition;
		Float pxPerPercent;
		::flixel::math::FlxPoint positionOffset;
		bool killOnEmpty;
		Float value;
		Float min;
		Float max;
		Float range;
		Float pct;
		Dynamic emptyCallback;
		Dynamic &emptyCallback_dyn() { return emptyCallback;}
		Dynamic filledCallback;
		Dynamic &filledCallback_dyn() { return filledCallback;}
		Dynamic parent;
		::String parentVariable;
		int barWidth;
		int barHeight;
		::flixel::graphics::frames::FlxImageFrame frontFrames;
		::flixel::ui::FlxBarFillDirection fillDirection;
		bool _fillHorizontal;
		::flixel::graphics::frames::FlxFrame _frontFrame;
		::flixel::math::FlxRect _filledFlxRect;
		::openfl::_legacy::display::BitmapData _emptyBar;
		::openfl::_legacy::geom::Rectangle _emptyBarRect;
		::openfl::_legacy::display::BitmapData _filledBar;
		::openfl::_legacy::geom::Point _zeroOffset;
		::openfl::_legacy::geom::Rectangle _filledBarRect;
		::openfl::_legacy::geom::Point _filledBarPoint;
		virtual Void destroy( );

		virtual Void trackParent( int offsetX,int offsetY);
		Dynamic trackParent_dyn();

		virtual Void setParent( Dynamic parentRef,::String variable,hx::Null< bool >  track,hx::Null< int >  offsetX,hx::Null< int >  offsetY);
		Dynamic setParent_dyn();

		virtual Void stopTrackingParent( int posX,int posY);
		Dynamic stopTrackingParent_dyn();

		virtual Void setCallbacks( Dynamic onEmpty,Dynamic onFilled,hx::Null< bool >  killOnEmpty);
		Dynamic setCallbacks_dyn();

		virtual Void setRange( Float min,Float max);
		Dynamic setRange_dyn();

		virtual ::flixel::ui::FlxBar createFilledBar( int empty,int fill,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createFilledBar_dyn();

		virtual ::flixel::ui::FlxBar createColoredEmptyBar( int empty,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createColoredEmptyBar_dyn();

		virtual ::flixel::ui::FlxBar createColoredFilledBar( int fill,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createColoredFilledBar_dyn();

		virtual ::flixel::ui::FlxBar createGradientBar( Array< int > empty,Array< int > fill,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createGradientBar_dyn();

		virtual ::flixel::ui::FlxBar createGradientEmptyBar( Array< int > empty,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createGradientEmptyBar_dyn();

		virtual ::flixel::ui::FlxBar createGradientFilledBar( Array< int > fill,hx::Null< int >  chunkSize,hx::Null< int >  rotation,hx::Null< bool >  showBorder,hx::Null< int >  border);
		Dynamic createGradientFilledBar_dyn();

		virtual ::flixel::ui::FlxBar createImageBar( Dynamic empty,Dynamic fill,hx::Null< int >  emptyBackground,hx::Null< int >  fillBackground);
		Dynamic createImageBar_dyn();

		virtual ::flixel::ui::FlxBar createImageEmptyBar( Dynamic empty,hx::Null< int >  emptyBackground);
		Dynamic createImageEmptyBar_dyn();

		virtual ::flixel::ui::FlxBar createImageFilledBar( Dynamic fill,hx::Null< int >  fillBackground);
		Dynamic createImageFilledBar_dyn();

		virtual ::flixel::ui::FlxBarFillDirection set_fillDirection( ::flixel::ui::FlxBarFillDirection direction);
		Dynamic set_fillDirection_dyn();

		virtual Void updateValueFromParent( );
		Dynamic updateValueFromParent_dyn();

		virtual Void updateBar( );
		Dynamic updateBar_dyn();

		virtual Void updateEmptyBar( );
		Dynamic updateEmptyBar_dyn();

		virtual Void updateFilledBar( );
		Dynamic updateFilledBar_dyn();

		virtual Void update( Float elapsed);

		virtual Void draw( );

		virtual ::openfl::_legacy::display::BitmapData set_pixels( ::openfl::_legacy::display::BitmapData Pixels);

		virtual ::String toString( );

		virtual Float get_percent( );
		Dynamic get_percent_dyn();

		virtual Float set_percent( Float newPct);
		Dynamic set_percent_dyn();

		virtual Float set_value( Float newValue);
		Dynamic set_value_dyn();

		virtual Float get_value( );
		Dynamic get_value_dyn();

		virtual ::flixel::graphics::frames::FlxImageFrame get_frontFrames( );
		Dynamic get_frontFrames_dyn();

		virtual ::flixel::graphics::frames::FlxImageFrame set_frontFrames( ::flixel::graphics::frames::FlxImageFrame value);
		Dynamic set_frontFrames_dyn();

		virtual ::flixel::graphics::frames::FlxImageFrame get_backFrames( );
		Dynamic get_backFrames_dyn();

		virtual ::flixel::graphics::frames::FlxImageFrame set_backFrames( ::flixel::graphics::frames::FlxImageFrame value);
		Dynamic set_backFrames_dyn();

};

} // end namespace flixel
} // end namespace ui

#endif /* INCLUDED_flixel_ui_FlxBar */ 
