#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_objects_PlayerBullet
#include <objects/PlayerBullet.h>
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
namespace objects{

Void Player_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("objects.Player","new",0x7e6cfa4d,"objects.Player.new","objects/Player.hx",16,0x1efe05a2)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(43)
	this->MAX_SHOTMOD = (int)1;
	HX_STACK_LINE(40)
	this->_cooldown = ((Float)0);
	HX_STACK_LINE(38)
	this->MAX_POSSIBLE_HP = (int)10;
	HX_STACK_LINE(31)
	this->MAX_RANGE = ((Float)2.0);
	HX_STACK_LINE(30)
	this->RANGE = ((Float)0.1);
	HX_STACK_LINE(28)
	this->MAX_MAGNET_FORCE = (int)100;
	HX_STACK_LINE(27)
	this->MAGNET_FORCE = (int)40;
	HX_STACK_LINE(26)
	this->MAX_MAGNET = (int)300;
	HX_STACK_LINE(25)
	this->MAGNET = (int)30;
	HX_STACK_LINE(23)
	this->MAX_VERT_MOVE_SPEED = (int)100;
	HX_STACK_LINE(22)
	this->MAX_HOR_MOVE_SPEED = (int)90;
	HX_STACK_LINE(21)
	this->VERT_MOVE_SPEED = (int)60;
	HX_STACK_LINE(20)
	this->HOR_MOVE_SPEED = (int)50;
	HX_STACK_LINE(48)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(49)
	this->HP = (int)3;
	HX_STACK_LINE(50)
	this->MAX_HP = (int)3;
	HX_STACK_LINE(51)
	this->loadGraphic(HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6"),true,(int)16,(int)8,null(),null());
	HX_STACK_LINE(53)
	this->SHOT_MOD = (int)0;
	HX_STACK_LINE(55)
	this->set_width((int)4);
	HX_STACK_LINE(56)
	this->set_height((int)4);
	HX_STACK_LINE(57)
	this->centerOffsets(null());
	HX_STACK_LINE(58)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	tmp2->add(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),null(),null(),null(),null());
	HX_STACK_LINE(59)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	tmp3->play(HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),null(),null(),null());
	HX_STACK_LINE(61)
	::flixel::math::FlxPoint tmp4 = this->drag;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	tmp4->set_x((int)800);
	HX_STACK_LINE(62)
	::flixel::math::FlxPoint tmp5 = this->drag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	tmp5->set_y((int)800);
	HX_STACK_LINE(64)
	::flixel::math::FlxPoint tmp6 = this->maxVelocity;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	int tmp7 = this->HOR_MOVE_SPEED;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	int tmp8 = this->VERT_MOVE_SPEED;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	tmp6->set(tmp7,tmp8);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::update( Float elapsed){
{
		HX_STACK_FRAME("objects.Player","update",0xd4f38e3c,"objects.Player.update","objects/Player.hx",68,0x1efe05a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(69)
		Float tmp = elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		this->basicChecks(tmp);
		HX_STACK_LINE(71)
		bool tmp1 = ::Reg_obj::pause;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(72)
			Float tmp3 = elapsed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			this->super::update(tmp3);
		}
	}
return null();
}


