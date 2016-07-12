#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_gamesys_Scroller
#include <objects/gamesys/Scroller.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
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
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
#ifndef INCLUDED_states_HUD
#include <states/HUD.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelEnemies
#include <utils/pcg/LevelEnemies.h>
#endif
#ifndef INCLUDED_utils_pcg_LevelLoaderProc
#include <utils/pcg/LevelLoaderProc.h>
#endif
namespace states{

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",39,0x36e487ae)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(61)
	this->tracers = true;
	HX_STACK_LINE(39)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",65,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::Reg_obj::PS = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(67)
		::Reg_obj::pause = false;
		HX_STACK_LINE(69)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::objects::Player tmp2 = ::objects::Player_obj::__new((int)16,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		this->player = tmp2;
		HX_STACK_LINE(70)
		::flixel::group::FlxTypedGroup tmp3 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		this->enemies = tmp3;
		HX_STACK_LINE(71)
		::flixel::group::FlxTypedGroup tmp4 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		this->hazards = tmp4;
		HX_STACK_LINE(72)
		::flixel::group::FlxTypedGroup tmp5 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		this->blocks = tmp5;
		HX_STACK_LINE(73)
		::flixel::group::FlxTypedSpriteGroup tmp6 = ::flixel::group::FlxTypedSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		this->effects = tmp6;
		HX_STACK_LINE(74)
		::flixel::group::FlxTypedGroup tmp7 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		this->coins = tmp7;
		HX_STACK_LINE(75)
		::flixel::group::FlxTypedGroup tmp8 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		this->items = tmp8;
		HX_STACK_LINE(76)
		::flixel::group::FlxTypedGroup tmp9 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		this->PBullets = tmp9;
		HX_STACK_LINE(77)
		::flixel::group::FlxTypedGroup tmp10 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		this->EBullets = tmp10;
		HX_STACK_LINE(78)
		::flixel::group::FlxTypedGroup tmp11 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		this->EExplosions = tmp11;
		HX_STACK_LINE(79)
		::flixel::group::FlxTypedGroup tmp12 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		this->_entities = tmp12;
		HX_STACK_LINE(81)
		::flixel::input::mouse::FlxMouse tmp13 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		tmp13->set_visible(false);
		HX_STACK_LINE(83)
		::utils::pcg::LevelLoaderProc tmp14 = ::utils::pcg::LevelLoaderProc_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(83)
		this->map = tmp14;
		HX_STACK_LINE(84)
		::flixel::FlxCamera tmp15 = ::flixel::FlxCamera_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(84)
		this->_gameCamera = tmp15;
		HX_STACK_LINE(85)
		::flixel::FlxCamera tmp16 = ::flixel::FlxCamera_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		this->_hudCamera = tmp16;
		HX_STACK_LINE(86)
		this->cameraSetup();
		HX_STACK_LINE(89)
		::utils::pcg::LevelLoaderProc tmp17 = this->map;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(89)
		::flixel::tile::FlxTilemap tmp18 = tmp17->loadedMap;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(89)
		this->add(tmp18);
		HX_STACK_LINE(90)
		::flixel::group::FlxTypedGroup tmp19 = this->_entities;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(90)
		::flixel::group::FlxTypedGroup tmp20 = this->EExplosions;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(90)
		tmp19->add(tmp20);
		HX_STACK_LINE(91)
		::flixel::group::FlxTypedGroup tmp21 = this->_entities;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(91)
		::flixel::group::FlxTypedGroup tmp22 = this->blocks;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(91)
		tmp21->add(tmp22);
		HX_STACK_LINE(92)
		::flixel::group::FlxTypedGroup tmp23 = this->_entities;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(92)
		::flixel::group::FlxTypedGroup tmp24 = this->coins;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(92)
		tmp23->add(tmp24);
		HX_STACK_LINE(93)
		::flixel::group::FlxTypedGroup tmp25 = this->_entities;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(93)
		::flixel::group::FlxTypedGroup tmp26 = this->items;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(93)
		tmp25->add(tmp26);
		HX_STACK_LINE(94)
		::flixel::group::FlxTypedGroup tmp27 = this->_entities;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(94)
		::flixel::group::FlxTypedSpriteGroup tmp28 = this->effects;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(94)
		tmp27->add(tmp28);
		HX_STACK_LINE(95)
		::flixel::group::FlxTypedGroup tmp29 = this->_entities;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(95)
		::flixel::group::FlxTypedGroup tmp30 = this->EBullets;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(95)
		tmp29->add(tmp30);
		HX_STACK_LINE(96)
		::flixel::group::FlxTypedGroup tmp31 = this->_entities;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(96)
		::flixel::group::FlxTypedGroup tmp32 = this->hazards;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(96)
		tmp31->add(tmp32);
		HX_STACK_LINE(97)
		::flixel::group::FlxTypedGroup tmp33 = this->_entities;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(97)
		::flixel::group::FlxTypedGroup tmp34 = this->enemies;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(97)
		tmp33->add(tmp34);
		HX_STACK_LINE(98)
		::flixel::group::FlxTypedGroup tmp35 = this->_entities;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(98)
		::flixel::group::FlxTypedGroup tmp36 = this->PBullets;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(98)
		tmp35->add(tmp36);
		HX_STACK_LINE(99)
		::flixel::group::FlxTypedGroup tmp37 = this->_entities;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(99)
		this->add(tmp37);
		HX_STACK_LINE(101)
		::objects::Player tmp38 = this->player;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(101)
		this->add(tmp38);
		HX_STACK_LINE(102)
		::flixel::group::FlxTypedGroup tmp39 = this->items;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(102)
		tmp39->clear();
		HX_STACK_LINE(103)
		::flixel::group::FlxTypedGroup tmp40 = this->coins;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(103)
		tmp40->clear();
		HX_STACK_LINE(104)
		::flixel::group::FlxTypedGroup tmp41 = this->enemies;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(104)
		tmp41->clear();
		HX_STACK_LINE(106)
		this->super::create();
	}
return null();
}


