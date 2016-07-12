#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.MenuState","new",0xfb0d7598,"states.MenuState.new","states/MenuState.hx",10,0x6393c259)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(10)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",13,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		this->super::create();
		HX_STACK_LINE(16)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		::flixel::FlxSprite cursor = tmp;		HX_STACK_VAR(cursor,"cursor");
		HX_STACK_LINE(17)
		cursor->loadGraphic(HX_HCSTRING("assets/images/sys/cursor.png","\xfe","\xd0","\xdd","\x87"),false,(int)8,(int)8,null(),null());
		HX_STACK_LINE(18)
		::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::openfl::_legacy::display::BitmapData tmp2 = cursor->get_pixels();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		tmp1->load(tmp2,(int)4,null(),null());
		HX_STACK_LINE(20)
		int tmp3 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		Float tmp5 = (tmp4 - (int)45);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		Float tmp8 = (tmp7 - (int)10);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		Dynamic tmp9 = this->startGame_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp5,tmp8,HX_HCSTRING("START GAME","\x90","\xf0","\xf6","\x98"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(20)
		::flixel::ui::FlxButton startgame = tmp10;		HX_STACK_VAR(startgame,"startgame");
		HX_STACK_LINE(22)
		::flixel::ui::FlxButton tmp11 = startgame;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		this->add(tmp11);
	}
return null();
}


Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("states.MenuState","update",0x7b24f3d1,"states.MenuState.update","states/MenuState.hx",27,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(28)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::String s = HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(28)
				::String tmp2 = s.toUpperCase();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(28)
				s = tmp2;
				HX_STACK_LINE(28)
				::haxe::ds::StringMap tmp3 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(28)
				::String tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(28)
				bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(28)
				if ((tmp5)){
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp6 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(28)
					::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(28)
					Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(28)
					tmp1 = tmp8;
				}
				else{
					HX_STACK_LINE(28)
					tmp1 = (int)-1;
				}
			}
			HX_STACK_LINE(28)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp1);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(28)
			::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			tmp = tmp2->checkKeyArrayState(KeyArray,(int)2);
		}
		HX_STACK_LINE(28)
		if ((tmp)){
			HX_STACK_LINE(29)
			this->startGame();
		}
		HX_STACK_LINE(31)
		Float tmp1 = elapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		this->super::update(tmp1);
	}
return null();
}


Void MenuState_obj::startGame( ){
{
		HX_STACK_FRAME("states.MenuState","startGame",0xb707ccac,"states.MenuState.startGame","states/MenuState.hx",37,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::states::PlayState tmp = ::states::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(37)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(37)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		if ((tmp3)){
			HX_STACK_LINE(37)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,startGame,(void))


MenuState_obj::MenuState_obj()
{
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.MenuState","\xa6","\x09","\x15","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

} // end namespace states