Void Player_obj::basicChecks( Float elapsed){
{
		HX_STACK_FRAME("objects.Player","basicChecks",0x1f584ae6,"objects.Player.basicChecks","objects/Player.hx",76,0x1efe05a2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(77)
		bool tmp = this->alive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		if ((tmp)){
			HX_STACK_LINE(79)
			this->move();
			HX_STACK_LINE(80)
			this->shoot();
			HX_STACK_LINE(81)
			Float tmp1 = (elapsed * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			hx::SubEq(this->_cooldown,tmp1);
		}
		HX_STACK_LINE(84)
		int tmp1 = this->HP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		bool tmp2 = (tmp1 <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		if ((tmp2)){
			HX_STACK_LINE(85)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,basicChecks,(void))

Void Player_obj::move( ){
{
		HX_STACK_FRAME("objects.Player","move",0x204c6884,"objects.Player.move","objects/Player.hx",90,0x1efe05a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::flixel::math::FlxPoint tmp = this->acceleration;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		tmp->set_x((int)0);
		HX_STACK_LINE(92)
		::flixel::math::FlxPoint tmp1 = this->acceleration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		tmp1->set_y((int)0);
		HX_STACK_LINE(94)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		bool tmp3 = tmp2->checkKeyArrayState(Array_obj< int >::__new().Add((int)38).Add((int)87),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(95)
			::flixel::math::FlxPoint tmp4 = this->acceleration;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			::flixel::math::FlxPoint _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Float tmp5 = (_g->y - (int)800);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			_g->set_y(tmp5);
		}
		HX_STACK_LINE(97)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		bool tmp5 = tmp4->checkKeyArrayState(Array_obj< int >::__new().Add((int)40).Add((int)83),(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		if ((tmp5)){
			HX_STACK_LINE(98)
			::flixel::math::FlxPoint tmp6 = this->acceleration;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			::flixel::math::FlxPoint _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			Float tmp7 = (_g->y + (int)800);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			_g->set_y(tmp7);
		}
		HX_STACK_LINE(100)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		bool tmp7 = tmp6->checkKeyArrayState(Array_obj< int >::__new().Add((int)37).Add((int)65),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		if ((tmp7)){
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint tmp8 = this->acceleration;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			Float tmp9 = (_g->x - (int)800);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			_g->set_x(tmp9);
		}
		HX_STACK_LINE(104)
		::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		bool tmp9 = tmp8->checkKeyArrayState(Array_obj< int >::__new().Add((int)39).Add((int)68),(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		if ((tmp9)){
			HX_STACK_LINE(105)
			::flixel::math::FlxPoint tmp10 = this->acceleration;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			::flixel::math::FlxPoint _g = tmp10;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			Float tmp11 = (_g->x + (int)800);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			_g->set_x(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,move,(void))

Void Player_obj::shoot( ){
{
		HX_STACK_FRAME("objects.Player","shoot",0x9250c10c,"objects.Player.shoot","objects/Player.hx",110,0x1efe05a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		int ang = (int)10;		HX_STACK_VAR(ang,"ang");
		HX_STACK_LINE(113)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp->checkKeyArrayState(Array_obj< int >::__new().Add((int)32).Add((int)77).Add((int)76).Add((int)79),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp2)){
			HX_STACK_LINE(113)
			::states::PlayState tmp4 = ::Reg_obj::PS;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			::states::PlayState tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			::states::PlayState tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			int tmp7 = tmp6->PBullets->countLiving();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			tmp3 = (tmp9 < (int)10);
		}
		else{
			HX_STACK_LINE(113)
			tmp3 = false;
		}
		HX_STACK_LINE(113)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(113)
			Float tmp5 = this->_cooldown;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(113)
			tmp4 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp4)){
			HX_STACK_LINE(115)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			::objects::PlayerBullet tmp7 = ::objects::PlayerBullet_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			::objects::PlayerBullet pb = tmp7;		HX_STACK_VAR(pb,"pb");
			HX_STACK_LINE(117)
			{
				HX_STACK_LINE(117)
				int tmp8 = this->SHOT_MOD;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(117)
				int _g = tmp8;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(117)
				int tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(117)
				switch( (int)(tmp9)){
					case (int)0: {
						HX_STACK_LINE(120)
						Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(120)
						Float tmp11 = (tmp10 + (int)3);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(120)
						Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(120)
						Float tmp13 = (tmp12 + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(120)
						pb->reset(tmp11,tmp13);
						HX_STACK_LINE(121)
						::states::PlayState tmp14 = ::Reg_obj::PS;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(121)
						::objects::PlayerBullet tmp15 = pb;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(121)
						tmp14->PBullets->add(tmp15);
						HX_STACK_LINE(123)
						this->_cooldown = ((Float).4);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(128)
						Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(128)
						Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(128)
						::objects::PlayerBullet tmp12 = ::objects::PlayerBullet_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(128)
						::objects::PlayerBullet pb2 = tmp12;		HX_STACK_VAR(pb2,"pb2");
						HX_STACK_LINE(129)
						::flixel::math::FlxPoint tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(129)
						{
							HX_STACK_LINE(129)
							Float tmp14 = ::Math_obj::PI;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(129)
							Float tmp15 = (Float(tmp14) / Float((int)180));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(129)
							Float tmp16 = ((int)10 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(129)
							Float a = tmp16;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(129)
							{
								HX_STACK_LINE(129)
								Float tmp17 = a;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(129)
								Float tmp18 = ::Math_obj::cos(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(129)
								Float tmp19 = (tmp18 * (int)250);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(129)
								Float X = tmp19;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(129)
								Float tmp20 = a;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(129)
								Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(129)
								Float tmp22 = (tmp21 * (int)250);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(129)
								Float Y = tmp22;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(129)
								::flixel::util::FlxPool_flixel_math_FlxPoint tmp23 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(129)
								::flixel::math::FlxPoint tmp24 = tmp23->get();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(129)
								Float tmp25 = X;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(129)
								Float tmp26 = Y;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(129)
								::flixel::math::FlxPoint tmp27 = tmp24->set(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(129)
								::flixel::math::FlxPoint point = tmp27;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(129)
								point->_inPool = false;
								HX_STACK_LINE(129)
								tmp13 = point;
							}
						}
						HX_STACK_LINE(129)
						Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(129)
						::flixel::math::FlxPoint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(129)
						{
							HX_STACK_LINE(129)
							Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(129)
							Float tmp17 = (Float(tmp16) / Float((int)180));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(129)
							Float tmp18 = ((int)10 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(129)
							Float a = tmp18;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(129)
							{
								HX_STACK_LINE(129)
								Float tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(129)
								Float tmp20 = ::Math_obj::cos(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(129)
								Float tmp21 = (tmp20 * (int)250);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(129)
								Float X = tmp21;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(129)
								Float tmp22 = a;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(129)
								Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(129)
								Float tmp24 = (tmp23 * (int)250);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(129)
								Float Y = tmp24;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(129)
								::flixel::util::FlxPool_flixel_math_FlxPoint tmp25 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(129)
								::flixel::math::FlxPoint tmp26 = tmp25->get();		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(129)
								Float tmp27 = X;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(129)
								Float tmp28 = Y;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(129)
								::flixel::math::FlxPoint tmp29 = tmp26->set(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(129)
								::flixel::math::FlxPoint point = tmp29;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(129)
								point->_inPool = false;
								HX_STACK_LINE(129)
								tmp15 = point;
							}
						}
						HX_STACK_LINE(129)
						Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(129)
						pb->velocity->set(tmp14,tmp16);
						HX_STACK_LINE(130)
						::flixel::math::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(130)
						{
							HX_STACK_LINE(130)
							Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(130)
							Float tmp19 = (Float(tmp18) / Float((int)180));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(130)
							Float tmp20 = ((int)350 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(130)
							Float a = tmp20;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(130)
							{
								HX_STACK_LINE(130)
								Float tmp21 = a;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(130)
								Float tmp22 = ::Math_obj::cos(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(130)
								Float tmp23 = (tmp22 * (int)250);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(130)
								Float X = tmp23;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(130)
								Float tmp24 = a;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(130)
								Float tmp25 = ::Math_obj::sin(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(130)
								Float tmp26 = (tmp25 * (int)250);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(130)
								Float Y = tmp26;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(130)
								::flixel::util::FlxPool_flixel_math_FlxPoint tmp27 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(130)
								::flixel::math::FlxPoint tmp28 = tmp27->get();		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(130)
								Float tmp29 = X;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(130)
								Float tmp30 = Y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(130)
								::flixel::math::FlxPoint tmp31 = tmp28->set(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(130)
								::flixel::math::FlxPoint point = tmp31;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(130)
								point->_inPool = false;
								HX_STACK_LINE(130)
								tmp17 = point;
							}
						}
						HX_STACK_LINE(130)
						Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(130)
						::flixel::math::FlxPoint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(130)
						{
							HX_STACK_LINE(130)
							Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(130)
							Float tmp21 = (Float(tmp20) / Float((int)180));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(130)
							Float tmp22 = ((int)350 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(130)
							Float a = tmp22;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(130)
							{
								HX_STACK_LINE(130)
								Float tmp23 = a;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(130)
								Float tmp24 = ::Math_obj::cos(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(130)
								Float tmp25 = (tmp24 * (int)250);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(130)
								Float X = tmp25;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(130)
								Float tmp26 = a;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(130)
								Float tmp27 = ::Math_obj::sin(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(130)
								Float tmp28 = (tmp27 * (int)250);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(130)
								Float Y = tmp28;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(130)
								::flixel::util::FlxPool_flixel_math_FlxPoint tmp29 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(130)
								::flixel::math::FlxPoint tmp30 = tmp29->get();		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(130)
								Float tmp31 = X;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(130)
								Float tmp32 = Y;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(130)
								::flixel::math::FlxPoint tmp33 = tmp30->set(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(130)
								::flixel::math::FlxPoint point = tmp33;		HX_STACK_VAR(point,"point");
								HX_STACK_LINE(130)
								point->_inPool = false;
								HX_STACK_LINE(130)
								tmp19 = point;
							}
						}
						HX_STACK_LINE(130)
						Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(130)
						pb2->velocity->set(tmp18,tmp20);
						HX_STACK_LINE(131)
						pb->set_angle((int)10);
						HX_STACK_LINE(132)
						pb2->set_angle((int)350);
						HX_STACK_LINE(133)
						::states::PlayState tmp21 = ::Reg_obj::PS;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(133)
						::objects::PlayerBullet tmp22 = pb;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(133)
						tmp21->PBullets->add(tmp22);
						HX_STACK_LINE(134)
						::states::PlayState tmp23 = ::Reg_obj::PS;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(134)
						::objects::PlayerBullet tmp24 = pb2;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(134)
						tmp23->PBullets->add(tmp24);
						HX_STACK_LINE(135)
						this->_cooldown = ((Float).2);
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,shoot,(void))

Void Player_obj::damage( ){
{
		HX_STACK_FRAME("objects.Player","damage",0x6bd298a2,"objects.Player.damage","objects/Player.hx",142,0x1efe05a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(143)
		bool tmp = ::flixel::effects::FlxFlicker_obj::isFlickering(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(145)
			(this->HP)--;
			HX_STACK_LINE(146)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			tmp2->shake(((Float)0.003),((Float)0.5),null(),null(),null());
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				bool ForceRestart = true;		HX_STACK_VAR(ForceRestart,"ForceRestart");
				HX_STACK_LINE(147)
				bool tmp3 = ForceRestart;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(147)
				::flixel::effects::FlxFlicker_obj::flicker(hx::ObjectPtr<OBJ_>(this),(int)1,((Float)0.05),true,tmp3,null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,damage,(void))

Void Player_obj::kill( ){
{
		HX_STACK_FRAME("objects.Player","kill",0x1ef56511,"objects.Player.kill","objects/Player.hx",151,0x1efe05a2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		this->super::kill();
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::states::GameOverSubState tmp = ::states::GameOverSubState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(153)
			::flixel::FlxState nextState = tmp;		HX_STACK_VAR(nextState,"nextState");
			HX_STACK_LINE(153)
			::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(153)
			::flixel::FlxState tmp2 = nextState;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			bool tmp3 = tmp1->_state->switchTo(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			if ((tmp3)){
				HX_STACK_LINE(153)
				::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(153)
				tmp4->_requestedState = nextState;
			}
		}
	}
return null();
}


int Player_obj::ACCELERATION;

int Player_obj::DECELERATION;

int Player_obj::MAX_BULLETS;

int Player_obj::BULLET_OFFSET;


Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"HP") ) { return HP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RANGE") ) { return RANGE; }
		if (HX_FIELD_EQ(inName,"shoot") ) { return shoot_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MAGNET") ) { return MAGNET; }
		if (HX_FIELD_EQ(inName,"MAX_HP") ) { return MAX_HP; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"damage") ) { return damage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SHOT_MOD") ) { return SHOT_MOD; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAX_RANGE") ) { return MAX_RANGE; }
		if (HX_FIELD_EQ(inName,"_cooldown") ) { return _cooldown; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_MAGNET") ) { return MAX_MAGNET; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MAX_SHOTMOD") ) { return MAX_SHOTMOD; }
		if (HX_FIELD_EQ(inName,"basicChecks") ) { return basicChecks_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAGNET_FORCE") ) { return MAGNET_FORCE; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"HOR_MOVE_SPEED") ) { return HOR_MOVE_SPEED; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"VERT_MOVE_SPEED") ) { return VERT_MOVE_SPEED; }
		if (HX_FIELD_EQ(inName,"MAX_POSSIBLE_HP") ) { return MAX_POSSIBLE_HP; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MAX_MAGNET_FORCE") ) { return MAX_MAGNET_FORCE; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MAX_HOR_MOVE_SPEED") ) { return MAX_HOR_MOVE_SPEED; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_VERT_MOVE_SPEED") ) { return MAX_VERT_MOVE_SPEED; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"HP") ) { HP=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RANGE") ) { RANGE=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MAGNET") ) { MAGNET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_HP") ) { MAX_HP=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"SHOT_MOD") ) { SHOT_MOD=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MAX_RANGE") ) { MAX_RANGE=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cooldown") ) { _cooldown=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"MAX_MAGNET") ) { MAX_MAGNET=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MAX_SHOTMOD") ) { MAX_SHOTMOD=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAGNET_FORCE") ) { MAGNET_FORCE=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"HOR_MOVE_SPEED") ) { HOR_MOVE_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"VERT_MOVE_SPEED") ) { VERT_MOVE_SPEED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_POSSIBLE_HP") ) { MAX_POSSIBLE_HP=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"MAX_MAGNET_FORCE") ) { MAX_MAGNET_FORCE=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MAX_HOR_MOVE_SPEED") ) { MAX_HOR_MOVE_SPEED=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"MAX_VERT_MOVE_SPEED") ) { MAX_VERT_MOVE_SPEED=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("HOR_MOVE_SPEED","\x0d","\xfc","\x60","\x7f"));
	outFields->push(HX_HCSTRING("VERT_MOVE_SPEED","\x87","\x00","\xa1","\x98"));
	outFields->push(HX_HCSTRING("MAX_HOR_MOVE_SPEED","\xa8","\x92","\x46","\x09"));
	outFields->push(HX_HCSTRING("MAX_VERT_MOVE_SPEED","\x8c","\x31","\x9f","\xb7"));
	outFields->push(HX_HCSTRING("MAGNET","\xaa","\x0f","\xb0","\x65"));
	outFields->push(HX_HCSTRING("MAX_MAGNET","\x45","\x13","\x30","\xe3"));
	outFields->push(HX_HCSTRING("MAGNET_FORCE","\x36","\x5c","\x50","\xa7"));
	outFields->push(HX_HCSTRING("MAX_MAGNET_FORCE","\x11","\x86","\xb3","\x32"));
	outFields->push(HX_HCSTRING("RANGE","\x9d","\xdd","\x0d","\x62"));
	outFields->push(HX_HCSTRING("MAX_RANGE","\x62","\x86","\xc1","\xa1"));
	outFields->push(HX_HCSTRING("HP","\x08","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("MAX_HP","\x23","\x99","\xf9","\x70"));
	outFields->push(HX_HCSTRING("MAX_POSSIBLE_HP","\xdb","\x69","\x87","\x59"));
	outFields->push(HX_HCSTRING("_cooldown","\x0a","\x43","\x38","\x41"));
	outFields->push(HX_HCSTRING("SHOT_MOD","\x9d","\x99","\x44","\x70"));
	outFields->push(HX_HCSTRING("MAX_SHOTMOD","\xed","\x11","\x13","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,HOR_MOVE_SPEED),HX_HCSTRING("HOR_MOVE_SPEED","\x0d","\xfc","\x60","\x7f")},
	{hx::fsInt,(int)offsetof(Player_obj,VERT_MOVE_SPEED),HX_HCSTRING("VERT_MOVE_SPEED","\x87","\x00","\xa1","\x98")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_HOR_MOVE_SPEED),HX_HCSTRING("MAX_HOR_MOVE_SPEED","\xa8","\x92","\x46","\x09")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_VERT_MOVE_SPEED),HX_HCSTRING("MAX_VERT_MOVE_SPEED","\x8c","\x31","\x9f","\xb7")},
	{hx::fsInt,(int)offsetof(Player_obj,MAGNET),HX_HCSTRING("MAGNET","\xaa","\x0f","\xb0","\x65")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_MAGNET),HX_HCSTRING("MAX_MAGNET","\x45","\x13","\x30","\xe3")},
	{hx::fsInt,(int)offsetof(Player_obj,MAGNET_FORCE),HX_HCSTRING("MAGNET_FORCE","\x36","\x5c","\x50","\xa7")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_MAGNET_FORCE),HX_HCSTRING("MAX_MAGNET_FORCE","\x11","\x86","\xb3","\x32")},
	{hx::fsFloat,(int)offsetof(Player_obj,RANGE),HX_HCSTRING("RANGE","\x9d","\xdd","\x0d","\x62")},
	{hx::fsFloat,(int)offsetof(Player_obj,MAX_RANGE),HX_HCSTRING("MAX_RANGE","\x62","\x86","\xc1","\xa1")},
	{hx::fsInt,(int)offsetof(Player_obj,HP),HX_HCSTRING("HP","\x08","\x3f","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_HP),HX_HCSTRING("MAX_HP","\x23","\x99","\xf9","\x70")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_POSSIBLE_HP),HX_HCSTRING("MAX_POSSIBLE_HP","\xdb","\x69","\x87","\x59")},
	{hx::fsFloat,(int)offsetof(Player_obj,_cooldown),HX_HCSTRING("_cooldown","\x0a","\x43","\x38","\x41")},
	{hx::fsInt,(int)offsetof(Player_obj,SHOT_MOD),HX_HCSTRING("SHOT_MOD","\x9d","\x99","\x44","\x70")},
	{hx::fsInt,(int)offsetof(Player_obj,MAX_SHOTMOD),HX_HCSTRING("MAX_SHOTMOD","\xed","\x11","\x13","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Player_obj::ACCELERATION,HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38")},
	{hx::fsInt,(void *) &Player_obj::DECELERATION,HX_HCSTRING("DECELERATION","\x9f","\x77","\xaa","\xff")},
	{hx::fsInt,(void *) &Player_obj::MAX_BULLETS,HX_HCSTRING("MAX_BULLETS","\xd6","\x5f","\x46","\xfc")},
	{hx::fsInt,(void *) &Player_obj::BULLET_OFFSET,HX_HCSTRING("BULLET_OFFSET","\x30","\x43","\x2b","\x49")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("HOR_MOVE_SPEED","\x0d","\xfc","\x60","\x7f"),
	HX_HCSTRING("VERT_MOVE_SPEED","\x87","\x00","\xa1","\x98"),
	HX_HCSTRING("MAX_HOR_MOVE_SPEED","\xa8","\x92","\x46","\x09"),
	HX_HCSTRING("MAX_VERT_MOVE_SPEED","\x8c","\x31","\x9f","\xb7"),
	HX_HCSTRING("MAGNET","\xaa","\x0f","\xb0","\x65"),
	HX_HCSTRING("MAX_MAGNET","\x45","\x13","\x30","\xe3"),
	HX_HCSTRING("MAGNET_FORCE","\x36","\x5c","\x50","\xa7"),
	HX_HCSTRING("MAX_MAGNET_FORCE","\x11","\x86","\xb3","\x32"),
	HX_HCSTRING("RANGE","\x9d","\xdd","\x0d","\x62"),
	HX_HCSTRING("MAX_RANGE","\x62","\x86","\xc1","\xa1"),
	HX_HCSTRING("HP","\x08","\x3f","\x00","\x00"),
	HX_HCSTRING("MAX_HP","\x23","\x99","\xf9","\x70"),
	HX_HCSTRING("MAX_POSSIBLE_HP","\xdb","\x69","\x87","\x59"),
	HX_HCSTRING("_cooldown","\x0a","\x43","\x38","\x41"),
	HX_HCSTRING("SHOT_MOD","\x9d","\x99","\x44","\x70"),
	HX_HCSTRING("MAX_SHOTMOD","\xed","\x11","\x13","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("basicChecks","\xf9","\xeb","\xef","\x6c"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("shoot","\xdf","\x81","\x27","\x7c"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::ACCELERATION,"ACCELERATION");
	HX_MARK_MEMBER_NAME(Player_obj::DECELERATION,"DECELERATION");
	HX_MARK_MEMBER_NAME(Player_obj::MAX_BULLETS,"MAX_BULLETS");
	HX_MARK_MEMBER_NAME(Player_obj::BULLET_OFFSET,"BULLET_OFFSET");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::ACCELERATION,"ACCELERATION");
	HX_VISIT_MEMBER_NAME(Player_obj::DECELERATION,"DECELERATION");
	HX_VISIT_MEMBER_NAME(Player_obj::MAX_BULLETS,"MAX_BULLETS");
	HX_VISIT_MEMBER_NAME(Player_obj::BULLET_OFFSET,"BULLET_OFFSET");
};

#endif

hx::Class Player_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ACCELERATION","\x40","\x58","\xaf","\x38"),
	HX_HCSTRING("DECELERATION","\x9f","\x77","\xaa","\xff"),
	HX_HCSTRING("MAX_BULLETS","\xd6","\x5f","\x46","\xfc"),
	HX_HCSTRING("BULLET_OFFSET","\x30","\x43","\x2b","\x49"),
	::String(null()) };

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("objects.Player","\xdb","\xcf","\xdc","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

void Player_obj::__boot()
{
	ACCELERATION= (int)800;
	DECELERATION= (int)800;
	MAX_BULLETS= (int)10;
	BULLET_OFFSET= (int)3;
}

} // end namespace objects
