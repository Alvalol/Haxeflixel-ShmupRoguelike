#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace animation{

Void FlxAnimation_obj::__construct(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY)
{
HX_STACK_FRAME("flixel.animation.FlxAnimation","new",0x9bc5ffc0,"flixel.animation.FlxAnimation.new","flixel/animation/FlxAnimation.hx",8,0x660bc6ae)
HX_STACK_THIS(this)
HX_STACK_ARG(Parent,"Parent")
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(Frames,"Frames")
HX_STACK_ARG(__o_FrameRate,"FrameRate")
HX_STACK_ARG(__o_Looped,"Looped")
HX_STACK_ARG(__o_FlipX,"FlipX")
HX_STACK_ARG(__o_FlipY,"FlipY")
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
bool FlipX = __o_FlipX.Default(false);
bool FlipY = __o_FlipY.Default(false);
{
	HX_STACK_LINE(70)
	this->_frameTimer = ((Float)0);
	HX_STACK_LINE(59)
	this->flipY = false;
	HX_STACK_LINE(54)
	this->flipX = false;
	HX_STACK_LINE(49)
	this->reversed = false;
	HX_STACK_LINE(44)
	this->looped = true;
	HX_STACK_LINE(39)
	this->paused = true;
	HX_STACK_LINE(34)
	this->finished = true;
	HX_STACK_LINE(29)
	this->delay = ((Float)0);
	HX_STACK_LINE(19)
	this->curFrame = (int)0;
	HX_STACK_LINE(82)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(84)
	int tmp2 = FrameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	this->set_frameRate(tmp2);
	HX_STACK_LINE(85)
	this->_frames = Frames;
	HX_STACK_LINE(86)
	this->looped = Looped;
	HX_STACK_LINE(87)
	this->flipX = FlipX;
	HX_STACK_LINE(88)
	this->flipY = FlipY;
}
;
	return null();
}

//FlxAnimation_obj::~FlxAnimation_obj() { }

Dynamic FlxAnimation_obj::__CreateEmpty() { return  new FlxAnimation_obj; }
hx::ObjectPtr< FlxAnimation_obj > FlxAnimation_obj::__new(::flixel::animation::FlxAnimationController Parent,::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_FlipX,hx::Null< bool >  __o_FlipY)
{  hx::ObjectPtr< FlxAnimation_obj > _result_ = new FlxAnimation_obj();
	_result_->__construct(Parent,Name,Frames,__o_FrameRate,__o_Looped,__o_FlipX,__o_FlipY);
	return _result_;}

Dynamic FlxAnimation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAnimation_obj > _result_ = new FlxAnimation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void FlxAnimation_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","destroy",0x7cb38c5a,"flixel.animation.FlxAnimation.destroy","flixel/animation/FlxAnimation.hx",95,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->_frames = null();
		HX_STACK_LINE(97)
		this->name = null();
		HX_STACK_LINE(98)
		this->super::destroy();
	}
return null();
}


