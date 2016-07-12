#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
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
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
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
namespace flixel{
namespace text{

Void FlxText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",35,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float FieldWidth = __o_FieldWidth.Default(0);
int Size = __o_Size.Default(8);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(161)
	this->_hasBorderAlpha = false;
	HX_STACK_LINE(152)
	this->_regen = true;
	HX_STACK_LINE(145)
	this->_formatRanges = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(110)
	this->borderQuality = ((Float)1);
	HX_STACK_LINE(103)
	this->borderSize = ((Float)1);
	HX_STACK_LINE(98)
	this->borderColor = (int)0;
	HX_STACK_LINE(93)
	this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE;
	HX_STACK_LINE(45)
	this->text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(176)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(178)
	bool tmp2 = (Text == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	if ((tmp3)){
		HX_STACK_LINE(178)
		tmp4 = (Text == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(178)
		tmp4 = true;
	}
	HX_STACK_LINE(178)
	if ((tmp4)){
		HX_STACK_LINE(182)
		this->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(183)
		Text = HX_HCSTRING(" ","\x20","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(187)
		::String tmp5 = Text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		this->set_text(tmp5);
	}
	HX_STACK_LINE(190)
	::openfl::_legacy::text::TextField tmp5 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(190)
	this->textField = tmp5;
	HX_STACK_LINE(191)
	::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	tmp6->set_selectable(false);
	HX_STACK_LINE(192)
	::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(192)
	tmp7->set_multiline(true);
	HX_STACK_LINE(193)
	::openfl::_legacy::text::TextField tmp8 = this->textField;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(193)
	tmp8->set_wordWrap(true);
	HX_STACK_LINE(194)
	::openfl::_legacy::text::TextFormat tmp9 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),Size,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(194)
	this->_defaultFormat = tmp9;
	HX_STACK_LINE(195)
	::String tmp10 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(195)
	this->set_font(tmp10);
	HX_STACK_LINE(196)
	::openfl::_legacy::text::TextFormat tmp11 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(196)
	this->_formatAdjusted = tmp11;
	HX_STACK_LINE(197)
	::openfl::_legacy::text::TextField tmp12 = this->textField;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(197)
	::openfl::_legacy::text::TextFormat tmp13 = this->_defaultFormat;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(197)
	tmp12->set_defaultTextFormat(tmp13);
	HX_STACK_LINE(198)
	::openfl::_legacy::text::TextField tmp14 = this->textField;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(198)
	::String tmp15 = Text;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(198)
	tmp14->set_text(tmp15);
	HX_STACK_LINE(199)
	Float tmp16 = FieldWidth;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(199)
	this->set_fieldWidth(tmp16);
	HX_STACK_LINE(200)
	::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(200)
	bool tmp18 = EmbeddedFont;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(200)
	tmp17->set_embedFonts(tmp18);
	HX_STACK_LINE(206)
	::openfl::_legacy::text::TextField tmp19 = this->textField;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(206)
	bool tmp20 = (Text.length <= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(206)
	Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(206)
	if ((tmp20)){
		HX_STACK_LINE(206)
		tmp21 = (int)1;
	}
	else{
		HX_STACK_LINE(206)
		tmp21 = (int)10;
	}
	HX_STACK_LINE(206)
	tmp19->set_height(tmp21);
	HX_STACK_LINE(208)
	this->set_allowCollisions((int)0);
	HX_STACK_LINE(209)
	this->set_moves(false);
	HX_STACK_LINE(211)
	this->drawFrame(null());
	HX_STACK_LINE(213)
	::flixel::math::FlxPoint tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(213)
	{
		HX_STACK_LINE(213)
		::flixel::util::FlxPool_flixel_math_FlxPoint tmp23 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(213)
		::flixel::math::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(213)
		::flixel::math::FlxPoint tmp25 = tmp24->set((int)1,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(213)
		::flixel::math::FlxPoint point = tmp25;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(213)
		point->_inPool = false;
		HX_STACK_LINE(213)
		tmp22 = point;
	}
	HX_STACK_LINE(213)
	this->shadowOffset = tmp22;
}
;
	return null();
}

//FlxText_obj::~FlxText_obj() { }

Dynamic FlxText_obj::__CreateEmpty() { return  new FlxText_obj; }
hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_FieldWidth,::String Text,hx::Null< int >  __o_Size,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxText_obj > _result_ = new FlxText_obj();
	_result_->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return _result_;}

Dynamic FlxText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxText_obj > _result_ = new FlxText_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void FlxText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",220,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		this->textField = null();
		HX_STACK_LINE(222)
		this->_font = null();
		HX_STACK_LINE(223)
		this->_defaultFormat = null();
		HX_STACK_LINE(224)
		this->_formatAdjusted = null();
		HX_STACK_LINE(225)
		::flixel::math::FlxPoint tmp = this->shadowOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::flixel::math::FlxPoint tmp1 = ::flixel::util::FlxDestroyUtil_obj::put(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		this->shadowOffset = tmp1;
		HX_STACK_LINE(226)
		this->super::destroy();
	}
return null();
}


Void FlxText_obj::drawFrame( hx::Null< bool >  __o_Force){
bool Force = __o_Force.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",230,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
{
		HX_STACK_LINE(231)
		bool tmp = this->_regen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			tmp2 = Force;
		}
		else{
			HX_STACK_LINE(231)
			tmp2 = true;
		}
		HX_STACK_LINE(231)
		this->_regen = tmp2;
		HX_STACK_LINE(232)
		bool tmp3 = this->_regen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		this->super::drawFrame(tmp3);
	}
return null();
}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
	HX_STACK_FRAME("flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",244,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(245)
	this->regenGraphic();
	HX_STACK_LINE(247)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	::String tmp3 = tmp2->key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(247)
	::flixel::graphics::atlas::FlxNode tmp4 = atlas->addNode(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(247)
	::flixel::graphics::atlas::FlxNode node = tmp4;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(248)
	bool tmp5 = (node != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(248)
	bool result = tmp5;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(250)
	bool tmp6 = (node != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(250)
	if ((tmp6)){
		HX_STACK_LINE(252)
		::flixel::graphics::frames::FlxImageFrame tmp7 = node->getImageFrame();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		this->set_frames(tmp7);
	}
	HX_STACK_LINE(255)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(255)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

::flixel::text::FlxText FlxText_obj::applyMarkup( ::String input,Array< ::Dynamic > rules){
	HX_STACK_FRAME("flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",276,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(rules,"rules")
	HX_STACK_LINE(277)
	bool tmp = (rules == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(277)
	if ((tmp1)){
		HX_STACK_LINE(277)
		tmp2 = (rules->length == (int)0);
	}
	else{
		HX_STACK_LINE(277)
		tmp2 = true;
	}
	HX_STACK_LINE(277)
	if ((tmp2)){
		HX_STACK_LINE(279)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(282)
	this->clearFormats();
	HX_STACK_LINE(284)
	Array< int > rangeStarts = Array_obj< int >::__new();		HX_STACK_VAR(rangeStarts,"rangeStarts");
	HX_STACK_LINE(285)
	Array< int > rangeEnds = Array_obj< int >::__new();		HX_STACK_VAR(rangeEnds,"rangeEnds");
	HX_STACK_LINE(286)
	Array< ::Dynamic > rulesToApply = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rulesToApply,"rulesToApply");
	HX_STACK_LINE(288)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(289)
	{
		HX_STACK_LINE(289)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(289)
		while((true)){
			HX_STACK_LINE(289)
			bool tmp3 = (_g < rules->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			if ((tmp4)){
				HX_STACK_LINE(289)
				break;
			}
			HX_STACK_LINE(289)
			::flixel::text::FlxTextFormatMarkerPair tmp5 = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			::flixel::text::FlxTextFormatMarkerPair rule = tmp5;		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(289)
			++(_g);
			HX_STACK_LINE(291)
			bool tmp6 = (rule->marker != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(291)
			if ((tmp6)){
				HX_STACK_LINE(291)
				tmp7 = (rule->format != null());
			}
			else{
				HX_STACK_LINE(291)
				tmp7 = false;
			}
			HX_STACK_LINE(291)
			if ((tmp7)){
				HX_STACK_LINE(293)
				bool start = false;		HX_STACK_VAR(start,"start");
				HX_STACK_LINE(294)
				::String tmp8 = rule->marker;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(294)
				int tmp9 = input.indexOf(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(294)
				bool tmp10 = (tmp9 != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(294)
				if ((tmp10)){
					HX_STACK_LINE(296)
					{
						HX_STACK_LINE(296)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(296)
						::String tmp11 = input;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(296)
						int tmp12 = ::haxe::Utf8_obj::length(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(296)
						int _g1 = tmp12;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(296)
						while((true)){
							HX_STACK_LINE(296)
							bool tmp13 = (_g2 < _g1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(296)
							bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(296)
							if ((tmp14)){
								HX_STACK_LINE(296)
								break;
							}
							HX_STACK_LINE(296)
							int tmp15 = (_g2)++;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(296)
							int charIndex = tmp15;		HX_STACK_VAR(charIndex,"charIndex");
							HX_STACK_LINE(298)
							::String tmp16 = input;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(298)
							int tmp17 = charIndex;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(298)
							int tmp18 = ::haxe::Utf8_obj::charCodeAt(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(298)
							int charCode = tmp18;		HX_STACK_VAR(charCode,"charCode");
							HX_STACK_LINE(299)
							int tmp19 = charCode;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(299)
							Dynamic tmp20 = rule->marker.charCodeAt((int)0);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(299)
							bool tmp21 = (tmp19 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(299)
							if ((tmp21)){
								HX_STACK_LINE(301)
								bool tmp22 = start;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(301)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(301)
								if ((tmp23)){
									HX_STACK_LINE(303)
									start = true;
									HX_STACK_LINE(304)
									int tmp24 = charIndex;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(304)
									rangeStarts->push(tmp24);
									HX_STACK_LINE(305)
									::flixel::text::FlxTextFormatMarkerPair tmp25 = rule;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(305)
									rulesToApply->push(tmp25);
								}
								else{
									HX_STACK_LINE(309)
									start = false;
									HX_STACK_LINE(310)
									int tmp24 = charIndex;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(310)
									rangeEnds->push(tmp24);
								}
							}
						}
					}
					HX_STACK_LINE(314)
					bool tmp11 = start;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(314)
					if ((tmp11)){
						HX_STACK_LINE(317)
						rangeEnds->push((int)-1);
					}
				}
				HX_STACK_LINE(320)
				(i)++;
			}
		}
	}
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(325)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			bool tmp3 = (_g < rules->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			if ((tmp4)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(325)
			::flixel::text::FlxTextFormatMarkerPair tmp5 = rules->__get(_g).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(325)
			::flixel::text::FlxTextFormatMarkerPair rule = tmp5;		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(325)
			++(_g);
			HX_STACK_LINE(327)
			while((true)){
				HX_STACK_LINE(327)
				::String tmp6 = rule->marker;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(327)
				int tmp7 = input.indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(327)
				bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(327)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(327)
				if ((tmp9)){
					HX_STACK_LINE(327)
					break;
				}
				HX_STACK_LINE(329)
				::String tmp10 = input;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(329)
				::String tmp11 = rule->marker;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(329)
				::String tmp12 = ::StringTools_obj::replace(tmp10,tmp11,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(329)
				input = tmp12;
			}
		}
	}
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(334)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(334)
		int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(334)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			if ((tmp4)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(334)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			int i1 = tmp5;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(337)
			int tmp6 = rangeStarts->__get(i1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(337)
			int delIndex = tmp6;		HX_STACK_VAR(delIndex,"delIndex");
			HX_STACK_LINE(339)
			::flixel::text::FlxTextFormatMarkerPair tmp7 = rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(339)
			int tmp8 = tmp7->marker.length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(339)
			int markerLength = tmp8;		HX_STACK_VAR(markerLength,"markerLength");
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(342)
				int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(342)
				while((true)){
					HX_STACK_LINE(342)
					bool tmp9 = (_g3 < _g2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(342)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(342)
					if ((tmp10)){
						HX_STACK_LINE(342)
						break;
					}
					HX_STACK_LINE(342)
					int tmp11 = (_g3)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(342)
					int j = tmp11;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(344)
					int tmp12 = rangeStarts->__get(j);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(344)
					int tmp13 = delIndex;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(344)
					bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(344)
					if ((tmp14)){
						HX_STACK_LINE(346)
						int tmp15 = markerLength;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(346)
						hx::SubEq(rangeStarts[j],tmp15);
					}
					HX_STACK_LINE(348)
					int tmp15 = rangeEnds->__get(j);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(348)
					int tmp16 = delIndex;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(348)
					bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(348)
					if ((tmp17)){
						HX_STACK_LINE(350)
						int tmp18 = markerLength;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(350)
						hx::SubEq(rangeEnds[j],tmp18);
					}
				}
			}
			HX_STACK_LINE(355)
			int tmp9 = rangeEnds->__get(i1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(355)
			delIndex = tmp9;
			HX_STACK_LINE(358)
			{
				HX_STACK_LINE(358)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(358)
				int _g2 = rangeStarts->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(358)
				while((true)){
					HX_STACK_LINE(358)
					bool tmp10 = (_g3 < _g2);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(358)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(358)
					if ((tmp11)){
						HX_STACK_LINE(358)
						break;
					}
					HX_STACK_LINE(358)
					int tmp12 = (_g3)++;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(358)
					int j = tmp12;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(360)
					int tmp13 = rangeStarts->__get(j);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(360)
					int tmp14 = delIndex;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(360)
					bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(360)
					if ((tmp15)){
						HX_STACK_LINE(362)
						int tmp16 = markerLength;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(362)
						hx::SubEq(rangeStarts[j],tmp16);
					}
					HX_STACK_LINE(364)
					int tmp16 = rangeEnds->__get(j);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(364)
					int tmp17 = delIndex;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(364)
					bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(364)
					if ((tmp18)){
						HX_STACK_LINE(366)
						int tmp19 = markerLength;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(366)
						hx::SubEq(rangeEnds[j],tmp19);
					}
				}
			}
		}
	}
	HX_STACK_LINE(372)
	::String tmp3 = input;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(372)
	this->set_text(tmp3);
	HX_STACK_LINE(375)
	{
		HX_STACK_LINE(375)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(375)
		int _g = rangeStarts->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(375)
		while((true)){
			HX_STACK_LINE(375)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(375)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(375)
			if ((tmp5)){
				HX_STACK_LINE(375)
				break;
			}
			HX_STACK_LINE(375)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			int i1 = tmp6;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(377)
			::flixel::text::FlxTextFormatMarkerPair tmp7 = rulesToApply->__get(i1).StaticCast< ::flixel::text::FlxTextFormatMarkerPair >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(377)
			::flixel::text::FlxTextFormat tmp8 = tmp7->format;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(377)
			int tmp9 = rangeStarts->__get(i1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(377)
			int tmp10 = rangeEnds->__get(i1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(377)
			this->addFormat(tmp8,tmp9,tmp10);
		}
	}
	HX_STACK_LINE(380)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,return )

::flixel::text::FlxText FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(-1);
int End = __o_End.Default(-1);
	HX_STACK_FRAME("flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",391,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(392)
		::flixel::text::_FlxText::FlxTextFormatRange tmp = ::flixel::text::_FlxText::FlxTextFormatRange_obj::__new(Format,Start,End);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		this->_formatRanges->push(tmp);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(::flixel::text::_FlxText::FlxTextFormatRange left,::flixel::text::_FlxText::FlxTextFormatRange right){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/text/FlxText.hx",395,0xdf165a6e)
			HX_STACK_ARG(left,"left")
			HX_STACK_ARG(right,"right")
			{
				HX_STACK_LINE(396)
				int tmp1 = left->range->start;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(396)
				int tmp2 = right->range->start;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(396)
				bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(396)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				if ((tmp3)){
					HX_STACK_LINE(396)
					tmp4 = (int)-1;
				}
				else{
					HX_STACK_LINE(396)
					tmp4 = (int)1;
				}
				HX_STACK_LINE(396)
				return tmp4;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(394)
		this->_formatRanges->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(398)
		this->_regen = true;
		HX_STACK_LINE(400)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,return )

::flixel::text::FlxText FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format,Dynamic Start,Dynamic End){
	HX_STACK_FRAME("flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",408,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Format,"Format")
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_LINE(409)
	{
		HX_STACK_LINE(409)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(409)
		Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(409)
		while((true)){
			HX_STACK_LINE(409)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(409)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(409)
			if ((tmp1)){
				HX_STACK_LINE(409)
				break;
			}
			HX_STACK_LINE(409)
			::flixel::text::_FlxText::FlxTextFormatRange tmp2 = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(409)
			::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp2;		HX_STACK_VAR(formatRange,"formatRange");
			HX_STACK_LINE(409)
			++(_g);
			HX_STACK_LINE(411)
			bool tmp3 = (formatRange->format == Format);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(411)
			if ((tmp3)){
				HX_STACK_LINE(413)
				bool tmp4 = (Start != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(413)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(413)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(413)
				if ((tmp5)){
					HX_STACK_LINE(413)
					tmp6 = (End != null());
				}
				else{
					HX_STACK_LINE(413)
					tmp6 = false;
				}
				HX_STACK_LINE(413)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(413)
				if ((tmp6)){
					HX_STACK_LINE(414)
					Dynamic tmp8 = Start;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(414)
					int tmp9 = formatRange->range->end;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(414)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(414)
					bool tmp11 = (tmp8 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(414)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(414)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(414)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(414)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(414)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(414)
					if ((tmp16)){
						HX_STACK_LINE(414)
						Dynamic tmp17 = End;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(414)
						int tmp18 = formatRange->range->start;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(414)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(414)
						int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(414)
						tmp7 = (tmp17 < tmp20);
					}
					else{
						HX_STACK_LINE(414)
						tmp7 = true;
					}
				}
				else{
					HX_STACK_LINE(413)
					tmp7 = false;
				}
				HX_STACK_LINE(413)
				if ((tmp7)){
					HX_STACK_LINE(416)
					continue;
				}
				HX_STACK_LINE(419)
				::flixel::text::_FlxText::FlxTextFormatRange tmp8 = formatRange;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(419)
				this->_formatRanges->remove(tmp8);
			}
		}
	}
	HX_STACK_LINE(422)
	this->_regen = true;
	HX_STACK_LINE(424)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,return )

::flixel::text::FlxText FlxText_obj::clearFormats( ){
	HX_STACK_FRAME("flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",431,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(432)
	this->_formatRanges = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(433)
	{
		HX_STACK_LINE(433)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(433)
		::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(433)
		tmp->set_defaultTextFormat(tmp1);
		HX_STACK_LINE(433)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(433)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(433)
		tmp2->setTextFormat(tmp3,null(),null());
		HX_STACK_LINE(433)
		this->_regen = true;
	}
	HX_STACK_LINE(435)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,return )

::flixel::text::FlxText FlxText_obj::setFormat( ::String Font,hx::Null< int >  __o_Size,hx::Null< int >  __o_Color,::String Alignment,::flixel::text::FlxTextBorderStyle BorderStyle,hx::Null< int >  __o_BorderColor,hx::Null< bool >  __o_Embedded){
int Size = __o_Size.Default(8);
int Color = __o_Color.Default(-1);
int BorderColor = __o_BorderColor.Default(0);
bool Embedded = __o_Embedded.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",453,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_ARG(BorderStyle,"BorderStyle")
	HX_STACK_ARG(BorderColor,"BorderColor")
	HX_STACK_ARG(Embedded,"Embedded")
{
		HX_STACK_LINE(454)
		bool tmp = (BorderStyle == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(454)
		::flixel::text::FlxTextBorderStyle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		if ((tmp)){
			HX_STACK_LINE(454)
			tmp1 = ::flixel::text::FlxTextBorderStyle_obj::NONE;
		}
		else{
			HX_STACK_LINE(454)
			tmp1 = BorderStyle;
		}
		HX_STACK_LINE(454)
		BorderStyle = tmp1;
		HX_STACK_LINE(456)
		bool tmp2 = Embedded;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(456)
		if ((tmp2)){
			HX_STACK_LINE(458)
			::String tmp3 = Font;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			this->set_font(tmp3);
		}
		else{
			HX_STACK_LINE(460)
			bool tmp3 = (Font != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(460)
			if ((tmp3)){
				HX_STACK_LINE(462)
				::String tmp4 = Font;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(462)
				this->set_systemFont(tmp4);
			}
		}
		HX_STACK_LINE(465)
		int tmp3 = Size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(465)
		this->set_size(tmp3);
		HX_STACK_LINE(466)
		int tmp4 = Color;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		this->set_color(tmp4);
		HX_STACK_LINE(467)
		bool tmp5 = (Alignment != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(467)
		if ((tmp5)){
			HX_STACK_LINE(468)
			::String tmp6 = Alignment;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(468)
			this->set_alignment(tmp6);
		}
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			Float Size1 = (int)1;		HX_STACK_VAR(Size1,"Size1");
			HX_STACK_LINE(469)
			Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
			HX_STACK_LINE(469)
			::flixel::text::FlxTextBorderStyle tmp6 = BorderStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(469)
			this->set_borderStyle(tmp6);
			HX_STACK_LINE(469)
			int tmp7 = BorderColor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(469)
			this->set_borderColor(tmp7);
			HX_STACK_LINE(469)
			Float tmp8 = Size1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(469)
			this->set_borderSize(tmp8);
			HX_STACK_LINE(469)
			Float tmp9 = Quality;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(469)
			this->set_borderQuality(tmp9);
			HX_STACK_LINE(469)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(471)
		{
			HX_STACK_LINE(471)
			::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(471)
			::openfl::_legacy::text::TextFormat tmp7 = this->_defaultFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(471)
			tmp6->set_defaultTextFormat(tmp7);
			HX_STACK_LINE(471)
			::openfl::_legacy::text::TextField tmp8 = this->textField;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(471)
			::openfl::_legacy::text::TextFormat tmp9 = this->_defaultFormat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			tmp8->setTextFormat(tmp9,null(),null());
			HX_STACK_LINE(471)
			this->_regen = true;
		}
		HX_STACK_LINE(473)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

::flixel::text::FlxText FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,hx::Null< int >  __o_Color,hx::Null< Float >  __o_Size,hx::Null< Float >  __o_Quality){
int Color = __o_Color.Default(0);
Float Size = __o_Size.Default(1);
Float Quality = __o_Quality.Default(1);
	HX_STACK_FRAME("flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",485,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Style,"Style")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Size,"Size")
	HX_STACK_ARG(Quality,"Quality")
{
		HX_STACK_LINE(486)
		::flixel::text::FlxTextBorderStyle tmp = Style;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(486)
		this->set_borderStyle(tmp);
		HX_STACK_LINE(487)
		int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(487)
		this->set_borderColor(tmp1);
		HX_STACK_LINE(488)
		Float tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		this->set_borderSize(tmp2);
		HX_STACK_LINE(489)
		Float tmp3 = Quality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(489)
		this->set_borderQuality(tmp3);
		HX_STACK_LINE(491)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,return )

Float FlxText_obj::set_fieldWidth( Float value){
	HX_STACK_FRAME("flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",495,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(496)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(496)
	if ((tmp1)){
		HX_STACK_LINE(498)
		bool tmp2 = (value <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(498)
		if ((tmp2)){
			HX_STACK_LINE(500)
			this->set_wordWrap(false);
			HX_STACK_LINE(501)
			this->set_autoSize(true);
		}
		else{
			HX_STACK_LINE(505)
			this->set_autoSize(false);
			HX_STACK_LINE(506)
			this->set_wordWrap(true);
			HX_STACK_LINE(507)
			::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(507)
			Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(507)
			tmp3->set_width(tmp4);
		}
		HX_STACK_LINE(510)
		this->_regen = true;
	}
	HX_STACK_LINE(513)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",517,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(518)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(518)
	if ((tmp1)){
		HX_STACK_LINE(518)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(518)
		tmp2 = tmp3->get_width();
	}
	else{
		HX_STACK_LINE(518)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(518)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

bool FlxText_obj::set_autoSize( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",522,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(523)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(523)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(523)
	if ((tmp1)){
		HX_STACK_LINE(525)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(525)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(525)
		::openfl::_legacy::text::TextFieldAutoSize tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		if ((tmp3)){
			HX_STACK_LINE(525)
			tmp4 = ::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT;
		}
		else{
			HX_STACK_LINE(525)
			tmp4 = ::openfl::_legacy::text::TextFieldAutoSize_obj::NONE;
		}
		HX_STACK_LINE(525)
		tmp2->set_autoSize(tmp4);
		HX_STACK_LINE(526)
		this->_regen = true;
	}
	HX_STACK_LINE(529)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(529)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",533,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(534)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(534)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(534)
	if ((tmp1)){
		HX_STACK_LINE(534)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		::openfl::_legacy::text::TextFieldAutoSize tmp4 = tmp3->get_autoSize();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		tmp2 = (tmp4 != ::openfl::_legacy::text::TextFieldAutoSize_obj::NONE);
	}
	else{
		HX_STACK_LINE(534)
		tmp2 = false;
	}
	HX_STACK_LINE(534)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",538,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(539)
	this->text = Text;
	HX_STACK_LINE(540)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	if ((tmp1)){
		HX_STACK_LINE(542)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		::String ot = tmp3;		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(543)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(543)
		::String tmp5 = Text;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		tmp4->set_text(tmp5);
		HX_STACK_LINE(544)
		::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		::String tmp7 = tmp6->get_text();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		::String tmp8 = ot;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(544)
		bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(544)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(544)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(544)
		if ((tmp10)){
			HX_STACK_LINE(544)
			tmp11 = this->_regen;
		}
		else{
			HX_STACK_LINE(544)
			tmp11 = true;
		}
		HX_STACK_LINE(544)
		this->_regen = tmp11;
	}
	HX_STACK_LINE(546)
	::String tmp2 = Text;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

int FlxText_obj::get_size( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",550,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(551)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(551)
	Dynamic tmp1 = tmp->size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(551)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(551)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

int FlxText_obj::set_size( int Size){
	HX_STACK_FRAME("flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",555,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Size,"Size")
	HX_STACK_LINE(556)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(556)
	tmp->size = Size;
	HX_STACK_LINE(557)
	{
		HX_STACK_LINE(557)
		::openfl::_legacy::text::TextField tmp1 = this->textField;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		tmp1->set_defaultTextFormat(tmp2);
		HX_STACK_LINE(557)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(557)
		tmp3->setTextFormat(tmp4,null(),null());
		HX_STACK_LINE(557)
		this->_regen = true;
	}
	HX_STACK_LINE(558)
	int tmp1 = Size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(558)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

int FlxText_obj::set_color( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",562,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(563)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(563)
	Dynamic tmp1 = tmp->color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(563)
	int tmp2 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(563)
	int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(563)
	bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(563)
	if ((tmp4)){
		HX_STACK_LINE(565)
		int tmp5 = Color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(565)
		return tmp5;
	}
	HX_STACK_LINE(567)
	int tmp5 = (int(Color) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(567)
	::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(567)
	tmp6->color = tmp5;
	HX_STACK_LINE(568)
	this->color = Color;
	HX_STACK_LINE(569)
	{
		HX_STACK_LINE(569)
		::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(569)
		::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(569)
		tmp7->set_defaultTextFormat(tmp8);
		HX_STACK_LINE(569)
		::openfl::_legacy::text::TextField tmp9 = this->textField;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(569)
		::openfl::_legacy::text::TextFormat tmp10 = this->_defaultFormat;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(569)
		tmp9->setTextFormat(tmp10,null(),null());
		HX_STACK_LINE(569)
		this->_regen = true;
	}
	HX_STACK_LINE(570)
	int tmp7 = Color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(570)
	return tmp7;
}


::String FlxText_obj::get_font( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",574,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(575)
	::String tmp = this->_font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",579,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(580)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(580)
	tmp->set_embedFonts(true);
	HX_STACK_LINE(582)
	bool tmp1 = (Font != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	if ((tmp1)){
		HX_STACK_LINE(584)
		::String newFontName = Font;		HX_STACK_VAR(newFontName,"newFontName");
		HX_STACK_LINE(585)
		::String tmp2 = Font;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		bool tmp3 = ::openfl::_legacy::Assets_obj::exists(tmp2,::openfl::_legacy::AssetType_obj::FONT);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		if ((tmp3)){
			HX_STACK_LINE(587)
			::String tmp4 = Font;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(587)
			::openfl::_legacy::text::Font tmp5 = ::openfl::_legacy::Assets_obj::getFont(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(587)
			newFontName = tmp5->fontName;
		}
		HX_STACK_LINE(590)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(590)
		tmp4->font = newFontName;
	}
	else{
		HX_STACK_LINE(594)
		::String tmp2 = ::flixel::_system::FlxAssets_obj::FONT_DEFAULT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		tmp3->font = tmp2;
	}
	HX_STACK_LINE(597)
	{
		HX_STACK_LINE(597)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(597)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(597)
		tmp2->set_defaultTextFormat(tmp3);
		HX_STACK_LINE(597)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(597)
		::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(597)
		tmp4->setTextFormat(tmp5,null(),null());
		HX_STACK_LINE(597)
		this->_regen = true;
	}
	HX_STACK_LINE(598)
	::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(598)
	::String tmp3 = this->_font = tmp2->font;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(598)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",602,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(603)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(603)
	bool tmp1 = tmp->set_embedFonts(true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(603)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",607,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(608)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(608)
	::String tmp1 = tmp->font;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(608)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont( ::String Font){
	HX_STACK_FRAME("flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",612,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Font,"Font")
	HX_STACK_LINE(613)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	tmp->set_embedFonts(false);
	HX_STACK_LINE(614)
	::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(614)
	tmp1->font = Font;
	HX_STACK_LINE(615)
	{
		HX_STACK_LINE(615)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(615)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(615)
		tmp2->set_defaultTextFormat(tmp3);
		HX_STACK_LINE(615)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(615)
		::openfl::_legacy::text::TextFormat tmp5 = this->_defaultFormat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(615)
		tmp4->setTextFormat(tmp5,null(),null());
		HX_STACK_LINE(615)
		this->_regen = true;
	}
	HX_STACK_LINE(616)
	::String tmp2 = Font;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(616)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",620,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(621)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	Dynamic tmp1 = tmp->bold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",625,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(626)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	Dynamic tmp1 = tmp->bold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(626)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(626)
	if ((tmp3)){
		HX_STACK_LINE(628)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(628)
		tmp4->bold = value;
		HX_STACK_LINE(629)
		{
			HX_STACK_LINE(629)
			::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(629)
			::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(629)
			tmp5->set_defaultTextFormat(tmp6);
			HX_STACK_LINE(629)
			::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(629)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(629)
			tmp7->setTextFormat(tmp8,null(),null());
			HX_STACK_LINE(629)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(631)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(631)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",635,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(636)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	Dynamic tmp1 = tmp->italic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(636)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",640,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(641)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	Dynamic tmp1 = tmp->italic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(641)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(641)
	if ((tmp3)){
		HX_STACK_LINE(643)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		tmp4->italic = value;
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(644)
			::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(644)
			tmp5->set_defaultTextFormat(tmp6);
			HX_STACK_LINE(644)
			::openfl::_legacy::text::TextField tmp7 = this->textField;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(644)
			::openfl::_legacy::text::TextFormat tmp8 = this->_defaultFormat;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(644)
			tmp7->setTextFormat(tmp8,null(),null());
			HX_STACK_LINE(644)
			this->_regen = true;
		}
	}
	HX_STACK_LINE(646)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(646)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_wordWrap( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",650,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(651)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(651)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",655,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(656)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(656)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(656)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(656)
	if ((tmp3)){
		HX_STACK_LINE(658)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(658)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(658)
		tmp4->set_wordWrap(tmp5);
		HX_STACK_LINE(659)
		this->_regen = true;
	}
	HX_STACK_LINE(661)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(661)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",665,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(666)
	::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(666)
	::String tmp1 = tmp->align;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(666)
	::String tmp2 = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(666)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment( ::String Alignment){
	HX_STACK_FRAME("flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",670,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Alignment,"Alignment")
	HX_STACK_LINE(671)
	::String tmp = Alignment;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(671)
	::String tmp1 = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::toOpenFL(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(671)
	::openfl::_legacy::text::TextFormat tmp2 = this->_defaultFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(671)
	tmp2->align = tmp1;
	HX_STACK_LINE(672)
	{
		HX_STACK_LINE(672)
		::openfl::_legacy::text::TextField tmp3 = this->textField;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(672)
		::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(672)
		tmp3->set_defaultTextFormat(tmp4);
		HX_STACK_LINE(672)
		::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(672)
		::openfl::_legacy::text::TextFormat tmp6 = this->_defaultFormat;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(672)
		tmp5->setTextFormat(tmp6,null(),null());
		HX_STACK_LINE(672)
		this->_regen = true;
	}
	HX_STACK_LINE(673)
	::String tmp3 = Alignment;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(673)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",677,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(678)
	::flixel::text::FlxTextBorderStyle tmp = style;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(678)
	::flixel::text::FlxTextBorderStyle tmp1 = this->borderStyle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(678)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(678)
	if ((tmp2)){
		HX_STACK_LINE(679)
		this->_regen = true;
	}
	HX_STACK_LINE(681)
	::flixel::text::FlxTextBorderStyle tmp3 = this->borderStyle = style;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(681)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor( int Color){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",685,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Color,"Color")
	HX_STACK_LINE(686)
	int tmp = this->borderColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(686)
	int tmp1 = Color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(686)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(686)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(686)
	if ((tmp2)){
		HX_STACK_LINE(686)
		::flixel::text::FlxTextBorderStyle tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(686)
		::flixel::text::FlxTextBorderStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(686)
		tmp3 = (tmp5 != ::flixel::text::FlxTextBorderStyle_obj::NONE);
	}
	else{
		HX_STACK_LINE(686)
		tmp3 = false;
	}
	HX_STACK_LINE(686)
	if ((tmp3)){
		HX_STACK_LINE(687)
		this->_regen = true;
	}
	HX_STACK_LINE(688)
	int tmp4 = (int(Color) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(688)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(688)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(688)
	bool tmp7 = (tmp6 < (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(688)
	this->_hasBorderAlpha = tmp7;
	HX_STACK_LINE(689)
	int tmp8 = this->borderColor = Color;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(689)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",693,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(694)
	Float tmp = Value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(694)
	Float tmp1 = this->borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(694)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(694)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(694)
	if ((tmp2)){
		HX_STACK_LINE(694)
		::flixel::text::FlxTextBorderStyle tmp4 = this->borderStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(694)
		::flixel::text::FlxTextBorderStyle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(694)
		tmp3 = (tmp5 != ::flixel::text::FlxTextBorderStyle_obj::NONE);
	}
	else{
		HX_STACK_LINE(694)
		tmp3 = false;
	}
	HX_STACK_LINE(694)
	if ((tmp3)){
		HX_STACK_LINE(695)
		this->_regen = true;
	}
	HX_STACK_LINE(697)
	Float tmp4 = this->borderSize = Value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(697)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality( Float Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",701,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(702)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(702)
	{
		HX_STACK_LINE(702)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(702)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(702)
		if ((tmp1)){
			HX_STACK_LINE(702)
			tmp2 = (Value < (int)0);
		}
		else{
			HX_STACK_LINE(702)
			tmp2 = false;
		}
		HX_STACK_LINE(702)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(702)
		if ((tmp2)){
			HX_STACK_LINE(702)
			tmp3 = (int)0;
		}
		else{
			HX_STACK_LINE(702)
			tmp3 = Value;
		}
		HX_STACK_LINE(702)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(702)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(702)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(702)
		if ((tmp4)){
			HX_STACK_LINE(702)
			tmp5 = (lowerBound > (int)1);
		}
		else{
			HX_STACK_LINE(702)
			tmp5 = false;
		}
		HX_STACK_LINE(702)
		if ((tmp5)){
			HX_STACK_LINE(702)
			tmp = (int)1;
		}
		else{
			HX_STACK_LINE(702)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(702)
	Value = ((Float)(tmp));
	HX_STACK_LINE(703)
	Float tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(703)
	Float tmp2 = this->borderQuality;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(703)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(703)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(703)
	if ((tmp3)){
		HX_STACK_LINE(703)
		::flixel::text::FlxTextBorderStyle tmp5 = this->borderStyle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(703)
		::flixel::text::FlxTextBorderStyle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(703)
		tmp4 = (tmp6 != ::flixel::text::FlxTextBorderStyle_obj::NONE);
	}
	else{
		HX_STACK_LINE(703)
		tmp4 = false;
	}
	HX_STACK_LINE(703)
	if ((tmp4)){
		HX_STACK_LINE(704)
		this->_regen = true;
	}
	HX_STACK_LINE(706)
	Float tmp5 = this->borderQuality = Value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(706)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
	HX_STACK_FRAME("flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",710,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(711)
	::flixel::graphics::FlxGraphic tmp = this->graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(711)
	::flixel::graphics::FlxGraphic oldGraphic = tmp;		HX_STACK_VAR(oldGraphic,"oldGraphic");
	HX_STACK_LINE(712)
	::flixel::graphics::FlxGraphic tmp1 = Value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(712)
	::flixel::graphics::FlxGraphic tmp2 = this->super::set_graphic(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(712)
	::flixel::graphics::FlxGraphic graph = tmp2;		HX_STACK_VAR(graph,"graph");
	HX_STACK_LINE(713)
	::flixel::_system::frontEnds::BitmapFrontEnd tmp3 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(713)
	::flixel::graphics::FlxGraphic tmp4 = oldGraphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(713)
	tmp3->__Field(HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"), hx::paccDynamic )(tmp4);
	HX_STACK_LINE(714)
	::flixel::graphics::FlxGraphic tmp5 = graph;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(714)
	return tmp5;
}


Float FlxText_obj::get_width( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",718,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	this->regenGraphic();
	HX_STACK_LINE(720)
	Float tmp = this->super::get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(720)
	return tmp;
}


Float FlxText_obj::get_height( ){
	HX_STACK_FRAME("flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",724,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(725)
	this->regenGraphic();
	HX_STACK_LINE(726)
	Float tmp = this->super::get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(726)
	return tmp;
}


Void FlxText_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",730,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(731)
		::openfl::_legacy::geom::ColorTransform tmp = this->colorTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(731)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		if ((tmp1)){
			HX_STACK_LINE(732)
			::openfl::_legacy::geom::ColorTransform tmp2 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(732)
			this->colorTransform = tmp2;
		}
		HX_STACK_LINE(734)
		Float tmp2 = this->alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(734)
		bool tmp3 = (tmp2 != (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(734)
		if ((tmp3)){
			HX_STACK_LINE(736)
			Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(736)
			::openfl::_legacy::geom::ColorTransform tmp5 = this->colorTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(736)
			tmp5->alphaMultiplier = tmp4;
			HX_STACK_LINE(737)
			this->useColorTransform = true;
		}
		else{
			HX_STACK_LINE(741)
			::openfl::_legacy::geom::ColorTransform tmp4 = this->colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(741)
			tmp4->alphaMultiplier = (int)1;
			HX_STACK_LINE(742)
			this->useColorTransform = false;
		}
		HX_STACK_LINE(745)
		this->dirty = true;
	}
return null();
}


Void FlxText_obj::regenGraphic( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","regenGraphic",0xc617a9e9,"flixel.text.FlxText.regenGraphic","flixel/text/FlxText.hx",749,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(750)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(750)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(750)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(750)
		if ((tmp2)){
			HX_STACK_LINE(750)
			bool tmp4 = this->_regen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(750)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(750)
			tmp3 = (tmp5 == false);
		}
		else{
			HX_STACK_LINE(750)
			tmp3 = true;
		}
		HX_STACK_LINE(750)
		if ((tmp3)){
			HX_STACK_LINE(751)
			return null();
		}
		HX_STACK_LINE(753)
		int oldWidth = (int)0;		HX_STACK_VAR(oldWidth,"oldWidth");
		HX_STACK_LINE(754)
		int oldHeight = (int)4;		HX_STACK_VAR(oldHeight,"oldHeight");
		HX_STACK_LINE(756)
		::flixel::graphics::FlxGraphic tmp4 = this->graphic;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(756)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(756)
		if ((tmp5)){
			HX_STACK_LINE(758)
			::flixel::graphics::FlxGraphic tmp6 = this->graphic;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			oldWidth = tmp6->width;
			HX_STACK_LINE(759)
			::flixel::graphics::FlxGraphic tmp7 = this->graphic;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(759)
			oldHeight = tmp7->height;
		}
		HX_STACK_LINE(762)
		::openfl::_legacy::text::TextField tmp6 = this->textField;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(762)
		Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(762)
		Float newWidth = tmp7;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(764)
		::openfl::_legacy::text::TextField tmp8 = this->textField;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(764)
		Float tmp9 = tmp8->get_textHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(764)
		Float tmp10 = (tmp9 + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(764)
		Float newHeight = tmp10;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(767)
		::openfl::_legacy::text::TextField tmp11 = this->textField;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(767)
		Float tmp12 = tmp11->get_textHeight();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(767)
		bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(767)
		if ((tmp13)){
			HX_STACK_LINE(769)
			newHeight = oldHeight;
		}
		HX_STACK_LINE(772)
		bool tmp14 = (oldWidth != newWidth);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(772)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(772)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(772)
		if ((tmp15)){
			HX_STACK_LINE(772)
			tmp16 = (oldHeight != newHeight);
		}
		else{
			HX_STACK_LINE(772)
			tmp16 = true;
		}
		HX_STACK_LINE(772)
		if ((tmp16)){
			HX_STACK_LINE(775)
			Float tmp17 = newHeight;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(775)
			this->set_height(tmp17);
			HX_STACK_LINE(776)
			::flixel::_system::frontEnds::BitmapFrontEnd tmp18 = ::flixel::FlxG_obj::bitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(776)
			::String tmp19 = tmp18->__Field(HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"), hx::paccDynamic )(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(776)
			::String key = tmp19;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(778)
			Float tmp20 = newWidth;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(778)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(778)
			Float tmp22 = newHeight;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(778)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(778)
			::String tmp24 = key;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(778)
			this->makeGraphic(tmp21,tmp23,(int)0,false,tmp24);
			HX_STACK_LINE(779)
			bool tmp25 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(779)
			if ((tmp25)){
				HX_STACK_LINE(780)
				::flixel::graphics::FlxGraphic tmp26 = this->graphic;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(780)
				::openfl::_legacy::display::BitmapData tmp27 = tmp26->bitmap->clone();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(780)
				this->_borderPixels = tmp27;
			}
			HX_STACK_LINE(781)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(781)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(781)
			this->frameHeight = tmp27;
			HX_STACK_LINE(782)
			::openfl::_legacy::text::TextField tmp28 = this->textField;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(782)
			Float tmp29 = this->get_height();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(782)
			Float tmp30 = (tmp29 * ((Float)1.2));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(782)
			tmp28->set_height(tmp30);
			HX_STACK_LINE(783)
			::openfl::_legacy::geom::Rectangle tmp31 = this->_flashRect;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(783)
			tmp31->x = (int)0;
			HX_STACK_LINE(784)
			::openfl::_legacy::geom::Rectangle tmp32 = this->_flashRect;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(784)
			tmp32->y = (int)0;
			HX_STACK_LINE(785)
			::openfl::_legacy::geom::Rectangle tmp33 = this->_flashRect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(785)
			tmp33->width = newWidth;
			HX_STACK_LINE(786)
			::openfl::_legacy::geom::Rectangle tmp34 = this->_flashRect;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(786)
			tmp34->height = newHeight;
		}
		else{
			HX_STACK_LINE(790)
			::flixel::graphics::FlxGraphic tmp17 = this->graphic;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(790)
			::openfl::_legacy::geom::Rectangle tmp18 = this->_flashRect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(790)
			tmp17->bitmap->fillRect(tmp18,(int)0);
			HX_STACK_LINE(791)
			bool tmp19 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(791)
			if ((tmp19)){
				HX_STACK_LINE(793)
				::openfl::_legacy::display::BitmapData tmp20 = this->_borderPixels;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(793)
				bool tmp21 = (tmp20 == null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(793)
				if ((tmp21)){
					HX_STACK_LINE(794)
					int tmp22 = this->frameWidth;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(794)
					int tmp23 = this->frameHeight;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(794)
					::openfl::_legacy::display::BitmapData tmp24 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp22,tmp23,true,null(),null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(794)
					this->_borderPixels = tmp24;
				}
				else{
					HX_STACK_LINE(796)
					::openfl::_legacy::display::BitmapData tmp22 = this->_borderPixels;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(796)
					::openfl::_legacy::geom::Rectangle tmp23 = this->_flashRect;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(796)
					tmp22->fillRect(tmp23,(int)0);
				}
			}
		}
		HX_STACK_LINE(800)
		::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(800)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(800)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(800)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(800)
		if ((tmp19)){
			HX_STACK_LINE(800)
			::openfl::_legacy::text::TextField tmp21 = this->textField;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(800)
			::openfl::_legacy::text::TextField tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(800)
			::openfl::_legacy::text::TextField tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(800)
			::String tmp24 = tmp23->get_text();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(800)
			::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(800)
			::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(800)
			tmp20 = (tmp26 != null());
		}
		else{
			HX_STACK_LINE(800)
			tmp20 = false;
		}
		HX_STACK_LINE(800)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(800)
		if ((tmp20)){
			HX_STACK_LINE(800)
			::openfl::_legacy::text::TextField tmp22 = this->textField;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(800)
			::openfl::_legacy::text::TextField tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(800)
			::String tmp24 = tmp23->get_text();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(800)
			::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(800)
			int tmp26 = tmp25.length;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(800)
			tmp21 = (tmp26 > (int)0);
		}
		else{
			HX_STACK_LINE(800)
			tmp21 = false;
		}
		HX_STACK_LINE(800)
		if ((tmp21)){
			HX_STACK_LINE(803)
			::openfl::_legacy::text::TextFormat tmp22 = this->_defaultFormat;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(803)
			::openfl::_legacy::text::TextFormat tmp23 = this->_formatAdjusted;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(803)
			this->copyTextFormat(tmp22,tmp23,null());
			HX_STACK_LINE(805)
			::flixel::math::FlxMatrix tmp24 = this->_matrix;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(805)
			tmp24->identity();
			HX_STACK_LINE(807)
			this->avoidSingleLineBlur();
			HX_STACK_LINE(809)
			this->applyBorderStyle();
			HX_STACK_LINE(810)
			{
				HX_STACK_LINE(810)
				bool tmp25 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(810)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(810)
				if ((tmp26)){
					HX_STACK_LINE(810)
					Dynamic();
				}
				else{
					HX_STACK_LINE(810)
					::openfl::_legacy::geom::ColorTransform tmp27 = this->_borderColorTransform;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(810)
					bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(810)
					if ((tmp28)){
						HX_STACK_LINE(810)
						::openfl::_legacy::geom::ColorTransform tmp29 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(810)
						this->_borderColorTransform = tmp29;
					}
					HX_STACK_LINE(810)
					int tmp29 = this->borderColor;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(810)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(810)
					int tmp31 = (int(tmp30) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(810)
					int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(810)
					Float tmp33 = (Float(tmp32) / Float((int)255));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(810)
					::openfl::_legacy::geom::ColorTransform tmp34 = this->_borderColorTransform;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(810)
					tmp34->alphaMultiplier = tmp33;
					HX_STACK_LINE(810)
					::openfl::_legacy::display::BitmapData tmp35 = this->_borderPixels;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(810)
					::openfl::_legacy::display::BitmapData tmp36 = this->_borderPixels;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(810)
					::openfl::_legacy::geom::Rectangle tmp37 = tmp36->get_rect();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(810)
					::openfl::_legacy::geom::ColorTransform tmp38 = this->_borderColorTransform;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(810)
					tmp35->colorTransform(tmp37,tmp38);
					HX_STACK_LINE(810)
					::flixel::graphics::FlxGraphic tmp39 = this->graphic;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(810)
					::openfl::_legacy::display::BitmapData tmp40 = this->_borderPixels;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(810)
					tmp39->bitmap->draw(tmp40,null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(811)
			{
				HX_STACK_LINE(811)
				::openfl::_legacy::text::TextFormat tmp25 = this->_formatAdjusted;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(811)
				::openfl::_legacy::text::TextFormat FormatAdjusted = tmp25;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
				HX_STACK_LINE(811)
				::openfl::_legacy::text::TextFormat tmp26 = this->_defaultFormat;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(811)
				::openfl::_legacy::text::TextFormat tmp27 = FormatAdjusted;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(811)
				this->copyTextFormat(tmp26,tmp27,false);
				HX_STACK_LINE(811)
				Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(811)
				{
					HX_STACK_LINE(811)
					::openfl::_legacy::text::TextFormat tmp29 = this->_defaultFormat;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(811)
					tmp28 = tmp29->color;
				}
				HX_STACK_LINE(811)
				FormatAdjusted->color = tmp28;
				HX_STACK_LINE(811)
				::openfl::_legacy::text::TextField tmp29 = this->textField;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(811)
				::openfl::_legacy::text::TextFormat tmp30 = FormatAdjusted;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(811)
				tmp29->setTextFormat(tmp30,null(),null());
				HX_STACK_LINE(811)
				{
					HX_STACK_LINE(811)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(811)
					Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(811)
					while((true)){
						HX_STACK_LINE(811)
						bool tmp31 = (_g < _g1->length);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(811)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(811)
						if ((tmp32)){
							HX_STACK_LINE(811)
							break;
						}
						HX_STACK_LINE(811)
						::flixel::text::_FlxText::FlxTextFormatRange tmp33 = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(811)
						::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp33;		HX_STACK_VAR(formatRange,"formatRange");
						HX_STACK_LINE(811)
						++(_g);
						HX_STACK_LINE(811)
						::openfl::_legacy::text::TextField tmp34 = this->textField;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(811)
						::String tmp35 = tmp34->get_text();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(811)
						int tmp36 = tmp35.length;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(811)
						int tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(811)
						int tmp38 = formatRange->range->start;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(811)
						bool tmp39 = (tmp37 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(811)
						if ((tmp39)){
							HX_STACK_LINE(811)
							break;
						}
						else{
							HX_STACK_LINE(811)
							::openfl::_legacy::text::TextFormat tmp40 = formatRange->format->format;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(811)
							::openfl::_legacy::text::TextFormat textFormat = tmp40;		HX_STACK_VAR(textFormat,"textFormat");
							HX_STACK_LINE(811)
							::openfl::_legacy::text::TextFormat tmp41 = textFormat;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(811)
							::openfl::_legacy::text::TextFormat tmp42 = FormatAdjusted;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(811)
							this->copyTextFormat(tmp41,tmp42,false);
							HX_STACK_LINE(811)
							Dynamic tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(811)
							tmp43 = textFormat->color;
							HX_STACK_LINE(811)
							FormatAdjusted->color = tmp43;
						}
						HX_STACK_LINE(811)
						::openfl::_legacy::text::TextField tmp40 = this->textField;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(811)
						::openfl::_legacy::text::TextFormat tmp41 = FormatAdjusted;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(811)
						int tmp42 = formatRange->range->start;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(811)
						int tmp43 = formatRange->range->end;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(811)
						::openfl::_legacy::text::TextField tmp44 = this->textField;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(811)
						::String tmp45 = tmp44->get_text();		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(811)
						int tmp46 = tmp45.length;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(811)
						Float tmp47 = ::Math_obj::min(tmp43,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(811)
						int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(811)
						tmp40->setTextFormat(tmp41,tmp42,tmp48);
					}
				}
			}
			HX_STACK_LINE(813)
			::flixel::graphics::FlxGraphic tmp25 = this->graphic;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(813)
			::openfl::_legacy::text::TextField tmp26 = this->textField;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(813)
			::flixel::math::FlxMatrix tmp27 = this->_matrix;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(813)
			tmp25->bitmap->draw(tmp26,tmp27,null(),null(),null(),null());
		}
		HX_STACK_LINE(816)
		this->_regen = false;
		HX_STACK_LINE(817)
		{
			HX_STACK_LINE(817)
			::flixel::graphics::frames::FlxFrame tmp22 = this->frame;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(817)
			this->set_frame(tmp22);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphic,(void))

Void FlxText_obj::avoidSingleLineBlur( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","avoidSingleLineBlur",0x467181ba,"flixel.text.FlxText.avoidSingleLineBlur","flixel/text/FlxText.hx",821,0xdf165a6e)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,avoidSingleLineBlur,(void))

Void FlxText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",837,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(838)
		this->regenGraphic();
		HX_STACK_LINE(839)
		this->super::draw();
	}
return null();
}


Void FlxText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",848,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(849)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(849)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(849)
		if ((tmp1)){
			HX_STACK_LINE(850)
			return null();
		}
		HX_STACK_LINE(852)
		bool tmp2 = ::flixel::FlxG_obj::renderTile;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(852)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(852)
		if ((tmp2)){
			HX_STACK_LINE(852)
			bool tmp4 = RunOnCpp;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(852)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(852)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(852)
			tmp3 = false;
		}
		HX_STACK_LINE(852)
		if ((tmp3)){
			HX_STACK_LINE(853)
			return null();
		}
		HX_STACK_LINE(855)
		this->regenGraphic();
		HX_STACK_LINE(856)
		bool tmp4 = RunOnCpp;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(856)
		this->super::calcFrame(tmp4);
	}
return null();
}


Void FlxText_obj::applyBorderStyle( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",860,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(861)
		Float tmp = this->borderSize;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(861)
		Float tmp1 = this->borderQuality;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(861)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(861)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(861)
		int iterations = tmp3;		HX_STACK_VAR(iterations,"iterations");
		HX_STACK_LINE(862)
		bool tmp4 = (iterations <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(862)
		if ((tmp4)){
			HX_STACK_LINE(864)
			iterations = (int)1;
		}
		HX_STACK_LINE(866)
		Float tmp5 = this->borderSize;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(866)
		int tmp6 = iterations;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(866)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(866)
		Float delta = tmp7;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(868)
		{
			HX_STACK_LINE(868)
			::flixel::text::FlxTextBorderStyle tmp8 = this->borderStyle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(868)
			::flixel::text::FlxTextBorderStyle _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(868)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(873)
					{
						HX_STACK_LINE(873)
						::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(873)
						::openfl::_legacy::text::TextFormat FormatAdjusted = tmp9;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(873)
						::openfl::_legacy::text::TextFormat tmp10 = this->_defaultFormat;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(873)
						::openfl::_legacy::text::TextFormat tmp11 = FormatAdjusted;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(873)
						this->copyTextFormat(tmp10,tmp11,false);
						HX_STACK_LINE(873)
						Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(873)
						{
							HX_STACK_LINE(873)
							int tmp13 = this->borderColor;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(873)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(873)
							int tmp15 = (int(tmp14) & int((int)16777215));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(873)
							tmp12 = tmp15;
						}
						HX_STACK_LINE(873)
						FormatAdjusted->color = tmp12;
						HX_STACK_LINE(873)
						::openfl::_legacy::text::TextField tmp13 = this->textField;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(873)
						::openfl::_legacy::text::TextFormat tmp14 = FormatAdjusted;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(873)
						tmp13->setTextFormat(tmp14,null(),null());
						HX_STACK_LINE(873)
						{
							HX_STACK_LINE(873)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(873)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(873)
							while((true)){
								HX_STACK_LINE(873)
								bool tmp15 = (_g1 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(873)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(873)
								if ((tmp16)){
									HX_STACK_LINE(873)
									break;
								}
								HX_STACK_LINE(873)
								::flixel::text::_FlxText::FlxTextFormatRange tmp17 = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(873)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp17;		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(873)
								++(_g1);
								HX_STACK_LINE(873)
								::openfl::_legacy::text::TextField tmp18 = this->textField;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(873)
								::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(873)
								int tmp20 = tmp19.length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(873)
								int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(873)
								int tmp22 = formatRange->range->start;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(873)
								bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(873)
								if ((tmp23)){
									HX_STACK_LINE(873)
									break;
								}
								else{
									HX_STACK_LINE(873)
									::openfl::_legacy::text::TextFormat tmp24 = formatRange->format->format;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(873)
									::openfl::_legacy::text::TextFormat textFormat = tmp24;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(873)
									::openfl::_legacy::text::TextFormat tmp25 = textFormat;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(873)
									::openfl::_legacy::text::TextFormat tmp26 = FormatAdjusted;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(873)
									this->copyTextFormat(tmp25,tmp26,false);
									HX_STACK_LINE(873)
									Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(873)
									{
										HX_STACK_LINE(873)
										int tmp28 = formatRange->format->borderColor;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(873)
										int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(873)
										int tmp30 = (int(tmp29) & int((int)16777215));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(873)
										tmp27 = tmp30;
									}
									HX_STACK_LINE(873)
									FormatAdjusted->color = tmp27;
								}
								HX_STACK_LINE(873)
								::openfl::_legacy::text::TextField tmp24 = this->textField;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(873)
								::openfl::_legacy::text::TextFormat tmp25 = FormatAdjusted;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(873)
								int tmp26 = formatRange->range->start;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(873)
								int tmp27 = formatRange->range->end;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(873)
								::openfl::_legacy::text::TextField tmp28 = this->textField;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(873)
								::String tmp29 = tmp28->get_text();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(873)
								int tmp30 = tmp29.length;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(873)
								Float tmp31 = ::Math_obj::min(tmp27,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(873)
								int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(873)
								tmp24->setTextFormat(tmp25,tmp26,tmp32);
							}
						}
					}
					HX_STACK_LINE(875)
					{
						HX_STACK_LINE(875)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(875)
						while((true)){
							HX_STACK_LINE(875)
							bool tmp9 = (_g1 < iterations);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(875)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(875)
							if ((tmp10)){
								HX_STACK_LINE(875)
								break;
							}
							HX_STACK_LINE(875)
							int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(875)
							int i = tmp11;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(877)
							{
								HX_STACK_LINE(877)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(877)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(877)
								if ((tmp12)){
									HX_STACK_LINE(877)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(877)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(877)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(877)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(877)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(877)
								Float tmp15 = delta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(877)
								Float tmp16 = delta;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(877)
								tmp14->translate(tmp15,tmp16);
								HX_STACK_LINE(877)
								::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(877)
								::flixel::math::FlxMatrix tmp18 = this->_matrix;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(877)
								graphic->draw(tmp17,tmp18,null(),null(),null(),null());
							}
						}
					}
					HX_STACK_LINE(880)
					::flixel::math::FlxMatrix tmp9 = this->_matrix;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(880)
					::flixel::math::FlxPoint tmp10 = this->shadowOffset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(880)
					Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(880)
					Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(880)
					Float tmp13 = this->borderSize;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(880)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(880)
					::flixel::math::FlxPoint tmp15 = this->shadowOffset;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(880)
					Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(880)
					Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(880)
					Float tmp18 = this->borderSize;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(880)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(880)
					tmp9->translate(tmp14,tmp19);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(885)
					{
						HX_STACK_LINE(885)
						::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(885)
						::openfl::_legacy::text::TextFormat FormatAdjusted = tmp9;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(885)
						::openfl::_legacy::text::TextFormat tmp10 = this->_defaultFormat;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(885)
						::openfl::_legacy::text::TextFormat tmp11 = FormatAdjusted;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(885)
						this->copyTextFormat(tmp10,tmp11,false);
						HX_STACK_LINE(885)
						Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(885)
						{
							HX_STACK_LINE(885)
							int tmp13 = this->borderColor;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(885)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(885)
							int tmp15 = (int(tmp14) & int((int)16777215));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(885)
							tmp12 = tmp15;
						}
						HX_STACK_LINE(885)
						FormatAdjusted->color = tmp12;
						HX_STACK_LINE(885)
						::openfl::_legacy::text::TextField tmp13 = this->textField;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(885)
						::openfl::_legacy::text::TextFormat tmp14 = FormatAdjusted;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(885)
						tmp13->setTextFormat(tmp14,null(),null());
						HX_STACK_LINE(885)
						{
							HX_STACK_LINE(885)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(885)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(885)
							while((true)){
								HX_STACK_LINE(885)
								bool tmp15 = (_g1 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(885)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(885)
								if ((tmp16)){
									HX_STACK_LINE(885)
									break;
								}
								HX_STACK_LINE(885)
								::flixel::text::_FlxText::FlxTextFormatRange tmp17 = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(885)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp17;		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(885)
								++(_g1);
								HX_STACK_LINE(885)
								::openfl::_legacy::text::TextField tmp18 = this->textField;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(885)
								::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(885)
								int tmp20 = tmp19.length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(885)
								int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(885)
								int tmp22 = formatRange->range->start;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(885)
								bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(885)
								if ((tmp23)){
									HX_STACK_LINE(885)
									break;
								}
								else{
									HX_STACK_LINE(885)
									::openfl::_legacy::text::TextFormat tmp24 = formatRange->format->format;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(885)
									::openfl::_legacy::text::TextFormat textFormat = tmp24;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(885)
									::openfl::_legacy::text::TextFormat tmp25 = textFormat;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(885)
									::openfl::_legacy::text::TextFormat tmp26 = FormatAdjusted;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(885)
									this->copyTextFormat(tmp25,tmp26,false);
									HX_STACK_LINE(885)
									Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(885)
									{
										HX_STACK_LINE(885)
										int tmp28 = formatRange->format->borderColor;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(885)
										int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(885)
										int tmp30 = (int(tmp29) & int((int)16777215));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(885)
										tmp27 = tmp30;
									}
									HX_STACK_LINE(885)
									FormatAdjusted->color = tmp27;
								}
								HX_STACK_LINE(885)
								::openfl::_legacy::text::TextField tmp24 = this->textField;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(885)
								::openfl::_legacy::text::TextFormat tmp25 = FormatAdjusted;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(885)
								int tmp26 = formatRange->range->start;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(885)
								int tmp27 = formatRange->range->end;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(885)
								::openfl::_legacy::text::TextField tmp28 = this->textField;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(885)
								::String tmp29 = tmp28->get_text();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(885)
								int tmp30 = tmp29.length;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(885)
								Float tmp31 = ::Math_obj::min(tmp27,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(885)
								int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(885)
								tmp24->setTextFormat(tmp25,tmp26,tmp32);
							}
						}
					}
					HX_STACK_LINE(887)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(888)
					{
						HX_STACK_LINE(888)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(888)
						while((true)){
							HX_STACK_LINE(888)
							bool tmp9 = (_g1 < iterations);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(888)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(888)
							if ((tmp10)){
								HX_STACK_LINE(888)
								break;
							}
							HX_STACK_LINE(888)
							int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(888)
							int i = tmp11;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(890)
							{
								HX_STACK_LINE(890)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(890)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(890)
								if ((tmp12)){
									HX_STACK_LINE(890)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(890)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(890)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(890)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(890)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(890)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(890)
								Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(890)
								Float tmp17 = curDelta;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(890)
								Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(890)
								tmp14->translate(tmp16,tmp18);
								HX_STACK_LINE(890)
								::openfl::_legacy::text::TextField tmp19 = this->textField;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(890)
								::flixel::math::FlxMatrix tmp20 = this->_matrix;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(890)
								graphic->draw(tmp19,tmp20,null(),null(),null(),null());
							}
							HX_STACK_LINE(891)
							{
								HX_STACK_LINE(891)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(891)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(891)
								if ((tmp12)){
									HX_STACK_LINE(891)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(891)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(891)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(891)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(891)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(891)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(891)
								tmp14->translate(tmp15,(int)0);
								HX_STACK_LINE(891)
								::openfl::_legacy::text::TextField tmp16 = this->textField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(891)
								::flixel::math::FlxMatrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(891)
								graphic->draw(tmp16,tmp17,null(),null(),null(),null());
							}
							HX_STACK_LINE(892)
							{
								HX_STACK_LINE(892)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(892)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(892)
								if ((tmp12)){
									HX_STACK_LINE(892)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(892)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(892)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(892)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(892)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(892)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(892)
								tmp14->translate(tmp15,(int)0);
								HX_STACK_LINE(892)
								::openfl::_legacy::text::TextField tmp16 = this->textField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(892)
								::flixel::math::FlxMatrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(892)
								graphic->draw(tmp16,tmp17,null(),null(),null(),null());
							}
							HX_STACK_LINE(893)
							{
								HX_STACK_LINE(893)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(893)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(893)
								if ((tmp12)){
									HX_STACK_LINE(893)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(893)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(893)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(893)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(893)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(893)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(893)
								tmp14->translate((int)0,tmp15);
								HX_STACK_LINE(893)
								::openfl::_legacy::text::TextField tmp16 = this->textField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(893)
								::flixel::math::FlxMatrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(893)
								graphic->draw(tmp16,tmp17,null(),null(),null(),null());
							}
							HX_STACK_LINE(894)
							{
								HX_STACK_LINE(894)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(894)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(894)
								if ((tmp12)){
									HX_STACK_LINE(894)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(894)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(894)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(894)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(894)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(894)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(894)
								tmp14->translate((int)0,tmp15);
								HX_STACK_LINE(894)
								::openfl::_legacy::text::TextField tmp16 = this->textField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(894)
								::flixel::math::FlxMatrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(894)
								graphic->draw(tmp16,tmp17,null(),null(),null(),null());
							}
							HX_STACK_LINE(895)
							{
								HX_STACK_LINE(895)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(895)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(895)
								if ((tmp12)){
									HX_STACK_LINE(895)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(895)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(895)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(895)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(895)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(895)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(895)
								Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(895)
								tmp14->translate(tmp16,(int)0);
								HX_STACK_LINE(895)
								::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(895)
								::flixel::math::FlxMatrix tmp18 = this->_matrix;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(895)
								graphic->draw(tmp17,tmp18,null(),null(),null(),null());
							}
							HX_STACK_LINE(896)
							{
								HX_STACK_LINE(896)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(896)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(896)
								if ((tmp12)){
									HX_STACK_LINE(896)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(896)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(896)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(896)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(896)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(896)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(896)
								Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(896)
								tmp14->translate(tmp16,(int)0);
								HX_STACK_LINE(896)
								::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(896)
								::flixel::math::FlxMatrix tmp18 = this->_matrix;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(896)
								graphic->draw(tmp17,tmp18,null(),null(),null(),null());
							}
							HX_STACK_LINE(897)
							{
								HX_STACK_LINE(897)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(897)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(897)
								if ((tmp12)){
									HX_STACK_LINE(897)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(897)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(897)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(897)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(897)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(897)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(897)
								Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(897)
								tmp14->translate((int)0,tmp16);
								HX_STACK_LINE(897)
								::openfl::_legacy::text::TextField tmp17 = this->textField;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(897)
								::flixel::math::FlxMatrix tmp18 = this->_matrix;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(897)
								graphic->draw(tmp17,tmp18,null(),null(),null(),null());
							}
							HX_STACK_LINE(899)
							::flixel::math::FlxMatrix tmp12 = this->_matrix;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(899)
							Float tmp13 = curDelta;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(899)
							tmp12->translate(tmp13,(int)0);
							HX_STACK_LINE(900)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(907)
					{
						HX_STACK_LINE(907)
						::openfl::_legacy::text::TextFormat tmp9 = this->_formatAdjusted;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(907)
						::openfl::_legacy::text::TextFormat FormatAdjusted = tmp9;		HX_STACK_VAR(FormatAdjusted,"FormatAdjusted");
						HX_STACK_LINE(907)
						::openfl::_legacy::text::TextFormat tmp10 = this->_defaultFormat;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(907)
						::openfl::_legacy::text::TextFormat tmp11 = FormatAdjusted;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(907)
						this->copyTextFormat(tmp10,tmp11,false);
						HX_STACK_LINE(907)
						Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(907)
						{
							HX_STACK_LINE(907)
							int tmp13 = this->borderColor;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(907)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(907)
							int tmp15 = (int(tmp14) & int((int)16777215));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(907)
							tmp12 = tmp15;
						}
						HX_STACK_LINE(907)
						FormatAdjusted->color = tmp12;
						HX_STACK_LINE(907)
						::openfl::_legacy::text::TextField tmp13 = this->textField;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(907)
						::openfl::_legacy::text::TextFormat tmp14 = FormatAdjusted;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(907)
						tmp13->setTextFormat(tmp14,null(),null());
						HX_STACK_LINE(907)
						{
							HX_STACK_LINE(907)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(907)
							Array< ::Dynamic > _g11 = this->_formatRanges;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(907)
							while((true)){
								HX_STACK_LINE(907)
								bool tmp15 = (_g1 < _g11->length);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(907)
								bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(907)
								if ((tmp16)){
									HX_STACK_LINE(907)
									break;
								}
								HX_STACK_LINE(907)
								::flixel::text::_FlxText::FlxTextFormatRange tmp17 = _g11->__get(_g1).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(907)
								::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp17;		HX_STACK_VAR(formatRange,"formatRange");
								HX_STACK_LINE(907)
								++(_g1);
								HX_STACK_LINE(907)
								::openfl::_legacy::text::TextField tmp18 = this->textField;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(907)
								::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(907)
								int tmp20 = tmp19.length;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(907)
								int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(907)
								int tmp22 = formatRange->range->start;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(907)
								bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(907)
								if ((tmp23)){
									HX_STACK_LINE(907)
									break;
								}
								else{
									HX_STACK_LINE(907)
									::openfl::_legacy::text::TextFormat tmp24 = formatRange->format->format;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(907)
									::openfl::_legacy::text::TextFormat textFormat = tmp24;		HX_STACK_VAR(textFormat,"textFormat");
									HX_STACK_LINE(907)
									::openfl::_legacy::text::TextFormat tmp25 = textFormat;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(907)
									::openfl::_legacy::text::TextFormat tmp26 = FormatAdjusted;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(907)
									this->copyTextFormat(tmp25,tmp26,false);
									HX_STACK_LINE(907)
									Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(907)
									{
										HX_STACK_LINE(907)
										int tmp28 = formatRange->format->borderColor;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(907)
										int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(907)
										int tmp30 = (int(tmp29) & int((int)16777215));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(907)
										tmp27 = tmp30;
									}
									HX_STACK_LINE(907)
									FormatAdjusted->color = tmp27;
								}
								HX_STACK_LINE(907)
								::openfl::_legacy::text::TextField tmp24 = this->textField;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(907)
								::openfl::_legacy::text::TextFormat tmp25 = FormatAdjusted;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(907)
								int tmp26 = formatRange->range->start;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(907)
								int tmp27 = formatRange->range->end;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(907)
								::openfl::_legacy::text::TextField tmp28 = this->textField;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(907)
								::String tmp29 = tmp28->get_text();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(907)
								int tmp30 = tmp29.length;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(907)
								Float tmp31 = ::Math_obj::min(tmp27,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(907)
								int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(907)
								tmp24->setTextFormat(tmp25,tmp26,tmp32);
							}
						}
					}
					HX_STACK_LINE(909)
					Float curDelta = delta;		HX_STACK_VAR(curDelta,"curDelta");
					HX_STACK_LINE(910)
					{
						HX_STACK_LINE(910)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(910)
						while((true)){
							HX_STACK_LINE(910)
							bool tmp9 = (_g1 < iterations);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(910)
							bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(910)
							if ((tmp10)){
								HX_STACK_LINE(910)
								break;
							}
							HX_STACK_LINE(910)
							int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(910)
							int i = tmp11;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(912)
							{
								HX_STACK_LINE(912)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(912)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(912)
								if ((tmp12)){
									HX_STACK_LINE(912)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(912)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(912)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(912)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(912)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(912)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(912)
								Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(912)
								Float tmp17 = curDelta;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(912)
								Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(912)
								tmp14->translate(tmp16,tmp18);
								HX_STACK_LINE(912)
								::openfl::_legacy::text::TextField tmp19 = this->textField;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(912)
								::flixel::math::FlxMatrix tmp20 = this->_matrix;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(912)
								graphic->draw(tmp19,tmp20,null(),null(),null(),null());
							}
							HX_STACK_LINE(913)
							{
								HX_STACK_LINE(913)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(913)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(913)
								if ((tmp12)){
									HX_STACK_LINE(913)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(913)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(913)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(913)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(913)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(913)
								Float tmp15 = (curDelta * (int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(913)
								tmp14->translate(tmp15,(int)0);
								HX_STACK_LINE(913)
								::openfl::_legacy::text::TextField tmp16 = this->textField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(913)
								::flixel::math::FlxMatrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(913)
								graphic->draw(tmp16,tmp17,null(),null(),null(),null());
							}
							HX_STACK_LINE(914)
							{
								HX_STACK_LINE(914)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(914)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(914)
								if ((tmp12)){
									HX_STACK_LINE(914)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(914)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(914)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(914)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(914)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(914)
								Float tmp15 = (curDelta * (int)2);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(914)
								tmp14->translate((int)0,tmp15);
								HX_STACK_LINE(914)
								::openfl::_legacy::text::TextField tmp16 = this->textField;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(914)
								::flixel::math::FlxMatrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(914)
								graphic->draw(tmp16,tmp17,null(),null(),null(),null());
							}
							HX_STACK_LINE(915)
							{
								HX_STACK_LINE(915)
								bool tmp12 = this->_hasBorderAlpha;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(915)
								::openfl::_legacy::display::BitmapData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(915)
								if ((tmp12)){
									HX_STACK_LINE(915)
									tmp13 = this->_borderPixels;
								}
								else{
									HX_STACK_LINE(915)
									::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(915)
									tmp13 = tmp14->bitmap;
								}
								HX_STACK_LINE(915)
								::openfl::_legacy::display::BitmapData graphic = tmp13;		HX_STACK_VAR(graphic,"graphic");
								HX_STACK_LINE(915)
								::flixel::math::FlxMatrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(915)
								Float tmp15 = curDelta;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(915)
								Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(915)
								Float tmp17 = (tmp16 * (int)2);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(915)
								tmp14->translate(tmp17,(int)0);
								HX_STACK_LINE(915)
								::openfl::_legacy::text::TextField tmp18 = this->textField;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(915)
								::flixel::math::FlxMatrix tmp19 = this->_matrix;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(915)
								graphic->draw(tmp18,tmp19,null(),null(),null(),null());
							}
							HX_STACK_LINE(917)
							::flixel::math::FlxMatrix tmp12 = this->_matrix;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(917)
							Float tmp13 = curDelta;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(917)
							Float tmp14 = curDelta;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(917)
							Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(917)
							tmp12->translate(tmp13,tmp15);
							HX_STACK_LINE(918)
							hx::AddEq(curDelta,delta);
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

Void FlxText_obj::applyBorderTransparency( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","applyBorderTransparency",0x59c1b674,"flixel.text.FlxText.applyBorderTransparency","flixel/text/FlxText.hx",926,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(927)
		bool tmp = this->_hasBorderAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(927)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(927)
		if ((tmp1)){
			HX_STACK_LINE(928)
			return null();
		}
		HX_STACK_LINE(930)
		::openfl::_legacy::geom::ColorTransform tmp2 = this->_borderColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(930)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(930)
		if ((tmp3)){
			HX_STACK_LINE(931)
			::openfl::_legacy::geom::ColorTransform tmp4 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(931)
			this->_borderColorTransform = tmp4;
		}
		HX_STACK_LINE(933)
		int tmp4 = this->borderColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(933)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(933)
		int tmp6 = (int(tmp5) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(933)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(933)
		Float tmp8 = (Float(tmp7) / Float((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(933)
		::openfl::_legacy::geom::ColorTransform tmp9 = this->_borderColorTransform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(933)
		tmp9->alphaMultiplier = tmp8;
		HX_STACK_LINE(934)
		::openfl::_legacy::display::BitmapData tmp10 = this->_borderPixels;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(934)
		::openfl::_legacy::display::BitmapData tmp11 = this->_borderPixels;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(934)
		::openfl::_legacy::geom::Rectangle tmp12 = tmp11->get_rect();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(934)
		::openfl::_legacy::geom::ColorTransform tmp13 = this->_borderColorTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(934)
		tmp10->colorTransform(tmp12,tmp13);
		HX_STACK_LINE(935)
		::flixel::graphics::FlxGraphic tmp14 = this->graphic;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(935)
		::openfl::_legacy::display::BitmapData tmp15 = this->_borderPixels;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(935)
		tmp14->bitmap->draw(tmp15,null(),null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderTransparency,(void))

Void FlxText_obj::copyTextWithOffset( Float x,Float y){
{
		HX_STACK_FRAME("flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",942,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(943)
		bool tmp = this->_hasBorderAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(943)
		::openfl::_legacy::display::BitmapData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(943)
		if ((tmp)){
			HX_STACK_LINE(943)
			tmp1 = this->_borderPixels;
		}
		else{
			HX_STACK_LINE(943)
			::flixel::graphics::FlxGraphic tmp2 = this->graphic;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(943)
			tmp1 = tmp2->bitmap;
		}
		HX_STACK_LINE(943)
		::openfl::_legacy::display::BitmapData graphic = tmp1;		HX_STACK_VAR(graphic,"graphic");
		HX_STACK_LINE(944)
		::flixel::math::FlxMatrix tmp2 = this->_matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(944)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(944)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(944)
		tmp2->translate(tmp3,tmp4);
		HX_STACK_LINE(945)
		::openfl::_legacy::text::TextField tmp5 = this->textField;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(945)
		::flixel::math::FlxMatrix tmp6 = this->_matrix;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(945)
		graphic->draw(tmp5,tmp6,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

Void FlxText_obj::applyFormats( ::openfl::_legacy::text::TextFormat FormatAdjusted,hx::Null< bool >  __o_UseBorderColor){
bool UseBorderColor = __o_UseBorderColor.Default(false);
	HX_STACK_FRAME("flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",949,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FormatAdjusted,"FormatAdjusted")
	HX_STACK_ARG(UseBorderColor,"UseBorderColor")
{
		HX_STACK_LINE(951)
		::openfl::_legacy::text::TextFormat tmp = this->_defaultFormat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(951)
		::openfl::_legacy::text::TextFormat tmp1 = FormatAdjusted;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(951)
		this->copyTextFormat(tmp,tmp1,false);
		HX_STACK_LINE(952)
		bool tmp2 = UseBorderColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(952)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(952)
		if ((tmp2)){
			HX_STACK_LINE(952)
			int tmp4 = this->borderColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(952)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(952)
			int tmp6 = (int(tmp5) & int((int)16777215));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(952)
			tmp3 = tmp6;
		}
		else{
			HX_STACK_LINE(952)
			::openfl::_legacy::text::TextFormat tmp4 = this->_defaultFormat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(952)
			tmp3 = tmp4->color;
		}
		HX_STACK_LINE(952)
		FormatAdjusted->color = tmp3;
		HX_STACK_LINE(953)
		::openfl::_legacy::text::TextField tmp4 = this->textField;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(953)
		::openfl::_legacy::text::TextFormat tmp5 = FormatAdjusted;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(953)
		tmp4->setTextFormat(tmp5,null(),null());
		HX_STACK_LINE(956)
		{
			HX_STACK_LINE(956)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(956)
			Array< ::Dynamic > _g1 = this->_formatRanges;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(956)
			while((true)){
				HX_STACK_LINE(956)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(956)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(956)
				if ((tmp7)){
					HX_STACK_LINE(956)
					break;
				}
				HX_STACK_LINE(956)
				::flixel::text::_FlxText::FlxTextFormatRange tmp8 = _g1->__get(_g).StaticCast< ::flixel::text::_FlxText::FlxTextFormatRange >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(956)
				::flixel::text::_FlxText::FlxTextFormatRange formatRange = tmp8;		HX_STACK_VAR(formatRange,"formatRange");
				HX_STACK_LINE(956)
				++(_g);
				HX_STACK_LINE(958)
				::openfl::_legacy::text::TextField tmp9 = this->textField;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(958)
				::String tmp10 = tmp9->get_text();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(958)
				int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(958)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(958)
				int tmp13 = formatRange->range->start;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(958)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(958)
				if ((tmp14)){
					HX_STACK_LINE(961)
					break;
				}
				else{
					HX_STACK_LINE(965)
					::openfl::_legacy::text::TextFormat tmp15 = formatRange->format->format;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(965)
					::openfl::_legacy::text::TextFormat textFormat = tmp15;		HX_STACK_VAR(textFormat,"textFormat");
					HX_STACK_LINE(966)
					::openfl::_legacy::text::TextFormat tmp16 = textFormat;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(966)
					::openfl::_legacy::text::TextFormat tmp17 = FormatAdjusted;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(966)
					this->copyTextFormat(tmp16,tmp17,false);
					HX_STACK_LINE(967)
					bool tmp18 = UseBorderColor;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(967)
					Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(967)
					if ((tmp18)){
						HX_STACK_LINE(967)
						int tmp20 = formatRange->format->borderColor;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(967)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(967)
						int tmp22 = (int(tmp21) & int((int)16777215));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(967)
						tmp19 = tmp22;
					}
					else{
						HX_STACK_LINE(967)
						tmp19 = textFormat->color;
					}
					HX_STACK_LINE(967)
					FormatAdjusted->color = tmp19;
				}
				HX_STACK_LINE(970)
				::openfl::_legacy::text::TextField tmp15 = this->textField;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(970)
				::openfl::_legacy::text::TextFormat tmp16 = FormatAdjusted;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(970)
				int tmp17 = formatRange->range->start;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(971)
				int tmp18 = formatRange->range->end;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(971)
				::openfl::_legacy::text::TextField tmp19 = this->textField;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(971)
				::String tmp20 = tmp19->get_text();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(971)
				int tmp21 = tmp20.length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(971)
				Float tmp22 = ::Math_obj::min(tmp18,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(971)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(970)
				tmp15->setTextFormat(tmp16,tmp17,tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

Void FlxText_obj::copyTextFormat( ::openfl::_legacy::text::TextFormat from,::openfl::_legacy::text::TextFormat to,hx::Null< bool >  __o_withAlign){
bool withAlign = __o_withAlign.Default(true);
	HX_STACK_FRAME("flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",976,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(withAlign,"withAlign")
{
		HX_STACK_LINE(977)
		to->font = from->font;
		HX_STACK_LINE(978)
		to->bold = from->bold;
		HX_STACK_LINE(979)
		to->italic = from->italic;
		HX_STACK_LINE(980)
		to->size = from->size;
		HX_STACK_LINE(981)
		to->color = from->color;
		HX_STACK_LINE(982)
		bool tmp = withAlign;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(982)
		if ((tmp)){
			HX_STACK_LINE(983)
			to->align = from->align;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

::openfl::_legacy::text::TextFormat FlxText_obj::dtfCopy( ){
	HX_STACK_FRAME("flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",992,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(993)
	::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	::openfl::_legacy::text::TextFormat tmp1 = tmp->get_defaultTextFormat();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(993)
	::openfl::_legacy::text::TextFormat dtf = tmp1;		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(994)
	::openfl::_legacy::text::TextFormat tmp2 = ::openfl::_legacy::text::TextFormat_obj::__new(dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(994)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

Void FlxText_obj::updateDefaultFormat( ){
{
		HX_STACK_FRAME("flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",998,0xdf165a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(999)
		::openfl::_legacy::text::TextField tmp = this->textField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(999)
		::openfl::_legacy::text::TextFormat tmp1 = this->_defaultFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(999)
		tmp->set_defaultTextFormat(tmp1);
		HX_STACK_LINE(1000)
		::openfl::_legacy::text::TextField tmp2 = this->textField;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1000)
		::openfl::_legacy::text::TextFormat tmp3 = this->_defaultFormat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1000)
		tmp2->setTextFormat(tmp3,null(),null());
		HX_STACK_LINE(1001)
		this->_regen = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
	HX_STACK_FRAME("flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",1005,0xdf165a6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_LINE(1006)
	::flixel::graphics::frames::FlxFramesCollection tmp = Frames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1006)
	this->super::set_frames(tmp);
	HX_STACK_LINE(1007)
	this->_regen = false;
	HX_STACK_LINE(1008)
	::flixel::graphics::frames::FlxFramesCollection tmp1 = Frames;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1008)
	return tmp1;
}


int FlxText_obj::VERTICAL_GUTTER;


FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_MARK_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_VISIT_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxText_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return get_size(); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return get_font(); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == hx::paccAlways) return get_bold(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return _font; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == hx::paccAlways) return get_italic(); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return _regen; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return dtfCopy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == hx::paccAlways) return get_embedded(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return get_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return get_bold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return set_bold_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return get_alignment(); }
		if (HX_FIELD_EQ(inName,"textField") ) { return textField; }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return drawFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return addFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == hx::paccAlways) return get_systemFont(); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return borderSize; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return get_fieldWidth(); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return get_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return set_italic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return set_frames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return borderStyle; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return applyMarkup_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return shadowOffset; }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return stampOnAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return removeFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return clearFormats_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return get_embedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return regenGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return applyFormats_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return borderQuality; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return _formatRanges; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return _borderPixels; }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return get_alignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return set_alignment_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return _defaultFormat; }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return setBorderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return set_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return get_fieldWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return get_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return set_systemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return copyTextFormat_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return _formatAdjusted; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { return _hasBorderAlpha; }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return set_borderStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return applyBorderStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return set_borderQuality_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return copyTextWithOffset_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"avoidSingleLineBlur") ) { return avoidSingleLineBlur_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return updateDefaultFormat_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { return _borderColorTransform; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyBorderTransparency") ) { return applyBorderTransparency_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxText_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue);text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == hx::paccAlways) return set_bold(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == hx::paccAlways) return set_italic(inValue); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == hx::paccAlways) return set_alignment(inValue); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == hx::paccAlways) return set_systemFont(inValue); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return set_borderSize(inValue);borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == hx::paccAlways) return set_fieldWidth(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == hx::paccAlways) return set_borderStyle(inValue);borderStyle=inValue.Cast< ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue);borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == hx::paccAlways) return set_borderQuality(inValue);borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { _hasBorderAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { _borderColorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("embedded","\x8a","\x19","\x62","\xde"));
	outFields->push(HX_HCSTRING("systemFont","\x5e","\xc4","\x43","\xf2"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("alignment","\xe3","\xe2","\x3d","\xea"));
	outFields->push(HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"));
	outFields->push(HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"));
	outFields->push(HX_HCSTRING("fieldWidth","\xec","\x2e","\xe5","\x97"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"));
	outFields->push(HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"));
	outFields->push(HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80"));
	outFields->push(HX_HCSTRING("_formatRanges","\x8c","\xb9","\x14","\xd7"));
	outFields->push(HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6"));
	outFields->push(HX_HCSTRING("_regen","\xfe","\x75","\xa6","\xe2"));
	outFields->push(HX_HCSTRING("_borderPixels","\x18","\xbc","\x51","\xcc"));
	outFields->push(HX_HCSTRING("_borderColorTransform","\x74","\x07","\x2f","\x6f"));
	outFields->push(HX_HCSTRING("_hasBorderAlpha","\x37","\xfe","\xf9","\xe8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxText_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsObject /*::flixel::text::FlxTextBorderStyle*/ ,(int)offsetof(FlxText_obj,borderStyle),HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10")},
	{hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06")},
	{hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(FlxText_obj,textField),HX_HCSTRING("textField","\xcd","\x24","\x81","\x99")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxText_obj,shadowOffset),HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxText_obj,_formatRanges),HX_HCSTRING("_formatRanges","\x8c","\xb9","\x14","\xd7")},
	{hx::fsString,(int)offsetof(FlxText_obj,_font),HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6")},
	{hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_HCSTRING("_regen","\xfe","\x75","\xa6","\xe2")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(FlxText_obj,_borderPixels),HX_HCSTRING("_borderPixels","\x18","\xbc","\x51","\xcc")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(FlxText_obj,_borderColorTransform),HX_HCSTRING("_borderColorTransform","\x74","\x07","\x2f","\x6f")},
	{hx::fsBool,(int)offsetof(FlxText_obj,_hasBorderAlpha),HX_HCSTRING("_hasBorderAlpha","\x37","\xfe","\xf9","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &FlxText_obj::VERTICAL_GUTTER,HX_HCSTRING("VERTICAL_GUTTER","\x04","\xb3","\x89","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("borderStyle","\xa5","\x70","\x96","\x10"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"),
	HX_HCSTRING("borderQuality","\x33","\x95","\x25","\x79"),
	HX_HCSTRING("textField","\xcd","\x24","\x81","\x99"),
	HX_HCSTRING("shadowOffset","\x93","\xfb","\x0b","\xdc"),
	HX_HCSTRING("_defaultFormat","\x19","\x53","\x59","\x36"),
	HX_HCSTRING("_formatAdjusted","\xa4","\xc9","\xb6","\x80"),
	HX_HCSTRING("_formatRanges","\x8c","\xb9","\x14","\xd7"),
	HX_HCSTRING("_font","\xae","\x79","\xd1","\xf6"),
	HX_HCSTRING("_regen","\xfe","\x75","\xa6","\xe2"),
	HX_HCSTRING("_borderPixels","\x18","\xbc","\x51","\xcc"),
	HX_HCSTRING("_borderColorTransform","\x74","\x07","\x2f","\x6f"),
	HX_HCSTRING("_hasBorderAlpha","\x37","\xfe","\xf9","\xe8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("drawFrame","\x89","\xad","\x8e","\xce"),
	HX_HCSTRING("stampOnAtlas","\xe9","\xf9","\x45","\x2b"),
	HX_HCSTRING("applyMarkup","\xb6","\x43","\x6b","\xf6"),
	HX_HCSTRING("addFormat","\x38","\xc4","\xb2","\xb5"),
	HX_HCSTRING("removeFormat","\x9b","\x2a","\xbc","\x6c"),
	HX_HCSTRING("clearFormats","\x4f","\x73","\xad","\xba"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setBorderStyle","\x23","\xac","\x54","\xb8"),
	HX_HCSTRING("set_fieldWidth","\xa9","\x9f","\xfa","\x2d"),
	HX_HCSTRING("get_fieldWidth","\x35","\xb7","\xda","\x0d"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_font","\x58","\x19","\x7b","\xc3"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_embedded","\x93","\xcd","\x7b","\x93"),
	HX_HCSTRING("get_systemFont","\xa7","\x4c","\x39","\x68"),
	HX_HCSTRING("set_systemFont","\x1b","\x35","\x59","\x88"),
	HX_HCSTRING("get_bold","\x0e","\x3d","\xd6","\xc0"),
	HX_HCSTRING("set_bold","\x82","\x96","\x33","\x6f"),
	HX_HCSTRING("get_italic","\xb9","\x9e","\xeb","\xf6"),
	HX_HCSTRING("set_italic","\x2d","\x3d","\x69","\xfa"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("get_alignment","\xba","\xb6","\xa1","\xab"),
	HX_HCSTRING("set_alignment","\xc6","\x98","\xa7","\xf0"),
	HX_HCSTRING("set_borderStyle","\x48","\xa5","\x43","\xcd"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("set_borderSize","\x8a","\x70","\x03","\x9d"),
	HX_HCSTRING("set_borderQuality","\x96","\x78","\x03","\xa3"),
	HX_HCSTRING("set_graphic","\xcb","\xc1","\x6e","\x04"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("regenGraphic","\x6b","\x55","\x39","\x8b"),
	HX_HCSTRING("avoidSingleLineBlur","\x78","\x2a","\x49","\x95"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("calcFrame","\x58","\x93","\x8c","\xf9"),
	HX_HCSTRING("applyBorderStyle","\xd7","\xbd","\xa2","\x48"),
	HX_HCSTRING("applyBorderTransparency","\x32","\x96","\xaf","\x17"),
	HX_HCSTRING("copyTextWithOffset","\xdb","\x97","\x6d","\x53"),
	HX_HCSTRING("applyFormats","\x8e","\x0d","\x9c","\x1e"),
	HX_HCSTRING("copyTextFormat","\xd9","\x63","\x8e","\x5f"),
	HX_HCSTRING("dtfCopy","\xab","\x51","\x45","\x87"),
	HX_HCSTRING("updateDefaultFormat","\x0f","\x5b","\x8e","\x8b"),
	HX_HCSTRING("set_frames","\xe3","\xbd","\x8a","\xa0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#endif

hx::Class FlxText_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTICAL_GUTTER","\x04","\xb3","\x89","\x07"),
	::String(null()) };

void FlxText_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxText","\xb0","\x4a","\x1b","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxText_obj >;
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

void FlxText_obj::__boot()
{
	VERTICAL_GUTTER= (int)4;
}

} // end namespace flixel
} // end namespace text
