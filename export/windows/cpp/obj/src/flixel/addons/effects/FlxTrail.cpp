#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
namespace flixel{
namespace addons{
namespace effects{

Void FlxTrail_obj::__construct(::flixel::FlxSprite Target,Dynamic Graphic,hx::Null< int >  __o_Length,hx::Null< int >  __o_Delay,hx::Null< Float >  __o_Alpha,hx::Null< Float >  __o_Diff)
{
HX_STACK_FRAME("flixel.addons.effects.FlxTrail","new",0xad9a4c7b,"flixel.addons.effects.FlxTrail.new","flixel/addons/effects/FlxTrail.hx",20,0x79f2ead4)
HX_STACK_THIS(this)
HX_STACK_ARG(Target,"Target")
HX_STACK_ARG(Graphic,"Graphic")
HX_STACK_ARG(__o_Length,"Length")
HX_STACK_ARG(__o_Delay,"Delay")
HX_STACK_ARG(__o_Alpha,"Alpha")
HX_STACK_ARG(__o_Diff,"Diff")
int Length = __o_Length.Default(10);
int Delay = __o_Delay.Default(3);
Float Alpha = __o_Alpha.Default(((Float)0.4));
Float Diff = __o_Diff.Default(((Float)0.05));
{
	HX_STACK_LINE(79)
	this->_recentAnimations = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(78)
	this->_recentFlipY = Array_obj< bool >::__new();
	HX_STACK_LINE(77)
	this->_recentFlipX = Array_obj< bool >::__new();
	HX_STACK_LINE(76)
	this->_recentFrames = Array_obj< int >::__new();
	HX_STACK_LINE(75)
	this->_recentScales = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(74)
	this->_recentAngles = Array_obj< Float >::__new();
	HX_STACK_LINE(73)
	this->_recentPositions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->_transp = ((Float)1);
	HX_STACK_LINE(59)
	this->_trailLength = (int)0;
	HX_STACK_LINE(55)
	this->_counter = (int)0;
	HX_STACK_LINE(50)
	this->framesEnabled = true;
	HX_STACK_LINE(46)
	this->scalesEnabled = true;
	HX_STACK_LINE(42)
	this->rotationsEnabled = true;
	HX_STACK_LINE(38)
	this->yEnabled = true;
	HX_STACK_LINE(34)
	this->xEnabled = true;
	HX_STACK_LINE(99)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(101)
	::flixel::math::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::flixel::math::FlxPoint tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(101)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(101)
			::flixel::util::FlxPool_flixel_math_FlxPoint tmp2 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			Float tmp4 = X;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			Float tmp5 = Y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint tmp6 = tmp3->set(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			::flixel::math::FlxPoint point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(101)
			point->_inPool = false;
			HX_STACK_LINE(101)
			tmp1 = point;
		}
		HX_STACK_LINE(101)
		::flixel::math::FlxPoint _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(101)
		::flixel::math::FlxPoint point = Target->origin;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(101)
		Float tmp2 = point->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		_this->set_x(tmp2);
		HX_STACK_LINE(101)
		Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		_this->set_y(tmp3);
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			bool tmp4 = point->_weak;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			if ((tmp4)){
				HX_STACK_LINE(101)
				point->put();
			}
		}
		HX_STACK_LINE(101)
		tmp = _this;
	}
	HX_STACK_LINE(101)
	this->_spriteOrigin = tmp;
	HX_STACK_LINE(104)
	this->target = Target;
	HX_STACK_LINE(105)
	this->delay = Delay;
	HX_STACK_LINE(106)
	this->_graphic = Graphic;
	HX_STACK_LINE(107)
	this->_transp = Alpha;
	HX_STACK_LINE(108)
	this->_difference = Diff;
	HX_STACK_LINE(111)
	int tmp1 = Length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	this->increaseLength(tmp1);
	HX_STACK_LINE(112)
	this->set_solid(false);
}
;
	return null();
}

//FlxTrail_obj::~FlxTrail_obj() { }

Dynamic FlxTrail_obj::__CreateEmpty() { return  new FlxTrail_obj; }
hx::ObjectPtr< FlxTrail_obj > FlxTrail_obj::__new(::flixel::FlxSprite Target,Dynamic Graphic,hx::Null< int >  __o_Length,hx::Null< int >  __o_Delay,hx::Null< Float >  __o_Alpha,hx::Null< Float >  __o_Diff)
{  hx::ObjectPtr< FlxTrail_obj > _result_ = new FlxTrail_obj();
	_result_->__construct(Target,Graphic,__o_Length,__o_Delay,__o_Alpha,__o_Diff);
	return _result_;}

Dynamic FlxTrail_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTrail_obj > _result_ = new FlxTrail_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void FlxTrail_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrail","destroy",0x288c5295,"flixel.addons.effects.FlxTrail.destroy","flixel/addons/effects/FlxTrail.hx",116,0x79f2ead4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::flixel::util::FlxDestroyUtil_obj::putArray(this->_recentPositions);
		HX_STACK_LINE(118)
		::flixel::util::FlxDestroyUtil_obj::putArray(this->_recentScales);
		HX_STACK_LINE(120)
		this->_recentAngles = null();
		HX_STACK_LINE(121)
		this->_recentPositions = null();
		HX_STACK_LINE(122)
		this->_recentScales = null();
		HX_STACK_LINE(123)
		this->_recentFrames = null();
		HX_STACK_LINE(124)
		this->_recentFlipX = null();
		HX_STACK_LINE(125)
		this->_recentFlipY = null();
		HX_STACK_LINE(126)
		this->_recentAnimations = null();
		HX_STACK_LINE(127)
		this->_spriteOrigin = null();
		HX_STACK_LINE(129)
		this->target = null();
		HX_STACK_LINE(130)
		this->_graphic = null();
		HX_STACK_LINE(132)
		this->super::destroy();
	}
