#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionList
#include <flixel/system/debug/completion/CompletionList.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListEntry
#include <flixel/system/debug/completion/CompletionListEntry.h>
#endif
#ifndef INCLUDED_flixel_system_debug_completion_CompletionListScrollBar
#include <flixel/system/debug/completion/CompletionListScrollBar.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
namespace flixel{
namespace _system{
namespace debug{
namespace completion{

Void CompletionList_obj::__construct(int capacity)
{
HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","new",0x2d62f836,"flixel.system.debug.completion.CompletionList.new","flixel/system/debug/completion/CompletionList.hx",13,0x5d64787a)
HX_STACK_THIS(this)
HX_STACK_ARG(capacity,"capacity")
{
	HX_STACK_LINE(27)
	this->upperVisibleIndex = (int)0;
	HX_STACK_LINE(26)
	this->lowerVisibleIndex = (int)0;
	HX_STACK_LINE(25)
	this->selectedIndex = (int)0;
	HX_STACK_LINE(23)
	this->entries = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(35)
	this->set_visible(false);
	HX_STACK_LINE(36)
	int tmp = (capacity - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	this->upperVisibleIndex = tmp;
	HX_STACK_LINE(37)
	int tmp1 = (capacity * (int)20);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->actualHeight = tmp1;
	HX_STACK_LINE(39)
	int tmp2 = capacity;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	this->createPopupEntries(tmp2);
	HX_STACK_LINE(40)
	this->createScrollBar();
	HX_STACK_LINE(41)
	this->updateSelectedItem();
	HX_STACK_LINE(43)
	::openfl::_legacy::display::MovieClip tmp3 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	::openfl::_legacy::display::Stage tmp4 = tmp3->get_stage();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	::String tmp5 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	Dynamic tmp6 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
}
;
	return null();
}

//CompletionList_obj::~CompletionList_obj() { }

Dynamic CompletionList_obj::__CreateEmpty() { return  new CompletionList_obj; }
hx::ObjectPtr< CompletionList_obj > CompletionList_obj::__new(int capacity)
{  hx::ObjectPtr< CompletionList_obj > _result_ = new CompletionList_obj();
	_result_->__construct(capacity);
	return _result_;}

Dynamic CompletionList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompletionList_obj > _result_ = new CompletionList_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CompletionList_obj::show( Float x,Array< ::String > items){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","show",0x8c868867,"flixel.system.debug.completion.CompletionList.show","flixel/system/debug/completion/CompletionList.hx",47,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(items,"items")
		HX_STACK_LINE(48)
		this->set_visible(true);
		HX_STACK_LINE(49)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->set_x(tmp);
		HX_STACK_LINE(50)
		this->originalItems = items;
		HX_STACK_LINE(51)
		this->set_filter(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(53)
		this->updateEntries();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CompletionList_obj,show,(void))

Void CompletionList_obj::setY( Float y){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","setY",0x8c8445e1,"flixel.system.debug.completion.CompletionList.setY","flixel/system/debug/completion/CompletionList.hx",57,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(58)
		Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		int tmp1 = this->actualHeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		this->set_y(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,setY,(void))

Void CompletionList_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","close",0x356c610e,"flixel.system.debug.completion.CompletionList.close","flixel/system/debug/completion/CompletionList.hx",62,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->set_visible(false);
		HX_STACK_LINE(64)
		this->set_filter(null());
		HX_STACK_LINE(66)
		Dynamic tmp = this->closed_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(67)
			this->closed();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,close,(void))

Void CompletionList_obj::createPopupEntries( int amount){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","createPopupEntries",0x28517e8a,"flixel.system.debug.completion.CompletionList.createPopupEntries","flixel/system/debug/completion/CompletionList.hx",72,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(amount,"amount")
		HX_STACK_LINE(72)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		while((true)){
			HX_STACK_LINE(72)
			bool tmp = (_g < amount);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			if ((tmp1)){
				HX_STACK_LINE(72)
				break;
			}
			HX_STACK_LINE(72)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(74)
			::flixel::_system::debug::completion::CompletionListEntry tmp3 = ::flixel::_system::debug::completion::CompletionListEntry_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			::flixel::_system::debug::completion::CompletionListEntry entry = tmp3;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(75)
			::flixel::_system::debug::completion::CompletionListEntry tmp4 = entry;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			this->entries->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
			HX_STACK_LINE(76)
			::flixel::_system::debug::completion::CompletionListEntry tmp5 = entry;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			this->addChild(tmp5);
			HX_STACK_LINE(77)
			int tmp6 = ((int)20 * i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			entry->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,createPopupEntries,(void))

Void CompletionList_obj::createScrollBar( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","createScrollBar",0x8887a200,"flixel.system.debug.completion.CompletionList.createScrollBar","flixel/system/debug/completion/CompletionList.hx",82,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		int tmp = this->actualHeight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		::flixel::_system::debug::completion::CompletionListScrollBar tmp1 = ::flixel::_system::debug::completion::CompletionListScrollBar_obj::__new((int)150,(int)0,(int)5,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		this->scrollBar = tmp1;
		HX_STACK_LINE(85)
		::flixel::_system::debug::completion::CompletionListScrollBar tmp2 = this->scrollBar;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		this->addChild(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,createScrollBar,(void))

Void CompletionList_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","onKeyDown",0xde49ce98,"flixel.system.debug.completion.CompletionList.onKeyDown","flixel/system/debug/completion/CompletionList.hx",89,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(90)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		if ((tmp1)){
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			int tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			switch( (int)(tmp2)){
				case (int)40: {
					HX_STACK_LINE(96)
					this->updateIndices((int)1);
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(99)
					this->updateIndices((int)-1);
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(102)
					Dynamic tmp3 = this->completed_dyn();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(102)
					bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(102)
					if ((tmp4)){
						HX_STACK_LINE(103)
						int tmp5 = this->selectedIndex;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(103)
						::String tmp6 = this->items->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(103)
						this->completed(tmp6);
					}
					HX_STACK_LINE(104)
					this->close();
					HX_STACK_LINE(105)
					return null();
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(108)
					this->close();
					HX_STACK_LINE(109)
					return null();
				}
				;break;
			}
		}
		HX_STACK_LINE(112)
		this->updateEntries();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,onKeyDown,(void))

Void CompletionList_obj::updateIndices( int modifier){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","updateIndices",0x00d63b74,"flixel.system.debug.completion.CompletionList.updateIndices","flixel/system/debug/completion/CompletionList.hx",116,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(117)
		int tmp = this->selectedIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		int tmp1 = modifier;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		int tmp3 = this->bound(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		this->selectedIndex = tmp3;
		HX_STACK_LINE(118)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			int tmp5 = this->selectedIndex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			Float Value = tmp5;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(118)
			int tmp6 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			Dynamic Min = tmp6;		HX_STACK_VAR(Min,"Min");
			HX_STACK_LINE(118)
			int tmp7 = this->upperVisibleIndex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			Dynamic Max = tmp7;		HX_STACK_VAR(Max,"Max");
			HX_STACK_LINE(118)
			bool tmp8 = (Min == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(118)
			if ((tmp10)){
				HX_STACK_LINE(118)
				tmp11 = (Value >= Min);
			}
			else{
				HX_STACK_LINE(118)
				tmp11 = true;
			}
			HX_STACK_LINE(118)
			if ((tmp11)){
				HX_STACK_LINE(118)
				bool tmp12 = (Max == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(118)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(118)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(118)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(118)
				if ((tmp17)){
					HX_STACK_LINE(118)
					tmp4 = (Value <= Max);
				}
				else{
					HX_STACK_LINE(118)
					tmp4 = true;
				}
			}
			else{
				HX_STACK_LINE(118)
				tmp4 = false;
			}
		}
		HX_STACK_LINE(118)
		if ((tmp4)){
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(122)
		int tmp5 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		int tmp6 = modifier;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		int tmp8 = this->bound(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		this->lowerVisibleIndex = tmp8;
		HX_STACK_LINE(123)
		int tmp9 = this->upperVisibleIndex;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		int tmp10 = modifier;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(123)
		int tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		int tmp12 = this->bound(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(123)
		this->upperVisibleIndex = tmp12;
		HX_STACK_LINE(124)
		int tmp13 = this->upperVisibleIndex;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(124)
		int tmp14 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(124)
		int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		int range = tmp15;		HX_STACK_VAR(range,"range");
		HX_STACK_LINE(126)
		int tmp16 = range;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		int tmp17 = this->items->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(126)
		bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(126)
		if ((tmp18)){
			HX_STACK_LINE(127)
			return null();
		}
		HX_STACK_LINE(130)
		int tmp19 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(130)
		bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(130)
		if ((tmp20)){
			HX_STACK_LINE(131)
			int tmp21 = this->entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			int tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(131)
			this->upperVisibleIndex = tmp22;
		}
		else{
			HX_STACK_LINE(132)
			int tmp21 = this->upperVisibleIndex;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(132)
			int tmp22 = this->items->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			int tmp23 = (tmp22 - (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(132)
			bool tmp24 = (tmp21 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(132)
			if ((tmp24)){
				HX_STACK_LINE(133)
				int tmp25 = this->items->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(133)
				int tmp26 = this->entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(133)
				int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(133)
				this->lowerVisibleIndex = tmp27;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,updateIndices,(void))

int CompletionList_obj::bound( int index){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","bound",0xa405f994,"flixel.system.debug.completion.CompletionList.bound","flixel/system/debug/completion/CompletionList.hx",137,0x5d64787a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(138)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		int tmp1 = this->items->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		Dynamic Max = tmp2;		HX_STACK_VAR(Max,"Max");
		HX_STACK_LINE(138)
		bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		if ((tmp3)){
			HX_STACK_LINE(138)
			tmp4 = (index < (int)0);
		}
		else{
			HX_STACK_LINE(138)
			tmp4 = false;
		}
		HX_STACK_LINE(138)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		if ((tmp4)){
			HX_STACK_LINE(138)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(138)
			tmp5 = index;
		}
		HX_STACK_LINE(138)
		Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(138)
		bool tmp6 = (Max != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(138)
		if ((tmp6)){
			HX_STACK_LINE(138)
			tmp7 = (lowerBound > Max);
		}
		else{
			HX_STACK_LINE(138)
			tmp7 = false;
		}
		HX_STACK_LINE(138)
		if ((tmp7)){
			HX_STACK_LINE(138)
			tmp = Max;
		}
		else{
			HX_STACK_LINE(138)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(138)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,bound,return )

Void CompletionList_obj::updateEntries( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","updateEntries",0x96e1219d,"flixel.system.debug.completion.CompletionList.updateEntries","flixel/system/debug/completion/CompletionList.hx",142,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		this->updateLabels();
		HX_STACK_LINE(144)
		this->updateSelectedItem();
		HX_STACK_LINE(145)
		::flixel::_system::debug::completion::CompletionListScrollBar tmp = this->scrollBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		int tmp1 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		int tmp2 = this->items->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		int tmp3 = this->entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		tmp->__Field(HX_HCSTRING("updateHandle","\x91","\x2a","\xc1","\xb7"), hx::paccDynamic )(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,updateEntries,(void))

Void CompletionList_obj::updateLabels( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","updateLabels",0x98d4fc52,"flixel.system.debug.completion.CompletionList.updateLabels","flixel/system/debug/completion/CompletionList.hx",150,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(150)
		int tmp = this->entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		while((true)){
			HX_STACK_LINE(150)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			if ((tmp2)){
				HX_STACK_LINE(150)
				break;
			}
			HX_STACK_LINE(150)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(152)
			int tmp4 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			::String tmp7 = this->items->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			::String selectedItem = tmp7;		HX_STACK_VAR(selectedItem,"selectedItem");
			HX_STACK_LINE(153)
			bool tmp8 = (selectedItem == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(153)
			if ((tmp8)){
				HX_STACK_LINE(154)
				selectedItem = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(155)
			::flixel::_system::debug::completion::CompletionListEntry tmp9 = this->entries->__GetItem(i);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(155)
			::String tmp10 = selectedItem;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(155)
			tmp9->__Field(HX_HCSTRING("setItem","\xd5","\x05","\x44","\x0b"), hx::paccDynamic )(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,updateLabels,(void))

Void CompletionList_obj::updateSelectedItem( ){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","updateSelectedItem",0x02be39a1,"flixel.system.debug.completion.CompletionList.updateSelectedItem","flixel/system/debug/completion/CompletionList.hx",160,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(161)
			Array< ::Dynamic > _g1 = this->entries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(161)
			while((true)){
				HX_STACK_LINE(161)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(161)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(161)
				if ((tmp1)){
					HX_STACK_LINE(161)
					break;
				}
				HX_STACK_LINE(161)
				::flixel::_system::debug::completion::CompletionListEntry tmp2 = _g1->__get(_g).StaticCast< ::flixel::_system::debug::completion::CompletionListEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(161)
				::flixel::_system::debug::completion::CompletionListEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(161)
				++(_g);
				HX_STACK_LINE(162)
				entry->__Field(HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"), hx::paccDynamic )(false);
			}
		}
		HX_STACK_LINE(163)
		int tmp = this->selectedIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		int tmp1 = this->lowerVisibleIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		::flixel::_system::debug::completion::CompletionListEntry tmp3 = this->entries->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		tmp3->__Field(HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"), hx::paccDynamic )(true);
		HX_STACK_LINE(165)
		Dynamic tmp4 = this->selectionChanged_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		if ((tmp5)){
			HX_STACK_LINE(166)
			int tmp6 = this->selectedIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			::String tmp7 = this->items->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			this->selectionChanged(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CompletionList_obj,updateSelectedItem,(void))

Void CompletionList_obj::setItems( Array< ::String > items){
{
		HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","setItems",0x6843c568,"flixel.system.debug.completion.CompletionList.setItems","flixel/system/debug/completion/CompletionList.hx",170,0x5d64787a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(items,"items")
		HX_STACK_LINE(171)
		bool tmp = (items == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		if ((tmp)){
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(173)
		bool tmp1 = (items->length == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(174)
			this->close();
		}
		HX_STACK_LINE(176)
		this->items = items;
		HX_STACK_LINE(178)
		this->selectedIndex = (int)0;
		HX_STACK_LINE(179)
		this->lowerVisibleIndex = (int)0;
		HX_STACK_LINE(180)
		int tmp2 = this->entries->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		this->upperVisibleIndex = tmp3;
		HX_STACK_LINE(181)
		this->updateEntries();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,setItems,(void))

Array< ::String > CompletionList_obj::filterItems( ::String filter){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","filterItems",0xe29aeefe,"flixel.system.debug.completion.CompletionList.filterItems","flixel/system/debug/completion/CompletionList.hx",185,0x5d64787a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(186)
	bool tmp = (filter == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	if ((tmp)){
		HX_STACK_LINE(187)
		filter = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(189)
	::String tmp1 = filter;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::String,filter)
	int __ArgCount() const { return 1; }
	bool run(::String item){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/completion/CompletionList.hx",190,0x5d64787a)
		HX_STACK_ARG(item,"item")
		{
			HX_STACK_LINE(191)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(191)
			{
				HX_STACK_LINE(191)
				::String tmp3 = item.toLowerCase();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(191)
				::String s = tmp3;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(191)
				::String tmp4 = filter.toLowerCase();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(191)
				::String str = tmp4;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(191)
				::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(191)
				int tmp6 = s.indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(191)
				tmp2 = (tmp6 != (int)-1);
			}
			HX_STACK_LINE(191)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(189)
	return this->sortItems(tmp1,this->originalItems->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic )( Dynamic(new _Function_1_1(filter))));
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,filterItems,return )

Array< ::String > CompletionList_obj::sortItems( ::String filter,Array< ::String > items){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","sortItems",0x34d82c18,"flixel.system.debug.completion.CompletionList.sortItems","flixel/system/debug/completion/CompletionList.hx",201,0x5d64787a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(items,"items")
	HX_STACK_LINE(200)
	::flixel::_system::debug::completion::CompletionList _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(202)
	bool tmp = (filter == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(203)
		return items;
	}

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::String,filter,::flixel::_system::debug::completion::CompletionList,_g)
	int __ArgCount() const { return 2; }
	int run(::String a,::String b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/system/debug/completion/CompletionList.hx",206,0x5d64787a)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(207)
			::String tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(207)
			::String tmp2 = filter;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			int tmp3 = _g->__Field(HX_HCSTRING("startsWithExt","\x6a","\x68","\x65","\x09"), hx::paccDynamic )(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			int valueA = tmp3;		HX_STACK_VAR(valueA,"valueA");
			HX_STACK_LINE(208)
			::String tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			::String tmp5 = filter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			int tmp6 = _g->__Field(HX_HCSTRING("startsWithExt","\x6a","\x68","\x65","\x09"), hx::paccDynamic )(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(208)
			int valueB = tmp6;		HX_STACK_VAR(valueB,"valueB");
			HX_STACK_LINE(209)
			bool tmp7 = (valueA > valueB);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			if ((tmp7)){
				HX_STACK_LINE(210)
				int tmp8 = valueA;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(210)
				int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(210)
				return tmp9;
			}
			HX_STACK_LINE(211)
			bool tmp8 = (valueB > valueA);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			if ((tmp8)){
				HX_STACK_LINE(212)
				int tmp9 = valueB;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(212)
				return tmp9;
			}
			HX_STACK_LINE(214)
			bool tmp9 = (valueA == valueB);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			if ((tmp9)){
				HX_STACK_LINE(215)
				int tmp10 = (a.length - b.length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(215)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(215)
				return tmp11;
			}
			HX_STACK_LINE(216)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(205)
	items->sort( Dynamic(new _Function_1_1(filter,_g)));
	HX_STACK_LINE(218)
	return items;
}


HX_DEFINE_DYNAMIC_FUNC2(CompletionList_obj,sortItems,return )

int CompletionList_obj::startsWithExt( ::String s,::String start){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","startsWithExt",0x5b78f7c0,"flixel.system.debug.completion.CompletionList.startsWithExt","flixel/system/debug/completion/CompletionList.hx",225,0x5d64787a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(start,"start")
	HX_STACK_LINE(226)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	::String tmp1 = start;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	bool tmp2 = ::StringTools_obj::startsWith(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	if ((tmp2)){
		HX_STACK_LINE(227)
		return (int)2;
	}
	HX_STACK_LINE(228)
	::EReg tmp3 = ::EReg_obj::__new(HX_HCSTRING("^[_]+","\x30","\x59","\x19","\x5c"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(228)
	::String tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(228)
	::String tmp5 = tmp3->replace(tmp4,HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(228)
	::String tmp6 = start;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(228)
	bool tmp7 = ::StringTools_obj::startsWith(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(228)
	if ((tmp7)){
		HX_STACK_LINE(229)
		return (int)1;
	}
	HX_STACK_LINE(230)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(CompletionList_obj,startsWithExt,return )

::String CompletionList_obj::set_filter( ::String filter){
	HX_STACK_FRAME("flixel.system.debug.completion.CompletionList","set_filter",0x1b994cdf,"flixel.system.debug.completion.CompletionList.set_filter","flixel/system/debug/completion/CompletionList.hx",234,0x5d64787a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(235)
	::String tmp = filter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::String tmp1 = this->filter;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	if ((tmp2)){
		HX_STACK_LINE(236)
		::String tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		return tmp3;
	}
	HX_STACK_LINE(238)
	::String tmp3 = filter;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	this->setItems(this->filterItems(tmp3));
	HX_STACK_LINE(239)
	::String tmp4 = this->filter = filter;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(239)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(CompletionList_obj,set_filter,return )


CompletionList_obj::CompletionList_obj()
{
}

void CompletionList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompletionList);
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(selectionChanged,"selectionChanged");
	HX_MARK_MEMBER_NAME(closed,"closed");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(entries,"entries");
	HX_MARK_MEMBER_NAME(originalItems,"originalItems");
	HX_MARK_MEMBER_NAME(selectedIndex,"selectedIndex");
	HX_MARK_MEMBER_NAME(lowerVisibleIndex,"lowerVisibleIndex");
	HX_MARK_MEMBER_NAME(upperVisibleIndex,"upperVisibleIndex");
	HX_MARK_MEMBER_NAME(scrollBar,"scrollBar");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CompletionList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(selectionChanged,"selectionChanged");
	HX_VISIT_MEMBER_NAME(closed,"closed");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(entries,"entries");
	HX_VISIT_MEMBER_NAME(originalItems,"originalItems");
	HX_VISIT_MEMBER_NAME(selectedIndex,"selectedIndex");
	HX_VISIT_MEMBER_NAME(lowerVisibleIndex,"lowerVisibleIndex");
	HX_VISIT_MEMBER_NAME(upperVisibleIndex,"upperVisibleIndex");
	HX_VISIT_MEMBER_NAME(scrollBar,"scrollBar");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CompletionList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"bound") ) { return bound_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"closed") ) { return closed; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { return entries; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setItems") ) { return setItems_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return completed; }
		if (HX_FIELD_EQ(inName,"scrollBar") ) { return scrollBar; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"sortItems") ) { return sortItems_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterItems") ) { return filterItems_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return actualHeight; }
		if (HX_FIELD_EQ(inName,"updateLabels") ) { return updateLabels_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalItems") ) { return originalItems; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return selectedIndex; }
		if (HX_FIELD_EQ(inName,"updateIndices") ) { return updateIndices_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEntries") ) { return updateEntries_dyn(); }
		if (HX_FIELD_EQ(inName,"startsWithExt") ) { return startsWithExt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createScrollBar") ) { return createScrollBar_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { return selectionChanged; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lowerVisibleIndex") ) { return lowerVisibleIndex; }
		if (HX_FIELD_EQ(inName,"upperVisibleIndex") ) { return upperVisibleIndex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createPopupEntries") ) { return createPopupEntries_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSelectedItem") ) { return updateSelectedItem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompletionList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"closed") ) { closed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == hx::paccAlways) return set_filter(inValue);filter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entries") ) { entries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollBar") ) { scrollBar=inValue.Cast< ::flixel::_system::debug::completion::CompletionListScrollBar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalItems") ) { originalItems=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { selectedIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectionChanged") ) { selectionChanged=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lowerVisibleIndex") ) { lowerVisibleIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upperVisibleIndex") ) { upperVisibleIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CompletionList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"));
	outFields->push(HX_HCSTRING("originalItems","\xef","\xa1","\xfd","\x1c"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("lowerVisibleIndex","\xe1","\x78","\x7b","\xb7"));
	outFields->push(HX_HCSTRING("upperVisibleIndex","\xc2","\xa5","\x5c","\x06"));
	outFields->push(HX_HCSTRING("scrollBar","\xc6","\x57","\xfc","\x3d"));
	outFields->push(HX_HCSTRING("actualHeight","\x15","\x25","\xab","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CompletionList_obj,completed),HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CompletionList_obj,selectionChanged),HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CompletionList_obj,closed),HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e")},
	{hx::fsString,(int)offsetof(CompletionList_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CompletionList_obj,items),HX_HCSTRING("items","\x00","\xac","\x0c","\xc2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CompletionList_obj,entries),HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(CompletionList_obj,originalItems),HX_HCSTRING("originalItems","\xef","\xa1","\xfd","\x1c")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,selectedIndex),HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,lowerVisibleIndex),HX_HCSTRING("lowerVisibleIndex","\xe1","\x78","\x7b","\xb7")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,upperVisibleIndex),HX_HCSTRING("upperVisibleIndex","\xc2","\xa5","\x5c","\x06")},
	{hx::fsObject /*::flixel::_system::debug::completion::CompletionListScrollBar*/ ,(int)offsetof(CompletionList_obj,scrollBar),HX_HCSTRING("scrollBar","\xc6","\x57","\xfc","\x3d")},
	{hx::fsInt,(int)offsetof(CompletionList_obj,actualHeight),HX_HCSTRING("actualHeight","\x15","\x25","\xab","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("completed","\x8b","\xa1","\x38","\x4f"),
	HX_HCSTRING("selectionChanged","\x08","\xc2","\xcb","\x3c"),
	HX_HCSTRING("closed","\xac","\xa9","\x51","\x0e"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"),
	HX_HCSTRING("entries","\x50","\x2d","\x5f","\x79"),
	HX_HCSTRING("originalItems","\xef","\xa1","\xfd","\x1c"),
	HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"),
	HX_HCSTRING("lowerVisibleIndex","\xe1","\x78","\x7b","\xb7"),
	HX_HCSTRING("upperVisibleIndex","\xc2","\xa5","\x5c","\x06"),
	HX_HCSTRING("scrollBar","\xc6","\x57","\xfc","\x3d"),
	HX_HCSTRING("actualHeight","\x15","\x25","\xab","\xb7"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("createPopupEntries","\xa0","\x65","\xfa","\x73"),
	HX_HCSTRING("createScrollBar","\x2a","\x11","\xf1","\xde"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("updateIndices","\x1e","\xac","\xc2","\xae"),
	HX_HCSTRING("bound","\x3e","\xb0","\xfc","\xb6"),
	HX_HCSTRING("updateEntries","\x47","\x92","\xcd","\x44"),
	HX_HCSTRING("updateLabels","\xe8","\xce","\x40","\x49"),
	HX_HCSTRING("updateSelectedItem","\xb7","\x20","\x67","\x4e"),
	HX_HCSTRING("setItems","\xfe","\x14","\x41","\xd0"),
	HX_HCSTRING("filterItems","\x28","\x01","\xbf","\x71"),
	HX_HCSTRING("sortItems","\xc2","\x7f","\x80","\xca"),
	HX_HCSTRING("startsWithExt","\x6a","\x68","\x65","\x09"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompletionList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompletionList_obj::__mClass,"__mClass");
};

#endif

hx::Class CompletionList_obj::__mClass;

void CompletionList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.completion.CompletionList","\x44","\x65","\x51","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CompletionList_obj >;
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
} // end namespace completion