Void PlayState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",110,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(111)
		bool tmp = ::Reg_obj::pause;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(112)
			Float tmp2 = elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			this->super::update(tmp2);
		}
		HX_STACK_LINE(114)
		this->displayTracers();
		HX_STACK_LINE(115)
		this->gameControls();
		HX_STACK_LINE(117)
		this->collisions();
		HX_STACK_LINE(118)
		this->cleanItems();
		HX_STACK_LINE(120)
		::utils::pcg::LevelLoaderProc tmp2 = this->map;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::flixel::tile::FlxTilemap tmp3 = tmp2->loadedMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		::utils::pcg::LevelEnemies_obj::populateEnemies(tmp3);
		HX_STACK_LINE(122)
		::objects::Player tmp4 = this->player;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		::flixel::FlxCamera tmp5 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		Float tmp6 = tmp5->scroll->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		::flixel::FlxCamera tmp7 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		Float tmp8 = tmp7->scroll->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		::flixel::FlxCamera tmp9 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		int tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(124)
		Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		::flixel::FlxCamera tmp12 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(125)
		Float tmp13 = tmp12->scroll->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(126)
		::flixel::FlxCamera tmp14 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		Float tmp15 = tmp14->scroll->y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(126)
		::flixel::FlxCamera tmp16 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(126)
		Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(122)
		::flixel::util::FlxSpriteUtil_obj::bound(tmp4,tmp6,tmp11,tmp13,tmp18);
	}
return null();
}


