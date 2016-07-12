#ifndef INCLUDED_openfl__legacy_text_TextField
#define INCLUDED_openfl__legacy_text_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFieldAutoSize)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextLineMetrics)
namespace openfl{
namespace _legacy{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextField_obj : public ::openfl::_legacy::display::InteractiveObject_obj{
	public:
		typedef ::openfl::_legacy::display::InteractiveObject_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.text.TextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"); }

		static void __boot();
		static Dynamic lime_text_field_create;
		static Dynamic &lime_text_field_create_dyn() { return lime_text_field_create;}
		static Dynamic lime_text_field_get_text;
		static Dynamic &lime_text_field_get_text_dyn() { return lime_text_field_get_text;}
		static Dynamic lime_text_field_set_text;
		static Dynamic &lime_text_field_set_text_dyn() { return lime_text_field_set_text;}
		static Dynamic lime_text_field_get_html_text;
		static Dynamic &lime_text_field_get_html_text_dyn() { return lime_text_field_get_html_text;}
		static Dynamic lime_text_field_set_html_text;
		static Dynamic &lime_text_field_set_html_text_dyn() { return lime_text_field_set_html_text;}
		static Dynamic lime_text_field_get_text_color;
		static Dynamic &lime_text_field_get_text_color_dyn() { return lime_text_field_get_text_color;}
		static Dynamic lime_text_field_set_text_color;
		static Dynamic &lime_text_field_set_text_color_dyn() { return lime_text_field_set_text_color;}
		static Dynamic lime_text_field_get_selectable;
		static Dynamic &lime_text_field_get_selectable_dyn() { return lime_text_field_get_selectable;}
		static Dynamic lime_text_field_set_selectable;
		static Dynamic &lime_text_field_set_selectable_dyn() { return lime_text_field_set_selectable;}
		static Dynamic lime_text_field_get_display_as_password;
		static Dynamic &lime_text_field_get_display_as_password_dyn() { return lime_text_field_get_display_as_password;}
		static Dynamic lime_text_field_set_display_as_password;
		static Dynamic &lime_text_field_set_display_as_password_dyn() { return lime_text_field_set_display_as_password;}
		static Dynamic lime_text_field_get_embed_fonts;
		static Dynamic &lime_text_field_get_embed_fonts_dyn() { return lime_text_field_get_embed_fonts;}
		static Dynamic lime_text_field_set_embed_fonts;
		static Dynamic &lime_text_field_set_embed_fonts_dyn() { return lime_text_field_set_embed_fonts;}
		static Dynamic lime_text_field_get_def_text_format;
		static Dynamic &lime_text_field_get_def_text_format_dyn() { return lime_text_field_get_def_text_format;}
		static Dynamic lime_text_field_set_def_text_format;
		static Dynamic &lime_text_field_set_def_text_format_dyn() { return lime_text_field_set_def_text_format;}
		static Dynamic lime_text_field_get_auto_size;
		static Dynamic &lime_text_field_get_auto_size_dyn() { return lime_text_field_get_auto_size;}
		static Dynamic lime_text_field_set_auto_size;
		static Dynamic &lime_text_field_set_auto_size_dyn() { return lime_text_field_set_auto_size;}
		static Dynamic lime_text_field_get_type;
		static Dynamic &lime_text_field_get_type_dyn() { return lime_text_field_get_type;}
		static Dynamic lime_text_field_set_type;
		static Dynamic &lime_text_field_set_type_dyn() { return lime_text_field_set_type;}
		static Dynamic lime_text_field_get_multiline;
		static Dynamic &lime_text_field_get_multiline_dyn() { return lime_text_field_get_multiline;}
		static Dynamic lime_text_field_set_multiline;
		static Dynamic &lime_text_field_set_multiline_dyn() { return lime_text_field_set_multiline;}
		static Dynamic lime_text_field_get_word_wrap;
		static Dynamic &lime_text_field_get_word_wrap_dyn() { return lime_text_field_get_word_wrap;}
		static Dynamic lime_text_field_set_word_wrap;
		static Dynamic &lime_text_field_set_word_wrap_dyn() { return lime_text_field_set_word_wrap;}
		static Dynamic lime_text_field_get_border;
		static Dynamic &lime_text_field_get_border_dyn() { return lime_text_field_get_border;}
		static Dynamic lime_text_field_set_border;
		static Dynamic &lime_text_field_set_border_dyn() { return lime_text_field_set_border;}
		static Dynamic lime_text_field_get_border_color;
		static Dynamic &lime_text_field_get_border_color_dyn() { return lime_text_field_get_border_color;}
		static Dynamic lime_text_field_set_border_color;
		static Dynamic &lime_text_field_set_border_color_dyn() { return lime_text_field_set_border_color;}
		static Dynamic lime_text_field_get_background;
		static Dynamic &lime_text_field_get_background_dyn() { return lime_text_field_get_background;}
		static Dynamic lime_text_field_set_background;
		static Dynamic &lime_text_field_set_background_dyn() { return lime_text_field_set_background;}
		static Dynamic lime_text_field_get_background_color;
		static Dynamic &lime_text_field_get_background_color_dyn() { return lime_text_field_get_background_color;}
		static Dynamic lime_text_field_set_background_color;
		static Dynamic &lime_text_field_set_background_color_dyn() { return lime_text_field_set_background_color;}
		static Dynamic lime_text_field_get_text_width;
		static Dynamic &lime_text_field_get_text_width_dyn() { return lime_text_field_get_text_width;}
		static Dynamic lime_text_field_get_text_height;
		static Dynamic &lime_text_field_get_text_height_dyn() { return lime_text_field_get_text_height;}
		static Dynamic lime_text_field_get_text_format;
		static Dynamic &lime_text_field_get_text_format_dyn() { return lime_text_field_get_text_format;}
		static Dynamic lime_text_field_set_text_format;
		static Dynamic &lime_text_field_set_text_format_dyn() { return lime_text_field_set_text_format;}
		static Dynamic lime_text_field_get_max_scroll_v;
		static Dynamic &lime_text_field_get_max_scroll_v_dyn() { return lime_text_field_get_max_scroll_v;}
		static Dynamic lime_text_field_get_max_scroll_h;
		static Dynamic &lime_text_field_get_max_scroll_h_dyn() { return lime_text_field_get_max_scroll_h;}
		static Dynamic lime_text_field_get_bottom_scroll_v;
		static Dynamic &lime_text_field_get_bottom_scroll_v_dyn() { return lime_text_field_get_bottom_scroll_v;}
		static Dynamic lime_text_field_get_scroll_h;
		static Dynamic &lime_text_field_get_scroll_h_dyn() { return lime_text_field_get_scroll_h;}
		static Dynamic lime_text_field_set_scroll_h;
		static Dynamic &lime_text_field_set_scroll_h_dyn() { return lime_text_field_set_scroll_h;}
		static Dynamic lime_text_field_get_scroll_v;
		static Dynamic &lime_text_field_get_scroll_v_dyn() { return lime_text_field_get_scroll_v;}
		static Dynamic lime_text_field_set_scroll_v;
		static Dynamic &lime_text_field_set_scroll_v_dyn() { return lime_text_field_set_scroll_v;}
		static Dynamic lime_text_field_get_num_lines;
		static Dynamic &lime_text_field_get_num_lines_dyn() { return lime_text_field_get_num_lines;}
		static Dynamic lime_text_field_get_max_chars;
		static Dynamic &lime_text_field_get_max_chars_dyn() { return lime_text_field_get_max_chars;}
		static Dynamic lime_text_field_set_max_chars;
		static Dynamic &lime_text_field_set_max_chars_dyn() { return lime_text_field_set_max_chars;}
		static Dynamic lime_text_field_get_line_text;
		static Dynamic &lime_text_field_get_line_text_dyn() { return lime_text_field_get_line_text;}
		static Dynamic lime_text_field_get_line_metrics;
		static Dynamic &lime_text_field_get_line_metrics_dyn() { return lime_text_field_get_line_metrics;}
		static Dynamic lime_text_field_get_line_offset;
		static Dynamic &lime_text_field_get_line_offset_dyn() { return lime_text_field_get_line_offset;}
		Dynamic antiAliasType;
		int bottomScrollV;
		Dynamic gridFitType;
		int maxScrollH;
		int maxScrollV;
		int numLines;
		Float sharpness;
		Float textHeight;
		Float textWidth;
		bool __embedFonts;
		virtual Void appendText( ::String text);
		Dynamic appendText_dyn();

