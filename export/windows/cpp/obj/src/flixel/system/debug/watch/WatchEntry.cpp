#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#include <flixel/system/debug/watch/WatchEntry.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace flixel{
namespace _system{
namespace debug{
namespace watch{

Void WatchEntry_obj::__construct(Float y,Float nameWidth,Float valueWidth,Dynamic object,::String field,::String custom)
{
HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","new",0x96ec41fc,"flixel.system.debug.watch.WatchEntry.new","flixel/system/debug/watch/WatchEntry.hx",20,0x2bd112d2)
HX_STACK_THIS(this)
HX_STACK_ARG(y,"y")
HX_STACK_ARG(nameWidth,"nameWidth")
HX_STACK_ARG(valueWidth,"valueWidth")
HX_STACK_ARG(object,"object")
HX_STACK_ARG(field,"field")
HX_STACK_ARG(custom,"custom")
{
	HX_STACK_LINE(53)
	this->_isQuickWatch = false;
	HX_STACK_LINE(68)
	this->editing = false;
	HX_STACK_LINE(70)
	bool tmp = (object == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(70)
		tmp2 = (field == null());
	}
	else{
		HX_STACK_LINE(70)
		tmp2 = false;
	}
	HX_STACK_LINE(70)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	if ((tmp2)){
		HX_STACK_LINE(70)
		tmp3 = (custom != null());
	}
	else{
		HX_STACK_LINE(70)
		tmp3 = false;
	}
	HX_STACK_LINE(70)
	if ((tmp3)){
		HX_STACK_LINE(72)
		this->_isQuickWatch = true;
	}
	else{
		HX_STACK_LINE(76)
		this->object = object;
		HX_STACK_LINE(77)
		this->field = field;
	}
	HX_STACK_LINE(80)
	this->custom = custom;
	HX_STACK_LINE(82)
	::String tmp4 = ::flixel::_system::FlxAssets_obj::FONT_DEBUGGER;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	::String fontName = tmp4;		HX_STACK_VAR(fontName,"fontName");
	HX_STACK_LINE(85)
	bool tmp5 = this->_isQuickWatch;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	if ((tmp5)){
		HX_STACK_LINE(85)
		tmp6 = (int)10875373;
	}
	else{
		HX_STACK_LINE(85)
		tmp6 = (int)16777215;
	}
	HX_STACK_LINE(85)
	int color = tmp6;		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(86)
	::openfl::_legacy::text::TextFormat tmp7 = ::openfl::_legacy::text::TextFormat_obj::__new(fontName,(int)12,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	this->_whiteText = tmp7;
	HX_STACK_LINE(87)
	::openfl::_legacy::text::TextFormat tmp8 = ::openfl::_legacy::text::TextFormat_obj::__new(fontName,(int)12,(int)0,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	this->_blackText = tmp8;
	HX_STACK_LINE(89)
	::openfl::_legacy::text::TextField tmp9 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(89)
	this->nameDisplay = tmp9;
	HX_STACK_LINE(90)
	::openfl::_legacy::text::TextField tmp10 = this->nameDisplay;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(90)
	Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(90)
	tmp10->set_y(tmp11);
	HX_STACK_LINE(91)
	::openfl::_legacy::text::TextField tmp12 = this->nameDisplay;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	tmp12->set_multiline(false);
	HX_STACK_LINE(92)
	::openfl::_legacy::text::TextField tmp13 = this->nameDisplay;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(92)
	tmp13->set_selectable(true);
	HX_STACK_LINE(93)
	::openfl::_legacy::text::TextField tmp14 = this->nameDisplay;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	tmp14->set_embedFonts(true);
	HX_STACK_LINE(94)
	::openfl::_legacy::text::TextField tmp15 = this->nameDisplay;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(94)
	::openfl::_legacy::text::TextFormat tmp16 = this->_whiteText;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(94)
	tmp15->set_defaultTextFormat(tmp16);
	HX_STACK_LINE(96)
	::openfl::_legacy::text::TextField tmp17 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(96)
	this->valueDisplay = tmp17;
	HX_STACK_LINE(97)
	::openfl::_legacy::text::TextField tmp18 = this->valueDisplay;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(97)
	Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(97)
	tmp18->set_y(tmp19);
	HX_STACK_LINE(98)
	::openfl::_legacy::text::TextField tmp20 = this->valueDisplay;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(98)
	tmp20->set_height((int)20);
	HX_STACK_LINE(99)
	::openfl::_legacy::text::TextField tmp21 = this->valueDisplay;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(99)
	tmp21->set_multiline(false);
	HX_STACK_LINE(100)
	::openfl::_legacy::text::TextField tmp22 = this->valueDisplay;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(100)
	tmp22->set_selectable(true);
	HX_STACK_LINE(101)
	::openfl::_legacy::text::TextField tmp23 = this->valueDisplay;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(101)
	tmp23->doubleClickEnabled = true;
	HX_STACK_LINE(102)
	bool tmp24 = this->_isQuickWatch;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(102)
	bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(102)
	if ((tmp25)){
		HX_STACK_LINE(104)
		::openfl::_legacy::text::TextField tmp26 = this->valueDisplay;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(104)
		::String tmp27 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(104)
		Dynamic tmp28 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(104)
		tmp26->addEventListener(tmp27,tmp28,null(),null(),null());
		HX_STACK_LINE(105)
		::openfl::_legacy::text::TextField tmp29 = this->valueDisplay;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(105)
		::String tmp30 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(105)
		Dynamic tmp31 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(105)
		tmp29->addEventListener(tmp30,tmp31,null(),null(),null());
		HX_STACK_LINE(106)
		::openfl::_legacy::text::TextField tmp32 = this->valueDisplay;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(106)
		Dynamic tmp33 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(106)
		tmp32->addEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp33,null(),null(),null());
	}
	HX_STACK_LINE(108)
	::openfl::_legacy::text::TextField tmp26 = this->valueDisplay;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(108)
	tmp26->set_background(false);
	HX_STACK_LINE(109)
	::openfl::_legacy::text::TextField tmp27 = this->valueDisplay;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(109)
	tmp27->set_backgroundColor((int)16777215);
	HX_STACK_LINE(110)
	::openfl::_legacy::text::TextField tmp28 = this->valueDisplay;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(110)
	tmp28->set_embedFonts(true);
	HX_STACK_LINE(111)
	::openfl::_legacy::text::TextField tmp29 = this->valueDisplay;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(111)
	::openfl::_legacy::text::TextFormat tmp30 = this->_whiteText;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(111)
	tmp29->set_defaultTextFormat(tmp30);
	HX_STACK_LINE(113)
	Float tmp31 = nameWidth;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(113)
	Float tmp32 = valueWidth;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(113)
	this->updateWidth(tmp31,tmp32);
}
;
	return null();
}

//WatchEntry_obj::~WatchEntry_obj() { }

Dynamic WatchEntry_obj::__CreateEmpty() { return  new WatchEntry_obj; }
hx::ObjectPtr< WatchEntry_obj > WatchEntry_obj::__new(Float y,Float nameWidth,Float valueWidth,Dynamic object,::String field,::String custom)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(y,nameWidth,valueWidth,object,field,custom);
	return _result_;}

Dynamic WatchEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WatchEntry_obj > _result_ = new WatchEntry_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

hx::Object *WatchEntry_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

WatchEntry_obj::operator ::flixel::util::IFlxDestroyable_obj *()
	{ return new ::flixel::util::IFlxDestroyable_delegate_< WatchEntry_obj >(this); }
Void WatchEntry_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","destroy",0x012d9c96,"flixel.system.debug.watch.WatchEntry.destroy","flixel/system/debug/watch/WatchEntry.hx",117,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->object = null();
		HX_STACK_LINE(119)
		this->oldValue = null();
		HX_STACK_LINE(120)
		this->nameDisplay = null();
		HX_STACK_LINE(121)
		this->field = null();
		HX_STACK_LINE(122)
		this->custom = null();
		HX_STACK_LINE(123)
		::openfl::_legacy::text::TextField tmp = this->valueDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(125)
			::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			Dynamic tmp4 = this->onMouseUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			tmp2->removeEventListener(tmp3,tmp4,null());
			HX_STACK_LINE(126)
			::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			::String tmp6 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			Dynamic tmp7 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			tmp5->removeEventListener(tmp6,tmp7,null());
			HX_STACK_LINE(127)
			::openfl::_legacy::text::TextField tmp8 = this->valueDisplay;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			Dynamic tmp9 = this->onFocusLost_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			tmp8->removeEventListener(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),tmp9,null());
			HX_STACK_LINE(128)
			this->valueDisplay = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,destroy,(void))

Void WatchEntry_obj::setY( Float y){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","setY",0x7b1b895b,"flixel.system.debug.watch.WatchEntry.setY","flixel/system/debug/watch/WatchEntry.hx",133,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(134)
		::openfl::_legacy::text::TextField tmp = this->nameDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		tmp->set_y(tmp1);
		HX_STACK_LINE(135)
		::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,setY,(void))

Void WatchEntry_obj::updateWidth( Float nameWidth,Float valueWidth){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateWidth",0xb9088cd9,"flixel.system.debug.watch.WatchEntry.updateWidth","flixel/system/debug/watch/WatchEntry.hx",142,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nameWidth,"nameWidth")
		HX_STACK_ARG(valueWidth,"valueWidth")
		HX_STACK_LINE(143)
		::openfl::_legacy::text::TextField tmp = this->nameDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		Float tmp1 = nameWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		tmp->set_width(tmp1);
		HX_STACK_LINE(144)
		::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		Float tmp3 = valueWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		tmp2->set_width(tmp3);
		HX_STACK_LINE(145)
		::String tmp4 = this->custom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(147)
			::openfl::_legacy::text::TextField tmp6 = this->nameDisplay;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			::String tmp7 = this->custom;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			tmp6->set_text(tmp7);
		}
		else{
			HX_STACK_LINE(149)
			::String tmp6 = this->field;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			if ((tmp7)){
				HX_STACK_LINE(151)
				::openfl::_legacy::text::TextField tmp8 = this->nameDisplay;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				tmp8->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				HX_STACK_LINE(152)
				bool tmp9 = (nameWidth > (int)120);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(152)
				if ((tmp9)){
					HX_STACK_LINE(154)
					::openfl::_legacy::text::TextField tmp10 = this->nameDisplay;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(154)
					::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(154)
					{
						HX_STACK_LINE(154)
						Dynamic tmp12 = this->object;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(154)
						Dynamic Obj = tmp12;		HX_STACK_VAR(Obj,"Obj");
						HX_STACK_LINE(154)
						::hx::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(154)
						Dynamic tmp13 = Obj;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(154)
						bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(154)
						if ((tmp14)){
							HX_STACK_LINE(154)
							cl = ((::hx::Class)(Obj));
						}
						else{
							HX_STACK_LINE(154)
							Dynamic tmp15 = Obj;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(154)
							::hx::Class tmp16 = ::Type_obj::getClass(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(154)
							cl = tmp16;
						}
						HX_STACK_LINE(154)
						::hx::Class tmp15 = cl;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(154)
						::String tmp16 = ::Type_obj::getClassName(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(154)
						::String s = tmp16;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(154)
						bool tmp17 = (s != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(154)
						if ((tmp17)){
							HX_STACK_LINE(154)
							::String tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(154)
							::String tmp19 = ::StringTools_obj::replace(tmp18,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(154)
							s = tmp19;
							HX_STACK_LINE(154)
							{
								HX_STACK_LINE(154)
								int tmp20 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(154)
								int tmp21 = (tmp20 + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(154)
								::String tmp22 = s.substr(tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(154)
								s = tmp22;
							}
						}
						HX_STACK_LINE(154)
						tmp11 = s;
					}
					HX_STACK_LINE(154)
					::String tmp12 = (tmp11 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(154)
					tmp10->appendText(tmp12);
				}
				HX_STACK_LINE(157)
				::openfl::_legacy::text::TextField tmp10 = this->nameDisplay;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(157)
				::String tmp11 = this->field;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(157)
				tmp10->appendText(tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(WatchEntry_obj,updateWidth,(void))

Void WatchEntry_obj::updateValue( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","updateValue",0x205e5644,"flixel.system.debug.watch.WatchEntry.updateValue","flixel/system/debug/watch/WatchEntry.hx",166,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		bool tmp = this->editing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		if ((tmp1)){
			HX_STACK_LINE(167)
			tmp2 = this->_isQuickWatch;
		}
		else{
			HX_STACK_LINE(167)
			tmp2 = true;
		}
		HX_STACK_LINE(167)
		if ((tmp2)){
			HX_STACK_LINE(168)
			return null();
		}
		HX_STACK_LINE(170)
		Dynamic tmp3 = this->object;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		::String tmp4 = this->field;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		Dynamic tmp5 = ::Reflect_obj::getProperty(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		Dynamic property = tmp5;		HX_STACK_VAR(property,"property");
		HX_STACK_LINE(171)
		::openfl::_legacy::text::TextField tmp6 = this->valueDisplay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		Dynamic tmp7 = property;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		tmp6->set_text(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,updateValue,(void))

Void WatchEntry_obj::onMouseUp( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","onMouseUp",0x81353b1d,"flixel.system.debug.watch.WatchEntry.onMouseUp","flixel/system/debug/watch/WatchEntry.hx",179,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(180)
		this->editing = true;
		HX_STACK_LINE(182)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		tmp->enabled = false;
		HX_STACK_LINE(184)
		Dynamic tmp1 = this->object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		::String tmp2 = this->field;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		this->oldValue = tmp3;
		HX_STACK_LINE(185)
		::openfl::_legacy::text::TextField tmp4 = this->valueDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		tmp4->set_type(((Dynamic)((int)1)));
		HX_STACK_LINE(186)
		::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		::openfl::_legacy::text::TextFormat tmp6 = this->_blackText;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		tmp5->setTextFormat(tmp6,null(),null());
		HX_STACK_LINE(187)
		::openfl::_legacy::text::TextField tmp7 = this->valueDisplay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(187)
		tmp7->set_background(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onMouseUp,(void))

Void WatchEntry_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","onKeyUp",0x51e3c7d7,"flixel.system.debug.watch.WatchEntry.onKeyUp","flixel/system/debug/watch/WatchEntry.hx",191,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(192)
		bool tmp = (e->keyCode == (int)13);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		if ((tmp)){
			HX_STACK_LINE(193)
			this->submit();
		}
		else{
			HX_STACK_LINE(194)
			bool tmp1 = (e->keyCode == (int)27);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			if ((tmp1)){
				HX_STACK_LINE(195)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onKeyUp,(void))

Void WatchEntry_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","onFocusLost",0x4a935259,"flixel.system.debug.watch.WatchEntry.onFocusLost","flixel/system/debug/watch/WatchEntry.hx",200,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(200)
		this->cancel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WatchEntry_obj,onFocusLost,(void))

Void WatchEntry_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","cancel",0x68d5655e,"flixel.system.debug.watch.WatchEntry.cancel","flixel/system/debug/watch/WatchEntry.hx",207,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		::openfl::_legacy::text::TextField tmp = this->valueDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		Dynamic tmp1 = this->oldValue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		tmp->set_text(tmp2);
		HX_STACK_LINE(209)
		this->doneEditing();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,cancel,(void))

Void WatchEntry_obj::submit( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","submit",0x4aa7cffc,"flixel.system.debug.watch.WatchEntry.submit","flixel/system/debug/watch/WatchEntry.hx",217,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(219)
			Dynamic tmp = this->object;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(219)
			::String tmp1 = this->field;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(219)
			::openfl::_legacy::text::TextField tmp2 = this->valueDisplay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			::Reflect_obj::setProperty(tmp,tmp1,tmp3);
			HX_STACK_LINE(220)
			this->doneEditing();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(224)
					this->cancel();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,submit,(void))

::String WatchEntry_obj::toString( ){
	HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","toString",0x6e490990,"flixel.system.debug.watch.WatchEntry.toString","flixel/system/debug/watch/WatchEntry.hx",229,0x2bd112d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	::flixel::util::LabelValuePair tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	{
		HX_STACK_LINE(231)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			Dynamic tmp2 = this->object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			Dynamic Obj = tmp2;		HX_STACK_VAR(Obj,"Obj");
			HX_STACK_LINE(231)
			::hx::Class cl;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(231)
			Dynamic tmp3 = Obj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			if ((tmp4)){
				HX_STACK_LINE(231)
				cl = ((::hx::Class)(Obj));
			}
			else{
				HX_STACK_LINE(231)
				Dynamic tmp5 = Obj;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(231)
				::hx::Class tmp6 = ::Type_obj::getClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(231)
				cl = tmp6;
			}
			HX_STACK_LINE(231)
			::hx::Class tmp5 = cl;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			::String s = tmp6;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(231)
			bool tmp7 = (s != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			if ((tmp7)){
				HX_STACK_LINE(231)
				::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(231)
				::String tmp9 = ::StringTools_obj::replace(tmp8,HX_HCSTRING("::","\xc0","\x32","\x00","\x00"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(231)
				s = tmp9;
				HX_STACK_LINE(231)
				int tmp10 = s.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(231)
				int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(231)
				::String tmp12 = s.substr(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(231)
				s = tmp12;
			}
			HX_STACK_LINE(231)
			tmp1 = s;
		}
		HX_STACK_LINE(231)
		Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(231)
			_this->label = HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15");
			HX_STACK_LINE(231)
			_this->value = value;
			HX_STACK_LINE(231)
			tmp = _this;
		}
	}
	HX_STACK_LINE(232)
	::flixel::util::LabelValuePair tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		::flixel::util::FlxPool_flixel_util_LabelValuePair tmp2 = ::flixel::util::LabelValuePair_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		::flixel::util::LabelValuePair tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		::flixel::util::LabelValuePair _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(232)
		_this->label = HX_HCSTRING("field","\xba","\x94","\x93","\x00");
		HX_STACK_LINE(232)
		::String tmp4 = this->field;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		_this->value = tmp4;
		HX_STACK_LINE(232)
		tmp1 = _this;
	}
	HX_STACK_LINE(230)
	::String tmp2 = ::flixel::util::FlxStringUtil_obj::getDebugString(Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,toString,return )

Void WatchEntry_obj::doneEditing( ){
{
		HX_STACK_FRAME("flixel.system.debug.watch.WatchEntry","doneEditing",0xe7e43e52,"flixel.system.debug.watch.WatchEntry.doneEditing","flixel/system/debug/watch/WatchEntry.hx",239,0x2bd112d2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(240)
		::openfl::_legacy::text::TextField tmp = this->valueDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		tmp->set_type(((Dynamic)((int)0)));
		HX_STACK_LINE(241)
		::openfl::_legacy::text::TextField tmp1 = this->valueDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		::openfl::_legacy::text::TextFormat tmp2 = this->_whiteText;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		tmp1->setTextFormat(tmp2,null(),null());
		HX_STACK_LINE(242)
		::openfl::_legacy::text::TextField tmp3 = this->valueDisplay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		::openfl::_legacy::text::TextFormat tmp4 = this->_whiteText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		tmp3->set_defaultTextFormat(tmp4);
		HX_STACK_LINE(243)
		::openfl::_legacy::text::TextField tmp5 = this->valueDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(243)
		tmp5->set_background(false);
		HX_STACK_LINE(244)
		this->editing = false;
		HX_STACK_LINE(246)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(246)
		tmp6->enabled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WatchEntry_obj,doneEditing,(void))


WatchEntry_obj::WatchEntry_obj()
{
}

void WatchEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WatchEntry);
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(field,"field");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_MARK_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_MARK_MEMBER_NAME(editing,"editing");
	HX_MARK_MEMBER_NAME(oldValue,"oldValue");
	HX_MARK_MEMBER_NAME(_whiteText,"_whiteText");
	HX_MARK_MEMBER_NAME(_blackText,"_blackText");
	HX_MARK_MEMBER_NAME(_isQuickWatch,"_isQuickWatch");
	HX_MARK_END_CLASS();
}

void WatchEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(field,"field");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(nameDisplay,"nameDisplay");
	HX_VISIT_MEMBER_NAME(valueDisplay,"valueDisplay");
	HX_VISIT_MEMBER_NAME(editing,"editing");
	HX_VISIT_MEMBER_NAME(oldValue,"oldValue");
	HX_VISIT_MEMBER_NAME(_whiteText,"_whiteText");
	HX_VISIT_MEMBER_NAME(_blackText,"_blackText");
	HX_VISIT_MEMBER_NAME(_isQuickWatch,"_isQuickWatch");
}

Dynamic WatchEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { return field; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { return editing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { return oldValue; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_whiteText") ) { return _whiteText; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { return _blackText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { return nameDisplay; }
		if (HX_FIELD_EQ(inName,"updateWidth") ) { return updateWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return updateValue_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"doneEditing") ) { return doneEditing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { return valueDisplay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isQuickWatch") ) { return _isQuickWatch; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WatchEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"field") ) { field=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"editing") ) { editing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"oldValue") ) { oldValue=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_whiteText") ) { _whiteText=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blackText") ) { _blackText=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameDisplay") ) { nameDisplay=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"valueDisplay") ) { valueDisplay=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isQuickWatch") ) { _isQuickWatch=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WatchEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"));
	outFields->push(HX_HCSTRING("field","\xba","\x94","\x93","\x00"));
	outFields->push(HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"));
	outFields->push(HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"));
	outFields->push(HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"));
	outFields->push(HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"));
	outFields->push(HX_HCSTRING("oldValue","\x4a","\x99","\x83","\x18"));
	outFields->push(HX_HCSTRING("_whiteText","\xb7","\xc7","\x57","\x75"));
	outFields->push(HX_HCSTRING("_blackText","\xcd","\x95","\xfe","\x67"));
	outFields->push(HX_HCSTRING("_isQuickWatch","\x8b","\x7f","\xc1","\xa8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WatchEntry_obj,object),HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,field),HX_HCSTRING("field","\xba","\x94","\x93","\x00")},
	{hx::fsString,(int)offsetof(WatchEntry_obj,custom),HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,nameDisplay),HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(WatchEntry_obj,valueDisplay),HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3")},
	{hx::fsBool,(int)offsetof(WatchEntry_obj,editing),HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WatchEntry_obj,oldValue),HX_HCSTRING("oldValue","\x4a","\x99","\x83","\x18")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,_whiteText),HX_HCSTRING("_whiteText","\xb7","\xc7","\x57","\x75")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(WatchEntry_obj,_blackText),HX_HCSTRING("_blackText","\xcd","\x95","\xfe","\x67")},
	{hx::fsBool,(int)offsetof(WatchEntry_obj,_isQuickWatch),HX_HCSTRING("_isQuickWatch","\x8b","\x7f","\xc1","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"),
	HX_HCSTRING("field","\xba","\x94","\x93","\x00"),
	HX_HCSTRING("custom","\xb1","\x87","\x92","\x3f"),
	HX_HCSTRING("nameDisplay","\x37","\x8f","\x15","\x26"),
	HX_HCSTRING("valueDisplay","\xd1","\x12","\xc5","\xc3"),
	HX_HCSTRING("editing","\x18","\xa5","\xb7","\x25"),
	HX_HCSTRING("oldValue","\x4a","\x99","\x83","\x18"),
	HX_HCSTRING("_whiteText","\xb7","\xc7","\x57","\x75"),
	HX_HCSTRING("_blackText","\xcd","\x95","\xfe","\x67"),
	HX_HCSTRING("_isQuickWatch","\x8b","\x7f","\xc1","\xa8"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"),
	HX_HCSTRING("updateWidth","\x3d","\x1f","\xfb","\xaf"),
	HX_HCSTRING("updateValue","\xa8","\xe8","\x50","\x17"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onFocusLost","\xbd","\xe4","\x85","\x41"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("submit","\x18","\x58","\x06","\x9a"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("doneEditing","\xb6","\xd0","\xd6","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class WatchEntry_obj::__mClass;

void WatchEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.watch.WatchEntry","\x0a","\xd4","\x34","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchEntry_obj >;
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
} // end namespace system
} // end namespace debug
} // end namespace watch