Void FlxAnimation_obj::play( hx::Null< bool >  __o_Force,hx::Null< bool >  __o_Reversed,hx::Null< int >  __o_Frame){
bool Force = __o_Force.Default(false);
bool Reversed = __o_Reversed.Default(false);
int Frame = __o_Frame.Default(0);
	HX_STACK_FRAME("flixel.animation.FlxAnimation","play",0xb2d17294,"flixel.animation.FlxAnimation.play","flixel/animation/FlxAnimation.hx",112,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Force,"Force")
	HX_STACK_ARG(Reversed,"Reversed")
	HX_STACK_ARG(Frame,"Frame")
{
		HX_STACK_LINE(113)
		bool tmp = Force;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(113)
			bool tmp5 = this->finished;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			tmp4 = !(tmp9);
		}
		else{
			HX_STACK_LINE(113)
			tmp4 = false;
		}
		HX_STACK_LINE(113)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		if ((tmp4)){
			HX_STACK_LINE(113)
			bool tmp6 = this->reversed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			bool tmp8 = Reversed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			tmp5 = (tmp7 == tmp8);
		}
		else{
			HX_STACK_LINE(113)
			tmp5 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp5)){
			HX_STACK_LINE(115)
			this->paused = false;
			HX_STACK_LINE(116)
			this->finished = false;
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(120)
		this->reversed = Reversed;
		HX_STACK_LINE(121)
		this->paused = false;
		HX_STACK_LINE(122)
		this->_frameTimer = (int)0;
		HX_STACK_LINE(124)
		int tmp6 = this->_frames->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		int numFramesMinusOne = tmp7;		HX_STACK_VAR(numFramesMinusOne,"numFramesMinusOne");
		HX_STACK_LINE(126)
		bool tmp8 = (Frame >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		if ((tmp8)){
			HX_STACK_LINE(129)
			bool tmp9 = (Frame > numFramesMinusOne);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(129)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			if ((tmp9)){
				HX_STACK_LINE(129)
				tmp10 = numFramesMinusOne;
			}
			else{
				HX_STACK_LINE(129)
				tmp10 = Frame;
			}
			HX_STACK_LINE(129)
			Frame = tmp10;
			HX_STACK_LINE(131)
			bool tmp11 = this->reversed;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			if ((tmp11)){
				HX_STACK_LINE(131)
				tmp12 = (numFramesMinusOne - Frame);
			}
			else{
				HX_STACK_LINE(131)
				tmp12 = Frame;
			}
			HX_STACK_LINE(131)
			Frame = tmp12;
		}
		HX_STACK_LINE(134)
		Float tmp9 = this->delay;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		bool tmp10 = (tmp9 <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(134)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(134)
		if ((tmp12)){
			HX_STACK_LINE(135)
			bool tmp14 = (Frame > numFramesMinusOne);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(135)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(135)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(135)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(135)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(135)
			if ((tmp18)){
				HX_STACK_LINE(135)
				bool tmp19 = this->reversed;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(135)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(135)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(135)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(135)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(135)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(135)
				tmp13 = !(tmp25);
			}
			else{
				HX_STACK_LINE(135)
				tmp13 = false;
			}
		}
		else{
			HX_STACK_LINE(134)
			tmp13 = true;
		}
		HX_STACK_LINE(134)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(134)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(134)
		if ((tmp14)){
			HX_STACK_LINE(136)
			bool tmp16 = (Frame < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(136)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(136)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(136)
			if ((tmp18)){
				HX_STACK_LINE(136)
				tmp15 = this->reversed;
			}
			else{
				HX_STACK_LINE(136)
				tmp15 = false;
			}
		}
		else{
			HX_STACK_LINE(134)
			tmp15 = true;
		}
		HX_STACK_LINE(134)
		if ((tmp15)){
			HX_STACK_LINE(138)
			this->finished = true;
		}
		else{
			HX_STACK_LINE(142)
			this->finished = false;
		}
		HX_STACK_LINE(145)
		bool tmp16 = (Frame < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(145)
		if ((tmp16)){
			HX_STACK_LINE(147)
			::flixel::math::FlxRandom tmp17 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(147)
			int tmp18 = numFramesMinusOne;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(147)
			int tmp19 = tmp17->_int((int)0,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(147)
			this->set_curFrame(tmp19);
		}
		else{
			HX_STACK_LINE(151)
			int tmp17 = Frame;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(151)
			this->set_curFrame(tmp17);
		}
		HX_STACK_LINE(154)
		bool tmp17 = this->finished;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(154)
		if ((tmp17)){
			HX_STACK_LINE(155)
			::flixel::animation::FlxAnimationController tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(155)
			::flixel::animation::FlxAnimationController _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(155)
			bool tmp19 = (_this->finishCallback != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(155)
			if ((tmp19)){
				HX_STACK_LINE(155)
				::String tmp20 = this->name;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(155)
				_this->finishCallback(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxAnimation_obj,play,(void))

Void FlxAnimation_obj::restart( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","restart",0xc2d3272f,"flixel.animation.FlxAnimation.restart","flixel/animation/FlxAnimation.hx",159,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		this->play(true,tmp,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,restart,(void))

Void FlxAnimation_obj::stop( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","stop",0xb4d334a2,"flixel.animation.FlxAnimation.stop","flixel/animation/FlxAnimation.hx",164,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		this->finished = true;
		HX_STACK_LINE(166)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,stop,(void))

Void FlxAnimation_obj::reset( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","reset",0xe6ad112f,"flixel.animation.FlxAnimation.reset","flixel/animation/FlxAnimation.hx",170,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		this->stop();
		HX_STACK_LINE(172)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		if ((tmp)){
			HX_STACK_LINE(172)
			int tmp2 = this->_frames->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			tmp1 = (tmp2 - (int)1);
		}
		else{
			HX_STACK_LINE(172)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(172)
		this->set_curFrame(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reset,(void))

Void FlxAnimation_obj::finish( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","finish",0x6ec8ecf3,"flixel.animation.FlxAnimation.finish","flixel/animation/FlxAnimation.hx",176,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		this->stop();
		HX_STACK_LINE(178)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		if ((tmp)){
			HX_STACK_LINE(178)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(178)
			int tmp2 = this->_frames->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(178)
			tmp1 = (tmp2 - (int)1);
		}
		HX_STACK_LINE(178)
		this->set_curFrame(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,finish,(void))

Void FlxAnimation_obj::pause( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","pause",0xbd3c9e56,"flixel.animation.FlxAnimation.pause","flixel/animation/FlxAnimation.hx",183,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		this->paused = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,pause,(void))

Void FlxAnimation_obj::resume( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","resume",0xf0ce164d,"flixel.animation.FlxAnimation.resume","flixel/animation/FlxAnimation.hx",188,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		this->paused = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,resume,(void))

Void FlxAnimation_obj::reverse( ){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","reverse",0x73299882,"flixel.animation.FlxAnimation.reverse","flixel/animation/FlxAnimation.hx",192,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		bool tmp = this->reversed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(193)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		this->reversed = tmp1;
		HX_STACK_LINE(194)
		bool tmp2 = this->finished;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		if ((tmp2)){
			HX_STACK_LINE(195)
			bool tmp3 = this->reversed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(195)
			this->play(false,tmp3,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,reverse,(void))

Void FlxAnimation_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.animation.FlxAnimation","update",0x6f4f32a9,"flixel.animation.FlxAnimation.update","flixel/animation/FlxAnimation.hx",199,0x660bc6ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(200)
		Float tmp = this->delay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		if ((tmp3)){
			HX_STACK_LINE(200)
			tmp4 = this->finished;
		}
		else{
			HX_STACK_LINE(200)
			tmp4 = true;
		}
		HX_STACK_LINE(200)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		if ((tmp5)){
			HX_STACK_LINE(200)
			tmp6 = this->paused;
		}
		else{
			HX_STACK_LINE(200)
			tmp6 = true;
		}
		HX_STACK_LINE(200)
		if ((tmp6)){
			HX_STACK_LINE(201)
			return null();
		}
		HX_STACK_LINE(203)
		hx::AddEq(this->_frameTimer,elapsed);
		HX_STACK_LINE(204)
		while((true)){
			HX_STACK_LINE(204)
			Float tmp7 = this->_frameTimer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			Float tmp8 = this->delay;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			if ((tmp9)){
				HX_STACK_LINE(204)
				bool tmp11 = this->finished;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(204)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(204)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(204)
				tmp10 = !(tmp13);
			}
			else{
				HX_STACK_LINE(204)
				tmp10 = false;
			}
			HX_STACK_LINE(204)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(204)
			if ((tmp11)){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(206)
			Float tmp12 = this->delay;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			hx::SubEq(this->_frameTimer,tmp12);
			HX_STACK_LINE(208)
			bool tmp13 = this->looped;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(208)
			if ((tmp13)){
				HX_STACK_LINE(210)
				int tmp14 = this->_frames->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				int numFramesMinusOne = tmp15;		HX_STACK_VAR(numFramesMinusOne,"numFramesMinusOne");
				HX_STACK_LINE(211)
				bool tmp16 = this->reversed;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(211)
				int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(211)
				if ((tmp16)){
					HX_STACK_LINE(211)
					int tmp18 = numFramesMinusOne;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(211)
					int tmp19 = this->curFrame;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(211)
					tmp17 = (tmp18 - tmp19);
				}
				else{
					HX_STACK_LINE(211)
					tmp17 = this->curFrame;
				}
				HX_STACK_LINE(211)
				int tempFrame = tmp17;		HX_STACK_VAR(tempFrame,"tempFrame");
				HX_STACK_LINE(213)
				bool tmp18 = (tempFrame == numFramesMinusOne);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(213)
				if ((tmp18)){
					HX_STACK_LINE(215)
					bool tmp19 = this->reversed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(215)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(215)
					if ((tmp19)){
						HX_STACK_LINE(215)
						tmp20 = numFramesMinusOne;
					}
					else{
						HX_STACK_LINE(215)
						tmp20 = (int)0;
					}
					HX_STACK_LINE(215)
					this->set_curFrame(tmp20);
				}
				else{
					HX_STACK_LINE(219)
					bool tmp19 = this->reversed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(219)
					int tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(219)
					if ((tmp19)){
						HX_STACK_LINE(219)
						int tmp21 = this->curFrame;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(219)
						tmp20 = (tmp21 - (int)1);
					}
					else{
						HX_STACK_LINE(219)
						int tmp21 = this->curFrame;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(219)
						tmp20 = (tmp21 + (int)1);
					}
					HX_STACK_LINE(219)
					this->set_curFrame(tmp20);
				}
			}
			else{
				HX_STACK_LINE(224)
				bool tmp14 = this->reversed;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(224)
				if ((tmp14)){
					HX_STACK_LINE(224)
					int tmp16 = this->curFrame;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(224)
					tmp15 = (tmp16 - (int)1);
				}
				else{
					HX_STACK_LINE(224)
					int tmp16 = this->curFrame;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(224)
					tmp15 = (tmp16 + (int)1);
				}
				HX_STACK_LINE(224)
				this->set_curFrame(tmp15);
			}
		}
	}
return null();
}


::flixel::animation::FlxBaseAnimation FlxAnimation_obj::clone( ::flixel::animation::FlxAnimationController Parent){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","clone",0x4847dabd,"flixel.animation.FlxAnimation.clone","flixel/animation/FlxAnimation.hx",230,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Parent,"Parent")
	HX_STACK_LINE(231)
	::flixel::animation::FlxAnimationController tmp = Parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	int tmp2 = this->frameRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	bool tmp3 = this->looped;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	bool tmp4 = this->flipX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(231)
	bool tmp5 = this->flipY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(231)
	::flixel::animation::FlxAnimation tmp6 = ::flixel::animation::FlxAnimation_obj::__new(tmp,tmp1,this->_frames,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(231)
	return tmp6;
}


int FlxAnimation_obj::set_frameRate( int value){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_frameRate",0x8699eef0,"flixel.animation.FlxAnimation.set_frameRate","flixel/animation/FlxAnimation.hx",235,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(236)
	this->delay = (int)0;
	HX_STACK_LINE(237)
	this->frameRate = value;
	HX_STACK_LINE(238)
	bool tmp = (value > (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	if ((tmp)){
		HX_STACK_LINE(240)
		Float tmp1 = (Float(((Float)1.0)) / Float(value));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		this->delay = tmp1;
	}
	HX_STACK_LINE(242)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_frameRate,return )

int FlxAnimation_obj::set_curFrame( int Frame){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","set_curFrame",0x46812eaa,"flixel.animation.FlxAnimation.set_curFrame","flixel/animation/FlxAnimation.hx",246,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_LINE(247)
	int tmp = this->_frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	int numFramesMinusOne = tmp1;		HX_STACK_VAR(numFramesMinusOne,"numFramesMinusOne");
	HX_STACK_LINE(249)
	bool tmp2 = this->reversed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	if ((tmp2)){
		HX_STACK_LINE(249)
		tmp3 = (numFramesMinusOne - Frame);
	}
	else{
		HX_STACK_LINE(249)
		tmp3 = Frame;
	}
	HX_STACK_LINE(249)
	int tempFrame = tmp3;		HX_STACK_VAR(tempFrame,"tempFrame");
	HX_STACK_LINE(251)
	bool tmp4 = (tempFrame >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(251)
	if ((tmp4)){
		HX_STACK_LINE(253)
		bool tmp5 = this->looped;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(253)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(253)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(253)
		if ((tmp7)){
			HX_STACK_LINE(253)
			tmp8 = (tempFrame > numFramesMinusOne);
		}
		else{
			HX_STACK_LINE(253)
			tmp8 = false;
		}
		HX_STACK_LINE(253)
		if ((tmp8)){
			HX_STACK_LINE(255)
			this->finished = true;
			HX_STACK_LINE(256)
			bool tmp9 = this->reversed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			if ((tmp9)){
				HX_STACK_LINE(256)
				tmp10 = (int)0;
			}
			else{
				HX_STACK_LINE(256)
				tmp10 = numFramesMinusOne;
			}
			HX_STACK_LINE(256)
			this->curFrame = tmp10;
		}
		else{
			HX_STACK_LINE(260)
			this->curFrame = Frame;
		}
	}
	else{
		HX_STACK_LINE(265)
		::flixel::math::FlxRandom tmp5 = ::flixel::FlxG_obj::random;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(265)
		int tmp6 = numFramesMinusOne;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(265)
		int tmp7 = tmp5->_int((int)0,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(265)
		this->curFrame = tmp7;
	}
	HX_STACK_LINE(268)
	int tmp5 = this->curFrame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(268)
	int tmp6 = this->_frames->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(268)
	this->set_curIndex(tmp6);
	HX_STACK_LINE(270)
	bool tmp7 = this->finished;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(270)
	if ((tmp7)){
		HX_STACK_LINE(270)
		::flixel::animation::FlxAnimationController tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(270)
		::flixel::animation::FlxAnimationController tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(270)
		tmp8 = (tmp10 != null());
	}
	else{
		HX_STACK_LINE(270)
		tmp8 = false;
	}
	HX_STACK_LINE(270)
	if ((tmp8)){
		HX_STACK_LINE(271)
		::flixel::animation::FlxAnimationController tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(271)
		::flixel::animation::FlxAnimationController _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(271)
		bool tmp10 = (_this->finishCallback != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(271)
		if ((tmp10)){
			HX_STACK_LINE(271)
			::String tmp11 = this->name;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(271)
			_this->finishCallback(tmp11);
		}
	}
	HX_STACK_LINE(273)
	int tmp9 = Frame;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(273)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxAnimation_obj,set_curFrame,return )

int FlxAnimation_obj::get_numFrames( ){
	HX_STACK_FRAME("flixel.animation.FlxAnimation","get_numFrames",0x65f5f5c3,"flixel.animation.FlxAnimation.get_numFrames","flixel/animation/FlxAnimation.hx",277,0x660bc6ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(278)
	int tmp = this->_frames->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(278)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAnimation_obj,get_numFrames,return )


FlxAnimation_obj::FlxAnimation_obj()
{
}

void FlxAnimation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAnimation);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(numFrames,"numFrames");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(looped,"looped");
	HX_MARK_MEMBER_NAME(reversed,"reversed");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(_frames,"_frames");
	HX_MARK_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAnimation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(numFrames,"numFrames");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(looped,"looped");
	HX_VISIT_MEMBER_NAME(reversed,"reversed");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(_frames,"_frames");
	HX_VISIT_MEMBER_NAME(_frameTimer,"_frameTimer");
	::flixel::animation::FlxBaseAnimation_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxAnimation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"looped") ) { return looped; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { return _frames; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return curFrame; }
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"reversed") ) { return reversed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { return inCallProp == hx::paccAlways ? get_numFrames() : numFrames; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { return _frameTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_curFrame") ) { return set_curFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return get_numFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAnimation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"looped") ) { looped=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_frames") ) { _frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { if (inCallProp == hx::paccAlways) return set_curFrame(inValue);curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"reversed") ) { reversed=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue);frameRate=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numFrames") ) { numFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_frameTimer") ) { _frameTimer=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAnimation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"));
	outFields->push(HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81"));
	outFields->push(HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"));
	outFields->push(HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,curFrame),HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e")},
	{hx::fsInt,(int)offsetof(FlxAnimation_obj,numFrames),HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,looped),HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,reversed),HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,flipX),HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02")},
	{hx::fsBool,(int)offsetof(FlxAnimation_obj,flipY),HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxAnimation_obj,_frames),HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a")},
	{hx::fsFloat,(int)offsetof(FlxAnimation_obj,_frameTimer),HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("curFrame","\x8d","\x72","\x31","\x4e"),
	HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("looped","\xc3","\x5f","\xb9","\x61"),
	HX_HCSTRING("reversed","\x02","\xc5","\xb5","\x81"),
	HX_HCSTRING("flipX","\x0b","\x45","\x92","\x02"),
	HX_HCSTRING("flipY","\x0c","\x45","\x92","\x02"),
	HX_HCSTRING("_frames","\x45","\xc1","\xfc","\x1a"),
	HX_HCSTRING("_frameTimer","\x77","\xc1","\xe5","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("set_curFrame","\x0a","\x4a","\x44","\x18"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAnimation_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxAnimation_obj::__mClass;

void FlxAnimation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.animation.FlxAnimation","\xce","\x5f","\xe3","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxAnimation_obj >;
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
} // end namespace animation