Void PlayState_obj::cameraSetup( ){
{
		HX_STACK_FRAME("states.PlayState","cameraSetup",0x7153a6db,"states.PlayState.cameraSetup","states/PlayState.hx",133,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		::objects::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		Float tmp2 = (tmp1 + (int)80);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::objects::Player tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::objects::gamesys::Scroller tmp5 = ::objects::gamesys::Scroller_obj::__new(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		this->_scroller = tmp5;
		HX_STACK_LINE(136)
		::flixel::_system::frontEnds::CameraFrontEnd tmp6 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		::flixel::FlxCamera tmp7 = this->_gameCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(136)
		tmp6->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(tmp7);
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			::flixel::FlxCamera tmp8 = this->_hudCamera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			::flixel::FlxCamera NewCamera = tmp8;		HX_STACK_VAR(NewCamera,"NewCamera");
			HX_STACK_LINE(137)
			::flixel::FlxGame tmp9 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			::openfl::_legacy::display::Sprite tmp10 = NewCamera->flashSprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			::flixel::FlxGame tmp11 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(137)
			::flixel::FlxGame tmp12 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(137)
			::openfl::_legacy::display::Sprite tmp13 = tmp12->_inputContainer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(137)
			int tmp14 = tmp11->getChildIndex(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			tmp9->addChildAt(tmp10,tmp14);
			HX_STACK_LINE(137)
			::flixel::_system::frontEnds::CameraFrontEnd tmp15 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			::flixel::FlxCamera tmp16 = NewCamera;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(137)
			tmp15->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp16);
			HX_STACK_LINE(137)
			::flixel::_system::frontEnds::CameraFrontEnd tmp17 = ::flixel::FlxG_obj::cameras;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(137)
			int tmp18 = tmp17->__Field(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(137)
			NewCamera->ID = tmp19;
			HX_STACK_LINE(137)
			NewCamera;
		}
		HX_STACK_LINE(138)
		::flixel::FlxCamera tmp8 = this->_hudCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(138)
		tmp8->bgColor = (int)0;
		HX_STACK_LINE(139)
		::flixel::FlxCamera tmp9 = this->_gameCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(139)
		::flixel::FlxCamera_obj::defaultCameras = Array_obj< ::Dynamic >::__new().Add(tmp9);
		HX_STACK_LINE(140)
		::states::HUD tmp10 = ::states::HUD_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		this->_hud = tmp10;
		HX_STACK_LINE(141)
		::states::HUD tmp11 = this->_hud;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(141)
		::flixel::FlxCamera tmp12 = this->_hudCamera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		tmp11->setCamera(tmp12);
		HX_STACK_LINE(142)
		::flixel::FlxCamera tmp13 = this->_gameCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(142)
		::objects::gamesys::Scroller tmp14 = this->_scroller;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(142)
		tmp13->follow(tmp14,::flixel::FlxCameraFollowStyle_obj::TOPDOWN_TIGHT,((Float)0.01));
		HX_STACK_LINE(143)
		::flixel::FlxCamera tmp15 = this->_gameCamera;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(143)
		::utils::pcg::LevelLoaderProc tmp16 = this->map;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(143)
		Float tmp17 = tmp16->loadedMap->get_width();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(143)
		::utils::pcg::LevelLoaderProc tmp18 = this->map;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(143)
		Float tmp19 = tmp18->loadedMap->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(143)
		tmp15->setScrollBoundsRect((int)0,(int)0,tmp17,tmp19,true);
		HX_STACK_LINE(145)
		::flixel::FlxCamera tmp20 = this->_gameCamera;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(145)
		tmp20->pixelPerfectRender = false;
		HX_STACK_LINE(146)
		::objects::gamesys::Scroller tmp21 = this->_scroller;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(146)
		this->add(tmp21);
		HX_STACK_LINE(147)
		::states::HUD tmp22 = this->_hud;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(147)
		this->add(tmp22);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,cameraSetup,(void))

Void PlayState_obj::collisions( ){
{
		HX_STACK_FRAME("states.PlayState","collisions",0x305c4fde,"states.PlayState.collisions","states/PlayState.hx",152,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		::objects::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		Float tmp1 = tmp->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(154)
		::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		Float tmp3 = tmp2->scroll->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		bool tmp4 = (tmp1 <= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		if ((tmp4)){
			HX_STACK_LINE(156)
			::objects::Player tmp5 = this->player;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			tmp5->damage();
		}
		HX_STACK_LINE(159)
		::flixel::group::FlxTypedGroup tmp5 = this->items;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		::flixel::group::FlxTypedGroupIterator tmp6 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp5->members,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		for(::cpp::FastIterator_obj< ::objects::items::Item > *__it = ::cpp::CreateFastIterator< ::objects::items::Item >(tmp6);  __it->hasNext(); ){
			::objects::items::Item item = __it->next();
			{
				HX_STACK_LINE(161)
				::objects::items::Item tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				::objects::Player tmp8 = this->player;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				bool tmp9 = ::flixel::FlxG_obj::overlap(tmp7,tmp8,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				if ((tmp9)){
					HX_STACK_LINE(163)
					::objects::Player tmp10 = this->player;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(163)
					item->interact(tmp10);
				}
			}
;
		}
		HX_STACK_LINE(167)
		::objects::Player tmp7 = this->player;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(167)
		bool tmp8 = tmp7->alive;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		if ((tmp8)){
			HX_STACK_LINE(169)
			::utils::pcg::LevelLoaderProc tmp9 = this->map;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			::flixel::tile::FlxTilemap tmp10 = tmp9->loadedMap;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			::objects::Player tmp11 = this->player;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			Dynamic tmp12 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(169)
			bool tmp13 = ::flixel::FlxG_obj::overlap(tmp10,tmp11,null(),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(169)
			if ((tmp13)){
				HX_STACK_LINE(171)
				::objects::Player tmp14 = this->player;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(171)
				tmp14->damage();
				HX_STACK_LINE(172)
				::objects::Player tmp15 = this->player;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(172)
				::utils::pcg::LevelLoaderProc tmp16 = this->map;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(172)
				::flixel::tile::FlxTilemap tmp17 = tmp16->loadedMap;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(172)
				::flixel::FlxObject_obj::separate(tmp15,tmp17);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,collisions,(void))

Void PlayState_obj::gameControls( ){
{
		HX_STACK_FRAME("states.PlayState","gameControls",0xf2140de5,"states.PlayState.gameControls","states/PlayState.hx",178,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		bool tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(179)
			::flixel::input::keyboard::FlxKeyList _this = tmp1->justPressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(179)
			int tmp2 = _this->status;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			tmp = _this->keyManager->checkStatus((int)80,tmp2);
		}
		HX_STACK_LINE(179)
		if ((tmp)){
			HX_STACK_LINE(179)
			bool tmp1 = ::Reg_obj::pause;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(179)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			::Reg_obj::pause = tmp2;
		}
		HX_STACK_LINE(180)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(180)
			::flixel::input::keyboard::FlxKeyList _this = tmp2->justPressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(180)
			int tmp3 = _this->status;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			tmp1 = _this->keyManager->checkStatus((int)27,tmp3);
		}
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(180)
			::openfl::_legacy::_system::System_obj::exit((int)0);
		}
		HX_STACK_LINE(181)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			::flixel::input::keyboard::FlxKeyList _this = tmp3->justPressed;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(181)
			int tmp4 = _this->status;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			tmp2 = _this->keyManager->checkStatus((int)82,tmp4);
		}
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(181)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			::flixel::FlxState tmp4 = tmp3->_state;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			::flixel::FlxState tmp6 = ::Type_obj::createInstance(tmp5,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			::flixel::FlxState nextState = tmp6;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(181)
			::flixel::FlxGame tmp7 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			::flixel::FlxState tmp8 = nextState;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			bool tmp9 = tmp7->_state->switchTo(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(181)
			if ((tmp9)){
				HX_STACK_LINE(181)
				::flixel::FlxGame tmp10 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				tmp10->_requestedState = nextState;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,gameControls,(void))

Void PlayState_obj::cleanItems( ){
{
		HX_STACK_FRAME("states.PlayState","cleanItems",0x35ed0dd4,"states.PlayState.cleanItems","states/PlayState.hx",185,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::flixel::group::FlxTypedGroup tmp = this->coins;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		int tmp1 = tmp->countLiving();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		if ((tmp2)){
			HX_STACK_LINE(188)
			::flixel::group::FlxTypedGroup tmp3 = this->coins;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			tmp3->clear();
		}
		HX_STACK_LINE(191)
		::flixel::group::FlxTypedGroup tmp3 = this->blocks;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		int tmp4 = tmp3->countLiving();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		bool tmp5 = (tmp4 < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		if ((tmp5)){
			HX_STACK_LINE(193)
			::flixel::group::FlxTypedGroup tmp6 = this->blocks;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			tmp6->clear();
		}
		HX_STACK_LINE(196)
		::flixel::group::FlxTypedGroup tmp6 = this->EBullets;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		int tmp7 = tmp6->countLiving();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		bool tmp8 = (tmp7 < (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		if ((tmp8)){
			HX_STACK_LINE(198)
			::flixel::group::FlxTypedGroup tmp9 = this->EBullets;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(198)
			tmp9->clear();
		}
		HX_STACK_LINE(201)
		::flixel::group::FlxTypedGroup tmp9 = this->enemies;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		int tmp10 = tmp9->countLiving();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(201)
		bool tmp11 = (tmp10 < (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(201)
		if ((tmp11)){
			HX_STACK_LINE(203)
			::flixel::group::FlxTypedGroup tmp12 = this->enemies;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(203)
			tmp12->clear();
		}
		HX_STACK_LINE(206)
		::flixel::group::FlxTypedGroup tmp12 = this->items;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(206)
		int tmp13 = tmp12->countLiving();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(206)
		bool tmp14 = (tmp13 < (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(206)
		if ((tmp14)){
			HX_STACK_LINE(208)
			::flixel::group::FlxTypedGroup tmp15 = this->items;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(208)
			tmp15->clear();
		}
		HX_STACK_LINE(211)
		::flixel::group::FlxTypedGroup tmp15 = this->PBullets;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(211)
		int tmp16 = tmp15->countLiving();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(211)
		bool tmp17 = (tmp16 < (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(211)
		if ((tmp17)){
			HX_STACK_LINE(213)
			::flixel::group::FlxTypedGroup tmp18 = this->PBullets;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			tmp18->clear();
		}
		HX_STACK_LINE(217)
		::flixel::group::FlxTypedSpriteGroup tmp18 = this->effects;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(217)
		int tmp19 = tmp18->group->countLiving();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(217)
		bool tmp20 = (tmp19 < (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(217)
		if ((tmp20)){
			HX_STACK_LINE(219)
			::flixel::group::FlxTypedSpriteGroup tmp21 = this->effects;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(219)
			tmp21->group->clear();
		}
		HX_STACK_LINE(221)
		::flixel::group::FlxTypedGroup tmp21 = this->hazards;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(221)
		int tmp22 = tmp21->countLiving();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(221)
		bool tmp23 = (tmp22 < (int)1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(221)
		if ((tmp23)){
			HX_STACK_LINE(223)
			::flixel::group::FlxTypedGroup tmp24 = this->hazards;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(223)
			tmp24->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,cleanItems,(void))

Void PlayState_obj::displayTracers( ){
{
		HX_STACK_FRAME("states.PlayState","displayTracers",0x13426e01,"states.PlayState.displayTracers","states/PlayState.hx",230,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		bool tmp = this->tracers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		if ((tmp)){
			HX_STACK_LINE(233)
			::flixel::group::FlxTypedGroup tmp1 = this->items;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(233)
			int tmp2 = tmp1->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			::String tmp3 = (HX_HCSTRING("items : ","\xc6","\x4e","\x3f","\xbe") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),233,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			::haxe::Log_obj::trace(tmp3,tmp4);
			HX_STACK_LINE(234)
			::flixel::group::FlxTypedGroup tmp5 = this->enemies;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			::String tmp7 = (HX_HCSTRING("enemies : ","\xe0","\x7d","\xb4","\x35") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(234)
			Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),234,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(234)
			::haxe::Log_obj::trace(tmp7,tmp8);
			HX_STACK_LINE(235)
			::flixel::group::FlxTypedGroup tmp9 = this->EBullets;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			int tmp10 = tmp9->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			::String tmp11 = (HX_HCSTRING("eBullets : ","\x3a","\x34","\x41","\xf8") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(235)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),235,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(235)
			::haxe::Log_obj::trace(tmp11,tmp12);
			HX_STACK_LINE(236)
			::flixel::group::FlxTypedGroup tmp13 = this->PBullets;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(236)
			int tmp14 = tmp13->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(236)
			::String tmp15 = (HX_HCSTRING("PBullets : ","\xe5","\x67","\x02","\x66") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(236)
			Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),236,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(236)
			::haxe::Log_obj::trace(tmp15,tmp16);
			HX_STACK_LINE(237)
			::flixel::group::FlxTypedGroup tmp17 = this->coins;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(237)
			int tmp18 = tmp17->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(237)
			::String tmp19 = (HX_HCSTRING("coins  ","\x42","\xba","\x89","\x34") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(237)
			Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),237,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(237)
			::haxe::Log_obj::trace(tmp19,tmp20);
			HX_STACK_LINE(238)
			::flixel::group::FlxTypedGroup tmp21 = this->blocks;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(238)
			int tmp22 = tmp21->length;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(238)
			::String tmp23 = (HX_HCSTRING("blocks ","\xda","\x86","\xfe","\x44") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(238)
			Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),238,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(238)
			::haxe::Log_obj::trace(tmp23,tmp24);
			HX_STACK_LINE(239)
			::flixel::group::FlxTypedGroup tmp25 = this->_entities;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			int tmp26 = tmp25->length;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(239)
			::String tmp27 = (HX_HCSTRING("_entities ","\x80","\x5e","\xf0","\x0b") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(239)
			Dynamic tmp28 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),239,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(239)
			::haxe::Log_obj::trace(tmp27,tmp28);
			HX_STACK_LINE(240)
			::flixel::group::FlxTypedSpriteGroup tmp29 = this->effects;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(240)
			int tmp30 = tmp29->group->length;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(240)
			::String tmp31 = (HX_HCSTRING("effects ","\x1e","\x45","\x1c","\x54") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(240)
			Dynamic tmp32 = hx::SourceInfo(HX_HCSTRING("PlayState.hx","\x81","\x77","\x0d","\xb3"),240,HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04"),HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(240)
			::haxe::Log_obj::trace(tmp31,tmp32);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,displayTracers,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(hazards,"hazards");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(PBullets,"PBullets");
	HX_MARK_MEMBER_NAME(EBullets,"EBullets");
	HX_MARK_MEMBER_NAME(blocks,"blocks");
	HX_MARK_MEMBER_NAME(effects,"effects");
	HX_MARK_MEMBER_NAME(EExplosions,"EExplosions");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(coins,"coins");
	HX_MARK_MEMBER_NAME(_entities,"_entities");
	HX_MARK_MEMBER_NAME(_scroller,"_scroller");
	HX_MARK_MEMBER_NAME(_hud,"_hud");
	HX_MARK_MEMBER_NAME(_gameCamera,"_gameCamera");
	HX_MARK_MEMBER_NAME(_hudCamera,"_hudCamera");
	HX_MARK_MEMBER_NAME(tracers,"tracers");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(hazards,"hazards");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(PBullets,"PBullets");
	HX_VISIT_MEMBER_NAME(EBullets,"EBullets");
	HX_VISIT_MEMBER_NAME(blocks,"blocks");
	HX_VISIT_MEMBER_NAME(effects,"effects");
	HX_VISIT_MEMBER_NAME(EExplosions,"EExplosions");
	HX_VISIT_MEMBER_NAME(enemies,"enemies");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(coins,"coins");
	HX_VISIT_MEMBER_NAME(_entities,"_entities");
	HX_VISIT_MEMBER_NAME(_scroller,"_scroller");
	HX_VISIT_MEMBER_NAME(_hud,"_hud");
	HX_VISIT_MEMBER_NAME(_gameCamera,"_gameCamera");
	HX_VISIT_MEMBER_NAME(_hudCamera,"_hudCamera");
	HX_VISIT_MEMBER_NAME(tracers,"tracers");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_hud") ) { return _hud; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		if (HX_FIELD_EQ(inName,"coins") ) { return coins; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"blocks") ) { return blocks; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hazards") ) { return hazards; }
		if (HX_FIELD_EQ(inName,"effects") ) { return effects; }
		if (HX_FIELD_EQ(inName,"enemies") ) { return enemies; }
		if (HX_FIELD_EQ(inName,"tracers") ) { return tracers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PBullets") ) { return PBullets; }
		if (HX_FIELD_EQ(inName,"EBullets") ) { return EBullets; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_entities") ) { return _entities; }
		if (HX_FIELD_EQ(inName,"_scroller") ) { return _scroller; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hudCamera") ) { return _hudCamera; }
		if (HX_FIELD_EQ(inName,"collisions") ) { return collisions_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanItems") ) { return cleanItems_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"EExplosions") ) { return EExplosions; }
		if (HX_FIELD_EQ(inName,"_gameCamera") ) { return _gameCamera; }
		if (HX_FIELD_EQ(inName,"cameraSetup") ) { return cameraSetup_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gameControls") ) { return gameControls_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayTracers") ) { return displayTracers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::utils::pcg::LevelLoaderProc >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_hud") ) { _hud=inValue.Cast< ::states::HUD >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coins") ) { coins=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::objects::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blocks") ) { blocks=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hazards") ) { hazards=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"effects") ) { effects=inValue.Cast< ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tracers") ) { tracers=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"PBullets") ) { PBullets=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EBullets") ) { EBullets=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_entities") ) { _entities=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scroller") ) { _scroller=inValue.Cast< ::objects::gamesys::Scroller >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_hudCamera") ) { _hudCamera=inValue.Cast< ::flixel::FlxCamera >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"EExplosions") ) { EExplosions=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameCamera") ) { _gameCamera=inValue.Cast< ::flixel::FlxCamera >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("hazards","\xa1","\x8e","\xad","\x2c"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("PBullets","\x81","\x39","\x04","\xd7"));
	outFields->push(HX_HCSTRING("EBullets","\x2c","\x52","\xd9","\x61"));
	outFields->push(HX_HCSTRING("blocks","\x86","\x2e","\xea","\xa7"));
	outFields->push(HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e"));
	outFields->push(HX_HCSTRING("EExplosions","\xe3","\x3b","\xbc","\xe0"));
	outFields->push(HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"));
	outFields->push(HX_HCSTRING("coins","\xc2","\x29","\x5a","\x4a"));
	outFields->push(HX_HCSTRING("_entities","\xa0","\x8d","\x2b","\xda"));
	outFields->push(HX_HCSTRING("_scroller","\x19","\x05","\xeb","\xd3"));
	outFields->push(HX_HCSTRING("_hud","\xb8","\x95","\x1a","\x3f"));
	outFields->push(HX_HCSTRING("_gameCamera","\x56","\xfd","\x8b","\xcc"));
	outFields->push(HX_HCSTRING("_hudCamera","\x7d","\x6a","\x46","\x5c"));
	outFields->push(HX_HCSTRING("tracers","\x86","\x5d","\x04","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::utils::pcg::LevelLoaderProc*/ ,(int)offsetof(PlayState_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,hazards),HX_HCSTRING("hazards","\xa1","\x8e","\xad","\x2c")},
	{hx::fsObject /*::objects::Player*/ ,(int)offsetof(PlayState_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,PBullets),HX_HCSTRING("PBullets","\x81","\x39","\x04","\xd7")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,EBullets),HX_HCSTRING("EBullets","\x2c","\x52","\xd9","\x61")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,blocks),HX_HCSTRING("blocks","\x86","\x2e","\xea","\xa7")},
	{hx::fsObject /*::flixel::group::FlxTypedSpriteGroup*/ ,(int)offsetof(PlayState_obj,effects),HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,EExplosions),HX_HCSTRING("EExplosions","\xe3","\x3b","\xbc","\xe0")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,enemies),HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,items),HX_HCSTRING("items","\x00","\xac","\x0c","\xc2")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,coins),HX_HCSTRING("coins","\xc2","\x29","\x5a","\x4a")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_entities),HX_HCSTRING("_entities","\xa0","\x8d","\x2b","\xda")},
	{hx::fsObject /*::objects::gamesys::Scroller*/ ,(int)offsetof(PlayState_obj,_scroller),HX_HCSTRING("_scroller","\x19","\x05","\xeb","\xd3")},
	{hx::fsObject /*::states::HUD*/ ,(int)offsetof(PlayState_obj,_hud),HX_HCSTRING("_hud","\xb8","\x95","\x1a","\x3f")},
	{hx::fsObject /*::flixel::FlxCamera*/ ,(int)offsetof(PlayState_obj,_gameCamera),HX_HCSTRING("_gameCamera","\x56","\xfd","\x8b","\xcc")},
	{hx::fsObject /*::flixel::FlxCamera*/ ,(int)offsetof(PlayState_obj,_hudCamera),HX_HCSTRING("_hudCamera","\x7d","\x6a","\x46","\x5c")},
	{hx::fsBool,(int)offsetof(PlayState_obj,tracers),HX_HCSTRING("tracers","\x86","\x5d","\x04","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("hazards","\xa1","\x8e","\xad","\x2c"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("PBullets","\x81","\x39","\x04","\xd7"),
	HX_HCSTRING("EBullets","\x2c","\x52","\xd9","\x61"),
	HX_HCSTRING("blocks","\x86","\x2e","\xea","\xa7"),
	HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e"),
	HX_HCSTRING("EExplosions","\xe3","\x3b","\xbc","\xe0"),
	HX_HCSTRING("enemies","\xa6","\x68","\x0e","\xd3"),
	HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"),
	HX_HCSTRING("coins","\xc2","\x29","\x5a","\x4a"),
	HX_HCSTRING("_entities","\xa0","\x8d","\x2b","\xda"),
	HX_HCSTRING("_scroller","\x19","\x05","\xeb","\xd3"),
	HX_HCSTRING("_hud","\xb8","\x95","\x1a","\x3f"),
	HX_HCSTRING("_gameCamera","\x56","\xfd","\x8b","\xcc"),
	HX_HCSTRING("_hudCamera","\x7d","\x6a","\x46","\x5c"),
	HX_HCSTRING("tracers","\x86","\x5d","\x04","\x88"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("cameraSetup","\x98","\xa1","\x75","\x6e"),
	HX_HCSTRING("collisions","\xc1","\xbb","\x18","\xf8"),
	HX_HCSTRING("gameControls","\x88","\x78","\xad","\x72"),
	HX_HCSTRING("cleanItems","\xb7","\x79","\xa9","\xfd"),
	HX_HCSTRING("displayTracers","\x64","\x07","\x06","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("states.PlayState","\x31","\xcd","\x20","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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
