#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_objects_items_Item
#include <objects/items/Item.h>
#endif
namespace flixel{
namespace math{

Void FlxRandom_obj::__construct(Dynamic InitialSeed)
{
HX_STACK_FRAME("flixel.math.FlxRandom","new",0x97b4f113,"flixel.math.FlxRandom.new","flixel/math/FlxRandom.hx",10,0x4fa37e1d)
HX_STACK_THIS(this)
HX_STACK_ARG(InitialSeed,"InitialSeed")
{
	HX_STACK_LINE(394)
	this->internalSeed = ((Float)1);
	HX_STACK_LINE(157)
	this->_floatNormalRho = ((Float)0);
	struct _Function_1_1{
		inline static Float Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/math/FlxRandom.hx",156,0x4fa37e1d)
			{
				HX_STACK_LINE(156)
				Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(156)
				return (tmp * (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(156)
	this->_twoPI = _Function_1_1::Block();
	HX_STACK_LINE(155)
	this->_floatNormalRand2 = ((Float)0);
	HX_STACK_LINE(154)
	this->_floatNormalRand1 = ((Float)0);
	HX_STACK_LINE(153)
	this->_hasFloatNormalSpare = false;
	HX_STACK_LINE(17)
	this->initialSeed = (int)1;
	HX_STACK_LINE(32)
	bool tmp = (InitialSeed != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(34)
		int NewSeed = InitialSeed;		HX_STACK_VAR(NewSeed,"NewSeed");
		HX_STACK_LINE(34)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				bool tmp3 = (NewSeed < (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				if ((tmp3)){
					HX_STACK_LINE(34)
					tmp4 = (int)1;
				}
				else{
					HX_STACK_LINE(34)
					tmp4 = NewSeed;
				}
				HX_STACK_LINE(34)
				Float lowerBound = tmp4;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(34)
				bool tmp5 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				if ((tmp5)){
					HX_STACK_LINE(34)
					tmp2 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(34)
					tmp2 = lowerBound;
				}
			}
			HX_STACK_LINE(34)
			Float tmp3 = ((Float)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(34)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			int NewSeed1 = tmp4;		HX_STACK_VAR(NewSeed1,"NewSeed1");
			HX_STACK_LINE(34)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(34)
				if ((tmp6)){
					HX_STACK_LINE(34)
					tmp7 = (NewSeed1 < (int)1);
				}
				else{
					HX_STACK_LINE(34)
					tmp7 = false;
				}
				HX_STACK_LINE(34)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(34)
				if ((tmp7)){
					HX_STACK_LINE(34)
					tmp8 = (int)1;
				}
				else{
					HX_STACK_LINE(34)
					tmp8 = NewSeed1;
				}
				HX_STACK_LINE(34)
				Float lowerBound = tmp8;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(34)
				bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(34)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(34)
				if ((tmp9)){
					HX_STACK_LINE(34)
					tmp10 = (lowerBound > (int)2147483646);
				}
				else{
					HX_STACK_LINE(34)
					tmp10 = false;
				}
				HX_STACK_LINE(34)
				if ((tmp10)){
					HX_STACK_LINE(34)
					tmp5 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(34)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(34)
			Float tmp6 = ((Float)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			Float tmp8 = this->internalSeed = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			tmp1 = ::Std_obj::_int(tmp8);
		}
		HX_STACK_LINE(34)
		this->initialSeed = tmp1;
	}
	else{
		HX_STACK_LINE(38)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(38)
			Float tmp3 = (tmp2 * (int)2147483647);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			int Value = tmp4;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(38)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				bool tmp6 = (Value < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				if ((tmp6)){
					HX_STACK_LINE(38)
					tmp7 = (int)1;
				}
				else{
					HX_STACK_LINE(38)
					tmp7 = Value;
				}
				HX_STACK_LINE(38)
				Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(38)
				bool tmp8 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				if ((tmp8)){
					HX_STACK_LINE(38)
					tmp5 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(38)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(38)
			Float tmp6 = ((Float)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			tmp1 = ::Std_obj::_int(tmp6);
		}
		HX_STACK_LINE(38)
		int NewSeed = tmp1;		HX_STACK_VAR(NewSeed,"NewSeed");
		HX_STACK_LINE(38)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				bool tmp4 = (NewSeed < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(38)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(38)
				if ((tmp4)){
					HX_STACK_LINE(38)
					tmp5 = (int)1;
				}
				else{
					HX_STACK_LINE(38)
					tmp5 = NewSeed;
				}
				HX_STACK_LINE(38)
				Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(38)
				bool tmp6 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				if ((tmp6)){
					HX_STACK_LINE(38)
					tmp3 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(38)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(38)
			Float tmp4 = ((Float)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			int NewSeed1 = tmp5;		HX_STACK_VAR(NewSeed1,"NewSeed1");
			HX_STACK_LINE(38)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				if ((tmp7)){
					HX_STACK_LINE(38)
					tmp8 = (NewSeed1 < (int)1);
				}
				else{
					HX_STACK_LINE(38)
					tmp8 = false;
				}
				HX_STACK_LINE(38)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				if ((tmp8)){
					HX_STACK_LINE(38)
					tmp9 = (int)1;
				}
				else{
					HX_STACK_LINE(38)
					tmp9 = NewSeed1;
				}
				HX_STACK_LINE(38)
				Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(38)
				bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(38)
				if ((tmp10)){
					HX_STACK_LINE(38)
					tmp11 = (lowerBound > (int)2147483646);
				}
				else{
					HX_STACK_LINE(38)
					tmp11 = false;
				}
				HX_STACK_LINE(38)
				if ((tmp11)){
					HX_STACK_LINE(38)
					tmp6 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(38)
					tmp6 = lowerBound;
				}
			}
			HX_STACK_LINE(38)
			Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(38)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(38)
			Float tmp9 = this->internalSeed = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(38)
			tmp2 = ::Std_obj::_int(tmp9);
		}
		HX_STACK_LINE(38)
		this->initialSeed = tmp2;
	}
}
;
	return null();
}

//FlxRandom_obj::~FlxRandom_obj() { }

Dynamic FlxRandom_obj::__CreateEmpty() { return  new FlxRandom_obj; }
hx::ObjectPtr< FlxRandom_obj > FlxRandom_obj::__new(Dynamic InitialSeed)
{  hx::ObjectPtr< FlxRandom_obj > _result_ = new FlxRandom_obj();
	_result_->__construct(InitialSeed);
	return _result_;}

Dynamic FlxRandom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRandom_obj > _result_ = new FlxRandom_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::Dynamic > FlxRandom_obj::getObject_Array_Array_Int( Array< ::Dynamic > Objects,Array< Float > WeightsArray,hx::Null< int >  __o_StartIndex,Dynamic EndIndex){
int StartIndex = __o_StartIndex.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRandom","getObject_Array_Array_Int",0x6dcba5ac,"flixel.math.FlxRandom.getObject_Array_Array_Int","flixel/math/FlxRandom.hx",264,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(265)
		Array< ::Dynamic > selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(267)
		bool tmp = (Objects->length != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			bool tmp1 = (WeightsArray == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			if ((tmp1)){
				HX_STACK_LINE(271)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(271)
					int _g1 = Objects->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(271)
					while((true)){
						HX_STACK_LINE(271)
						bool tmp2 = (_g2 < _g1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(271)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(271)
						if ((tmp3)){
							HX_STACK_LINE(271)
							break;
						}
						HX_STACK_LINE(271)
						int tmp4 = (_g2)++;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(271)
						int i = tmp4;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(271)
						_g->push((int)1);
					}
				}
				HX_STACK_LINE(271)
				WeightsArray = _g;
			}
			HX_STACK_LINE(274)
			bool tmp2 = (EndIndex == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(274)
			if ((tmp2)){
				HX_STACK_LINE(276)
				int tmp3 = (Objects->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				EndIndex = tmp3;
			}
			HX_STACK_LINE(279)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				int tmp4 = (Objects->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				Dynamic Max = tmp4;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(279)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				if ((tmp5)){
					HX_STACK_LINE(279)
					tmp6 = (StartIndex < (int)0);
				}
				else{
					HX_STACK_LINE(279)
					tmp6 = false;
				}
				HX_STACK_LINE(279)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				if ((tmp6)){
					HX_STACK_LINE(279)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(279)
					tmp7 = StartIndex;
				}
				HX_STACK_LINE(279)
				Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(279)
				bool tmp8 = (Max != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				if ((tmp8)){
					HX_STACK_LINE(279)
					tmp9 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(279)
					tmp9 = false;
				}
				HX_STACK_LINE(279)
				if ((tmp9)){
					HX_STACK_LINE(279)
					tmp3 = Max;
				}
				else{
					HX_STACK_LINE(279)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(279)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			StartIndex = tmp4;
			HX_STACK_LINE(280)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				Float Value = EndIndex;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(280)
				int tmp6 = (Objects->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				Dynamic Max = tmp6;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(280)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				if ((tmp7)){
					HX_STACK_LINE(280)
					tmp8 = (Value < (int)0);
				}
				else{
					HX_STACK_LINE(280)
					tmp8 = false;
				}
				HX_STACK_LINE(280)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(280)
				if ((tmp8)){
					HX_STACK_LINE(280)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(280)
					tmp9 = Value;
				}
				HX_STACK_LINE(280)
				Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(280)
				bool tmp10 = (Max != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(280)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(280)
				if ((tmp10)){
					HX_STACK_LINE(280)
					tmp11 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(280)
					tmp11 = false;
				}
				HX_STACK_LINE(280)
				if ((tmp11)){
					HX_STACK_LINE(280)
					tmp5 = Max;
				}
				else{
					HX_STACK_LINE(280)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(280)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			EndIndex = tmp6;
			HX_STACK_LINE(284)
			bool tmp7 = (EndIndex < StartIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			if ((tmp7)){
				HX_STACK_LINE(286)
				int tmp8 = (StartIndex + EndIndex);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				StartIndex = tmp8;
				HX_STACK_LINE(287)
				int tmp9 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				EndIndex = tmp9;
				HX_STACK_LINE(288)
				int tmp10 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				StartIndex = tmp10;
			}
			HX_STACK_LINE(291)
			Dynamic tmp8 = EndIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			int tmp9 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			if ((tmp10)){
				HX_STACK_LINE(293)
				int tmp11 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				EndIndex = tmp11;
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g2 = StartIndex;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(296)
					int tmp11 = (EndIndex + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					int _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp12 = (_g2 < _g1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(296)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(296)
						if ((tmp13)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(296)
						int tmp14 = (_g2)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(296)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(296)
						Float tmp15 = WeightsArray->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(296)
						_g->push(tmp15);
					}
				}
				HX_STACK_LINE(296)
				::flixel::math::FlxRandom_obj::_arrayFloatHelper = _g;
			}
			HX_STACK_LINE(297)
			int tmp11 = this->weightedPick(::flixel::math::FlxRandom_obj::_arrayFloatHelper);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			selected = Objects->__get(tmp11).StaticCast< Array< ::Dynamic > >();
		}
		HX_STACK_LINE(300)
		return selected;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,getObject_Array_Array_Int,return )

Array< int > FlxRandom_obj::getObject_Array_Int( Array< ::Dynamic > Objects,Array< Float > WeightsArray,hx::Null< int >  __o_StartIndex,Dynamic EndIndex){
int StartIndex = __o_StartIndex.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRandom","getObject_Array_Int",0xe20f7672,"flixel.math.FlxRandom.getObject_Array_Int","flixel/math/FlxRandom.hx",264,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(265)
		Array< int > selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(267)
		bool tmp = (Objects->length != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			bool tmp1 = (WeightsArray == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			if ((tmp1)){
				HX_STACK_LINE(271)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(271)
					int _g1 = Objects->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(271)
					while((true)){
						HX_STACK_LINE(271)
						bool tmp2 = (_g2 < _g1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(271)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(271)
						if ((tmp3)){
							HX_STACK_LINE(271)
							break;
						}
						HX_STACK_LINE(271)
						int tmp4 = (_g2)++;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(271)
						int i = tmp4;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(271)
						_g->push((int)1);
					}
				}
				HX_STACK_LINE(271)
				WeightsArray = _g;
			}
			HX_STACK_LINE(274)
			bool tmp2 = (EndIndex == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(274)
			if ((tmp2)){
				HX_STACK_LINE(276)
				int tmp3 = (Objects->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				EndIndex = tmp3;
			}
			HX_STACK_LINE(279)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				int tmp4 = (Objects->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				Dynamic Max = tmp4;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(279)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				if ((tmp5)){
					HX_STACK_LINE(279)
					tmp6 = (StartIndex < (int)0);
				}
				else{
					HX_STACK_LINE(279)
					tmp6 = false;
				}
				HX_STACK_LINE(279)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				if ((tmp6)){
					HX_STACK_LINE(279)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(279)
					tmp7 = StartIndex;
				}
				HX_STACK_LINE(279)
				Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(279)
				bool tmp8 = (Max != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				if ((tmp8)){
					HX_STACK_LINE(279)
					tmp9 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(279)
					tmp9 = false;
				}
				HX_STACK_LINE(279)
				if ((tmp9)){
					HX_STACK_LINE(279)
					tmp3 = Max;
				}
				else{
					HX_STACK_LINE(279)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(279)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			StartIndex = tmp4;
			HX_STACK_LINE(280)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				Float Value = EndIndex;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(280)
				int tmp6 = (Objects->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				Dynamic Max = tmp6;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(280)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				if ((tmp7)){
					HX_STACK_LINE(280)
					tmp8 = (Value < (int)0);
				}
				else{
					HX_STACK_LINE(280)
					tmp8 = false;
				}
				HX_STACK_LINE(280)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(280)
				if ((tmp8)){
					HX_STACK_LINE(280)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(280)
					tmp9 = Value;
				}
				HX_STACK_LINE(280)
				Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(280)
				bool tmp10 = (Max != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(280)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(280)
				if ((tmp10)){
					HX_STACK_LINE(280)
					tmp11 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(280)
					tmp11 = false;
				}
				HX_STACK_LINE(280)
				if ((tmp11)){
					HX_STACK_LINE(280)
					tmp5 = Max;
				}
				else{
					HX_STACK_LINE(280)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(280)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			EndIndex = tmp6;
			HX_STACK_LINE(284)
			bool tmp7 = (EndIndex < StartIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			if ((tmp7)){
				HX_STACK_LINE(286)
				int tmp8 = (StartIndex + EndIndex);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				StartIndex = tmp8;
				HX_STACK_LINE(287)
				int tmp9 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				EndIndex = tmp9;
				HX_STACK_LINE(288)
				int tmp10 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				StartIndex = tmp10;
			}
			HX_STACK_LINE(291)
			Dynamic tmp8 = EndIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			int tmp9 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			if ((tmp10)){
				HX_STACK_LINE(293)
				int tmp11 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				EndIndex = tmp11;
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g2 = StartIndex;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(296)
					int tmp11 = (EndIndex + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					int _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp12 = (_g2 < _g1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(296)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(296)
						if ((tmp13)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(296)
						int tmp14 = (_g2)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(296)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(296)
						Float tmp15 = WeightsArray->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(296)
						_g->push(tmp15);
					}
				}
				HX_STACK_LINE(296)
				::flixel::math::FlxRandom_obj::_arrayFloatHelper = _g;
			}
			HX_STACK_LINE(297)
			int tmp11 = this->weightedPick(::flixel::math::FlxRandom_obj::_arrayFloatHelper);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			selected = Objects->__get(tmp11).StaticCast< Array< int > >();
		}
		HX_STACK_LINE(300)
		return selected;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,getObject_Array_Int,return )

::objects::items::Item FlxRandom_obj::getObject_objects_items_Item( Array< ::Dynamic > Objects,Array< Float > WeightsArray,hx::Null< int >  __o_StartIndex,Dynamic EndIndex){
int StartIndex = __o_StartIndex.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRandom","getObject_objects_items_Item",0xc2549214,"flixel.math.FlxRandom.getObject_objects_items_Item","flixel/math/FlxRandom.hx",264,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(265)
		::objects::items::Item selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(267)
		bool tmp = (Objects->length != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			bool tmp1 = (WeightsArray == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			if ((tmp1)){
				HX_STACK_LINE(271)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(271)
					int _g1 = Objects->length;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(271)
					while((true)){
						HX_STACK_LINE(271)
						bool tmp2 = (_g2 < _g1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(271)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(271)
						if ((tmp3)){
							HX_STACK_LINE(271)
							break;
						}
						HX_STACK_LINE(271)
						int tmp4 = (_g2)++;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(271)
						int i = tmp4;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(271)
						_g->push((int)1);
					}
				}
				HX_STACK_LINE(271)
				WeightsArray = _g;
			}
			HX_STACK_LINE(274)
			bool tmp2 = (EndIndex == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(274)
			if ((tmp2)){
				HX_STACK_LINE(276)
				int tmp3 = (Objects->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				EndIndex = tmp3;
			}
			HX_STACK_LINE(279)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				int tmp4 = (Objects->length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				Dynamic Max = tmp4;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(279)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				if ((tmp5)){
					HX_STACK_LINE(279)
					tmp6 = (StartIndex < (int)0);
				}
				else{
					HX_STACK_LINE(279)
					tmp6 = false;
				}
				HX_STACK_LINE(279)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				if ((tmp6)){
					HX_STACK_LINE(279)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(279)
					tmp7 = StartIndex;
				}
				HX_STACK_LINE(279)
				Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(279)
				bool tmp8 = (Max != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				if ((tmp8)){
					HX_STACK_LINE(279)
					tmp9 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(279)
					tmp9 = false;
				}
				HX_STACK_LINE(279)
				if ((tmp9)){
					HX_STACK_LINE(279)
					tmp3 = Max;
				}
				else{
					HX_STACK_LINE(279)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(279)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			StartIndex = tmp4;
			HX_STACK_LINE(280)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				Float Value = EndIndex;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(280)
				int tmp6 = (Objects->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				Dynamic Max = tmp6;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(280)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				if ((tmp7)){
					HX_STACK_LINE(280)
					tmp8 = (Value < (int)0);
				}
				else{
					HX_STACK_LINE(280)
					tmp8 = false;
				}
				HX_STACK_LINE(280)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(280)
				if ((tmp8)){
					HX_STACK_LINE(280)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(280)
					tmp9 = Value;
				}
				HX_STACK_LINE(280)
				Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(280)
				bool tmp10 = (Max != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(280)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(280)
				if ((tmp10)){
					HX_STACK_LINE(280)
					tmp11 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(280)
					tmp11 = false;
				}
				HX_STACK_LINE(280)
				if ((tmp11)){
					HX_STACK_LINE(280)
					tmp5 = Max;
				}
				else{
					HX_STACK_LINE(280)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(280)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			EndIndex = tmp6;
			HX_STACK_LINE(284)
			bool tmp7 = (EndIndex < StartIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			if ((tmp7)){
				HX_STACK_LINE(286)
				int tmp8 = (StartIndex + EndIndex);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				StartIndex = tmp8;
				HX_STACK_LINE(287)
				int tmp9 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				EndIndex = tmp9;
				HX_STACK_LINE(288)
				int tmp10 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				StartIndex = tmp10;
			}
			HX_STACK_LINE(291)
			Dynamic tmp8 = EndIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			int tmp9 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			if ((tmp10)){
				HX_STACK_LINE(293)
				int tmp11 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				EndIndex = tmp11;
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g2 = StartIndex;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(296)
					int tmp11 = (EndIndex + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					int _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp12 = (_g2 < _g1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(296)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(296)
						if ((tmp13)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(296)
						int tmp14 = (_g2)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(296)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(296)
						Float tmp15 = WeightsArray->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(296)
						_g->push(tmp15);
					}
				}
				HX_STACK_LINE(296)
				::flixel::math::FlxRandom_obj::_arrayFloatHelper = _g;
			}
			HX_STACK_LINE(297)
			int tmp11 = this->weightedPick(::flixel::math::FlxRandom_obj::_arrayFloatHelper);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			::objects::items::Item tmp12 = Objects->__get(tmp11).StaticCast< ::objects::items::Item >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			selected = tmp12;
		}
		HX_STACK_LINE(300)
		::objects::items::Item tmp1 = selected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,getObject_objects_items_Item,return )

Dynamic FlxRandom_obj::getObject_flixel_group_FlxTypedGroup_T( cpp::ArrayBase Objects,Array< Float > WeightsArray,hx::Null< int >  __o_StartIndex,Dynamic EndIndex){
int StartIndex = __o_StartIndex.Default(0);
	HX_STACK_FRAME("flixel.math.FlxRandom","getObject_flixel_group_FlxTypedGroup_T",0x29a53b90,"flixel.math.FlxRandom.getObject_flixel_group_FlxTypedGroup_T","flixel/math/FlxRandom.hx",264,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Objects,"Objects")
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
{
		HX_STACK_LINE(265)
		Dynamic selected = null();		HX_STACK_VAR(selected,"selected");
		HX_STACK_LINE(267)
		bool tmp = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(269)
			bool tmp1 = (WeightsArray == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(269)
			if ((tmp1)){
				HX_STACK_LINE(271)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(271)
					int _g1 = Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(271)
					while((true)){
						HX_STACK_LINE(271)
						bool tmp2 = (_g2 < _g1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(271)
						bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(271)
						if ((tmp3)){
							HX_STACK_LINE(271)
							break;
						}
						HX_STACK_LINE(271)
						int tmp4 = (_g2)++;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(271)
						int i = tmp4;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(271)
						_g->push((int)1);
					}
				}
				HX_STACK_LINE(271)
				WeightsArray = _g;
			}
			HX_STACK_LINE(274)
			bool tmp2 = (EndIndex == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(274)
			if ((tmp2)){
				HX_STACK_LINE(276)
				int tmp3 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(276)
				EndIndex = tmp3;
			}
			HX_STACK_LINE(279)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				int tmp4 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				Dynamic Max = tmp4;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(279)
				bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(279)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(279)
				if ((tmp5)){
					HX_STACK_LINE(279)
					tmp6 = (StartIndex < (int)0);
				}
				else{
					HX_STACK_LINE(279)
					tmp6 = false;
				}
				HX_STACK_LINE(279)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(279)
				if ((tmp6)){
					HX_STACK_LINE(279)
					tmp7 = (int)0;
				}
				else{
					HX_STACK_LINE(279)
					tmp7 = StartIndex;
				}
				HX_STACK_LINE(279)
				Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(279)
				bool tmp8 = (Max != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(279)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(279)
				if ((tmp8)){
					HX_STACK_LINE(279)
					tmp9 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(279)
					tmp9 = false;
				}
				HX_STACK_LINE(279)
				if ((tmp9)){
					HX_STACK_LINE(279)
					tmp3 = Max;
				}
				else{
					HX_STACK_LINE(279)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(279)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			StartIndex = tmp4;
			HX_STACK_LINE(280)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			{
				HX_STACK_LINE(280)
				Float Value = EndIndex;		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(280)
				int tmp6 = (Objects->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				Dynamic Max = tmp6;		HX_STACK_VAR(Max,"Max");
				HX_STACK_LINE(280)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				if ((tmp7)){
					HX_STACK_LINE(280)
					tmp8 = (Value < (int)0);
				}
				else{
					HX_STACK_LINE(280)
					tmp8 = false;
				}
				HX_STACK_LINE(280)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(280)
				if ((tmp8)){
					HX_STACK_LINE(280)
					tmp9 = (int)0;
				}
				else{
					HX_STACK_LINE(280)
					tmp9 = Value;
				}
				HX_STACK_LINE(280)
				Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(280)
				bool tmp10 = (Max != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(280)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(280)
				if ((tmp10)){
					HX_STACK_LINE(280)
					tmp11 = (lowerBound > Max);
				}
				else{
					HX_STACK_LINE(280)
					tmp11 = false;
				}
				HX_STACK_LINE(280)
				if ((tmp11)){
					HX_STACK_LINE(280)
					tmp5 = Max;
				}
				else{
					HX_STACK_LINE(280)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(280)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(280)
			EndIndex = tmp6;
			HX_STACK_LINE(284)
			bool tmp7 = (EndIndex < StartIndex);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(284)
			if ((tmp7)){
				HX_STACK_LINE(286)
				int tmp8 = (StartIndex + EndIndex);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(286)
				StartIndex = tmp8;
				HX_STACK_LINE(287)
				int tmp9 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(287)
				EndIndex = tmp9;
				HX_STACK_LINE(288)
				int tmp10 = (StartIndex - EndIndex);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(288)
				StartIndex = tmp10;
			}
			HX_STACK_LINE(291)
			Dynamic tmp8 = EndIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(291)
			int tmp9 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(291)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(291)
			if ((tmp10)){
				HX_STACK_LINE(293)
				int tmp11 = (WeightsArray->length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				EndIndex = tmp11;
			}
			HX_STACK_LINE(296)
			{
				HX_STACK_LINE(296)
				Array< Float > _g = Array_obj< Float >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(296)
				{
					HX_STACK_LINE(296)
					int _g2 = StartIndex;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(296)
					int tmp11 = (EndIndex + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(296)
					int _g1 = tmp11;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(296)
					while((true)){
						HX_STACK_LINE(296)
						bool tmp12 = (_g2 < _g1);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(296)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(296)
						if ((tmp13)){
							HX_STACK_LINE(296)
							break;
						}
						HX_STACK_LINE(296)
						int tmp14 = (_g2)++;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(296)
						int i = tmp14;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(296)
						Float tmp15 = WeightsArray->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(296)
						_g->push(tmp15);
					}
				}
				HX_STACK_LINE(296)
				::flixel::math::FlxRandom_obj::_arrayFloatHelper = _g;
			}
			HX_STACK_LINE(297)
			int tmp11 = this->weightedPick(::flixel::math::FlxRandom_obj::_arrayFloatHelper);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			Dynamic tmp12 = Objects->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			selected = tmp12;
		}
		HX_STACK_LINE(300)
		Dynamic tmp1 = selected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		return tmp1;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,getObject_flixel_group_FlxTypedGroup_T,return )

int FlxRandom_obj::resetInitialSeed( ){
	HX_STACK_FRAME("flixel.math.FlxRandom","resetInitialSeed",0xb48811f3,"flixel.math.FlxRandom.resetInitialSeed","flixel/math/FlxRandom.hx",50,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			Float tmp3 = (tmp2 * (int)2147483647);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int Value = tmp4;		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(51)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				bool tmp6 = (Value < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				if ((tmp6)){
					HX_STACK_LINE(51)
					tmp7 = (int)1;
				}
				else{
					HX_STACK_LINE(51)
					tmp7 = Value;
				}
				HX_STACK_LINE(51)
				Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(51)
				bool tmp8 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				if ((tmp8)){
					HX_STACK_LINE(51)
					tmp5 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(51)
					tmp5 = lowerBound;
				}
			}
			HX_STACK_LINE(51)
			Float tmp6 = ((Float)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp1 = ::Std_obj::_int(tmp6);
		}
		HX_STACK_LINE(51)
		int NewSeed = tmp1;		HX_STACK_VAR(NewSeed,"NewSeed");
		HX_STACK_LINE(51)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				bool tmp4 = (NewSeed < (int)1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				if ((tmp4)){
					HX_STACK_LINE(51)
					tmp5 = (int)1;
				}
				else{
					HX_STACK_LINE(51)
					tmp5 = NewSeed;
				}
				HX_STACK_LINE(51)
				Float lowerBound = tmp5;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(51)
				bool tmp6 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				if ((tmp6)){
					HX_STACK_LINE(51)
					tmp3 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(51)
					tmp3 = lowerBound;
				}
			}
			HX_STACK_LINE(51)
			Float tmp4 = ((Float)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int NewSeed1 = tmp5;		HX_STACK_VAR(NewSeed1,"NewSeed1");
			HX_STACK_LINE(51)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				if ((tmp7)){
					HX_STACK_LINE(51)
					tmp8 = (NewSeed1 < (int)1);
				}
				else{
					HX_STACK_LINE(51)
					tmp8 = false;
				}
				HX_STACK_LINE(51)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				if ((tmp8)){
					HX_STACK_LINE(51)
					tmp9 = (int)1;
				}
				else{
					HX_STACK_LINE(51)
					tmp9 = NewSeed1;
				}
				HX_STACK_LINE(51)
				Float lowerBound = tmp9;		HX_STACK_VAR(lowerBound,"lowerBound");
				HX_STACK_LINE(51)
				bool tmp10 = true;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(51)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(51)
				if ((tmp10)){
					HX_STACK_LINE(51)
					tmp11 = (lowerBound > (int)2147483646);
				}
				else{
					HX_STACK_LINE(51)
					tmp11 = false;
				}
				HX_STACK_LINE(51)
				if ((tmp11)){
					HX_STACK_LINE(51)
					tmp6 = (int)2147483646;
				}
				else{
					HX_STACK_LINE(51)
					tmp6 = lowerBound;
				}
			}
			HX_STACK_LINE(51)
			Float tmp7 = ((Float)(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(51)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(51)
			Float tmp9 = this->internalSeed = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			tmp2 = ::Std_obj::_int(tmp9);
		}
		HX_STACK_LINE(51)
		tmp = this->initialSeed = tmp2;
	}
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,resetInitialSeed,return )

int FlxRandom_obj::_int( hx::Null< int >  __o_Min,hx::Null< int >  __o_Max,Array< int > Excludes){
int Min = __o_Min.Default(0);
int Max = __o_Max.Default(2147483647);
	HX_STACK_FRAME("flixel.math.FlxRandom","int",0x97b12da2,"flixel.math.FlxRandom.int","flixel/math/FlxRandom.hx",64,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(65)
		bool tmp = (Min == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(65)
			tmp2 = (Max == (int)2147483647);
		}
		else{
			HX_STACK_LINE(65)
			tmp2 = false;
		}
		HX_STACK_LINE(65)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(65)
			tmp3 = (Excludes == null());
		}
		else{
			HX_STACK_LINE(65)
			tmp3 = false;
		}
		HX_STACK_LINE(65)
		if ((tmp3)){
			HX_STACK_LINE(67)
			Float tmp4 = this->internalSeed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			Float tmp5 = (tmp4 * ((Float)48271.0));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			Float tmp6 = hx::Mod(tmp5,(int)2147483647);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			Float tmp7 = this->internalSeed = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			return tmp8;
		}
		else{
			HX_STACK_LINE(69)
			bool tmp4 = (Min == Max);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			if ((tmp4)){
				HX_STACK_LINE(71)
				int tmp5 = Min;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				return tmp5;
			}
			else{
				HX_STACK_LINE(77)
				bool tmp5 = (Min > Max);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				if ((tmp5)){
					HX_STACK_LINE(79)
					int tmp6 = (Min + Max);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					Min = tmp6;
					HX_STACK_LINE(80)
					int tmp7 = (Min - Max);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					Max = tmp7;
					HX_STACK_LINE(81)
					int tmp8 = (Min - Max);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					Min = tmp8;
				}
				HX_STACK_LINE(84)
				bool tmp6 = (Excludes == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				if ((tmp6)){
					HX_STACK_LINE(86)
					int tmp7 = Min;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(86)
					Float tmp8 = this->internalSeed;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(86)
					Float tmp9 = (tmp8 * ((Float)48271.0));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(86)
					Float tmp10 = hx::Mod(tmp9,(int)2147483647);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					Float tmp11 = this->internalSeed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(86)
					Float tmp12 = (Float(tmp11) / Float((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(86)
					int tmp13 = (Max - Min);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(86)
					int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(86)
					Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(86)
					Float tmp16 = (tmp7 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(86)
					int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(86)
					return tmp17;
				}
				else{
					HX_STACK_LINE(90)
					int result = (int)0;		HX_STACK_VAR(result,"result");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(94)
						int tmp7 = Min;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(94)
						Float tmp8 = this->internalSeed;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(94)
						Float tmp9 = (tmp8 * ((Float)48271.0));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(94)
						Float tmp10 = hx::Mod(tmp9,(int)2147483647);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(94)
						Float tmp11 = this->internalSeed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(94)
						Float tmp12 = (Float(tmp11) / Float((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(94)
						int tmp13 = (Max - Min);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(94)
						int tmp14 = (tmp13 + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(94)
						Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(94)
						Float tmp16 = (tmp7 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(94)
						int tmp17 = ::Math_obj::floor(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(94)
						result = tmp17;
						HX_STACK_LINE(96)
						int tmp18 = result;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(96)
						int tmp19 = Excludes->indexOf(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(96)
						bool tmp20 = (tmp19 >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(96)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(92)
						if ((tmp21)){
							HX_STACK_LINE(92)
							break;
						}
					}
					HX_STACK_LINE(98)
					int tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(98)
					return tmp7;
				}
			}
		}
		HX_STACK_LINE(65)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,_int,return )

Float FlxRandom_obj::_float( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,Array< Float > Excludes){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(1);
	HX_STACK_FRAME("flixel.math.FlxRandom","float",0x0d07b90f,"flixel.math.FlxRandom.float","flixel/math/FlxRandom.hx",113,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Excludes,"Excludes")
{
		HX_STACK_LINE(114)
		Float result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(116)
		bool tmp = (Min == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(116)
			tmp2 = (Max == (int)1);
		}
		else{
			HX_STACK_LINE(116)
			tmp2 = false;
		}
		HX_STACK_LINE(116)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(116)
			tmp3 = (Excludes == null());
		}
		else{
			HX_STACK_LINE(116)
			tmp3 = false;
		}
		HX_STACK_LINE(116)
		if ((tmp3)){
			HX_STACK_LINE(118)
			Float tmp4 = this->internalSeed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			Float tmp5 = (tmp4 * ((Float)48271.0));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			Float tmp6 = hx::Mod(tmp5,(int)2147483647);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			Float tmp7 = this->internalSeed = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			Float tmp8 = (Float(tmp7) / Float((int)2147483647));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			return tmp8;
		}
		else{
			HX_STACK_LINE(120)
			bool tmp4 = (Min == Max);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			if ((tmp4)){
				HX_STACK_LINE(122)
				result = Min;
			}
			else{
				HX_STACK_LINE(127)
				bool tmp5 = (Min > Max);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(127)
				if ((tmp5)){
					HX_STACK_LINE(129)
					Float tmp6 = (Min + Max);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(129)
					Min = tmp6;
					HX_STACK_LINE(130)
					Float tmp7 = (Min - Max);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(130)
					Max = tmp7;
					HX_STACK_LINE(131)
					Float tmp8 = (Min - Max);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(131)
					Min = tmp8;
				}
				HX_STACK_LINE(134)
				bool tmp6 = (Excludes == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				if ((tmp6)){
					HX_STACK_LINE(136)
					Float tmp7 = Min;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(136)
					Float tmp8 = this->internalSeed;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(136)
					Float tmp9 = (tmp8 * ((Float)48271.0));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(136)
					Float tmp10 = hx::Mod(tmp9,(int)2147483647);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(136)
					Float tmp11 = this->internalSeed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(136)
					Float tmp12 = (Float(tmp11) / Float((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(136)
					Float tmp13 = (Max - Min);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(136)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(136)
					Float tmp15 = (tmp7 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(136)
					result = tmp15;
				}
				else{
					HX_STACK_LINE(140)
					while((true)){
						HX_STACK_LINE(142)
						Float tmp7 = Min;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(142)
						Float tmp8 = this->internalSeed;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(142)
						Float tmp9 = (tmp8 * ((Float)48271.0));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(142)
						Float tmp10 = hx::Mod(tmp9,(int)2147483647);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						Float tmp11 = this->internalSeed = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(142)
						Float tmp12 = (Float(tmp11) / Float((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(142)
						Float tmp13 = (Max - Min);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(142)
						Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(142)
						Float tmp15 = (tmp7 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(142)
						result = tmp15;
						HX_STACK_LINE(144)
						Float tmp16 = result;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(144)
						int tmp17 = Excludes->indexOf(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(144)
						bool tmp18 = (tmp17 >= (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(144)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(140)
						if ((tmp19)){
							HX_STACK_LINE(140)
							break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(148)
		Float tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxRandom_obj,_float,return )

Float FlxRandom_obj::floatNormal( hx::Null< Float >  __o_Mean,hx::Null< Float >  __o_StdDev){
Float Mean = __o_Mean.Default(0);
Float StdDev = __o_StdDev.Default(1);
	HX_STACK_FRAME("flixel.math.FlxRandom","floatNormal",0xe3d85496,"flixel.math.FlxRandom.floatNormal","flixel/math/FlxRandom.hx",170,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Mean,"Mean")
	HX_STACK_ARG(StdDev,"StdDev")
{
		HX_STACK_LINE(171)
		bool tmp = this->_hasFloatNormalSpare;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		if ((tmp)){
			HX_STACK_LINE(173)
			this->_hasFloatNormalSpare = false;
			HX_STACK_LINE(174)
			Float tmp1 = StdDev;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(174)
			Float tmp2 = this->_floatNormalRho;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(174)
			Float scale = tmp3;		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(175)
			Float tmp4 = Mean;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			Float tmp5 = scale;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			Float tmp6 = this->_floatNormalRand2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			return tmp8;
		}
		HX_STACK_LINE(178)
		this->_hasFloatNormalSpare = true;
		HX_STACK_LINE(180)
		Float tmp1 = this->_twoPI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		Float tmp2 = this->internalSeed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		Float tmp3 = (tmp2 * ((Float)48271.0));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		Float tmp4 = hx::Mod(tmp3,(int)2147483647);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		Float tmp5 = this->internalSeed = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		Float tmp6 = (Float(tmp5) / Float((int)2147483647));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		Float tmp7 = (tmp1 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		Float theta = tmp7;		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(181)
		int tmp8 = (int)-2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(181)
		Float tmp9 = this->internalSeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(181)
		Float tmp10 = (tmp9 * ((Float)48271.0));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(181)
		Float tmp11 = hx::Mod(tmp10,(int)2147483647);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(181)
		Float tmp12 = this->internalSeed = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(181)
		Float tmp13 = (Float(tmp12) / Float((int)2147483647));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(181)
		Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(181)
		Float tmp15 = ::Math_obj::log(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(181)
		Float tmp16 = (tmp8 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(181)
		Float tmp17 = ::Math_obj::sqrt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(181)
		this->_floatNormalRho = tmp17;
		HX_STACK_LINE(182)
		Float tmp18 = StdDev;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(182)
		Float tmp19 = this->_floatNormalRho;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(182)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(182)
		Float scale = tmp20;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(184)
		Float tmp21 = theta;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(184)
		Float tmp22 = ::Math_obj::cos(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(184)
		this->_floatNormalRand1 = tmp22;
		HX_STACK_LINE(185)
		Float tmp23 = theta;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(185)
		Float tmp24 = ::Math_obj::sin(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(185)
		this->_floatNormalRand2 = tmp24;
		HX_STACK_LINE(187)
		Float tmp25 = Mean;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(187)
		Float tmp26 = scale;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(187)
		Float tmp27 = this->_floatNormalRand1;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(187)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(187)
		Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(187)
		return tmp29;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxRandom_obj,floatNormal,return )

bool FlxRandom_obj::_bool( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.math.FlxRandom","bool",0x1eb70017,"flixel.math.FlxRandom.bool","flixel/math/FlxRandom.hx",200,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(201)
		Float tmp = this->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		Float tmp1 = Chance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,_bool,return )

int FlxRandom_obj::sign( hx::Null< Float >  __o_Chance){
Float Chance = __o_Chance.Default(50);
	HX_STACK_FRAME("flixel.math.FlxRandom","sign",0x29ef0c2a,"flixel.math.FlxRandom.sign","flixel/math/FlxRandom.hx",212,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Chance,"Chance")
{
		HX_STACK_LINE(213)
		Float tmp = this->_float((int)0,(int)100,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		Float tmp1 = Chance;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		if ((tmp2)){
			HX_STACK_LINE(213)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(213)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(213)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,sign,return )

int FlxRandom_obj::weightedPick( Array< Float > WeightsArray){
	HX_STACK_FRAME("flixel.math.FlxRandom","weightedPick",0x1c7c1545,"flixel.math.FlxRandom.weightedPick","flixel/math/FlxRandom.hx",226,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WeightsArray,"WeightsArray")
	HX_STACK_LINE(227)
	Float totalWeight = (int)0;		HX_STACK_VAR(totalWeight,"totalWeight");
	HX_STACK_LINE(228)
	int pick = (int)0;		HX_STACK_VAR(pick,"pick");
	HX_STACK_LINE(230)
	{
		HX_STACK_LINE(230)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
		while((true)){
			HX_STACK_LINE(230)
			bool tmp = (_g < WeightsArray->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(230)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			if ((tmp1)){
				HX_STACK_LINE(230)
				break;
			}
			HX_STACK_LINE(230)
			Float tmp2 = WeightsArray->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			Float i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(230)
			++(_g);
			HX_STACK_LINE(232)
			hx::AddEq(totalWeight,i);
		}
	}
	HX_STACK_LINE(235)
	Float tmp = totalWeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	Float tmp1 = this->_float((int)0,tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	totalWeight = tmp1;
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(237)
		int _g = WeightsArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			if ((tmp3)){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(237)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(239)
			Float tmp5 = totalWeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(239)
			Float tmp6 = WeightsArray->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			if ((tmp7)){
				HX_STACK_LINE(241)
				pick = i;
				HX_STACK_LINE(242)
				break;
			}
			HX_STACK_LINE(245)
			Float tmp8 = WeightsArray->__get(i);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			hx::SubEq(totalWeight,tmp8);
		}
	}
	HX_STACK_LINE(248)
	int tmp2 = pick;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(248)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,weightedPick,return )

int FlxRandom_obj::color( Dynamic Min,Dynamic Max,Dynamic Alpha,hx::Null< bool >  __o_GreyScale){
bool GreyScale = __o_GreyScale.Default(false);
	HX_STACK_FRAME("flixel.math.FlxRandom","color",0x54cd64d6,"flixel.math.FlxRandom.color","flixel/math/FlxRandom.hx",341,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(GreyScale,"GreyScale")
{
		HX_STACK_LINE(342)
		int red;		HX_STACK_VAR(red,"red");
		HX_STACK_LINE(343)
		int green;		HX_STACK_VAR(green,"green");
		HX_STACK_LINE(344)
		int blue;		HX_STACK_VAR(blue,"blue");
		HX_STACK_LINE(345)
		int alpha;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(347)
		bool tmp = (Min == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(347)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(347)
		if ((tmp)){
			HX_STACK_LINE(347)
			tmp1 = (Max == null());
		}
		else{
			HX_STACK_LINE(347)
			tmp1 = false;
		}
		HX_STACK_LINE(347)
		if ((tmp1)){
			HX_STACK_LINE(349)
			int tmp2 = this->_int((int)0,(int)255,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(349)
			red = tmp2;
			HX_STACK_LINE(350)
			int tmp3 = this->_int((int)0,(int)255,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(350)
			green = tmp3;
			HX_STACK_LINE(351)
			int tmp4 = this->_int((int)0,(int)255,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			blue = tmp4;
			HX_STACK_LINE(352)
			bool tmp5 = (Alpha == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(352)
			int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			if ((tmp5)){
				HX_STACK_LINE(352)
				tmp6 = this->_int((int)0,(int)255,null());
			}
			else{
				HX_STACK_LINE(352)
				tmp6 = Alpha;
			}
			HX_STACK_LINE(352)
			alpha = tmp6;
		}
		else{
			HX_STACK_LINE(354)
			bool tmp2 = (Max == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(354)
			if ((tmp2)){
				HX_STACK_LINE(356)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					int this1 = Min;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(356)
					int tmp4 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(356)
					tmp3 = (int(tmp4) & int((int)255));
				}
				HX_STACK_LINE(356)
				int tmp4 = this->_int(tmp3,(int)255,null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(356)
				red = tmp4;
				HX_STACK_LINE(357)
				bool tmp5 = GreyScale;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(357)
				int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				if ((tmp5)){
					HX_STACK_LINE(357)
					tmp6 = red;
				}
				else{
					HX_STACK_LINE(357)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(357)
					{
						HX_STACK_LINE(357)
						int this1 = Min;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(357)
						int tmp8 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(357)
						tmp7 = (int(tmp8) & int((int)255));
					}
					HX_STACK_LINE(357)
					tmp6 = this->_int(tmp7,(int)255,null());
				}
				HX_STACK_LINE(357)
				green = tmp6;
				HX_STACK_LINE(358)
				bool tmp7 = GreyScale;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(358)
				int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(358)
				if ((tmp7)){
					HX_STACK_LINE(358)
					tmp8 = red;
				}
				else{
					HX_STACK_LINE(358)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(358)
					{
						HX_STACK_LINE(358)
						int this1 = Min;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(358)
						tmp9 = (int(this1) & int((int)255));
					}
					HX_STACK_LINE(358)
					tmp8 = this->_int(tmp9,(int)255,null());
				}
				HX_STACK_LINE(358)
				blue = tmp8;
				HX_STACK_LINE(359)
				bool tmp9 = (Alpha == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(359)
				int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(359)
				if ((tmp9)){
					HX_STACK_LINE(359)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(359)
					{
						HX_STACK_LINE(359)
						int this1 = Min;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(359)
						int tmp12 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(359)
						tmp11 = (int(tmp12) & int((int)255));
					}
					HX_STACK_LINE(359)
					tmp10 = this->_int(tmp11,(int)255,null());
				}
				else{
					HX_STACK_LINE(359)
					tmp10 = Alpha;
				}
				HX_STACK_LINE(359)
				alpha = tmp10;
			}
			else{
				HX_STACK_LINE(361)
				bool tmp3 = (Min == null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(361)
				if ((tmp3)){
					HX_STACK_LINE(363)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						int this1 = Max;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(363)
						int tmp5 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(363)
						tmp4 = (int(tmp5) & int((int)255));
					}
					HX_STACK_LINE(363)
					int tmp5 = this->_int((int)0,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(363)
					red = tmp5;
					HX_STACK_LINE(364)
					bool tmp6 = GreyScale;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(364)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(364)
					if ((tmp6)){
						HX_STACK_LINE(364)
						tmp7 = red;
					}
					else{
						HX_STACK_LINE(364)
						int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(364)
						{
							HX_STACK_LINE(364)
							int this1 = Max;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(364)
							int tmp9 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(364)
							tmp8 = (int(tmp9) & int((int)255));
						}
						HX_STACK_LINE(364)
						tmp7 = this->_int((int)0,tmp8,null());
					}
					HX_STACK_LINE(364)
					green = tmp7;
					HX_STACK_LINE(365)
					bool tmp8 = GreyScale;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(365)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(365)
					if ((tmp8)){
						HX_STACK_LINE(365)
						tmp9 = red;
					}
					else{
						HX_STACK_LINE(365)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(365)
						{
							HX_STACK_LINE(365)
							int this1 = Max;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(365)
							tmp10 = (int(this1) & int((int)255));
						}
						HX_STACK_LINE(365)
						tmp9 = this->_int((int)0,tmp10,null());
					}
					HX_STACK_LINE(365)
					blue = tmp9;
					HX_STACK_LINE(366)
					bool tmp10 = (Alpha == null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(366)
					int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(366)
					if ((tmp10)){
						HX_STACK_LINE(366)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(366)
						{
							HX_STACK_LINE(366)
							int this1 = Max;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(366)
							int tmp13 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(366)
							tmp12 = (int(tmp13) & int((int)255));
						}
						HX_STACK_LINE(366)
						tmp11 = this->_int((int)0,tmp12,null());
					}
					else{
						HX_STACK_LINE(366)
						tmp11 = Alpha;
					}
					HX_STACK_LINE(366)
					alpha = tmp11;
				}
				else{
					HX_STACK_LINE(370)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						int this1 = Min;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(370)
						int tmp5 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(370)
						tmp4 = (int(tmp5) & int((int)255));
					}
					HX_STACK_LINE(370)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						int this1 = Max;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(370)
						int tmp6 = (int(this1) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(370)
						tmp5 = (int(tmp6) & int((int)255));
					}
					HX_STACK_LINE(370)
					int tmp6 = this->_int(tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(370)
					red = tmp6;
					HX_STACK_LINE(371)
					bool tmp7 = GreyScale;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(371)
					int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(371)
					if ((tmp7)){
						HX_STACK_LINE(371)
						tmp8 = red;
					}
					else{
						HX_STACK_LINE(371)
						int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(371)
							int this1 = Min;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(371)
							int tmp10 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(371)
							tmp9 = (int(tmp10) & int((int)255));
						}
						HX_STACK_LINE(371)
						int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(371)
						{
							HX_STACK_LINE(371)
							int this1 = Max;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(371)
							int tmp11 = (int(this1) >> int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(371)
							tmp10 = (int(tmp11) & int((int)255));
						}
						HX_STACK_LINE(371)
						tmp8 = this->_int(tmp9,tmp10,null());
					}
					HX_STACK_LINE(371)
					green = tmp8;
					HX_STACK_LINE(372)
					bool tmp9 = GreyScale;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(372)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(372)
					if ((tmp9)){
						HX_STACK_LINE(372)
						tmp10 = red;
					}
					else{
						HX_STACK_LINE(372)
						int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							int this1 = Min;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(372)
							tmp11 = (int(this1) & int((int)255));
						}
						HX_STACK_LINE(372)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(372)
						{
							HX_STACK_LINE(372)
							int this1 = Max;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(372)
							tmp12 = (int(this1) & int((int)255));
						}
						HX_STACK_LINE(372)
						tmp10 = this->_int(tmp11,tmp12,null());
					}
					HX_STACK_LINE(372)
					blue = tmp10;
					HX_STACK_LINE(373)
					bool tmp11 = (Alpha == null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(373)
					int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(373)
					if ((tmp11)){
						HX_STACK_LINE(373)
						int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							int this1 = Min;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(373)
							int tmp14 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(373)
							tmp13 = (int(tmp14) & int((int)255));
						}
						HX_STACK_LINE(373)
						int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							int this1 = Max;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(373)
							int tmp15 = (int(this1) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(373)
							tmp14 = (int(tmp15) & int((int)255));
						}
						HX_STACK_LINE(373)
						tmp12 = this->_int(tmp13,tmp14,null());
					}
					else{
						HX_STACK_LINE(373)
						tmp12 = Alpha;
					}
					HX_STACK_LINE(373)
					alpha = tmp12;
				}
			}
		}
		HX_STACK_LINE(376)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int tmp3 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			int color = tmp3;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(376)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(376)
					bool tmp5 = (red > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(376)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(376)
					if ((tmp5)){
						HX_STACK_LINE(376)
						tmp6 = (int)255;
					}
					else{
						HX_STACK_LINE(376)
						bool tmp7 = (red < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(376)
						if ((tmp7)){
							HX_STACK_LINE(376)
							tmp6 = (int)0;
						}
						else{
							HX_STACK_LINE(376)
							tmp6 = red;
						}
					}
					HX_STACK_LINE(376)
					int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(376)
					hx::OrEq(color,tmp7);
					HX_STACK_LINE(376)
					red;
				}
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(376)
					bool tmp5 = (green > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(376)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(376)
					if ((tmp5)){
						HX_STACK_LINE(376)
						tmp6 = (int)255;
					}
					else{
						HX_STACK_LINE(376)
						bool tmp7 = (green < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(376)
						if ((tmp7)){
							HX_STACK_LINE(376)
							tmp6 = (int)0;
						}
						else{
							HX_STACK_LINE(376)
							tmp6 = green;
						}
					}
					HX_STACK_LINE(376)
					int tmp7 = (int(tmp6) << int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(376)
					hx::OrEq(color,tmp7);
					HX_STACK_LINE(376)
					green;
				}
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(376)
					bool tmp5 = (blue > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(376)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(376)
					if ((tmp5)){
						HX_STACK_LINE(376)
						tmp6 = (int)255;
					}
					else{
						HX_STACK_LINE(376)
						bool tmp7 = (blue < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(376)
						if ((tmp7)){
							HX_STACK_LINE(376)
							tmp6 = (int)0;
						}
						else{
							HX_STACK_LINE(376)
							tmp6 = blue;
						}
					}
					HX_STACK_LINE(376)
					hx::OrEq(color,tmp6);
					HX_STACK_LINE(376)
					blue;
				}
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(376)
					bool tmp5 = (alpha > (int)255);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(376)
					int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(376)
					if ((tmp5)){
						HX_STACK_LINE(376)
						tmp6 = (int)255;
					}
					else{
						HX_STACK_LINE(376)
						bool tmp7 = (alpha < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(376)
						if ((tmp7)){
							HX_STACK_LINE(376)
							tmp6 = (int)0;
						}
						else{
							HX_STACK_LINE(376)
							tmp6 = alpha;
						}
					}
					HX_STACK_LINE(376)
					int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(376)
					hx::OrEq(color,tmp7);
					HX_STACK_LINE(376)
					alpha;
				}
				HX_STACK_LINE(376)
				tmp4 = color;
			}
			HX_STACK_LINE(376)
			tmp2 = tmp4;
		}
		HX_STACK_LINE(376)
		return tmp2;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRandom_obj,color,return )

Float FlxRandom_obj::generate( ){
	HX_STACK_FRAME("flixel.math.FlxRandom","generate",0xe00ed5a2,"flixel.math.FlxRandom.generate","flixel/math/FlxRandom.hx",386,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	Float tmp = this->internalSeed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(387)
	Float tmp1 = (tmp * ((Float)48271.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(387)
	Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(387)
	Float tmp3 = this->internalSeed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(387)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,generate,return )

int FlxRandom_obj::set_initialSeed( int NewSeed){
	HX_STACK_FRAME("flixel.math.FlxRandom","set_initialSeed",0x5f4b69eb,"flixel.math.FlxRandom.set_initialSeed","flixel/math/FlxRandom.hx",401,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSeed,"NewSeed")
	HX_STACK_LINE(402)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(402)
	{
		HX_STACK_LINE(402)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			bool tmp2 = (NewSeed < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(402)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(402)
			if ((tmp2)){
				HX_STACK_LINE(402)
				tmp3 = (int)1;
			}
			else{
				HX_STACK_LINE(402)
				tmp3 = NewSeed;
			}
			HX_STACK_LINE(402)
			Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(402)
			bool tmp4 = (lowerBound > (int)2147483646);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(402)
			if ((tmp4)){
				HX_STACK_LINE(402)
				tmp1 = (int)2147483646;
			}
			else{
				HX_STACK_LINE(402)
				tmp1 = lowerBound;
			}
		}
		HX_STACK_LINE(402)
		Float tmp2 = ((Float)(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(402)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		int NewSeed1 = tmp3;		HX_STACK_VAR(NewSeed1,"NewSeed1");
		HX_STACK_LINE(402)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(402)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(402)
			if ((tmp5)){
				HX_STACK_LINE(402)
				tmp6 = (NewSeed1 < (int)1);
			}
			else{
				HX_STACK_LINE(402)
				tmp6 = false;
			}
			HX_STACK_LINE(402)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(402)
			if ((tmp6)){
				HX_STACK_LINE(402)
				tmp7 = (int)1;
			}
			else{
				HX_STACK_LINE(402)
				tmp7 = NewSeed1;
			}
			HX_STACK_LINE(402)
			Float lowerBound = tmp7;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(402)
			bool tmp8 = true;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(402)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(402)
			if ((tmp8)){
				HX_STACK_LINE(402)
				tmp9 = (lowerBound > (int)2147483646);
			}
			else{
				HX_STACK_LINE(402)
				tmp9 = false;
			}
			HX_STACK_LINE(402)
			if ((tmp9)){
				HX_STACK_LINE(402)
				tmp4 = (int)2147483646;
			}
			else{
				HX_STACK_LINE(402)
				tmp4 = lowerBound;
			}
		}
		HX_STACK_LINE(402)
		Float tmp5 = ((Float)(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(402)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(402)
		Float tmp7 = this->internalSeed = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(402)
		tmp = ::Std_obj::_int(tmp7);
	}
	HX_STACK_LINE(402)
	int tmp1 = this->initialSeed = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_initialSeed,return )

int FlxRandom_obj::get_currentSeed( ){
	HX_STACK_FRAME("flixel.math.FlxRandom","get_currentSeed",0xbfecf714,"flixel.math.FlxRandom.get_currentSeed","flixel/math/FlxRandom.hx",409,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(410)
	Float tmp = this->internalSeed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(410)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(410)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRandom_obj,get_currentSeed,return )

int FlxRandom_obj::set_currentSeed( int NewSeed){
	HX_STACK_FRAME("flixel.math.FlxRandom","set_currentSeed",0xbbb87420,"flixel.math.FlxRandom.set_currentSeed","flixel/math/FlxRandom.hx",417,0x4fa37e1d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewSeed,"NewSeed")
	HX_STACK_LINE(418)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	{
		HX_STACK_LINE(418)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(418)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		if ((tmp1)){
			HX_STACK_LINE(418)
			tmp2 = (NewSeed < (int)1);
		}
		else{
			HX_STACK_LINE(418)
			tmp2 = false;
		}
		HX_STACK_LINE(418)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		if ((tmp2)){
			HX_STACK_LINE(418)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(418)
			tmp3 = NewSeed;
		}
		HX_STACK_LINE(418)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(418)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(418)
		if ((tmp4)){
			HX_STACK_LINE(418)
			tmp5 = (lowerBound > (int)2147483646);
		}
		else{
			HX_STACK_LINE(418)
			tmp5 = false;
		}
		HX_STACK_LINE(418)
		if ((tmp5)){
			HX_STACK_LINE(418)
			tmp = (int)2147483646;
		}
		else{
			HX_STACK_LINE(418)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(418)
	Float tmp1 = ((Float)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(418)
	Float tmp3 = this->internalSeed = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(418)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(418)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,set_currentSeed,return )

int FlxRandom_obj::rangeBound( int Value){
	HX_STACK_FRAME("flixel.math.FlxRandom","rangeBound",0x5cf038ee,"flixel.math.FlxRandom.rangeBound","flixel/math/FlxRandom.hx",425,0x4fa37e1d)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(426)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(426)
	{
		HX_STACK_LINE(426)
		bool tmp1 = true;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(426)
		if ((tmp1)){
			HX_STACK_LINE(426)
			tmp2 = (Value < (int)1);
		}
		else{
			HX_STACK_LINE(426)
			tmp2 = false;
		}
		HX_STACK_LINE(426)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(426)
		if ((tmp2)){
			HX_STACK_LINE(426)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(426)
			tmp3 = Value;
		}
		HX_STACK_LINE(426)
		Float lowerBound = tmp3;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(426)
		bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(426)
		if ((tmp4)){
			HX_STACK_LINE(426)
			tmp5 = (lowerBound > (int)2147483646);
		}
		else{
			HX_STACK_LINE(426)
			tmp5 = false;
		}
		HX_STACK_LINE(426)
		if ((tmp5)){
			HX_STACK_LINE(426)
			tmp = (int)2147483646;
		}
		else{
			HX_STACK_LINE(426)
			tmp = lowerBound;
		}
	}
	HX_STACK_LINE(426)
	Float tmp1 = ((Float)(tmp));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(426)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(426)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxRandom_obj,rangeBound,return )

Array< Float > FlxRandom_obj::_arrayFloatHelper;

Float FlxRandom_obj::MULTIPLIER;

int FlxRandom_obj::MODULUS;


FlxRandom_obj::FlxRandom_obj()
{
}

Dynamic FlxRandom_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { return _int_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bool") ) { return _bool_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"float") ) { return _float_dyn(); }
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_twoPI") ) { return _twoPI; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialSeed") ) { return initialSeed; }
		if (HX_FIELD_EQ(inName,"currentSeed") ) { if (inCallProp == hx::paccAlways) return get_currentSeed(); }
		if (HX_FIELD_EQ(inName,"floatNormal") ) { return floatNormal_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"weightedPick") ) { return weightedPick_dyn(); }
		if (HX_FIELD_EQ(inName,"internalSeed") ) { return internalSeed; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_floatNormalRho") ) { return _floatNormalRho; }
		if (HX_FIELD_EQ(inName,"set_initialSeed") ) { return set_initialSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentSeed") ) { return get_currentSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currentSeed") ) { return set_currentSeed_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"resetInitialSeed") ) { return resetInitialSeed_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_floatNormalRand1") ) { return _floatNormalRand1; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand2") ) { return _floatNormalRand2; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getObject_Array_Int") ) { return getObject_Array_Int_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hasFloatNormalSpare") ) { return _hasFloatNormalSpare; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getObject_Array_Array_Int") ) { return getObject_Array_Array_Int_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"getObject_objects_items_Item") ) { return getObject_objects_items_Item_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"getObject_flixel_group_FlxTypedGroup_T") ) { return getObject_flixel_group_FlxTypedGroup_T_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxRandom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"rangeBound") ) { outValue = rangeBound_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { outValue = _arrayFloatHelper; return true;  }
	}
	return false;
}

Dynamic FlxRandom_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_twoPI") ) { _twoPI=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialSeed") ) { if (inCallProp == hx::paccAlways) return set_initialSeed(inValue);initialSeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentSeed") ) { if (inCallProp == hx::paccAlways) return set_currentSeed(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"internalSeed") ) { internalSeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_floatNormalRho") ) { _floatNormalRho=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_floatNormalRand1") ) { _floatNormalRand1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_floatNormalRand2") ) { _floatNormalRand2=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hasFloatNormalSpare") ) { _hasFloatNormalSpare=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxRandom_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_arrayFloatHelper") ) { _arrayFloatHelper=ioValue.Cast< Array< Float > >(); return true; }
	}
	return false;
}

void FlxRandom_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("initialSeed","\x15","\x54","\x75","\x28"));
	outFields->push(HX_HCSTRING("currentSeed","\x4a","\x5e","\xe2","\x84"));
	outFields->push(HX_HCSTRING("_hasFloatNormalSpare","\x6f","\x30","\x00","\xbe"));
	outFields->push(HX_HCSTRING("_floatNormalRand1","\x68","\x21","\x2b","\xc7"));
	outFields->push(HX_HCSTRING("_floatNormalRand2","\x69","\x21","\x2b","\xc7"));
	outFields->push(HX_HCSTRING("_twoPI","\xc6","\x75","\x5f","\x15"));
	outFields->push(HX_HCSTRING("_floatNormalRho","\x75","\x83","\x0c","\x0d"));
	outFields->push(HX_HCSTRING("internalSeed","\x4e","\xfb","\xd0","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxRandom_obj,initialSeed),HX_HCSTRING("initialSeed","\x15","\x54","\x75","\x28")},
	{hx::fsBool,(int)offsetof(FlxRandom_obj,_hasFloatNormalSpare),HX_HCSTRING("_hasFloatNormalSpare","\x6f","\x30","\x00","\xbe")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRand1),HX_HCSTRING("_floatNormalRand1","\x68","\x21","\x2b","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRand2),HX_HCSTRING("_floatNormalRand2","\x69","\x21","\x2b","\xc7")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_twoPI),HX_HCSTRING("_twoPI","\xc6","\x75","\x5f","\x15")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,_floatNormalRho),HX_HCSTRING("_floatNormalRho","\x75","\x83","\x0c","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxRandom_obj,internalSeed),HX_HCSTRING("internalSeed","\x4e","\xfb","\xd0","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(void *) &FlxRandom_obj::_arrayFloatHelper,HX_HCSTRING("_arrayFloatHelper","\x70","\x91","\x03","\x2c")},
	{hx::fsFloat,(void *) &FlxRandom_obj::MULTIPLIER,HX_HCSTRING("MULTIPLIER","\x81","\x5b","\x22","\xf3")},
	{hx::fsInt,(void *) &FlxRandom_obj::MODULUS,HX_HCSTRING("MODULUS","\x17","\xc4","\xce","\x77")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getObject_Array_Array_Int","\xb9","\x26","\x10","\x89"),
	HX_HCSTRING("getObject_Array_Int","\xbf","\x7f","\xf2","\xad"),
	HX_HCSTRING("getObject_objects_items_Item","\x27","\x77","\xae","\x56"),
	HX_HCSTRING("getObject_flixel_group_FlxTypedGroup_T","\x63","\x56","\xb1","\x8d"),
	HX_HCSTRING("initialSeed","\x15","\x54","\x75","\x28"),
	HX_HCSTRING("resetInitialSeed","\x86","\xe6","\xeb","\x4a"),
	HX_HCSTRING("int","\xef","\x0c","\x50","\x00"),
	HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"),
	HX_HCSTRING("_hasFloatNormalSpare","\x6f","\x30","\x00","\xbe"),
	HX_HCSTRING("_floatNormalRand1","\x68","\x21","\x2b","\xc7"),
	HX_HCSTRING("_floatNormalRand2","\x69","\x21","\x2b","\xc7"),
	HX_HCSTRING("_twoPI","\xc6","\x75","\x5f","\x15"),
	HX_HCSTRING("_floatNormalRho","\x75","\x83","\x0c","\x0d"),
	HX_HCSTRING("floatNormal","\xe3","\xc8","\x8a","\xd7"),
	HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("weightedPick","\x58","\x64","\xef","\x64"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	HX_HCSTRING("internalSeed","\x4e","\xfb","\xd0","\x37"),
	HX_HCSTRING("set_initialSeed","\xb8","\x88","\x22","\xe5"),
	HX_HCSTRING("get_currentSeed","\xe1","\x15","\xc4","\x45"),
	HX_HCSTRING("set_currentSeed","\xed","\x92","\x8f","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_MARK_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::_arrayFloatHelper,"_arrayFloatHelper");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MULTIPLIER,"MULTIPLIER");
	HX_VISIT_MEMBER_NAME(FlxRandom_obj::MODULUS,"MODULUS");
};

#endif

hx::Class FlxRandom_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("rangeBound","\x41","\x8d","\xa7","\x89"),
	HX_HCSTRING("_arrayFloatHelper","\x70","\x91","\x03","\x2c"),
	HX_HCSTRING("MULTIPLIER","\x81","\x5b","\x22","\xf3"),
	HX_HCSTRING("MODULUS","\x17","\xc4","\xce","\x77"),
	::String(null()) };

void FlxRandom_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.math.FlxRandom","\xa1","\x6b","\x64","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxRandom_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxRandom_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxRandom_obj >;
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

void FlxRandom_obj::__boot()
{
	_arrayFloatHelper= null();
	MULTIPLIER= ((Float)48271.0);
	MODULUS= (int)2147483647;
}

} // end namespace flixel
} // end namespace math
