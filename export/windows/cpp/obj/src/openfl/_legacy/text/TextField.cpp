#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextLineMetrics
#include <openfl/_legacy/text/TextLineMetrics.h>
#endif
namespace openfl{
namespace _legacy{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl._legacy.text.TextField","new",0xbac2ed82,"openfl._legacy.text.TextField.new","openfl/_legacy/text/TextField.hx",49,0xa9138a6d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	Dynamic tmp = ::openfl::_legacy::text::TextField_obj::lime_text_field_create();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	super::__construct(tmp,HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"));
	HX_STACK_LINE(53)
	this->gridFitType = ((Dynamic)((int)1));
	HX_STACK_LINE(54)
	this->sharpness = (int)0;
	HX_STACK_LINE(55)
	this->set_embedFonts(false);
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl._legacy.text.TextField","appendText",0xac177ac5,"openfl._legacy.text.TextField.appendText","openfl/_legacy/text/TextField.hx",60,0xa9138a6d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(62)
		Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		::String tmp2 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_text(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		::String tmp3 = text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		::openfl::_legacy::text::TextField_obj::lime_text_field_set_text(tmp,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl._legacy.text.TextField","getLineOffset",0x9c398a7f,"openfl._legacy.text.TextField.getLineOffset","openfl/_legacy/text/TextField.hx",67,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(69)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	int tmp1 = lineIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	int tmp2 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_line_offset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl._legacy.text.TextField","getLineText",0x4e7aec99,"openfl._legacy.text.TextField.getLineText","openfl/_legacy/text/TextField.hx",74,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(76)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	int tmp1 = lineIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	::String tmp2 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_line_text(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

::openfl::_legacy::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl._legacy.text.TextField","getLineMetrics",0x6b8f3dd7,"openfl._legacy.text.TextField.getLineMetrics","openfl/_legacy/text/TextField.hx",81,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(83)
	::openfl::_legacy::text::TextLineMetrics tmp = ::openfl::_legacy::text::TextLineMetrics_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::openfl::_legacy::text::TextLineMetrics result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(84)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	int tmp2 = lineIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	::openfl::_legacy::text::TextLineMetrics tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	::openfl::_legacy::text::TextField_obj::lime_text_field_get_line_metrics(tmp1,tmp2,tmp3);
	HX_STACK_LINE(85)
	::openfl::_legacy::text::TextLineMetrics tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

::openfl::_legacy::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(-1);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("openfl._legacy.text.TextField","getTextFormat",0x9bd1079c,"openfl._legacy.text.TextField.getTextFormat","openfl/_legacy/text/TextField.hx",90,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(92)
		::openfl::_legacy::text::TextFormat tmp = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::openfl::_legacy::text::TextFormat result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(93)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		::openfl::_legacy::text::TextFormat tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		int tmp3 = beginIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		int tmp4 = endIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::openfl::_legacy::text::TextField_obj::lime_text_field_get_text_format(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Array< ::Dynamic > _g1 = ::openfl::_legacy::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				if ((tmp6)){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				::openfl::_legacy::text::Font tmp7 = _g1->__get(_g).StaticCast< ::openfl::_legacy::text::Font >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				::openfl::_legacy::text::Font font = tmp7;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(95)
				++(_g);
				HX_STACK_LINE(97)
				bool tmp8 = (result->font == font->__fontPath);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(97)
				if ((tmp8)){
					HX_STACK_LINE(99)
					result->font = font->fontName;
				}
			}
		}
		HX_STACK_LINE(105)
		::openfl::_legacy::text::TextFormat tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::replaceText( int beginIndex,int endIndex,::String newText){
{
		HX_STACK_FRAME("openfl._legacy.text.TextField","replaceText",0xfff97a23,"openfl._legacy.text.TextField.replaceText","openfl/_legacy/text/TextField.hx",112,0xa9138a6d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(112)
		::openfl::_legacy::Lib_obj::notImplemented(HX_HCSTRING("TextField.replaceText","\xc0","\xf1","\x59","\x40"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl._legacy.text.TextField","setSelection",0xab93e6e8,"openfl._legacy.text.TextField.setSelection","openfl/_legacy/text/TextField.hx",119,0xa9138a6d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(119)
		::openfl::_legacy::Lib_obj::notImplemented(HX_HCSTRING("TextField.setSelection","\xab","\x18","\x9c","\xbf"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::_legacy::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(-1);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("openfl._legacy.text.TextField","setTextFormat",0xe0d6e9a8,"openfl._legacy.text.TextField.setTextFormat","openfl/_legacy/text/TextField.hx",124,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(126)
		bool tmp = (format != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		if ((tmp)){
			HX_STACK_LINE(128)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(128)
			Array< ::Dynamic > _g1 = ::openfl::_legacy::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(128)
			while((true)){
				HX_STACK_LINE(128)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(128)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(128)
				if ((tmp2)){
					HX_STACK_LINE(128)
					break;
				}
				HX_STACK_LINE(128)
				::openfl::_legacy::text::Font tmp3 = _g1->__get(_g).StaticCast< ::openfl::_legacy::text::Font >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(128)
				::openfl::_legacy::text::Font font = tmp3;		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(128)
				++(_g);
				HX_STACK_LINE(130)
				bool tmp4 = (font->__fontPath != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(130)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				if ((tmp4)){
					HX_STACK_LINE(130)
					tmp5 = (format->font == font->fontName);
				}
				else{
					HX_STACK_LINE(130)
					tmp5 = false;
				}
				HX_STACK_LINE(130)
				if ((tmp5)){
					HX_STACK_LINE(132)
					format->font = font->__fontPath;
				}
			}
		}
		HX_STACK_LINE(140)
		Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::openfl::_legacy::text::TextFormat tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		int tmp3 = beginIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		int tmp4 = endIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		::openfl::_legacy::text::TextField_obj::lime_text_field_set_text_format(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

::openfl::_legacy::text::TextFieldAutoSize TextField_obj::get_autoSize( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_autoSize",0xddbc7277,"openfl._legacy.text.TextField.get_autoSize","openfl/_legacy/text/TextField.hx",152,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_auto_size(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	::openfl::_legacy::text::TextFieldAutoSize tmp2 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::text::TextFieldAutoSize >(),tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

::openfl::_legacy::text::TextFieldAutoSize TextField_obj::set_autoSize( ::openfl::_legacy::text::TextFieldAutoSize value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_autoSize",0xf2b595eb,"openfl._legacy.text.TextField.set_autoSize","openfl/_legacy/text/TextField.hx",153,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(153)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_auto_size(tmp,value->__Index());
	HX_STACK_LINE(153)
	::openfl::_legacy::text::TextFieldAutoSize tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_background",0x14dbae55,"openfl._legacy.text.TextField.get_background","openfl/_legacy/text/TextField.hx",154,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_background(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_background",0x34fb96c9,"openfl._legacy.text.TextField.set_background","openfl/_legacy/text/TextField.hx",155,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(155)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_background(tmp,tmp1);
	HX_STACK_LINE(155)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(155)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_backgroundColor",0x63ed1ece,"openfl._legacy.text.TextField.get_backgroundColor","openfl/_legacy/text/TextField.hx",156,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_background_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_backgroundColor",0xa08a11da,"openfl._legacy.text.TextField.set_backgroundColor","openfl/_legacy/text/TextField.hx",157,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(157)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_background_color(tmp,tmp1);
	HX_STACK_LINE(157)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_border",0xa5b367d3,"openfl._legacy.text.TextField.get_border","openfl/_legacy/text/TextField.hx",158,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_border(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_border",0xa9310647,"openfl._legacy.text.TextField.set_border","openfl/_legacy/text/TextField.hx",159,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(159)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_border(tmp,tmp1);
	HX_STACK_LINE(159)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_borderColor",0xce6e3c90,"openfl._legacy.text.TextField.get_borderColor","openfl/_legacy/text/TextField.hx",160,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_border_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_borderColor",0xca39b99c,"openfl._legacy.text.TextField.set_borderColor","openfl/_legacy/text/TextField.hx",161,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(161)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(161)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_border_color(tmp,tmp1);
	HX_STACK_LINE(161)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_bottomScrollV",0x5b2b17f7,"openfl._legacy.text.TextField.get_bottomScrollV","openfl/_legacy/text/TextField.hx",162,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_bottom_scroll_v(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

::openfl::_legacy::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_defaultTextFormat",0xb2c5d85e,"openfl._legacy.text.TextField.get_defaultTextFormat","openfl/_legacy/text/TextField.hx",165,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::openfl::_legacy::text::TextFormat tmp = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	::openfl::_legacy::text::TextFormat result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(168)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	::openfl::_legacy::text::TextFormat tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(168)
	::openfl::_legacy::text::TextField_obj::lime_text_field_get_def_text_format(tmp1,tmp2);
	HX_STACK_LINE(170)
	{
		HX_STACK_LINE(170)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		Array< ::Dynamic > _g1 = ::openfl::_legacy::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(170)
		while((true)){
			HX_STACK_LINE(170)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(170)
			if ((tmp4)){
				HX_STACK_LINE(170)
				break;
			}
			HX_STACK_LINE(170)
			::openfl::_legacy::text::Font tmp5 = _g1->__get(_g).StaticCast< ::openfl::_legacy::text::Font >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			::openfl::_legacy::text::Font font = tmp5;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(170)
			++(_g);
			HX_STACK_LINE(172)
			bool tmp6 = (result->font == font->__fontPath);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			if ((tmp6)){
				HX_STACK_LINE(174)
				result->font = font->fontName;
			}
		}
	}
	HX_STACK_LINE(180)
	::openfl::_legacy::text::TextFormat tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::_legacy::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::_legacy::text::TextFormat value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_defaultTextFormat",0x06cea66a,"openfl._legacy.text.TextField.set_defaultTextFormat","openfl/_legacy/text/TextField.hx",185,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(187)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	if ((tmp)){
		HX_STACK_LINE(189)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		Array< ::Dynamic > _g1 = ::openfl::_legacy::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(189)
		while((true)){
			HX_STACK_LINE(189)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			if ((tmp2)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(189)
			::openfl::_legacy::text::Font tmp3 = _g1->__get(_g).StaticCast< ::openfl::_legacy::text::Font >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			::openfl::_legacy::text::Font font = tmp3;		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(189)
			++(_g);
			HX_STACK_LINE(191)
			bool tmp4 = (font->__fontPath != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(191)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			if ((tmp4)){
				HX_STACK_LINE(191)
				tmp5 = (value->font == font->fontName);
			}
			else{
				HX_STACK_LINE(191)
				tmp5 = false;
			}
			HX_STACK_LINE(191)
			if ((tmp5)){
				HX_STACK_LINE(193)
				value->font = font->__fontPath;
			}
		}
	}
	HX_STACK_LINE(201)
	Dynamic tmp1 = this->__handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	::openfl::_legacy::text::TextFormat tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(201)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_def_text_format(tmp1,tmp2);
	HX_STACK_LINE(202)
	::openfl::_legacy::text::TextFormat tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(202)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_displayAsPassword",0x927bdb88,"openfl._legacy.text.TextField.get_displayAsPassword","openfl/_legacy/text/TextField.hx",207,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(207)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_display_as_password(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(207)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_displayAsPassword",0xe684a994,"openfl._legacy.text.TextField.set_displayAsPassword","openfl/_legacy/text/TextField.hx",208,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(208)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_display_as_password(tmp,tmp1);
	HX_STACK_LINE(208)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(208)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_embedFonts",0x7d9fe192,"openfl._legacy.text.TextField.get_embedFonts","openfl/_legacy/text/TextField.hx",209,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_embed_fonts(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_embedFonts",0x9dbfca06,"openfl._legacy.text.TextField.set_embedFonts","openfl/_legacy/text/TextField.hx",210,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(210)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_embed_fonts(tmp,tmp1);
	HX_STACK_LINE(210)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_htmlText",0xbe7b025f,"openfl._legacy.text.TextField.get_htmlText","openfl/_legacy/text/TextField.hx",211,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::String tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_html_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	::String tmp2 = ::StringTools_obj::replace(tmp1,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING("<br/>","\x3b","\x61","\x28","\xcd"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_htmlText",0xd37425d3,"openfl._legacy.text.TextField.set_htmlText","openfl/_legacy/text/TextField.hx",212,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(212)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_html_text(tmp,tmp1);
	HX_STACK_LINE(212)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_length( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_length",0xe0a0afcd,"openfl._legacy.text.TextField.get_length","openfl/_legacy/text/TextField.hx",213,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(213)
	::String tmp = this->get_text();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	int tmp1 = tmp.length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(213)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_length,return )

int TextField_obj::get_maxChars( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_maxChars",0x9e13d240,"openfl._legacy.text.TextField.get_maxChars","openfl/_legacy/text/TextField.hx",214,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_max_chars(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_maxChars",0xb30cf5b4,"openfl._legacy.text.TextField.set_maxChars","openfl/_legacy/text/TextField.hx",215,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(215)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_max_chars(tmp,tmp1);
	HX_STACK_LINE(215)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_maxScrollH",0x89bac7be,"openfl._legacy.text.TextField.get_maxScrollH","openfl/_legacy/text/TextField.hx",216,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_max_scroll_h(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_maxScrollV",0x89bac7cc,"openfl._legacy.text.TextField.get_maxScrollV","openfl/_legacy/text/TextField.hx",217,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(217)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(217)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_max_scroll_v(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_multiline( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_multiline",0x6a554266,"openfl._legacy.text.TextField.get_multiline","openfl/_legacy/text/TextField.hx",218,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_multiline(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_multiline",0xaf5b2472,"openfl._legacy.text.TextField.set_multiline","openfl/_legacy/text/TextField.hx",219,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(219)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_multiline(tmp,tmp1);
	HX_STACK_LINE(219)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_numLines",0xe054d480,"openfl._legacy.text.TextField.get_numLines","openfl/_legacy/text/TextField.hx",220,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(220)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_num_lines(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

int TextField_obj::get_scrollH( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_scrollH",0x5536a2d4,"openfl._legacy.text.TextField.get_scrollH","openfl/_legacy/text/TextField.hx",221,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_scroll_h(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_scrollH",0x5fa3a9e0,"openfl._legacy.text.TextField.set_scrollH","openfl/_legacy/text/TextField.hx",222,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(222)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_scroll_h(tmp,tmp1);
	HX_STACK_LINE(222)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_scrollV",0x5536a2e2,"openfl._legacy.text.TextField.get_scrollV","openfl/_legacy/text/TextField.hx",223,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_scroll_v(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_scrollV",0x5fa3a9ee,"openfl._legacy.text.TextField.set_scrollV","openfl/_legacy/text/TextField.hx",224,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(224)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_scroll_v(tmp,tmp1);
	HX_STACK_LINE(224)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_selectable",0xb2e8d0fd,"openfl._legacy.text.TextField.get_selectable","openfl/_legacy/text/TextField.hx",225,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_selectable(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_selectable",0xd308b971,"openfl._legacy.text.TextField.set_selectable","openfl/_legacy/text/TextField.hx",226,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(226)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_selectable(tmp,tmp1);
	HX_STACK_LINE(226)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_text",0xd17e8fd4,"openfl._legacy.text.TextField.get_text","openfl/_legacy/text/TextField.hx",227,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	::String tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_text",0x7fdbe948,"openfl._legacy.text.TextField.set_text","openfl/_legacy/text/TextField.hx",228,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(228)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_text(tmp,tmp1);
	HX_STACK_LINE(228)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(228)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_textColor",0xaf8d70ef,"openfl._legacy.text.TextField.get_textColor","openfl/_legacy/text/TextField.hx",229,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	int tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_text_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_textColor",0xf49352fb,"openfl._legacy.text.TextField.set_textColor","openfl/_legacy/text/TextField.hx",230,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(230)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_text_color(tmp,tmp1);
	HX_STACK_LINE(230)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_textWidth",0x2f93b592,"openfl._legacy.text.TextField.get_textWidth","openfl/_legacy/text/TextField.hx",231,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	Float tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_text_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_textHeight",0x27faa2db,"openfl._legacy.text.TextField.get_textHeight","openfl/_legacy/text/TextField.hx",232,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Float tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_text_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

Dynamic TextField_obj::get_type( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_type",0xd18db5e1,"openfl._legacy.text.TextField.get_type","openfl/_legacy/text/TextField.hx",233,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_type(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(233)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	if ((tmp1)){
		HX_STACK_LINE(233)
		tmp2 = ((Dynamic)((int)1));
	}
	else{
		HX_STACK_LINE(233)
		tmp2 = ((Dynamic)((int)0));
	}
	HX_STACK_LINE(233)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

Dynamic TextField_obj::set_type( Dynamic value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_type",0x7feb0f55,"openfl._legacy.text.TextField.set_type","openfl/_legacy/text/TextField.hx",234,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(234)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	bool tmp1 = (value == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_type(tmp,tmp1);
	HX_STACK_LINE(234)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(234)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl._legacy.text.TextField","get_wordWrap",0xaf1df75b,"openfl._legacy.text.TextField.get_wordWrap","openfl/_legacy/text/TextField.hx",235,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	bool tmp1 = ::openfl::_legacy::text::TextField_obj::lime_text_field_get_word_wrap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl._legacy.text.TextField","set_wordWrap",0xc4171acf,"openfl._legacy.text.TextField.set_wordWrap","openfl/_legacy/text/TextField.hx",236,0xa9138a6d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(236)
	Dynamic tmp = this->__handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	::openfl::_legacy::text::TextField_obj::lime_text_field_set_word_wrap(tmp,tmp1);
	HX_STACK_LINE(236)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Dynamic TextField_obj::lime_text_field_create;

Dynamic TextField_obj::lime_text_field_get_text;

Dynamic TextField_obj::lime_text_field_set_text;

Dynamic TextField_obj::lime_text_field_get_html_text;

Dynamic TextField_obj::lime_text_field_set_html_text;

Dynamic TextField_obj::lime_text_field_get_text_color;

Dynamic TextField_obj::lime_text_field_set_text_color;

Dynamic TextField_obj::lime_text_field_get_selectable;

Dynamic TextField_obj::lime_text_field_set_selectable;

Dynamic TextField_obj::lime_text_field_get_display_as_password;

Dynamic TextField_obj::lime_text_field_set_display_as_password;

Dynamic TextField_obj::lime_text_field_get_embed_fonts;

Dynamic TextField_obj::lime_text_field_set_embed_fonts;

Dynamic TextField_obj::lime_text_field_get_def_text_format;

Dynamic TextField_obj::lime_text_field_set_def_text_format;

Dynamic TextField_obj::lime_text_field_get_auto_size;

Dynamic TextField_obj::lime_text_field_set_auto_size;

Dynamic TextField_obj::lime_text_field_get_type;

Dynamic TextField_obj::lime_text_field_set_type;

Dynamic TextField_obj::lime_text_field_get_multiline;

Dynamic TextField_obj::lime_text_field_set_multiline;

Dynamic TextField_obj::lime_text_field_get_word_wrap;

Dynamic TextField_obj::lime_text_field_set_word_wrap;

Dynamic TextField_obj::lime_text_field_get_border;

Dynamic TextField_obj::lime_text_field_set_border;

Dynamic TextField_obj::lime_text_field_get_border_color;

Dynamic TextField_obj::lime_text_field_set_border_color;

Dynamic TextField_obj::lime_text_field_get_background;

Dynamic TextField_obj::lime_text_field_set_background;

Dynamic TextField_obj::lime_text_field_get_background_color;

Dynamic TextField_obj::lime_text_field_set_background_color;

Dynamic TextField_obj::lime_text_field_get_text_width;

Dynamic TextField_obj::lime_text_field_get_text_height;

Dynamic TextField_obj::lime_text_field_get_text_format;

Dynamic TextField_obj::lime_text_field_set_text_format;

Dynamic TextField_obj::lime_text_field_get_max_scroll_v;

Dynamic TextField_obj::lime_text_field_get_max_scroll_h;

Dynamic TextField_obj::lime_text_field_get_bottom_scroll_v;

Dynamic TextField_obj::lime_text_field_get_scroll_h;

Dynamic TextField_obj::lime_text_field_set_scroll_h;

Dynamic TextField_obj::lime_text_field_get_scroll_v;

Dynamic TextField_obj::lime_text_field_set_scroll_v;

Dynamic TextField_obj::lime_text_field_get_num_lines;

Dynamic TextField_obj::lime_text_field_get_max_chars;

Dynamic TextField_obj::lime_text_field_set_max_chars;

Dynamic TextField_obj::lime_text_field_get_line_text;

Dynamic TextField_obj::lime_text_field_get_line_metrics;

Dynamic TextField_obj::lime_text_field_get_line_offset;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(__embedFonts,"__embedFonts");
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(__embedFonts,"__embedFonts");
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return get_border(); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return get_scrollV(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp == hx::paccAlways ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp == hx::paccAlways ? get_textWidth() : textWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return get_background(); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp == hx::paccAlways ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp == hx::paccAlways ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp == hx::paccAlways ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return replaceText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__embedFonts") ) { return __embedFonts; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp == hx::paccAlways ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"lime_text_field_create") ) { outValue = lime_text_field_create; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text") ) { outValue = lime_text_field_get_text; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text") ) { outValue = lime_text_field_set_text; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_type") ) { outValue = lime_text_field_get_type; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_type") ) { outValue = lime_text_field_set_type; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border") ) { outValue = lime_text_field_get_border; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border") ) { outValue = lime_text_field_set_border; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_h") ) { outValue = lime_text_field_get_scroll_h; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_h") ) { outValue = lime_text_field_set_scroll_h; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_v") ) { outValue = lime_text_field_get_scroll_v; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_v") ) { outValue = lime_text_field_set_scroll_v; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_html_text") ) { outValue = lime_text_field_get_html_text; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_html_text") ) { outValue = lime_text_field_set_html_text; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_auto_size") ) { outValue = lime_text_field_get_auto_size; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_auto_size") ) { outValue = lime_text_field_set_auto_size; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_multiline") ) { outValue = lime_text_field_get_multiline; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_multiline") ) { outValue = lime_text_field_set_multiline; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_word_wrap") ) { outValue = lime_text_field_get_word_wrap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_word_wrap") ) { outValue = lime_text_field_set_word_wrap; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_num_lines") ) { outValue = lime_text_field_get_num_lines; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_chars") ) { outValue = lime_text_field_get_max_chars; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_max_chars") ) { outValue = lime_text_field_set_max_chars; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_text") ) { outValue = lime_text_field_get_line_text; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_color") ) { outValue = lime_text_field_get_text_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_color") ) { outValue = lime_text_field_set_text_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_selectable") ) { outValue = lime_text_field_get_selectable; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_selectable") ) { outValue = lime_text_field_set_selectable; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background") ) { outValue = lime_text_field_get_background; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background") ) { outValue = lime_text_field_set_background; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_width") ) { outValue = lime_text_field_get_text_width; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_embed_fonts") ) { outValue = lime_text_field_get_embed_fonts; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_embed_fonts") ) { outValue = lime_text_field_set_embed_fonts; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_height") ) { outValue = lime_text_field_get_text_height; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_format") ) { outValue = lime_text_field_get_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_format") ) { outValue = lime_text_field_set_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_offset") ) { outValue = lime_text_field_get_line_offset; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border_color") ) { outValue = lime_text_field_get_border_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border_color") ) { outValue = lime_text_field_set_border_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_v") ) { outValue = lime_text_field_get_max_scroll_v; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_h") ) { outValue = lime_text_field_get_max_scroll_h; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_metrics") ) { outValue = lime_text_field_get_line_metrics; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_def_text_format") ) { outValue = lime_text_field_get_def_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_def_text_format") ) { outValue = lime_text_field_set_def_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_bottom_scroll_v") ) { outValue = lime_text_field_get_bottom_scroll_v; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background_color") ) { outValue = lime_text_field_get_background_color; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background_color") ) { outValue = lime_text_field_set_background_color; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_display_as_password") ) { outValue = lime_text_field_get_display_as_password; return true;  }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_display_as_password") ) { outValue = lime_text_field_set_display_as_password; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp == hx::paccAlways) return set_border(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp == hx::paccAlways) return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp == hx::paccAlways) return set_scrollV(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp == hx::paccAlways) return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp == hx::paccAlways) return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp == hx::paccAlways) return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__embedFonts") ) { __embedFonts=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp == hx::paccAlways) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"lime_text_field_create") ) { lime_text_field_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text") ) { lime_text_field_get_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text") ) { lime_text_field_set_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_type") ) { lime_text_field_get_type=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_type") ) { lime_text_field_set_type=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border") ) { lime_text_field_get_border=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border") ) { lime_text_field_set_border=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_h") ) { lime_text_field_get_scroll_h=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_h") ) { lime_text_field_set_scroll_h=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_v") ) { lime_text_field_get_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_v") ) { lime_text_field_set_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_html_text") ) { lime_text_field_get_html_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_html_text") ) { lime_text_field_set_html_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_auto_size") ) { lime_text_field_get_auto_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_auto_size") ) { lime_text_field_set_auto_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_multiline") ) { lime_text_field_get_multiline=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_multiline") ) { lime_text_field_set_multiline=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_word_wrap") ) { lime_text_field_get_word_wrap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_word_wrap") ) { lime_text_field_set_word_wrap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_num_lines") ) { lime_text_field_get_num_lines=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_chars") ) { lime_text_field_get_max_chars=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_max_chars") ) { lime_text_field_set_max_chars=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_text") ) { lime_text_field_get_line_text=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_color") ) { lime_text_field_get_text_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_color") ) { lime_text_field_set_text_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_selectable") ) { lime_text_field_get_selectable=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_selectable") ) { lime_text_field_set_selectable=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background") ) { lime_text_field_get_background=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background") ) { lime_text_field_set_background=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_width") ) { lime_text_field_get_text_width=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_embed_fonts") ) { lime_text_field_get_embed_fonts=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_embed_fonts") ) { lime_text_field_set_embed_fonts=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_height") ) { lime_text_field_get_text_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_format") ) { lime_text_field_get_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_format") ) { lime_text_field_set_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_offset") ) { lime_text_field_get_line_offset=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border_color") ) { lime_text_field_get_border_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border_color") ) { lime_text_field_set_border_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_v") ) { lime_text_field_get_max_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_h") ) { lime_text_field_get_max_scroll_h=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_metrics") ) { lime_text_field_get_line_metrics=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_def_text_format") ) { lime_text_field_get_def_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_def_text_format") ) { lime_text_field_set_def_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_bottom_scroll_v") ) { lime_text_field_get_bottom_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background_color") ) { lime_text_field_get_background_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background_color") ) { lime_text_field_set_background_color=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_display_as_password") ) { lime_text_field_get_display_as_password=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_display_as_password") ) { lime_text_field_set_display_as_password=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("__embedFonts","\x4b","\x42","\x75","\xc7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextField_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextField_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsFloat,(int)offsetof(TextField_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsBool,(int)offsetof(TextField_obj,__embedFonts),HX_HCSTRING("__embedFonts","\x4b","\x42","\x75","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_create,HX_HCSTRING("lime_text_field_create","\x49","\x12","\xc8","\xa0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_text,HX_HCSTRING("lime_text_field_get_text","\xc3","\x60","\x68","\x11")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_text,HX_HCSTRING("lime_text_field_set_text","\x37","\xba","\xc5","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_html_text,HX_HCSTRING("lime_text_field_get_html_text","\x6b","\xab","\x3a","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_html_text,HX_HCSTRING("lime_text_field_set_html_text","\x77","\x8d","\x40","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_text_color,HX_HCSTRING("lime_text_field_get_text_color","\xa7","\x8d","\x0d","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_text_color,HX_HCSTRING("lime_text_field_set_text_color","\x1b","\x76","\x2d","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_selectable,HX_HCSTRING("lime_text_field_get_selectable","\x2c","\x7f","\x98","\x8a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_selectable,HX_HCSTRING("lime_text_field_set_selectable","\xa0","\x67","\xb8","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_display_as_password,HX_HCSTRING("lime_text_field_get_display_as_password","\x35","\x3f","\xe7","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_display_as_password,HX_HCSTRING("lime_text_field_set_display_as_password","\x41","\xa8","\x48","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_embed_fonts,HX_HCSTRING("lime_text_field_get_embed_fonts","\x48","\xb0","\x43","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_embed_fonts,HX_HCSTRING("lime_text_field_set_embed_fonts","\x54","\x2d","\x0f","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_def_text_format,HX_HCSTRING("lime_text_field_get_def_text_format","\xb9","\xc6","\xc1","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_def_text_format,HX_HCSTRING("lime_text_field_set_def_text_format","\xc5","\xb9","\x5e","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_auto_size,HX_HCSTRING("lime_text_field_get_auto_size","\xfb","\x66","\x55","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_auto_size,HX_HCSTRING("lime_text_field_set_auto_size","\x07","\x49","\x5b","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_type,HX_HCSTRING("lime_text_field_get_type","\xd0","\x86","\x77","\x11")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_type,HX_HCSTRING("lime_text_field_set_type","\x44","\xe0","\xd4","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_multiline,HX_HCSTRING("lime_text_field_get_multiline","\x17","\xaf","\x24","\xa8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_multiline,HX_HCSTRING("lime_text_field_set_multiline","\x23","\x91","\x2a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_word_wrap,HX_HCSTRING("lime_text_field_get_word_wrap","\xc9","\x73","\x79","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_word_wrap,HX_HCSTRING("lime_text_field_set_word_wrap","\xd5","\x55","\x7f","\xac")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_border,HX_HCSTRING("lime_text_field_get_border","\x82","\x92","\x66","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_border,HX_HCSTRING("lime_text_field_set_border","\xf6","\x30","\xe4","\x13")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_border_color,HX_HCSTRING("lime_text_field_get_border_color","\xa6","\x18","\xca","\x02")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_border_color,HX_HCSTRING("lime_text_field_set_border_color","\x1a","\x06","\x0c","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_background,HX_HCSTRING("lime_text_field_get_background","\x84","\x5c","\x8b","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_background,HX_HCSTRING("lime_text_field_set_background","\xf8","\x44","\xab","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_background_color,HX_HCSTRING("lime_text_field_get_background_color","\x28","\x50","\xcd","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_background_color,HX_HCSTRING("lime_text_field_set_background_color","\x9c","\x07","\x85","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_text_width,HX_HCSTRING("lime_text_field_get_text_width","\x4a","\xd2","\x13","\x8f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_text_height,HX_HCSTRING("lime_text_field_get_text_height","\x23","\xa7","\x93","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_text_format,HX_HCSTRING("lime_text_field_get_text_format","\x73","\x2e","\xd6","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_text_format,HX_HCSTRING("lime_text_field_set_text_format","\x7f","\xab","\xa1","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_max_scroll_v,HX_HCSTRING("lime_text_field_get_max_scroll_v","\xd5","\x1a","\x7d","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_max_scroll_h,HX_HCSTRING("lime_text_field_get_max_scroll_h","\xc7","\x1a","\x7d","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_bottom_scroll_v,HX_HCSTRING("lime_text_field_get_bottom_scroll_v","\x42","\xbb","\xa6","\x93")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_scroll_h,HX_HCSTRING("lime_text_field_get_scroll_h","\x8c","\x5f","\x6e","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_scroll_h,HX_HCSTRING("lime_text_field_set_scroll_h","\x00","\x83","\x67","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_scroll_v,HX_HCSTRING("lime_text_field_get_scroll_v","\x9a","\x5f","\x6e","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_scroll_v,HX_HCSTRING("lime_text_field_set_scroll_v","\x0e","\x83","\x67","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_num_lines,HX_HCSTRING("lime_text_field_get_num_lines","\x30","\xd8","\x68","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_max_chars,HX_HCSTRING("lime_text_field_get_max_chars","\xec","\x5d","\xa4","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_set_max_chars,HX_HCSTRING("lime_text_field_set_max_chars","\xf8","\x3f","\xaa","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_line_text,HX_HCSTRING("lime_text_field_get_line_text","\x42","\x58","\xeb","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_line_metrics,HX_HCSTRING("lime_text_field_get_line_metrics","\xce","\xc1","\xa8","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::lime_text_field_get_line_offset,HX_HCSTRING("lime_text_field_get_line_offset","\x68","\xf2","\x5a","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("__embedFonts","\x4b","\x42","\x75","\xc7"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("replaceText","\x01","\x6b","\x95","\x61"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_background","\x37","\x1c","\x13","\x9c"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_embedFonts","\x74","\x4f","\xd7","\x04"),
	HX_HCSTRING("set_embedFonts","\xe8","\x37","\xf7","\x24"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_scrollH","\xb2","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollH","\xbe","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_scrollV","\xc0","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollV","\xcc","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_create,"lime_text_field_create");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text,"lime_text_field_get_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_text,"lime_text_field_set_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_html_text,"lime_text_field_get_html_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_html_text,"lime_text_field_set_html_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_color,"lime_text_field_get_text_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_text_color,"lime_text_field_set_text_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_selectable,"lime_text_field_get_selectable");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_selectable,"lime_text_field_set_selectable");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_display_as_password,"lime_text_field_get_display_as_password");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_display_as_password,"lime_text_field_set_display_as_password");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_embed_fonts,"lime_text_field_get_embed_fonts");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_embed_fonts,"lime_text_field_set_embed_fonts");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_def_text_format,"lime_text_field_get_def_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_def_text_format,"lime_text_field_set_def_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_auto_size,"lime_text_field_get_auto_size");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_auto_size,"lime_text_field_set_auto_size");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_type,"lime_text_field_get_type");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_type,"lime_text_field_set_type");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_multiline,"lime_text_field_get_multiline");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_multiline,"lime_text_field_set_multiline");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_word_wrap,"lime_text_field_get_word_wrap");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_word_wrap,"lime_text_field_set_word_wrap");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_border,"lime_text_field_get_border");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_border,"lime_text_field_set_border");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_border_color,"lime_text_field_get_border_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_border_color,"lime_text_field_set_border_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_background,"lime_text_field_get_background");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_background,"lime_text_field_set_background");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_background_color,"lime_text_field_get_background_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_background_color,"lime_text_field_set_background_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_width,"lime_text_field_get_text_width");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_height,"lime_text_field_get_text_height");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_format,"lime_text_field_get_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_text_format,"lime_text_field_set_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_v,"lime_text_field_get_max_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_h,"lime_text_field_get_max_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_bottom_scroll_v,"lime_text_field_get_bottom_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_h,"lime_text_field_get_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_h,"lime_text_field_set_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_v,"lime_text_field_get_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_v,"lime_text_field_set_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_num_lines,"lime_text_field_get_num_lines");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_max_chars,"lime_text_field_get_max_chars");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_max_chars,"lime_text_field_set_max_chars");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_line_text,"lime_text_field_get_line_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_line_metrics,"lime_text_field_get_line_metrics");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_line_offset,"lime_text_field_get_line_offset");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_create,"lime_text_field_create");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text,"lime_text_field_get_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_text,"lime_text_field_set_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_html_text,"lime_text_field_get_html_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_html_text,"lime_text_field_set_html_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_color,"lime_text_field_get_text_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_text_color,"lime_text_field_set_text_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_selectable,"lime_text_field_get_selectable");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_selectable,"lime_text_field_set_selectable");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_display_as_password,"lime_text_field_get_display_as_password");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_display_as_password,"lime_text_field_set_display_as_password");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_embed_fonts,"lime_text_field_get_embed_fonts");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_embed_fonts,"lime_text_field_set_embed_fonts");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_def_text_format,"lime_text_field_get_def_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_def_text_format,"lime_text_field_set_def_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_auto_size,"lime_text_field_get_auto_size");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_auto_size,"lime_text_field_set_auto_size");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_type,"lime_text_field_get_type");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_type,"lime_text_field_set_type");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_multiline,"lime_text_field_get_multiline");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_multiline,"lime_text_field_set_multiline");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_word_wrap,"lime_text_field_get_word_wrap");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_word_wrap,"lime_text_field_set_word_wrap");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_border,"lime_text_field_get_border");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_border,"lime_text_field_set_border");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_border_color,"lime_text_field_get_border_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_border_color,"lime_text_field_set_border_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_background,"lime_text_field_get_background");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_background,"lime_text_field_set_background");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_background_color,"lime_text_field_get_background_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_background_color,"lime_text_field_set_background_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_width,"lime_text_field_get_text_width");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_height,"lime_text_field_get_text_height");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_format,"lime_text_field_get_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_text_format,"lime_text_field_set_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_v,"lime_text_field_get_max_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_h,"lime_text_field_get_max_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_bottom_scroll_v,"lime_text_field_get_bottom_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_h,"lime_text_field_get_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_h,"lime_text_field_set_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_v,"lime_text_field_get_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_v,"lime_text_field_set_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_num_lines,"lime_text_field_get_num_lines");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_max_chars,"lime_text_field_get_max_chars");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_max_chars,"lime_text_field_set_max_chars");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_line_text,"lime_text_field_get_line_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_line_metrics,"lime_text_field_get_line_metrics");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_line_offset,"lime_text_field_get_line_offset");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_text_field_create","\x49","\x12","\xc8","\xa0"),
	HX_HCSTRING("lime_text_field_get_text","\xc3","\x60","\x68","\x11"),
	HX_HCSTRING("lime_text_field_set_text","\x37","\xba","\xc5","\xbf"),
	HX_HCSTRING("lime_text_field_get_html_text","\x6b","\xab","\x3a","\x8a"),
	HX_HCSTRING("lime_text_field_set_html_text","\x77","\x8d","\x40","\xcf"),
	HX_HCSTRING("lime_text_field_get_text_color","\xa7","\x8d","\x0d","\x0f"),
	HX_HCSTRING("lime_text_field_set_text_color","\x1b","\x76","\x2d","\x2f"),
	HX_HCSTRING("lime_text_field_get_selectable","\x2c","\x7f","\x98","\x8a"),
	HX_HCSTRING("lime_text_field_set_selectable","\xa0","\x67","\xb8","\xaa"),
	HX_HCSTRING("lime_text_field_get_display_as_password","\x35","\x3f","\xe7","\x9b"),
	HX_HCSTRING("lime_text_field_set_display_as_password","\x41","\xa8","\x48","\x9e"),
	HX_HCSTRING("lime_text_field_get_embed_fonts","\x48","\xb0","\x43","\x21"),
	HX_HCSTRING("lime_text_field_set_embed_fonts","\x54","\x2d","\x0f","\x1d"),
	HX_HCSTRING("lime_text_field_get_def_text_format","\xb9","\xc6","\xc1","\xd3"),
	HX_HCSTRING("lime_text_field_set_def_text_format","\xc5","\xb9","\x5e","\x10"),
	HX_HCSTRING("lime_text_field_get_auto_size","\xfb","\x66","\x55","\x54"),
	HX_HCSTRING("lime_text_field_set_auto_size","\x07","\x49","\x5b","\x99"),
	HX_HCSTRING("lime_text_field_get_type","\xd0","\x86","\x77","\x11"),
	HX_HCSTRING("lime_text_field_set_type","\x44","\xe0","\xd4","\xbf"),
	HX_HCSTRING("lime_text_field_get_multiline","\x17","\xaf","\x24","\xa8"),
	HX_HCSTRING("lime_text_field_set_multiline","\x23","\x91","\x2a","\xed"),
	HX_HCSTRING("lime_text_field_get_word_wrap","\xc9","\x73","\x79","\x67"),
	HX_HCSTRING("lime_text_field_set_word_wrap","\xd5","\x55","\x7f","\xac"),
	HX_HCSTRING("lime_text_field_get_border","\x82","\x92","\x66","\x10"),
	HX_HCSTRING("lime_text_field_set_border","\xf6","\x30","\xe4","\x13"),
	HX_HCSTRING("lime_text_field_get_border_color","\xa6","\x18","\xca","\x02"),
	HX_HCSTRING("lime_text_field_set_border_color","\x1a","\x06","\x0c","\x59"),
	HX_HCSTRING("lime_text_field_get_background","\x84","\x5c","\x8b","\xec"),
	HX_HCSTRING("lime_text_field_set_background","\xf8","\x44","\xab","\x0c"),
	HX_HCSTRING("lime_text_field_get_background_color","\x28","\x50","\xcd","\xd4"),
	HX_HCSTRING("lime_text_field_set_background_color","\x9c","\x07","\x85","\xa1"),
	HX_HCSTRING("lime_text_field_get_text_width","\x4a","\xd2","\x13","\x8f"),
	HX_HCSTRING("lime_text_field_get_text_height","\x23","\xa7","\x93","\x58"),
	HX_HCSTRING("lime_text_field_get_text_format","\x73","\x2e","\xd6","\x53"),
	HX_HCSTRING("lime_text_field_set_text_format","\x7f","\xab","\xa1","\x4f"),
	HX_HCSTRING("lime_text_field_get_max_scroll_v","\xd5","\x1a","\x7d","\x5d"),
	HX_HCSTRING("lime_text_field_get_max_scroll_h","\xc7","\x1a","\x7d","\x5d"),
	HX_HCSTRING("lime_text_field_get_bottom_scroll_v","\x42","\xbb","\xa6","\x93"),
	HX_HCSTRING("lime_text_field_get_scroll_h","\x8c","\x5f","\x6e","\x18"),
	HX_HCSTRING("lime_text_field_set_scroll_h","\x00","\x83","\x67","\x2d"),
	HX_HCSTRING("lime_text_field_get_scroll_v","\x9a","\x5f","\x6e","\x18"),
	HX_HCSTRING("lime_text_field_set_scroll_v","\x0e","\x83","\x67","\x2d"),
	HX_HCSTRING("lime_text_field_get_num_lines","\x30","\xd8","\x68","\xf7"),
	HX_HCSTRING("lime_text_field_get_max_chars","\xec","\x5d","\xa4","\x46"),
	HX_HCSTRING("lime_text_field_set_max_chars","\xf8","\x3f","\xaa","\x8b"),
	HX_HCSTRING("lime_text_field_get_line_text","\x42","\x58","\xeb","\xbd"),
	HX_HCSTRING("lime_text_field_get_line_metrics","\xce","\xc1","\xa8","\x6b"),
	HX_HCSTRING("lime_text_field_get_line_offset","\x68","\xf2","\x5a","\x19"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.text.TextField","\x90","\xc4","\x21","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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

void TextField_obj::__boot()
{
	lime_text_field_create= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_create","\x27","\x9c","\xbb","\xd2"),(int)0);
	lime_text_field_get_text= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_text","\x21","\x9e","\xb8","\x4e"),(int)1);
	lime_text_field_set_text= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_text","\x95","\xf7","\x15","\xfd"),(int)2);
	lime_text_field_get_html_text= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_html_text","\x4d","\x39","\x79","\x65"),(int)1);
	lime_text_field_set_html_text= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_html_text","\x59","\x1b","\x7f","\xaa"),(int)2);
	lime_text_field_get_text_color= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_text_color","\x85","\x25","\x8b","\x0a"),(int)1);
	lime_text_field_set_text_color= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_text_color","\xf9","\x0d","\xab","\x2a"),(int)2);
	lime_text_field_get_selectable= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_selectable","\x0a","\x17","\x16","\x86"),(int)1);
	lime_text_field_set_selectable= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_selectable","\x7e","\xff","\x35","\xa6"),(int)2);
	lime_text_field_get_display_as_password= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_display_as_password","\x97","\xbb","\x12","\x76"),(int)1);
	lime_text_field_set_display_as_password= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_display_as_password","\xa3","\x24","\x74","\x78"),(int)2);
	lime_text_field_get_embed_fonts= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_embed_fonts","\xaa","\xfa","\xaa","\x33"),(int)1);
	lime_text_field_set_embed_fonts= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_embed_fonts","\xb6","\x77","\x76","\x2f"),(int)2);
	lime_text_field_get_def_text_format= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_def_text_format","\x1b","\xea","\xda","\xb9"),(int)2);
	lime_text_field_set_def_text_format= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_def_text_format","\x27","\xdd","\x77","\xf6"),(int)2);
	lime_text_field_get_auto_size= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_auto_size","\xdd","\xf4","\x93","\x2f"),(int)1);
	lime_text_field_set_auto_size= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_auto_size","\xe9","\xd6","\x99","\x74"),(int)2);
	lime_text_field_get_type= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_type","\x2e","\xc4","\xc7","\x4e"),(int)1);
	lime_text_field_set_type= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_type","\xa2","\x1d","\x25","\xfd"),(int)2);
	lime_text_field_get_multiline= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_multiline","\xf9","\x3c","\x63","\x83"),(int)1);
	lime_text_field_set_multiline= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_multiline","\x05","\x1f","\x69","\xc8"),(int)2);
	lime_text_field_get_word_wrap= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_word_wrap","\xab","\x01","\xb8","\x42"),(int)1);
	lime_text_field_set_word_wrap= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_word_wrap","\xb7","\xe3","\xbd","\x87"),(int)2);
	lime_text_field_get_border= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_border","\x60","\x63","\x47","\x70"),(int)1);
	lime_text_field_set_border= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_border","\xd4","\x01","\xc5","\x73"),(int)2);
	lime_text_field_get_border_color= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_border_color","\x04","\xe4","\xc3","\x0a"),(int)1);
	lime_text_field_set_border_color= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_border_color","\x78","\xd1","\x05","\x61"),(int)2);
	lime_text_field_get_background= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_background","\x62","\xf4","\x08","\xe8"),(int)1);
	lime_text_field_set_background= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_background","\xd6","\xdc","\x28","\x08"),(int)2);
	lime_text_field_get_background_color= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_background_color","\x86","\x22","\xb3","\x44"),(int)1);
	lime_text_field_set_background_color= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_background_color","\xfa","\xd9","\x6a","\x11"),(int)2);
	lime_text_field_get_text_width= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_text_width","\x28","\x6a","\x91","\x8a"),(int)1);
	lime_text_field_get_text_height= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_text_height","\x85","\xf1","\xfa","\x6a"),(int)1);
	lime_text_field_get_text_format= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_text_format","\xd5","\x78","\x3d","\x66"),(int)4);
	lime_text_field_set_text_format= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_text_format","\xe1","\xf5","\x08","\x62"),(int)4);
	lime_text_field_get_max_scroll_v= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_max_scroll_v","\x33","\xe6","\x76","\x65"),(int)1);
	lime_text_field_get_max_scroll_h= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_max_scroll_h","\x25","\xe6","\x76","\x65"),(int)1);
	lime_text_field_get_bottom_scroll_v= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_bottom_scroll_v","\xa4","\xde","\xbf","\x79"),(int)1);
	lime_text_field_get_scroll_h= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_scroll_h","\xea","\xa3","\xcb","\xce"),(int)1);
	lime_text_field_set_scroll_h= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_scroll_h","\x5e","\xc7","\xc4","\xe3"),(int)2);
	lime_text_field_get_scroll_v= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_scroll_v","\xf8","\xa3","\xcb","\xce"),(int)1);
	lime_text_field_set_scroll_v= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_scroll_v","\x6c","\xc7","\xc4","\xe3"),(int)2);
	lime_text_field_get_num_lines= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_num_lines","\x12","\x66","\xa7","\xd2"),(int)1);
	lime_text_field_get_max_chars= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_max_chars","\xce","\xeb","\xe2","\x21"),(int)1);
	lime_text_field_set_max_chars= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_set_max_chars","\xda","\xcd","\xe8","\x66"),(int)2);
	lime_text_field_get_line_text= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_line_text","\x24","\xe6","\x29","\x99"),(int)2);
	lime_text_field_get_line_metrics= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_line_metrics","\x2c","\x8d","\xa2","\x73"),(int)3);
	lime_text_field_get_line_offset= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_text_field_get_line_offset","\xca","\x3c","\xc2","\x2b"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace text