		virtual int getLineOffset( int lineIndex);
		Dynamic getLineOffset_dyn();

		virtual ::String getLineText( int lineIndex);
		Dynamic getLineText_dyn();

		virtual ::openfl::_legacy::text::TextLineMetrics getLineMetrics( int lineIndex);
		Dynamic getLineMetrics_dyn();

		virtual ::openfl::_legacy::text::TextFormat getTextFormat( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic getTextFormat_dyn();

		virtual Void replaceText( int beginIndex,int endIndex,::String newText);
		Dynamic replaceText_dyn();

		virtual Void setSelection( int beginIndex,int endIndex);
		Dynamic setSelection_dyn();

		virtual Void setTextFormat( ::openfl::_legacy::text::TextFormat format,hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic setTextFormat_dyn();

		virtual ::openfl::_legacy::text::TextFieldAutoSize get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual ::openfl::_legacy::text::TextFieldAutoSize set_autoSize( ::openfl::_legacy::text::TextFieldAutoSize value);
		Dynamic set_autoSize_dyn();

		virtual bool get_background( );
		Dynamic get_background_dyn();

		virtual bool set_background( bool value);
		Dynamic set_background_dyn();

		virtual int get_backgroundColor( );
		Dynamic get_backgroundColor_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual bool get_border( );
		Dynamic get_border_dyn();

		virtual bool set_border( bool value);
		Dynamic set_border_dyn();

		virtual int get_borderColor( );
		Dynamic get_borderColor_dyn();

		virtual int set_borderColor( int value);
		Dynamic set_borderColor_dyn();

		virtual int get_bottomScrollV( );
		Dynamic get_bottomScrollV_dyn();

		virtual ::openfl::_legacy::text::TextFormat get_defaultTextFormat( );
		Dynamic get_defaultTextFormat_dyn();

		virtual ::openfl::_legacy::text::TextFormat set_defaultTextFormat( ::openfl::_legacy::text::TextFormat value);
		Dynamic set_defaultTextFormat_dyn();

		virtual bool get_displayAsPassword( );
		Dynamic get_displayAsPassword_dyn();

		virtual bool set_displayAsPassword( bool value);
		Dynamic set_displayAsPassword_dyn();

		virtual bool get_embedFonts( );
		Dynamic get_embedFonts_dyn();

		virtual bool set_embedFonts( bool value);
		Dynamic set_embedFonts_dyn();

		virtual ::String get_htmlText( );
		Dynamic get_htmlText_dyn();

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual int get_length( );
		Dynamic get_length_dyn();

		virtual int get_maxChars( );
		Dynamic get_maxChars_dyn();

		virtual int set_maxChars( int value);
		Dynamic set_maxChars_dyn();

		virtual int get_maxScrollH( );
		Dynamic get_maxScrollH_dyn();

		virtual int get_maxScrollV( );
		Dynamic get_maxScrollV_dyn();

		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual int get_numLines( );
		Dynamic get_numLines_dyn();

		virtual int get_scrollH( );
		Dynamic get_scrollH_dyn();

		virtual int set_scrollH( int value);
		Dynamic set_scrollH_dyn();

		virtual int get_scrollV( );
		Dynamic get_scrollV_dyn();

		virtual int set_scrollV( int value);
		Dynamic set_scrollV_dyn();

		virtual bool get_selectable( );
		Dynamic get_selectable_dyn();

		virtual bool set_selectable( bool value);
		Dynamic set_selectable_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual int get_textColor( );
		Dynamic get_textColor_dyn();

		virtual int set_textColor( int value);
		Dynamic set_textColor_dyn();

		virtual Float get_textWidth( );
		Dynamic get_textWidth_dyn();

		virtual Float get_textHeight( );
		Dynamic get_textHeight_dyn();

		virtual Dynamic get_type( );
		Dynamic get_type_dyn();

		virtual Dynamic set_type( Dynamic value);
		Dynamic set_type_dyn();

		virtual bool get_wordWrap( );
		Dynamic get_wordWrap_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace text

#endif /* INCLUDED_openfl__legacy_text_TextField */ 
