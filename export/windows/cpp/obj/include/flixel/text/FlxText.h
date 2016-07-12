#ifndef INCLUDED_flixel_text_FlxText
#define INCLUDED_flixel_text_FlxText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,atlas,FlxAtlas)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,text,FlxTextBorderStyle)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormatMarkerPair)
HX_DECLARE_CLASS3(flixel,text,_FlxText,FlxTextFormatRange)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  FlxText_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxText_obj OBJ_;
		FlxText_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.text.FlxText")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxText_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxText_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxText","\x1f","\x06","\x52","\xdd"); }

		static void __boot();
		static int VERTICAL_GUTTER;
		::String text;
		::flixel::text::FlxTextBorderStyle borderStyle;
		int borderColor;
		Float borderSize;
		Float borderQuality;
		::openfl::_legacy::text::TextField textField;
		::flixel::math::FlxPoint shadowOffset;
		::openfl::_legacy::text::TextFormat _defaultFormat;
		::openfl::_legacy::text::TextFormat _formatAdjusted;
		Array< ::Dynamic > _formatRanges;
		::String _font;
		bool _regen;
		::openfl::_legacy::display::BitmapData _borderPixels;
		::openfl::_legacy::geom::ColorTransform _borderColorTransform;
		bool _hasBorderAlpha;
		virtual Void destroy( );

		virtual Void drawFrame( hx::Null< bool >  Force);

		virtual bool stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas);
		Dynamic stampOnAtlas_dyn();

		virtual ::flixel::text::FlxText applyMarkup( ::String input,Array< ::Dynamic > rules);
		Dynamic applyMarkup_dyn();

		virtual ::flixel::text::FlxText addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  Start,hx::Null< int >  End);
		Dynamic addFormat_dyn();

		virtual ::flixel::text::FlxText removeFormat( ::flixel::text::FlxTextFormat Format,Dynamic Start,Dynamic End);
		Dynamic removeFormat_dyn();

		virtual ::flixel::text::FlxText clearFormats( );
		Dynamic clearFormats_dyn();

		virtual ::flixel::text::FlxText setFormat( ::String Font,hx::Null< int >  Size,hx::Null< int >  Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  BorderColor,hx::Null< bool >  Embedded);
		Dynamic setFormat_dyn();

		virtual ::flixel::text::FlxText setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  Color,hx::Null< Float >  Size,hx::Null< Float >  Quality);
		Dynamic setBorderStyle_dyn();

		virtual Float set_fieldWidth( Float value);
		Dynamic set_fieldWidth_dyn();

		virtual Float get_fieldWidth( );
		Dynamic get_fieldWidth_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

		virtual bool get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual ::String set_text( ::String Text);
		Dynamic set_text_dyn();

		virtual int get_size( );
		Dynamic get_size_dyn();

		virtual int set_size( int Size);
		Dynamic set_size_dyn();

		virtual int set_color( int Color);

		virtual ::String get_font( );
		Dynamic get_font_dyn();

		virtual ::String set_font( ::String Font);
		Dynamic set_font_dyn();

		virtual bool get_embedded( );
		Dynamic get_embedded_dyn();

		virtual ::String get_systemFont( );
		Dynamic get_systemFont_dyn();

		virtual ::String set_systemFont( ::String Font);
		Dynamic set_systemFont_dyn();

		virtual bool get_bold( );
		Dynamic get_bold_dyn();

		virtual bool set_bold( bool value);
		Dynamic set_bold_dyn();

		virtual bool get_italic( );
		Dynamic get_italic_dyn();

		virtual bool set_italic( bool value);
		Dynamic set_italic_dyn();

		virtual bool get_wordWrap( );
		Dynamic get_wordWrap_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		virtual ::String get_alignment( );
		Dynamic get_alignment_dyn();

		virtual ::String set_alignment( ::String Alignment);
		Dynamic set_alignment_dyn();

		virtual ::flixel::text::FlxTextBorderStyle set_borderStyle( ::flixel::text::FlxTextBorderStyle style);
		Dynamic set_borderStyle_dyn();

		virtual int set_borderColor( int Color);
		Dynamic set_borderColor_dyn();

		virtual Float set_borderSize( Float Value);
		Dynamic set_borderSize_dyn();

		virtual Float set_borderQuality( Float Value);
		Dynamic set_borderQuality_dyn();

		virtual ::flixel::graphics::FlxGraphic set_graphic( ::flixel::graphics::FlxGraphic Value);

		virtual Float get_width( );

		virtual Float get_height( );

		virtual Void updateColorTransform( );

		virtual Void regenGraphic( );
		Dynamic regenGraphic_dyn();

		virtual Void avoidSingleLineBlur( );
		Dynamic avoidSingleLineBlur_dyn();

		virtual Void draw( );

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);

		virtual Void applyBorderStyle( );
		Dynamic applyBorderStyle_dyn();

		virtual Void applyBorderTransparency( );
		Dynamic applyBorderTransparency_dyn();

		virtual Void copyTextWithOffset( Float x,Float y);
		Dynamic copyTextWithOffset_dyn();

		virtual Void applyFormats( ::openfl::_legacy::text::TextFormat FormatAdjusted,hx::Null< bool >  UseBorderColor);
		Dynamic applyFormats_dyn();

		virtual Void copyTextFormat( ::openfl::_legacy::text::TextFormat from,::openfl::_legacy::text::TextFormat to,hx::Null< bool >  withAlign);
		Dynamic copyTextFormat_dyn();

		virtual ::openfl::_legacy::text::TextFormat dtfCopy( );
		Dynamic dtfCopy_dyn();

		virtual Void updateDefaultFormat( );
		Dynamic updateDefaultFormat_dyn();

		virtual ::flixel::graphics::frames::FlxFramesCollection set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames);

};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxText */ 