return null();
}


Void FlxTrail_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrail","update",0xf1cd4cce,"flixel.addons.effects.FlxTrail.update","flixel/addons/effects/FlxTrail.hx",139,0x79f2ead4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(141)
		(this->_counter)++;
		HX_STACK_LINE(144)
		int tmp = this->_counter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		int tmp1 = this->delay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		if ((tmp2)){
			HX_STACK_LINE(144)
			int tmp4 = this->_trailLength;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			tmp3 = (tmp5 >= (int)1);
		}
		else{
			HX_STACK_LINE(144)
			tmp3 = false;
		}
		HX_STACK_LINE(144)
		if ((tmp3)){
			HX_STACK_LINE(146)
			this->_counter = (int)0;
			HX_STACK_LINE(149)
			::flixel::math::FlxPoint spritePosition = null();		HX_STACK_VAR(spritePosition,"spritePosition");
			HX_STACK_LINE(150)
			int tmp4 = this->_recentPositions->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			int tmp5 = this->_trailLength;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			if ((tmp6)){
				HX_STACK_LINE(152)
				::flixel::math::FlxPoint tmp7 = this->_recentPositions->pop().StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(152)
				spritePosition = tmp7;
			}
			else{
				HX_STACK_LINE(156)
				::flixel::math::FlxPoint tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				{
					HX_STACK_LINE(156)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(156)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(156)
					::flixel::util::FlxPool_flixel_math_FlxPoint tmp8 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(156)
					::flixel::math::FlxPoint tmp9 = tmp8->get();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					Float tmp10 = X;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(156)
					Float tmp11 = Y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(156)
					::flixel::math::FlxPoint tmp12 = tmp9->set(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(156)
					::flixel::math::FlxPoint point = tmp12;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(156)
					point->_inPool = false;
					HX_STACK_LINE(156)
					tmp7 = point;
				}
				HX_STACK_LINE(156)
				spritePosition = tmp7;
			}
			HX_STACK_LINE(159)
			::flixel::FlxSprite tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			::flixel::FlxSprite tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			Float tmp10 = tmp9->offset->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(159)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			::flixel::FlxSprite tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(159)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(159)
			::flixel::FlxSprite tmp14 = this->target;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(159)
			Float tmp15 = tmp14->offset->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(159)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(159)
			spritePosition->set(tmp11,tmp16);
			HX_STACK_LINE(160)
			::flixel::math::FlxPoint tmp17 = spritePosition;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(160)
			this->_recentPositions->unshift(tmp17);
			HX_STACK_LINE(163)
			bool tmp18 = this->rotationsEnabled;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(163)
			if ((tmp18)){
				HX_STACK_LINE(165)
				::flixel::FlxSprite tmp19 = this->target;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(165)
				Float tmp20 = tmp19->angle;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(165)
				this->cacheValue(this->_recentAngles,tmp20);
			}
			HX_STACK_LINE(169)
			bool tmp19 = this->scalesEnabled;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(169)
			if ((tmp19)){
				HX_STACK_LINE(171)
				::flixel::math::FlxPoint spriteScale = null();		HX_STACK_VAR(spriteScale,"spriteScale");
				HX_STACK_LINE(172)
				int tmp20 = this->_recentScales->length;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(172)
				int tmp21 = this->_trailLength;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(172)
				bool tmp22 = (tmp20 == tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(172)
				if ((tmp22)){
					HX_STACK_LINE(174)
					::flixel::math::FlxPoint tmp23 = this->_recentScales->pop().StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(174)
					spriteScale = tmp23;
				}
				else{
					HX_STACK_LINE(178)
					::flixel::math::FlxPoint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(178)
					{
						HX_STACK_LINE(178)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(178)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(178)
						::flixel::util::FlxPool_flixel_math_FlxPoint tmp24 = ::flixel::math::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(178)
						::flixel::math::FlxPoint tmp25 = tmp24->get();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(178)
						Float tmp26 = X;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(178)
						Float tmp27 = Y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(178)
						::flixel::math::FlxPoint tmp28 = tmp25->set(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(178)
						::flixel::math::FlxPoint point = tmp28;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(178)
						point->_inPool = false;
						HX_STACK_LINE(178)
						tmp23 = point;
					}
					HX_STACK_LINE(178)
					spriteScale = tmp23;
				}
				HX_STACK_LINE(181)
				::flixel::FlxSprite tmp23 = this->target;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(181)
				Float tmp24 = tmp23->scale->x;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(181)
				::flixel::FlxSprite tmp25 = this->target;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(181)
				Float tmp26 = tmp25->scale->y;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(181)
				spriteScale->set(tmp24,tmp26);
				HX_STACK_LINE(182)
				::flixel::math::FlxPoint tmp27 = spriteScale;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(182)
				this->_recentScales->unshift(tmp27);
			}
			HX_STACK_LINE(186)
			bool tmp20 = this->framesEnabled;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(186)
			if ((tmp20)){
				HX_STACK_LINE(186)
				Dynamic tmp22 = this->_graphic;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(186)
				Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(186)
				tmp21 = (tmp23 == null());
			}
			else{
				HX_STACK_LINE(186)
				tmp21 = false;
			}
			HX_STACK_LINE(186)
			if ((tmp21)){
				HX_STACK_LINE(188)
				::flixel::FlxSprite tmp22 = this->target;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(188)
				int tmp23 = tmp22->animation->frameIndex;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(188)
				this->cacheValue(this->_recentFrames,tmp23);
				HX_STACK_LINE(189)
				::flixel::FlxSprite tmp24 = this->target;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(189)
				bool tmp25 = tmp24->flipX;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(189)
				this->cacheValue(this->_recentFlipX,tmp25);
				HX_STACK_LINE(190)
				::flixel::FlxSprite tmp26 = this->target;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(190)
				bool tmp27 = tmp26->flipY;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(190)
				this->cacheValue(this->_recentFlipY,tmp27);
				HX_STACK_LINE(191)
				::flixel::FlxSprite tmp28 = this->target;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(191)
				::flixel::animation::FlxAnimation tmp29 = tmp28->animation->_curAnim;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(191)
				this->cacheValue(this->_recentAnimations,tmp29);
			}
			HX_STACK_LINE(195)
			::flixel::FlxSprite trailSprite;		HX_STACK_VAR(trailSprite,"trailSprite");
			HX_STACK_LINE(197)
			{
				HX_STACK_LINE(197)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(197)
				int tmp22 = this->_recentPositions->length;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(197)
				int _g = tmp22;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(197)
				while((true)){
					HX_STACK_LINE(197)
					bool tmp23 = (_g1 < _g);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(197)
					bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(197)
					if ((tmp24)){
						HX_STACK_LINE(197)
						break;
					}
					HX_STACK_LINE(197)
					int tmp25 = (_g1)++;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(197)
					int i = tmp25;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(199)
					::flixel::group::FlxTypedGroup tmp26 = this->group;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(199)
					::flixel::FlxSprite tmp27 = tmp26->members->__GetItem(i);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(199)
					trailSprite = tmp27;
					HX_STACK_LINE(200)
					::flixel::math::FlxPoint tmp28 = this->_recentPositions->__get(i).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(200)
					Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(200)
					trailSprite->set_x(tmp29);
					HX_STACK_LINE(201)
					::flixel::math::FlxPoint tmp30 = this->_recentPositions->__get(i).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(201)
					Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(201)
					trailSprite->set_y(tmp31);
					HX_STACK_LINE(204)
					bool tmp32 = this->rotationsEnabled;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(204)
					if ((tmp32)){
						HX_STACK_LINE(206)
						Float tmp33 = this->_recentAngles->__get(i);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(206)
						trailSprite->set_angle(tmp33);
						HX_STACK_LINE(207)
						::flixel::math::FlxPoint tmp34 = this->_spriteOrigin;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(207)
						Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(207)
						trailSprite->origin->set_x(tmp35);
						HX_STACK_LINE(208)
						::flixel::math::FlxPoint tmp36 = this->_spriteOrigin;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(208)
						Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(208)
						trailSprite->origin->set_y(tmp37);
					}
					HX_STACK_LINE(212)
					bool tmp33 = this->scalesEnabled;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(212)
					if ((tmp33)){
						HX_STACK_LINE(214)
						::flixel::math::FlxPoint tmp34 = this->_recentScales->__get(i).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(214)
						Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(214)
						trailSprite->scale->set_x(tmp35);
						HX_STACK_LINE(215)
						::flixel::math::FlxPoint tmp36 = this->_recentScales->__get(i).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(215)
						Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(215)
						trailSprite->scale->set_y(tmp37);
					}
					HX_STACK_LINE(219)
					bool tmp34 = this->framesEnabled;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(219)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(219)
					if ((tmp34)){
						HX_STACK_LINE(219)
						Dynamic tmp36 = this->_graphic;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(219)
						Dynamic tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(219)
						tmp35 = (tmp37 == null());
					}
					else{
						HX_STACK_LINE(219)
						tmp35 = false;
					}
					HX_STACK_LINE(219)
					if ((tmp35)){
						HX_STACK_LINE(221)
						int tmp36 = this->_recentFrames->__get(i);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(221)
						trailSprite->animation->set_frameIndex(tmp36);
						HX_STACK_LINE(222)
						bool tmp37 = this->_recentFlipX->__get(i);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(222)
						trailSprite->set_flipX(tmp37);
						HX_STACK_LINE(223)
						bool tmp38 = this->_recentFlipY->__get(i);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(223)
						trailSprite->set_flipY(tmp38);
						HX_STACK_LINE(225)
						{
							HX_STACK_LINE(225)
							::flixel::animation::FlxAnimationController _this = trailSprite->animation;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(225)
							::flixel::animation::FlxAnimation tmp39 = this->_recentAnimations->__get(i).StaticCast< ::flixel::animation::FlxAnimation >();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(225)
							::flixel::animation::FlxAnimation Anim = tmp39;		HX_STACK_VAR(Anim,"Anim");
							HX_STACK_LINE(225)
							bool tmp40 = (Anim != _this->_curAnim);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(225)
							if ((tmp40)){
								HX_STACK_LINE(225)
								bool tmp41 = (_this->_curAnim != null());		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(225)
								if ((tmp41)){
									HX_STACK_LINE(225)
									_this->_curAnim->stop();
								}
								HX_STACK_LINE(225)
								bool tmp42 = (Anim != null());		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(225)
								if ((tmp42)){
									HX_STACK_LINE(225)
									Anim->play(null(),null(),null());
								}
							}
							HX_STACK_LINE(225)
							_this->_curAnim = Anim;
						}
					}
					HX_STACK_LINE(229)
					trailSprite->set_exists(true);
				}
			}
		}
		HX_STACK_LINE(233)
		Float tmp4 = elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		this->super::update(tmp4);
	}
return null();
}


Void FlxTrail_obj::cacheValue( cpp::ArrayBase array,Dynamic value){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrail","cacheValue",0x1383f314,"flixel.addons.effects.FlxTrail.cacheValue","flixel/addons/effects/FlxTrail.hx",237,0x79f2ead4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(238)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(238)
		array->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp);
		HX_STACK_LINE(239)
		int tmp1 = this->_trailLength;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		::flixel::util::FlxArrayUtil_obj::setLength_cacheValue_T(array,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTrail_obj,cacheValue,(void))

Void FlxTrail_obj::resetTrail( ){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrail","resetTrail",0x9dced8bc,"flixel.addons.effects.FlxTrail.resetTrail","flixel/addons/effects/FlxTrail.hx",243,0x79f2ead4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(244)
		int tmp = this->_recentPositions->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		this->_recentPositions->splice((int)0,tmp);
		HX_STACK_LINE(245)
		int tmp1 = this->_recentAngles->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		this->_recentAngles->splice((int)0,tmp1);
		HX_STACK_LINE(246)
		int tmp2 = this->_recentScales->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		this->_recentScales->splice((int)0,tmp2);
		HX_STACK_LINE(247)
		int tmp3 = this->_recentFrames->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		this->_recentFrames->splice((int)0,tmp3);
		HX_STACK_LINE(248)
		int tmp4 = this->_recentFlipX->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		this->_recentFlipX->splice((int)0,tmp4);
		HX_STACK_LINE(249)
		int tmp5 = this->_recentFlipY->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		this->_recentFlipY->splice((int)0,tmp5);
		HX_STACK_LINE(250)
		int tmp6 = this->_recentAnimations->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(250)
		this->_recentAnimations->splice((int)0,tmp6);
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(252)
			::flixel::group::FlxTypedGroup tmp7 = this->group;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			int tmp8 = tmp7->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(252)
			while((true)){
				HX_STACK_LINE(252)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(252)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				if ((tmp10)){
					HX_STACK_LINE(252)
					break;
				}
				HX_STACK_LINE(252)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(254)
				::flixel::group::FlxTypedGroup tmp12 = this->group;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(254)
				::flixel::FlxSprite tmp13 = tmp12->members->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(254)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(254)
				if ((tmp14)){
					HX_STACK_LINE(256)
					::flixel::group::FlxTypedGroup tmp15 = this->group;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(256)
					::flixel::FlxSprite tmp16 = tmp15->members->__GetItem(i);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(256)
					tmp16->set_exists(false);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrail_obj,resetTrail,(void))

Void FlxTrail_obj::increaseLength( int Amount){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrail","increaseLength",0x6ebb160d,"flixel.addons.effects.FlxTrail.increaseLength","flixel/addons/effects/FlxTrail.hx",267,0x79f2ead4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Amount,"Amount")
		HX_STACK_LINE(269)
		bool tmp = (Amount <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		if ((tmp)){
			HX_STACK_LINE(271)
			return null();
		}
		HX_STACK_LINE(274)
		hx::AddEq(this->_trailLength,Amount);
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			while((true)){
				HX_STACK_LINE(277)
				bool tmp1 = (_g < Amount);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(277)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(277)
				if ((tmp2)){
					HX_STACK_LINE(277)
					break;
				}
				HX_STACK_LINE(277)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(277)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(279)
				::flixel::FlxSprite tmp4 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				::flixel::FlxSprite trailSprite = tmp4;		HX_STACK_VAR(trailSprite,"trailSprite");
				HX_STACK_LINE(281)
				Dynamic tmp5 = this->_graphic;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(281)
				bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(281)
				if ((tmp6)){
					HX_STACK_LINE(283)
					::flixel::FlxSprite tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(283)
					trailSprite->loadGraphicFromSprite(tmp7);
				}
				else{
					HX_STACK_LINE(287)
					Dynamic tmp7 = this->_graphic;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(287)
					trailSprite->loadGraphic(tmp7,null(),null(),null(),null(),null());
				}
				HX_STACK_LINE(289)
				trailSprite->set_exists(false);
				HX_STACK_LINE(290)
				::flixel::FlxSprite tmp7 = trailSprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(290)
				this->add(tmp7);
				HX_STACK_LINE(291)
				Float tmp8 = this->_transp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(291)
				trailSprite->set_alpha(tmp8);
				HX_STACK_LINE(292)
				Float tmp9 = this->_difference;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(292)
				hx::SubEq(this->_transp,tmp9);
				HX_STACK_LINE(293)
				int tmp10 = this->allowCollisions;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(293)
				int tmp11 = (int(tmp10) & int((int)4369));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(293)
				trailSprite->set_solid(tmp12);
				HX_STACK_LINE(295)
				bool tmp13 = (trailSprite->alpha <= (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(295)
				if ((tmp13)){
					HX_STACK_LINE(297)
					trailSprite->kill();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrail_obj,increaseLength,(void))

Void FlxTrail_obj::changeGraphic( Dynamic Image){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrail","changeGraphic",0x690acaf3,"flixel.addons.effects.FlxTrail.changeGraphic","flixel/addons/effects/FlxTrail.hx",308,0x79f2ead4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Image,"Image")
		HX_STACK_LINE(309)
		this->_graphic = Image;
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(311)
			int tmp = this->_trailLength;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(311)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(311)
			while((true)){
				HX_STACK_LINE(311)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(311)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				if ((tmp2)){
					HX_STACK_LINE(311)
					break;
				}
				HX_STACK_LINE(311)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(313)
				::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(313)
				::flixel::FlxSprite tmp5 = tmp4->members->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(313)
				Dynamic tmp6 = Image;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(313)
				tmp5->loadGraphic(tmp6,null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrail_obj,changeGraphic,(void))

Void FlxTrail_obj::changeValuesEnabled( bool Angle,hx::Null< bool >  __o_X,hx::Null< bool >  __o_Y,hx::Null< bool >  __o_Scale){
bool X = __o_X.Default(true);
bool Y = __o_Y.Default(true);
bool Scale = __o_Scale.Default(true);
	HX_STACK_FRAME("flixel.addons.effects.FlxTrail","changeValuesEnabled",0x328b834a,"flixel.addons.effects.FlxTrail.changeValuesEnabled","flixel/addons/effects/FlxTrail.hx",326,0x79f2ead4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Scale,"Scale")
{
		HX_STACK_LINE(327)
		this->rotationsEnabled = Angle;
		HX_STACK_LINE(328)
		this->xEnabled = X;
		HX_STACK_LINE(329)
		this->yEnabled = Y;
		HX_STACK_LINE(330)
		this->scalesEnabled = Scale;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTrail_obj,changeValuesEnabled,(void))


FlxTrail_obj::FlxTrail_obj()
{
}

void FlxTrail_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTrail);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(xEnabled,"xEnabled");
	HX_MARK_MEMBER_NAME(yEnabled,"yEnabled");
	HX_MARK_MEMBER_NAME(rotationsEnabled,"rotationsEnabled");
	HX_MARK_MEMBER_NAME(scalesEnabled,"scalesEnabled");
	HX_MARK_MEMBER_NAME(framesEnabled,"framesEnabled");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_trailLength,"_trailLength");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_transp,"_transp");
	HX_MARK_MEMBER_NAME(_difference,"_difference");
	HX_MARK_MEMBER_NAME(_recentPositions,"_recentPositions");
	HX_MARK_MEMBER_NAME(_recentAngles,"_recentAngles");
	HX_MARK_MEMBER_NAME(_recentScales,"_recentScales");
	HX_MARK_MEMBER_NAME(_recentFrames,"_recentFrames");
	HX_MARK_MEMBER_NAME(_recentFlipX,"_recentFlipX");
	HX_MARK_MEMBER_NAME(_recentFlipY,"_recentFlipY");
	HX_MARK_MEMBER_NAME(_recentAnimations,"_recentAnimations");
	HX_MARK_MEMBER_NAME(_spriteOrigin,"_spriteOrigin");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTrail_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(xEnabled,"xEnabled");
	HX_VISIT_MEMBER_NAME(yEnabled,"yEnabled");
	HX_VISIT_MEMBER_NAME(rotationsEnabled,"rotationsEnabled");
	HX_VISIT_MEMBER_NAME(scalesEnabled,"scalesEnabled");
	HX_VISIT_MEMBER_NAME(framesEnabled,"framesEnabled");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_trailLength,"_trailLength");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_transp,"_transp");
	HX_VISIT_MEMBER_NAME(_difference,"_difference");
	HX_VISIT_MEMBER_NAME(_recentPositions,"_recentPositions");
	HX_VISIT_MEMBER_NAME(_recentAngles,"_recentAngles");
	HX_VISIT_MEMBER_NAME(_recentScales,"_recentScales");
	HX_VISIT_MEMBER_NAME(_recentFrames,"_recentFrames");
	HX_VISIT_MEMBER_NAME(_recentFlipX,"_recentFlipX");
	HX_VISIT_MEMBER_NAME(_recentFlipY,"_recentFlipY");
	HX_VISIT_MEMBER_NAME(_recentAnimations,"_recentAnimations");
	HX_VISIT_MEMBER_NAME(_spriteOrigin,"_spriteOrigin");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTrail_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_transp") ) { return _transp; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xEnabled") ) { return xEnabled; }
		if (HX_FIELD_EQ(inName,"yEnabled") ) { return yEnabled; }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { return _graphic; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheValue") ) { return cacheValue_dyn(); }
		if (HX_FIELD_EQ(inName,"resetTrail") ) { return resetTrail_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_difference") ) { return _difference; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_trailLength") ) { return _trailLength; }
		if (HX_FIELD_EQ(inName,"_recentFlipX") ) { return _recentFlipX; }
		if (HX_FIELD_EQ(inName,"_recentFlipY") ) { return _recentFlipY; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalesEnabled") ) { return scalesEnabled; }
		if (HX_FIELD_EQ(inName,"framesEnabled") ) { return framesEnabled; }
		if (HX_FIELD_EQ(inName,"_recentAngles") ) { return _recentAngles; }
		if (HX_FIELD_EQ(inName,"_recentScales") ) { return _recentScales; }
		if (HX_FIELD_EQ(inName,"_recentFrames") ) { return _recentFrames; }
		if (HX_FIELD_EQ(inName,"_spriteOrigin") ) { return _spriteOrigin; }
		if (HX_FIELD_EQ(inName,"changeGraphic") ) { return changeGraphic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"increaseLength") ) { return increaseLength_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotationsEnabled") ) { return rotationsEnabled; }
		if (HX_FIELD_EQ(inName,"_recentPositions") ) { return _recentPositions; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_recentAnimations") ) { return _recentAnimations; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"changeValuesEnabled") ) { return changeValuesEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTrail_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_transp") ) { _transp=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xEnabled") ) { xEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yEnabled") ) { yEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_difference") ) { _difference=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_trailLength") ) { _trailLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentFlipX") ) { _recentFlipX=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentFlipY") ) { _recentFlipY=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalesEnabled") ) { scalesEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesEnabled") ) { framesEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentAngles") ) { _recentAngles=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentScales") ) { _recentScales=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentFrames") ) { _recentFrames=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spriteOrigin") ) { _spriteOrigin=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotationsEnabled") ) { rotationsEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recentPositions") ) { _recentPositions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_recentAnimations") ) { _recentAnimations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTrail_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("xEnabled","\xe9","\xaa","\x27","\x1b"));
	outFields->push(HX_HCSTRING("yEnabled","\x08","\x1d","\x5a","\x54"));
	outFields->push(HX_HCSTRING("rotationsEnabled","\x8c","\x1b","\x2e","\x98"));
	outFields->push(HX_HCSTRING("scalesEnabled","\xd8","\xd8","\x9a","\xec"));
	outFields->push(HX_HCSTRING("framesEnabled","\x7b","\x5d","\x56","\xfc"));
	outFields->push(HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"));
	outFields->push(HX_HCSTRING("_trailLength","\x4d","\x63","\xcf","\x2d"));
	outFields->push(HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad"));
	outFields->push(HX_HCSTRING("_transp","\xe7","\x9c","\xfc","\xb3"));
	outFields->push(HX_HCSTRING("_difference","\x1c","\x69","\x1b","\x19"));
	outFields->push(HX_HCSTRING("_recentPositions","\x10","\x4e","\xba","\xee"));
	outFields->push(HX_HCSTRING("_recentAngles","\x1a","\xdf","\x8c","\x9a"));
	outFields->push(HX_HCSTRING("_recentScales","\x83","\xb4","\x99","\x73"));
	outFields->push(HX_HCSTRING("_recentFrames","\x80","\x79","\xf9","\xe3"));
	outFields->push(HX_HCSTRING("_recentFlipX","\x71","\xf4","\x17","\xa0"));
	outFields->push(HX_HCSTRING("_recentFlipY","\x72","\xf4","\x17","\xa0"));
	outFields->push(HX_HCSTRING("_recentAnimations","\xc9","\xf3","\x02","\x00"));
	outFields->push(HX_HCSTRING("_spriteOrigin","\xaa","\x4e","\x52","\xc5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxTrail_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsInt,(int)offsetof(FlxTrail_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(FlxTrail_obj,xEnabled),HX_HCSTRING("xEnabled","\xe9","\xaa","\x27","\x1b")},
	{hx::fsBool,(int)offsetof(FlxTrail_obj,yEnabled),HX_HCSTRING("yEnabled","\x08","\x1d","\x5a","\x54")},
	{hx::fsBool,(int)offsetof(FlxTrail_obj,rotationsEnabled),HX_HCSTRING("rotationsEnabled","\x8c","\x1b","\x2e","\x98")},
	{hx::fsBool,(int)offsetof(FlxTrail_obj,scalesEnabled),HX_HCSTRING("scalesEnabled","\xd8","\xd8","\x9a","\xec")},
	{hx::fsBool,(int)offsetof(FlxTrail_obj,framesEnabled),HX_HCSTRING("framesEnabled","\x7b","\x5d","\x56","\xfc")},
	{hx::fsInt,(int)offsetof(FlxTrail_obj,_counter),HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57")},
	{hx::fsInt,(int)offsetof(FlxTrail_obj,_trailLength),HX_HCSTRING("_trailLength","\x4d","\x63","\xcf","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTrail_obj,_graphic),HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad")},
	{hx::fsFloat,(int)offsetof(FlxTrail_obj,_transp),HX_HCSTRING("_transp","\xe7","\x9c","\xfc","\xb3")},
	{hx::fsFloat,(int)offsetof(FlxTrail_obj,_difference),HX_HCSTRING("_difference","\x1c","\x69","\x1b","\x19")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTrail_obj,_recentPositions),HX_HCSTRING("_recentPositions","\x10","\x4e","\xba","\xee")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FlxTrail_obj,_recentAngles),HX_HCSTRING("_recentAngles","\x1a","\xdf","\x8c","\x9a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTrail_obj,_recentScales),HX_HCSTRING("_recentScales","\x83","\xb4","\x99","\x73")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTrail_obj,_recentFrames),HX_HCSTRING("_recentFrames","\x80","\x79","\xf9","\xe3")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(FlxTrail_obj,_recentFlipX),HX_HCSTRING("_recentFlipX","\x71","\xf4","\x17","\xa0")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(FlxTrail_obj,_recentFlipY),HX_HCSTRING("_recentFlipY","\x72","\xf4","\x17","\xa0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTrail_obj,_recentAnimations),HX_HCSTRING("_recentAnimations","\xc9","\xf3","\x02","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTrail_obj,_spriteOrigin),HX_HCSTRING("_spriteOrigin","\xaa","\x4e","\x52","\xc5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("xEnabled","\xe9","\xaa","\x27","\x1b"),
	HX_HCSTRING("yEnabled","\x08","\x1d","\x5a","\x54"),
	HX_HCSTRING("rotationsEnabled","\x8c","\x1b","\x2e","\x98"),
	HX_HCSTRING("scalesEnabled","\xd8","\xd8","\x9a","\xec"),
	HX_HCSTRING("framesEnabled","\x7b","\x5d","\x56","\xfc"),
	HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"),
	HX_HCSTRING("_trailLength","\x4d","\x63","\xcf","\x2d"),
	HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad"),
	HX_HCSTRING("_transp","\xe7","\x9c","\xfc","\xb3"),
	HX_HCSTRING("_difference","\x1c","\x69","\x1b","\x19"),
	HX_HCSTRING("_recentPositions","\x10","\x4e","\xba","\xee"),
	HX_HCSTRING("_recentAngles","\x1a","\xdf","\x8c","\x9a"),
	HX_HCSTRING("_recentScales","\x83","\xb4","\x99","\x73"),
	HX_HCSTRING("_recentFrames","\x80","\x79","\xf9","\xe3"),
	HX_HCSTRING("_recentFlipX","\x71","\xf4","\x17","\xa0"),
	HX_HCSTRING("_recentFlipY","\x72","\xf4","\x17","\xa0"),
	HX_HCSTRING("_recentAnimations","\xc9","\xf3","\x02","\x00"),
	HX_HCSTRING("_spriteOrigin","\xaa","\x4e","\x52","\xc5"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("cacheValue","\xcf","\xe5","\x70","\x74"),
	HX_HCSTRING("resetTrail","\x77","\xcb","\xbb","\xfe"),
	HX_HCSTRING("increaseLength","\x48","\x82","\xf7","\x59"),
	HX_HCSTRING("changeGraphic","\x18","\xff","\xdb","\xd4"),
	HX_HCSTRING("changeValuesEnabled","\x2f","\xe1","\xd5","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTrail_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTrail_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTrail_obj::__mClass;

void FlxTrail_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.effects.FlxTrail","\x09","\xf3","\xcd","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTrail_obj >;
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
} // end namespace addons
} // end namespace effects
