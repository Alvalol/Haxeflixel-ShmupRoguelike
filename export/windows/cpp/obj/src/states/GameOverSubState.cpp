#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_states_GameOverSubState
#include <states/GameOverSubState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void GameOverSubState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.GameOverSubState","new",0x08506435,"states.GameOverSubState.new","states/GameOverState.hx",13,0xdea658a0)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	super::__construct(tmp);
}
;
	return null();
}

//GameOverSubState_obj::~GameOverSubState_obj() { }

Dynamic GameOverSubState_obj::__CreateEmpty() { return  new GameOverSubState_obj; }
hx::ObjectPtr< GameOverSubState_obj > GameOverSubState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< GameOverSubState_obj > _result_ = new GameOverSubState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic GameOverSubState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOverSubState_obj > _result_ = new GameOverSubState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GameOverSubState_obj::create( ){
{
		HX_STACK_FRAME("states.GameOverSubState","create",0x50bb2647,"states.GameOverSubState.create","states/GameOverState.hx",21,0xdea658a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->super::create();
		HX_STACK_LINE(24)
		::flixel::FlxSprite tmp = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::flixel::FlxSprite cursor = tmp;		HX_STACK_VAR(cursor,"cursor");
		HX_STACK_LINE(25)
		cursor->loadGraphic(HX_HCSTRING("assets/images/sys/cursor.png","\xfe","\xd0","\xdd","\x87"),false,(int)8,(int)8,null(),null());
		HX_STACK_LINE(26)
		::flixel::input::mouse::FlxMouse tmp1 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		::openfl::_legacy::display::BitmapData tmp2 = cursor->get_pixels();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		tmp1->load(tmp2,(int)4,null(),null());
		HX_STACK_LINE(27)
		::flixel::input::mouse::FlxMouse tmp3 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		tmp3->set_visible(true);
		HX_STACK_LINE(28)
		int tmp4 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		Float tmp6 = (tmp5 - (int)50);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		int tmp7 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		::flixel::text::FlxText tmp8 = ::flixel::text::FlxText_obj::__new(tmp6,(int)20,tmp7,HX_HCSTRING("Game Over","\x42","\xac","\x24","\xe5"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		this->_text = tmp8;
		HX_STACK_LINE(29)
		int tmp9 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(29)
		Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(29)
		Float tmp11 = (tmp10 - (int)50);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(29)
		int tmp12 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(29)
		int tmp13 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(29)
		int tmp14 = ::Reg_obj::score;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(29)
		::flixel::text::FlxText tmp15 = ::flixel::text::FlxText_obj::__new(tmp11,tmp12,tmp13,null(),tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(29)
		this->_textScore = tmp15;
		HX_STACK_LINE(30)
		int tmp16 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(30)
		Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(30)
		Float tmp18 = (tmp17 - (int)60);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(30)
		Dynamic tmp19 = this->onClick_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(30)
		::flixel::ui::FlxButton tmp20 = ::flixel::ui::FlxButton_obj::__new(tmp18,(int)60,HX_HCSTRING("Restart","\xaf","\xef","\xf6","\x37"),tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		this->_restartButton = tmp20;
		HX_STACK_LINE(31)
		::flixel::text::FlxText tmp21 = this->_textScore;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(32)
		int tmp22 = ::Reg_obj::score;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(32)
		::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(31)
		::String tmp24 = ::StringTools_obj::lpad(tmp23,HX_HCSTRING("0","\x30","\x00","\x00","\x00"),(int)5);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(31)
		tmp21->set_text(tmp24);

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(::flixel::text::FlxText member){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","states/GameOverState.hx",36,0xdea658a0)
			HX_STACK_ARG(member,"member")
			{
				HX_STACK_LINE(36)
				member->setFormat(HX_HCSTRING("assets/data/pixel-font.ttf","\x67","\x4d","\xf0","\x61"),(int)8,(int)-1,null(),::flixel::text::FlxTextBorderStyle_obj::OUTLINE,(int)-1,null());
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(34)
		this->forEachOfType(hx::ClassOf< ::flixel::text::FlxText >(), Dynamic(new _Function_1_1()),null());
		HX_STACK_LINE(39)
		::flixel::text::FlxText tmp25 = this->_text;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(39)
		this->add(tmp25);
		HX_STACK_LINE(40)
		::flixel::text::FlxText tmp26 = this->_textScore;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(40)
		this->add(tmp26);
		HX_STACK_LINE(41)
		::flixel::ui::FlxButton tmp27 = this->_restartButton;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(41)
		this->add(tmp27);
	}
return null();
}


Void GameOverSubState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("states.GameOverSubState","update",0x5bb14554,"states.GameOverSubState.update","states/GameOverState.hx",45,0xdea658a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(46)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		this->super::update(tmp);
		HX_STACK_LINE(47)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				::String s = HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(47)
				::String tmp3 = s.toUpperCase();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				s = tmp3;
				HX_STACK_LINE(47)
				::haxe::ds::StringMap tmp4 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				if ((tmp6)){
					HX_STACK_LINE(47)
					::haxe::ds::StringMap tmp7 = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(47)
					::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					tmp2 = tmp9;
				}
				else{
					HX_STACK_LINE(47)
					tmp2 = (int)-1;
				}
			}
			HX_STACK_LINE(47)
			Array< int > KeyArray = Array_obj< int >::__new().Add(tmp2);		HX_STACK_VAR(KeyArray,"KeyArray");
			HX_STACK_LINE(47)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(47)
			tmp1 = tmp3->checkKeyArrayState(KeyArray,(int)2);
		}
		HX_STACK_LINE(47)
		if ((tmp1)){
			HX_STACK_LINE(48)
			this->onClick();
		}
	}
return null();
}


Void GameOverSubState_obj::onClick( ){
{
		HX_STACK_FRAME("states.GameOverSubState","onClick",0x2037bcfe,"states.GameOverSubState.onClick","states/GameOverState.hx",53,0xdea658a0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::states::PlayState tmp = ::states::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(53)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		if ((tmp3)){
			HX_STACK_LINE(53)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			tmp4->_requestedState = nextState;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubState_obj,onClick,(void))


GameOverSubState_obj::GameOverSubState_obj()
{
}

void GameOverSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubState);
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_textScore,"_textScore");
	HX_MARK_MEMBER_NAME(_restartButton,"_restartButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_textScore,"_textScore");
	HX_VISIT_MEMBER_NAME(_restartButton,"_restartButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOverSubState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textScore") ) { return _textScore; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_restartButton") ) { return _restartButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOverSubState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textScore") ) { _textScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_restartButton") ) { _restartButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_textScore","\x26","\x7f","\x69","\x6d"));
	outFields->push(HX_HCSTRING("_restartButton","\x62","\xd3","\x56","\x90"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverSubState_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverSubState_obj,_textScore),HX_HCSTRING("_textScore","\x26","\x7f","\x69","\x6d")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(GameOverSubState_obj,_restartButton),HX_HCSTRING("_restartButton","\x62","\xd3","\x56","\x90")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_textScore","\x26","\x7f","\x69","\x6d"),
	HX_HCSTRING("_restartButton","\x62","\xd3","\x56","\x90"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverSubState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverSubState_obj::__mClass,"__mClass");
};

#endif

hx::Class GameOverSubState_obj::__mClass;

void GameOverSubState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.GameOverSubState","\xc3","\x25","\x7b","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameOverSubState_obj >;
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
